// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vx_mem__pch.h"
#include "Vx_mem.h"
#include "Vx_mem___024root.h"
#include "Vx_mem_x_mem_2p_2048x2.h"

// FUNCTIONS
Vx_mem__Syms::~Vx_mem__Syms()
{
}

Vx_mem__Syms::Vx_mem__Syms(VerilatedContext* contextp, const char* namep, Vx_mem* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__x_mem__DOT__genblk1__BRA__0__KET____DOT__u_mem_2p_2048x2{this, Verilated::catName(namep, "x_mem.genblk1[0].u_mem_2p_2048x2")}
    , TOP__x_mem__DOT__genblk1__BRA__1__KET____DOT__u_mem_2p_2048x2{this, Verilated::catName(namep, "x_mem.genblk1[1].u_mem_2p_2048x2")}
    , TOP__x_mem__DOT__genblk1__BRA__2__KET____DOT__u_mem_2p_2048x2{this, Verilated::catName(namep, "x_mem.genblk1[2].u_mem_2p_2048x2")}
{
        // Check resources
        Verilated::stackCheck(531886);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__x_mem__DOT__genblk1__BRA__0__KET____DOT__u_mem_2p_2048x2 = &TOP__x_mem__DOT__genblk1__BRA__0__KET____DOT__u_mem_2p_2048x2;
    TOP.__PVT__x_mem__DOT__genblk1__BRA__1__KET____DOT__u_mem_2p_2048x2 = &TOP__x_mem__DOT__genblk1__BRA__1__KET____DOT__u_mem_2p_2048x2;
    TOP.__PVT__x_mem__DOT__genblk1__BRA__2__KET____DOT__u_mem_2p_2048x2 = &TOP__x_mem__DOT__genblk1__BRA__2__KET____DOT__u_mem_2p_2048x2;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__x_mem__DOT__genblk1__BRA__0__KET____DOT__u_mem_2p_2048x2.__Vconfigure(true);
    TOP__x_mem__DOT__genblk1__BRA__1__KET____DOT__u_mem_2p_2048x2.__Vconfigure(false);
    TOP__x_mem__DOT__genblk1__BRA__2__KET____DOT__u_mem_2p_2048x2.__Vconfigure(false);
}
