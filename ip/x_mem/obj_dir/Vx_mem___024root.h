// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vx_mem.h for the primary calling header

#ifndef VERILATED_VX_MEM___024ROOT_H_
#define VERILATED_VX_MEM___024ROOT_H_  // guard

#include "verilated.h"
class Vx_mem_x_mem_2p_2048x2;


class Vx_mem__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vx_mem___024root final : public VerilatedModule {
  public:
    // CELLS
    Vx_mem_x_mem_2p_2048x2* __PVT__x_mem__DOT__genblk1__BRA__0__KET____DOT__u_mem_2p_2048x2;
    Vx_mem_x_mem_2p_2048x2* __PVT__x_mem__DOT__genblk1__BRA__1__KET____DOT__u_mem_2p_2048x2;
    Vx_mem_x_mem_2p_2048x2* __PVT__x_mem__DOT__genblk1__BRA__2__KET____DOT__u_mem_2p_2048x2;

    // DESIGN SPECIFIC STATE
    VL_IN8(i_nrst,0,0);
    VL_IN8(i_clk,0,0);
    VL_IN8(i_we,0,0);
    VL_IN8(i_wdata,7,0);
    VL_OUT8(o_rdata,7,0);
    CData/*2:0*/ x_mem__DOT__we_q;
    CData/*1:0*/ __VdlyVal__x_mem__DOT__wdata_q__v0;
    CData/*1:0*/ __VdlyVal__x_mem__DOT__wdata_q__v1;
    CData/*1:0*/ __VdlyVal__x_mem__DOT__wdata_q__v2;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__i_clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__i_nrst__0;
    CData/*0:0*/ __VactContinue;
    VL_IN16(i_addr,10,0);
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<SData/*10:0*/, 3> x_mem__DOT__addr_q;
    VlUnpacked<CData/*1:0*/, 3> x_mem__DOT__rdata_d;
    VlUnpacked<CData/*1:0*/, 3> x_mem__DOT__wdata_q;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vx_mem__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vx_mem___024root(Vx_mem__Syms* symsp, const char* v__name);
    ~Vx_mem___024root();
    VL_UNCOPYABLE(Vx_mem___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
