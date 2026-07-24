# Processor Core Requirements

These are the processor-core integration requirements from the RISC-V SoC microarchitecture specification. Some requirements are implemented by the bare core, while others belong to the cache and SoC integration logic.

| Requirement | Existing support |
|---|---|
| RV32IM with Zicsr | Supported |
| Five-stage pipeline | Supported |
| 32 × 32-bit general-purpose registers, with `x0` hardwired to zero | Supported |
| Machine mode only | Configure `SUPPORT_SUPER=0` and `SUPPORT_MMU=0` |
| One active-high external interrupt input | Supported; connect the PLIC output to `intr_i` |
| Reset vector in the SPI Boot/XIP region | Set `reset_vector_i` to `0x0000_0000` |
| AXI4 Full instruction master | Provided by the instruction-cache wrapper |
| AXI4 Full data master | Provided by the data-cache wrapper |
| Native non-AXI XIP port | Not currently provided; new integration RTL is required |

## Integration boundaries

- The bare `riscv_core` uses custom instruction and data memory interfaces, not AXI.
- `top_cache_axi` adds the instruction and data caches and exposes two independent AXI4 Full master ports.
- The unified SoC interconnect connects those two AXI masters to SRAM and the memory-mapped peripherals.
- The required native XIP path to the SPI boot controller does not exist in the current repository and must be added around the instruction-fetch/cache path.

## Related cache requirements

The cached processor subsystem must also preserve these requirements from the specification:

- 16 KB, two-way set-associative instruction cache
- 16 KB, two-way set-associative data cache
- 256 sets and 32-byte cache lines
- Write-back data cache with allocation on reads and writes
- Eight-beat AXI4 INCR bursts for cache-line fills
- Eight-beat AXI4 bursts for dirty data-cache writebacks

This document covers the processor and cache subsystem. It does not cover all requirements for the unified interconnect, SRAM, UART, CAN, GPIO, PLIC, or QSPI controller.
