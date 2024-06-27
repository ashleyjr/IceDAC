// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vx_mem.h for the primary calling header

#include "Vx_mem__pch.h"
#include "Vx_mem___024root.h"

void Vx_mem___024root___eval_act(Vx_mem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_mem___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vx_mem___024root___nba_sequent__TOP__0(Vx_mem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_mem___024root___nba_sequent__TOP__0\n"); );
    // Init
    SData/*10:0*/ __VdlyVal__x_mem__DOT__addr_q__v0;
    __VdlyVal__x_mem__DOT__addr_q__v0 = 0;
    SData/*10:0*/ __VdlyVal__x_mem__DOT__addr_q__v1;
    __VdlyVal__x_mem__DOT__addr_q__v1 = 0;
    SData/*10:0*/ __VdlyVal__x_mem__DOT__addr_q__v2;
    __VdlyVal__x_mem__DOT__addr_q__v2 = 0;
    // Body
    if (vlSelf->i_nrst) {
        vlSelf->__VdlyVal__x_mem__DOT__wdata_q__v0 
            = (3U & (IData)(vlSelf->i_wdata));
        vlSelf->__VdlyVal__x_mem__DOT__wdata_q__v1 
            = (3U & ((IData)(vlSelf->i_wdata) >> 2U));
        vlSelf->__VdlyVal__x_mem__DOT__wdata_q__v2 
            = (3U & ((IData)(vlSelf->i_wdata) >> 4U));
        __VdlyVal__x_mem__DOT__addr_q__v0 = vlSelf->i_addr;
        __VdlyVal__x_mem__DOT__addr_q__v1 = vlSelf->i_addr;
        __VdlyVal__x_mem__DOT__addr_q__v2 = vlSelf->i_addr;
    } else {
        vlSelf->__VdlyVal__x_mem__DOT__wdata_q__v0 = 0U;
        vlSelf->__VdlyVal__x_mem__DOT__wdata_q__v1 = 0U;
        vlSelf->__VdlyVal__x_mem__DOT__wdata_q__v2 = 0U;
        __VdlyVal__x_mem__DOT__addr_q__v0 = 0U;
        __VdlyVal__x_mem__DOT__addr_q__v1 = 0U;
        __VdlyVal__x_mem__DOT__addr_q__v2 = 0U;
    }
    vlSelf->x_mem__DOT__we_q = ((((IData)(vlSelf->i_nrst) 
                                  & (IData)(vlSelf->i_we)) 
                                 << 2U) | (3U & ((- (IData)((IData)(vlSelf->i_nrst))) 
                                                 & (- (IData)((IData)(vlSelf->i_we))))));
    vlSelf->o_rdata = ((0xf0U & (IData)(vlSelf->o_rdata)) 
                       | ((((IData)(vlSelf->i_nrst)
                             ? vlSelf->x_mem__DOT__rdata_d
                            [1U] : 0U) << 2U) | ((IData)(vlSelf->i_nrst)
                                                  ? 
                                                 vlSelf->x_mem__DOT__rdata_d
                                                 [0U]
                                                  : 0U)));
    vlSelf->o_rdata = ((0xcfU & (IData)(vlSelf->o_rdata)) 
                       | (((IData)(vlSelf->i_nrst) ? 
                           vlSelf->x_mem__DOT__rdata_d
                           [2U] : 0U) << 4U));
    vlSelf->x_mem__DOT__addr_q[0U] = __VdlyVal__x_mem__DOT__addr_q__v0;
    vlSelf->x_mem__DOT__addr_q[1U] = __VdlyVal__x_mem__DOT__addr_q__v1;
    vlSelf->x_mem__DOT__addr_q[2U] = __VdlyVal__x_mem__DOT__addr_q__v2;
}

void Vx_mem___024root___eval_triggers__act(Vx_mem___024root* vlSelf);

bool Vx_mem___024root___eval_phase__act(Vx_mem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_mem___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vx_mem___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vx_mem___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vx_mem___024root___eval_nba(Vx_mem___024root* vlSelf);

bool Vx_mem___024root___eval_phase__nba(Vx_mem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_mem___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vx_mem___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vx_mem___024root___dump_triggers__nba(Vx_mem___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vx_mem___024root___dump_triggers__act(Vx_mem___024root* vlSelf);
#endif  // VL_DEBUG

void Vx_mem___024root___eval(Vx_mem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_mem___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vx_mem___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/ashleyjr/IceDAC/ip/x_mem/rtl/x_mem.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vx_mem___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/ashleyjr/IceDAC/ip/x_mem/rtl/x_mem.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vx_mem___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vx_mem___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vx_mem___024root___eval_debug_assertions(Vx_mem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_mem___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->i_nrst & 0xfeU))) {
        Verilated::overWidthError("i_nrst");}
    if (VL_UNLIKELY((vlSelf->i_clk & 0xfeU))) {
        Verilated::overWidthError("i_clk");}
    if (VL_UNLIKELY((vlSelf->i_addr & 0xf800U))) {
        Verilated::overWidthError("i_addr");}
    if (VL_UNLIKELY((vlSelf->i_we & 0xfeU))) {
        Verilated::overWidthError("i_we");}
}
#endif  // VL_DEBUG
