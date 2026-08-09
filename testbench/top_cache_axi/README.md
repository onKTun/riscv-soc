# Cached AXI top testbench

This self-checking testbench instantiates `top_cache_axi/src_v/riscv_top.v`,
including the RISC-V core, two-way instruction cache, data cache, and their AXI
adapters. Two behavioral AXI memories respond to cache-line bursts.

The embedded RV32I program checks arithmetic and branches, performs a cached
store/load at `0x100`, and reports its result through an uncached AXI write at
`0x80000104`. The test also verifies that instruction reads, data reads, and
data writes were visible on AXI.

From the repository root in PowerShell:

```powershell
$rtl = (Get-ChildItem .\core\riscv\*.v).FullName + `
       (Get-ChildItem .\top_cache_axi\src_v\*.v).FullName

iverilog -g2012 -I.\core\riscv -I.\top_cache_axi\src_v `
  -s top_cache_axi_tb -o .\testbench\top_cache_axi\top_cache_axi_tb.out `
  $rtl .\testbench\top_cache_axi\axi_memory_model.v `
  .\testbench\top_cache_axi\top_cache_axi_tb.v

vvp .\testbench\top_cache_axi\top_cache_axi_tb.out
```

A passing run prints `PASS` and writes `top_cache_axi_tb.vcd`.

For the simplest combined invocation, run this once from the repository root:

```powershell
.\testbench\run_testbench.ps1
```
