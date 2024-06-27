// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vx_mem__Syms.h"


VL_ATTR_COLD void Vx_mem___024root__trace_init_sub__TOP__x_mem__DOT__genblk1__BRA__0__KET____DOT__u_mem_2p_2048x2__0(Vx_mem___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vx_mem___024root__trace_init_sub__TOP__x_mem__DOT__genblk1__BRA__1__KET____DOT__u_mem_2p_2048x2__0(Vx_mem___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vx_mem___024root__trace_init_sub__TOP__x_mem__DOT__genblk1__BRA__2__KET____DOT__u_mem_2p_2048x2__0(Vx_mem___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vx_mem___024root__trace_init_sub__TOP__0(Vx_mem___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_mem___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+215,0,"i_nrst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+216,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+217,0,"i_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+218,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+219,0,"i_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+220,0,"o_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("x_mem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+215,0,"i_nrst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+216,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+217,0,"i_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+218,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+219,0,"i_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+220,0,"o_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("addr_q", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 10,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rdata_d", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+4+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+7,0,"we_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("wdata_q", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+8+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_mem_2p_2048x2", VerilatedTracePrefixType::SCOPE_MODULE);
    Vx_mem___024root__trace_init_sub__TOP__x_mem__DOT__genblk1__BRA__0__KET____DOT__u_mem_2p_2048x2__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_mem_2p_2048x2", VerilatedTracePrefixType::SCOPE_MODULE);
    Vx_mem___024root__trace_init_sub__TOP__x_mem__DOT__genblk1__BRA__1__KET____DOT__u_mem_2p_2048x2__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_mem_2p_2048x2", VerilatedTracePrefixType::SCOPE_MODULE);
    Vx_mem___024root__trace_init_sub__TOP__x_mem__DOT__genblk1__BRA__2__KET____DOT__u_mem_2p_2048x2__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vx_mem___024root__trace_init_sub__TOP__x_mem__DOT__genblk1__BRA__0__KET____DOT__u_mem_2p_2048x2__0(Vx_mem___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_mem___024root__trace_init_sub__TOP__x_mem__DOT__genblk1__BRA__0__KET____DOT__u_mem_2p_2048x2__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+215,0,"i_nrst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+216,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"i_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+12,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"i_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+14,0,"o_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declArray(c+15,0,"mem_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2047,0);
}

VL_ATTR_COLD void Vx_mem___024root__trace_init_sub__TOP__x_mem__DOT__genblk1__BRA__1__KET____DOT__u_mem_2p_2048x2__0(Vx_mem___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_mem___024root__trace_init_sub__TOP__x_mem__DOT__genblk1__BRA__1__KET____DOT__u_mem_2p_2048x2__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+215,0,"i_nrst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+216,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+79,0,"i_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+80,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+81,0,"i_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+82,0,"o_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declArray(c+83,0,"mem_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2047,0);
}

VL_ATTR_COLD void Vx_mem___024root__trace_init_sub__TOP__x_mem__DOT__genblk1__BRA__2__KET____DOT__u_mem_2p_2048x2__0(Vx_mem___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_mem___024root__trace_init_sub__TOP__x_mem__DOT__genblk1__BRA__2__KET____DOT__u_mem_2p_2048x2__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+215,0,"i_nrst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+216,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+147,0,"i_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+148,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+149,0,"i_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+150,0,"o_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declArray(c+151,0,"mem_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2047,0);
}

VL_ATTR_COLD void Vx_mem___024root__trace_init_top(Vx_mem___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_mem___024root__trace_init_top\n"); );
    // Body
    Vx_mem___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vx_mem___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vx_mem___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vx_mem___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vx_mem___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vx_mem___024root__trace_register(Vx_mem___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_mem___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vx_mem___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vx_mem___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vx_mem___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vx_mem___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vx_mem___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_mem___024root__trace_const_0\n"); );
    // Init
    Vx_mem___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vx_mem___024root*>(voidSelf);
    Vx_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vx_mem___024root__trace_full_0_sub_0(Vx_mem___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vx_mem___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_mem___024root__trace_full_0\n"); );
    // Init
    Vx_mem___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vx_mem___024root*>(voidSelf);
    Vx_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vx_mem___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vx_mem___024root__trace_full_0_sub_0(Vx_mem___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_mem___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullSData(oldp+1,(vlSelf->x_mem__DOT__addr_q[0]),11);
    bufp->fullSData(oldp+2,(vlSelf->x_mem__DOT__addr_q[1]),11);
    bufp->fullSData(oldp+3,(vlSelf->x_mem__DOT__addr_q[2]),11);
    bufp->fullCData(oldp+4,(vlSelf->x_mem__DOT__rdata_d[0]),2);
    bufp->fullCData(oldp+5,(vlSelf->x_mem__DOT__rdata_d[1]),2);
    bufp->fullCData(oldp+6,(vlSelf->x_mem__DOT__rdata_d[2]),2);
    bufp->fullCData(oldp+7,(vlSelf->x_mem__DOT__we_q),3);
    bufp->fullCData(oldp+8,(vlSelf->x_mem__DOT__wdata_q[0]),2);
    bufp->fullCData(oldp+9,(vlSelf->x_mem__DOT__wdata_q[1]),2);
    bufp->fullCData(oldp+10,(vlSelf->x_mem__DOT__wdata_q[2]),2);
    bufp->fullSData(oldp+11,(vlSelf->x_mem__DOT__addr_q
                             [0U]),11);
    bufp->fullBit(oldp+12,((1U & (IData)(vlSelf->x_mem__DOT__we_q))));
    bufp->fullCData(oldp+13,(vlSelf->x_mem__DOT__wdata_q
                             [0U]),2);
    bufp->fullCData(oldp+14,(vlSymsp->TOP__x_mem__DOT__genblk1__BRA__0__KET____DOT__u_mem_2p_2048x2.__PVT__mem
                             [vlSelf->x_mem__DOT__addr_q
                             [0U]]),2);
    bufp->fullWData(oldp+15,(vlSymsp->TOP__x_mem__DOT__genblk1__BRA__0__KET____DOT__u_mem_2p_2048x2.__PVT__mem_en),2048);
    bufp->fullSData(oldp+79,(vlSelf->x_mem__DOT__addr_q
                             [1U]),11);
    bufp->fullBit(oldp+80,((1U & ((IData)(vlSelf->x_mem__DOT__we_q) 
                                  >> 1U))));
    bufp->fullCData(oldp+81,(vlSelf->x_mem__DOT__wdata_q
                             [1U]),2);
    bufp->fullCData(oldp+82,(vlSymsp->TOP__x_mem__DOT__genblk1__BRA__1__KET____DOT__u_mem_2p_2048x2.__PVT__mem
                             [vlSelf->x_mem__DOT__addr_q
                             [1U]]),2);
    bufp->fullWData(oldp+83,(vlSymsp->TOP__x_mem__DOT__genblk1__BRA__1__KET____DOT__u_mem_2p_2048x2.__PVT__mem_en),2048);
    bufp->fullSData(oldp+147,(vlSelf->x_mem__DOT__addr_q
                              [2U]),11);
    bufp->fullBit(oldp+148,((1U & ((IData)(vlSelf->x_mem__DOT__we_q) 
                                   >> 2U))));
    bufp->fullCData(oldp+149,(vlSelf->x_mem__DOT__wdata_q
                              [2U]),2);
    bufp->fullCData(oldp+150,(vlSymsp->TOP__x_mem__DOT__genblk1__BRA__2__KET____DOT__u_mem_2p_2048x2.__PVT__mem
                              [vlSelf->x_mem__DOT__addr_q
                              [2U]]),2);
    bufp->fullWData(oldp+151,(vlSymsp->TOP__x_mem__DOT__genblk1__BRA__2__KET____DOT__u_mem_2p_2048x2.__PVT__mem_en),2048);
    bufp->fullBit(oldp+215,(vlSelf->i_nrst));
    bufp->fullBit(oldp+216,(vlSelf->i_clk));
    bufp->fullSData(oldp+217,(vlSelf->i_addr),11);
    bufp->fullBit(oldp+218,(vlSelf->i_we));
    bufp->fullCData(oldp+219,(vlSelf->i_wdata),8);
    bufp->fullCData(oldp+220,(vlSelf->o_rdata),8);
}
