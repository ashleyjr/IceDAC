// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vx_ctrl.h for the primary calling header

#include "Vx_ctrl__pch.h"
#include "Vx_ctrl__Syms.h"
#include "Vx_ctrl___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vx_ctrl___024root___dump_triggers__act(Vx_ctrl___024root* vlSelf);
#endif  // VL_DEBUG

void Vx_ctrl___024root___eval_triggers__act(Vx_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx_ctrl___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->i_clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__i_clk__0))) 
                                     | ((~ (IData)(vlSelf->i_nrst)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__i_nrst__0))));
    vlSelf->__Vtrigprevexpr___TOP__i_clk__0 = vlSelf->i_clk;
    vlSelf->__Vtrigprevexpr___TOP__i_nrst__0 = vlSelf->i_nrst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vx_ctrl___024root___dump_triggers__act(vlSelf);
    }
#endif
}
