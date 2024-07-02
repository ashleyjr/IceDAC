#include <stdlib.h>
#include <iostream>
#include <cstdlib>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vx_top.h"
#include "../../rtl-uart/verif/lib/include/uart_driver.h"
#include "../../rtl-uart/verif/lib/include/uart_sink.h"
#include <stdio.h>
#include <list>
#include <format> 

#define TIMEOUT 1000000000
#define MEM_DEPTH 2048

static const uint16_t hot_lines[] = {
   0,1,2,77,127,128,1023,2047,2047
};

vluint64_t sim_time = 0; 
Vx_top *dut = new Vx_top; 
UartDriver drv(12000000, 9600, 1);
UartSink sink(12000000, 9600);
std::list<uint8_t> cmds; 
std::list<uint8_t> rsps; 
uint8_t mem[MEM_DEPTH];


#ifdef TRACE_ENABLED
VerilatedVcdC *m_trace = new VerilatedVcdC; 
#endif 

void issue_cmd(uint8_t code, uint8_t data){
   uint8_t cmd;
   cmd = ((code & 0xF) << 4) | (data & 0xF); 
   cmds.push_back(cmd);
   rsps.push_back(0xA5);
}

void write_mem(uint16_t addr, uint8_t data){
   issue_cmd(0x0, addr >> 8);
   issue_cmd(0x0, addr >> 4);
   issue_cmd(0x0, addr >> 0);
   issue_cmd(0x1, data >> 4);
   issue_cmd(0x1, data >> 0);
   issue_cmd(0x2, 0);
   mem[addr] = data; 
   std::format("mem[{}] <- {}\n", addr, data); 
}

void read_mem(uint16_t addr){
   issue_cmd(0x0, addr >> 8);
   issue_cmd(0x0, addr >> 4);
   issue_cmd(0x0, addr >> 0); 
   cmds.push_back(0x30);
   rsps.push_back(mem[addr]);
}
void write_addr_top(uint16_t addr){
   issue_cmd(0x6, addr >> 8);
   issue_cmd(0x6, addr >> 4);
   issue_cmd(0x6, addr >> 0);
}

void write_advance_rate_top(uint16_t rate){
   issue_cmd(0x5, rate >> 8);
   issue_cmd(0x5, rate >> 4);
   issue_cmd(0x5, rate >> 0);
}

void toggle_play(void){
   issue_cmd(0x4, 0);
}

void rand_mem_test(uint32_t x){
   uint16_t addr;
   uint8_t data;
   uint8_t wr_n_rd;;
   bool mem_hit[MEM_DEPTH]; 
   for(uint32_t i=0;i<x;i++){
      addr = rand() % (sizeof(hot_lines) / sizeof(uint16_t)); 
      data = rand() % 64;
      if(mem_hit[addr]){
         wr_n_rd = rand() % 2;
      }else{
         wr_n_rd = 1;
      }
      if(wr_n_rd){
         write_mem(addr,data);
      }else{
         read_mem(addr);
      }
   }
}

int main(int argc, char** argv, char** env) { 
   int outstanding;

   Verilated::traceEverOn(true);

   #ifdef TRACE_ENABLED
   dut->trace(m_trace, 5);
   m_trace->open("waveform.vcd");
   #endif 

   write_mem(0, 0x0A);
   read_mem(0);

   rand_mem_test(100);
   
   
   //write_addr_top(0xF);
   //write_advance_rate_top(0xF);
   //toggle_play();

   dut->i_clk   = 0;

    
   for (int32_t i=0;i<TIMEOUT;i++){
     
      // Queue up more cmd/rsp pairs
      if(!cmds.empty() && (sink.left() == 0)){
         drv.send(cmds.front());
         std::cout << "TX: 0x" << std::hex << unsigned(cmds.front()) << "\n";
         cmds.pop_front();         
         sink.recieve(rsps.front()); 
         outstanding = 1;
      }

      if(rsps.empty()){
         #ifdef TRACE_ENABLED  
         m_trace->close();
         #endif
         delete dut;
         std::cout << "PASS\n";
         exit(EXIT_SUCCESS);
         break;
      }

      // Falling Edge
      dut->i_clk = 0;  
      dut->i_rx = drv.advance();
      
      // Tick
      dut->eval();
      #ifdef TRACE_ENABLED
      m_trace->dump(sim_time); 
      #endif
      sim_time++;

      // Recieve packets
      
      if(!sink.advance(dut->o_tx)){      
         #ifdef TRACE_ENABLED  
         m_trace->close();
         #endif
         delete dut;
         std::cout << "FAIL\n";
         exit(EXIT_FAILURE);
      }
      
      if((sink.left() < outstanding)){
         std::cout << "RX: 0x" << std::hex << unsigned(rsps.front()) << "\n";
         rsps.pop_front();        
         outstanding = 0;
      }

      // Rising Edge
      dut->i_clk = 1;
      
      // Tick
      dut->eval();
      #ifdef TRACE_ENABLED
      m_trace->dump(sim_time); 
      #endif
      sim_time++;
   }

   #ifdef TRACE_ENABLED
   m_trace->close();
   #endif

   delete dut;
   std::cout << "FAIL (Timeout)\n";
   exit(EXIT_FAILURE);
}
