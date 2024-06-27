// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vx_ctrl.h for the primary calling header

#include "Vx_ctrl__pch.h"
#include "Vx_ctrl__Syms.h"
#include "Vx_ctrl___024root.h"

void Vx_ctrl___024root___ctor_var_reset(Vx_ctrl___024root* vlSelf);

Vx_ctrl___024root::Vx_ctrl___024root(Vx_ctrl__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vx_ctrl___024root___ctor_var_reset(this);
}

void Vx_ctrl___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vx_ctrl___024root::~Vx_ctrl___024root() {
}
