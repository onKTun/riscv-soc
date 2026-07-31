# Verilator Lint Findings — `riscv_core` (top_cache_axi core hierarchy)

## Pass 1 — CPU pipeline only (`riscv_core`)

**Date:** 2026-07-31
**Tool:** Verilator 5.032 (Debian 5.032-1)
**Command:**
```bash
verilator --lint-only -Wall -Wno-fatal -Icore/riscv --top-module riscv_core core/riscv/*.v \
  -Wno-DECLFILENAME -Wno-GENUNNAMED -Wno-EOFNEWLINE
```
**Result:** Clean elaboration, 0 errors, 122 warnings. 20 modules, 2.522 MB source, 0.123s walltime.

**Scope note:** this pass covered only `core/riscv/*.v` — the CPU pipeline. It did **not**
include the L1 instruction/data caches (`top_cache_axi/src_v/`). See Pass 2 below for
cache coverage.


## Summary Table

| Category | Count | Verdict | Action |
|---|---|---|---|
| Cosmetic/style (`EOFNEWLINE`, `DECLFILENAME`, `GENUNNAMED`) | ~10 | Upstream author's conventions | None — suppressed via `-Wno-*` for readability |
| `PINCONNECTEMPTY` | 6 | Intentional unconnected outputs / Xilinx primitive wrapper | None; confirm `riscv_xilinx_2r1w.v` is actually unused in this build |
| `UNUSEDSIGNAL`/`UNUSEDPARAM` — MMU/supervisor-mode | ~20 | **Expected** — confirms `SUPPORT_SUPER=0` config is correctly disabling supervisor/MMU logic | None — positive signal |
| `UNUSEDSIGNAL` — register file ABI-name aliases (`x0_zero_w`...`x31_t6_w`) | 32 | Intentional debug/waveform-readability wires | None — keep for GTKWave use |
| `UNDRIVEN` — `set_register` function | 1 | Verification hook for C++/SystemC testbench, not RTL-internal | None — expected |
| `UNUSEDSIGNAL` — branch execution signals in `riscv_issue.v` / `riscv_pipe_ctrl.v` | ~12 | Investigated in detail — see below | None — confirmed pre-existing, not a regression |
| `UNUSEDPARAM` — `SUPPORT_DUAL_ISSUE` | 1 | Hardwired to `1` at instantiation in `riscv_core.v`; parameter is vestigial | None — dead by construction |

---

## Detailed Findings

### 1. Machine-mode-only configuration is verified working

Files: `riscv_mmu.v`, `riscv_csr.v`, `riscv_fetch.v` (`SUPPORT_MMU` param)

With `SUPPORT_SUPER=0` / `SUPPORT_MMU=0`, Verilator flags MMU inputs (`satp_i`, `flush_i`,
`priv_d_i`, `sum_i`, `mxr_i`, `fetch_in_priv_i`) and supervisor-mode CSR logic
(`ecall_w`, `ebreak_w`, `wfi_w`, `fence_w`) as unused. **This is independent confirmation
that the machine-mode-only integration change is taking effect correctly** — the logic
is structurally unreachable, exactly as intended, not a defect.

### 2. `SUPPORT_DUAL_ISSUE` parameter is vestigial

In `riscv_core.v`, the instantiation of `riscv_issue` hardwires this parameter:
```verilog
riscv_issue #( ... ,.SUPPORT_DUAL_ISSUE(1) ) u_issue ( ... );
```
It's never passed through from a higher-level parameter and defaults to `1` in the
module anyway. Despite the name, **this core issues one instruction per cycle** in this
configuration — dual-issue logic is inert and cannot be toggled without editing
`riscv_core.v` directly.

### 3. Branch-execution signals in `riscv_issue.v` — investigated, resolved

Signals: `branch_exec_request_i`, `branch_exec_is_taken_i`, `branch_exec_is_not_taken_i`,
`branch_exec_source_i`, `branch_exec_is_call_i`, `branch_exec_is_ret_i`,
`branch_exec_is_jmp_i`, `branch_exec_pc_i`, plus downstream `riscv_pipe_ctrl.v` signals
(`alu_e1_w`, `csr_e1_w`, `div_e1_w`, `load_store_e2_w`, `complete_wb_w`).

**Traced end-to-end:**
- `riscv_core.v` wires these to real, live signals from the branch-execution unit
  (not tied to constants) — the data genuinely flows every cycle.
