// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vx_bin_to_therm.h for the primary calling header

#ifndef VERILATED_VX_BIN_TO_THERM___024ROOT_H_
#define VERILATED_VX_BIN_TO_THERM___024ROOT_H_  // guard

#include "verilated.h"

class Vx_bin_to_therm__Syms;
VL_MODULE(Vx_bin_to_therm___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(i_clk,0,0);
    VL_IN8(i_nrst,0,0);
    VL_IN8(i_bin,5,0);
    CData/*0:0*/ __Vclklast__TOP__i_clk;
    CData/*0:0*/ __Vclklast__TOP__i_nrst;
    VlWide<3>/*64:0*/ x_bin_to_therm__DOT__shift_q;
    VlWide<3>/*64:0*/ x_bin_to_therm__DOT__therm_q;
    VL_OUT64(o_therm,63,0);
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vx_bin_to_therm__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vx_bin_to_therm___024root(Vx_bin_to_therm__Syms* symsp, const char* name);
    ~Vx_bin_to_therm___024root();
    VL_UNCOPYABLE(Vx_bin_to_therm___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
