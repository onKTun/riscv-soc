// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top_tb.h for the primary calling header

#include "Vriscv_top_tb__pch.h"
#include "Vriscv_top_tb__Syms.h"
#include "Vriscv_top_tb_axi_memory_model__R80000104.h"

VL_INLINE_OPT void Vriscv_top_tb_axi_memory_model__R80000104___nba_sequent__TOP__riscv_top_tb__d_memory__0(Vriscv_top_tb_axi_memory_model__R80000104* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_top_tb_axi_memory_model__R80000104___nba_sequent__TOP__riscv_top_tb__d_memory__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vdly__write_words_o;
    __Vdly__write_words_o = 0;
    IData/*31:0*/ __Vdly__read_bursts_o;
    __Vdly__read_bursts_o = 0;
    CData/*0:0*/ __Vdly__bvalid_o;
    __Vdly__bvalid_o = 0;
    CData/*7:0*/ __VdlyVal__mem__v0;
    __VdlyVal__mem__v0 = 0;
    SData/*9:0*/ __VdlyDim0__mem__v0;
    __VdlyDim0__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__mem__v0;
    __VdlySet__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__mem__v1;
    __VdlyVal__mem__v1 = 0;
    SData/*9:0*/ __VdlyDim0__mem__v1;
    __VdlyDim0__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__mem__v1;
    __VdlySet__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__mem__v2;
    __VdlyVal__mem__v2 = 0;
    SData/*9:0*/ __VdlyDim0__mem__v2;
    __VdlyDim0__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__mem__v2;
    __VdlySet__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__mem__v3;
    __VdlyVal__mem__v3 = 0;
    SData/*9:0*/ __VdlyDim0__mem__v3;
    __VdlyDim0__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__mem__v3;
    __VdlySet__mem__v3 = 0;
    // Body
    __Vdly__write_words_o = vlSelfRef.__PVT__write_words_o;
    __VdlySet__mem__v0 = 0U;
    __VdlySet__mem__v1 = 0U;
    __VdlySet__mem__v2 = 0U;
    __VdlySet__mem__v3 = 0U;
    vlSelfRef.__Vdly__read_left = vlSelfRef.__PVT__read_left;
    vlSelfRef.__Vdly__read_addr = vlSelfRef.__PVT__read_addr;
    __Vdly__bvalid_o = vlSelfRef.__PVT__bvalid_o;
    __Vdly__read_bursts_o = vlSelfRef.__PVT__read_bursts_o;
    if (vlSymsp->TOP__riscv_top_tb.__PVT__rst) {
        __Vdly__write_words_o = 0U;
        __Vdly__bvalid_o = 0U;
        __Vdly__read_bursts_o = 0U;
        vlSelfRef.__PVT__write_addr = 0U;
        vlSelfRef.__PVT__bid_o = 0U;
        vlSelfRef.__PVT__read_id = 0U;
        vlSelfRef.__PVT__result_valid_o = 0U;
        vlSelfRef.__PVT__result_data_o = 0U;
        vlSelfRef.__PVT__write_id = 0U;
        vlSelfRef.__PVT__write_active = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_wvalid_o) 
             & (IData)(vlSelfRef.__PVT__wready_o))) {
            __Vdly__write_words_o = ((IData)(1U) + vlSelfRef.__PVT__write_words_o);
            if (vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_wlast_o) {
                __Vdly__bvalid_o = 1U;
            }
        }
        if (vlSelfRef.__PVT__bvalid_o) {
            __Vdly__bvalid_o = 0U;
        }
        if (((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_arvalid_o) 
             & (~ (IData)(vlSelfRef.__PVT__read_active)))) {
            __Vdly__read_bursts_o = ((IData)(1U) + vlSelfRef.__PVT__read_bursts_o);
            vlSelfRef.__PVT__read_id = vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_awid_o;
        }
        if (((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_awvalid_o) 
             & (IData)(vlSelfRef.__PVT__awready_o))) {
            vlSelfRef.__PVT__write_addr = vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_awaddr_o;
        }
        if (((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_wvalid_o) 
             & (IData)(vlSelfRef.__PVT__wready_o))) {
            if ((1U & (~ (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_wlast_o)))) {
                vlSelfRef.__PVT__write_addr = ((IData)(4U) 
                                               + vlSelfRef.__PVT__active_write_addr);
            }
            if (vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_wlast_o) {
                vlSelfRef.__PVT__bid_o = ((IData)(vlSelfRef.__PVT__write_active)
                                           ? (IData)(vlSelfRef.__PVT__write_id)
                                           : (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_awid_o));
            }
        }
        if (((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_awvalid_o) 
             & (IData)(vlSelfRef.__PVT__awready_o))) {
            vlSelfRef.__PVT__write_id = vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_awid_o;
            vlSelfRef.__PVT__write_active = 1U;
        }
        if (((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_wvalid_o) 
             & (IData)(vlSelfRef.__PVT__wready_o))) {
            if ((0x80000104U == vlSelfRef.__PVT__active_write_addr)) {
                vlSelfRef.__PVT__result_valid_o = 1U;
                vlSelfRef.__PVT__result_data_o = vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_wdata_o;
            }
            vlSelfRef.__PVT__write_active = (1U & (~ (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_wlast_o)));
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__rst)))) {
        if (((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_wvalid_o) 
             & (IData)(vlSelfRef.__PVT__wready_o))) {
            if ((0x400U > (vlSelfRef.__PVT__active_write_addr 
                           >> 2U))) {
                if ((1U & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_wstrb_o))) {
                    __VdlyVal__mem__v0 = (0xffU & vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_wdata_o);
                    __VdlyDim0__mem__v0 = (0x3ffU & 
                                           (vlSelfRef.__PVT__active_write_addr 
                                            >> 2U));
                    __VdlySet__mem__v0 = 1U;
                }
                if ((2U & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_wstrb_o))) {
                    __VdlyVal__mem__v1 = (0xffU & (vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_wdata_o 
                                                   >> 8U));
                    __VdlyDim0__mem__v1 = (0x3ffU & 
                                           (vlSelfRef.__PVT__active_write_addr 
                                            >> 2U));
                    __VdlySet__mem__v1 = 1U;
                }
                if ((4U & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_wstrb_o))) {
                    __VdlyVal__mem__v2 = (0xffU & (vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_wdata_o 
                                                   >> 0x10U));
                    __VdlyDim0__mem__v2 = (0x3ffU & 
                                           (vlSelfRef.__PVT__active_write_addr 
                                            >> 2U));
                    __VdlySet__mem__v2 = 1U;
                }
                if ((8U & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_wstrb_o))) {
                    __VdlyVal__mem__v3 = (vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_wdata_o 
                                          >> 0x18U);
                    __VdlyDim0__mem__v3 = (0x3ffU & 
                                           (vlSelfRef.__PVT__active_write_addr 
                                            >> 2U));
                    __VdlySet__mem__v3 = 1U;
                }
            }
        }
    }
    vlSelfRef.__PVT__write_words_o = __Vdly__write_words_o;
    if (__VdlySet__mem__v0) {
        vlSelfRef.mem[__VdlyDim0__mem__v0] = ((0xffffff00U 
                                               & vlSelfRef.mem
                                               [__VdlyDim0__mem__v0]) 
                                              | (IData)(__VdlyVal__mem__v0));
    }
    if (__VdlySet__mem__v1) {
        vlSelfRef.mem[__VdlyDim0__mem__v1] = ((0xffff00ffU 
                                               & vlSelfRef.mem
                                               [__VdlyDim0__mem__v1]) 
                                              | ((IData)(__VdlyVal__mem__v1) 
                                                 << 8U));
    }
    if (__VdlySet__mem__v2) {
        vlSelfRef.mem[__VdlyDim0__mem__v2] = ((0xff00ffffU 
                                               & vlSelfRef.mem
                                               [__VdlyDim0__mem__v2]) 
                                              | ((IData)(__VdlyVal__mem__v2) 
                                                 << 0x10U));
    }
    if (__VdlySet__mem__v3) {
        vlSelfRef.mem[__VdlyDim0__mem__v3] = ((0xffffffU 
                                               & vlSelfRef.mem
                                               [__VdlyDim0__mem__v3]) 
                                              | ((IData)(__VdlyVal__mem__v3) 
                                                 << 0x18U));
    }
    vlSelfRef.__PVT__bvalid_o = __Vdly__bvalid_o;
    vlSelfRef.__PVT__read_bursts_o = __Vdly__read_bursts_o;
}

