// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vriscv_muldiv_csr_tb.h for the primary calling header

#ifndef VERILATED_VRISCV_MULDIV_CSR_TB_RISCV_CSR__SB0_H_
#define VERILATED_VRISCV_MULDIV_CSR_TB_RISCV_CSR__SB0_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
class Vriscv_muldiv_csr_tb_riscv_csr_regfile;


class Vriscv_muldiv_csr_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vriscv_muldiv_csr_tb_riscv_csr__SB0 final : public VerilatedModule {
  public:
    // CELLS
    Vriscv_muldiv_csr_tb_riscv_csr_regfile* u_csrfile;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk_i,0,0);
    VL_IN8(__PVT__rst_i,0,0);
    VL_IN8(__PVT__intr_i,0,0);
    VL_IN8(__PVT__opcode_valid_i,0,0);
    VL_IN8(__PVT__opcode_invalid_i,0,0);
    VL_IN8(__PVT__opcode_rd_idx_i,4,0);
    VL_IN8(__PVT__opcode_ra_idx_i,4,0);
    VL_IN8(__PVT__opcode_rb_idx_i,4,0);
    VL_IN8(__PVT__csr_writeback_write_i,0,0);
    VL_IN8(__PVT__csr_writeback_exception_i,5,0);
    VL_IN8(__PVT__interrupt_inhibit_i,0,0);
    VL_OUT8(__PVT__csr_result_e1_write_o,0,0);
    VL_OUT8(__PVT__csr_result_e1_exception_o,5,0);
    VL_OUT8(__PVT__branch_csr_request_o,0,0);
    VL_OUT8(__PVT__branch_csr_priv_o,1,0);
    VL_OUT8(__PVT__take_interrupt_o,0,0);
    VL_OUT8(__PVT__ifence_o,0,0);
    VL_OUT8(__PVT__mmu_priv_d_o,1,0);
    VL_OUT8(__PVT__mmu_sum_o,0,0);
    VL_OUT8(__PVT__mmu_mxr_o,0,0);
    VL_OUT8(__PVT__mmu_flush_o,0,0);
    CData/*0:0*/ __PVT__csrrw_w;
    CData/*0:0*/ __PVT__csrrwi_w;
    CData/*0:0*/ __PVT__csrrsi_w;
    CData/*0:0*/ __PVT__csrrci_w;
    CData/*0:0*/ __PVT__sfence_w;
    CData/*0:0*/ __PVT__ifence_w;
    CData/*0:0*/ __PVT__satp_update_w;
    CData/*0:0*/ __PVT__rd_valid_e1_q;
    CData/*5:0*/ __PVT__exception_e1_q;
    CData/*0:0*/ __PVT__eret_fault_w;
    CData/*0:0*/ __PVT__take_interrupt_q;
    CData/*0:0*/ __PVT__tlb_flush_q;
    CData/*0:0*/ __PVT__ifence_q;
    CData/*0:0*/ __PVT__branch_q;
    CData/*0:0*/ __PVT__reset_q;
    CData/*0:0*/ __VdfgExtracted_h8b06e925__0;
    CData/*0:0*/ __VdfgExtracted_hefcb34c3__0;
    CData/*0:0*/ __Vdly__take_interrupt_q;
    CData/*0:0*/ __Vdly__reset_q;
    VL_IN16(__PVT__csr_writeback_waddr_i,11,0);
    SData/*11:0*/ __Vcellinp__u_csrfile__csr_waddr_i;
    VL_IN(__PVT__opcode_opcode_i,31,0);
    VL_IN(__PVT__opcode_pc_i,31,0);
    VL_IN(__PVT__opcode_ra_operand_i,31,0);
    VL_IN(__PVT__opcode_rb_operand_i,31,0);
    VL_IN(__PVT__csr_writeback_wdata_i,31,0);
    VL_IN(__PVT__csr_writeback_exception_pc_i,31,0);
    VL_IN(__PVT__csr_writeback_exception_addr_i,31,0);
    VL_IN(__PVT__cpu_id_i,31,0);
    VL_IN(__PVT__reset_vector_i,31,0);
    VL_OUT(__PVT__csr_result_e1_value_o,31,0);
    VL_OUT(__PVT__csr_result_e1_wdata_o,31,0);
    VL_OUT(__PVT__branch_csr_pc_o,31,0);
    VL_OUT(__PVT__mmu_satp_o,31,0);
    IData/*31:0*/ __PVT__data_r;
    IData/*31:0*/ __PVT__rd_result_e1_q;
    IData/*31:0*/ __PVT__csr_wdata_e1_q;
    IData/*31:0*/ __PVT__branch_target_q;

    // INTERNAL VARIABLES
    Vriscv_muldiv_csr_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vriscv_muldiv_csr_tb_riscv_csr__SB0(Vriscv_muldiv_csr_tb__Syms* symsp, const char* v__name);
    ~Vriscv_muldiv_csr_tb_riscv_csr__SB0();
    VL_UNCOPYABLE(Vriscv_muldiv_csr_tb_riscv_csr__SB0);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
