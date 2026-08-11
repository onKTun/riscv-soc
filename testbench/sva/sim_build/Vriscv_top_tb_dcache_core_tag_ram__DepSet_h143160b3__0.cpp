// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top_tb.h for the primary calling header

#include "Vriscv_top_tb__pch.h"
#include "Vriscv_top_tb__Syms.h"
#include "Vriscv_top_tb_dcache_core_tag_ram.h"

VL_INLINE_OPT void Vriscv_top_tb_dcache_core_tag_ram___nba_sequent__TOP__riscv_top_tb__dut__u_dcache__u_core__u_tag0__0(Vriscv_top_tb_dcache_core_tag_ram* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vriscv_top_tb_dcache_core_tag_ram___nba_sequent__TOP__riscv_top_tb__dut__u_dcache__u_core__u_tag0__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__tag0_write_m_r) {
        vlSelfRef.ram[vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__tag_addr_m_r] 
            = vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__tag_data_in_m_r;
    }
    vlSelfRef.__PVT__ram_read0_q = vlSelfRef.ram[vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__tag_addr_x_r];
}

VL_INLINE_OPT void Vriscv_top_tb_dcache_core_tag_ram___nba_sequent__TOP__riscv_top_tb__dut__u_dcache__u_core__u_tag1__0(Vriscv_top_tb_dcache_core_tag_ram* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vriscv_top_tb_dcache_core_tag_ram___nba_sequent__TOP__riscv_top_tb__dut__u_dcache__u_core__u_tag1__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__tag1_write_m_r) {
        vlSelfRef.ram[vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__tag_addr_m_r] 
            = vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__tag_data_in_m_r;
    }
    vlSelfRef.__PVT__ram_read0_q = vlSelfRef.ram[vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__tag_addr_x_r];
}