VL_INLINE_OPT void Vriscv_top_tb_axi_memory_model__R80000104___nba_sequent__TOP__riscv_top_tb__d_memory__1(Vriscv_top_tb_axi_memory_model__R80000104* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_top_tb_axi_memory_model__R80000104___nba_sequent__TOP__riscv_top_tb__d_memory__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__awready_o = (1U & ((~ (IData)(vlSelfRef.__PVT__write_active)) 
                                        & (~ (IData)(vlSelfRef.__PVT__bvalid_o))));
    if (vlSymsp->TOP__riscv_top_tb.__PVT__rst) {
        vlSelfRef.__PVT__read_active = 0U;
        vlSelfRef.__Vdly__read_addr = 0U;
        vlSelfRef.__Vdly__read_left = 0U;
    } else if (((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_arvalid_o) 
                & (IData)(vlSelfRef.__PVT__arready_o))) {
        vlSelfRef.__PVT__read_active = 1U;
        vlSelfRef.__Vdly__read_addr = vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_awaddr_o;
        vlSelfRef.__Vdly__read_left = vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_awlen_o;
    } else if (vlSelfRef.__PVT__rvalid_o) {
        if ((0U == (IData)(vlSelfRef.__PVT__read_left))) {
            vlSelfRef.__PVT__read_active = 0U;
        } else {
            vlSelfRef.__Vdly__read_addr = ((IData)(4U) 
                                           + vlSelfRef.__PVT__read_addr);
            vlSelfRef.__Vdly__read_left = (0xffU & 
                                           ((IData)(vlSelfRef.__PVT__read_left) 
                                            - (IData)(1U)));
        }
    }
    vlSelfRef.__PVT__wready_o = ((IData)(vlSelfRef.__PVT__write_active) 
                                 | ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_awvalid_o) 
                                    & (IData)(vlSelfRef.__PVT__awready_o)));
    vlSelfRef.__PVT__read_left = vlSelfRef.__Vdly__read_left;
    vlSelfRef.__PVT__read_addr = vlSelfRef.__Vdly__read_addr;
    vlSelfRef.__PVT__rdata_o = ((0x400U > (vlSelfRef.__PVT__read_addr 
                                           >> 2U)) ? 
                                vlSelfRef.mem[(0x3ffU 
                                               & (vlSelfRef.__PVT__read_addr 
                                                  >> 2U))]
                                 : 0U);
    vlSelfRef.__PVT__arready_o = (1U & (~ (IData)(vlSelfRef.__PVT__read_active)));
    vlSelfRef.__PVT__rvalid_o = vlSelfRef.__PVT__read_active;
    vlSelfRef.__PVT__rlast_o = ((IData)(vlSelfRef.__PVT__read_active) 
                                & (0U == (IData)(vlSelfRef.__PVT__read_left)));
}

VL_INLINE_OPT void Vriscv_top_tb_axi_memory_model__R80000104___nba_sequent__TOP__riscv_top_tb__d_memory__2(Vriscv_top_tb_axi_memory_model__R80000104* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_top_tb_axi_memory_model__R80000104___nba_sequent__TOP__riscv_top_tb__d_memory__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__active_write_addr = ((IData)(vlSelfRef.__PVT__write_active)
                                           ? vlSelfRef.__PVT__write_addr
                                           : vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_awaddr_o);
}
