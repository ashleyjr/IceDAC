// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vx_bin_to_therm__Syms.h"
#include "Vx_bin_to_therm.h"
#include "Vx_bin_to_therm___024root.h"

// FUNCTIONS
Vx_bin_to_therm__Syms::~Vx_bin_to_therm__Syms()
{
}

Vx_bin_to_therm__Syms::Vx_bin_to_therm__Syms(VerilatedContext* contextp, const char* namep,Vx_bin_to_therm* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
