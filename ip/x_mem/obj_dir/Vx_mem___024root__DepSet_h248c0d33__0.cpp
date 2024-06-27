// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vx_mem.h for the primary calling header

#include "Vx_mem__pch.h"
#include "Vx_mem__Syms.h"
#include "Vx_mem___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vx_mem___024root___dump_triggers__act(Vx_mem___024root* vlSelf);
#endif  // VL_DEBUG

void Vx_mem___024root___eval_triggers__act(Vx_mem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_mem___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->i_clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__i_clk__0))) 
                                     | ((~ (IData)(vlSelf->i_nrst)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__i_nrst__0))));
    vlSelf->__Vtrigprevexpr___TOP__i_clk__0 = vlSelf->i_clk;
    vlSelf->__Vtrigprevexpr___TOP__i_nrst__0 = vlSelf->i_nrst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vx_mem___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vx_mem___024root___nba_sequent__TOP__0(Vx_mem___024root* vlSelf);
void Vx_mem_x_mem_2p_2048x2___nba_sequent__TOP__x_mem__DOT__genblk1__BRA__0__KET____DOT__u_mem_2p_2048x2__0(Vx_mem_x_mem_2p_2048x2* vlSelf);
void Vx_mem_x_mem_2p_2048x2___nba_sequent__TOP__x_mem__DOT__genblk1__BRA__0__KET____DOT__u_mem_2p_2048x2__1(Vx_mem_x_mem_2p_2048x2* vlSelf);
void Vx_mem_x_mem_2p_2048x2___nba_sequent__TOP__x_mem__DOT__genblk1__BRA__0__KET____DOT__u_mem_2p_2048x2__2(Vx_mem_x_mem_2p_2048x2* vlSelf);
void Vx_mem_x_mem_2p_2048x2___nba_sequent__TOP__x_mem__DOT__genblk1__BRA__0__KET____DOT__u_mem_2p_2048x2__3(Vx_mem_x_mem_2p_2048x2* vlSelf);
void Vx_mem_x_mem_2p_2048x2___nba_sequent__TOP__x_mem__DOT__genblk1__BRA__0__KET____DOT__u_mem_2p_2048x2__4(Vx_mem_x_mem_2p_2048x2* vlSelf);
void Vx_mem_x_mem_2p_2048x2___nba_sequent__TOP__x_mem__DOT__genblk1__BRA__1__KET____DOT__u_mem_2p_2048x2__0(Vx_mem_x_mem_2p_2048x2* vlSelf);
void Vx_mem_x_mem_2p_2048x2___nba_sequent__TOP__x_mem__DOT__genblk1__BRA__1__KET____DOT__u_mem_2p_2048x2__1(Vx_mem_x_mem_2p_2048x2* vlSelf);
void Vx_mem_x_mem_2p_2048x2___nba_sequent__TOP__x_mem__DOT__genblk1__BRA__1__KET____DOT__u_mem_2p_2048x2__2(Vx_mem_x_mem_2p_2048x2* vlSelf);
void Vx_mem_x_mem_2p_2048x2___nba_sequent__TOP__x_mem__DOT__genblk1__BRA__2__KET____DOT__u_mem_2p_2048x2__0(Vx_mem_x_mem_2p_2048x2* vlSelf);
void Vx_mem_x_mem_2p_2048x2___nba_sequent__TOP__x_mem__DOT__genblk1__BRA__2__KET____DOT__u_mem_2p_2048x2__1(Vx_mem_x_mem_2p_2048x2* vlSelf);
void Vx_mem_x_mem_2p_2048x2___nba_sequent__TOP__x_mem__DOT__genblk1__BRA__2__KET____DOT__u_mem_2p_2048x2__2(Vx_mem_x_mem_2p_2048x2* vlSelf);
void Vx_mem___024root___nba_sequent__TOP__1(Vx_mem___024root* vlSelf);

