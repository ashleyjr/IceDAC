// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VX_MEM__SYMS_H_
#define VERILATED_VX_MEM__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vx_mem.h"

// INCLUDE MODULE CLASSES
#include "Vx_mem___024root.h"
#include "Vx_mem_x_mem_2p_2048x2.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vx_mem__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vx_mem* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vx_mem___024root               TOP;
    Vx_mem_x_mem_2p_2048x2         TOP__x_mem__DOT__genblk1__BRA__0__KET____DOT__u_mem_2p_2048x2;
    Vx_mem_x_mem_2p_2048x2         TOP__x_mem__DOT__genblk1__BRA__1__KET____DOT__u_mem_2p_2048x2;
    Vx_mem_x_mem_2p_2048x2         TOP__x_mem__DOT__genblk1__BRA__2__KET____DOT__u_mem_2p_2048x2;

    // CONSTRUCTORS
    Vx_mem__Syms(VerilatedContext* contextp, const char* namep, Vx_mem* modelp);
    ~Vx_mem__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
