// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vx_bin_to_therm.h for the primary calling header

#include "verilated.h"

#include "Vx_bin_to_therm___024root.h"

VL_ATTR_COLD void Vx_bin_to_therm___024root___settle__TOP__0(Vx_bin_to_therm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vx_bin_to_therm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_bin_to_therm___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->o_therm = ((0xfffffffffffffffeULL & vlSelf->o_therm) 
                       | (IData)((IData)((1U & vlSelf->x_bin_to_therm__DOT__therm_q[0U]))));
    vlSelf->o_therm = ((0x7fffffffffffffffULL & vlSelf->o_therm) 
                       | ((QData)((IData)((1U & (vlSelf->x_bin_to_therm__DOT__therm_q[0U] 
                                                 >> 1U)))) 
                          << 0x3fU));
    vlSelf->o_therm = ((0xfffffffffffffffdULL & vlSelf->o_therm) 
                       | ((QData)((IData)((1U & (vlSelf->x_bin_to_therm__DOT__therm_q[0U] 
                                                 >> 2U)))) 
                          << 1U));
    vlSelf->o_therm = ((0xbfffffffffffffffULL & vlSelf->o_therm) 
                       | ((QData)((IData)((1U & (vlSelf->x_bin_to_therm__DOT__therm_q[0U] 
                                                 >> 3U)))) 
                          << 0x3eU));
    vlSelf->o_therm = ((0xfffffffffffffffbULL & vlSelf->o_therm) 
                       | ((QData)((IData)((1U & (vlSelf->x_bin_to_therm__DOT__therm_q[0U] 
                                                 >> 4U)))) 
                          << 2U));
    vlSelf->o_therm = ((0xdfffffffffffffffULL & vlSelf->o_therm) 
                       | ((QData)((IData)((1U & (vlSelf->x_bin_to_therm__DOT__therm_q[0U] 
                                                 >> 5U)))) 
                          << 0x3dU));
    vlSelf->o_therm = ((0xfffffffffffffff7ULL & vlSelf->o_therm) 
                       | ((QData)((IData)((1U & (vlSelf->x_bin_to_therm__DOT__therm_q[0U] 
                                                 >> 6U)))) 
                          << 3U));
    vlSelf->o_therm = ((0xefffffffffffffffULL & vlSelf->o_therm) 
                       | ((QData)((IData)((1U & (vlSelf->x_bin_to_therm__DOT__therm_q[0U] 
                                                 >> 7U)))) 
                          << 0x3cU));
    vlSelf->o_therm = ((0xffffffffffffffefULL & vlSelf->o_therm) 
                       | ((QData)((IData)((1U & (vlSelf->x_bin_to_therm__DOT__therm_q[0U] 
                                                 >> 8U)))) 
                          << 4U));
    vlSelf->o_therm = ((0xf7ffffffffffffffULL & vlSelf->o_therm) 
                       | ((QData)((IData)((1U & (vlSelf->x_bin_to_therm__DOT__therm_q[0U] 
                                                 >> 9U)))) 
                          << 0x3bU));
    vlSelf->o_therm = ((0xffffffffffffffdfULL & vlSelf->o_therm) 
                       | ((QData)((IData)((1U & (vlSelf->x_bin_to_therm__DOT__therm_q[0U] 
                                                 >> 0xaU)))) 
                          << 5U));
    vlSelf->o_therm = ((0xfbffffffffffffffULL & vlSelf->o_therm) 
                       | ((QData)((IData)((1U & (vlSelf->x_bin_to_therm__DOT__therm_q[0U] 
                                                 >> 0xbU)))) 
                          << 0x3aU));
    vlSelf->o_therm = ((0xffffffffffffffbfULL & vlSelf->o_therm) 
                       | ((QData)((IData)((1U & (vlSelf->x_bin_to_therm__DOT__therm_q[0U] 
                                                 >> 0xcU)))) 
                          << 6U));
    vlSelf->o_therm = ((0xfdffffffffffffffULL & vlSelf->o_therm) 
                       | ((QData)((IData)((1U & (vlSelf->x_bin_to_therm__DOT__therm_q[0U] 
                                                 >> 0xdU)))) 
                          << 0x39U));
    vlSelf->o_therm = ((0xffffffffffffff7fULL & vlSelf->o_therm) 
                       | ((QData)((IData)((1U & (vlSelf->x_bin_to_therm__DOT__therm_q[0U] 
                                                 >> 0xeU)))) 
                          << 7U));
    vlSelf->o_therm = ((0xfeffffffffffffffULL & vlSelf->o_therm) 
                       | ((QData)((IData)((1U & (vlSelf->x_bin_to_therm__DOT__therm_q[0U] 
                                                 >> 0xfU)))) 
                          << 0x38U));
    vlSelf->o_therm = ((0xfffffffffffffeffULL & vlSelf->o_therm) 
                       | ((QData)((IData)((1U & (vlSelf->x_bin_to_therm__DOT__therm_q[0U] 
                                                 >> 0x10U)))) 
                          << 8U));
    vlSelf->o_therm = ((0xff7fffffffffffffULL & vlSelf->o_therm) 
                       | ((QData)((IData)((1U & (vlSelf->x_bin_to_therm__DOT__therm_q[0U] 
                                                 >> 0x11U)))) 
                          << 0x37U));
    vlSelf->o_therm = ((0xfffffffffffffdffULL & vlSelf->o_therm) 
                       | ((QData)((IData)((1U & (vlSelf->x_bin_to_therm__DOT__therm_q[0U] 
                                                 >> 0x12U)))) 
                          << 9U));
    vlSelf->o_therm = ((0xffbfffffffffffffULL & vlSelf->o_therm) 
                       | ((QData)((IData)((1U & (vlSelf->x_bin_to_therm__DOT__therm_q[0U] 
                                                 >> 0x13U)))) 
                          << 0x36U));
    vlSelf->o_therm = ((0xfffffffffffffbffULL & vlSelf->o_therm) 
                       | ((QData)((IData)((1U & (vlSelf->x_bin_to_therm__DOT__therm_q[0U] 
                                                 >> 0x14U)))) 
                          << 0xaU));
    vlSelf->o_therm = ((0xffdfffffffffffffULL & vlSelf->o_therm) 
                       | ((QData)((IData)((1U & (vlSelf->x_bin_to_therm__DOT__therm_q[0U] 
                                                 >> 0x15U)))) 
                          << 0x35U));
    vlSelf->o_therm = ((0xfffffffffffff7ffULL & vlSelf->o_therm) 
                       | ((QData)((IData)((1U & (vlSelf->x_bin_to_therm__DOT__therm_q[0U] 
                                                 >> 0x16U)))) 
                          << 0xbU));
    vlSelf->o_therm = ((0xffefffffffffffffULL & vlSelf->o_therm) 
                       | ((QData)((IData)((1U & (vlSelf->x_bin_to_therm__DOT__therm_q[0U] 
                                                 >> 0x17U)))) 
                          << 0x34U));
    vlSelf->o_therm = ((0xffffffffffffefffULL & vlSelf->o_therm) 
                       | ((QData)((IData)((1U & (vlSelf->x_bin_to_therm__DOT__therm_q[0U] 
                                                 >> 0x18U)))) 
                          << 0xcU));
    vlSelf->o_therm = ((0xfff7ffffffffffffULL & vlSelf->o_therm) 
                       | ((QData)((IData)((1U & (vlSelf->x_bin_to_therm__DOT__therm_q[0U] 
                                                 >> 0x19U)))) 
                          << 0x33U));
    vlSelf->o_therm = ((0xffffffffffffdfffULL & vlSelf->o_therm) 
                       | ((QData)((IData)((1U & (vlSelf->x_bin_to_therm__DOT__therm_q[0U] 
                                                 >> 0x1aU)))) 
                          << 0xdU));
    vlSelf->o_therm = ((0xfffbffffffffffffULL & vlSelf->o_therm) 
                       | ((QData)((IData)((1U & (vlSelf->x_bin_to_therm__DOT__therm_q[0U] 
                                                 >> 0x1bU)))) 
                          << 0x32U));
    vlSelf->o_therm = ((0xffffffffffffbfffULL & vlSelf->o_therm) 
                       | ((QData)((IData)((1U & (vlSelf->x_bin_to_therm__DOT__therm_q[0U] 
                                                 >> 0x1cU)))) 
                          << 0xeU));
    vlSelf->o_therm = ((0xfffdffffffffffffULL & vlSelf->o_therm) 
                       | ((QData)((IData)((1U & (vlSelf->x_bin_to_therm__DOT__therm_q[0U] 
                                                 >> 0x1dU)))) 
                          << 0x31U));
    vlSelf->o_therm = ((0xffffffffffff7fffULL & vlSelf->o_therm) 
                       | ((QData)((IData)((1U & (vlSelf->x_bin_to_therm__DOT__therm_q[0U] 
                                                 >> 0x1eU)))) 
                          << 0xfU));
    vlSelf->o_therm = ((0xfffeffffffffffffULL & vlSelf->o_therm) 
                       | ((QData)((IData)((vlSelf->x_bin_to_therm__DOT__therm_q[0U] 
                                           >> 0x1fU))) 
                          << 0x30U));
    vlSelf->o_therm = ((0xfffffffffffeffffULL & vlSelf->o_therm) 
                       | ((QData)((IData)((1U & vlSelf->x_bin_to_therm__DOT__therm_q[1U]))) 
                          << 0x10U));
    vlSelf->o_therm = ((0xffff7fffffffffffULL & vlSelf->o_therm) 
                       | ((QData)((IData)((1U & (vlSelf->x_bin_to_therm__DOT__therm_q[1U] 
                                                 >> 1U)))) 
                          << 0x2fU));
    vlSelf->o_therm = ((0xfffffffffffdffffULL & vlSelf->o_therm) 
                       | ((QData)((IData)((1U & (vlSelf->x_bin_to_therm__DOT__therm_q[1U] 
                                                 >> 2U)))) 
                          << 0x11U));
    vlSelf->o_therm = ((0xffffbfffffffffffULL & vlSelf->o_therm) 
                       | ((QData)((IData)((1U & (vlSelf->x_bin_to_therm__DOT__therm_q[1U] 
                                                 >> 3U)))) 
                          << 0x2eU));
    vlSelf->o_therm = ((0xfffffffffffbffffULL & vlSelf->o_therm) 
                       | ((QData)((IData)((1U & (vlSelf->x_bin_to_therm__DOT__therm_q[1U] 
                                                 >> 4U)))) 
                          << 0x12U));
    vlSelf->o_therm = ((0xffffdfffffffffffULL & vlSelf->o_therm) 
                       | ((QData)((IData)((1U & (vlSelf->x_bin_to_therm__DOT__therm_q[1U] 
                                                 >> 5U)))) 
                          << 0x2dU));
    vlSelf->o_therm = ((0xfffffffffff7ffffULL & vlSelf->o_therm) 
                       | ((QData)((IData)((1U & (vlSelf->x_bin_to_therm__DOT__therm_q[1U] 
                                                 >> 6U)))) 
                          << 0x13U));
    vlSelf->o_therm = ((0xffffefffffffffffULL & vlSelf->o_therm) 
                       | ((QData)((IData)((1U & (vlSelf->x_bin_to_therm__DOT__therm_q[1U] 
                                                 >> 7U)))) 
                          << 0x2cU));
    vlSelf->o_therm = ((0xffffffffffefffffULL & vlSelf->o_therm) 
                       | ((QData)((IData)((1U & (vlSelf->x_bin_to_therm__DOT__therm_q[1U] 
                                                 >> 8U)))) 
                          << 0x14U));
    vlSelf->o_therm = ((0xfffff7ffffffffffULL & vlSelf->o_therm) 
                       | ((QData)((IData)((1U & (vlSelf->x_bin_to_therm__DOT__therm_q[1U] 
                                                 >> 9U)))) 
                          << 0x2bU));
    vlSelf->o_therm = ((0xffffffffffdfffffULL & vlSelf->o_therm) 
                       | ((QData)((IData)((1U & (vlSelf->x_bin_to_therm__DOT__therm_q[1U] 
                                                 >> 0xaU)))) 
                          << 0x15U));
    vlSelf->o_therm = ((0xfffffbffffffffffULL & vlSelf->o_therm) 
                       | ((QData)((IData)((1U & (vlSelf->x_bin_to_therm__DOT__therm_q[1U] 
                                                 >> 0xbU)))) 
                          << 0x2aU));
    vlSelf->o_therm = ((0xffffffffffbfffffULL & vlSelf->o_therm) 
                       | ((QData)((IData)((1U & (vlSelf->x_bin_to_therm__DOT__therm_q[1U] 
                                                 >> 0xcU)))) 
                          << 0x16U));
    vlSelf->o_therm = ((0xfffffdffffffffffULL & vlSelf->o_therm) 
                       | ((QData)((IData)((1U & (vlSelf->x_bin_to_therm__DOT__therm_q[1U] 
                                                 >> 0xdU)))) 
                          << 0x29U));
    vlSelf->o_therm = ((0xffffffffff7fffffULL & vlSelf->o_therm) 
                       | ((QData)((IData)((1U & (vlSelf->x_bin_to_therm__DOT__therm_q[1U] 
                                                 >> 0xeU)))) 
                          << 0x17U));
    vlSelf->o_therm = ((0xfffffeffffffffffULL & vlSelf->o_therm) 
                       | ((QData)((IData)((1U & (vlSelf->x_bin_to_therm__DOT__therm_q[1U] 
                                                 >> 0xfU)))) 
                          << 0x28U));
    vlSelf->o_therm = ((0xfffffffffeffffffULL & vlSelf->o_therm) 
                       | ((QData)((IData)((1U & (vlSelf->x_bin_to_therm__DOT__therm_q[1U] 
                                                 >> 0x10U)))) 
                          << 0x18U));
    vlSelf->o_therm = ((0xffffff7fffffffffULL & vlSelf->o_therm) 
                       | ((QData)((IData)((1U & (vlSelf->x_bin_to_therm__DOT__therm_q[1U] 
                                                 >> 0x11U)))) 
                          << 0x27U));
    vlSelf->o_therm = ((0xfffffffffdffffffULL & vlSelf->o_therm) 
                       | ((QData)((IData)((1U & (vlSelf->x_bin_to_therm__DOT__therm_q[1U] 
                                                 >> 0x12U)))) 
                          << 0x19U));
    vlSelf->o_therm = ((0xffffffbfffffffffULL & vlSelf->o_therm) 
                       | ((QData)((IData)((1U & (vlSelf->x_bin_to_therm__DOT__therm_q[1U] 
                                                 >> 0x13U)))) 
                          << 0x26U));
    vlSelf->o_therm = ((0xfffffffffbffffffULL & vlSelf->o_therm) 
                       | ((QData)((IData)((1U & (vlSelf->x_bin_to_therm__DOT__therm_q[1U] 
                                                 >> 0x14U)))) 
                          << 0x1aU));
    vlSelf->o_therm = ((0xffffffdfffffffffULL & vlSelf->o_therm) 
                       | ((QData)((IData)((1U & (vlSelf->x_bin_to_therm__DOT__therm_q[1U] 
                                                 >> 0x15U)))) 
                          << 0x25U));
    vlSelf->o_therm = ((0xfffffffff7ffffffULL & vlSelf->o_therm) 
                       | ((QData)((IData)((1U & (vlSelf->x_bin_to_therm__DOT__therm_q[1U] 
                                                 >> 0x16U)))) 
                          << 0x1bU));
    vlSelf->o_therm = ((0xffffffefffffffffULL & vlSelf->o_therm) 
                       | ((QData)((IData)((1U & (vlSelf->x_bin_to_therm__DOT__therm_q[1U] 
                                                 >> 0x17U)))) 
                          << 0x24U));
    vlSelf->o_therm = ((0xffffffffefffffffULL & vlSelf->o_therm) 
                       | ((QData)((IData)((1U & (vlSelf->x_bin_to_therm__DOT__therm_q[1U] 
                                                 >> 0x18U)))) 
                          << 0x1cU));
    vlSelf->o_therm = ((0xfffffff7ffffffffULL & vlSelf->o_therm) 
                       | ((QData)((IData)((1U & (vlSelf->x_bin_to_therm__DOT__therm_q[1U] 
                                                 >> 0x19U)))) 
                          << 0x23U));
    vlSelf->o_therm = ((0xffffffffdfffffffULL & vlSelf->o_therm) 
                       | ((QData)((IData)((1U & (vlSelf->x_bin_to_therm__DOT__therm_q[1U] 
                                                 >> 0x1aU)))) 
                          << 0x1dU));
    vlSelf->o_therm = ((0xfffffff83fffffffULL & vlSelf->o_therm) 
                       | ((QData)((IData)(((0x10U & 
                                            (vlSelf->x_bin_to_therm__DOT__therm_q[1U] 
                                             >> 0x17U)) 
                                           | ((8U & 
                                               (vlSelf->x_bin_to_therm__DOT__therm_q[1U] 
                                                >> 0x1aU)) 
                                              | ((6U 
                                                  & (vlSelf->x_bin_to_therm__DOT__therm_q[1U] 
                                                     >> 0x1dU)) 
                                                 | (1U 
                                                    & (vlSelf->x_bin_to_therm__DOT__therm_q[1U] 
                                                       >> 0x1cU))))))) 
                          << 0x1eU));
}

VL_ATTR_COLD void Vx_bin_to_therm___024root___eval_initial(Vx_bin_to_therm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vx_bin_to_therm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_bin_to_therm___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__i_clk = vlSelf->i_clk;
    vlSelf->__Vclklast__TOP__i_nrst = vlSelf->i_nrst;
}

VL_ATTR_COLD void Vx_bin_to_therm___024root___eval_settle(Vx_bin_to_therm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vx_bin_to_therm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_bin_to_therm___024root___eval_settle\n"); );
    // Body
    Vx_bin_to_therm___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vx_bin_to_therm___024root___final(Vx_bin_to_therm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vx_bin_to_therm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_bin_to_therm___024root___final\n"); );
}

VL_ATTR_COLD void Vx_bin_to_therm___024root___ctor_var_reset(Vx_bin_to_therm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vx_bin_to_therm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_bin_to_therm___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->i_clk = VL_RAND_RESET_I(1);
    vlSelf->i_nrst = VL_RAND_RESET_I(1);
    vlSelf->i_bin = VL_RAND_RESET_I(6);
    vlSelf->o_therm = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->x_bin_to_therm__DOT__shift_q);
    VL_RAND_RESET_W(65, vlSelf->x_bin_to_therm__DOT__therm_q);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
