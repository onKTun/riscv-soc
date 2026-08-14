// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VRISCV_TOP_TB__SYMS_H_
#define VERILATED_VRISCV_TOP_TB__SYMS_H_  // guard

#include "verilated.h"
#include "verilated_vcd_c.h"

// INCLUDE MODEL CLASS

#include "Vriscv_top_tb.h"

// INCLUDE MODULE CLASSES
#include "Vriscv_top_tb___024root.h"
#include "Vriscv_top_tb_riscv_top_tb.h"
#include "Vriscv_top_tb___024unit.h"
#include "Vriscv_top_tb_axi_memory_model.h"
#include "Vriscv_top_tb_riscv_top__M0_MBffff.h"
#include "Vriscv_top_tb_axi_memory_model__R80000104.h"
#include "Vriscv_top_tb_dcache.h"
#include "Vriscv_top_tb_icache.h"
#include "Vriscv_top_tb_riscv_core__M0_MBffff.h"
#include "Vriscv_top_tb_riscv_issue.h"
#include "Vriscv_top_tb_dcache_core.h"
#include "Vriscv_top_tb_icache_data_ram.h"
#include "Vriscv_top_tb_icache_tag_ram.h"
#include "Vriscv_top_tb_riscv_csr__SB0.h"
#include "Vriscv_top_tb_riscv_csr_regfile.h"
#include "Vriscv_top_tb_riscv_regfile.h"
#include "Vriscv_top_tb_dcache_core_data_ram.h"
#include "Vriscv_top_tb_dcache_core_tag_ram.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vriscv_top_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vriscv_top_tb* const __Vm_modelp;
    bool __Vm_dumping = false;  // Dumping is active
    VerilatedMutex __Vm_dumperMutex;  // Protect __Vm_dumperp
    VerilatedVcdC* __Vm_dumperp VL_GUARDED_BY(__Vm_dumperMutex) = nullptr;  /// Trace class for $dump*
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vriscv_top_tb___024root        TOP;
    Vriscv_top_tb_riscv_top_tb     TOP__riscv_top_tb;
    Vriscv_top_tb_axi_memory_model__R80000104 TOP__riscv_top_tb__d_memory;
    Vriscv_top_tb_riscv_top__M0_MBffff TOP__riscv_top_tb__dut;
    Vriscv_top_tb_riscv_core__M0_MBffff TOP__riscv_top_tb__dut__u_core;
    Vriscv_top_tb_riscv_csr__SB0   TOP__riscv_top_tb__dut__u_core__u_csr;
    Vriscv_top_tb_riscv_csr_regfile TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile;
    Vriscv_top_tb_riscv_issue      TOP__riscv_top_tb__dut__u_core__u_issue;
    Vriscv_top_tb_riscv_regfile    TOP__riscv_top_tb__dut__u_core__u_issue__u_regfile;
    Vriscv_top_tb_dcache           TOP__riscv_top_tb__dut__u_dcache;
    Vriscv_top_tb_dcache_core      TOP__riscv_top_tb__dut__u_dcache__u_core;
    Vriscv_top_tb_dcache_core_data_ram TOP__riscv_top_tb__dut__u_dcache__u_core__u_data0;
    Vriscv_top_tb_dcache_core_data_ram TOP__riscv_top_tb__dut__u_dcache__u_core__u_data1;
    Vriscv_top_tb_dcache_core_tag_ram TOP__riscv_top_tb__dut__u_dcache__u_core__u_tag0;
    Vriscv_top_tb_dcache_core_tag_ram TOP__riscv_top_tb__dut__u_dcache__u_core__u_tag1;
    Vriscv_top_tb_icache           TOP__riscv_top_tb__dut__u_icache;
    Vriscv_top_tb_icache_data_ram  TOP__riscv_top_tb__dut__u_icache__u_data0;
    Vriscv_top_tb_icache_data_ram  TOP__riscv_top_tb__dut__u_icache__u_data1;
    Vriscv_top_tb_icache_tag_ram   TOP__riscv_top_tb__dut__u_icache__u_tag0;
    Vriscv_top_tb_icache_tag_ram   TOP__riscv_top_tb__dut__u_icache__u_tag1;
    Vriscv_top_tb_axi_memory_model TOP__riscv_top_tb__i_memory;

    // COVERAGE
    uint32_t __Vcoverage[39];

    // SCOPE NAMES
    VerilatedScope __Vscope_riscv_top_tb;
    VerilatedScope __Vscope_riscv_top_tb__d_memory;
    VerilatedScope __Vscope_riscv_top_tb__dut;
    VerilatedScope __Vscope_riscv_top_tb__dut__sva_checker;
    VerilatedScope __Vscope_riscv_top_tb__dut__sva_checker__CHK_001_reset_quiet_A;
    VerilatedScope __Vscope_riscv_top_tb__dut__sva_checker__CHK_003_icache_response_A;
    VerilatedScope __Vscope_riscv_top_tb__dut__sva_checker__CHK_004_dcache_read_A;
    VerilatedScope __Vscope_riscv_top_tb__dut__sva_checker__CHK_005_dcache_write_A;
    VerilatedScope __Vscope_riscv_top_tb__dut__sva_checker__CHK_006_dcache_response_A;
    VerilatedScope __Vscope_riscv_top_tb__dut__sva_checker__CHK_008_dcache_fsm_A;
    VerilatedScope __Vscope_riscv_top_tb__dut__sva_checker__CHK_009_reset_states_A;
    VerilatedScope __Vscope_riscv_top_tb__dut__sva_checker__CHK_012_core_data_request_A;
    VerilatedScope __Vscope_riscv_top_tb__dut__sva_checker__CHK_013_icache_refill_exit_A;
    VerilatedScope __Vscope_riscv_top_tb__dut__sva_checker__CHK_014_icache_relookup_A;
    VerilatedScope __Vscope_riscv_top_tb__dut__sva_checker__CHK_015_dcache_refill_exit_A;
    VerilatedScope __Vscope_riscv_top_tb__dut__sva_checker__CHK_017_clock_period_A;
    VerilatedScope __Vscope_riscv_top_tb__dut__sva_checker__CHK_018_clock_high_time_A;
    VerilatedScope __Vscope_riscv_top_tb__dut__sva_checker__CHK_018_clock_low_time_A;
    VerilatedScope __Vscope_riscv_top_tb__dut__sva_checker__CHK_019_reset_duration_A;
    VerilatedScope __Vscope_riscv_top_tb__dut__sva_checker__CHK_020_reset_release_A;
    VerilatedScope __Vscope_riscv_top_tb__dut__sva_checker__CHK_021_post_reset_quiet_A;
    VerilatedScope __Vscope_riscv_top_tb__dut__sva_checker__CHK_022_pipeline_reset_A;
    VerilatedScope __Vscope_riscv_top_tb__dut__sva_checker__CHK_023_load_store_exclusion_A;
    VerilatedScope __Vscope_riscv_top_tb__dut__sva_checker__CHK_024_operation_class_A;
    VerilatedScope __Vscope_riscv_top_tb__dut__sva_checker__CHK_025_invalid_stage_clear_A;
    VerilatedScope __Vscope_riscv_top_tb__dut__sva_checker__CHK_026_pipeline_stall_A;
    VerilatedScope __Vscope_riscv_top_tb__dut__sva_checker__CHK_028_zero_register_A;
    VerilatedScope __Vscope_riscv_top_tb__dut__sva_checker__CHK_029_pipeline_pc_A;
    VerilatedScope __Vscope_riscv_top_tb__dut__sva_checker__CHK_030_branch_control_A;
    VerilatedScope __Vscope_riscv_top_tb__dut__sva_checker__CHK_031_pipeline_progress_A;
    VerilatedScope __Vscope_riscv_top_tb__dut__sva_checker__CHK_032_pipeline_complete_A;
    VerilatedScope __Vscope_riscv_top_tb__dut__sva_checker__CHK_033_e1_e2_metadata_A;
    VerilatedScope __Vscope_riscv_top_tb__dut__sva_checker__CHK_034_e2_wb_metadata_A;
    VerilatedScope __Vscope_riscv_top_tb__dut__sva_checker__CHK_035_add_result_ADDI_A;
    VerilatedScope __Vscope_riscv_top_tb__dut__sva_checker__CHK_035_add_result_ADD_A;
    VerilatedScope __Vscope_riscv_top_tb__dut__sva_checker__CHK_036_lui_result_A;
    VerilatedScope __Vscope_riscv_top_tb__dut__sva_checker__CHK_037_commit_destination_A;
    VerilatedScope __Vscope_riscv_top_tb__dut__sva_checker__CHK_038_load_store_destination_LOAD_A;
    VerilatedScope __Vscope_riscv_top_tb__dut__sva_checker__CHK_038_load_store_destination_STORE_A;
    VerilatedScope __Vscope_riscv_top_tb__dut__sva_checker__CHK_039_branch_class_A;
    VerilatedScope __Vscope_riscv_top_tb__dut__sva_checker__CHK_040_stall_cause_A;
    VerilatedScope __Vscope_riscv_top_tb__dut__u_dcache__u_core__u_data0;
    VerilatedScope __Vscope_riscv_top_tb__dut__u_dcache__u_core__u_data1;
    VerilatedScope __Vscope_riscv_top_tb__dut__u_dcache__u_core__u_tag0;
    VerilatedScope __Vscope_riscv_top_tb__dut__u_dcache__u_core__u_tag1;
    VerilatedScope __Vscope_riscv_top_tb__dut__u_icache__u_data0;
    VerilatedScope __Vscope_riscv_top_tb__dut__u_icache__u_data1;
    VerilatedScope __Vscope_riscv_top_tb__dut__u_icache__u_tag0;
    VerilatedScope __Vscope_riscv_top_tb__dut__u_icache__u_tag1;
    VerilatedScope __Vscope_riscv_top_tb__i_memory;

    // CONSTRUCTORS
    Vriscv_top_tb__Syms(VerilatedContext* contextp, const char* namep, Vriscv_top_tb* modelp);
    ~Vriscv_top_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
    void _traceDump();
    void _traceDumpOpen();
    void _traceDumpClose();
};

#endif  // guard
