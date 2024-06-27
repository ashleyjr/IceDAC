// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vx_mem.h for the primary calling header

#include "Vx_mem__pch.h"
#include "Vx_mem__Syms.h"
#include "Vx_mem_x_mem_2p_2048x2.h"

void Vx_mem_x_mem_2p_2048x2___ctor_var_reset(Vx_mem_x_mem_2p_2048x2* vlSelf);

Vx_mem_x_mem_2p_2048x2::Vx_mem_x_mem_2p_2048x2(Vx_mem__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vx_mem_x_mem_2p_2048x2___ctor_var_reset(this);
}

void Vx_mem_x_mem_2p_2048x2::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vx_mem_x_mem_2p_2048x2::~Vx_mem_x_mem_2p_2048x2() {
}
