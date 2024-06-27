// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vx_mem__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vx_mem::Vx_mem(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vx_mem__Syms(contextp(), _vcname__, this)}
    , i_nrst{vlSymsp->TOP.i_nrst}
    , i_clk{vlSymsp->TOP.i_clk}
    , i_we{vlSymsp->TOP.i_we}
    , i_wdata{vlSymsp->TOP.i_wdata}
    , o_rdata{vlSymsp->TOP.o_rdata}
    , i_addr{vlSymsp->TOP.i_addr}
    , __PVT__x_mem__DOT__genblk1__BRA__0__KET____DOT__u_mem_2p_2048x2{vlSymsp->TOP.__PVT__x_mem__DOT__genblk1__BRA__0__KET____DOT__u_mem_2p_2048x2}
    , __PVT__x_mem__DOT__genblk1__BRA__1__KET____DOT__u_mem_2p_2048x2{vlSymsp->TOP.__PVT__x_mem__DOT__genblk1__BRA__1__KET____DOT__u_mem_2p_2048x2}
    , __PVT__x_mem__DOT__genblk1__BRA__2__KET____DOT__u_mem_2p_2048x2{vlSymsp->TOP.__PVT__x_mem__DOT__genblk1__BRA__2__KET____DOT__u_mem_2p_2048x2}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vx_mem::Vx_mem(const char* _vcname__)
    : Vx_mem(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vx_mem::~Vx_mem() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vx_mem___024root___eval_debug_assertions(Vx_mem___024root* vlSelf);
#endif  // VL_DEBUG
void Vx_mem___024root___eval_static(Vx_mem___024root* vlSelf);
void Vx_mem___024root___eval_initial(Vx_mem___024root* vlSelf);
void Vx_mem___024root___eval_settle(Vx_mem___024root* vlSelf);
void Vx_mem___024root___eval(Vx_mem___024root* vlSelf);

void Vx_mem::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vx_mem::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vx_mem___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vx_mem___024root___eval_static(&(vlSymsp->TOP));
        Vx_mem___024root___eval_initial(&(vlSymsp->TOP));
        Vx_mem___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vx_mem___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vx_mem::eventsPending() { return false; }

uint64_t Vx_mem::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vx_mem::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vx_mem___024root___eval_final(Vx_mem___024root* vlSelf);

VL_ATTR_COLD void Vx_mem::final() {
    Vx_mem___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vx_mem::hierName() const { return vlSymsp->name(); }
const char* Vx_mem::modelName() const { return "Vx_mem"; }
unsigned Vx_mem::threads() const { return 1; }
void Vx_mem::prepareClone() const { contextp()->prepareClone(); }
void Vx_mem::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vx_mem::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vx_mem___024root__trace_decl_types(VerilatedVcd* tracep);

void Vx_mem___024root__trace_init_top(Vx_mem___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vx_mem___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vx_mem___024root*>(voidSelf);
    Vx_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vx_mem___024root__trace_decl_types(tracep);
    Vx_mem___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vx_mem___024root__trace_register(Vx_mem___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vx_mem::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vx_mem::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vx_mem___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
