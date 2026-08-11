// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top_tb.h for the primary calling header

#include "Vriscv_top_tb__pch.h"
#include "Vriscv_top_tb__Syms.h"
#include "Vriscv_top_tb___024root.h"

VL_ATTR_COLD void Vriscv_top_tb_riscv_top_tb___eval_initial__TOP__riscv_top_tb(Vriscv_top_tb_riscv_top_tb* vlSelf);
VlCoroutine Vriscv_top_tb_riscv_top_tb___eval_initial__TOP__riscv_top_tb__Vtiming__0(Vriscv_top_tb_riscv_top_tb* vlSelf);
VlCoroutine Vriscv_top_tb_riscv_top_tb___eval_initial__TOP__riscv_top_tb__Vtiming__1(Vriscv_top_tb_riscv_top_tb* vlSelf);

void Vriscv_top_tb___024root___eval_initial(Vriscv_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top_tb___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vriscv_top_tb_riscv_top_tb___eval_initial__TOP__riscv_top_tb((&vlSymsp->TOP__riscv_top_tb));
    Vriscv_top_tb_riscv_top_tb___eval_initial__TOP__riscv_top_tb__Vtiming__0((&vlSymsp->TOP__riscv_top_tb));
    Vriscv_top_tb_riscv_top_tb___eval_initial__TOP__riscv_top_tb__Vtiming__1((&vlSymsp->TOP__riscv_top_tb));
    vlSelfRef.__Vtrigprevexpr___TOP__riscv_top_tb____PVT__clk__0 
        = vlSymsp->TOP__riscv_top_tb.__PVT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__riscv_top_tb____PVT__rst__0 
        = vlSymsp->TOP__riscv_top_tb.__PVT__rst;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv_top_tb___024root___dump_triggers__act(Vriscv_top_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vriscv_top_tb___024root___eval_triggers__act(Vriscv_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top_tb___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSymsp->TOP__riscv_top_tb.__PVT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__riscv_top_tb____PVT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSymsp->TOP__riscv_top_tb.__PVT__rst) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__riscv_top_tb____PVT__rst__0))));
    vlSelfRef.__VactTriggered.set(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__riscv_top_tb____PVT__clk__0 
        = vlSymsp->TOP__riscv_top_tb.__PVT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__riscv_top_tb____PVT__rst__0 
        = vlSymsp->TOP__riscv_top_tb.__PVT__rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vriscv_top_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vriscv_top_tb_riscv_top_tb___act_comb__TOP__riscv_top_tb__0(Vriscv_top_tb_riscv_top_tb* vlSelf);

void Vriscv_top_tb___024root___eval_act(Vriscv_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top_tb___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((5ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vriscv_top_tb_riscv_top_tb___act_comb__TOP__riscv_top_tb__0((&vlSymsp->TOP__riscv_top_tb));
    }
}

void Vriscv_top_tb_riscv_top__M0_MBffff___nba_sequent__TOP__riscv_top_tb__dut__0(Vriscv_top_tb_riscv_top__M0_MBffff* vlSelf);
void Vriscv_top_tb_icache_tag_ram___nba_sequent__TOP__riscv_top_tb__dut__u_icache__u_tag0__0(Vriscv_top_tb_icache_tag_ram* vlSelf);
void Vriscv_top_tb_icache_tag_ram___nba_sequent__TOP__riscv_top_tb__dut__u_icache__u_tag1__0(Vriscv_top_tb_icache_tag_ram* vlSelf);
void Vriscv_top_tb_dcache_core_data_ram___nba_sequent__TOP__riscv_top_tb__dut__u_dcache__u_core__u_data0__0(Vriscv_top_tb_dcache_core_data_ram* vlSelf);
void Vriscv_top_tb_dcache_core_data_ram___nba_sequent__TOP__riscv_top_tb__dut__u_dcache__u_core__u_data1__0(Vriscv_top_tb_dcache_core_data_ram* vlSelf);
void Vriscv_top_tb_riscv_top_tb___nba_sequent__TOP__riscv_top_tb__0(Vriscv_top_tb_riscv_top_tb* vlSelf);
void Vriscv_top_tb_icache_data_ram___nba_sequent__TOP__riscv_top_tb__dut__u_icache__u_data0__0(Vriscv_top_tb_icache_data_ram* vlSelf);
void Vriscv_top_tb_icache_data_ram___nba_sequent__TOP__riscv_top_tb__dut__u_icache__u_data1__0(Vriscv_top_tb_icache_data_ram* vlSelf);
void Vriscv_top_tb_dcache_core_tag_ram___nba_sequent__TOP__riscv_top_tb__dut__u_dcache__u_core__u_tag0__0(Vriscv_top_tb_dcache_core_tag_ram* vlSelf);
void Vriscv_top_tb_dcache_core_tag_ram___nba_sequent__TOP__riscv_top_tb__dut__u_dcache__u_core__u_tag1__0(Vriscv_top_tb_dcache_core_tag_ram* vlSelf);
void Vriscv_top_tb_riscv_regfile___nba_sequent__TOP__riscv_top_tb__dut__u_core__u_issue__u_regfile__0(Vriscv_top_tb_riscv_regfile* vlSelf);
void Vriscv_top_tb_dcache_core___nba_sequent__TOP__riscv_top_tb__dut__u_dcache__u_core__0(Vriscv_top_tb_dcache_core* vlSelf);
void Vriscv_top_tb_riscv_top_tb___nba_sequent__TOP__riscv_top_tb__1(Vriscv_top_tb_riscv_top_tb* vlSelf);
void Vriscv_top_tb_dcache_core___nba_sequent__TOP__riscv_top_tb__dut__u_dcache__u_core__1(Vriscv_top_tb_dcache_core* vlSelf);
void Vriscv_top_tb_dcache___nba_sequent__TOP__riscv_top_tb__dut__u_dcache__0(Vriscv_top_tb_dcache* vlSelf);
void Vriscv_top_tb_riscv_csr__SB0___nba_sequent__TOP__riscv_top_tb__dut__u_core__u_csr__0(Vriscv_top_tb_riscv_csr__SB0* vlSelf);
void Vriscv_top_tb_riscv_core__M0_MBffff___nba_sequent__TOP__riscv_top_tb__dut__u_core__0(Vriscv_top_tb_riscv_core__M0_MBffff* vlSelf);
void Vriscv_top_tb_icache___nba_sequent__TOP__riscv_top_tb__dut__u_icache__0(Vriscv_top_tb_icache* vlSelf);
void Vriscv_top_tb_riscv_csr_regfile___nba_sequent__TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile__0(Vriscv_top_tb_riscv_csr_regfile* vlSelf);
void Vriscv_top_tb_riscv_issue___nba_sequent__TOP__riscv_top_tb__dut__u_core__u_issue__0(Vriscv_top_tb_riscv_issue* vlSelf);
void Vriscv_top_tb_riscv_top_tb___nba_sequent__TOP__riscv_top_tb__2(Vriscv_top_tb_riscv_top_tb* vlSelf);
void Vriscv_top_tb_dcache___nba_sequent__TOP__riscv_top_tb__dut__u_dcache__1(Vriscv_top_tb_dcache* vlSelf);
void Vriscv_top_tb_riscv_core__M0_MBffff___nba_sequent__TOP__riscv_top_tb__dut__u_core__1(Vriscv_top_tb_riscv_core__M0_MBffff* vlSelf);
void Vriscv_top_tb_riscv_csr__SB0___nba_sequent__TOP__riscv_top_tb__dut__u_core__u_csr__1(Vriscv_top_tb_riscv_csr__SB0* vlSelf);
void Vriscv_top_tb_icache___nba_sequent__TOP__riscv_top_tb__dut__u_icache__1(Vriscv_top_tb_icache* vlSelf);
void Vriscv_top_tb_dcache_core___nba_sequent__TOP__riscv_top_tb__dut__u_dcache__u_core__2(Vriscv_top_tb_dcache_core* vlSelf);
void Vriscv_top_tb_riscv_top_tb___nba_sequent__TOP__riscv_top_tb__3(Vriscv_top_tb_riscv_top_tb* vlSelf);
void Vriscv_top_tb_riscv_issue___nba_sequent__TOP__riscv_top_tb__dut__u_core__u_issue__1(Vriscv_top_tb_riscv_issue* vlSelf);
void Vriscv_top_tb_riscv_csr_regfile___nba_sequent__TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile__1(Vriscv_top_tb_riscv_csr_regfile* vlSelf);
void Vriscv_top_tb_riscv_core__M0_MBffff___nba_sequent__TOP__riscv_top_tb__dut__u_core__2(Vriscv_top_tb_riscv_core__M0_MBffff* vlSelf);
void Vriscv_top_tb_riscv_issue___nba_sequent__TOP__riscv_top_tb__dut__u_core__u_issue__2(Vriscv_top_tb_riscv_issue* vlSelf);
void Vriscv_top_tb_riscv_csr__SB0___nba_sequent__TOP__riscv_top_tb__dut__u_core__u_csr__2(Vriscv_top_tb_riscv_csr__SB0* vlSelf);
void Vriscv_top_tb_icache___nba_sequent__TOP__riscv_top_tb__dut__u_icache__2(Vriscv_top_tb_icache* vlSelf);
void Vriscv_top_tb_riscv_csr_regfile___nba_sequent__TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile__2(Vriscv_top_tb_riscv_csr_regfile* vlSelf);
void Vriscv_top_tb_dcache_core___nba_sequent__TOP__riscv_top_tb__dut__u_dcache__u_core__3(Vriscv_top_tb_dcache_core* vlSelf);
void Vriscv_top_tb_dcache_core___nba_comb__TOP__riscv_top_tb__dut__u_dcache__u_core__0(Vriscv_top_tb_dcache_core* vlSelf);
void Vriscv_top_tb_icache___nba_comb__TOP__riscv_top_tb__dut__u_icache__0(Vriscv_top_tb_icache* vlSelf);
void Vriscv_top_tb_dcache___nba_comb__TOP__riscv_top_tb__dut__u_dcache__0(Vriscv_top_tb_dcache* vlSelf);
void Vriscv_top_tb_riscv_core__M0_MBffff___nba_comb__TOP__riscv_top_tb__dut__u_core__0(Vriscv_top_tb_riscv_core__M0_MBffff* vlSelf);
void Vriscv_top_tb_riscv_issue___nba_comb__TOP__riscv_top_tb__dut__u_core__u_issue__0(Vriscv_top_tb_riscv_issue* vlSelf);
void Vriscv_top_tb_riscv_regfile___nba_comb__TOP__riscv_top_tb__dut__u_core__u_issue__u_regfile__0(Vriscv_top_tb_riscv_regfile* vlSelf);
void Vriscv_top_tb_riscv_csr_regfile___nba_comb__TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile__0(Vriscv_top_tb_riscv_csr_regfile* vlSelf);
void Vriscv_top_tb_dcache___nba_comb__TOP__riscv_top_tb__dut__u_dcache__1(Vriscv_top_tb_dcache* vlSelf);
void Vriscv_top_tb_riscv_issue___nba_comb__TOP__riscv_top_tb__dut__u_core__u_issue__1(Vriscv_top_tb_riscv_issue* vlSelf);
void Vriscv_top_tb_dcache_core___nba_comb__TOP__riscv_top_tb__dut__u_dcache__u_core__1(Vriscv_top_tb_dcache_core* vlSelf);
void Vriscv_top_tb_riscv_core__M0_MBffff___nba_comb__TOP__riscv_top_tb__dut__u_core__1(Vriscv_top_tb_riscv_core__M0_MBffff* vlSelf);
void Vriscv_top_tb_dcache___nba_comb__TOP__riscv_top_tb__dut__u_dcache__2(Vriscv_top_tb_dcache* vlSelf);
void Vriscv_top_tb_riscv_core__M0_MBffff___nba_comb__TOP__riscv_top_tb__dut__u_core__2(Vriscv_top_tb_riscv_core__M0_MBffff* vlSelf);
void Vriscv_top_tb_riscv_issue___nba_comb__TOP__riscv_top_tb__dut__u_core__u_issue__2(Vriscv_top_tb_riscv_issue* vlSelf);
void Vriscv_top_tb_riscv_core__M0_MBffff___nba_comb__TOP__riscv_top_tb__dut__u_core__3(Vriscv_top_tb_riscv_core__M0_MBffff* vlSelf);
void Vriscv_top_tb_riscv_csr__SB0___nba_comb__TOP__riscv_top_tb__dut__u_core__u_csr__0(Vriscv_top_tb_riscv_csr__SB0* vlSelf);
void Vriscv_top_tb_riscv_issue___nba_comb__TOP__riscv_top_tb__dut__u_core__u_issue__3(Vriscv_top_tb_riscv_issue* vlSelf);

void Vriscv_top_tb___024root___eval_nba(Vriscv_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top_tb___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vriscv_top_tb_riscv_top__M0_MBffff___nba_sequent__TOP__riscv_top_tb__dut__0((&vlSymsp->TOP__riscv_top_tb__dut));
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        Vriscv_top_tb_icache_tag_ram___nba_sequent__TOP__riscv_top_tb__dut__u_icache__u_tag0__0((&vlSymsp->TOP__riscv_top_tb__dut__u_icache__u_tag0));
        Vriscv_top_tb_icache_tag_ram___nba_sequent__TOP__riscv_top_tb__dut__u_icache__u_tag1__0((&vlSymsp->TOP__riscv_top_tb__dut__u_icache__u_tag1));
        Vriscv_top_tb_dcache_core_data_ram___nba_sequent__TOP__riscv_top_tb__dut__u_dcache__u_core__u_data0__0((&vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core__u_data0));
        Vriscv_top_tb_dcache_core_data_ram___nba_sequent__TOP__riscv_top_tb__dut__u_dcache__u_core__u_data1__0((&vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core__u_data1));
        Vriscv_top_tb_riscv_top_tb___nba_sequent__TOP__riscv_top_tb__0((&vlSymsp->TOP__riscv_top_tb));
        Vriscv_top_tb_icache_data_ram___nba_sequent__TOP__riscv_top_tb__dut__u_icache__u_data0__0((&vlSymsp->TOP__riscv_top_tb__dut__u_icache__u_data0));
        Vriscv_top_tb_icache_data_ram___nba_sequent__TOP__riscv_top_tb__dut__u_icache__u_data1__0((&vlSymsp->TOP__riscv_top_tb__dut__u_icache__u_data1));
        Vriscv_top_tb_dcache_core_tag_ram___nba_sequent__TOP__riscv_top_tb__dut__u_dcache__u_core__u_tag0__0((&vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core__u_tag0));
        Vriscv_top_tb_dcache_core_tag_ram___nba_sequent__TOP__riscv_top_tb__dut__u_dcache__u_core__u_tag1__0((&vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core__u_tag1));
        Vriscv_top_tb_riscv_regfile___nba_sequent__TOP__riscv_top_tb__dut__u_core__u_issue__u_regfile__0((&vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue__u_regfile));
        Vriscv_top_tb_dcache_core___nba_sequent__TOP__riscv_top_tb__dut__u_dcache__u_core__0((&vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core));
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vriscv_top_tb_riscv_top_tb___nba_sequent__TOP__riscv_top_tb__1((&vlSymsp->TOP__riscv_top_tb));
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        Vriscv_top_tb_dcache_core___nba_sequent__TOP__riscv_top_tb__dut__u_dcache__u_core__1((&vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core));
        Vriscv_top_tb_dcache___nba_sequent__TOP__riscv_top_tb__dut__u_dcache__0((&vlSymsp->TOP__riscv_top_tb__dut__u_dcache));
        Vriscv_top_tb_riscv_csr__SB0___nba_sequent__TOP__riscv_top_tb__dut__u_core__u_csr__0((&vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr));
        Vriscv_top_tb_riscv_core__M0_MBffff___nba_sequent__TOP__riscv_top_tb__dut__u_core__0((&vlSymsp->TOP__riscv_top_tb__dut__u_core));
        Vriscv_top_tb_icache___nba_sequent__TOP__riscv_top_tb__dut__u_icache__0((&vlSymsp->TOP__riscv_top_tb__dut__u_icache));
        Vriscv_top_tb_riscv_csr_regfile___nba_sequent__TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile__0((&vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile));
        Vriscv_top_tb_riscv_issue___nba_sequent__TOP__riscv_top_tb__dut__u_core__u_issue__0((&vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue));
        Vriscv_top_tb_riscv_top_tb___nba_sequent__TOP__riscv_top_tb__2((&vlSymsp->TOP__riscv_top_tb));
        Vriscv_top_tb_dcache___nba_sequent__TOP__riscv_top_tb__dut__u_dcache__1((&vlSymsp->TOP__riscv_top_tb__dut__u_dcache));
        Vriscv_top_tb_riscv_core__M0_MBffff___nba_sequent__TOP__riscv_top_tb__dut__u_core__1((&vlSymsp->TOP__riscv_top_tb__dut__u_core));
        Vriscv_top_tb_riscv_csr__SB0___nba_sequent__TOP__riscv_top_tb__dut__u_core__u_csr__1((&vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr));
        Vriscv_top_tb_icache___nba_sequent__TOP__riscv_top_tb__dut__u_icache__1((&vlSymsp->TOP__riscv_top_tb__dut__u_icache));
        Vriscv_top_tb_dcache_core___nba_sequent__TOP__riscv_top_tb__dut__u_dcache__u_core__2((&vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core));
        Vriscv_top_tb_riscv_top_tb___nba_sequent__TOP__riscv_top_tb__3((&vlSymsp->TOP__riscv_top_tb));
        Vriscv_top_tb_riscv_issue___nba_sequent__TOP__riscv_top_tb__dut__u_core__u_issue__1((&vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue));
        Vriscv_top_tb_riscv_csr_regfile___nba_sequent__TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile__1((&vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile));
        Vriscv_top_tb_riscv_core__M0_MBffff___nba_sequent__TOP__riscv_top_tb__dut__u_core__2((&vlSymsp->TOP__riscv_top_tb__dut__u_core));
        Vriscv_top_tb_riscv_issue___nba_sequent__TOP__riscv_top_tb__dut__u_core__u_issue__2((&vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue));
        Vriscv_top_tb_riscv_csr__SB0___nba_sequent__TOP__riscv_top_tb__dut__u_core__u_csr__2((&vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr));
        Vriscv_top_tb_icache___nba_sequent__TOP__riscv_top_tb__dut__u_icache__2((&vlSymsp->TOP__riscv_top_tb__dut__u_icache));
        Vriscv_top_tb_riscv_csr_regfile___nba_sequent__TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile__2((&vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile));
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vriscv_top_tb_dcache_core___nba_sequent__TOP__riscv_top_tb__dut__u_dcache__u_core__3((&vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core));
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vriscv_top_tb_dcache_core___nba_comb__TOP__riscv_top_tb__dut__u_dcache__u_core__0((&vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core));
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        Vriscv_top_tb_icache___nba_comb__TOP__riscv_top_tb__dut__u_icache__0((&vlSymsp->TOP__riscv_top_tb__dut__u_icache));
        Vriscv_top_tb_dcache___nba_comb__TOP__riscv_top_tb__dut__u_dcache__0((&vlSymsp->TOP__riscv_top_tb__dut__u_dcache));
        Vriscv_top_tb_riscv_core__M0_MBffff___nba_comb__TOP__riscv_top_tb__dut__u_core__0((&vlSymsp->TOP__riscv_top_tb__dut__u_core));
        Vriscv_top_tb_riscv_issue___nba_comb__TOP__riscv_top_tb__dut__u_core__u_issue__0((&vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue));
        Vriscv_top_tb_riscv_regfile___nba_comb__TOP__riscv_top_tb__dut__u_core__u_issue__u_regfile__0((&vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue__u_regfile));
        Vriscv_top_tb_riscv_csr_regfile___nba_comb__TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile__0((&vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile));
        Vriscv_top_tb_dcache___nba_comb__TOP__riscv_top_tb__dut__u_dcache__1((&vlSymsp->TOP__riscv_top_tb__dut__u_dcache));
        Vriscv_top_tb_riscv_issue___nba_comb__TOP__riscv_top_tb__dut__u_core__u_issue__1((&vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue));
        Vriscv_top_tb_dcache_core___nba_comb__TOP__riscv_top_tb__dut__u_dcache__u_core__1((&vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core));
        Vriscv_top_tb_riscv_core__M0_MBffff___nba_comb__TOP__riscv_top_tb__dut__u_core__1((&vlSymsp->TOP__riscv_top_tb__dut__u_core));
        Vriscv_top_tb_dcache___nba_comb__TOP__riscv_top_tb__dut__u_dcache__2((&vlSymsp->TOP__riscv_top_tb__dut__u_dcache));
        Vriscv_top_tb_riscv_core__M0_MBffff___nba_comb__TOP__riscv_top_tb__dut__u_core__2((&vlSymsp->TOP__riscv_top_tb__dut__u_core));
        Vriscv_top_tb_riscv_issue___nba_comb__TOP__riscv_top_tb__dut__u_core__u_issue__2((&vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue));
        Vriscv_top_tb_riscv_core__M0_MBffff___nba_comb__TOP__riscv_top_tb__dut__u_core__3((&vlSymsp->TOP__riscv_top_tb__dut__u_core));
        Vriscv_top_tb_riscv_csr__SB0___nba_comb__TOP__riscv_top_tb__dut__u_core__u_csr__0((&vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr));
        Vriscv_top_tb_riscv_issue___nba_comb__TOP__riscv_top_tb__dut__u_core__u_issue__3((&vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue));
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vriscv_top_tb_riscv_top_tb___act_comb__TOP__riscv_top_tb__0((&vlSymsp->TOP__riscv_top_tb));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv_top_tb___024root___dump_triggers__nba(Vriscv_top_tb___024root* vlSelf);
#endif  // VL_DEBUG
bool Vriscv_top_tb___024root___eval_phase__act(Vriscv_top_tb___024root* vlSelf);
bool Vriscv_top_tb___024root___eval_phase__nba(Vriscv_top_tb___024root* vlSelf);

void Vriscv_top_tb___024root___eval(Vriscv_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top_tb___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    vlSymsp->TOP__riscv_top_tb__dut.__Vsampled_TOP__riscv_top_tb____PVT__rst 
        = vlSymsp->TOP__riscv_top_tb.__PVT__rst;
    vlSymsp->TOP__riscv_top_tb__dut.__Vsampled_TOP__riscv_top_tb__dut__u_icache____PVT__axi_arvalid_o 
        = vlSymsp->TOP__riscv_top_tb__dut__u_icache.__PVT__axi_arvalid_o;
    vlSymsp->TOP__riscv_top_tb__dut.__Vsampled_TOP__riscv_top_tb__dut__u_dcache____PVT__axi_awvalid_o 
        = vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_awvalid_o;
    vlSymsp->TOP__riscv_top_tb__dut.__Vsampled_TOP__riscv_top_tb__dut__u_dcache____PVT__axi_wvalid_o 
        = vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_wvalid_o;
    vlSymsp->TOP__riscv_top_tb__dut.__Vsampled_TOP__riscv_top_tb__dut__u_dcache____PVT__axi_arvalid_o 
        = vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_arvalid_o;
    vlSymsp->TOP__riscv_top_tb__dut.__Vsampled_TOP__riscv_top_tb____PVT__i_rlast 
        = vlSymsp->TOP__riscv_top_tb.__PVT__i_rlast;
    vlSymsp->TOP__riscv_top_tb__dut.__Vsampled_TOP__riscv_top_tb____PVT__i_memory__DOT__read_active 
        = vlSymsp->TOP__riscv_top_tb.__PVT__i_memory__DOT__read_active;
    vlSymsp->TOP__riscv_top_tb__dut.__Vsampled_TOP__riscv_top_tb__dut__u_dcache____PVT__axi_awaddr_o 
        = vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_awaddr_o;
    vlSymsp->TOP__riscv_top_tb__dut.__Vsampled_TOP__riscv_top_tb__dut__u_dcache____PVT__u_axi__DOT__u_axi__DOT__valid_q 
        = vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_axi__DOT__u_axi__DOT__valid_q;
    vlSymsp->TOP__riscv_top_tb__dut.__Vsampled_TOP__riscv_top_tb__dut__u_dcache____PVT__u_axi__DOT__u_axi__DOT__buf_q[0U] 
        = vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_axi__DOT__u_axi__DOT__buf_q[0U];
    vlSymsp->TOP__riscv_top_tb__dut.__Vsampled_TOP__riscv_top_tb__dut__u_dcache____PVT__u_axi__DOT__u_axi__DOT__buf_q[1U] 
        = vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_axi__DOT__u_axi__DOT__buf_q[1U];
    vlSymsp->TOP__riscv_top_tb__dut.__Vsampled_TOP__riscv_top_tb__dut__u_dcache____PVT__u_axi__DOT__u_axi__DOT__buf_q[2U] 
        = vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_axi__DOT__u_axi__DOT__buf_q[2U];
    vlSymsp->TOP__riscv_top_tb__dut.__Vsampled_TOP__riscv_top_tb__dut__u_dcache____PVT__axi_wstrb_o 
        = vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_wstrb_o;
    vlSymsp->TOP__riscv_top_tb__dut.__Vsampled_TOP__riscv_top_tb____PVT__d_rlast 
        = vlSymsp->TOP__riscv_top_tb.__PVT__d_rlast;
    vlSymsp->TOP__riscv_top_tb__dut.__Vsampled_TOP__riscv_top_tb____PVT__d_memory__DOT__read_active 
        = vlSymsp->TOP__riscv_top_tb.__PVT__d_memory__DOT__read_active;
    vlSymsp->TOP__riscv_top_tb__dut.__Vsampled_TOP__riscv_top_tb__dut__u_dcache__u_core____PVT__state_q 
        = vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__state_q;
    vlSymsp->TOP__riscv_top_tb__dut.__Vsampled_TOP__riscv_top_tb__dut__u_icache____PVT__state_q 
        = vlSymsp->TOP__riscv_top_tb__dut__u_icache.__PVT__state_q;
    vlSymsp->TOP__riscv_top_tb__dut.__Vsampled_TOP__riscv_top_tb__dut__u_core____PVT__mem_d_rd_o 
        = vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__mem_d_rd_o;
    vlSymsp->TOP__riscv_top_tb__dut.__Vsampled_TOP__riscv_top_tb__dut__u_core____PVT__mem_d_wr_o 
        = vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__mem_d_wr_o;
    vlSymsp->TOP__riscv_top_tb__dut.__Vsampled_TOP__riscv_top_tb__dut__sva_checker__DOT___Vpast_0_0 
        = vlSymsp->TOP__riscv_top_tb__dut.sva_checker__DOT___Vpast_0_0;
    vlSymsp->TOP__riscv_top_tb__dut.__Vsampled_TOP__riscv_top_tb__dut__sva_checker__DOT___Vpast_1_0 
        = vlSymsp->TOP__riscv_top_tb__dut.sva_checker__DOT___Vpast_1_0;
    vlSymsp->TOP__riscv_top_tb__dut.__Vsampled_TOP__riscv_top_tb__dut__sva_checker__DOT___Vpast_2_0 
        = vlSymsp->TOP__riscv_top_tb__dut.sva_checker__DOT___Vpast_2_0;
    vlSymsp->TOP__riscv_top_tb__dut.__Vsampled_TOP__riscv_top_tb__dut__u_dcache____PVT__pmem_cache_ack_w 
        = vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__pmem_cache_ack_w;
    vlSymsp->TOP__riscv_top_tb__dut.__Vsampled_TOP__riscv_top_tb__dut__u_dcache__u_core____PVT__pmem_len_q 
        = vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__pmem_len_q;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vriscv_top_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("testbench/top_cache_axi/top_cache_axi_tb.v", 10, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vriscv_top_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("testbench/top_cache_axi/top_cache_axi_tb.v", 10, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vriscv_top_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vriscv_top_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}
