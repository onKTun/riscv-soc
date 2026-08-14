// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top_tb.h for the primary calling header

#include "Vriscv_top_tb__pch.h"
#include "Vriscv_top_tb__Syms.h"
#include "Vriscv_top_tb_icache_data_ram.h"

VL_INLINE_OPT void Vriscv_top_tb_icache_data_ram___nba_sequent__TOP__riscv_top_tb__dut__u_icache__u_data0__0(Vriscv_top_tb_icache_data_ram* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_top_tb_icache_data_ram___nba_sequent__TOP__riscv_top_tb__dut__u_icache__u_data0__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__ram__v0;
    __VdlyVal__ram__v0 = 0;
    SData/*10:0*/ __VdlyDim0__ram__v0;
    __VdlyDim0__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__ram__v0;
    __VdlySet__ram__v0 = 0;
    // Body
    __VdlySet__ram__v0 = 0U;
    if (((~ (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_icache.__PVT__replace_way_q)) 
         & (IData)(vlSymsp->TOP__riscv_top_tb__i_memory.__PVT__read_active))) {
        __VdlyVal__ram__v0 = vlSymsp->TOP__riscv_top_tb__i_memory.__PVT__rdata_o;
        __VdlyDim0__ram__v0 = vlSymsp->TOP__riscv_top_tb__dut__u_icache.__PVT__data_addr_r;
        __VdlySet__ram__v0 = 1U;
    }
    vlSelfRef.__PVT__ram_read_q = vlSelfRef.ram[vlSymsp->TOP__riscv_top_tb__dut__u_icache.__PVT__data_addr_r];
    if (__VdlySet__ram__v0) {
        vlSelfRef.ram[__VdlyDim0__ram__v0] = __VdlyVal__ram__v0;
    }
}

VL_INLINE_OPT void Vriscv_top_tb_icache_data_ram___nba_sequent__TOP__riscv_top_tb__dut__u_icache__u_data1__0(Vriscv_top_tb_icache_data_ram* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_top_tb_icache_data_ram___nba_sequent__TOP__riscv_top_tb__dut__u_icache__u_data1__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__ram__v0;
    __VdlyVal__ram__v0 = 0;
    SData/*10:0*/ __VdlyDim0__ram__v0;
    __VdlyDim0__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__ram__v0;
    __VdlySet__ram__v0 = 0;
    // Body
    __VdlySet__ram__v0 = 0U;
    if (((IData)(vlSymsp->TOP__riscv_top_tb__i_memory.__PVT__read_active) 
         & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_icache.__PVT__replace_way_q))) {
        __VdlyVal__ram__v0 = vlSymsp->TOP__riscv_top_tb__i_memory.__PVT__rdata_o;
        __VdlyDim0__ram__v0 = vlSymsp->TOP__riscv_top_tb__dut__u_icache.__PVT__data_addr_r;
        __VdlySet__ram__v0 = 1U;
    }
    vlSelfRef.__PVT__ram_read_q = vlSelfRef.ram[vlSymsp->TOP__riscv_top_tb__dut__u_icache.__PVT__data_addr_r];
    if (__VdlySet__ram__v0) {
        vlSelfRef.ram[__VdlyDim0__ram__v0] = __VdlyVal__ram__v0;
    }
}
