// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vx_ctrl.h for the primary calling header

#include "Vx_ctrl__pch.h"
#include "Vx_ctrl___024root.h"

VL_ATTR_COLD void Vx_ctrl___024root___eval_static(Vx_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_ctrl___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vx_ctrl___024root___eval_initial(Vx_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_ctrl___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__i_clk__0 = vlSelf->i_clk;
    vlSelf->__Vtrigprevexpr___TOP__i_nrst__0 = vlSelf->i_nrst;
}

VL_ATTR_COLD void Vx_ctrl___024root___eval_final(Vx_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_ctrl___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vx_ctrl___024root___dump_triggers__stl(Vx_ctrl___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vx_ctrl___024root___eval_phase__stl(Vx_ctrl___024root* vlSelf);

VL_ATTR_COLD void Vx_ctrl___024root___eval_settle(Vx_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_ctrl___024root___eval_settle\n"); );
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
            Vx_ctrl___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/ashleyjr/IceDAC/ip/x_ctrl/rtl/x_ctrl.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vx_ctrl___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vx_ctrl___024root___dump_triggers__stl(Vx_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_ctrl___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vx_ctrl___024root___stl_sequent__TOP__0(Vx_ctrl___024root* vlSelf);

VL_ATTR_COLD void Vx_ctrl___024root___eval_stl(Vx_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_ctrl___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vx_ctrl___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vx_ctrl___024root___stl_sequent__TOP__0(Vx_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_ctrl___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->o_wdata = vlSelf->x_ctrl__DOT__cmd_data_q;
    vlSelf->x_ctrl__DOT__play_d = (1U & (~ (IData)(vlSelf->x_ctrl__DOT__play_q)));
    vlSelf->o_wdata_valid = vlSelf->x_ctrl__DOT__cmd_write_valid_q;
    vlSelf->x_ctrl__DOT__cmd_addr_d = ((0x7f0U & ((IData)(vlSelf->x_ctrl__DOT__cmd_addr_q) 
                                                  << 4U)) 
                                       | (0xfU & (IData)(vlSelf->x_ctrl__DOT__cmd_q)));
    vlSelf->x_ctrl__DOT__cmd_data_d = ((0x30U & ((IData)(vlSelf->x_ctrl__DOT__cmd_data_q) 
                                                 << 4U)) 
                                       | (0xfU & (IData)(vlSelf->x_ctrl__DOT__cmd_q)));
    vlSelf->x_ctrl__DOT__advance_top_d = ((0xfff0U 
                                           & ((IData)(vlSelf->x_ctrl__DOT__advance_top_q) 
                                              << 4U)) 
                                          | (0xfU & (IData)(vlSelf->x_ctrl__DOT__cmd_q)));
    vlSelf->x_ctrl__DOT__addr_cnt_top_d = ((0x7f0U 
                                            & ((IData)(vlSelf->x_ctrl__DOT__addr_cnt_top_q) 
                                               << 4U)) 
                                           | (0xfU 
                                              & (IData)(vlSelf->x_ctrl__DOT__cmd_q)));
    vlSelf->o_addr = ((IData)(vlSelf->x_ctrl__DOT__play_q)
                       ? (IData)(vlSelf->x_ctrl__DOT__addr_cnt_q)
                       : (IData)(vlSelf->x_ctrl__DOT__cmd_addr_q));
    vlSelf->x_ctrl__DOT__addr_cnt_d = ((1U & ((~ (IData)(vlSelf->x_ctrl__DOT__play_q)) 
                                              | ((IData)(vlSelf->x_ctrl__DOT__addr_cnt_q) 
                                                 == (IData)(vlSelf->x_ctrl__DOT__addr_cnt_top_q))))
                                        ? 0U : (0x7ffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->x_ctrl__DOT__addr_cnt_q))));
    vlSelf->x_ctrl__DOT__advance_top = ((IData)(vlSelf->x_ctrl__DOT__advance_q) 
                                        == (IData)(vlSelf->x_ctrl__DOT__advance_top_q));
    vlSelf->x_ctrl__DOT__advance_d = ((1U & ((~ (IData)(vlSelf->x_ctrl__DOT__play_q)) 
                                             | (IData)(vlSelf->x_ctrl__DOT__advance_top)))
                                       ? 0U : (0xffffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->x_ctrl__DOT__advance_q))));
}

VL_ATTR_COLD void Vx_ctrl___024root___eval_triggers__stl(Vx_ctrl___024root* vlSelf);

VL_ATTR_COLD bool Vx_ctrl___024root___eval_phase__stl(Vx_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_ctrl___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vx_ctrl___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vx_ctrl___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vx_ctrl___024root___dump_triggers__act(Vx_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_ctrl___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void Vx_ctrl___024root___dump_triggers__nba(Vx_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_ctrl___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge i_clk or negedge i_nrst)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vx_ctrl___024root___ctor_var_reset(Vx_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_ctrl___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->i_clk = VL_RAND_RESET_I(1);
    vlSelf->i_nrst = VL_RAND_RESET_I(1);
    vlSelf->i_cmd_valid = VL_RAND_RESET_I(1);
    vlSelf->i_cmd = VL_RAND_RESET_I(8);
    vlSelf->o_rsp_valid = VL_RAND_RESET_I(1);
    vlSelf->o_rsp = VL_RAND_RESET_I(8);
    vlSelf->o_addr = VL_RAND_RESET_I(11);
    vlSelf->o_wdata_valid = VL_RAND_RESET_I(1);
    vlSelf->o_wdata = VL_RAND_RESET_I(6);
    vlSelf->i_rdata = VL_RAND_RESET_I(6);
    vlSelf->x_ctrl__DOT__cmd_valid_q = VL_RAND_RESET_I(1);
    vlSelf->x_ctrl__DOT__cmd_q = VL_RAND_RESET_I(8);
    vlSelf->x_ctrl__DOT__cmd_addr_d = VL_RAND_RESET_I(11);
    vlSelf->x_ctrl__DOT__cmd_addr_q = VL_RAND_RESET_I(11);
    vlSelf->x_ctrl__DOT__cmd_data_d = VL_RAND_RESET_I(6);
    vlSelf->x_ctrl__DOT__cmd_data_q = VL_RAND_RESET_I(6);
    vlSelf->x_ctrl__DOT__cmd_write_valid_q = VL_RAND_RESET_I(1);
    vlSelf->x_ctrl__DOT__p1_cmd_read_valid = VL_RAND_RESET_I(1);
    vlSelf->x_ctrl__DOT__p2_cmd_read_valid = VL_RAND_RESET_I(1);
    vlSelf->x_ctrl__DOT__play_d = VL_RAND_RESET_I(1);
    vlSelf->x_ctrl__DOT__play_q = VL_RAND_RESET_I(1);
    vlSelf->x_ctrl__DOT__last_play_q = VL_RAND_RESET_I(1);
    vlSelf->x_ctrl__DOT__advance_top_d = VL_RAND_RESET_I(16);
    vlSelf->x_ctrl__DOT__advance_top_q = VL_RAND_RESET_I(16);
    vlSelf->x_ctrl__DOT__addr_cnt_top_d = VL_RAND_RESET_I(11);
    vlSelf->x_ctrl__DOT__addr_cnt_top_q = VL_RAND_RESET_I(11);
    vlSelf->x_ctrl__DOT__addr_cnt_d = VL_RAND_RESET_I(11);
    vlSelf->x_ctrl__DOT__addr_cnt_q = VL_RAND_RESET_I(11);
    vlSelf->x_ctrl__DOT__advance_d = VL_RAND_RESET_I(16);
    vlSelf->x_ctrl__DOT__advance_q = VL_RAND_RESET_I(16);
    vlSelf->x_ctrl__DOT__advance_top = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__i_clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__i_nrst__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
