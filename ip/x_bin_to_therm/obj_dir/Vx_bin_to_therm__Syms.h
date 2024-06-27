// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VX_BIN_TO_THERM__SYMS_H_
#define VERILATED_VX_BIN_TO_THERM__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vx_bin_to_therm.h"

// INCLUDE MODULE CLASSES
#include "Vx_bin_to_therm___024root.h"

// SYMS CLASS (contains all model state)
class Vx_bin_to_therm__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vx_bin_to_therm* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vx_bin_to_therm___024root      TOP;

    // CONSTRUCTORS
    Vx_bin_to_therm__Syms(VerilatedContext* contextp, const char* namep, Vx_bin_to_therm* modelp);
    ~Vx_bin_to_therm__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
