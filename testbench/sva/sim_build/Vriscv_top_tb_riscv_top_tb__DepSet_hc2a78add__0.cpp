// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top_tb.h for the primary calling header

#include "Vriscv_top_tb__pch.h"
#include "Vriscv_top_tb__Syms.h"
#include "Vriscv_top_tb_riscv_top_tb.h"

VL_INLINE_OPT VlCoroutine Vriscv_top_tb_riscv_top_tb___eval_initial__TOP__riscv_top_tb__Vtiming__0(Vriscv_top_tb_riscv_top_tb* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vriscv_top_tb_riscv_top_tb___eval_initial__TOP__riscv_top_tb__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0x3e8ULL, 
                                            nullptr, 
                                            "testbench/top_cache_axi/top_cache_axi_tb.v", 
                                            109);
    vlSymsp->TOP__riscv_top_tb__i_memory.mem[0U] = 0x500093U;
    vlSymsp->TOP__riscv_top_tb__i_memory.mem[1U] = 0x700113U;
    vlSymsp->TOP__riscv_top_tb__i_memory.mem[2U] = 0x2081b3U;
    vlSymsp->TOP__riscv_top_tb__i_memory.mem[3U] = 0xc00213U;
    vlSymsp->TOP__riscv_top_tb__i_memory.mem[4U] = 0x2419063U;
    vlSymsp->TOP__riscv_top_tb__i_memory.mem[5U] = 0x10302023U;
    vlSymsp->TOP__riscv_top_tb__i_memory.mem[6U] = 0x10002283U;
    vlSymsp->TOP__riscv_top_tb__i_memory.mem[7U] = 0x429a63U;
    vlSymsp->TOP__riscv_top_tb__i_memory.mem[8U] = 0x100313U;
    vlSymsp->TOP__riscv_top_tb__i_memory.mem[9U] = 0x800003b7U;
    vlSymsp->TOP__riscv_top_tb__i_memory.mem[0xaU] = 0x1063a223U;
    vlSymsp->TOP__riscv_top_tb__i_memory.mem[0xbU] = 0x6fU;
    vlSymsp->TOP__riscv_top_tb__i_memory.mem[0xcU] = 0x200313U;
    vlSymsp->TOP__riscv_top_tb__i_memory.mem[0xdU] = 0x800003b7U;
    vlSymsp->TOP__riscv_top_tb__i_memory.mem[0xeU] = 0x1063a223U;
    vlSymsp->TOP__riscv_top_tb__i_memory.mem[0xfU] = 0x6fU;
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x5f746f70U;
    __Vtemp_1[2U] = 0x69736376U;
    __Vtemp_1[3U] = 0x72U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    co_await vlSymsp->TOP.__VtrigSched_hdd9481ea__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(posedge riscv_top_tb.clk)", 
                                                            "testbench/top_cache_axi/top_cache_axi_tb.v", 
                                                            130);
    co_await vlSymsp->TOP.__VtrigSched_hdd9481ea__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(posedge riscv_top_tb.clk)", 
                                                            "testbench/top_cache_axi/top_cache_axi_tb.v", 
                                                            130);
    co_await vlSymsp->TOP.__VtrigSched_hdd9481ea__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(posedge riscv_top_tb.clk)", 
                                                            "testbench/top_cache_axi/top_cache_axi_tb.v", 
                                                            130);
    co_await vlSymsp->TOP.__VtrigSched_hdd9481ea__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(posedge riscv_top_tb.clk)", 
                                                            "testbench/top_cache_axi/top_cache_axi_tb.v", 
                                                            130);
    co_await vlSymsp->TOP.__VtrigSched_hdd9481ea__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(posedge riscv_top_tb.clk)", 
                                                            "testbench/top_cache_axi/top_cache_axi_tb.v", 
                                                            130);
    co_await vlSymsp->TOP.__VdlySched.delay(0x3e8ULL, 
                                            nullptr, 
                                            "testbench/top_cache_axi/top_cache_axi_tb.v", 
                                            131);
    vlSelfRef.__PVT__rst = 0U;
}

