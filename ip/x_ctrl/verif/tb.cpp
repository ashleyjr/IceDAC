#include <stdlib.h>
#include <iostream>
#include <cstdlib>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vx_ctrl.h"
#include <stdio.h>

vluint64_t sim_time; 
Vx_ctrl *dut = new Vx_ctrl; 
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
   dut->i_cmd_valid = 0x01;
   dut->i_cmd       = ((code & 0xF) << 4) | (data & 0xF); 
   tick();
   dut->i_cmd_valid = 0x00;
   for(uint8_t i=0;i<27;i++){
      tick();
   }
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

int main(int argc, char** argv, char** env) { 
   sim_time = 0;
   Verilated::traceEverOn(true);
   
   #ifdef TRACE_ENABLED
   dut->trace(m_trace, 5);
   m_trace->open("waveform.vcd");
   #endif 

   dut->i_clk        = 0;
   dut->i_nrst       = 1; 
   dut->i_cmd_valid  = 0;
   dut->i_cmd        = 0;
   dut->i_rdata      = 0; 
   tick();
   dut->i_nrst       = 0; 
   tick();
   dut->i_nrst       = 1; 
  
   // Write addresses to memory as data
   for(uint16_t i=0;i<2048;i++){
      write_mem(i,i);
   }

   write_addr_top(0xF);
   write_advance_rate_top(0x7);


   // Start playback
   issue_cmd(4,0);
   for(uint16_t i=0;i<4096;i++){
      tick();
   }

   // Stop playback
   issue_cmd(4,0);
   for(uint16_t i=0;i<4096;i++){
      tick();
   }
 
   // Start playback
   issue_cmd(4,0);
   for(uint16_t i=0;i<4096;i++){
      tick();
   }   

   #ifdef TRACE_ENABLED
   m_trace->close();
   #endif

   delete dut;
   std::cout << "PASS\n";
   exit(EXIT_SUCCESS);
}
