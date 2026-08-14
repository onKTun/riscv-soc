// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_muldiv_csr_tb.h for the primary calling header

#include "Vriscv_muldiv_csr_tb__pch.h"
#include "Vriscv_muldiv_csr_tb__Syms.h"
#include "Vriscv_muldiv_csr_tb_riscv_muldiv_csr_tb.h"

VL_INLINE_OPT VlCoroutine Vriscv_muldiv_csr_tb_riscv_muldiv_csr_tb___eval_initial__TOP__riscv_muldiv_csr_tb__Vtiming__0(Vriscv_muldiv_csr_tb_riscv_muldiv_csr_tb* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_muldiv_csr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vriscv_muldiv_csr_tb_riscv_muldiv_csr_tb___eval_initial__TOP__riscv_muldiv_csr_tb__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<6>/*191:0*/ __Vtemp_1;
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0x3e8ULL, 
                                            nullptr, 
                                            "testbench/sva/riscv_muldiv_csr_tb.sv", 
                                            124);
    vlSymsp->TOP__riscv_muldiv_csr_tb__i_memory.mem[0U] = 0x600093U;
    vlSymsp->TOP__riscv_muldiv_csr_tb__i_memory.mem[1U] = 0x700113U;
    vlSymsp->TOP__riscv_muldiv_csr_tb__i_memory.mem[2U] = 0x22081b3U;
    vlSymsp->TOP__riscv_muldiv_csr_tb__i_memory.mem[3U] = 0x213U;
    vlSymsp->TOP__riscv_muldiv_csr_tb__i_memory.mem[4U] = 0x24082b3U;
    vlSymsp->TOP__riscv_muldiv_csr_tb__i_memory.mem[5U] = 0xfff00313U;
    vlSymsp->TOP__riscv_muldiv_csr_tb__i_memory.mem[6U] = 0x26313b3U;
    vlSymsp->TOP__riscv_muldiv_csr_tb__i_memory.mem[7U] = 0x2633433U;
    vlSymsp->TOP__riscv_muldiv_csr_tb__i_memory.mem[8U] = 0x26324b3U;
    vlSymsp->TOP__riscv_muldiv_csr_tb__i_memory.mem[9U] = 0x1400513U;
    vlSymsp->TOP__riscv_muldiv_csr_tb__i_memory.mem[0xaU] = 0x300593U;
    vlSymsp->TOP__riscv_muldiv_csr_tb__i_memory.mem[0xbU] = 0x2b54633U;
    vlSymsp->TOP__riscv_muldiv_csr_tb__i_memory.mem[0xcU] = 0x2b566b3U;
    vlSymsp->TOP__riscv_muldiv_csr_tb__i_memory.mem[0xdU] = 0x2b55733U;
    vlSymsp->TOP__riscv_muldiv_csr_tb__i_memory.mem[0xeU] = 0x2b577b3U;
    vlSymsp->TOP__riscv_muldiv_csr_tb__i_memory.mem[0xfU] = 0x813U;
    vlSymsp->TOP__riscv_muldiv_csr_tb__i_memory.mem[0x10U] = 0x30548b3U;
    vlSymsp->TOP__riscv_muldiv_csr_tb__i_memory.mem[0x11U] = 0x3055933U;
    vlSymsp->TOP__riscv_muldiv_csr_tb__i_memory.mem[0x12U] = 0x30569b3U;
    vlSymsp->TOP__riscv_muldiv_csr_tb__i_memory.mem[0x13U] = 0x3057a33U;
    vlSymsp->TOP__riscv_muldiv_csr_tb__i_memory.mem[0x14U] = 0x80000ab7U;
    vlSymsp->TOP__riscv_muldiv_csr_tb__i_memory.mem[0x15U] = 0xfff00b13U;
    vlSymsp->TOP__riscv_muldiv_csr_tb__i_memory.mem[0x16U] = 0x36acbb3U;
    vlSymsp->TOP__riscv_muldiv_csr_tb__i_memory.mem[0x17U] = 0x36aec33U;
    vlSymsp->TOP__riscv_muldiv_csr_tb__i_memory.mem[0x18U] = 0x5500c93U;
    vlSymsp->TOP__riscv_muldiv_csr_tb__i_memory.mem[0x19U] = 0x340c9073U;
    vlSymsp->TOP__riscv_muldiv_csr_tb__i_memory.mem[0x1aU] = 0x34002d73U;
    vlSymsp->TOP__riscv_muldiv_csr_tb__i_memory.mem[0x1bU] = 0x100e13U;
    vlSymsp->TOP__riscv_muldiv_csr_tb__i_memory.mem[0x1cU] = 0x80000eb7U;
    vlSymsp->TOP__riscv_muldiv_csr_tb__i_memory.mem[0x1dU] = 0x11cea223U;
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x725f7462U;
    __Vtemp_1[2U] = 0x765f6373U;
    __Vtemp_1[3U] = 0x756c6469U;
    __Vtemp_1[4U] = 0x63765f6dU;
    __Vtemp_1[5U] = 0x726973U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(6, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    co_await vlSymsp->TOP.__VtrigSched_hbaacaee0__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(posedge riscv_muldiv_csr_tb.clk)", 
                                                            "testbench/sva/riscv_muldiv_csr_tb.sv", 
                                                            178);
    co_await vlSymsp->TOP.__VtrigSched_hbaacaee0__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(posedge riscv_muldiv_csr_tb.clk)", 
                                                            "testbench/sva/riscv_muldiv_csr_tb.sv", 
                                                            178);
    co_await vlSymsp->TOP.__VtrigSched_hbaacaee0__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(posedge riscv_muldiv_csr_tb.clk)", 
                                                            "testbench/sva/riscv_muldiv_csr_tb.sv", 
                                                            178);
    co_await vlSymsp->TOP.__VtrigSched_hbaacaee0__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(posedge riscv_muldiv_csr_tb.clk)", 
                                                            "testbench/sva/riscv_muldiv_csr_tb.sv", 
                                                            178);
    co_await vlSymsp->TOP.__VtrigSched_hbaacaee0__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(posedge riscv_muldiv_csr_tb.clk)", 
                                                            "testbench/sva/riscv_muldiv_csr_tb.sv", 
                                                            178);
    co_await vlSymsp->TOP.__VdlySched.delay(0x3e8ULL, 
                                            nullptr, 
                                            "testbench/sva/riscv_muldiv_csr_tb.sv", 
                                            179);
    vlSelfRef.__PVT__rst = 0U;
}

