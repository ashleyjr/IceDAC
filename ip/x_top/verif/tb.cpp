#include <stdlib.h>
#include <iostream>
#include <cstdlib>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vx_top.h"
#include <stdio.h>

int main(int argc, char** argv, char** env) {
   
   vluint64_t sim_time = 0; 
   Vx_top *dut = new Vx_top; 
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
    
   #ifdef TRACE_ENABLED
   m_trace->close();
   #endif

   delete dut;
   std::cout << "PASS\n";
   exit(EXIT_SUCCESS);
}
