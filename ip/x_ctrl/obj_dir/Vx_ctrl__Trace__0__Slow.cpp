// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vx_ctrl__Syms.h"


VL_ATTR_COLD void Vx_ctrl___024root__trace_init_sub__TOP__0(Vx_ctrl___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_ctrl___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+31,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"i_nrst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"i_cmd_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"i_cmd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+35,0,"o_rsp_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"o_rsp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+37,0,"o_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+38,0,"o_wdata_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"o_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+40,0,"i_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->pushPrefix("x_ctrl", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+31,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"i_nrst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"i_cmd_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"i_cmd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+35,0,"o_rsp_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"o_rsp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+37,0,"o_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+38,0,"o_wdata_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"o_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+40,0,"i_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+1,0,"cmd_valid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"cmd_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+3,0,"cmd_addr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"cmd_addr_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+5,0,"cmd_addr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+6,0,"cmd_data_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"cmd_data_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+8,0,"cmd_data_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+9,0,"cmd_write_valid_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"cmd_write_valid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"p0_cmd_read_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"p1_cmd_read_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"p2_cmd_read_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"cmd_play_toggle_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"play_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"play_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"last_play_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"last_play_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"cmd_advance_top_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"advance_top_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+20,0,"advance_top_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+21,0,"cmd_addr_cnt_top_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"addr_cnt_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"addr_cnt_top_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+24,0,"addr_cnt_top_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+25,0,"addr_cnt_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+26,0,"addr_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+27,0,"advance_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+28,0,"advance_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+29,0,"advance_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"advance_top",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vx_ctrl___024root__trace_init_top(Vx_ctrl___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_ctrl___024root__trace_init_top\n"); );
    // Body
    Vx_ctrl___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vx_ctrl___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vx_ctrl___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vx_ctrl___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vx_ctrl___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vx_ctrl___024root__trace_register(Vx_ctrl___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_ctrl___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vx_ctrl___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vx_ctrl___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vx_ctrl___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vx_ctrl___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vx_ctrl___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_ctrl___024root__trace_const_0\n"); );
    // Init
    Vx_ctrl___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vx_ctrl___024root*>(voidSelf);
    Vx_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vx_ctrl___024root__trace_full_0_sub_0(Vx_ctrl___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vx_ctrl___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_ctrl___024root__trace_full_0\n"); );
    // Init
    Vx_ctrl___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vx_ctrl___024root*>(voidSelf);
    Vx_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vx_ctrl___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vx_ctrl___024root__trace_full_0_sub_0(Vx_ctrl___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_ctrl___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->x_ctrl__DOT__cmd_valid_q));
    bufp->fullCData(oldp+2,(vlSelf->x_ctrl__DOT__cmd_q),8);
    bufp->fullBit(oldp+3,((IData)(((0U == (0xf0U & (IData)(vlSelf->x_ctrl__DOT__cmd_q))) 
                                   & (IData)(vlSelf->x_ctrl__DOT__cmd_valid_q)))));
    bufp->fullSData(oldp+4,(((0x7f0U & ((IData)(vlSelf->x_ctrl__DOT__cmd_addr_q) 
                                        << 4U)) | (0xfU 
                                                   & (IData)(vlSelf->x_ctrl__DOT__cmd_q)))),11);
    bufp->fullSData(oldp+5,(vlSelf->x_ctrl__DOT__cmd_addr_q),11);
    bufp->fullBit(oldp+6,((IData)(((0x10U == (0xf0U 
                                              & (IData)(vlSelf->x_ctrl__DOT__cmd_q))) 
                                   & (IData)(vlSelf->x_ctrl__DOT__cmd_valid_q)))));
    bufp->fullCData(oldp+7,(((0x30U & ((IData)(vlSelf->x_ctrl__DOT__cmd_data_q) 
                                       << 4U)) | (0xfU 
                                                  & (IData)(vlSelf->x_ctrl__DOT__cmd_q)))),6);
    bufp->fullCData(oldp+8,(vlSelf->x_ctrl__DOT__cmd_data_q),6);
    bufp->fullBit(oldp+9,((IData)((((0x20U == (0xf0U 
                                               & (IData)(vlSelf->x_ctrl__DOT__cmd_q))) 
                                    & (~ (IData)(vlSelf->x_ctrl__DOT__play_q))) 
                                   & (IData)(vlSelf->x_ctrl__DOT__cmd_valid_q)))));
    bufp->fullBit(oldp+10,(vlSelf->x_ctrl__DOT__cmd_write_valid_q));
    bufp->fullBit(oldp+11,((IData)(((0x30U == (0xf0U 
                                               & (IData)(vlSelf->x_ctrl__DOT__cmd_q))) 
                                    & (IData)(vlSelf->x_ctrl__DOT__cmd_valid_q)))));
    bufp->fullBit(oldp+12,(vlSelf->x_ctrl__DOT__p1_cmd_read_valid));
    bufp->fullBit(oldp+13,(vlSelf->x_ctrl__DOT__p2_cmd_read_valid));
    bufp->fullBit(oldp+14,((IData)(((0x40U == (0xf0U 
                                               & (IData)(vlSelf->x_ctrl__DOT__cmd_q))) 
                                    & (IData)(vlSelf->x_ctrl__DOT__cmd_valid_q)))));
    bufp->fullBit(oldp+15,((1U & (~ (IData)(vlSelf->x_ctrl__DOT__play_q)))));
    bufp->fullBit(oldp+16,(vlSelf->x_ctrl__DOT__play_q));
    bufp->fullBit(oldp+17,(vlSelf->x_ctrl__DOT__last_play_q));
    bufp->fullBit(oldp+18,((IData)(((0x50U == (0xf0U 
                                               & (IData)(vlSelf->x_ctrl__DOT__cmd_q))) 
                                    & (IData)(vlSelf->x_ctrl__DOT__cmd_valid_q)))));
    bufp->fullSData(oldp+19,(((0xfff0U & ((IData)(vlSelf->x_ctrl__DOT__advance_top_q) 
                                          << 4U)) | 
                              (0xfU & (IData)(vlSelf->x_ctrl__DOT__cmd_q)))),16);
    bufp->fullSData(oldp+20,(vlSelf->x_ctrl__DOT__advance_top_q),16);
    bufp->fullBit(oldp+21,((IData)(((0x60U == (0xf0U 
                                               & (IData)(vlSelf->x_ctrl__DOT__cmd_q))) 
                                    & (IData)(vlSelf->x_ctrl__DOT__cmd_valid_q)))));
    bufp->fullBit(oldp+22,(((IData)(vlSelf->x_ctrl__DOT__play_q)
                             ? (IData)(vlSelf->x_ctrl__DOT__advance_top)
                             : (IData)(vlSelf->x_ctrl__DOT__last_play_q))));
    bufp->fullSData(oldp+23,(((0x7f0U & ((IData)(vlSelf->x_ctrl__DOT__addr_cnt_top_q) 
                                         << 4U)) | 
                              (0xfU & (IData)(vlSelf->x_ctrl__DOT__cmd_q)))),11);
    bufp->fullSData(oldp+24,(vlSelf->x_ctrl__DOT__addr_cnt_top_q),11);
    bufp->fullSData(oldp+25,(((1U & ((~ (IData)(vlSelf->x_ctrl__DOT__play_q)) 
                                     | ((IData)(vlSelf->x_ctrl__DOT__addr_cnt_q) 
                                        == (IData)(vlSelf->x_ctrl__DOT__addr_cnt_top_q))))
                               ? 0U : (0x7ffU & ((IData)(1U) 
                                                 + (IData)(vlSelf->x_ctrl__DOT__addr_cnt_q))))),11);
    bufp->fullSData(oldp+26,(vlSelf->x_ctrl__DOT__addr_cnt_q),11);
    bufp->fullSData(oldp+27,(((1U & ((~ (IData)(vlSelf->x_ctrl__DOT__play_q)) 
                                     | (IData)(vlSelf->x_ctrl__DOT__advance_top)))
                               ? 0U : (0xffffU & ((IData)(1U) 
                                                  + (IData)(vlSelf->x_ctrl__DOT__advance_q))))),16);
    bufp->fullSData(oldp+28,(vlSelf->x_ctrl__DOT__advance_q),16);
    bufp->fullBit(oldp+29,(((IData)(vlSelf->x_ctrl__DOT__last_play_q) 
                            | (IData)(vlSelf->x_ctrl__DOT__play_q))));
    bufp->fullBit(oldp+30,(vlSelf->x_ctrl__DOT__advance_top));
    bufp->fullBit(oldp+31,(vlSelf->i_clk));
    bufp->fullBit(oldp+32,(vlSelf->i_nrst));
    bufp->fullBit(oldp+33,(vlSelf->i_cmd_valid));
    bufp->fullCData(oldp+34,(vlSelf->i_cmd),8);
    bufp->fullBit(oldp+35,(vlSelf->o_rsp_valid));
    bufp->fullCData(oldp+36,(vlSelf->o_rsp),8);
    bufp->fullSData(oldp+37,(vlSelf->o_addr),11);
    bufp->fullBit(oldp+38,(vlSelf->o_wdata_valid));
    bufp->fullCData(oldp+39,(vlSelf->o_wdata),6);
    bufp->fullCData(oldp+40,(vlSelf->i_rdata),6);
}
