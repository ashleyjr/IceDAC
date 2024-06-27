// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vx_bin_to_therm.h"
#include "Vx_bin_to_therm__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vx_bin_to_therm::Vx_bin_to_therm(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vx_bin_to_therm__Syms(_vcontextp__, _vcname__, this)}
    , i_clk{vlSymsp->TOP.i_clk}
    , i_nrst{vlSymsp->TOP.i_nrst}
    , i_bin{vlSymsp->TOP.i_bin}
    , o_therm{vlSymsp->TOP.o_therm}
    , rootp{&(vlSymsp->TOP)}
{
}

Vx_bin_to_therm::Vx_bin_to_therm(const char* _vcname__)
    : Vx_bin_to_therm(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vx_bin_to_therm::~Vx_bin_to_therm() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vx_bin_to_therm___024root___eval_initial(Vx_bin_to_therm___024root* vlSelf);
void Vx_bin_to_therm___024root___eval_settle(Vx_bin_to_therm___024root* vlSelf);
void Vx_bin_to_therm___024root___eval(Vx_bin_to_therm___024root* vlSelf);
#ifdef VL_DEBUG
void Vx_bin_to_therm___024root___eval_debug_assertions(Vx_bin_to_therm___024root* vlSelf);
#endif  // VL_DEBUG
void Vx_bin_to_therm___024root___final(Vx_bin_to_therm___024root* vlSelf);

static void _eval_initial_loop(Vx_bin_to_therm__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vx_bin_to_therm___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vx_bin_to_therm___024root___eval_settle(&(vlSymsp->TOP));
        Vx_bin_to_therm___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vx_bin_to_therm::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vx_bin_to_therm::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vx_bin_to_therm___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vx_bin_to_therm___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vx_bin_to_therm::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vx_bin_to_therm::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vx_bin_to_therm::final() {
    Vx_bin_to_therm___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void Vx_bin_to_therm___024root__trace_init_top(Vx_bin_to_therm___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vx_bin_to_therm___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vx_bin_to_therm___024root*>(voidSelf);
    Vx_bin_to_therm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vx_bin_to_therm___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vx_bin_to_therm___024root__trace_register(Vx_bin_to_therm___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vx_bin_to_therm::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vx_bin_to_therm___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
