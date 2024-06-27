// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vx_mem.h for the primary calling header

#include "Vx_mem__pch.h"
#include "Vx_mem___024root.h"

VL_ATTR_COLD void Vx_mem___024root___eval_static(Vx_mem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_mem___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vx_mem___024root___eval_initial(Vx_mem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_mem___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__i_clk__0 = vlSelf->i_clk;
    vlSelf->__Vtrigprevexpr___TOP__i_nrst__0 = vlSelf->i_nrst;
}

VL_ATTR_COLD void Vx_mem___024root___eval_final(Vx_mem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_mem___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vx_mem___024root___dump_triggers__stl(Vx_mem___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vx_mem___024root___eval_phase__stl(Vx_mem___024root* vlSelf);

VL_ATTR_COLD void Vx_mem___024root___eval_settle(Vx_mem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_mem___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vx_mem___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/ashleyjr/IceDAC/ip/x_mem/rtl/x_mem.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vx_mem___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vx_mem___024root___dump_triggers__stl(Vx_mem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_mem___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vx_mem___024root___eval_triggers__stl(Vx_mem___024root* vlSelf);
VL_ATTR_COLD void Vx_mem___024root___eval_stl(Vx_mem___024root* vlSelf);

VL_ATTR_COLD bool Vx_mem___024root___eval_phase__stl(Vx_mem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_mem___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vx_mem___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vx_mem___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vx_mem___024root___dump_triggers__act(Vx_mem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_mem___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge i_clk or negedge i_nrst)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vx_mem___024root___dump_triggers__nba(Vx_mem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_mem___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge i_clk or negedge i_nrst)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vx_mem___024root___ctor_var_reset(Vx_mem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_mem___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->i_nrst = VL_RAND_RESET_I(1);
    vlSelf->i_clk = VL_RAND_RESET_I(1);
    vlSelf->i_addr = VL_RAND_RESET_I(11);
    vlSelf->i_we = VL_RAND_RESET_I(1);
    vlSelf->i_wdata = VL_RAND_RESET_I(8);
    vlSelf->o_rdata = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->x_mem__DOT__addr_q[__Vi0] = VL_RAND_RESET_I(11);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->x_mem__DOT__rdata_d[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->x_mem__DOT__we_q = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->x_mem__DOT__wdata_q[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->__VdlyVal__x_mem__DOT__wdata_q__v0 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__x_mem__DOT__wdata_q__v1 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__x_mem__DOT__wdata_q__v2 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__i_clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__i_nrst__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
