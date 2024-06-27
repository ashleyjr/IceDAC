// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vx_ctrl__Syms.h"


void Vx_ctrl___024root__trace_chg_0_sub_0(Vx_ctrl___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vx_ctrl___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_ctrl___024root__trace_chg_0\n"); );
    // Init
    Vx_ctrl___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vx_ctrl___024root*>(voidSelf);
    Vx_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vx_ctrl___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vx_ctrl___024root__trace_chg_0_sub_0(Vx_ctrl___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_ctrl___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->x_ctrl__DOT__cmd_valid_q));
        bufp->chgCData(oldp+1,(vlSelf->x_ctrl__DOT__cmd_q),8);
        bufp->chgBit(oldp+2,((IData)(((0U == (0xf0U 
                                              & (IData)(vlSelf->x_ctrl__DOT__cmd_q))) 
                                      & (IData)(vlSelf->x_ctrl__DOT__cmd_valid_q)))));
        bufp->chgSData(oldp+3,(((0x7f0U & ((IData)(vlSelf->x_ctrl__DOT__cmd_addr_q) 
                                           << 4U)) 
                                | (0xfU & (IData)(vlSelf->x_ctrl__DOT__cmd_q)))),11);
        bufp->chgSData(oldp+4,(vlSelf->x_ctrl__DOT__cmd_addr_q),11);
        bufp->chgBit(oldp+5,((IData)(((0x10U == (0xf0U 
                                                 & (IData)(vlSelf->x_ctrl__DOT__cmd_q))) 
                                      & (IData)(vlSelf->x_ctrl__DOT__cmd_valid_q)))));
        bufp->chgCData(oldp+6,(((0x30U & ((IData)(vlSelf->x_ctrl__DOT__cmd_data_q) 
                                          << 4U)) | 
                                (0xfU & (IData)(vlSelf->x_ctrl__DOT__cmd_q)))),6);
        bufp->chgCData(oldp+7,(vlSelf->x_ctrl__DOT__cmd_data_q),6);
        bufp->chgBit(oldp+8,((IData)((((0x20U == (0xf0U 
                                                  & (IData)(vlSelf->x_ctrl__DOT__cmd_q))) 
                                       & (~ (IData)(vlSelf->x_ctrl__DOT__play_q))) 
                                      & (IData)(vlSelf->x_ctrl__DOT__cmd_valid_q)))));
        bufp->chgBit(oldp+9,(vlSelf->x_ctrl__DOT__cmd_write_valid_q));
        bufp->chgBit(oldp+10,((IData)(((0x30U == (0xf0U 
                                                  & (IData)(vlSelf->x_ctrl__DOT__cmd_q))) 
                                       & (IData)(vlSelf->x_ctrl__DOT__cmd_valid_q)))));
        bufp->chgBit(oldp+11,(vlSelf->x_ctrl__DOT__p1_cmd_read_valid));
        bufp->chgBit(oldp+12,(vlSelf->x_ctrl__DOT__p2_cmd_read_valid));
        bufp->chgBit(oldp+13,((IData)(((0x40U == (0xf0U 
                                                  & (IData)(vlSelf->x_ctrl__DOT__cmd_q))) 
                                       & (IData)(vlSelf->x_ctrl__DOT__cmd_valid_q)))));
        bufp->chgBit(oldp+14,((1U & (~ (IData)(vlSelf->x_ctrl__DOT__play_q)))));
        bufp->chgBit(oldp+15,(vlSelf->x_ctrl__DOT__play_q));
        bufp->chgBit(oldp+16,(vlSelf->x_ctrl__DOT__last_play_q));
        bufp->chgBit(oldp+17,((IData)(((0x50U == (0xf0U 
                                                  & (IData)(vlSelf->x_ctrl__DOT__cmd_q))) 
                                       & (IData)(vlSelf->x_ctrl__DOT__cmd_valid_q)))));
        bufp->chgSData(oldp+18,(((0xfff0U & ((IData)(vlSelf->x_ctrl__DOT__advance_top_q) 
                                             << 4U)) 
                                 | (0xfU & (IData)(vlSelf->x_ctrl__DOT__cmd_q)))),16);
        bufp->chgSData(oldp+19,(vlSelf->x_ctrl__DOT__advance_top_q),16);
        bufp->chgBit(oldp+20,((IData)(((0x60U == (0xf0U 
                                                  & (IData)(vlSelf->x_ctrl__DOT__cmd_q))) 
                                       & (IData)(vlSelf->x_ctrl__DOT__cmd_valid_q)))));
        bufp->chgBit(oldp+21,(((IData)(vlSelf->x_ctrl__DOT__play_q)
                                ? (IData)(vlSelf->x_ctrl__DOT__advance_top)
                                : (IData)(vlSelf->x_ctrl__DOT__last_play_q))));
        bufp->chgSData(oldp+22,(((0x7f0U & ((IData)(vlSelf->x_ctrl__DOT__addr_cnt_top_q) 
                                            << 4U)) 
                                 | (0xfU & (IData)(vlSelf->x_ctrl__DOT__cmd_q)))),11);
        bufp->chgSData(oldp+23,(vlSelf->x_ctrl__DOT__addr_cnt_top_q),11);
        bufp->chgSData(oldp+24,(((1U & ((~ (IData)(vlSelf->x_ctrl__DOT__play_q)) 
                                        | ((IData)(vlSelf->x_ctrl__DOT__addr_cnt_q) 
                                           == (IData)(vlSelf->x_ctrl__DOT__addr_cnt_top_q))))
                                  ? 0U : (0x7ffU & 
                                          ((IData)(1U) 
                                           + (IData)(vlSelf->x_ctrl__DOT__addr_cnt_q))))),11);
        bufp->chgSData(oldp+25,(vlSelf->x_ctrl__DOT__addr_cnt_q),11);
        bufp->chgSData(oldp+26,(((1U & ((~ (IData)(vlSelf->x_ctrl__DOT__play_q)) 
                                        | (IData)(vlSelf->x_ctrl__DOT__advance_top)))
                                  ? 0U : (0xffffU & 
                                          ((IData)(1U) 
                                           + (IData)(vlSelf->x_ctrl__DOT__advance_q))))),16);
        bufp->chgSData(oldp+27,(vlSelf->x_ctrl__DOT__advance_q),16);
        bufp->chgBit(oldp+28,(((IData)(vlSelf->x_ctrl__DOT__last_play_q) 
                               | (IData)(vlSelf->x_ctrl__DOT__play_q))));
        bufp->chgBit(oldp+29,(vlSelf->x_ctrl__DOT__advance_top));
    }
    bufp->chgBit(oldp+30,(vlSelf->i_clk));
    bufp->chgBit(oldp+31,(vlSelf->i_nrst));
    bufp->chgBit(oldp+32,(vlSelf->i_cmd_valid));
    bufp->chgCData(oldp+33,(vlSelf->i_cmd),8);
    bufp->chgBit(oldp+34,(vlSelf->o_rsp_valid));
    bufp->chgCData(oldp+35,(vlSelf->o_rsp),8);
    bufp->chgSData(oldp+36,(vlSelf->o_addr),11);
    bufp->chgBit(oldp+37,(vlSelf->o_wdata_valid));
    bufp->chgCData(oldp+38,(vlSelf->o_wdata),6);
    bufp->chgCData(oldp+39,(vlSelf->i_rdata),6);
}

void Vx_ctrl___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_ctrl___024root__trace_cleanup\n"); );
    // Init
    Vx_ctrl___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vx_ctrl___024root*>(voidSelf);
    Vx_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
