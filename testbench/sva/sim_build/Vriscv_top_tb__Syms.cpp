// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vriscv_top_tb__pch.h"
#include "Vriscv_top_tb.h"
#include "Vriscv_top_tb___024root.h"
#include "Vriscv_top_tb_riscv_top_tb.h"
#include "Vriscv_top_tb___024unit.h"
#include "Vriscv_top_tb_riscv_top__M0_MBffff.h"
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

// FUNCTIONS
Vriscv_top_tb__Syms::~Vriscv_top_tb__Syms()
{
#ifdef VM_TRACE
    if (__Vm_dumping) _traceDumpClose();
#endif  // VM_TRACE
}

void Vriscv_top_tb__Syms::_traceDump() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumperp->dump(VL_TIME_Q());
}

void Vriscv_top_tb__Syms::_traceDumpOpen() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    if (VL_UNLIKELY(!__Vm_dumperp)) {
        __Vm_dumperp = new VerilatedVcdC();
        __Vm_modelp->trace(__Vm_dumperp, 0, 0);
        std::string dumpfile = _vm_contextp__->dumpfileCheck();
        __Vm_dumperp->open(dumpfile.c_str());
        __Vm_dumping = true;
    }
}

void Vriscv_top_tb__Syms::_traceDumpClose() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumping = false;
    VL_DO_CLEAR(delete __Vm_dumperp, __Vm_dumperp = nullptr);
}

