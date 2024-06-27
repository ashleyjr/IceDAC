#include <stdlib.h>
#include <iostream>
#include <cstdlib>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vx_mem.h"
#include <stdio.h>

int main(int argc, char** argv, char** env) {
   
   vluint64_t sim_time = 0; 
   Vx_mem *dut = new Vx_mem; 
   Verilated::traceEverOn(true);
   
   #ifdef TRACE_ENABLED
   VerilatedVcdC *m_trace = new VerilatedVcdC; 
   #endif 

   #ifdef TRACE_ENABLED
   dut->trace(m_trace, 5);
   m_trace->open("waveform.vcd");
   #endif 

   dut->i_clk   = 0;
   dut->i_nrst  = 1; 
   dut->i_addr  = 0;
   dut->i_we    = 0;
   dut->i_wdata = 0;
   
   // Tick
   dut->eval();
   #ifdef TRACE_ENABLED
   m_trace->dump(sim_time); 
   #endif
   sim_time++;  
   
   dut->i_nrst = 0; 

   for(uint32_t i=0;i<256;i++){
  
      // Tick
      dut->eval();
      #ifdef TRACE_ENABLED
      m_trace->dump(sim_time); 
      #endif
      sim_time++;
      
      // Rising Edge
      dut->i_clk = 1;
      dut->i_nrst = 1;

      // Tick
      dut->eval();
      #ifdef TRACE_ENABLED
      m_trace->dump(sim_time); 
      #endif
      sim_time++;
       
      // Falling Edge
      dut->i_clk = 0;
     
      // Drive in data
      switch(i){
         case 10:    dut->i_addr  = 77;
                     dut->i_wdata = 3;
                     dut->i_we    = 1;
                     break;
         case 11:    dut->i_we    = 0;
                     break;
         case 12:    dut->i_addr  = 78;
                     dut->i_wdata = 2;
                     break;
         case 13:    dut->i_addr  = 77;
                     dut->i_wdata = 1;
                     break;

      }
      
  
   }
    
   #ifdef TRACE_ENABLED
   m_trace->close();
   #endif

   delete dut;
   std::cout << "PASS\n";
   exit(EXIT_SUCCESS);
}
