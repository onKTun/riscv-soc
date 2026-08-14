// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_muldiv_csr_tb.h for the primary calling header

#include "Vriscv_muldiv_csr_tb__pch.h"
#include "Vriscv_muldiv_csr_tb__Syms.h"
#include "Vriscv_muldiv_csr_tb_axi_memory_model.h"

VL_INLINE_OPT void Vriscv_muldiv_csr_tb_axi_memory_model___nba_sequent__TOP__riscv_muldiv_csr_tb__i_memory__0(Vriscv_muldiv_csr_tb_axi_memory_model* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_muldiv_csr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_muldiv_csr_tb_axi_memory_model___nba_sequent__TOP__riscv_muldiv_csr_tb__i_memory__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__wready_o;
    __PVT__wready_o = 0;
    IData/*31:0*/ __Vdly__read_bursts_o;
    __Vdly__read_bursts_o = 0;
    IData/*31:0*/ __Vdly__read_addr;
    __Vdly__read_addr = 0;
    CData/*7:0*/ __Vdly__read_left;
    __Vdly__read_left = 0;
    // Body
    __Vdly__read_addr = vlSelfRef.__PVT__read_addr;
    __Vdly__read_left = vlSelfRef.__PVT__read_left;
    __Vdly__read_bursts_o = vlSelfRef.__PVT__read_bursts_o;
    if (vlSymsp->TOP__riscv_muldiv_csr_tb.__PVT__rst) {
        __Vdly__read_bursts_o = 0U;
        vlSelfRef.__PVT__write_words_o = 0U;
        vlSelfRef.__PVT__result_data_o = 0U;
        vlSelfRef.__PVT__result_valid_o = 0U;
        vlSelfRef.__PVT__write_id = 0U;
        vlSelfRef.__PVT__bid_o = 0U;
        vlSelfRef.__PVT__bvalid_o = 0U;
        vlSelfRef.__PVT__write_addr = 0U;
        vlSelfRef.__PVT__write_active = 0U;
        vlSelfRef.__PVT__read_id = 0U;
        vlSelfRef.__PVT__read_active = 0U;
        __Vdly__read_addr = 0U;
        __Vdly__read_left = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_icache.__PVT__axi_arvalid_o) 
             & (~ (IData)(vlSelfRef.__PVT__read_active)))) {
            __Vdly__read_bursts_o = ((IData)(1U) + vlSelfRef.__PVT__read_bursts_o);
            vlSelfRef.__PVT__read_id = 0U;
        }
        if (((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_icache.__PVT__axi_arvalid_o) 
             & (IData)(vlSelfRef.__PVT__arready_o))) {
            vlSelfRef.__PVT__read_active = 1U;
            __Vdly__read_addr = (0xffffffe0U & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_icache.__PVT__lookup_addr_q);
            __Vdly__read_left = 7U;
        } else if (vlSelfRef.__PVT__rvalid_o) {
            if ((0U == (IData)(vlSelfRef.__PVT__read_left))) {
                vlSelfRef.__PVT__read_active = 0U;
            } else {
                __Vdly__read_addr = ((IData)(4U) + vlSelfRef.__PVT__read_addr);
                __Vdly__read_left = (0xffU & ((IData)(vlSelfRef.__PVT__read_left) 
                                              - (IData)(1U)));
            }
        }
    }
    vlSelfRef.__PVT__read_bursts_o = __Vdly__read_bursts_o;
    __PVT__wready_o = vlSelfRef.__PVT__write_active;
    vlSelfRef.__PVT__awready_o = (1U & ((~ (IData)(vlSelfRef.__PVT__write_active)) 
                                        & (~ (IData)(vlSelfRef.__PVT__bvalid_o))));
    vlSelfRef.__PVT__active_write_addr = ((IData)(vlSelfRef.__PVT__write_active)
                                           ? vlSelfRef.__PVT__write_addr
                                           : 0U);
    vlSelfRef.__PVT__read_addr = __Vdly__read_addr;
    vlSelfRef.__PVT__read_left = __Vdly__read_left;
    vlSelfRef.__PVT__arready_o = (1U & (~ (IData)(vlSelfRef.__PVT__read_active)));
    vlSelfRef.__PVT__rvalid_o = vlSelfRef.__PVT__read_active;
    vlSelfRef.__PVT__rlast_o = ((IData)(vlSelfRef.__PVT__read_active) 
                                & (0U == (IData)(vlSelfRef.__PVT__read_left)));
}
