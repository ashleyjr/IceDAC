#include <stdlib.h>
#include <iostream>
#include <cstdlib>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vx_bin_to_therm.h"
#include <stdio.h>

int main(int argc, char** argv, char** env) {
   
   vluint64_t sim_time = 0; 
   Vx_bin_to_therm *dut = new Vx_bin_to_therm; 
   Verilated::traceEverOn(true);
   
   #ifdef TRACE_ENABLED
   VerilatedVcdC *m_trace = new VerilatedVcdC; 
   #endif 

   #ifdef TRACE_ENABLED
   dut->trace(m_trace, 5);
   m_trace->open("waveform.vcd");
   #endif 

   dut->i_clk  = 0;
   dut->i_nrst = 0;
   dut->i_bin  = 0;
   
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
      
      if(i < 128){
         dut->i_bin = i;
      }else{
         dut->i_bin = 256-i-1;
      }
  
   }
    
   #ifdef TRACE_ENABLED
   m_trace->close();
   #endif

   delete dut;
   std::cout << "PASS\n";
   exit(EXIT_SUCCESS);
}
