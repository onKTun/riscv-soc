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
    vlSelfRef.__PVT__i_memory__DOT__mem[0U] = 0x500093U;
    vlSelfRef.__PVT__i_memory__DOT__mem[1U] = 0x700113U;
    vlSelfRef.__PVT__i_memory__DOT__mem[2U] = 0x2081b3U;
    vlSelfRef.__PVT__i_memory__DOT__mem[3U] = 0xc00213U;
    vlSelfRef.__PVT__i_memory__DOT__mem[4U] = 0x2419063U;
    vlSelfRef.__PVT__i_memory__DOT__mem[5U] = 0x10302023U;
    vlSelfRef.__PVT__i_memory__DOT__mem[6U] = 0x10002283U;
    vlSelfRef.__PVT__i_memory__DOT__mem[7U] = 0x429a63U;
    vlSelfRef.__PVT__i_memory__DOT__mem[8U] = 0x100313U;
    vlSelfRef.__PVT__i_memory__DOT__mem[9U] = 0x800003b7U;
    vlSelfRef.__PVT__i_memory__DOT__mem[0xaU] = 0x1063a223U;
    vlSelfRef.__PVT__i_memory__DOT__mem[0xbU] = 0x6fU;
    vlSelfRef.__PVT__i_memory__DOT__mem[0xcU] = 0x200313U;
    vlSelfRef.__PVT__i_memory__DOT__mem[0xdU] = 0x800003b7U;
    vlSelfRef.__PVT__i_memory__DOT__mem[0xeU] = 0x1063a223U;
    vlSelfRef.__PVT__i_memory__DOT__mem[0xfU] = 0x6fU;
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
        if (VL_UNLIKELY(vlSelfRef.__PVT__result_valid)) {
            if (VL_UNLIKELY((1U != vlSelfRef.__PVT__result_data))) {
                VL_WRITEF_NX("FAIL: cached program returned 0x%08x\n[%0t] %%Fatal: top_cache_axi_tb.v:91: Assertion failed in %Nriscv_top_tb\n",0,
                             32,vlSelfRef.__PVT__result_data,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("testbench/top_cache_axi/top_cache_axi_tb.v", 91, "", false);
            }
            if (VL_UNLIKELY((((0U == vlSelfRef.__PVT__i_read_bursts) 
                              | (0U == vlSelfRef.__PVT__d_read_bursts)) 
                             | (0U == vlSelfRef.__PVT__d_write_words)))) {
                VL_WRITEF_NX("FAIL: expected I-cache and D-cache AXI traffic was not observed\n[%0t] %%Fatal: top_cache_axi_tb.v:95: Assertion failed in %Nriscv_top_tb\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("testbench/top_cache_axi/top_cache_axi_tb.v", 95, "", false);
            }
            VL_WRITEF_NX("PASS: core + I-cache + D-cache + AXI test completed\n      I-read bursts=%0# D-read bursts=%0# D-write words=%0#\n",0,
                         32,vlSelfRef.__PVT__i_read_bursts,
                         32,vlSelfRef.__PVT__d_read_bursts,
                         32,vlSelfRef.__PVT__d_write_words);
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

VL_INLINE_OPT void Vriscv_top_tb_riscv_top_tb___nba_sequent__TOP__riscv_top_tb__1(Vriscv_top_tb_riscv_top_tb* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vriscv_top_tb_riscv_top_tb___nba_sequent__TOP__riscv_top_tb__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vdly__i_read_bursts;
    __Vdly__i_read_bursts = 0;
    IData/*31:0*/ __Vdly__d_write_words;
    __Vdly__d_write_words = 0;
    IData/*31:0*/ __Vdly__d_read_bursts;
    __Vdly__d_read_bursts = 0;
    CData/*0:0*/ __Vdly__d_bvalid;
    __Vdly__d_bvalid = 0;
    CData/*7:0*/ __VdlyVal__d_memory__DOT__mem__v0;
    __VdlyVal__d_memory__DOT__mem__v0 = 0;
    SData/*9:0*/ __VdlyDim0__d_memory__DOT__mem__v0;
    __VdlyDim0__d_memory__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__d_memory__DOT__mem__v0;
    __VdlySet__d_memory__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__d_memory__DOT__mem__v1;
    __VdlyVal__d_memory__DOT__mem__v1 = 0;
    SData/*9:0*/ __VdlyDim0__d_memory__DOT__mem__v1;
    __VdlyDim0__d_memory__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__d_memory__DOT__mem__v1;
    __VdlySet__d_memory__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__d_memory__DOT__mem__v2;
    __VdlyVal__d_memory__DOT__mem__v2 = 0;
    SData/*9:0*/ __VdlyDim0__d_memory__DOT__mem__v2;
    __VdlyDim0__d_memory__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__d_memory__DOT__mem__v2;
    __VdlySet__d_memory__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__d_memory__DOT__mem__v3;
    __VdlyVal__d_memory__DOT__mem__v3 = 0;
    SData/*9:0*/ __VdlyDim0__d_memory__DOT__mem__v3;
    __VdlyDim0__d_memory__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__d_memory__DOT__mem__v3;
    __VdlySet__d_memory__DOT__mem__v3 = 0;
    // Body
    __Vdly__d_write_words = vlSelfRef.__PVT__d_write_words;
    __VdlySet__d_memory__DOT__mem__v0 = 0U;
    __VdlySet__d_memory__DOT__mem__v1 = 0U;
    __VdlySet__d_memory__DOT__mem__v2 = 0U;
    __VdlySet__d_memory__DOT__mem__v3 = 0U;
    vlSelfRef.__Vdly__d_memory__DOT__read_left = vlSelfRef.__PVT__d_memory__DOT__read_left;
    vlSelfRef.__Vdly__d_memory__DOT__read_addr = vlSelfRef.__PVT__d_memory__DOT__read_addr;
    __Vdly__d_bvalid = vlSelfRef.__PVT__d_bvalid;
    __Vdly__d_read_bursts = vlSelfRef.__PVT__d_read_bursts;
    vlSelfRef.__Vdly__i_memory__DOT__read_addr = vlSelfRef.__PVT__i_memory__DOT__read_addr;
    vlSelfRef.__Vdly__i_memory__DOT__read_left = vlSelfRef.__PVT__i_memory__DOT__read_left;
    __Vdly__i_read_bursts = vlSelfRef.__PVT__i_read_bursts;
    if (vlSelfRef.__PVT__rst) {
        __Vdly__d_write_words = 0U;
        __Vdly__d_bvalid = 0U;
        __Vdly__d_read_bursts = 0U;
        __Vdly__i_read_bursts = 0U;
        vlSelfRef.__PVT__i_memory__DOT__write_words_o = 0U;
        vlSelfRef.__PVT__i_memory__DOT__result_data_o = 0U;
        vlSelfRef.__PVT__i_memory__DOT__result_valid_o = 0U;
        vlSelfRef.__PVT__i_bvalid = 0U;
        vlSelfRef.__PVT__i_memory__DOT__write_id = 0U;
        vlSelfRef.__PVT__i_memory__DOT__write_addr = 0U;
        vlSelfRef.__PVT__i_memory__DOT__write_active = 0U;
        vlSelfRef.__PVT__i_bid = 0U;
        vlSelfRef.__PVT__d_memory__DOT__write_addr = 0U;
        vlSelfRef.__PVT__d_bid = 0U;
        vlSelfRef.__PVT__d_memory__DOT__read_id = 0U;
        vlSelfRef.__PVT__i_memory__DOT__read_id = 0U;
        vlSelfRef.__PVT__result_valid = 0U;
        vlSelfRef.__PVT__result_data = 0U;
        vlSelfRef.__PVT__d_memory__DOT__write_id = 0U;
        vlSelfRef.__PVT__d_memory__DOT__write_active = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_wvalid_o) 
             & (IData)(vlSelfRef.__PVT__d_wready))) {
            __Vdly__d_write_words = ((IData)(1U) + vlSelfRef.__PVT__d_write_words);
            if (vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_wlast_o) {
                __Vdly__d_bvalid = 1U;
            }
        }
        if (vlSelfRef.__PVT__d_bvalid) {
            __Vdly__d_bvalid = 0U;
        }
        if (((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_arvalid_o) 
             & (~ (IData)(vlSelfRef.__PVT__d_memory__DOT__read_active)))) {
            __Vdly__d_read_bursts = ((IData)(1U) + vlSelfRef.__PVT__d_read_bursts);
            vlSelfRef.__PVT__d_memory__DOT__read_id 
                = vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_awid_o;
        }
        if (((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_icache.__PVT__axi_arvalid_o) 
             & (~ (IData)(vlSelfRef.__PVT__i_memory__DOT__read_active)))) {
            __Vdly__i_read_bursts = ((IData)(1U) + vlSelfRef.__PVT__i_read_bursts);
            vlSelfRef.__PVT__i_memory__DOT__read_id = 0U;
        }
        if (((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_awvalid_o) 
             & (IData)(vlSelfRef.__PVT__d_awready))) {
            vlSelfRef.__PVT__d_memory__DOT__write_addr 
                = vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_awaddr_o;
        }
        if (((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_wvalid_o) 
             & (IData)(vlSelfRef.__PVT__d_wready))) {
            if ((1U & (~ (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_wlast_o)))) {
                vlSelfRef.__PVT__d_memory__DOT__write_addr 
                    = ((IData)(4U) + vlSelfRef.__PVT__d_memory__DOT__active_write_addr);
            }
            if (vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_wlast_o) {
                vlSelfRef.__PVT__d_bid = ((IData)(vlSelfRef.__PVT__d_memory__DOT__write_active)
                                           ? (IData)(vlSelfRef.__PVT__d_memory__DOT__write_id)
                                           : (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_awid_o));
            }
        }
        if (((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_awvalid_o) 
             & (IData)(vlSelfRef.__PVT__d_awready))) {
            vlSelfRef.__PVT__d_memory__DOT__write_id 
                = vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_awid_o;
            vlSelfRef.__PVT__d_memory__DOT__write_active = 1U;
        }
        if (((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_wvalid_o) 
             & (IData)(vlSelfRef.__PVT__d_wready))) {
            if ((0x80000104U == vlSelfRef.__PVT__d_memory__DOT__active_write_addr)) {
                vlSelfRef.__PVT__result_valid = 1U;
                vlSelfRef.__PVT__result_data = vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_wdata_o;
            }
            vlSelfRef.__PVT__d_memory__DOT__write_active 
                = (1U & (~ (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_wlast_o)));
        }
    }
    if ((1U & (~ (IData)(vlSelfRef.__PVT__rst)))) {
        if (((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_wvalid_o) 
             & (IData)(vlSelfRef.__PVT__d_wready))) {
            if ((0x400U > (vlSelfRef.__PVT__d_memory__DOT__active_write_addr 
                           >> 2U))) {
                if ((1U & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_wstrb_o))) {
                    __VdlyVal__d_memory__DOT__mem__v0 
                        = (0xffU & vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_wdata_o);
                    __VdlyDim0__d_memory__DOT__mem__v0 
                        = (0x3ffU & (vlSelfRef.__PVT__d_memory__DOT__active_write_addr 
                                     >> 2U));
                    __VdlySet__d_memory__DOT__mem__v0 = 1U;
                }
                if ((2U & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_wstrb_o))) {
                    __VdlyVal__d_memory__DOT__mem__v1 
                        = (0xffU & (vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_wdata_o 
                                    >> 8U));
                    __VdlyDim0__d_memory__DOT__mem__v1 
                        = (0x3ffU & (vlSelfRef.__PVT__d_memory__DOT__active_write_addr 
                                     >> 2U));
                    __VdlySet__d_memory__DOT__mem__v1 = 1U;
                }
                if ((4U & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_wstrb_o))) {
                    __VdlyVal__d_memory__DOT__mem__v2 
                        = (0xffU & (vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_wdata_o 
                                    >> 0x10U));
                    __VdlyDim0__d_memory__DOT__mem__v2 
                        = (0x3ffU & (vlSelfRef.__PVT__d_memory__DOT__active_write_addr 
                                     >> 2U));
                    __VdlySet__d_memory__DOT__mem__v2 = 1U;
                }
                if ((8U & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_wstrb_o))) {
                    __VdlyVal__d_memory__DOT__mem__v3 
                        = (vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_wdata_o 
                           >> 0x18U);
                    __VdlyDim0__d_memory__DOT__mem__v3 
                        = (0x3ffU & (vlSelfRef.__PVT__d_memory__DOT__active_write_addr 
                                     >> 2U));
                    __VdlySet__d_memory__DOT__mem__v3 = 1U;
                }
            }
        }
    }
    vlSelfRef.__PVT__d_write_words = __Vdly__d_write_words;
    if (__VdlySet__d_memory__DOT__mem__v0) {
        vlSelfRef.__PVT__d_memory__DOT__mem[__VdlyDim0__d_memory__DOT__mem__v0] 
            = ((0xffffff00U & vlSelfRef.__PVT__d_memory__DOT__mem
                [__VdlyDim0__d_memory__DOT__mem__v0]) 
               | (IData)(__VdlyVal__d_memory__DOT__mem__v0));
    }
    if (__VdlySet__d_memory__DOT__mem__v1) {
        vlSelfRef.__PVT__d_memory__DOT__mem[__VdlyDim0__d_memory__DOT__mem__v1] 
            = ((0xffff00ffU & vlSelfRef.__PVT__d_memory__DOT__mem
                [__VdlyDim0__d_memory__DOT__mem__v1]) 
               | ((IData)(__VdlyVal__d_memory__DOT__mem__v1) 
                  << 8U));
    }
    if (__VdlySet__d_memory__DOT__mem__v2) {
        vlSelfRef.__PVT__d_memory__DOT__mem[__VdlyDim0__d_memory__DOT__mem__v2] 
            = ((0xff00ffffU & vlSelfRef.__PVT__d_memory__DOT__mem
                [__VdlyDim0__d_memory__DOT__mem__v2]) 
               | ((IData)(__VdlyVal__d_memory__DOT__mem__v2) 
                  << 0x10U));
    }
    if (__VdlySet__d_memory__DOT__mem__v3) {
        vlSelfRef.__PVT__d_memory__DOT__mem[__VdlyDim0__d_memory__DOT__mem__v3] 
            = ((0xffffffU & vlSelfRef.__PVT__d_memory__DOT__mem
                [__VdlyDim0__d_memory__DOT__mem__v3]) 
               | ((IData)(__VdlyVal__d_memory__DOT__mem__v3) 
                  << 0x18U));
    }
    vlSelfRef.__PVT__d_bvalid = __Vdly__d_bvalid;
    vlSelfRef.__PVT__d_read_bursts = __Vdly__d_read_bursts;
    vlSelfRef.__PVT__i_read_bursts = __Vdly__i_read_bursts;
}

