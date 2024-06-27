// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vx_ctrl.h for the primary calling header

#include "Vx_ctrl__pch.h"
#include "Vx_ctrl___024root.h"

void Vx_ctrl___024root___eval_act(Vx_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_ctrl___024root___eval_act\n"); );
}

void Vx_ctrl___024root___nba_sequent__TOP__0(Vx_ctrl___024root* vlSelf);

void Vx_ctrl___024root___eval_nba(Vx_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_ctrl___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vx_ctrl___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vx_ctrl___024root___nba_sequent__TOP__0(Vx_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_ctrl___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->i_nrst) {
        vlSelf->x_ctrl__DOT__p2_cmd_read_valid = vlSelf->x_ctrl__DOT__p1_cmd_read_valid;
        vlSelf->x_ctrl__DOT__cmd_write_valid_q = (IData)(
                                                         (((0x20U 
                                                            == 
                                                            (0xf0U 
                                                             & (IData)(vlSelf->x_ctrl__DOT__cmd_q))) 
                                                           & (~ (IData)(vlSelf->x_ctrl__DOT__play_q))) 
                                                          & (IData)(vlSelf->x_ctrl__DOT__cmd_valid_q)));
        if ((IData)(((0x10U == (0xf0U & (IData)(vlSelf->x_ctrl__DOT__cmd_q))) 
                     & (IData)(vlSelf->x_ctrl__DOT__cmd_valid_q)))) {
            vlSelf->x_ctrl__DOT__cmd_data_q = vlSelf->x_ctrl__DOT__cmd_data_d;
        }
        vlSelf->o_wdata = vlSelf->x_ctrl__DOT__cmd_data_q;
        vlSelf->x_ctrl__DOT__p1_cmd_read_valid = (IData)(
                                                         ((0x30U 
                                                           == 
                                                           (0xf0U 
                                                            & (IData)(vlSelf->x_ctrl__DOT__cmd_q))) 
                                                          & (IData)(vlSelf->x_ctrl__DOT__cmd_valid_q)));
        vlSelf->o_wdata_valid = vlSelf->x_ctrl__DOT__cmd_write_valid_q;
        if ((IData)(((0x60U == (0xf0U & (IData)(vlSelf->x_ctrl__DOT__cmd_q))) 
                     & (IData)(vlSelf->x_ctrl__DOT__cmd_valid_q)))) {
            vlSelf->x_ctrl__DOT__addr_cnt_top_q = vlSelf->x_ctrl__DOT__addr_cnt_top_d;
        }
        if ((IData)(((0U == (0xf0U & (IData)(vlSelf->x_ctrl__DOT__cmd_q))) 
                     & (IData)(vlSelf->x_ctrl__DOT__cmd_valid_q)))) {
            vlSelf->x_ctrl__DOT__cmd_addr_q = vlSelf->x_ctrl__DOT__cmd_addr_d;
        }
        if ((IData)(((0x50U == (0xf0U & (IData)(vlSelf->x_ctrl__DOT__cmd_q))) 
                     & (IData)(vlSelf->x_ctrl__DOT__cmd_valid_q)))) {
            vlSelf->x_ctrl__DOT__advance_top_q = vlSelf->x_ctrl__DOT__advance_top_d;
        }
        if (((IData)(vlSelf->x_ctrl__DOT__last_play_q) 
             | (IData)(vlSelf->x_ctrl__DOT__play_q))) {
            vlSelf->x_ctrl__DOT__advance_q = vlSelf->x_ctrl__DOT__advance_d;
        }
        if (((IData)(vlSelf->x_ctrl__DOT__play_q) ? (IData)(vlSelf->x_ctrl__DOT__advance_top)
              : (IData)(vlSelf->x_ctrl__DOT__last_play_q))) {
            vlSelf->x_ctrl__DOT__addr_cnt_q = vlSelf->x_ctrl__DOT__addr_cnt_d;
        }
    } else {
        vlSelf->x_ctrl__DOT__p2_cmd_read_valid = 0U;
        vlSelf->x_ctrl__DOT__cmd_write_valid_q = 0U;
        vlSelf->x_ctrl__DOT__cmd_data_q = 0U;
        vlSelf->o_wdata = vlSelf->x_ctrl__DOT__cmd_data_q;
        vlSelf->x_ctrl__DOT__p1_cmd_read_valid = 0U;
        vlSelf->o_wdata_valid = vlSelf->x_ctrl__DOT__cmd_write_valid_q;
        vlSelf->x_ctrl__DOT__addr_cnt_top_q = 0U;
        vlSelf->x_ctrl__DOT__cmd_addr_q = 0U;
        vlSelf->x_ctrl__DOT__advance_top_q = 0U;
        vlSelf->x_ctrl__DOT__advance_q = 0U;
        vlSelf->x_ctrl__DOT__addr_cnt_q = 0U;
    }
    vlSelf->x_ctrl__DOT__advance_top = ((IData)(vlSelf->x_ctrl__DOT__advance_q) 
                                        == (IData)(vlSelf->x_ctrl__DOT__advance_top_q));
    if (vlSelf->i_nrst) {
        vlSelf->x_ctrl__DOT__last_play_q = vlSelf->x_ctrl__DOT__play_q;
        if ((IData)(((0x40U == (0xf0U & (IData)(vlSelf->x_ctrl__DOT__cmd_q))) 
                     & (IData)(vlSelf->x_ctrl__DOT__cmd_valid_q)))) {
            vlSelf->x_ctrl__DOT__play_q = vlSelf->x_ctrl__DOT__play_d;
        }
        vlSelf->x_ctrl__DOT__cmd_q = vlSelf->i_cmd;
    } else {
        vlSelf->x_ctrl__DOT__last_play_q = 0U;
        vlSelf->x_ctrl__DOT__play_q = 0U;
        vlSelf->x_ctrl__DOT__cmd_q = 0U;
    }
    vlSelf->x_ctrl__DOT__play_d = (1U & (~ (IData)(vlSelf->x_ctrl__DOT__play_q)));
    vlSelf->o_addr = ((IData)(vlSelf->x_ctrl__DOT__play_q)
                       ? (IData)(vlSelf->x_ctrl__DOT__addr_cnt_q)
                       : (IData)(vlSelf->x_ctrl__DOT__cmd_addr_q));
    vlSelf->x_ctrl__DOT__addr_cnt_d = ((1U & ((~ (IData)(vlSelf->x_ctrl__DOT__play_q)) 
                                              | ((IData)(vlSelf->x_ctrl__DOT__addr_cnt_q) 
                                                 == (IData)(vlSelf->x_ctrl__DOT__addr_cnt_top_q))))
                                        ? 0U : (0x7ffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->x_ctrl__DOT__addr_cnt_q))));
    vlSelf->x_ctrl__DOT__advance_d = ((1U & ((~ (IData)(vlSelf->x_ctrl__DOT__play_q)) 
                                             | (IData)(vlSelf->x_ctrl__DOT__advance_top)))
                                       ? 0U : (0xffffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->x_ctrl__DOT__advance_q))));
    vlSelf->x_ctrl__DOT__cmd_valid_q = ((IData)(vlSelf->i_nrst) 
                                        & (IData)(vlSelf->i_cmd_valid));
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
}

