// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_muldiv_csr_tb.h for the primary calling header

#include "Vriscv_muldiv_csr_tb__pch.h"
#include "Vriscv_muldiv_csr_tb__Syms.h"
#include "Vriscv_muldiv_csr_tb_icache.h"

VL_INLINE_OPT void Vriscv_muldiv_csr_tb_icache___nba_sequent__TOP__riscv_muldiv_csr_tb__dut__u_icache__0(Vriscv_muldiv_csr_tb_icache* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_muldiv_csr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_muldiv_csr_tb_icache___nba_sequent__TOP__riscv_muldiv_csr_tb__dut__u_icache__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*10:0*/ __Vdly__data_write_addr_q;
    __Vdly__data_write_addr_q = 0;
    CData/*0:0*/ __Vdly__replace_way_q;
    __Vdly__replace_way_q = 0;
    // Body
    __Vdly__replace_way_q = vlSelfRef.__PVT__replace_way_q;
    __Vdly__data_write_addr_q = vlSelfRef.__PVT__data_write_addr_q;
    if (vlSymsp->TOP__riscv_muldiv_csr_tb.__PVT__rst) {
        vlSelfRef.__PVT__flush_addr_q = 0U;
        __Vdly__replace_way_q = 0U;
        __Vdly__data_write_addr_q = 0U;
        vlSelfRef.__PVT__lookup_valid_q = 0U;
        vlSelfRef.__PVT__axi_error_q = 0U;
        vlSelfRef.__PVT__state_q = 0U;
    } else {
        vlSelfRef.__PVT__flush_addr_q = ((0U == (IData)(vlSelfRef.__PVT__state_q))
                                          ? (0xffU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__flush_addr_q)))
                                          : 0U);
        if (((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__i_memory.__PVT__read_active) 
             & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__i_memory.__PVT__rlast_o))) {
            __Vdly__replace_way_q = (1U & ((IData)(1U) 
                                           + (IData)(vlSelfRef.__PVT__replace_way_q)));
        }
        if (((1U == (IData)(vlSelfRef.__PVT__state_q)) 
             & (2U == (IData)(vlSelfRef.__PVT__next_state_r)))) {
            __Vdly__data_write_addr_q = (0x7f8U & (vlSelfRef.__PVT__lookup_addr_q 
                                                   >> 2U));
        } else if (((2U == (IData)(vlSelfRef.__PVT__state_q)) 
                    & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__i_memory.__PVT__read_active))) {
            __Vdly__data_write_addr_q = (0x7ffU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__data_write_addr_q)));
        }
        if (((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__mem_i_rd_o) 
             & (IData)(vlSelfRef.__PVT__req_accept_o))) {
            vlSelfRef.__PVT__lookup_valid_q = 1U;
        } else if (vlSelfRef.__PVT__req_valid_o) {
            vlSelfRef.__PVT__lookup_valid_q = 0U;
        }
        if (vlSelfRef.__PVT__req_valid_o) {
            vlSelfRef.__PVT__axi_error_q = 0U;
        }
        vlSelfRef.__PVT__state_q = vlSelfRef.__PVT__next_state_r;
    }
    vlSelfRef.__PVT__invalidate_q = 0U;
    vlSelfRef.__PVT__axi_arvalid_q = ((~ (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb.__PVT__rst)) 
                                      & ((IData)(vlSelfRef.__PVT__axi_arvalid_o) 
                                         & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__i_memory.__PVT__read_active)));
    vlSelfRef.__PVT__replace_way_q = __Vdly__replace_way_q;
    vlSelfRef.__PVT__data_write_addr_q = __Vdly__data_write_addr_q;
}

VL_INLINE_OPT void Vriscv_muldiv_csr_tb_icache___nba_sequent__TOP__riscv_muldiv_csr_tb__dut__u_icache__1(Vriscv_muldiv_csr_tb_icache* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_muldiv_csr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_muldiv_csr_tb_icache___nba_sequent__TOP__riscv_muldiv_csr_tb__dut__u_icache__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__tag0_write_r = 0U;
    vlSelfRef.__PVT__tag1_write_r = 0U;
    if (vlSymsp->TOP__riscv_muldiv_csr_tb.__PVT__rst) {
        vlSelfRef.__PVT__lookup_addr_q = 0U;
    } else if (((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__mem_i_rd_o) 
                & (IData)(vlSelfRef.__PVT__req_accept_o))) {
        vlSelfRef.__PVT__lookup_addr_q = (0xfffffffcU 
                                          & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_fetch__DOT__pc_f_q);
    }
    vlSelfRef.__PVT__tag_data_in_r = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__state_q))) {
        vlSelfRef.__PVT__tag0_write_r = 1U;
        vlSelfRef.__PVT__tag1_write_r = 1U;
        vlSelfRef.__PVT__tag_data_in_r = 0U;
    } else if ((2U == (IData)(vlSelfRef.__PVT__state_q))) {
        vlSelfRef.__PVT__tag0_write_r = (((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__i_memory.__PVT__read_active) 
                                          & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__i_memory.__PVT__rlast_o)) 
                                         & (~ (IData)(vlSelfRef.__PVT__replace_way_q)));
        vlSelfRef.__PVT__tag1_write_r = (((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__i_memory.__PVT__read_active) 
                                          & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__i_memory.__PVT__rlast_o)) 
                                         & (IData)(vlSelfRef.__PVT__replace_way_q));
        vlSelfRef.__PVT__tag_data_in_r = (0x80000U 
                                          | (vlSelfRef.__PVT__lookup_addr_q 
                                             >> 0xdU));
    }
}

