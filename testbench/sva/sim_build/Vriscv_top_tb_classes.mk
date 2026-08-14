# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vriscv_top_tb.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 1
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vriscv_top_tb \
	Vriscv_top_tb___024root__DepSet_hc6a25405__0 \
	Vriscv_top_tb___024root__DepSet_h644274f5__0 \
	Vriscv_top_tb_riscv_top_tb__DepSet_hc2a78add__0 \
	Vriscv_top_tb_axi_memory_model__DepSet_ha4dffbbf__0 \
	Vriscv_top_tb_axi_memory_model__DepSet_h825dcb4b__0 \
	Vriscv_top_tb_riscv_top__M0_MBffff__DepSet_ha9396de2__0 \
	Vriscv_top_tb_axi_memory_model__R80000104__DepSet_hcb38b435__0 \
	Vriscv_top_tb_axi_memory_model__R80000104__DepSet_h71bc94c5__0 \
	Vriscv_top_tb_dcache__DepSet_h02637e20__0 \
	Vriscv_top_tb_icache__DepSet_h9c878b00__0 \
	Vriscv_top_tb_riscv_core__M0_MBffff__DepSet_h6f9e5d1c__0 \
	Vriscv_top_tb_riscv_issue__DepSet_hdc4205b7__0 \
	Vriscv_top_tb_riscv_issue__DepSet_h7ae22543__0 \
	Vriscv_top_tb_dcache_core__DepSet_h55cf3194__0 \
	Vriscv_top_tb_dcache_core__DepSet_hf36d1166__0 \
	Vriscv_top_tb_icache_data_ram__DepSet_h3ef51898__0 \
	Vriscv_top_tb_icache_tag_ram__DepSet_he4ae9a85__0 \
	Vriscv_top_tb_riscv_csr__SB0__DepSet_h5f829d6b__0 \
	Vriscv_top_tb_riscv_csr_regfile__DepSet_h6a9041f8__0 \
	Vriscv_top_tb_riscv_csr_regfile__DepSet_hd0146112__0 \
	Vriscv_top_tb_riscv_regfile__DepSet_hddfd26f4__0 \
	Vriscv_top_tb_riscv_regfile__DepSet_h7b7f0606__0 \
	Vriscv_top_tb_dcache_core_data_ram__DepSet_hfd1c62ae__0 \
	Vriscv_top_tb_dcache_core_tag_ram__DepSet_h143160b3__0 \
	Vriscv_top_tb__main \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vriscv_top_tb__ConstPool_0 \
	Vriscv_top_tb___024root__Slow \
	Vriscv_top_tb___024root__DepSet_hc6a25405__0__Slow \
	Vriscv_top_tb___024root__DepSet_h644274f5__0__Slow \
	Vriscv_top_tb_riscv_top_tb__Slow \
	Vriscv_top_tb_riscv_top_tb__DepSet_h68459a2d__0__Slow \
	Vriscv_top_tb___024unit__Slow \
	Vriscv_top_tb___024unit__DepSet_ha6d180f4__0__Slow \
	Vriscv_top_tb_axi_memory_model__Slow \
	Vriscv_top_tb_axi_memory_model__DepSet_h825dcb4b__0__Slow \
	Vriscv_top_tb_riscv_top__M0_MBffff__Slow \
	Vriscv_top_tb_riscv_top__M0_MBffff__DepSet_ha9396de2__0__Slow \
	Vriscv_top_tb_riscv_top__M0_MBffff__DepSet_h8fbb3d18__0__Slow \
	Vriscv_top_tb_axi_memory_model__R80000104__Slow \
	Vriscv_top_tb_axi_memory_model__R80000104__DepSet_hcb38b435__0__Slow \
	Vriscv_top_tb_axi_memory_model__R80000104__DepSet_h71bc94c5__0__Slow \
	Vriscv_top_tb_dcache__Slow \
	Vriscv_top_tb_dcache__DepSet_h02637e20__0__Slow \
	Vriscv_top_tb_dcache__DepSet_h29014eda__0__Slow \
	Vriscv_top_tb_icache__Slow \
	Vriscv_top_tb_icache__DepSet_h9c878b00__0__Slow \
	Vriscv_top_tb_icache__DepSet_hba259bfa__0__Slow \
	Vriscv_top_tb_riscv_core__M0_MBffff__Slow \
	Vriscv_top_tb_riscv_core__M0_MBffff__DepSet_h6f9e5d1c__0__Slow \
	Vriscv_top_tb_riscv_core__M0_MBffff__DepSet_hcd1e6dee__0__Slow \
	Vriscv_top_tb_riscv_issue__Slow \
	Vriscv_top_tb_riscv_issue__DepSet_hdc4205b7__0__Slow \
	Vriscv_top_tb_riscv_issue__DepSet_h7ae22543__0__Slow \
	Vriscv_top_tb_dcache_core__Slow \
	Vriscv_top_tb_dcache_core__DepSet_h55cf3194__0__Slow \
	Vriscv_top_tb_dcache_core__DepSet_hf36d1166__0__Slow \
	Vriscv_top_tb_icache_data_ram__Slow \
	Vriscv_top_tb_icache_data_ram__DepSet_h1c772872__0__Slow \
	Vriscv_top_tb_icache_tag_ram__Slow \
	Vriscv_top_tb_icache_tag_ram__DepSet_h424eaa75__0__Slow \
	Vriscv_top_tb_riscv_csr__SB0__Slow \
	Vriscv_top_tb_riscv_csr__SB0__DepSet_h5f829d6b__0__Slow \
	Vriscv_top_tb_riscv_csr__SB0__DepSet_hfd22ad9f__0__Slow \
	Vriscv_top_tb_riscv_csr_regfile__Slow \
	Vriscv_top_tb_riscv_csr_regfile__DepSet_h6a9041f8__0__Slow \
	Vriscv_top_tb_riscv_csr_regfile__DepSet_hd0146112__0__Slow \
	Vriscv_top_tb_riscv_regfile__Slow \
	Vriscv_top_tb_riscv_regfile__DepSet_h7b7f0606__0__Slow \
	Vriscv_top_tb_dcache_core_data_ram__Slow \
	Vriscv_top_tb_dcache_core_data_ram__DepSet_h5ba0425c__0__Slow \
	Vriscv_top_tb_dcache_core_tag_ram__Slow \
	Vriscv_top_tb_dcache_core_tag_ram__DepSet_h32b34047__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vriscv_top_tb__Dpi \
	Vriscv_top_tb__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vriscv_top_tb__Syms \
	Vriscv_top_tb__Trace__0__Slow \
	Vriscv_top_tb__TraceDecls__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_cov \
	verilated_vcd_c \
	verilated_timing \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