VL_INLINE_OPT VlCoroutine Vriscv_muldiv_csr_tb_riscv_muldiv_csr_tb___eval_initial__TOP__riscv_muldiv_csr_tb__Vtiming__1(Vriscv_muldiv_csr_tb_riscv_muldiv_csr_tb* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_muldiv_csr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vriscv_muldiv_csr_tb_riscv_muldiv_csr_tb___eval_initial__TOP__riscv_muldiv_csr_tb__Vtiming__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VdlySched.delay(0x1388ULL, 
                                                nullptr, 
                                                "testbench/sva/riscv_muldiv_csr_tb.sv", 
                                                41);
        vlSelfRef.__PVT__clk = (1U & (~ (IData)(vlSelfRef.__PVT__clk)));
    }
}

VL_INLINE_OPT void Vriscv_muldiv_csr_tb_riscv_muldiv_csr_tb___nba_sequent__TOP__riscv_muldiv_csr_tb__0(Vriscv_muldiv_csr_tb_riscv_muldiv_csr_tb* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_muldiv_csr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vriscv_muldiv_csr_tb_riscv_muldiv_csr_tb___nba_sequent__TOP__riscv_muldiv_csr_tb__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vdly__cycles;
    __Vdly__cycles = 0;
    // Body
    __Vdly__cycles = vlSelfRef.__PVT__cycles;
    if ((1U & (~ (IData)(vlSelfRef.__PVT__rst)))) {
        __Vdly__cycles = ((IData)(1U) + vlSelfRef.__PVT__cycles);
        if (VL_UNLIKELY(vlSymsp->TOP__riscv_muldiv_csr_tb__d_memory.__PVT__result_valid_o)) {
            if (VL_UNLIKELY((1U != vlSymsp->TOP__riscv_muldiv_csr_tb__d_memory.__PVT__result_data_o))) {
                VL_WRITEF_NX("FAIL: MUL/DIV/CSR program returned 0x%08x\n[%0t] %%Fatal: riscv_muldiv_csr_tb.sv:111: Assertion failed in %Nriscv_muldiv_csr_tb\n",0,
                             32,vlSymsp->TOP__riscv_muldiv_csr_tb__d_memory.__PVT__result_data_o,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("testbench/sva/riscv_muldiv_csr_tb.sv", 111, "", false);
            }
            VL_WRITEF_NX("PASS: MUL/DIV/CSR directed program completed\n",0);
            VL_FINISH_MT("testbench/sva/riscv_muldiv_csr_tb.sv", 114, "");
        }
        if (VL_UNLIKELY(VL_LTES_III(32, 0xbb8U, vlSelfRef.__PVT__cycles))) {
            VL_WRITEF_NX("FAIL: timeout after 3000 cycles\n[%0t] %%Fatal: riscv_muldiv_csr_tb.sv:118: Assertion failed in %Nriscv_muldiv_csr_tb\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("testbench/sva/riscv_muldiv_csr_tb.sv", 118, "", false);
        }
    }
    vlSelfRef.__PVT__cycles = __Vdly__cycles;
}
