// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vriscv_top_tb.h for the primary calling header

#ifndef VERILATED_VRISCV_TOP_TB___024ROOT_H_
#define VERILATED_VRISCV_TOP_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
class Vriscv_top_tb_riscv_top_tb;


class Vriscv_top_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vriscv_top_tb___024root final : public VerilatedModule {
  public:
    // CELLS
    Vriscv_top_tb_riscv_top_tb* riscv_top_tb;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__riscv_top_tb____PVT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__riscv_top_tb____PVT__rst__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hdd9481ea__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vriscv_top_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vriscv_top_tb___024root(Vriscv_top_tb__Syms* symsp, const char* v__name);
    ~Vriscv_top_tb___024root();
    VL_UNCOPYABLE(Vriscv_top_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
