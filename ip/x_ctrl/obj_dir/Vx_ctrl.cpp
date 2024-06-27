// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vx_ctrl__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vx_ctrl::Vx_ctrl(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vx_ctrl__Syms(contextp(), _vcname__, this)}
    , i_clk{vlSymsp->TOP.i_clk}
    , i_nrst{vlSymsp->TOP.i_nrst}
    , i_cmd_valid{vlSymsp->TOP.i_cmd_valid}
    , i_cmd{vlSymsp->TOP.i_cmd}
    , o_rsp_valid{vlSymsp->TOP.o_rsp_valid}
    , o_rsp{vlSymsp->TOP.o_rsp}
    , o_wdata_valid{vlSymsp->TOP.o_wdata_valid}
    , o_wdata{vlSymsp->TOP.o_wdata}
    , i_rdata{vlSymsp->TOP.i_rdata}
    , o_addr{vlSymsp->TOP.o_addr}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vx_ctrl::Vx_ctrl(const char* _vcname__)
    : Vx_ctrl(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vx_ctrl::~Vx_ctrl() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vx_ctrl___024root___eval_debug_assertions(Vx_ctrl___024root* vlSelf);
#endif  // VL_DEBUG
void Vx_ctrl___024root___eval_static(Vx_ctrl___024root* vlSelf);
void Vx_ctrl___024root___eval_initial(Vx_ctrl___024root* vlSelf);
void Vx_ctrl___024root___eval_settle(Vx_ctrl___024root* vlSelf);
void Vx_ctrl___024root___eval(Vx_ctrl___024root* vlSelf);

void Vx_ctrl::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vx_ctrl::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vx_ctrl___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vx_ctrl___024root___eval_static(&(vlSymsp->TOP));
        Vx_ctrl___024root___eval_initial(&(vlSymsp->TOP));
        Vx_ctrl___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vx_ctrl___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vx_ctrl::eventsPending() { return false; }

uint64_t Vx_ctrl::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vx_ctrl::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vx_ctrl___024root___eval_final(Vx_ctrl___024root* vlSelf);

VL_ATTR_COLD void Vx_ctrl::final() {
    Vx_ctrl___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vx_ctrl::hierName() const { return vlSymsp->name(); }
const char* Vx_ctrl::modelName() const { return "Vx_ctrl"; }
unsigned Vx_ctrl::threads() const { return 1; }
void Vx_ctrl::prepareClone() const { contextp()->prepareClone(); }
void Vx_ctrl::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vx_ctrl::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vx_ctrl___024root__trace_decl_types(VerilatedVcd* tracep);

void Vx_ctrl___024root__trace_init_top(Vx_ctrl___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vx_ctrl___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vx_ctrl___024root*>(voidSelf);
    Vx_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vx_ctrl___024root__trace_decl_types(tracep);
    Vx_ctrl___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vx_ctrl___024root__trace_register(Vx_ctrl___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vx_ctrl::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vx_ctrl::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vx_ctrl___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
