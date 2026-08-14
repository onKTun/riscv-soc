// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_muldiv_csr_tb.h for the primary calling header

#include "Vriscv_muldiv_csr_tb__pch.h"
#include "Vriscv_muldiv_csr_tb__Syms.h"
#include "Vriscv_muldiv_csr_tb_riscv_core__M0_MBffff.h"

VL_ATTR_COLD void Vriscv_muldiv_csr_tb_riscv_core__M0_MBffff___stl_sequent__TOP__riscv_muldiv_csr_tb__dut__u_core__0(Vriscv_muldiv_csr_tb_riscv_core__M0_MBffff* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_muldiv_csr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_muldiv_csr_tb_riscv_core__M0_MBffff___stl_sequent__TOP__riscv_muldiv_csr_tb__dut__u_core__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    // Body
    vlSelfRef.__PVT__mmu_lsu_invalidate_w = vlSelfRef.__PVT__u_lsu__DOT__mem_invalidate_q;
    vlSelfRef.__PVT__mmu_lsu_writeback_w = vlSelfRef.__PVT__u_lsu__DOT__mem_writeback_q;
    vlSelfRef.__PVT__mmu_lsu_flush_w = vlSelfRef.__PVT__u_lsu__DOT__mem_flush_q;
    vlSelfRef.__PVT__u_fetch__DOT__icache_pc_w = vlSelfRef.__PVT__u_fetch__DOT__pc_f_q;
    vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__accept_o 
        = (2U != (IData)(vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__count_q));
    vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__valid_o 
        = (0U != (IData)(vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__count_q));
    __Vtemp_2[0U] = (IData)(vlSelfRef.__PVT__u_mul__DOT__operand_a_e1_q);
    __Vtemp_2[1U] = (((- (IData)((1U & (IData)((vlSelfRef.__PVT__u_mul__DOT__operand_a_e1_q 
                                                >> 0x20U))))) 
                      << 1U) | (IData)((vlSelfRef.__PVT__u_mul__DOT__operand_a_e1_q 
                                        >> 0x20U)));
    __Vtemp_2[2U] = ((- (IData)((1U & (IData)((vlSelfRef.__PVT__u_mul__DOT__operand_a_e1_q 
                                               >> 0x20U))))) 
                     >> 0x1fU);
    __Vtemp_3[0U] = (IData)(vlSelfRef.__PVT__u_mul__DOT__operand_b_e1_q);
    __Vtemp_3[1U] = (((- (IData)((1U & (IData)((vlSelfRef.__PVT__u_mul__DOT__operand_b_e1_q 
                                                >> 0x20U))))) 
                      << 1U) | (IData)((vlSelfRef.__PVT__u_mul__DOT__operand_b_e1_q 
                                        >> 0x20U)));
    __Vtemp_3[2U] = ((- (IData)((1U & (IData)((vlSelfRef.__PVT__u_mul__DOT__operand_b_e1_q 
                                               >> 0x20U))))) 
                     >> 0x1fU);
    VL_MUL_W(3, __Vtemp_4, __Vtemp_2, __Vtemp_3);
    vlSelfRef.__PVT__u_mul__DOT__mult_result_w[0U] 
        = __Vtemp_4[0U];
    vlSelfRef.__PVT__u_mul__DOT__mult_result_w[1U] 
        = __Vtemp_4[1U];
    vlSelfRef.__PVT__u_mul__DOT__mult_result_w[2U] 
        = (1U & __Vtemp_4[2U]);
    vlSelfRef.__PVT__u_div__DOT__div_complete_w = (
                                                   (~ (IData)(
                                                              (0U 
                                                               != vlSelfRef.__PVT__u_div__DOT__q_mask_q))) 
                                                   & (IData)(vlSelfRef.__PVT__u_div__DOT__div_busy_q));
    if (vlSelfRef.__PVT__u_fetch__DOT__skid_valid_q) {
        vlSelfRef.__PVT__fetch_pc_w = vlSelfRef.__PVT__u_fetch__DOT__skid_buffer_q[1U];
        vlSelfRef.__PVT__fetch_dec_fault_fetch_w = 
            (1U & vlSelfRef.__PVT__u_fetch__DOT__skid_buffer_q[2U]);
    } else {
        vlSelfRef.__PVT__fetch_pc_w = (0xfffffffcU 
                                       & vlSelfRef.__PVT__u_fetch__DOT__pc_d_q);
        vlSelfRef.__PVT__fetch_dec_fault_fetch_w = 
            (1U & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_icache.__PVT__axi_error_q));
    }
    vlSelfRef.__PVT__u_lsu__DOT__resp_addr_w = (IData)(
                                                       (vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__ram_q
                                                        [vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q] 
                                                        >> 4U));
    vlSelfRef.__PVT__u_lsu__DOT__resp_load_w = (1U 
                                                & (IData)(
                                                          vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__ram_q
                                                          [vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q]));
    vlSelfRef.__PVT__fetch_fault_page_w = ((IData)(vlSelfRef.__PVT__u_fetch__DOT__skid_valid_q) 
                                           && (1U & 
                                               (vlSelfRef.__PVT__u_fetch__DOT__skid_buffer_q[2U] 
                                                >> 1U)));
    vlSelfRef.u_decode__DOT____Vcellinp__genblk1__DOT__u_dec__fetch_fault_i 
        = ((IData)(vlSelfRef.__PVT__fetch_dec_fault_fetch_w) 
           | (IData)(vlSelfRef.__PVT__fetch_fault_page_w));
}
