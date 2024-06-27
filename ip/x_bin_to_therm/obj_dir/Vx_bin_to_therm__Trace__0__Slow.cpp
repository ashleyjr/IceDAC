// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vx_bin_to_therm__Syms.h"


VL_ATTR_COLD void Vx_bin_to_therm___024root__trace_init_sub__TOP__0(Vx_bin_to_therm___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vx_bin_to_therm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_bin_to_therm___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+10,"i_clk", false,-1);
    tracep->declBit(c+11,"i_nrst", false,-1);
    tracep->declBus(c+12,"i_bin", false,-1, 5,0);
    tracep->declQuad(c+13,"o_therm", false,-1, 63,0);
    tracep->pushNamePrefix("x_bin_to_therm ");
    tracep->declBus(c+18,"N", false,-1, 31,0);
    tracep->declBit(c+10,"i_clk", false,-1);
    tracep->declBit(c+11,"i_nrst", false,-1);
    tracep->declBus(c+12,"i_bin", false,-1, 5,0);
    tracep->declQuad(c+13,"o_therm", false,-1, 63,0);
    tracep->declArray(c+15,"shift_d", false,-1, 64,0);
    tracep->declArray(c+1,"shift_q", false,-1, 64,0);
    tracep->declArray(c+4,"therm_d", false,-1, 64,0);
    tracep->declArray(c+7,"therm_q", false,-1, 64,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vx_bin_to_therm___024root__trace_init_top(Vx_bin_to_therm___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vx_bin_to_therm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_bin_to_therm___024root__trace_init_top\n"); );
    // Body
    Vx_bin_to_therm___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vx_bin_to_therm___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vx_bin_to_therm___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vx_bin_to_therm___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vx_bin_to_therm___024root__trace_register(Vx_bin_to_therm___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vx_bin_to_therm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_bin_to_therm___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vx_bin_to_therm___024root__trace_full_top_0, vlSelf, nullptr);
    tracep->addChgCb(&Vx_bin_to_therm___024root__trace_chg_top_0, vlSelf, nullptr);
    tracep->addCleanupCb(&Vx_bin_to_therm___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vx_bin_to_therm___024root__trace_full_sub_0(Vx_bin_to_therm___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vx_bin_to_therm___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_bin_to_therm___024root__trace_full_top_0\n"); );
    // Init
    Vx_bin_to_therm___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vx_bin_to_therm___024root*>(voidSelf);
    Vx_bin_to_therm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vx_bin_to_therm___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vx_bin_to_therm___024root__trace_full_sub_0(Vx_bin_to_therm___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vx_bin_to_therm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_bin_to_therm___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_h5e726cb9__0;
    VlWide<3>/*95:0*/ __Vtemp_ha085aca5__0;
    VlWide<3>/*95:0*/ __Vtemp_h32431685__0;
    VlWide<3>/*95:0*/ __Vtemp_h5e726cb9__1;
    VlWide<3>/*95:0*/ __Vtemp_h96ce1ff3__0;
    VlWide<3>/*95:0*/ __Vtemp_hd29eeb52__0;
    // Body
    bufp->fullWData(oldp+1,(vlSelf->x_bin_to_therm__DOT__shift_q),65);
    __Vtemp_h5e726cb9__0[0U] = 1U;
    __Vtemp_h5e726cb9__0[1U] = 0U;
    __Vtemp_h5e726cb9__0[2U] = 0U;
    VL_SUB_W(3, __Vtemp_ha085aca5__0, vlSelf->x_bin_to_therm__DOT__shift_q, __Vtemp_h5e726cb9__0);
    __Vtemp_h32431685__0[0U] = __Vtemp_ha085aca5__0[0U];
    __Vtemp_h32431685__0[1U] = __Vtemp_ha085aca5__0[1U];
    __Vtemp_h32431685__0[2U] = (1U & __Vtemp_ha085aca5__0[2U]);
    bufp->fullWData(oldp+4,(__Vtemp_h32431685__0),65);
    bufp->fullWData(oldp+7,(vlSelf->x_bin_to_therm__DOT__therm_q),65);
    bufp->fullBit(oldp+10,(vlSelf->i_clk));
    bufp->fullBit(oldp+11,(vlSelf->i_nrst));
    bufp->fullCData(oldp+12,(vlSelf->i_bin),6);
    bufp->fullQData(oldp+13,(vlSelf->o_therm),64);
    __Vtemp_h5e726cb9__1[0U] = 1U;
    __Vtemp_h5e726cb9__1[1U] = 0U;
    __Vtemp_h5e726cb9__1[2U] = 0U;
    VL_SHIFTL_WWI(65,65,6, __Vtemp_h96ce1ff3__0, __Vtemp_h5e726cb9__1, (IData)(vlSelf->i_bin));
    __Vtemp_hd29eeb52__0[0U] = __Vtemp_h96ce1ff3__0[0U];
    __Vtemp_hd29eeb52__0[1U] = __Vtemp_h96ce1ff3__0[1U];
    __Vtemp_hd29eeb52__0[2U] = (1U & __Vtemp_h96ce1ff3__0[2U]);
    bufp->fullWData(oldp+15,(__Vtemp_hd29eeb52__0),65);
    bufp->fullIData(oldp+18,(0x40U),32);
}