VL_INLINE_OPT VlCoroutine Vriscv_top_tb_riscv_top_tb___eval_initial__TOP__riscv_top_tb__Vtiming__1(Vriscv_top_tb_riscv_top_tb* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vriscv_top_tb_riscv_top_tb___eval_initial__TOP__riscv_top_tb__Vtiming__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VdlySched.delay(0x1388ULL, 
                                                nullptr, 
                                                "testbench/top_cache_axi/top_cache_axi_tb.v", 
                                                33);
        vlSelfRef.__PVT__clk = (1U & (~ (IData)(vlSelfRef.__PVT__clk)));
    }
}

VL_INLINE_OPT void Vriscv_top_tb_riscv_top_tb___nba_sequent__TOP__riscv_top_tb__0(Vriscv_top_tb_riscv_top_tb* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vriscv_top_tb_riscv_top_tb___nba_sequent__TOP__riscv_top_tb__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vdly__cycles;
    __Vdly__cycles = 0;
    // Body
    __Vdly__cycles = vlSelfRef.__PVT__cycles;
    if ((1U & (~ (IData)(vlSelfRef.__PVT__rst)))) {
        __Vdly__cycles = ((IData)(1U) + vlSelfRef.__PVT__cycles);
        if (VL_UNLIKELY(vlSymsp->TOP__riscv_top_tb__d_memory.__PVT__result_valid_o)) {
            if (VL_UNLIKELY((1U != vlSymsp->TOP__riscv_top_tb__d_memory.__PVT__result_data_o))) {
                VL_WRITEF_NX("FAIL: cached program returned 0x%08x\n[%0t] %%Fatal: top_cache_axi_tb.v:91: Assertion failed in %Nriscv_top_tb\n",0,
                             32,vlSymsp->TOP__riscv_top_tb__d_memory.__PVT__result_data_o,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("testbench/top_cache_axi/top_cache_axi_tb.v", 91, "", false);
            }
            if (VL_UNLIKELY((((0U == vlSymsp->TOP__riscv_top_tb__i_memory.__PVT__read_bursts_o) 
                              | (0U == vlSymsp->TOP__riscv_top_tb__d_memory.__PVT__read_bursts_o)) 
                             | (0U == vlSymsp->TOP__riscv_top_tb__d_memory.__PVT__write_words_o)))) {
                VL_WRITEF_NX("FAIL: expected I-cache and D-cache AXI traffic was not observed\n[%0t] %%Fatal: top_cache_axi_tb.v:95: Assertion failed in %Nriscv_top_tb\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("testbench/top_cache_axi/top_cache_axi_tb.v", 95, "", false);
            }
            VL_WRITEF_NX("PASS: core + I-cache + D-cache + AXI test completed\n      I-read bursts=%0# D-read bursts=%0# D-write words=%0#\n",0,
                         32,vlSymsp->TOP__riscv_top_tb__i_memory.__PVT__read_bursts_o,
                         32,vlSymsp->TOP__riscv_top_tb__d_memory.__PVT__read_bursts_o,
                         32,vlSymsp->TOP__riscv_top_tb__d_memory.__PVT__write_words_o);
            VL_FINISH_MT("testbench/top_cache_axi/top_cache_axi_tb.v", 99, "");
        }
        if (VL_UNLIKELY(VL_LTES_III(32, 0xbb8U, vlSelfRef.__PVT__cycles))) {
            VL_WRITEF_NX("FAIL: timeout after 3000 cycles\n[%0t] %%Fatal: top_cache_axi_tb.v:103: Assertion failed in %Nriscv_top_tb\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("testbench/top_cache_axi/top_cache_axi_tb.v", 103, "", false);
        }
    }
    vlSelfRef.__PVT__cycles = __Vdly__cycles;
}
