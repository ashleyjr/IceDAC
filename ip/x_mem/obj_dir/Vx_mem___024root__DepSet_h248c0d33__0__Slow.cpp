// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vx_mem.h for the primary calling header

#include "Vx_mem__pch.h"
#include "Vx_mem__Syms.h"
#include "Vx_mem___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vx_mem___024root___dump_triggers__stl(Vx_mem___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vx_mem___024root___eval_triggers__stl(Vx_mem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_mem___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vx_mem___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vx_mem_x_mem_2p_2048x2___stl_sequent__TOP__x_mem__DOT__genblk1__BRA__0__KET____DOT__u_mem_2p_2048x2__0(Vx_mem_x_mem_2p_2048x2* vlSelf);
VL_ATTR_COLD void Vx_mem_x_mem_2p_2048x2___stl_sequent__TOP__x_mem__DOT__genblk1__BRA__1__KET____DOT__u_mem_2p_2048x2__0(Vx_mem_x_mem_2p_2048x2* vlSelf);
VL_ATTR_COLD void Vx_mem_x_mem_2p_2048x2___stl_sequent__TOP__x_mem__DOT__genblk1__BRA__2__KET____DOT__u_mem_2p_2048x2__0(Vx_mem_x_mem_2p_2048x2* vlSelf);
VL_ATTR_COLD void Vx_mem___024root___stl_sequent__TOP__0(Vx_mem___024root* vlSelf);

VL_ATTR_COLD void Vx_mem___024root___eval_stl(Vx_mem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_mem___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vx_mem_x_mem_2p_2048x2___stl_sequent__TOP__x_mem__DOT__genblk1__BRA__0__KET____DOT__u_mem_2p_2048x2__0((&vlSymsp->TOP__x_mem__DOT__genblk1__BRA__0__KET____DOT__u_mem_2p_2048x2));
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
        Vx_mem_x_mem_2p_2048x2___stl_sequent__TOP__x_mem__DOT__genblk1__BRA__1__KET____DOT__u_mem_2p_2048x2__0((&vlSymsp->TOP__x_mem__DOT__genblk1__BRA__1__KET____DOT__u_mem_2p_2048x2));
        Vx_mem_x_mem_2p_2048x2___stl_sequent__TOP__x_mem__DOT__genblk1__BRA__2__KET____DOT__u_mem_2p_2048x2__0((&vlSymsp->TOP__x_mem__DOT__genblk1__BRA__2__KET____DOT__u_mem_2p_2048x2));
        Vx_mem___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vx_mem___024root___stl_sequent__TOP__0(Vx_mem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_mem___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->x_mem__DOT__rdata_d[0U] = vlSymsp->TOP__x_mem__DOT__genblk1__BRA__0__KET____DOT__u_mem_2p_2048x2.__PVT__mem
        [vlSelf->x_mem__DOT__addr_q[0U]];
    vlSelf->x_mem__DOT__rdata_d[1U] = vlSymsp->TOP__x_mem__DOT__genblk1__BRA__1__KET____DOT__u_mem_2p_2048x2.__PVT__mem
        [vlSelf->x_mem__DOT__addr_q[1U]];
    vlSelf->x_mem__DOT__rdata_d[2U] = vlSymsp->TOP__x_mem__DOT__genblk1__BRA__2__KET____DOT__u_mem_2p_2048x2.__PVT__mem
        [vlSelf->x_mem__DOT__addr_q[2U]];
}
