#include <stdlib.h>
#include <iostream>
#include <cstdlib>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vx_top.h"
#include "../../rtl-uart/verif/lib/include/uart_driver.h"
#include <stdio.h>

vluint64_t sim_time = 0; 
Vx_top *dut = new Vx_top; 
UartDriver drv(1200000, 9600, 1);
#ifdef TRACE_ENABLED
VerilatedVcdC *m_trace = new VerilatedVcdC; 
#endif 


void tick(void) {
   dut->eval();
   
   #ifdef TRACE_ENABLED
   m_trace->dump(sim_time); 
   #endif
   sim_time++; 

   // Rising Edge
   dut->i_clk = 1;
     
   dut->eval();
   #ifdef TRACE_ENABLED
   m_trace->dump(sim_time); 
   #endif
   sim_time++; 

   // Falling Edge
   dut->i_clk = 0; 
}

void issue_cmd(uint8_t code, uint8_t data){
   uint8_t cmd;
   cmd = ((code & 0xF) << 4) | (data & 0xF); 
   drv.send(cmd); 
}

void write_mem(uint16_t addr, uint8_t data){
   issue_cmd(0x0, addr >> 8);
   issue_cmd(0x0, addr >> 4);
   issue_cmd(0x0, addr >> 0);
   issue_cmd(0x1, data >> 4);
   issue_cmd(0x1, data >> 0);
   issue_cmd(0x2, 0);
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


int main(int argc, char** argv, char** env) { 
   Verilated::traceEverOn(true);

   #ifdef TRACE_ENABLED
   dut->trace(m_trace, 5);
   m_trace->open("waveform.vcd");
   #endif 

   // List of sends
   for(uint32_t i=0;i<0xF;i++){
      write_mem(i,i);
   }
   write_addr_top(0xF);
   write_advance_rate_top(0xF);
   toggle_play();

   dut->i_clk   = 0;
   dut->i_nrst  = 1; 
   tick();
   dut->i_nrst  = 0; 
   tick();
   dut->i_nrst  = 1; 

   while(drv.left() > 0){
      dut->i_rx = drv.advance();
      tick();
   }
   for(uint32_t i=0;i<1000;i++){
      tick();
   }

   #ifdef TRACE_ENABLED
   m_trace->close();
   #endif

   delete dut;
   std::cout << "PASS\n";
   exit(EXIT_SUCCESS);
}
