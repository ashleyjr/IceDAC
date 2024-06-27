// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vx_ctrl.h for the primary calling header

#ifndef VERILATED_VX_CTRL___024ROOT_H_
#define VERILATED_VX_CTRL___024ROOT_H_  // guard

#include "verilated.h"


class Vx_ctrl__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vx_ctrl___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(i_clk,0,0);
    VL_IN8(i_nrst,0,0);
    VL_IN8(i_cmd_valid,0,0);
    VL_IN8(i_cmd,7,0);
    VL_OUT8(o_rsp_valid,0,0);
    VL_OUT8(o_rsp,7,0);
    VL_OUT8(o_wdata_valid,0,0);
    VL_OUT8(o_wdata,5,0);
    VL_IN8(i_rdata,5,0);
    CData/*0:0*/ x_ctrl__DOT__cmd_valid_q;
    CData/*7:0*/ x_ctrl__DOT__cmd_q;
    CData/*5:0*/ x_ctrl__DOT__cmd_data_d;
    CData/*5:0*/ x_ctrl__DOT__cmd_data_q;
    CData/*0:0*/ x_ctrl__DOT__cmd_write_valid_q;
    CData/*0:0*/ x_ctrl__DOT__p1_cmd_read_valid;
    CData/*0:0*/ x_ctrl__DOT__p2_cmd_read_valid;
    CData/*0:0*/ x_ctrl__DOT__play_d;
    CData/*0:0*/ x_ctrl__DOT__play_q;
    CData/*0:0*/ x_ctrl__DOT__last_play_q;
    CData/*0:0*/ x_ctrl__DOT__advance_top;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__i_clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__i_nrst__0;
    CData/*0:0*/ __VactContinue;
    VL_OUT16(o_addr,10,0);
    SData/*10:0*/ x_ctrl__DOT__cmd_addr_d;
    SData/*10:0*/ x_ctrl__DOT__cmd_addr_q;
    SData/*15:0*/ x_ctrl__DOT__advance_top_d;
    SData/*15:0*/ x_ctrl__DOT__advance_top_q;
    SData/*10:0*/ x_ctrl__DOT__addr_cnt_top_d;
    SData/*10:0*/ x_ctrl__DOT__addr_cnt_top_q;
    SData/*10:0*/ x_ctrl__DOT__addr_cnt_d;
    SData/*10:0*/ x_ctrl__DOT__addr_cnt_q;
    SData/*15:0*/ x_ctrl__DOT__advance_d;
    SData/*15:0*/ x_ctrl__DOT__advance_q;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vx_ctrl__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vx_ctrl___024root(Vx_ctrl__Syms* symsp, const char* v__name);
    ~Vx_ctrl___024root();
    VL_UNCOPYABLE(Vx_ctrl___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
