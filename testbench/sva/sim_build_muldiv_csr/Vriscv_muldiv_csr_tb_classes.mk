# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vriscv_muldiv_csr_tb.mk for the caller.

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
	Vriscv_muldiv_csr_tb \
	Vriscv_muldiv_csr_tb___024root__DepSet_hc8e6ec1a__0 \
	Vriscv_muldiv_csr_tb___024root__DepSet_h3ac677a7__0 \
	Vriscv_muldiv_csr_tb_riscv_muldiv_csr_tb__DepSet_h305c7275__0 \
	Vriscv_muldiv_csr_tb_axi_memory_model__DepSet_h99558eda__0 \
	Vriscv_muldiv_csr_tb_axi_memory_model__DepSet_heb13d667__0 \
	Vriscv_muldiv_csr_tb_riscv_top__M0_MBffff__DepSet_hb77baaf0__0 \
	Vriscv_muldiv_csr_tb_axi_memory_model__R80000104__DepSet_hc5e2fd05__0 \
	Vriscv_muldiv_csr_tb_axi_memory_model__R80000104__DepSet_h3fc266a4__0 \
	Vriscv_muldiv_csr_tb_dcache__DepSet_hd984c1f1__0 \
	Vriscv_muldiv_csr_tb_icache__DepSet_h904e643d__0 \
	Vriscv_muldiv_csr_tb_riscv_core__M0_MBffff__DepSet_hc18c486d__0 \
	Vriscv_muldiv_csr_tb_riscv_issue__DepSet_h62bf6c8f__0 \
	Vriscv_muldiv_csr_tb_riscv_issue__DepSet_he0fcf81a__0 \
	Vriscv_muldiv_csr_tb_dcache_core__DepSet_heb82612d__0 \
	Vriscv_muldiv_csr_tb_dcache_core__DepSet_h59e1ea7c__0 \
	Vriscv_muldiv_csr_tb_icache_data_ram__DepSet_h2b4b6f3e__0 \
	Vriscv_muldiv_csr_tb_icache_tag_ram__DepSet_h173045fc__0 \
	Vriscv_muldiv_csr_tb_riscv_csr__SB0__DepSet_h4a9ac5a5__0 \
	Vriscv_muldiv_csr_tb_riscv_csr_regfile__DepSet_h863654c4__0 \
	Vriscv_muldiv_csr_tb_riscv_csr_regfile__DepSet_hfc760065__0 \
	Vriscv_muldiv_csr_tb_riscv_regfile__DepSet_hda314e6f__0 \
	Vriscv_muldiv_csr_tb_riscv_regfile__DepSet_h286f15ba__0 \
	Vriscv_muldiv_csr_tb_dcache_core_data_ram__DepSet_h340f278a__0 \
	Vriscv_muldiv_csr_tb_dcache_core_tag_ram__DepSet_heb0b3c1d__0 \
	Vriscv_muldiv_csr_tb__main \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vriscv_muldiv_csr_tb__ConstPool_0 \
	Vriscv_muldiv_csr_tb___024root__Slow \
	Vriscv_muldiv_csr_tb___024root__DepSet_hc8e6ec1a__0__Slow \
	Vriscv_muldiv_csr_tb___024root__DepSet_h3ac677a7__0__Slow \
	Vriscv_muldiv_csr_tb_riscv_muldiv_csr_tb__Slow \
	Vriscv_muldiv_csr_tb_riscv_muldiv_csr_tb__DepSet_h921bd9d4__0__Slow \
	Vriscv_muldiv_csr_tb_axi_memory_model__Slow \
	Vriscv_muldiv_csr_tb_axi_memory_model__DepSet_heb13d667__0__Slow \
	Vriscv_muldiv_csr_tb___024unit__Slow \
	Vriscv_muldiv_csr_tb___024unit__DepSet_h76cd9541__0__Slow \
	Vriscv_muldiv_csr_tb_riscv_top__M0_MBffff__Slow \
	Vriscv_muldiv_csr_tb_riscv_top__M0_MBffff__DepSet_hb77baaf0__0__Slow \
	Vriscv_muldiv_csr_tb_riscv_top__M0_MBffff__DepSet_h0d39b251__0__Slow \
	Vriscv_muldiv_csr_tb_axi_memory_model__R80000104__Slow \
	Vriscv_muldiv_csr_tb_axi_memory_model__R80000104__DepSet_hc5e2fd05__0__Slow \
	Vriscv_muldiv_csr_tb_axi_memory_model__R80000104__DepSet_h3fc266a4__0__Slow \
	Vriscv_muldiv_csr_tb_dcache__Slow \
	Vriscv_muldiv_csr_tb_dcache__DepSet_hd984c1f1__0__Slow \
	Vriscv_muldiv_csr_tb_dcache__DepSet_h2be48b50__0__Slow \
	Vriscv_muldiv_csr_tb_icache__Slow \
	Vriscv_muldiv_csr_tb_icache__DepSet_h904e643d__0__Slow \
	Vriscv_muldiv_csr_tb_icache__DepSet_hf22def8c__0__Slow \
	Vriscv_muldiv_csr_tb_riscv_core__M0_MBffff__Slow \
	Vriscv_muldiv_csr_tb_riscv_core__M0_MBffff__DepSet_hc18c486d__0__Slow \
	Vriscv_muldiv_csr_tb_riscv_core__M0_MBffff__DepSet_h43ec13bc__0__Slow \
	Vriscv_muldiv_csr_tb_riscv_issue__Slow \
	Vriscv_muldiv_csr_tb_riscv_issue__DepSet_h62bf6c8f__0__Slow \
	Vriscv_muldiv_csr_tb_riscv_issue__DepSet_he0fcf81a__0__Slow \
	Vriscv_muldiv_csr_tb_dcache_core__Slow \
	Vriscv_muldiv_csr_tb_dcache_core__DepSet_heb82612d__0__Slow \
	Vriscv_muldiv_csr_tb_dcache_core__DepSet_h59e1ea7c__0__Slow \
	Vriscv_muldiv_csr_tb_icache_data_ram__Slow \
	Vriscv_muldiv_csr_tb_icache_data_ram__DepSet_h9928f48b__0__Slow \
	Vriscv_muldiv_csr_tb_icache_tag_ram__Slow \
	Vriscv_muldiv_csr_tb_icache_tag_ram__DepSet_h6d700f4d__0__Slow \
	Vriscv_muldiv_csr_tb_riscv_csr__SB0__Slow \
	Vriscv_muldiv_csr_tb_riscv_csr__SB0__DepSet_h4a9ac5a5__0__Slow \
	Vriscv_muldiv_csr_tb_riscv_csr__SB0__DepSet_hb8da8f04__0__Slow \
	Vriscv_muldiv_csr_tb_riscv_csr_regfile__Slow \
	Vriscv_muldiv_csr_tb_riscv_csr_regfile__DepSet_h863654c4__0__Slow \
	Vriscv_muldiv_csr_tb_riscv_csr_regfile__DepSet_hfc760065__0__Slow \
	Vriscv_muldiv_csr_tb_riscv_regfile__Slow \
	Vriscv_muldiv_csr_tb_riscv_regfile__DepSet_h286f15ba__0__Slow \
	Vriscv_muldiv_csr_tb_dcache_core_data_ram__Slow \
	Vriscv_muldiv_csr_tb_dcache_core_data_ram__DepSet_h8e6d2d17__0__Slow \
	Vriscv_muldiv_csr_tb_dcache_core_tag_ram__Slow \
	Vriscv_muldiv_csr_tb_dcache_core_tag_ram__DepSet_h596927ac__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vriscv_muldiv_csr_tb__Dpi \
	Vriscv_muldiv_csr_tb__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vriscv_muldiv_csr_tb__Syms \
	Vriscv_muldiv_csr_tb__Trace__0__Slow \
	Vriscv_muldiv_csr_tb__TraceDecls__0__Slow \

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
