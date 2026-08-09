$ErrorActionPreference = "Stop"

$repo = Split-Path -Parent $PSScriptRoot
$coreDir = Join-Path $repo "core\riscv"
$cacheDir = Join-Path $repo "top_cache_axi\src_v"
$testbenchDir = Join-Path $repo "testbench"
$output = Join-Path $testbenchDir "riscv_soc_tb.out"
$testbench = Join-Path $testbenchDir "riscv_soc_tb.v"

if (-not (Get-Command iverilog -ErrorAction SilentlyContinue)) {
    throw "iverilog was not found. Restart VS Code after installing Icarus Verilog so PATH is refreshed."
}

if (-not (Get-Command vvp -ErrorAction SilentlyContinue)) {
    throw "vvp was not found. Restart VS Code after installing Icarus Verilog so PATH is refreshed."
}

$rtl = @(
    (Get-ChildItem (Join-Path $coreDir "*.v")).FullName
    (Get-ChildItem (Join-Path $cacheDir "*.v")).FullName
)

Write-Host "Compiling combined core/cache/AXI testbench..."
& iverilog -g2012 "-I$coreDir" "-I$cacheDir" "-I$testbenchDir" `
    -s top_cache_axi_tb -o $output $rtl $testbench

if ($LASTEXITCODE -ne 0) {
    throw "Testbench compilation failed with exit code $LASTEXITCODE."
}

Write-Host "Running testbench..."
Push-Location $testbenchDir
try {
    & vvp $output
    if ($LASTEXITCODE -ne 0) {
        throw "Testbench failed with exit code $LASTEXITCODE."
    }
}
finally {
    Pop-Location
}
