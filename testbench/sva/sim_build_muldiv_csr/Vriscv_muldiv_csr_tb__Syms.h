// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VRISCV_MULDIV_CSR_TB__SYMS_H_
#define VERILATED_VRISCV_MULDIV_CSR_TB__SYMS_H_  // guard

#include "verilated.h"
#include "verilated_vcd_c.h"

// INCLUDE MODEL CLASS

#include "Vriscv_muldiv_csr_tb.h"

// INCLUDE MODULE CLASSES
#include "Vriscv_muldiv_csr_tb___024root.h"
#include "Vriscv_muldiv_csr_tb_riscv_muldiv_csr_tb.h"
#include "Vriscv_muldiv_csr_tb_axi_memory_model.h"
#include "Vriscv_muldiv_csr_tb___024unit.h"
#include "Vriscv_muldiv_csr_tb_riscv_top__M0_MBffff.h"
#include "Vriscv_muldiv_csr_tb_axi_memory_model__R80000104.h"
#include "Vriscv_muldiv_csr_tb_dcache.h"
#include "Vriscv_muldiv_csr_tb_icache.h"
#include "Vriscv_muldiv_csr_tb_riscv_core__M0_MBffff.h"
#include "Vriscv_muldiv_csr_tb_riscv_issue.h"
#include "Vriscv_muldiv_csr_tb_dcache_core.h"
#include "Vriscv_muldiv_csr_tb_icache_data_ram.h"
#include "Vriscv_muldiv_csr_tb_icache_tag_ram.h"
#include "Vriscv_muldiv_csr_tb_riscv_csr__SB0.h"
#include "Vriscv_muldiv_csr_tb_riscv_csr_regfile.h"
#include "Vriscv_muldiv_csr_tb_riscv_regfile.h"
#include "Vriscv_muldiv_csr_tb_dcache_core_data_ram.h"
#include "Vriscv_muldiv_csr_tb_dcache_core_tag_ram.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vriscv_muldiv_csr_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vriscv_muldiv_csr_tb* const __Vm_modelp;
    bool __Vm_dumping = false;  // Dumping is active
    VerilatedMutex __Vm_dumperMutex;  // Protect __Vm_dumperp
    VerilatedVcdC* __Vm_dumperp VL_GUARDED_BY(__Vm_dumperMutex) = nullptr;  /// Trace class for $dump*
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vriscv_muldiv_csr_tb___024root TOP;
    Vriscv_muldiv_csr_tb_riscv_muldiv_csr_tb TOP__riscv_muldiv_csr_tb;
    Vriscv_muldiv_csr_tb_axi_memory_model__R80000104 TOP__riscv_muldiv_csr_tb__d_memory;
    Vriscv_muldiv_csr_tb_riscv_top__M0_MBffff TOP__riscv_muldiv_csr_tb__dut;
    Vriscv_muldiv_csr_tb_riscv_core__M0_MBffff TOP__riscv_muldiv_csr_tb__dut__u_core;
    Vriscv_muldiv_csr_tb_riscv_csr__SB0 TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr;
    Vriscv_muldiv_csr_tb_riscv_csr_regfile TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile;
    Vriscv_muldiv_csr_tb_riscv_issue TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue;
    Vriscv_muldiv_csr_tb_riscv_regfile TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue__u_regfile;
    Vriscv_muldiv_csr_tb_dcache    TOP__riscv_muldiv_csr_tb__dut__u_dcache;
    Vriscv_muldiv_csr_tb_dcache_core TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core;
    Vriscv_muldiv_csr_tb_dcache_core_data_ram TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core__u_data0;
    Vriscv_muldiv_csr_tb_dcache_core_data_ram TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core__u_data1;
    Vriscv_muldiv_csr_tb_dcache_core_tag_ram TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core__u_tag0;
    Vriscv_muldiv_csr_tb_dcache_core_tag_ram TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core__u_tag1;
    Vriscv_muldiv_csr_tb_icache    TOP__riscv_muldiv_csr_tb__dut__u_icache;
    Vriscv_muldiv_csr_tb_icache_data_ram TOP__riscv_muldiv_csr_tb__dut__u_icache__u_data0;
    Vriscv_muldiv_csr_tb_icache_data_ram TOP__riscv_muldiv_csr_tb__dut__u_icache__u_data1;
    Vriscv_muldiv_csr_tb_icache_tag_ram TOP__riscv_muldiv_csr_tb__dut__u_icache__u_tag0;
    Vriscv_muldiv_csr_tb_icache_tag_ram TOP__riscv_muldiv_csr_tb__dut__u_icache__u_tag1;
    Vriscv_muldiv_csr_tb_axi_memory_model TOP__riscv_muldiv_csr_tb__i_memory;

    // COVERAGE
    uint32_t __Vcoverage[14];

    // SCOPE NAMES
    VerilatedScope __Vscope_riscv_muldiv_csr_tb;
    VerilatedScope __Vscope_riscv_muldiv_csr_tb__d_memory;
    VerilatedScope __Vscope_riscv_muldiv_csr_tb__dut;
    VerilatedScope __Vscope_riscv_muldiv_csr_tb__dut__muldiv_csr_sva_checker;
    VerilatedScope __Vscope_riscv_muldiv_csr_tb__dut__muldiv_csr_sva_checker__CHK_017_mul_result_valid_A;
    VerilatedScope __Vscope_riscv_muldiv_csr_tb__dut__muldiv_csr_sva_checker__CHK_018_mul_hold_stable_A;
    VerilatedScope __Vscope_riscv_muldiv_csr_tb__dut__muldiv_csr_sva_checker__CHK_022_mul_zero_id_A;
    VerilatedScope __Vscope_riscv_muldiv_csr_tb__dut__muldiv_csr_sva_checker__CHK_023_div_by_zero_A;
    VerilatedScope __Vscope_riscv_muldiv_csr_tb__dut__muldiv_csr_sva_checker__CHK_024_div_overflow_A;
    VerilatedScope __Vscope_riscv_muldiv_csr_tb__dut__muldiv_csr_sva_checker__CHK_025_div_result_correct_A;
    VerilatedScope __Vscope_riscv_muldiv_csr_tb__dut__muldiv_csr_sva_checker__CHK_026_div_busy_no_new_issue_A;
    VerilatedScope __Vscope_riscv_muldiv_csr_tb__dut__muldiv_csr_sva_checker__CHK_027_div_valid_pulse_A;
    VerilatedScope __Vscope_riscv_muldiv_csr_tb__dut__muldiv_csr_sva_checker__CHK_028_csr_write_readback_A;
    VerilatedScope __Vscope_riscv_muldiv_csr_tb__dut__muldiv_csr_sva_checker__CHK_029_illegal_csr_exception_A;
    VerilatedScope __Vscope_riscv_muldiv_csr_tb__dut__muldiv_csr_sva_checker__CHK_030_mepc_capture_A;
    VerilatedScope __Vscope_riscv_muldiv_csr_tb__dut__u_dcache__u_core__u_data0;
    VerilatedScope __Vscope_riscv_muldiv_csr_tb__dut__u_dcache__u_core__u_data1;
    VerilatedScope __Vscope_riscv_muldiv_csr_tb__dut__u_dcache__u_core__u_tag0;
    VerilatedScope __Vscope_riscv_muldiv_csr_tb__dut__u_dcache__u_core__u_tag1;
    VerilatedScope __Vscope_riscv_muldiv_csr_tb__dut__u_icache__u_data0;
    VerilatedScope __Vscope_riscv_muldiv_csr_tb__dut__u_icache__u_data1;
    VerilatedScope __Vscope_riscv_muldiv_csr_tb__dut__u_icache__u_tag0;
    VerilatedScope __Vscope_riscv_muldiv_csr_tb__dut__u_icache__u_tag1;
    VerilatedScope __Vscope_riscv_muldiv_csr_tb__i_memory;

    // CONSTRUCTORS
    Vriscv_muldiv_csr_tb__Syms(VerilatedContext* contextp, const char* namep, Vriscv_muldiv_csr_tb* modelp);
    ~Vriscv_muldiv_csr_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
    void _traceDump();
    void _traceDumpOpen();
    void _traceDumpClose();
};

#endif  // guard