VL_INLINE_OPT void Vriscv_top_tb_riscv_top_tb___nba_sequent__TOP__riscv_top_tb__2(Vriscv_top_tb_riscv_top_tb* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vriscv_top_tb_riscv_top_tb___nba_sequent__TOP__riscv_top_tb__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__d_awready = (1U & ((~ (IData)(vlSelfRef.__PVT__d_memory__DOT__write_active)) 
                                        & (~ (IData)(vlSelfRef.__PVT__d_bvalid))));
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__PVT__d_memory__DOT__read_active = 0U;
        vlSelfRef.__Vdly__d_memory__DOT__read_addr = 0U;
        vlSelfRef.__Vdly__d_memory__DOT__read_left = 0U;
        vlSelfRef.__PVT__i_memory__DOT__read_active = 0U;
        vlSelfRef.__Vdly__i_memory__DOT__read_addr = 0U;
        vlSelfRef.__Vdly__i_memory__DOT__read_left = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_arvalid_o) 
             & (IData)(vlSelfRef.__PVT__d_arready))) {
            vlSelfRef.__PVT__d_memory__DOT__read_active = 1U;
            vlSelfRef.__Vdly__d_memory__DOT__read_addr 
                = vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_awaddr_o;
            vlSelfRef.__Vdly__d_memory__DOT__read_left 
                = vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_awlen_o;
        } else if (vlSelfRef.__PVT__d_rvalid) {
            if ((0U == (IData)(vlSelfRef.__PVT__d_memory__DOT__read_left))) {
                vlSelfRef.__PVT__d_memory__DOT__read_active = 0U;
            } else {
                vlSelfRef.__Vdly__d_memory__DOT__read_addr 
                    = ((IData)(4U) + vlSelfRef.__PVT__d_memory__DOT__read_addr);
                vlSelfRef.__Vdly__d_memory__DOT__read_left 
                    = (0xffU & ((IData)(vlSelfRef.__PVT__d_memory__DOT__read_left) 
                                - (IData)(1U)));
            }
        }
        if (((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_icache.__PVT__axi_arvalid_o) 
             & (IData)(vlSelfRef.__PVT__i_arready))) {
            vlSelfRef.__PVT__i_memory__DOT__read_active = 1U;
            vlSelfRef.__Vdly__i_memory__DOT__read_addr 
                = (0xffffffe0U & vlSymsp->TOP__riscv_top_tb__dut__u_icache.__PVT__lookup_addr_q);
            vlSelfRef.__Vdly__i_memory__DOT__read_left = 7U;
        } else if (vlSelfRef.__PVT__i_rvalid) {
            if ((0U == (IData)(vlSelfRef.__PVT__i_memory__DOT__read_left))) {
                vlSelfRef.__PVT__i_memory__DOT__read_active = 0U;
            } else {
                vlSelfRef.__Vdly__i_memory__DOT__read_addr 
                    = ((IData)(4U) + vlSelfRef.__PVT__i_memory__DOT__read_addr);
                vlSelfRef.__Vdly__i_memory__DOT__read_left 
                    = (0xffU & ((IData)(vlSelfRef.__PVT__i_memory__DOT__read_left) 
                                - (IData)(1U)));
            }
        }
    }
    vlSelfRef.__PVT__d_wready = ((IData)(vlSelfRef.__PVT__d_memory__DOT__write_active) 
                                 | ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_awvalid_o) 
                                    & (IData)(vlSelfRef.__PVT__d_awready)));
    vlSelfRef.__PVT__d_memory__DOT__read_left = vlSelfRef.__Vdly__d_memory__DOT__read_left;
    vlSelfRef.__PVT__d_memory__DOT__read_addr = vlSelfRef.__Vdly__d_memory__DOT__read_addr;
    vlSelfRef.__PVT__i_memory__DOT__read_addr = vlSelfRef.__Vdly__i_memory__DOT__read_addr;
    vlSelfRef.__PVT__i_memory__DOT__read_left = vlSelfRef.__Vdly__i_memory__DOT__read_left;
    vlSelfRef.__PVT__d_rdata = ((0x400U > (vlSelfRef.__PVT__d_memory__DOT__read_addr 
                                           >> 2U)) ? 
                                vlSelfRef.__PVT__d_memory__DOT__mem
                                [(0x3ffU & (vlSelfRef.__PVT__d_memory__DOT__read_addr 
                                            >> 2U))]
                                 : 0U);
    vlSelfRef.__PVT__d_arready = (1U & (~ (IData)(vlSelfRef.__PVT__d_memory__DOT__read_active)));
    vlSelfRef.__PVT__d_rvalid = vlSelfRef.__PVT__d_memory__DOT__read_active;
    vlSelfRef.__PVT__d_rlast = ((IData)(vlSelfRef.__PVT__d_memory__DOT__read_active) 
                                & (0U == (IData)(vlSelfRef.__PVT__d_memory__DOT__read_left)));
    vlSelfRef.__PVT__i_arready = (1U & (~ (IData)(vlSelfRef.__PVT__i_memory__DOT__read_active)));
    vlSelfRef.__PVT__i_rvalid = vlSelfRef.__PVT__i_memory__DOT__read_active;
    vlSelfRef.__PVT__i_rlast = ((IData)(vlSelfRef.__PVT__i_memory__DOT__read_active) 
                                & (0U == (IData)(vlSelfRef.__PVT__i_memory__DOT__read_left)));
}

VL_INLINE_OPT void Vriscv_top_tb_riscv_top_tb___nba_sequent__TOP__riscv_top_tb__3(Vriscv_top_tb_riscv_top_tb* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vriscv_top_tb_riscv_top_tb___nba_sequent__TOP__riscv_top_tb__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__d_memory__DOT__active_write_addr 
        = ((IData)(vlSelfRef.__PVT__d_memory__DOT__write_active)
            ? vlSelfRef.__PVT__d_memory__DOT__write_addr
            : vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_awaddr_o);
}
