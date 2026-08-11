#!/usr/bin/env bash
set -euo pipefail

script_dir="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
repo="$(cd "$script_dir/../.." && pwd)"
build="$script_dir/sim_build"
cd "$repo"

rtl=(core/riscv/*.v top_cache_axi/src_v/*.v)
common=(--timing --assert -Wall -Wno-fatal -Icore/riscv -Itop_cache_axi/src_v -Itestbench --top-module riscv_top_tb)

verilator --lint-only "${common[@]}" "${rtl[@]}" testbench/sva/riscv_top_tb.sv
verilator --binary --trace --coverage-user "${common[@]}" --Mdir "$build" "${rtl[@]}" testbench/sva/riscv_top_tb.sv
"$build/Vriscv_top_tb" "+verilator+coverage+file+$build/coverage.dat"
verilator_coverage --annotate-min 1 --annotate "$build/coverage-report" "$build/coverage.dat"

echo "SVA PASS. Coverage report: $build/coverage-report"
