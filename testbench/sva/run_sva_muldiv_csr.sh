#!/usr/bin/env bash
set -euo pipefail

# Runs the directed CHK_017-CHK_030 checks for riscv_multiplier,
# riscv_divider, riscv_csr, and riscv_csr_regfile. Companion to
# run_sva.sh, which covers CHK_001-CHK_016 (cache/AXI/FSM) via a
# separate program and top module -- the two suites are intentionally
# not combined into one binary, since each drives a different directed
# instruction stream against riscv_top and a combined program would
# make failures harder to attribute to a specific block.
#
# CHK_029 (illegal-CSR-access exception) and CHK_030 (mepc capture on
# that exception) are compiled in and remain live, but are excluded
# from this run's sign-off gate: riscv_csr.v's csr_fault_r is tied to
# 1'b0 whenever SUPPORT_SUPER=0, and riscv_top.v does not expose
# SUPPORT_SUPER as a pass-through parameter, so this path is
# unreachable from any riscv_top-instantiating testbench today. See
# knowledge_capture.md for the full derivation of this finding.

script_dir="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
repo="$(cd "$script_dir/../.." && pwd)"
build="$script_dir/sim_build_muldiv_csr"
cd "$repo"

rtl=(core/riscv/*.v top_cache_axi/src_v/*.v)
common=(--timing --assert -Wall -Wno-fatal -Icore/riscv -Itop_cache_axi/src_v -Itestbench --top-module riscv_muldiv_csr_tb)
srcs=(testbench/top_cache_axi/axi_memory_model.v testbench/sva/riscv_muldiv_csr_sva.sv testbench/sva/riscv_muldiv_csr_tb.sv)

verilator --lint-only "${common[@]}" "${rtl[@]}" "${srcs[@]}"
verilator --binary --trace --coverage-user "${common[@]}" --Mdir "$build" "${rtl[@]}" "${srcs[@]}"

# NOTE: the +verilator+coverage+file+ runtime plusarg is rejected by the
# Verilator version installed in this environment (5.020) with
# "Unknown runtime argument" -- this is a pre-existing issue, reproduced
# identically by the repo's own run_sva.sh in the same environment, not
# specific to this script. The coverage-collection step is therefore
# made non-fatal here so a real assertion/coverage-vacuity failure in
# the simulation itself is never masked by this unrelated plusarg issue.
if ! "$build/Vriscv_muldiv_csr_tb" "+verilator+coverage+file+$build/coverage.dat"; then
    echo "Coverage-plusarg run failed (see note above); re-running without coverage collection..."
    "$build/Vriscv_muldiv_csr_tb"
fi
if [ -f "$build/coverage.dat" ]; then
    verilator_coverage --annotate-min 1 --annotate "$build/coverage-report" "$build/coverage.dat"
    echo "Coverage report: $build/coverage-report"
fi

echo "MUL/DIV/CSR SVA run complete."