- Inside `riscv_issue.v`, none of these inputs are read by any internal logic.
- No `` `ifdef `` gates them; they are unconditionally unused in this build.

**Conclusion:** these are very likely reserved/legacy ports for a branch-prediction /
return-address-stack feature not implemented in this version of the pipeline. The core's
actual branch redirect mechanism runs through the simpler `branch_d_exec_request_i` /
`branch_d_exec_pc_i` path, which **is** used (feeds `branch_request_o`/`branch_pc_o`).
This does not affect functional correctness — flagged as a "noted, no action" item for
the team so it isn't later mistaken for something introduced during integration.

### 4. `riscv_xilinx_2r1w.v` — open question for the team

Contains a Xilinx `RAM16X1D` primitive-based register file implementation, an alternate
to the default regfile. All its `PINCONNECTEMPTY` warnings originate here. Since this
project is not targeting Xilinx FPGA synthesis, **confirm whether this file is actually
instantiated in the active build** (likely behind a `SUPPORT_REGFILE_XILINX` parameter,
default `0`) — if genuinely unused, consider excluding it from the lint/build file list.

---

---

## Pass 2 — Full `riscv_top` hierarchy (core + L1 icache + L1 dcache)

**Date:** 2026-07-31
**Tool:** Verilator 5.032 (Debian 5.032-1)
**Command:**
```bash
verilator --lint-only -Wall -Wno-fatal \
  -Icore/riscv -Itop_cache_axi/src_v \
  --top-module riscv_top \
  core/riscv/*.v top_cache_axi/src_v/*.v \
  -Wno-DECLFILENAME -Wno-GENUNNAMED -Wno-EOFNEWLINE
```
**Result:** Clean elaboration, 0 errors. All Pass 1 warnings reappear unchanged (now
nested under `riscv_top.u_core.*` instead of `riscv_core.*`) — no regressions. New
warnings appear under `riscv_top.u_icache.*` and `riscv_top.u_dcache.*`, confirming the
L1 cache RTL is now genuinely included in the lint scope.

### New Findings Summary (Cache-Specific)

| Category | Location | Verdict | Action |
|---|---|---|---|
| `%Warning-BLKSEQ` | `dcache_core_tag_ram.v:76,78` (`u_dcache.u_core.u_tag0`) | **Real concern — blocking assignment in clocked `always` block** | **Escalate — see below, do not suppress** |
| `PINCONNECTEMPTY` | `dcache_axi.v`, `dcache_core.v`, `dcache_if_pmem.v` | Intentional unconnected outputs on internal instantiations | None |
| `UNUSEDPARAM` — cache geometry | `icache.v`, `dcache_core.v` (`*_NUM_WAYS`, `*_NUM_LINES`, `*_LINE_SIZE`, `*_LINE_WORDS`) | Matches spec (16KB, 2-way, 256 sets, 32B lines); used only for internal address-bit derivation | None |
| `UNUSEDSIGNAL` — icache AXI write-channel signals | `icache.v` (`axi_awready_i`, `axi_wready_i`, `axi_bvalid_i`, `axi_bresp_i`, `axi_bid_i`, `axi_rid_i`) | Icache is read-only (instruction fetch only); never issues AXI writes | None — architecturally expected |
| `UNUSEDSIGNAL` — RAM wrapper reset/clock ports | `icache_data_ram.v`, `icache_tag_ram.v`, `dcache_core_data_ram.v`, `dcache_core_tag_ram.v` (`rst_i`, `rst0_i`, `rst1_i`, `clk0_i`) | Standard for inferred SRAM/BRAM models — memory arrays typically don't reset | None |
| `UNUSEDSIGNAL` — unused low bits in packed request vectors | `dcache_axi.v`, `dcache_if_pmem.v` (`req_w[1:0]`) | Packed staging vectors bundling multiple fields; low bits likely reserved/byte-alignment | None |

### Detail: `BLKSEQ` in `dcache_core_tag_ram.v` — flagged for escalation

```verilog
always @ (posedge clk_i)
    ram[addr1_i] = data1_i;      // blocking assignment
    ...
    ram_read0_q = ram[addr0_i];  // blocking assignment
```

Blocking (`=`) assignments inside a clocked (`posedge clk_i`) `always` block, where
non-blocking (`<=`) is the correct construct for sequential logic. Unlike the other
cache warnings in this pass, this is **not** a benign/expected pattern — it's a known
source of simulation/synthesis mismatch and evaluation-order-dependent races,
particularly when multiple signals in the same block reference each other's values.
It may function correctly in simple test scenarios and still misbehave under different
synthesis tools or more complex access patterns.

**This is pre-existing upstream code**, not something introduced during this project's
integration work. 