VL_INLINE_OPT void Vriscv_muldiv_csr_tb_icache___nba_sequent__TOP__riscv_muldiv_csr_tb__dut__u_icache__2(Vriscv_muldiv_csr_tb_icache* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_muldiv_csr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_muldiv_csr_tb_icache___nba_sequent__TOP__riscv_muldiv_csr_tb__dut__u_icache__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__tag_addr_r = (0xffU & ((0U == (IData)(vlSelfRef.__PVT__state_q))
                                             ? (IData)(vlSelfRef.__PVT__flush_addr_q)
                                             : (((2U 
                                                  == (IData)(vlSelfRef.__PVT__state_q)) 
                                                 | (3U 
                                                    == (IData)(vlSelfRef.__PVT__state_q)))
                                                 ? 
                                                (vlSelfRef.__PVT__lookup_addr_q 
                                                 >> 5U)
                                                 : 
                                                (vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_fetch__DOT__pc_f_q 
                                                 >> 5U))));
    vlSelfRef.__PVT__data_addr_r = (0x7ffU & ((2U == (IData)(vlSelfRef.__PVT__state_q))
                                               ? (IData)(vlSelfRef.__PVT__data_write_addr_q)
                                               : ((3U 
                                                   == (IData)(vlSelfRef.__PVT__state_q))
                                                   ? 
                                                  (vlSelfRef.__PVT__lookup_addr_q 
                                                   >> 2U)
                                                   : 
                                                  (vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_fetch__DOT__pc_f_q 
                                                   >> 2U))));
}

VL_INLINE_OPT void Vriscv_muldiv_csr_tb_icache___nba_comb__TOP__riscv_muldiv_csr_tb__dut__u_icache__0(Vriscv_muldiv_csr_tb_icache* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_muldiv_csr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_muldiv_csr_tb_icache___nba_comb__TOP__riscv_muldiv_csr_tb__dut__u_icache__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__tag0_hit_w = ((vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_icache__u_tag0.__PVT__ram_read_q 
                                    >> 0x13U) & ((0x7ffffU 
                                                  & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_icache__u_tag0.__PVT__ram_read_q) 
                                                 == 
                                                 (vlSelfRef.__PVT__lookup_addr_q 
                                                  >> 0xdU)));
    vlSelfRef.__PVT__tag1_hit_w = ((vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_icache__u_tag1.__PVT__ram_read_q 
                                    >> 0x13U) & ((0x7ffffU 
                                                  & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_icache__u_tag1.__PVT__ram_read_q) 
                                                 == 
                                                 (vlSelfRef.__PVT__lookup_addr_q 
                                                  >> 0xdU)));
    vlSelfRef.__PVT__tag_hit_any_w = ((IData)(vlSelfRef.__PVT__tag0_hit_w) 
                                      | (IData)(vlSelfRef.__PVT__tag1_hit_w));
    vlSelfRef.__PVT__inst_r = vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_icache__u_data0.__PVT__ram_read_q;
    if (vlSelfRef.__PVT__tag0_hit_w) {
        vlSelfRef.__PVT__inst_r = vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_icache__u_data0.__PVT__ram_read_q;
    } else if (vlSelfRef.__PVT__tag1_hit_w) {
        vlSelfRef.__PVT__inst_r = vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_icache__u_data1.__PVT__ram_read_q;
    }
    vlSelfRef.__PVT__next_state_r = vlSelfRef.__PVT__state_q;
    if ((2U & (IData)(vlSelfRef.__PVT__state_q))) {
        if ((1U & (IData)(vlSelfRef.__PVT__state_q))) {
            vlSelfRef.__PVT__next_state_r = 1U;
        } else if (((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__i_memory.__PVT__read_active) 
                    & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__i_memory.__PVT__rlast_o))) {
            vlSelfRef.__PVT__next_state_r = 3U;
        }
    } else if ((1U & (IData)(vlSelfRef.__PVT__state_q))) {
        if (((IData)(vlSelfRef.__PVT__lookup_valid_q) 
             & (~ (IData)(vlSelfRef.__PVT__tag_hit_any_w)))) {
            vlSelfRef.__PVT__next_state_r = 2U;
        } else if (((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__PVT__ifence_q) 
                    | (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_fetch__DOT__icache_invalidate_q))) {
            vlSelfRef.__PVT__next_state_r = 0U;
        }
    } else if (vlSelfRef.__PVT__invalidate_q) {
        vlSelfRef.__PVT__next_state_r = 1U;
    } else if ((0xffU == (IData)(vlSelfRef.__PVT__flush_addr_q))) {
        vlSelfRef.__PVT__next_state_r = 1U;
    }
    vlSelfRef.__PVT__req_valid_o = ((IData)(vlSelfRef.__PVT__lookup_valid_q) 
                                    & ((1U == (IData)(vlSelfRef.__PVT__state_q)) 
                                       & (IData)(vlSelfRef.__PVT__tag_hit_any_w)));
    vlSelfRef.__PVT__axi_arvalid_o = (((1U == (IData)(vlSelfRef.__PVT__state_q)) 
                                       & (2U == (IData)(vlSelfRef.__PVT__next_state_r))) 
                                      | (IData)(vlSelfRef.__PVT__axi_arvalid_q));
    vlSelfRef.__PVT__req_accept_o = ((1U == (IData)(vlSelfRef.__PVT__state_q)) 
                                     & (2U != (IData)(vlSelfRef.__PVT__next_state_r)));
}
