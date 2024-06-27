// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vx_mem.h for the primary calling header

#include "Vx_mem__pch.h"
#include "Vx_mem__Syms.h"
#include "Vx_mem___024root.h"

void Vx_mem___024root___ctor_var_reset(Vx_mem___024root* vlSelf);

Vx_mem___024root::Vx_mem___024root(Vx_mem__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vx_mem___024root___ctor_var_reset(this);
}

void Vx_mem___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vx_mem___024root::~Vx_mem___024root() {
}
