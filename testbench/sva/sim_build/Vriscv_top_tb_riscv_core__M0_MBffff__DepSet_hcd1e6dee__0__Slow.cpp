// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top_tb.h for the primary calling header

#include "Vriscv_top_tb__pch.h"
#include "Vriscv_top_tb_riscv_core__M0_MBffff.h"

VL_ATTR_COLD void Vriscv_top_tb_riscv_core__M0_MBffff___ctor_var_reset(Vriscv_top_tb_riscv_core__M0_MBffff* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_top_tb_riscv_core__M0_MBffff___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_d_data_rd_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_d_accept_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_d_ack_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_d_error_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_d_resp_tag_i = VL_RAND_RESET_I(11);
    vlSelf->__PVT__mem_i_accept_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_i_valid_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_i_error_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_i_inst_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__intr_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset_vector_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cpu_id_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_d_addr_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_d_data_wr_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_d_rd_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_d_wr_o = VL_RAND_RESET_I(4);
    vlSelf->__PVT__mem_d_cacheable_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_d_req_tag_o = VL_RAND_RESET_I(11);
    vlSelf->__PVT__mem_d_invalidate_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_d_writeback_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_d_flush_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_i_rd_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_i_flush_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_i_invalidate_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_i_pc_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mmu_lsu_writeback_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_instr_mul_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__writeback_mem_valid_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_fault_page_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_instr_invalid_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_d_exec_request_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_dec_fault_fetch_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_dec_valid_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_pc_w = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mmu_lsu_invalidate_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_instr_exec_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_instr_csr_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_dec_instr_w = VL_RAND_RESET_I(32);
    vlSelf->__PVT__fetch_instr_div_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_instr_w = VL_RAND_RESET_I(32);
    vlSelf->__PVT__fetch_instr_rd_valid_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mmu_lsu_flush_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_exec__DOT__imm12_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_exec__DOT__alu_func_r = VL_RAND_RESET_I(4);
    vlSelf->__PVT__u_exec__DOT__alu_input_a_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_exec__DOT__alu_input_b_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_exec__DOT__result_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_exec__DOT__less_than_signed__Vstatic__v = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_exec__DOT__greater_than_signed__Vstatic__v = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_exec__DOT__branch_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_exec__DOT__branch_taken_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_exec__DOT__branch_target_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_exec__DOT__branch_call_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_exec__DOT__branch_ret_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_exec__DOT__branch_jmp_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_exec__DOT__branch_taken_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_exec__DOT__branch_ntaken_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_exec__DOT__pc_x_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_exec__DOT__pc_m_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_exec__DOT__branch_call_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_exec__DOT__branch_ret_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_exec__DOT__branch_jmp_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_exec__DOT__u_alu__DOT__result_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_exec__DOT__u_alu__DOT__shift_right_fill_r = VL_RAND_RESET_I(16);
    vlSelf->__PVT__u_exec__DOT__u_alu__DOT__shift_right_1_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_exec__DOT__u_alu__DOT__shift_right_2_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_exec__DOT__u_alu__DOT__shift_right_4_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_exec__DOT__u_alu__DOT__shift_right_8_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_exec__DOT__u_alu__DOT__shift_left_1_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_exec__DOT__u_alu__DOT__shift_left_2_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_exec__DOT__u_alu__DOT__shift_left_4_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_exec__DOT__u_alu__DOT__shift_left_8_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_exec__DOT__u_alu__DOT__sub_res_w = VL_RAND_RESET_I(32);
    vlSelf->u_decode__DOT____Vcellinp__genblk1__DOT__u_dec__fetch_fault_i = VL_RAND_RESET_I(1);
    vlSelf->u_decode__DOT__genblk1__DOT__u_dec__DOT____VdfgRegularize_h97a258c1_0_57 = VL_RAND_RESET_I(1);
    vlSelf->u_decode__DOT__genblk1__DOT__u_dec__DOT____VdfgRegularize_h97a258c1_0_63 = VL_RAND_RESET_I(1);
    vlSelf->u_decode__DOT__genblk1__DOT__u_dec__DOT____VdfgRegularize_h97a258c1_0_64 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_lsu__DOT__mem_addr_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_lsu__DOT__mem_data_wr_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_lsu__DOT__mem_rd_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_lsu__DOT__mem_wr_q = VL_RAND_RESET_I(4);
    vlSelf->__PVT__u_lsu__DOT__mem_cacheable_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_lsu__DOT__mem_invalidate_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_lsu__DOT__mem_writeback_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_lsu__DOT__mem_flush_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_lsu__DOT__mem_unaligned_e1_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_lsu__DOT__mem_unaligned_e2_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_lsu__DOT__mem_load_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_lsu__DOT__mem_xb_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_lsu__DOT__mem_xh_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_lsu__DOT__mem_ls_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_lsu__DOT__pending_lsu_e2_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_lsu__DOT__issue_lsu_e1_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_lsu__DOT__complete_ok_e2_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_lsu__DOT__complete_err_e2_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_lsu__DOT__delay_lsu_e2_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_lsu__DOT__load_inst_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_lsu__DOT__load_signed_inst_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_lsu__DOT__req_lh_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_lsu__DOT__mem_addr_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_lsu__DOT__mem_unaligned_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_lsu__DOT__mem_data_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_lsu__DOT__mem_rd_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_lsu__DOT__mem_wr_r = VL_RAND_RESET_I(4);
    vlSelf->__PVT__u_lsu__DOT__dcache_flush_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_lsu__DOT__dcache_writeback_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_lsu__DOT__dcache_invalidate_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_lsu__DOT__resp_load_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_lsu__DOT__resp_addr_w = VL_RAND_RESET_I(32);
    vlSelf->u_lsu__DOT____Vcellinp__u_lsu_request__push_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_lsu__DOT__addr_lsb_r = VL_RAND_RESET_I(2);
    vlSelf->__PVT__u_lsu__DOT__load_byte_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_lsu__DOT__load_half_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_lsu__DOT__load_signed_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_lsu__DOT__wb_result_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_lsu__DOT__u_lsu_request__DOT__accept_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_lsu__DOT__u_lsu_request__DOT__valid_o = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__u_lsu__DOT__u_lsu_request__DOT__ram_q[__Vi0] = VL_RAND_RESET_Q(36);
    }
    vlSelf->__PVT__u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_lsu__DOT__u_lsu_request__DOT__wr_ptr_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_lsu__DOT__u_lsu_request__DOT__count_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__u_lsu__DOT__u_lsu_request__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_mul__DOT__result_e2_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_mul__DOT__result_e3_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_mul__DOT__operand_a_e1_q = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__u_mul__DOT__operand_b_e1_q = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__u_mul__DOT__mulhi_sel_e1_q = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->__PVT__u_mul__DOT__mult_result_w);
    vlSelf->__PVT__u_mul__DOT__mult_inst_w = VL_RAND_RESET_I(1);
    vlSelf->u_mul__DOT____VdfgRegularize_h4f118b46_0_3 = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__u_div__DOT__valid_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_div__DOT__wb_result_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_div__DOT__signed_operation_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_div__DOT__div_operation_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_div__DOT__dividend_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_div__DOT__divisor_q = VL_RAND_RESET_Q(63);
    vlSelf->__PVT__u_div__DOT__quotient_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_div__DOT__q_mask_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_div__DOT__div_inst_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_div__DOT__div_busy_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_div__DOT__invert_res_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_div__DOT__div_start_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_div__DOT__div_complete_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_fetch__DOT__active_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_fetch__DOT__icache_busy_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_fetch__DOT__stall_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_fetch__DOT__branch_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_fetch__DOT__branch_pc_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_fetch__DOT__branch_priv_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__u_fetch__DOT__stall_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_fetch__DOT__icache_fetch_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_fetch__DOT__icache_invalidate_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_fetch__DOT__pc_f_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_fetch__DOT__pc_d_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_fetch__DOT__icache_pc_w = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_fetch__DOT__priv_f_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__u_fetch__DOT__branch_d_q = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(66, vlSelf->__PVT__u_fetch__DOT__skid_buffer_q);
    vlSelf->__PVT__u_fetch__DOT__skid_valid_q = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_u_exec__DOT__less_than_signed__0__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_u_exec__DOT__less_than_signed__0__x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_u_exec__DOT__less_than_signed__0__y = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_u_exec__DOT__greater_than_signed__1__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_u_exec__DOT__greater_than_signed__1__x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_u_exec__DOT__greater_than_signed__1__y = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__u_div__DOT__dividend_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__u_div__DOT__quotient_q = VL_RAND_RESET_I(32);
}

VL_ATTR_COLD void Vriscv_top_tb_riscv_core__M0_MBffff___configure_coverage(Vriscv_top_tb_riscv_core__M0_MBffff* vlSelf, bool first) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_top_tb_riscv_core__M0_MBffff___configure_coverage\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
