// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vriscv_top_tb.h for the primary calling header

#ifndef VERILATED_VRISCV_TOP_TB_RISCV_CORE__M0_MBFFFF_H_
#define VERILATED_VRISCV_TOP_TB_RISCV_CORE__M0_MBFFFF_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
class Vriscv_top_tb_riscv_csr__SB0;
class Vriscv_top_tb_riscv_issue;


class Vriscv_top_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vriscv_top_tb_riscv_core__M0_MBffff final : public VerilatedModule {
  public:
    // CELLS
    Vriscv_top_tb_riscv_csr__SB0* u_csr;
    Vriscv_top_tb_riscv_issue* u_issue;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk_i,0,0);
        VL_IN8(__PVT__rst_i,0,0);
        VL_IN8(__PVT__mem_d_accept_i,0,0);
        VL_IN8(__PVT__mem_d_ack_i,0,0);
        VL_IN8(__PVT__mem_d_error_i,0,0);
        VL_IN8(__PVT__mem_i_accept_i,0,0);
        VL_IN8(__PVT__mem_i_valid_i,0,0);
        VL_IN8(__PVT__mem_i_error_i,0,0);
        VL_IN8(__PVT__intr_i,0,0);
        VL_OUT8(__PVT__mem_d_rd_o,0,0);
        VL_OUT8(__PVT__mem_d_wr_o,3,0);
        VL_OUT8(__PVT__mem_d_cacheable_o,0,0);
        VL_OUT8(__PVT__mem_d_invalidate_o,0,0);
        VL_OUT8(__PVT__mem_d_writeback_o,0,0);
        VL_OUT8(__PVT__mem_d_flush_o,0,0);
        VL_OUT8(__PVT__mem_i_rd_o,0,0);
        VL_OUT8(__PVT__mem_i_flush_o,0,0);
        VL_OUT8(__PVT__mem_i_invalidate_o,0,0);
        CData/*0:0*/ __PVT__mmu_lsu_writeback_w;
        CData/*0:0*/ __PVT__fetch_instr_mul_w;
        CData/*0:0*/ __PVT__writeback_mem_valid_w;
        CData/*0:0*/ __PVT__fetch_fault_page_w;
        CData/*0:0*/ __PVT__fetch_instr_invalid_w;
        CData/*0:0*/ __PVT__branch_d_exec_request_w;
        CData/*0:0*/ __PVT__fetch_dec_fault_fetch_w;
        CData/*0:0*/ __PVT__fetch_dec_valid_w;
        CData/*0:0*/ __PVT__mmu_lsu_invalidate_w;
        CData/*0:0*/ __PVT__fetch_instr_exec_w;
        CData/*0:0*/ __PVT__fetch_instr_csr_w;
        CData/*0:0*/ __PVT__fetch_instr_div_w;
        CData/*0:0*/ __PVT__fetch_instr_rd_valid_w;
        CData/*0:0*/ __PVT__mmu_lsu_flush_w;
        CData/*3:0*/ __PVT__u_exec__DOT__alu_func_r;
        CData/*0:0*/ __PVT__u_exec__DOT__branch_r;
        CData/*0:0*/ __PVT__u_exec__DOT__branch_taken_r;
        CData/*0:0*/ __PVT__u_exec__DOT__branch_call_r;
        CData/*0:0*/ __PVT__u_exec__DOT__branch_ret_r;
        CData/*0:0*/ __PVT__u_exec__DOT__branch_jmp_r;
        CData/*0:0*/ __PVT__u_exec__DOT__branch_taken_q;
        CData/*0:0*/ __PVT__u_exec__DOT__branch_ntaken_q;
        CData/*0:0*/ __PVT__u_exec__DOT__branch_call_q;
        CData/*0:0*/ __PVT__u_exec__DOT__branch_ret_q;
        CData/*0:0*/ __PVT__u_exec__DOT__branch_jmp_q;
        CData/*0:0*/ u_decode__DOT____Vcellinp__genblk1__DOT__u_dec__fetch_fault_i;
        CData/*0:0*/ u_decode__DOT__genblk1__DOT__u_dec__DOT____VdfgRegularize_h97a258c1_0_57;
        CData/*0:0*/ u_decode__DOT__genblk1__DOT__u_dec__DOT____VdfgRegularize_h97a258c1_0_63;
        CData/*0:0*/ u_decode__DOT__genblk1__DOT__u_dec__DOT____VdfgRegularize_h97a258c1_0_64;
        CData/*0:0*/ __PVT__u_lsu__DOT__mem_rd_q;
        CData/*3:0*/ __PVT__u_lsu__DOT__mem_wr_q;
        CData/*0:0*/ __PVT__u_lsu__DOT__mem_cacheable_q;
        CData/*0:0*/ __PVT__u_lsu__DOT__mem_invalidate_q;
        CData/*0:0*/ __PVT__u_lsu__DOT__mem_writeback_q;
        CData/*0:0*/ __PVT__u_lsu__DOT__mem_flush_q;
        CData/*0:0*/ __PVT__u_lsu__DOT__mem_unaligned_e1_q;
        CData/*0:0*/ __PVT__u_lsu__DOT__mem_unaligned_e2_q;
        CData/*0:0*/ __PVT__u_lsu__DOT__mem_load_q;
        CData/*0:0*/ __PVT__u_lsu__DOT__mem_xb_q;
        CData/*0:0*/ __PVT__u_lsu__DOT__mem_xh_q;
        CData/*0:0*/ __PVT__u_lsu__DOT__mem_ls_q;
        CData/*0:0*/ __PVT__u_lsu__DOT__pending_lsu_e2_q;
        CData/*0:0*/ __PVT__u_lsu__DOT__issue_lsu_e1_w;
        CData/*0:0*/ __PVT__u_lsu__DOT__complete_ok_e2_w;
        CData/*0:0*/ __PVT__u_lsu__DOT__complete_err_e2_w;
        CData/*0:0*/ __PVT__u_lsu__DOT__delay_lsu_e2_w;
    };
    struct {
        CData/*0:0*/ __PVT__u_lsu__DOT__load_inst_w;
        CData/*0:0*/ __PVT__u_lsu__DOT__load_signed_inst_w;
        CData/*0:0*/ __PVT__u_lsu__DOT__req_lh_w;
        CData/*0:0*/ __PVT__u_lsu__DOT__mem_unaligned_r;
        CData/*0:0*/ __PVT__u_lsu__DOT__mem_rd_r;
        CData/*3:0*/ __PVT__u_lsu__DOT__mem_wr_r;
        CData/*0:0*/ __PVT__u_lsu__DOT__dcache_flush_w;
        CData/*0:0*/ __PVT__u_lsu__DOT__dcache_writeback_w;
        CData/*0:0*/ __PVT__u_lsu__DOT__dcache_invalidate_w;
        CData/*0:0*/ __PVT__u_lsu__DOT__resp_load_w;
        CData/*0:0*/ u_lsu__DOT____Vcellinp__u_lsu_request__push_i;
        CData/*1:0*/ __PVT__u_lsu__DOT__addr_lsb_r;
        CData/*0:0*/ __PVT__u_lsu__DOT__load_byte_r;
        CData/*0:0*/ __PVT__u_lsu__DOT__load_half_r;
        CData/*0:0*/ __PVT__u_lsu__DOT__load_signed_r;
        CData/*0:0*/ __PVT__u_lsu__DOT__u_lsu_request__DOT__accept_o;
        CData/*0:0*/ __PVT__u_lsu__DOT__u_lsu_request__DOT__valid_o;
        CData/*0:0*/ __PVT__u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q;
        CData/*0:0*/ __PVT__u_lsu__DOT__u_lsu_request__DOT__wr_ptr_q;
        CData/*1:0*/ __PVT__u_lsu__DOT__u_lsu_request__DOT__count_q;
        CData/*0:0*/ __PVT__u_mul__DOT__mulhi_sel_e1_q;
        CData/*0:0*/ __PVT__u_mul__DOT__mult_inst_w;
        CData/*0:0*/ __PVT__u_div__DOT__valid_q;
        CData/*0:0*/ __PVT__u_div__DOT__signed_operation_w;
        CData/*0:0*/ __PVT__u_div__DOT__div_operation_w;
        CData/*0:0*/ __PVT__u_div__DOT__div_inst_q;
        CData/*0:0*/ __PVT__u_div__DOT__div_busy_q;
        CData/*0:0*/ __PVT__u_div__DOT__invert_res_q;
        CData/*0:0*/ __PVT__u_div__DOT__div_start_w;
        CData/*0:0*/ __PVT__u_div__DOT__div_complete_w;
        CData/*0:0*/ __PVT__u_fetch__DOT__active_q;
        CData/*0:0*/ __PVT__u_fetch__DOT__icache_busy_w;
        CData/*0:0*/ __PVT__u_fetch__DOT__stall_w;
        CData/*0:0*/ __PVT__u_fetch__DOT__branch_q;
        CData/*1:0*/ __PVT__u_fetch__DOT__branch_priv_q;
        CData/*0:0*/ __PVT__u_fetch__DOT__stall_q;
        CData/*0:0*/ __PVT__u_fetch__DOT__icache_fetch_q;
        CData/*0:0*/ __PVT__u_fetch__DOT__icache_invalidate_q;
        CData/*1:0*/ __PVT__u_fetch__DOT__priv_f_q;
        CData/*0:0*/ __PVT__u_fetch__DOT__branch_d_q;
        CData/*0:0*/ __PVT__u_fetch__DOT__skid_valid_q;
        CData/*0:0*/ __Vfunc_u_exec__DOT__less_than_signed__0__Vfuncout;
        CData/*0:0*/ __Vfunc_u_exec__DOT__greater_than_signed__1__Vfuncout;
        VL_IN16(__PVT__mem_d_resp_tag_i,10,0);
        VL_OUT16(__PVT__mem_d_req_tag_o,10,0);
        SData/*15:0*/ __PVT__u_exec__DOT__u_alu__DOT__shift_right_fill_r;
        VL_IN(__PVT__mem_d_data_rd_i,31,0);
        VL_IN(__PVT__mem_i_inst_i,31,0);
        VL_IN(__PVT__reset_vector_i,31,0);
        VL_IN(__PVT__cpu_id_i,31,0);
        VL_OUT(__PVT__mem_d_addr_o,31,0);
        VL_OUT(__PVT__mem_d_data_wr_o,31,0);
        VL_OUT(__PVT__mem_i_pc_o,31,0);
        IData/*31:0*/ __PVT__fetch_pc_w;
        IData/*31:0*/ __PVT__fetch_dec_instr_w;
        IData/*31:0*/ __PVT__fetch_instr_w;
        IData/*31:0*/ __PVT__u_exec__DOT__imm12_r;
        IData/*31:0*/ __PVT__u_exec__DOT__alu_input_a_r;
        IData/*31:0*/ __PVT__u_exec__DOT__alu_input_b_r;
        IData/*31:0*/ __PVT__u_exec__DOT__result_q;
        IData/*31:0*/ __PVT__u_exec__DOT__less_than_signed__Vstatic__v;
        IData/*31:0*/ __PVT__u_exec__DOT__greater_than_signed__Vstatic__v;
        IData/*31:0*/ __PVT__u_exec__DOT__branch_target_r;
        IData/*31:0*/ __PVT__u_exec__DOT__pc_x_q;
    };
    struct {
        IData/*31:0*/ __PVT__u_exec__DOT__pc_m_q;
        IData/*31:0*/ __PVT__u_exec__DOT__u_alu__DOT__result_r;
        IData/*31:0*/ __PVT__u_exec__DOT__u_alu__DOT__shift_right_1_r;
        IData/*31:0*/ __PVT__u_exec__DOT__u_alu__DOT__shift_right_2_r;
        IData/*31:0*/ __PVT__u_exec__DOT__u_alu__DOT__shift_right_4_r;
        IData/*31:0*/ __PVT__u_exec__DOT__u_alu__DOT__shift_right_8_r;
        IData/*31:0*/ __PVT__u_exec__DOT__u_alu__DOT__shift_left_1_r;
        IData/*31:0*/ __PVT__u_exec__DOT__u_alu__DOT__shift_left_2_r;
        IData/*31:0*/ __PVT__u_exec__DOT__u_alu__DOT__shift_left_4_r;
        IData/*31:0*/ __PVT__u_exec__DOT__u_alu__DOT__shift_left_8_r;
        IData/*31:0*/ __PVT__u_exec__DOT__u_alu__DOT__sub_res_w;
        IData/*31:0*/ __PVT__u_lsu__DOT__mem_addr_q;
        IData/*31:0*/ __PVT__u_lsu__DOT__mem_data_wr_q;
        IData/*31:0*/ __PVT__u_lsu__DOT__mem_addr_r;
        IData/*31:0*/ __PVT__u_lsu__DOT__mem_data_r;
        IData/*31:0*/ __PVT__u_lsu__DOT__resp_addr_w;
        IData/*31:0*/ __PVT__u_lsu__DOT__wb_result_r;
        IData/*31:0*/ __PVT__u_lsu__DOT__u_lsu_request__DOT__i;
        IData/*31:0*/ __PVT__u_mul__DOT__result_e2_q;
        IData/*31:0*/ __PVT__u_mul__DOT__result_e3_q;
        VlWide<3>/*64:0*/ __PVT__u_mul__DOT__mult_result_w;
        IData/*31:0*/ __PVT__u_div__DOT__wb_result_q;
        IData/*31:0*/ __PVT__u_div__DOT__dividend_q;
        IData/*31:0*/ __PVT__u_div__DOT__quotient_q;
        IData/*31:0*/ __PVT__u_div__DOT__q_mask_q;
        IData/*31:0*/ __PVT__u_fetch__DOT__branch_pc_q;
        IData/*31:0*/ __PVT__u_fetch__DOT__pc_f_q;
        IData/*31:0*/ __PVT__u_fetch__DOT__pc_d_q;
        IData/*31:0*/ __PVT__u_fetch__DOT__icache_pc_w;
        VlWide<3>/*65:0*/ __PVT__u_fetch__DOT__skid_buffer_q;
        IData/*31:0*/ __Vfunc_u_exec__DOT__less_than_signed__0__x;
        IData/*31:0*/ __Vfunc_u_exec__DOT__less_than_signed__0__y;
        IData/*31:0*/ __Vfunc_u_exec__DOT__greater_than_signed__1__x;
        IData/*31:0*/ __Vfunc_u_exec__DOT__greater_than_signed__1__y;
        IData/*31:0*/ __Vdly__u_div__DOT__dividend_q;
        IData/*31:0*/ __Vdly__u_div__DOT__quotient_q;
        QData/*32:0*/ __PVT__u_mul__DOT__operand_a_e1_q;
        QData/*32:0*/ __PVT__u_mul__DOT__operand_b_e1_q;
        QData/*32:0*/ u_mul__DOT____VdfgRegularize_h4f118b46_0_3;
        QData/*62:0*/ __PVT__u_div__DOT__divisor_q;
        VlUnpacked<QData/*35:0*/, 2> __PVT__u_lsu__DOT__u_lsu_request__DOT__ram_q;
    };

    // INTERNAL VARIABLES
    Vriscv_top_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vriscv_top_tb_riscv_core__M0_MBffff(Vriscv_top_tb__Syms* symsp, const char* v__name);
    ~Vriscv_top_tb_riscv_core__M0_MBffff();
    VL_UNCOPYABLE(Vriscv_top_tb_riscv_core__M0_MBffff);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