Vriscv_top_tb__Syms::Vriscv_top_tb__Syms(VerilatedContext* contextp, const char* namep, Vriscv_top_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__riscv_top_tb{this, Verilated::catName(namep, "riscv_top_tb")}
    , TOP__riscv_top_tb__dut{this, Verilated::catName(namep, "riscv_top_tb.dut")}
    , TOP__riscv_top_tb__dut__u_core{this, Verilated::catName(namep, "riscv_top_tb.dut.u_core")}
    , TOP__riscv_top_tb__dut__u_core__u_csr{this, Verilated::catName(namep, "riscv_top_tb.dut.u_core.u_csr")}
    , TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile{this, Verilated::catName(namep, "riscv_top_tb.dut.u_core.u_csr.u_csrfile")}
    , TOP__riscv_top_tb__dut__u_core__u_issue{this, Verilated::catName(namep, "riscv_top_tb.dut.u_core.u_issue")}
    , TOP__riscv_top_tb__dut__u_core__u_issue__u_regfile{this, Verilated::catName(namep, "riscv_top_tb.dut.u_core.u_issue.u_regfile")}
    , TOP__riscv_top_tb__dut__u_dcache{this, Verilated::catName(namep, "riscv_top_tb.dut.u_dcache")}
    , TOP__riscv_top_tb__dut__u_dcache__u_core{this, Verilated::catName(namep, "riscv_top_tb.dut.u_dcache.u_core")}
    , TOP__riscv_top_tb__dut__u_dcache__u_core__u_data0{this, Verilated::catName(namep, "riscv_top_tb.dut.u_dcache.u_core.u_data0")}
    , TOP__riscv_top_tb__dut__u_dcache__u_core__u_data1{this, Verilated::catName(namep, "riscv_top_tb.dut.u_dcache.u_core.u_data1")}
    , TOP__riscv_top_tb__dut__u_dcache__u_core__u_tag0{this, Verilated::catName(namep, "riscv_top_tb.dut.u_dcache.u_core.u_tag0")}
    , TOP__riscv_top_tb__dut__u_dcache__u_core__u_tag1{this, Verilated::catName(namep, "riscv_top_tb.dut.u_dcache.u_core.u_tag1")}
    , TOP__riscv_top_tb__dut__u_icache{this, Verilated::catName(namep, "riscv_top_tb.dut.u_icache")}
    , TOP__riscv_top_tb__dut__u_icache__u_data0{this, Verilated::catName(namep, "riscv_top_tb.dut.u_icache.u_data0")}
    , TOP__riscv_top_tb__dut__u_icache__u_data1{this, Verilated::catName(namep, "riscv_top_tb.dut.u_icache.u_data1")}
    , TOP__riscv_top_tb__dut__u_icache__u_tag0{this, Verilated::catName(namep, "riscv_top_tb.dut.u_icache.u_tag0")}
    , TOP__riscv_top_tb__dut__u_icache__u_tag1{this, Verilated::catName(namep, "riscv_top_tb.dut.u_icache.u_tag1")}
{
        // Check resources
        Verilated::stackCheck(1942);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.riscv_top_tb = &TOP__riscv_top_tb;
    TOP__riscv_top_tb.dut = &TOP__riscv_top_tb__dut;
    TOP__riscv_top_tb__dut.u_core = &TOP__riscv_top_tb__dut__u_core;
    TOP__riscv_top_tb__dut__u_core.u_csr = &TOP__riscv_top_tb__dut__u_core__u_csr;
    TOP__riscv_top_tb__dut__u_core__u_csr.u_csrfile = &TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile;
    TOP__riscv_top_tb__dut__u_core.u_issue = &TOP__riscv_top_tb__dut__u_core__u_issue;
    TOP__riscv_top_tb__dut__u_core__u_issue.u_regfile = &TOP__riscv_top_tb__dut__u_core__u_issue__u_regfile;
    TOP__riscv_top_tb__dut.u_dcache = &TOP__riscv_top_tb__dut__u_dcache;
    TOP__riscv_top_tb__dut__u_dcache.u_core = &TOP__riscv_top_tb__dut__u_dcache__u_core;
    TOP__riscv_top_tb__dut__u_dcache__u_core.u_data0 = &TOP__riscv_top_tb__dut__u_dcache__u_core__u_data0;
    TOP__riscv_top_tb__dut__u_dcache__u_core.u_data1 = &TOP__riscv_top_tb__dut__u_dcache__u_core__u_data1;
    TOP__riscv_top_tb__dut__u_dcache__u_core.u_tag0 = &TOP__riscv_top_tb__dut__u_dcache__u_core__u_tag0;
    TOP__riscv_top_tb__dut__u_dcache__u_core.u_tag1 = &TOP__riscv_top_tb__dut__u_dcache__u_core__u_tag1;
    TOP__riscv_top_tb__dut.u_icache = &TOP__riscv_top_tb__dut__u_icache;
    TOP__riscv_top_tb__dut__u_icache.u_data0 = &TOP__riscv_top_tb__dut__u_icache__u_data0;
    TOP__riscv_top_tb__dut__u_icache.u_data1 = &TOP__riscv_top_tb__dut__u_icache__u_data1;
    TOP__riscv_top_tb__dut__u_icache.u_tag0 = &TOP__riscv_top_tb__dut__u_icache__u_tag0;
    TOP__riscv_top_tb__dut__u_icache.u_tag1 = &TOP__riscv_top_tb__dut__u_icache__u_tag1;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__riscv_top_tb.__Vconfigure(true);
    TOP__riscv_top_tb__dut.__Vconfigure(true);
    TOP__riscv_top_tb__dut__u_core.__Vconfigure(true);
    TOP__riscv_top_tb__dut__u_core__u_csr.__Vconfigure(true);
    TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile.__Vconfigure(true);
    TOP__riscv_top_tb__dut__u_core__u_issue.__Vconfigure(true);
    TOP__riscv_top_tb__dut__u_core__u_issue__u_regfile.__Vconfigure(true);
    TOP__riscv_top_tb__dut__u_dcache.__Vconfigure(true);
    TOP__riscv_top_tb__dut__u_dcache__u_core.__Vconfigure(true);
    TOP__riscv_top_tb__dut__u_dcache__u_core__u_data0.__Vconfigure(true);
    TOP__riscv_top_tb__dut__u_dcache__u_core__u_data1.__Vconfigure(false);
    TOP__riscv_top_tb__dut__u_dcache__u_core__u_tag0.__Vconfigure(true);
    TOP__riscv_top_tb__dut__u_dcache__u_core__u_tag1.__Vconfigure(false);
    TOP__riscv_top_tb__dut__u_icache.__Vconfigure(true);
    TOP__riscv_top_tb__dut__u_icache__u_data0.__Vconfigure(true);
    TOP__riscv_top_tb__dut__u_icache__u_data1.__Vconfigure(false);
    TOP__riscv_top_tb__dut__u_icache__u_tag0.__Vconfigure(true);
    TOP__riscv_top_tb__dut__u_icache__u_tag1.__Vconfigure(false);
    // Setup scopes
    __Vscope_riscv_top_tb.configure(this, name(), "riscv_top_tb", "riscv_top_tb", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_riscv_top_tb__dut__sva_checker.configure(this, name(), "riscv_top_tb.dut.sva_checker", "sva_checker", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_riscv_top_tb__dut__sva_checker__CHK_001_reset_quiet_A.configure(this, name(), "riscv_top_tb.dut.sva_checker.CHK_001_reset_quiet_A", "CHK_001_reset_quiet_A", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_riscv_top_tb__dut__sva_checker__CHK_003_icache_response_A.configure(this, name(), "riscv_top_tb.dut.sva_checker.CHK_003_icache_response_A", "CHK_003_icache_response_A", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_riscv_top_tb__dut__sva_checker__CHK_004_dcache_read_A.configure(this, name(), "riscv_top_tb.dut.sva_checker.CHK_004_dcache_read_A", "CHK_004_dcache_read_A", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_riscv_top_tb__dut__sva_checker__CHK_005_dcache_write_A.configure(this, name(), "riscv_top_tb.dut.sva_checker.CHK_005_dcache_write_A", "CHK_005_dcache_write_A", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_riscv_top_tb__dut__sva_checker__CHK_006_dcache_response_A.configure(this, name(), "riscv_top_tb.dut.sva_checker.CHK_006_dcache_response_A", "CHK_006_dcache_response_A", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_riscv_top_tb__dut__sva_checker__CHK_008_dcache_fsm_A.configure(this, name(), "riscv_top_tb.dut.sva_checker.CHK_008_dcache_fsm_A", "CHK_008_dcache_fsm_A", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_riscv_top_tb__dut__sva_checker__CHK_009_reset_states_A.configure(this, name(), "riscv_top_tb.dut.sva_checker.CHK_009_reset_states_A", "CHK_009_reset_states_A", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_riscv_top_tb__dut__sva_checker__CHK_012_core_data_request_A.configure(this, name(), "riscv_top_tb.dut.sva_checker.CHK_012_core_data_request_A", "CHK_012_core_data_request_A", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_riscv_top_tb__dut__sva_checker__CHK_013_icache_refill_exit_A.configure(this, name(), "riscv_top_tb.dut.sva_checker.CHK_013_icache_refill_exit_A", "CHK_013_icache_refill_exit_A", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_riscv_top_tb__dut__sva_checker__CHK_014_icache_relookup_A.configure(this, name(), "riscv_top_tb.dut.sva_checker.CHK_014_icache_relookup_A", "CHK_014_icache_relookup_A", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_riscv_top_tb__dut__sva_checker__CHK_015_dcache_refill_exit_A.configure(this, name(), "riscv_top_tb.dut.sva_checker.CHK_015_dcache_refill_exit_A", "CHK_015_dcache_refill_exit_A", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_riscv_top_tb__dut__u_dcache__u_core__u_data0.configure(this, name(), "riscv_top_tb.dut.u_dcache.u_core.u_data0", "u_data0", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_riscv_top_tb__dut__u_dcache__u_core__u_data1.configure(this, name(), "riscv_top_tb.dut.u_dcache.u_core.u_data1", "u_data1", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_riscv_top_tb__dut__u_dcache__u_core__u_tag0.configure(this, name(), "riscv_top_tb.dut.u_dcache.u_core.u_tag0", "u_tag0", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_riscv_top_tb__dut__u_dcache__u_core__u_tag1.configure(this, name(), "riscv_top_tb.dut.u_dcache.u_core.u_tag1", "u_tag1", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_riscv_top_tb__dut__u_icache__u_data0.configure(this, name(), "riscv_top_tb.dut.u_icache.u_data0", "u_data0", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_riscv_top_tb__dut__u_icache__u_data1.configure(this, name(), "riscv_top_tb.dut.u_icache.u_data1", "u_data1", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_riscv_top_tb__dut__u_icache__u_tag0.configure(this, name(), "riscv_top_tb.dut.u_icache.u_tag0", "u_tag0", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_riscv_top_tb__dut__u_icache__u_tag1.configure(this, name(), "riscv_top_tb.dut.u_icache.u_tag1", "u_tag1", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_riscv_top_tb__dut__u_dcache__u_core__u_data0.varInsert(__Vfinal,"ram", &(TOP__riscv_top_tb__dut__u_dcache__u_core__u_data0.ram), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,2047,0);
        __Vscope_riscv_top_tb__dut__u_dcache__u_core__u_data1.varInsert(__Vfinal,"ram", &(TOP__riscv_top_tb__dut__u_dcache__u_core__u_data1.ram), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,2047,0);
        __Vscope_riscv_top_tb__dut__u_dcache__u_core__u_tag0.varInsert(__Vfinal,"ram", &(TOP__riscv_top_tb__dut__u_dcache__u_core__u_tag0.ram), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,20,0 ,255,0);
        __Vscope_riscv_top_tb__dut__u_dcache__u_core__u_tag1.varInsert(__Vfinal,"ram", &(TOP__riscv_top_tb__dut__u_dcache__u_core__u_tag1.ram), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,20,0 ,255,0);
        __Vscope_riscv_top_tb__dut__u_icache__u_data0.varInsert(__Vfinal,"ram", &(TOP__riscv_top_tb__dut__u_icache__u_data0.ram), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,2047,0);
        __Vscope_riscv_top_tb__dut__u_icache__u_data1.varInsert(__Vfinal,"ram", &(TOP__riscv_top_tb__dut__u_icache__u_data1.ram), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,2047,0);
        __Vscope_riscv_top_tb__dut__u_icache__u_tag0.varInsert(__Vfinal,"ram", &(TOP__riscv_top_tb__dut__u_icache__u_tag0.ram), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,19,0 ,255,0);
        __Vscope_riscv_top_tb__dut__u_icache__u_tag1.varInsert(__Vfinal,"ram", &(TOP__riscv_top_tb__dut__u_icache__u_tag1.ram), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,19,0 ,255,0);
    }
}