void Vx_mem___024root___eval_nba(Vx_mem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_mem___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vx_mem___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vx_mem_x_mem_2p_2048x2___nba_sequent__TOP__x_mem__DOT__genblk1__BRA__0__KET____DOT__u_mem_2p_2048x2__0((&vlSymsp->TOP__x_mem__DOT__genblk1__BRA__0__KET____DOT__u_mem_2p_2048x2));
        Vx_mem_x_mem_2p_2048x2___nba_sequent__TOP__x_mem__DOT__genblk1__BRA__0__KET____DOT__u_mem_2p_2048x2__1((&vlSymsp->TOP__x_mem__DOT__genblk1__BRA__0__KET____DOT__u_mem_2p_2048x2));
        Vx_mem_x_mem_2p_2048x2___nba_sequent__TOP__x_mem__DOT__genblk1__BRA__0__KET____DOT__u_mem_2p_2048x2__2((&vlSymsp->TOP__x_mem__DOT__genblk1__BRA__0__KET____DOT__u_mem_2p_2048x2));
        Vx_mem_x_mem_2p_2048x2___nba_sequent__TOP__x_mem__DOT__genblk1__BRA__0__KET____DOT__u_mem_2p_2048x2__3((&vlSymsp->TOP__x_mem__DOT__genblk1__BRA__0__KET____DOT__u_mem_2p_2048x2));
        Vx_mem_x_mem_2p_2048x2___nba_sequent__TOP__x_mem__DOT__genblk1__BRA__0__KET____DOT__u_mem_2p_2048x2__4((&vlSymsp->TOP__x_mem__DOT__genblk1__BRA__0__KET____DOT__u_mem_2p_2048x2));
        Vx_mem_x_mem_2p_2048x2___nba_sequent__TOP__x_mem__DOT__genblk1__BRA__1__KET____DOT__u_mem_2p_2048x2__0((&vlSymsp->TOP__x_mem__DOT__genblk1__BRA__1__KET____DOT__u_mem_2p_2048x2));
        Vx_mem_x_mem_2p_2048x2___nba_sequent__TOP__x_mem__DOT__genblk1__BRA__1__KET____DOT__u_mem_2p_2048x2__1((&vlSymsp->TOP__x_mem__DOT__genblk1__BRA__1__KET____DOT__u_mem_2p_2048x2));
        Vx_mem_x_mem_2p_2048x2___nba_sequent__TOP__x_mem__DOT__genblk1__BRA__1__KET____DOT__u_mem_2p_2048x2__2((&vlSymsp->TOP__x_mem__DOT__genblk1__BRA__1__KET____DOT__u_mem_2p_2048x2));
        Vx_mem_x_mem_2p_2048x2___nba_sequent__TOP__x_mem__DOT__genblk1__BRA__0__KET____DOT__u_mem_2p_2048x2__3((&vlSymsp->TOP__x_mem__DOT__genblk1__BRA__1__KET____DOT__u_mem_2p_2048x2));
        Vx_mem_x_mem_2p_2048x2___nba_sequent__TOP__x_mem__DOT__genblk1__BRA__0__KET____DOT__u_mem_2p_2048x2__4((&vlSymsp->TOP__x_mem__DOT__genblk1__BRA__1__KET____DOT__u_mem_2p_2048x2));
        Vx_mem_x_mem_2p_2048x2___nba_sequent__TOP__x_mem__DOT__genblk1__BRA__2__KET____DOT__u_mem_2p_2048x2__0((&vlSymsp->TOP__x_mem__DOT__genblk1__BRA__2__KET____DOT__u_mem_2p_2048x2));
        Vx_mem_x_mem_2p_2048x2___nba_sequent__TOP__x_mem__DOT__genblk1__BRA__2__KET____DOT__u_mem_2p_2048x2__1((&vlSymsp->TOP__x_mem__DOT__genblk1__BRA__2__KET____DOT__u_mem_2p_2048x2));
        Vx_mem_x_mem_2p_2048x2___nba_sequent__TOP__x_mem__DOT__genblk1__BRA__2__KET____DOT__u_mem_2p_2048x2__2((&vlSymsp->TOP__x_mem__DOT__genblk1__BRA__2__KET____DOT__u_mem_2p_2048x2));
        Vx_mem_x_mem_2p_2048x2___nba_sequent__TOP__x_mem__DOT__genblk1__BRA__0__KET____DOT__u_mem_2p_2048x2__3((&vlSymsp->TOP__x_mem__DOT__genblk1__BRA__2__KET____DOT__u_mem_2p_2048x2));
        Vx_mem_x_mem_2p_2048x2___nba_sequent__TOP__x_mem__DOT__genblk1__BRA__0__KET____DOT__u_mem_2p_2048x2__4((&vlSymsp->TOP__x_mem__DOT__genblk1__BRA__2__KET____DOT__u_mem_2p_2048x2));
        Vx_mem___024root___nba_sequent__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vx_mem___024root___nba_sequent__TOP__1(Vx_mem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_mem___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->x_mem__DOT__rdata_d[0U] = vlSymsp->TOP__x_mem__DOT__genblk1__BRA__0__KET____DOT__u_mem_2p_2048x2.__PVT__mem
        [vlSelf->x_mem__DOT__addr_q[0U]];
    vlSelf->x_mem__DOT__rdata_d[1U] = vlSymsp->TOP__x_mem__DOT__genblk1__BRA__1__KET____DOT__u_mem_2p_2048x2.__PVT__mem
        [vlSelf->x_mem__DOT__addr_q[1U]];
    vlSelf->x_mem__DOT__wdata_q[0U] = vlSelf->__VdlyVal__x_mem__DOT__wdata_q__v0;
    vlSelf->x_mem__DOT__wdata_q[1U] = vlSelf->__VdlyVal__x_mem__DOT__wdata_q__v1;
    vlSelf->x_mem__DOT__wdata_q[2U] = vlSelf->__VdlyVal__x_mem__DOT__wdata_q__v2;
    vlSelf->x_mem__DOT__rdata_d[2U] = vlSymsp->TOP__x_mem__DOT__genblk1__BRA__2__KET____DOT__u_mem_2p_2048x2.__PVT__mem
        [vlSelf->x_mem__DOT__addr_q[2U]];
}
