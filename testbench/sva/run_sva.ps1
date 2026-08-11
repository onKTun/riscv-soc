$ErrorActionPreference = "Stop"
$repo = Split-Path -Parent (Split-Path -Parent $PSScriptRoot)
$out = Join-Path $PSScriptRoot "sim_build"
$rtl = @((Get-ChildItem "$repo\core\riscv\*.v").FullName) + @((Get-ChildItem "$repo\top_cache_axi\src_v\*.v").FullName)
$tb = Join-Path $PSScriptRoot "riscv_top_tb.sv"

if (-not (Get-Command verilator -ErrorAction SilentlyContinue)) { throw "Verilator is not on PATH." }

& verilator --lint-only --timing --assert -Wall -Wno-fatal `
  -I"$repo\core\riscv" -I"$repo\top_cache_axi\src_v" -I"$repo\testbench" `
  --top-module riscv_top_tb $rtl $tb
if ($LASTEXITCODE -ne 0) { throw "SVA lint failed." }

& verilator --binary --timing --assert --trace --coverage-user -Wall -Wno-fatal `
  -I"$repo\core\riscv" -I"$repo\top_cache_axi\src_v" -I"$repo\testbench" `
  --top-module riscv_top_tb --Mdir $out $rtl $tb
if ($LASTEXITCODE -ne 0) { throw "SVA build failed." }

& "$out\Vriscv_top_tb.exe" "+verilator+coverage+file+$out\coverage.dat"
if ($LASTEXITCODE -ne 0) { throw "SVA simulation failed." }

& verilator_coverage --annotate-min 1 --annotate "$out\coverage-report" "$out\coverage.dat"
if ($LASTEXITCODE -ne 0) { throw "Coverage report generation failed." }
Write-Host "SVA PASS. Coverage report: $out\coverage-report"
