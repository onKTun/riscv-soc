// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top_tb.h for the primary calling header

#include "Vriscv_top_tb__pch.h"
#include "Vriscv_top_tb__Syms.h"
#include "Vriscv_top_tb___024root.h"

VL_ATTR_COLD void Vriscv_top_tb_riscv_top_tb___eval_static__TOP__riscv_top_tb(Vriscv_top_tb_riscv_top_tb* vlSelf);
VL_ATTR_COLD void Vriscv_top_tb___024root____Vm_traceActivitySetAll(Vriscv_top_tb___024root* vlSelf);

VL_ATTR_COLD void Vriscv_top_tb___024root___eval_static(Vriscv_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top_tb___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vriscv_top_tb_riscv_top_tb___eval_static__TOP__riscv_top_tb((&vlSymsp->TOP__riscv_top_tb));
    Vriscv_top_tb___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void Vriscv_top_tb_riscv_top__M0_MBffff___eval_final__TOP__riscv_top_tb__dut(Vriscv_top_tb_riscv_top__M0_MBffff* vlSelf);

VL_ATTR_COLD void Vriscv_top_tb___024root___eval_final(Vriscv_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top_tb___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vriscv_top_tb_riscv_top__M0_MBffff___eval_final__TOP__riscv_top_tb__dut((&vlSymsp->TOP__riscv_top_tb__dut));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv_top_tb___024root___dump_triggers__stl(Vriscv_top_tb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vriscv_top_tb___024root___eval_triggers__stl(Vriscv_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top_tb___024root___eval_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vriscv_top_tb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vriscv_top_tb_axi_memory_model___stl_sequent__TOP__riscv_top_tb__i_memory__0(Vriscv_top_tb_axi_memory_model* vlSelf);
void Vriscv_top_tb_riscv_top__M0_MBffff___nba_sequent__TOP__riscv_top_tb__dut__1(Vriscv_top_tb_riscv_top__M0_MBffff* vlSelf);
VL_ATTR_COLD void Vriscv_top_tb_axi_memory_model__R80000104___stl_sequent__TOP__riscv_top_tb__d_memory__0(Vriscv_top_tb_axi_memory_model__R80000104* vlSelf);
VL_ATTR_COLD void Vriscv_top_tb_dcache___stl_sequent__TOP__riscv_top_tb__dut__u_dcache__0(Vriscv_top_tb_dcache* vlSelf);
VL_ATTR_COLD void Vriscv_top_tb_riscv_core__M0_MBffff___stl_sequent__TOP__riscv_top_tb__dut__u_core__0(Vriscv_top_tb_riscv_core__M0_MBffff* vlSelf);
VL_ATTR_COLD void Vriscv_top_tb_riscv_csr_regfile___stl_sequent__TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile__0(Vriscv_top_tb_riscv_csr_regfile* vlSelf);
VL_ATTR_COLD void Vriscv_top_tb_icache___stl_sequent__TOP__riscv_top_tb__dut__u_icache__0(Vriscv_top_tb_icache* vlSelf);
VL_ATTR_COLD void Vriscv_top_tb_riscv_csr__SB0___stl_sequent__TOP__riscv_top_tb__dut__u_core__u_csr__0(Vriscv_top_tb_riscv_csr__SB0* vlSelf);
VL_ATTR_COLD void Vriscv_top_tb_dcache_core___stl_sequent__TOP__riscv_top_tb__dut__u_dcache__u_core__0(Vriscv_top_tb_dcache_core* vlSelf);
VL_ATTR_COLD void Vriscv_top_tb_riscv_issue___stl_sequent__TOP__riscv_top_tb__dut__u_core__u_issue__0(Vriscv_top_tb_riscv_issue* vlSelf);
VL_ATTR_COLD void Vriscv_top_tb_axi_memory_model__R80000104___stl_sequent__TOP__riscv_top_tb__d_memory__1(Vriscv_top_tb_axi_memory_model__R80000104* vlSelf);
void Vriscv_top_tb_riscv_core__M0_MBffff___nba_comb__TOP__riscv_top_tb__dut__u_core__0(Vriscv_top_tb_riscv_core__M0_MBffff* vlSelf);
VL_ATTR_COLD void Vriscv_top_tb_riscv_csr_regfile___stl_sequent__TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile__1(Vriscv_top_tb_riscv_csr_regfile* vlSelf);
void Vriscv_top_tb_riscv_top__M0_MBffff___nba_comb__TOP__riscv_top_tb__dut__0(Vriscv_top_tb_riscv_top__M0_MBffff* vlSelf);
VL_ATTR_COLD void Vriscv_top_tb_dcache___stl_sequent__TOP__riscv_top_tb__dut__u_dcache__1(Vriscv_top_tb_dcache* vlSelf);
void Vriscv_top_tb_riscv_issue___nba_comb__TOP__riscv_top_tb__dut__u_core__u_issue__0(Vriscv_top_tb_riscv_issue* vlSelf);
void Vriscv_top_tb_riscv_regfile___nba_comb__TOP__riscv_top_tb__dut__u_core__u_issue__u_regfile__0(Vriscv_top_tb_riscv_regfile* vlSelf);
void Vriscv_top_tb_riscv_top__M0_MBffff___nba_comb__TOP__riscv_top_tb__dut__1(Vriscv_top_tb_riscv_top__M0_MBffff* vlSelf);
void Vriscv_top_tb_riscv_core__M0_MBffff___nba_comb__TOP__riscv_top_tb__dut__u_core__1(Vriscv_top_tb_riscv_core__M0_MBffff* vlSelf);
void Vriscv_top_tb_riscv_issue___nba_comb__TOP__riscv_top_tb__dut__u_core__u_issue__1(Vriscv_top_tb_riscv_issue* vlSelf);
void Vriscv_top_tb_riscv_top__M0_MBffff___nba_comb__TOP__riscv_top_tb__dut__2(Vriscv_top_tb_riscv_top__M0_MBffff* vlSelf);
void Vriscv_top_tb_riscv_core__M0_MBffff___nba_comb__TOP__riscv_top_tb__dut__u_core__2(Vriscv_top_tb_riscv_core__M0_MBffff* vlSelf);
void Vriscv_top_tb_dcache___ico_sequent__TOP__riscv_top_tb__dut__u_dcache__0(Vriscv_top_tb_dcache* vlSelf);
void Vriscv_top_tb_dcache_core___ico_sequent__TOP__riscv_top_tb__dut__u_dcache__u_core__1(Vriscv_top_tb_dcache_core* vlSelf);
void Vriscv_top_tb_dcache___ico_sequent__TOP__riscv_top_tb__dut__u_dcache__1(Vriscv_top_tb_dcache* vlSelf);
void Vriscv_top_tb_riscv_core__M0_MBffff___nba_comb__TOP__riscv_top_tb__dut__u_core__3(Vriscv_top_tb_riscv_core__M0_MBffff* vlSelf);
void Vriscv_top_tb_riscv_issue___ico_sequent__TOP__riscv_top_tb__dut__u_core__u_issue__2(Vriscv_top_tb_riscv_issue* vlSelf);
void Vriscv_top_tb_riscv_core__M0_MBffff___ico_sequent__TOP__riscv_top_tb__dut__u_core__3(Vriscv_top_tb_riscv_core__M0_MBffff* vlSelf);
void Vriscv_top_tb_riscv_csr__SB0___ico_sequent__TOP__riscv_top_tb__dut__u_core__u_csr__0(Vriscv_top_tb_riscv_csr__SB0* vlSelf);
void Vriscv_top_tb_riscv_issue___ico_sequent__TOP__riscv_top_tb__dut__u_core__u_issue__3(Vriscv_top_tb_riscv_issue* vlSelf);

VL_ATTR_COLD void Vriscv_top_tb___024root___eval_stl(Vriscv_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top_tb___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vriscv_top_tb_axi_memory_model___stl_sequent__TOP__riscv_top_tb__i_memory__0((&vlSymsp->TOP__riscv_top_tb__i_memory));
        Vriscv_top_tb___024root____Vm_traceActivitySetAll(vlSelf);
        Vriscv_top_tb_riscv_top__M0_MBffff___nba_sequent__TOP__riscv_top_tb__dut__1((&vlSymsp->TOP__riscv_top_tb__dut));
        Vriscv_top_tb_axi_memory_model__R80000104___stl_sequent__TOP__riscv_top_tb__d_memory__0((&vlSymsp->TOP__riscv_top_tb__d_memory));
        Vriscv_top_tb_dcache___stl_sequent__TOP__riscv_top_tb__dut__u_dcache__0((&vlSymsp->TOP__riscv_top_tb__dut__u_dcache));
        Vriscv_top_tb_riscv_core__M0_MBffff___stl_sequent__TOP__riscv_top_tb__dut__u_core__0((&vlSymsp->TOP__riscv_top_tb__dut__u_core));
        Vriscv_top_tb_riscv_csr_regfile___stl_sequent__TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile__0((&vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile));
        Vriscv_top_tb_icache___stl_sequent__TOP__riscv_top_tb__dut__u_icache__0((&vlSymsp->TOP__riscv_top_tb__dut__u_icache));
        Vriscv_top_tb_riscv_csr__SB0___stl_sequent__TOP__riscv_top_tb__dut__u_core__u_csr__0((&vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr));
        Vriscv_top_tb_dcache_core___stl_sequent__TOP__riscv_top_tb__dut__u_dcache__u_core__0((&vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core));
        Vriscv_top_tb_riscv_issue___stl_sequent__TOP__riscv_top_tb__dut__u_core__u_issue__0((&vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue));
        Vriscv_top_tb_axi_memory_model__R80000104___stl_sequent__TOP__riscv_top_tb__d_memory__1((&vlSymsp->TOP__riscv_top_tb__d_memory));
        Vriscv_top_tb_riscv_core__M0_MBffff___nba_comb__TOP__riscv_top_tb__dut__u_core__0((&vlSymsp->TOP__riscv_top_tb__dut__u_core));
        Vriscv_top_tb_riscv_csr_regfile___stl_sequent__TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile__1((&vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile));
        Vriscv_top_tb_riscv_top__M0_MBffff___nba_comb__TOP__riscv_top_tb__dut__0((&vlSymsp->TOP__riscv_top_tb__dut));
        Vriscv_top_tb_dcache___stl_sequent__TOP__riscv_top_tb__dut__u_dcache__1((&vlSymsp->TOP__riscv_top_tb__dut__u_dcache));
        Vriscv_top_tb_riscv_issue___nba_comb__TOP__riscv_top_tb__dut__u_core__u_issue__0((&vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue));
        Vriscv_top_tb_riscv_regfile___nba_comb__TOP__riscv_top_tb__dut__u_core__u_issue__u_regfile__0((&vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue__u_regfile));
        Vriscv_top_tb_riscv_top__M0_MBffff___nba_comb__TOP__riscv_top_tb__dut__1((&vlSymsp->TOP__riscv_top_tb__dut));
        Vriscv_top_tb_riscv_core__M0_MBffff___nba_comb__TOP__riscv_top_tb__dut__u_core__1((&vlSymsp->TOP__riscv_top_tb__dut__u_core));
        Vriscv_top_tb_riscv_issue___nba_comb__TOP__riscv_top_tb__dut__u_core__u_issue__1((&vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue));
        Vriscv_top_tb_riscv_top__M0_MBffff___nba_comb__TOP__riscv_top_tb__dut__2((&vlSymsp->TOP__riscv_top_tb__dut));
        Vriscv_top_tb_riscv_core__M0_MBffff___nba_comb__TOP__riscv_top_tb__dut__u_core__2((&vlSymsp->TOP__riscv_top_tb__dut__u_core));
        Vriscv_top_tb_dcache___ico_sequent__TOP__riscv_top_tb__dut__u_dcache__0((&vlSymsp->TOP__riscv_top_tb__dut__u_dcache));
        Vriscv_top_tb_dcache_core___ico_sequent__TOP__riscv_top_tb__dut__u_dcache__u_core__1((&vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core));
        Vriscv_top_tb_dcache___ico_sequent__TOP__riscv_top_tb__dut__u_dcache__1((&vlSymsp->TOP__riscv_top_tb__dut__u_dcache));
        Vriscv_top_tb_riscv_core__M0_MBffff___nba_comb__TOP__riscv_top_tb__dut__u_core__3((&vlSymsp->TOP__riscv_top_tb__dut__u_core));
        Vriscv_top_tb_riscv_issue___ico_sequent__TOP__riscv_top_tb__dut__u_core__u_issue__2((&vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue));
        Vriscv_top_tb_riscv_core__M0_MBffff___ico_sequent__TOP__riscv_top_tb__dut__u_core__3((&vlSymsp->TOP__riscv_top_tb__dut__u_core));
        Vriscv_top_tb_riscv_csr__SB0___ico_sequent__TOP__riscv_top_tb__dut__u_core__u_csr__0((&vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr));
        Vriscv_top_tb_riscv_issue___ico_sequent__TOP__riscv_top_tb__dut__u_core__u_issue__3((&vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue));
    }
}
