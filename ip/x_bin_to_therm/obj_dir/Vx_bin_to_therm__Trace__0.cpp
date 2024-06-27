// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vx_bin_to_therm__Syms.h"


void Vx_bin_to_therm___024root__trace_chg_sub_0(Vx_bin_to_therm___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vx_bin_to_therm___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_bin_to_therm___024root__trace_chg_top_0\n"); );
    // Init
    Vx_bin_to_therm___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vx_bin_to_therm___024root*>(voidSelf);
    Vx_bin_to_therm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vx_bin_to_therm___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vx_bin_to_therm___024root__trace_chg_sub_0(Vx_bin_to_therm___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vx_bin_to_therm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_bin_to_therm___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<3>/*95:0*/ __Vtemp_h5e726cb9__0;
    VlWide<3>/*95:0*/ __Vtemp_ha085aca5__0;
    VlWide<3>/*95:0*/ __Vtemp_h32431685__0;
    VlWide<3>/*95:0*/ __Vtemp_h5e726cb9__1;
    VlWide<3>/*95:0*/ __Vtemp_h96ce1ff3__0;
    VlWide<3>/*95:0*/ __Vtemp_hd29eeb52__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgWData(oldp+0,(vlSelf->x_bin_to_therm__DOT__shift_q),65);
        __Vtemp_h5e726cb9__0[0U] = 1U;
        __Vtemp_h5e726cb9__0[1U] = 0U;
        __Vtemp_h5e726cb9__0[2U] = 0U;
        VL_SUB_W(3, __Vtemp_ha085aca5__0, vlSelf->x_bin_to_therm__DOT__shift_q, __Vtemp_h5e726cb9__0);
        __Vtemp_h32431685__0[0U] = __Vtemp_ha085aca5__0[0U];
        __Vtemp_h32431685__0[1U] = __Vtemp_ha085aca5__0[1U];
        __Vtemp_h32431685__0[2U] = (1U & __Vtemp_ha085aca5__0[2U]);
        bufp->chgWData(oldp+3,(__Vtemp_h32431685__0),65);
        bufp->chgWData(oldp+6,(vlSelf->x_bin_to_therm__DOT__therm_q),65);
    }
    bufp->chgBit(oldp+9,(vlSelf->i_clk));
    bufp->chgBit(oldp+10,(vlSelf->i_nrst));
    bufp->chgCData(oldp+11,(vlSelf->i_bin),6);
    bufp->chgQData(oldp+12,(vlSelf->o_therm),64);
    __Vtemp_h5e726cb9__1[0U] = 1U;
    __Vtemp_h5e726cb9__1[1U] = 0U;
    __Vtemp_h5e726cb9__1[2U] = 0U;
    VL_SHIFTL_WWI(65,65,6, __Vtemp_h96ce1ff3__0, __Vtemp_h5e726cb9__1, (IData)(vlSelf->i_bin));
    __Vtemp_hd29eeb52__0[0U] = __Vtemp_h96ce1ff3__0[0U];
    __Vtemp_hd29eeb52__0[1U] = __Vtemp_h96ce1ff3__0[1U];
    __Vtemp_hd29eeb52__0[2U] = (1U & __Vtemp_h96ce1ff3__0[2U]);
    bufp->chgWData(oldp+14,(__Vtemp_hd29eeb52__0),65);
}

void Vx_bin_to_therm___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_bin_to_therm___024root__trace_cleanup\n"); );
    // Init
    Vx_bin_to_therm___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vx_bin_to_therm___024root*>(voidSelf);
    Vx_bin_to_therm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