void Vx_ctrl___024root___eval_triggers__act(Vx_ctrl___024root* vlSelf);

bool Vx_ctrl___024root___eval_phase__act(Vx_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_ctrl___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vx_ctrl___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vx_ctrl___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vx_ctrl___024root___eval_phase__nba(Vx_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_ctrl___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vx_ctrl___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vx_ctrl___024root___dump_triggers__nba(Vx_ctrl___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vx_ctrl___024root___dump_triggers__act(Vx_ctrl___024root* vlSelf);
#endif  // VL_DEBUG

void Vx_ctrl___024root___eval(Vx_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_ctrl___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vx_ctrl___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/ashleyjr/IceDAC/ip/x_ctrl/rtl/x_ctrl.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vx_ctrl___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/ashleyjr/IceDAC/ip/x_ctrl/rtl/x_ctrl.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vx_ctrl___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vx_ctrl___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vx_ctrl___024root___eval_debug_assertions(Vx_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_ctrl___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->i_clk & 0xfeU))) {
        Verilated::overWidthError("i_clk");}
    if (VL_UNLIKELY((vlSelf->i_nrst & 0xfeU))) {
        Verilated::overWidthError("i_nrst");}
    if (VL_UNLIKELY((vlSelf->i_cmd_valid & 0xfeU))) {
        Verilated::overWidthError("i_cmd_valid");}
    if (VL_UNLIKELY((vlSelf->i_rdata & 0xc0U))) {
        Verilated::overWidthError("i_rdata");}
}
#endif  // VL_DEBUG
