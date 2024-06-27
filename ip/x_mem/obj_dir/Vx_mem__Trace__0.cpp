// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vx_mem__Syms.h"


void Vx_mem___024root__trace_chg_0_sub_0(Vx_mem___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vx_mem___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_mem___024root__trace_chg_0\n"); );
    // Init
    Vx_mem___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vx_mem___024root*>(voidSelf);
    Vx_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vx_mem___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vx_mem___024root__trace_chg_0_sub_0(Vx_mem___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_mem___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgSData(oldp+0,(vlSelf->x_mem__DOT__addr_q[0]),11);
        bufp->chgSData(oldp+1,(vlSelf->x_mem__DOT__addr_q[1]),11);
        bufp->chgSData(oldp+2,(vlSelf->x_mem__DOT__addr_q[2]),11);
        bufp->chgCData(oldp+3,(vlSelf->x_mem__DOT__rdata_d[0]),2);
        bufp->chgCData(oldp+4,(vlSelf->x_mem__DOT__rdata_d[1]),2);
        bufp->chgCData(oldp+5,(vlSelf->x_mem__DOT__rdata_d[2]),2);
        bufp->chgCData(oldp+6,(vlSelf->x_mem__DOT__we_q),3);
        bufp->chgCData(oldp+7,(vlSelf->x_mem__DOT__wdata_q[0]),2);
        bufp->chgCData(oldp+8,(vlSelf->x_mem__DOT__wdata_q[1]),2);
        bufp->chgCData(oldp+9,(vlSelf->x_mem__DOT__wdata_q[2]),2);
        bufp->chgSData(oldp+10,(vlSelf->x_mem__DOT__addr_q
                                [0U]),11);
        bufp->chgBit(oldp+11,((1U & (IData)(vlSelf->x_mem__DOT__we_q))));
        bufp->chgCData(oldp+12,(vlSelf->x_mem__DOT__wdata_q
                                [0U]),2);
        bufp->chgCData(oldp+13,(vlSymsp->TOP__x_mem__DOT__genblk1__BRA__0__KET____DOT__u_mem_2p_2048x2.__PVT__mem
                                [vlSelf->x_mem__DOT__addr_q
                                [0U]]),2);
        bufp->chgWData(oldp+14,(vlSymsp->TOP__x_mem__DOT__genblk1__BRA__0__KET____DOT__u_mem_2p_2048x2.__PVT__mem_en),2048);
        bufp->chgSData(oldp+78,(vlSelf->x_mem__DOT__addr_q
                                [1U]),11);
        bufp->chgBit(oldp+79,((1U & ((IData)(vlSelf->x_mem__DOT__we_q) 
                                     >> 1U))));
        bufp->chgCData(oldp+80,(vlSelf->x_mem__DOT__wdata_q
                                [1U]),2);
        bufp->chgCData(oldp+81,(vlSymsp->TOP__x_mem__DOT__genblk1__BRA__1__KET____DOT__u_mem_2p_2048x2.__PVT__mem
                                [vlSelf->x_mem__DOT__addr_q
                                [1U]]),2);
        bufp->chgWData(oldp+82,(vlSymsp->TOP__x_mem__DOT__genblk1__BRA__1__KET____DOT__u_mem_2p_2048x2.__PVT__mem_en),2048);
        bufp->chgSData(oldp+146,(vlSelf->x_mem__DOT__addr_q
                                 [2U]),11);
        bufp->chgBit(oldp+147,((1U & ((IData)(vlSelf->x_mem__DOT__we_q) 
                                      >> 2U))));
        bufp->chgCData(oldp+148,(vlSelf->x_mem__DOT__wdata_q
                                 [2U]),2);
        bufp->chgCData(oldp+149,(vlSymsp->TOP__x_mem__DOT__genblk1__BRA__2__KET____DOT__u_mem_2p_2048x2.__PVT__mem
                                 [vlSelf->x_mem__DOT__addr_q
                                 [2U]]),2);
        bufp->chgWData(oldp+150,(vlSymsp->TOP__x_mem__DOT__genblk1__BRA__2__KET____DOT__u_mem_2p_2048x2.__PVT__mem_en),2048);
    }
    bufp->chgBit(oldp+214,(vlSelf->i_nrst));
    bufp->chgBit(oldp+215,(vlSelf->i_clk));
    bufp->chgSData(oldp+216,(vlSelf->i_addr),11);
    bufp->chgBit(oldp+217,(vlSelf->i_we));
    bufp->chgCData(oldp+218,(vlSelf->i_wdata),8);
    bufp->chgCData(oldp+219,(vlSelf->o_rdata),8);
}

void Vx_mem___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_mem___024root__trace_cleanup\n"); );
    // Init
    Vx_mem___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vx_mem___024root*>(voidSelf);
    Vx_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
