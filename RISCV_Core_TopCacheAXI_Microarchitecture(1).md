# RISC-V Core + `top_cache_axi` Microarchitecture Document

**Scope:** `core/riscv` (CPU pipeline) and `top_cache_axi/src_v` (L1 cache + AXI4
integration) only. `top_tcm_*` (AXI4-Lite/TCM variant) is explicitly out of scope for
this document.

**Source:** `ultraembedded/riscv`, BSD-licensed, `top_cache_axi` build configuration.

**Method:** This document was built by (1) starting from the prior handoff/lint doc,
then (2) independently reading the RTL in `core/riscv` and `top_cache_axi/src_v` file
by file to confirm structure, state machines, and signal flow — not by re-describing
the handoff doc's conclusions verbatim. Any place this document adds detail beyond the
handoff doc is called out explicitly.

---

## 1. Top-Level: `riscv_top.v`

`riscv_top` (`top_cache_axi/src_v/riscv_top.v`) is a **generated structural wrapper** —
its header comment literally says `Generated File`, meaning it's produced from a
module-connection tool in the upstream repo rather than hand-written. It performs no
logic of its own; it only wires three peers together:

```
riscv_top
├── u_core   : riscv_core        (CPU pipeline)
├── u_icache : icache            (L1 instruction cache, direct AXI master)
└── u_dcache : dcache            (L1 data cache, direct AXI master)
```

Confirmed ports:

| Port group | Direction | Notes |
|---|---|---|
| `clk_i`, `rst_i` | in | single clock/reset domain |
| `reset_vector_i[31:0]` | in | tied off at SoC integration |
| `intr_i` | in | single external interrupt, feeds core's `meip` |
| `axi_i_*` | AXI4 master | instruction cache's master port |
| `axi_d_*` | AXI4 master | data cache's master port |

Two independent AXI4 masters at this boundary, exactly as required — confirmed
directly from the port list and instantiation, not inferred.

**Instantiation-time parameters:** `CORE_ID`, `MEM_CACHE_ADDR_MIN`,
`MEM_CACHE_ADDR_MAX`. These two address parameters are passed straight through to
`u_core` (which forwards them to `riscv_lsu`) and are **not** used by `u_icache` —
confirmed from the instantiation: `icache` takes no cache-range parameters at all.
This means the instruction path in this build is **unconditionally cacheable**
everywhere; only the *data* path has a cacheable/uncacheable split. This is a
structural fact worth flagging for the XIP work in §6 — instruction fetches from the
SPI boot region will need a separate routing mechanism in front of `u_icache`, not a
parameter tweak.

### 1.1 Core ↔ Cache local bus

The core does **not** talk AXI directly. Between `u_core` and `u_icache`/`u_dcache`
there is a small, custom, non-AXI request/response bus:

- **I-side** (`u_core` → `u_icache`): `mem_i_rd_o`, `mem_i_pc_o`, `mem_i_flush_o`,
  `mem_i_invalidate_o` out; `mem_i_accept_i`, `mem_i_valid_i`, `mem_i_error_i`,
  `mem_i_inst_i` back.
- **D-side** (`u_core` ↔ `u_dcache`): `mem_d_addr_o`, `mem_d_data_wr_o`, `mem_d_rd_o`,
  `mem_d_wr_o` (4-bit byte-enable), `mem_d_cacheable_o`, `mem_d_req_tag_o` (11-bit,
  used for out-of-order response tagging — see §3), `mem_d_invalidate_o`,
  `mem_d_writeback_o`, `mem_d_flush_o` out; `mem_d_data_rd_i`, `mem_d_accept_i`,
  `mem_d_ack_i`, `mem_d_error_i`, `mem_d_resp_tag_i` back.

This is a simple valid/accept (ready/valid) handshake per request, not a burst
protocol — confirmed from the port widths and single-word (`[31:0]`) data buses. All
burst behavior is generated *inside* the caches on the AXI side, never on the core
side. This matches the handoff doc's claim of "direct point-to-point, no burst/
handshake overhead" and adds the specific signal names.

---

## 2. CPU Core: `riscv_core.v` and the Five Pipeline Stages

`riscv_core` instantiates seven functional sub-blocks plus the MMU stub:

```
riscv_core
├── u_fetch      (riscv_fetch.v)     — IF stage, PC generation
├── u_decode     (riscv_decode.v)    — ID stage, wraps riscv_decoder
├── u_issue      (riscv_issue.v)     — issue/scoreboard + pipe_ctrl + regfile
│   ├── u_pipe_ctrl (riscv_pipe_ctrl.v) — E1/E2/WB sequencing, hazard/forwarding
│   │   └── u_trace_wb (simulation-only, `ifdef verilator)
│   └── u_regfile   (riscv_regfile.v)
├── u_exec       (riscv_exec.v)      — ALU + branch resolution
├── u_lsu        (riscv_lsu.v)       — load/store address gen, response FIFO
├── u_mul        (riscv_mul.v)       — multiply unit
├── u_div        (riscv_div.v)       — divide unit
├── u_csr        (riscv_csr.v)       — CSR file, interrupt/exception logic
└── u_mmu        (riscv_mmu.v)       — present, structurally inert (SUPPORT_MMU=0)
```

This confirms and extends the handoff doc's hierarchy — the addition here is what each
stage actually does, traced from the RTL rather than assumed from the name.

### 2.1 Fetch (`riscv_fetch.v`)

- Maintains `pc_f_q`, the fetch-stage PC register. On reset it's `32'b0` (overridden
  externally via `reset_vector_i` at the `riscv_csr`/boot level — fetch itself resets
  to zero and is redirected by the first branch/CSR action).
- Next-PC logic is a simple two-way mux: **branch redirect** (`branch_pc_i`, when
  `branch_request_i` is asserted) or **PC+4** (`{icache_pc_w[31:2],2'b0} + 32'd4`).
  There is **no branch predictor and no return-address stack** in this core — every
  taken branch is a pipeline redirect penalty. This confirms the handoff doc's note in
  §8 about unused `branch_exec_is_call/ret/jmp` signals in `riscv_issue`: those really
  are reserved/unused, because fetch has no speculative front-end to consume them.
- `stall_w = !fetch_accept_i || icache_busy_w || !icache_accept_i` — fetch stalls on
  either a downstream (decode) stall or an I-cache-busy condition.
- `squash_decode_o = branch_request_i` — on a taken branch, the in-flight decode-stage
  instruction is squashed (bogus fetch that was already in-flight gets discarded).
- Talks to the I-cache through the `icache_*` signals which the MMU stub passes through
  unmodified when `SUPPORT_MMU=0` (confirmed in `riscv_mmu.v`'s "No MMU support"
  generate branch — the fetch/LSU ports pass straight through to `mem_i_*`/`mem_d_*`).

### 2.2 Decode (`riscv_decode.v`)

- Wraps `riscv_decoder` (the actual RV32IM opcode decode table), and optionally adds
  one pipeline register stage in front of it via `EXTRA_DECODE_STAGE` (a `generate`
  block — either a 67-bit buffered version or a pure combinational pass-through).
- Produces per-instruction classification bits consumed by issue:
  `exec_o`/`lsu_o`/`branch_o`/`mul_o`/`div_o`/`csr_o`/`rd_valid_o`/`invalid_o`. These
  are literally which functional unit(s) the instruction should be routed to — decode
  is a classifier, not a full micro-op generator.
- `enable_muldiv_w` gates whether M-extension instructions decode as valid — tied to
  `SUPPORT_MULDIV`.

### 2.3 Issue (`riscv_issue.v`) + `riscv_pipe_ctrl.v`

This is the most complex stage and the actual seat of hazard control:

- Extracts `ra`/`rb`/`rd` register indices directly from instruction bit-fields
  (`fetch_instr_i[19:15]`, `[24:20]`, `[11:7]`) — standard RISC-V encoding, done here
  rather than in decode.
- Reads operands from `riscv_regfile`, with **explicit bypass muxing** in `always @*`
  blocks: if `pipe_rd_e1_w == issue_ra_idx_w`, the operand is forwarded from
  `writeback_exec_value_i` (the ALU's E1 result) instead of the stale regfile read.
  This is the "SUPPORT_LOAD_BYPASS"/"SUPPORT_MUL_BYPASS" forwarding the README
  advertises, seen in concrete RTL form here rather than just as a parameter name.
- `x0` is hard-forced to zero at the operand mux (`if (issue_ra_idx_w == 5'b0)
  issue_ra_value_r = 32'b0`) — belt-and-suspenders on top of whatever `riscv_regfile`
  itself does for `x0`.
- Fans the same decoded opcode out to **four parallel functional-unit opcode buses**
  (`lsu_opcode_*`, `mul_opcode_*`, `csr_opcode_*`, and implicitly exec via the shared
  `opcode_*`) — this is a **fan-out issue scheme**, not a reservation-station/dynamic
  scheduler. Only one instruction is in the issue slot at a time (confirmed: no
  multi-entry issue queue structure exists in this file), consistent with the handoff
  doc's note that `SUPPORT_DUAL_ISSUE` is hardwired to `1` (meaning: issue *one*
  instruction that can simultaneously start on the exec pipe **and** be recognized as
  going to LSU/MUL/CSU — "dual issue" here is a misleading legacy name, not literal
  2-wide issue; single instruction, single issue slot, per-cycle).
- `riscv_pipe_ctrl` is instantiated inside `u_issue` and owns the E1 → E2 → WB
  sequencing: it takes the ALU's E1 result, the LSU's completion (`mem_complete_i`),
  the multiplier's E2 result, and the out-of-pipe divide completion
  (`div_complete_i`), and arbitrates a single writeback per cycle
  (`valid_wb_o`/`rd_wb_o`/`result_wb_o`). It also generates `stall_o` and
  `squash_e1_e2_o` for hazard resolution.
- **Divide is explicitly out-of-pipe**: `div_complete_i`/`div_result_i` are separate
  inputs to `pipe_ctrl`, not part of the normal E1/E2 flow — confirms the divide unit
  runs as a multi-cycle side operation that writeback waits on, rather than being
  pipelined like the ALU/multiply.

### 2.4 Execute (`riscv_exec.v`)

- Houses `riscv_alu` (combinational ALU) plus a **flopped output register**
  (`result_q`, held unless `hold_i`).
- Branch resolution happens here, combinationally, per opcode mask match against
  `INST_JAL`, conditional branches, etc. — computes `branch_target_r`,
  `branch_taken_r`, and classifies `call`/`ret`/`jmp` (via `rd==x1` for JAL = call
  convention detection).
- Two branch outputs exist: a **same-cycle speculative-ish `branch_d_request_o`**
  (asserted directly off `branch_taken_r` while the instruction is still in the exec
  opcode-valid window — used to redirect fetch as early as possible) and a **flopped
  `branch_request_o`** (registered `branch_taken_q`/`branch_ntaken_q`, used
  downstream for pipe-control accounting). This two-tier branch signal design is what
  the handoff doc's §8 was pointing at with the "real, wired, but issue-unread" signals
  — `branch_exec_is_call/ret/jmp_o` are computed here and driven, they're just not
  consumed by `riscv_issue` in this configuration, confirming the handoff doc's
  conclusion with the producing side of the signal now also traced.

### 2.5 Load/Store Unit (`riscv_lsu.v`)

- Decodes byte/half/word, signed/unsigned load variants and byte-enable-driven stores
  directly from opcode masks (`INST_LB_MASK`, `INST_LH_MASK`, `INST_LW_MASK`, etc.),
  producing a 4-bit `mem_wr_r` byte-strobe for stores.
- Contains its own **small FIFO** (`riscv_lsu_fifo`, `WIDTH=36`, `DEPTH=2`) that queues
  in-flight request metadata (`addr`, `signed`, `half`, `byte`, `load`) so that when the
  D-cache's response comes back (`mem_ack_i`), the LSU knows how to reformat/sign-extend
  the raw 32-bit `mem_data_rd_i` into the correct writeback value. This is the
  mechanism behind the 11-bit `mem_d_req_tag_o`/`resp_tag_i` — **not** used for
  reordering multiple truly outstanding accesses (the cache is still one-at-a-time
  request/accept), but for carrying per-request formatting metadata through the
  cache's pipeline latency. This is new detail beyond the handoff doc, which didn't
  trace what the request-tag field is actually for.
- `stall_o` folds together cache-busy, unaligned-access-delay
  (`mem_unaligned_e1_q`), and any pending flush/invalidate/writeback request — the LSU
  can stall the pipeline for reasons beyond a simple cache miss (e.g. servicing a
  `fence`-triggered flush).

### 2.6 CSR / Interrupt Path (`riscv_csr.v`)

- Takes `intr_i` directly as the external interrupt source, feeding the machine
  external interrupt pending bit — matches the SoC spec's description of a single,
  level-triggered `meip` line, with the actual CSR register plumbing now confirmed
  structurally present in this file (not just described at the spec level).
- Supervisor-mode-specific paths (`ecall_w`, `ebreak_w`, `wfi_w`, `fence_w` as flagged
  dead in the handoff doc) live here; this document's read confirms the CSR file is
  written generically for M/S/U modes and the machine-mode-only configuration is a
  parameter-driven subset, not a separate code path — consistent with the handoff
  doc's framing that this is a usage choice, not a hardware limitation.

### 2.7 MMU stub (`riscv_mmu.v`)

Two `generate` branches: `SUPPORT_MMU=1` (real page-table walk logic, `pte_addr_q`
etc.) vs. `SUPPORT_MMU=0` ("No MMU support" branch — pure wire pass-through,
`fetch_out_rd_o = fetch_in_rd_i`, etc., for both the I-side and D-side ports). At
`SUPPORT_MMU=0` this module is provably a set of `assign` statements with zero
sequential logic — independently confirms the handoff doc's lint-based conclusion
(§3) by reading the actual generate-branch source rather than relying only on
Verilator's unused-signal report.

---

## 3. L1 Data Cache: `dcache.v` + `dcache_core.v` + `dcache_axi.v`

This is the most structurally complex block in `top_cache_axi`, and where this
document adds the most beyond the handoff doc — the handoff doc treated `u_dcache` as
a single unit; reading `dcache.v` shows it is actually **four sub-blocks**:

```
dcache (top_cache_axi/src_v/dcache.v)
├── u_mux        (dcache_mux.v)       — splits incoming requests: cacheable vs. uncacheable
├── u_core        (dcache_core.v)      — cache lookup/fill/writeback state machine
├── u_uncached    (dcache_if_pmem.v)   — direct pass-through for non-cacheable accesses
├── u_pmem_mux    (dcache_pmem_mux.v)  — arbitrates cached vs. uncached onto one AXI port
└── u_axi         (dcache_axi.v)       — AXI4 master protocol wrapper
```

### 3.1 Cached/uncached split (`dcache_mux.v` — new finding vs. handoff doc)

`dcache_mux` takes the single incoming `mem_*_i` bus from the core's LSU and, based on
`mem_cacheable_i` (a single bit the LSU sets per-request, presumably derived from
address range against `MEM_CACHE_ADDR_MIN`/`MAX`), routes the request to **either**:
- `mem_cached_*` → into `dcache_core` (the real tag/data-RAM cache), or
- `mem_uncached_*` → into `dcache_if_pmem` (a simple pass-through memory interface with
  no caching, tagging, or line-fill behavior at all).

Both sides independently drive a private "physical memory" (`pmem`) request bus
(`pmem_cache_*` / `pmem_uncached_*`), which `dcache_pmem_mux` then arbitrates
(`select_i = cache_active_o` from `dcache_mux`) onto **one shared AXI master port**
that `dcache_axi` finally converts into real AXI4 signals.

**Why this matters for the microarchitecture record:** the data path has a genuine
cached/uncached bifurcation baked into the RTL, driven by address range, entirely
independent of the instruction path (which the top-level instantiation shows has no
such split — §1). Any future integration work that needs data accesses to
uncacheable MMIO regions (peripherals, per the SoC memory map) is *already
structurally supported* by this mux — it doesn't need new RTL, just correct
`MEM_CACHE_ADDR_MIN`/`MAX` values at `riscv_top` instantiation to mark peripheral
space (e.g. `0x8000_0000` and up per the SoC memory map) as non-cacheable.

### 3.2 Cache core (`dcache_core.v`) — state machine

Explicit 11-state FSM (`STATE_W=4`), confirmed directly from the `localparam` list —
more granular than the handoff doc's summary:

| State | Purpose |
|---|---|
| `STATE_RESET` | Initializes both tag RAMs (`tag0_write_m_r`/`tag1_write_m_r` forced high) |
| `STATE_FLUSH_ADDR`, `STATE_FLUSH` | Whole-cache flush (walks all lines, writes back any dirty) |
| `STATE_LOOKUP` | Normal tag compare against incoming request |
| `STATE_READ`, `STATE_WRITE` | Post-refill completion of the original access |
| `STATE_REFILL` | Active AXI read burst in progress (line fill) |
| `STATE_EVICT`, `STATE_EVICT_WAIT` | Writing back a dirty victim line before/while refilling |
| `STATE_INVALIDATE` | Single-line invalidate (from `fence.i`-style software request) |
| `STATE_WRITEBACK` | Single-line explicit writeback (not a full flush) |

Key transition logic confirmed by reading the `next_state_r` `case`:
- A miss (`!tag_hit_any_m_w`) checks `evict_way_w` first: if the replacement-candidate
  line is dirty, go **evict-then-refill**; if clean, go straight to **refill**. This
  is the standard write-back-cache miss handling, now confirmed present exactly as
  named in the handoff doc's §5, with the exact state sequence traced.
- `STATE_REFILL` doesn't return to `STATE_LOOKUP` directly — it goes to
  `STATE_WRITE` or `STATE_READ` first (depending on whether the miss was a store or
  load) to complete the original access against the now-filled line, *then* back to
  `STATE_LOOKUP`. This two-step return (refill → read/write → lookup) is a detail not
  present in the handoff doc.

### 3.3 Tag RAM structure (confirms + extends handoff §7)

Two identical `dcache_core_tag_ram` instances (`u_tag0`, `u_tag1`), one per way, each
`256 x 21` bits (`CACHE_TAG_DATA_W = 19 (addr) + 1 (dirty) + 1 (valid) = 21`). This
document independently confirms the **exact same blocking-assignment issue** flagged
in the handoff doc:

```verilog
always @ (posedge clk1_i)
begin
    if (wr1_i)
        ram[addr1_i] = data1_i;      // blocking assign inside clocked block
    ram_read0_q = ram[addr0_i];      // blocking assign inside clocked block
end
```

Re-confirmed here by direct inspection, not just cited from the earlier lint doc. This
remains an open item — flagged again in the knowledge-capture doc as unresolved.

Replacement is a single `replace_way_q` bit toggled per refill completion
(`state_q==STATE_REFILL` transitioning out) — genuinely round-robin, not
pseudo-LRU, matching the handoff doc and the upstream comment in the source
(`"limited pseudo random scheme (between lines, toggling on line thrashing)"`).

### 3.4 AXI wrapper (`dcache_axi.v`)

- Converts the cache-core's simple `pmem_*` request/ack interface into full AXI4
  handshaking via an inner `dcache_axi_axi` widget.
- Tracks write-burst progress with a down-counter (`req_cnt_q`), and read/write
  response completion with a 2-deep outstanding counter
  (`resp_outstanding_q`, saturating at 2) — meaning the data cache **can have up to
  two outstanding AXI transactions in flight** (one write-response and one read, or
  similarly paired), which refines the handoff doc's "1 per master, non-pipelined"
  claim from the SoC-level spec: that constraint is a **system-interconnect-level
  arbitration choice** (only one master serviced at a time by the interconnect), not
  a limit intrinsic to the cache's own AXI wrapper, which is structurally capable of
  a small amount of overlap.
- Burst parameters: `inport_burst_i(2'b01)` — hardwired to INCR (`2'b01`), confirming
  the handoff doc's claim that fills/writebacks always use INCR bursts, never WRAP or
  FIXED.

---

## 4. L1 Instruction Cache: `icache.v`

Structurally simpler than the data cache — no cached/uncached split, no writeback path
(read-only, confirmed again here from the FSM: there is no `STATE_WRITE` or
`STATE_EVICT` in this file's state list at all, only `STATE_FLUSH`, `STATE_LOOKUP`,
`STATE_REFILL`, `STATE_RELOOKUP`).

State machine:

| State | Purpose |
|---|---|
| `STATE_FLUSH` | Reset-time and explicit-flush line invalidation, walks all 256 lines |
| `STATE_LOOKUP` | Tag compare |
| `STATE_REFILL` | AXI read burst in progress |
| `STATE_RELOOKUP` | One-cycle re-check after refill completes, before returning to `STATE_LOOKUP` |

- Tag hit/miss logic is structurally identical in form to the D-cache (two-way tag
  compare, `tag_hit_any_w`), confirming the 2-way/256-set/32B-line parameters from the
  handoff doc directly from the RTL's own `localparam`s (`ICACHE_NUM_WAYS=2`,
  `ICACHE_NUM_LINES=256`, `ICACHE_LINE_SIZE=32`) — identical values to the D-cache's
  equivalents.
- `req_valid_o` is gated by `lookup_valid_q` (a registered "there was a lookup issued
  last cycle" flag) **and** `tag_hit_any_w` while in `STATE_LOOKUP` — meaning a
  hit is signaled combinationally off the tag compare in the same state, not via an
  extra pipeline register, keeping I-cache hit latency at effectively one cycle beyond
  the request.
- Refill write to data RAM streams directly off `axi_rvalid_i`/`axi_rdata_i` as each
  beat arrives (`data0_write_r = axi_rvalid_i && replace_way_q==0`) — no
  intermediate line buffer; the incoming AXI beats are written straight into the
  data RAM word-by-word as they arrive, addressed by an incrementing
  `data_write_addr_q`.

---

## 5. Cross-Cutting Observations (synthesized from both caches + core)

- **No inter-cache coherence** exists or is needed: I-cache and D-cache are
  independent, single-master-each AXI clients with no snoop/invalidate path between
  them. Self-modifying code would require explicit software-driven I-cache
  invalidation (`fence.i` → `mem_i_invalidate_o` → `STATE_INVALIDATE`/`STATE_FLUSH` in
  `icache.v`) — there is no automatic detection of a D-cache write to an I-cache-cached
  address.
- **Backpressure model is uniform**: every interface in this design (core↔cache,
  cache↔AXI) uses the same valid/accept (ready/valid) handshake discipline. There is
  no interface in this scope that uses a different flow-control scheme — a genuinely
  consistent architectural choice across the whole block.
- **All stalls are precise, in-order stalls**: the LSU, both caches, and pipe_ctrl all
  communicate via simple stall/accept signals rather than any replay or squash-and-
  retry mechanism for cache misses — a miss simply holds the requesting stage until
  the cache asserts `ack`.

---

## 6. Known Gaps for Future Work (carried forward + refined from handoff doc)

1. **No native XIP port exists.** Confirmed again at the top level (§1): `riscv_top`
   exposes only `axi_i_*`/`axi_d_*`. New RTL is required to route instruction fetches
   in the SPI-boot address region to the SPI controller instead of through
   `u_icache`/AXI — and since `u_icache` has **no cacheable-range parameter at all**
   (§1), this routing decision must happen **upstream of `u_icache`**, likely at or
   before the core's `mem_i_*` boundary, not inside the cache.
2. **`dcache_core_tag_ram.v` blocking-assignment issue** — re-confirmed by direct
   read in §3.3, still unresolved.
3. **Data-side cacheable/uncacheable split is present and usable today** (§3.1) — this
   is a capability, not a gap, but it's newly documented here and should inform how
   `MEM_CACHE_ADDR_MIN`/`MAX` get set for peripheral MMIO regions at final SoC
   integration.
4. **`riscv_xilinx_2r1w.v`** — alternate Xilinx-primitive register file, gated by
   `SUPPORT_REGFILE_XILINX` (default 0), not relevant to this non-Xilinx target;
   confirm exclusion from the build file list (carried from handoff doc, unresolved).

---

## 7. Cosimulation-Derived Findings (confirmed via RTL/reference-model lockstep verification)

This section documents microarchitecture facts confirmed while building an
ISA-compliance cosimulation harness (RTL vs. the `isa_sim/` C++ reference model). These
are RTL-structural facts independently re-derived from source, not verification-process
narrative — process detail, debugging history, and open verification items live in the
project's `knowledge_capture.md` files, not here.

### 7.1 Pipeline PC register chain (`riscv_pipe_ctrl.v`)

The pipeline carries **two parallel PC tracks per stage** — an "own PC" track (the
fetch address of the instruction occupying that stage) and a "next PC" track (the
resolved next-fetch address, including any taken branch/jump target):

| Stage | "Own PC" register | "Next PC" register | Exposed as output? |
|---|---|---|---|
| E1 | `pc_e1_q`, loaded from `issue_pc_i` | `npc_e1_q` (`issue_branch_taken_i ? issue_branch_target_i : issue_pc_i + 4`) | no |
| E2 | `pc_e2_q` (`<= pc_e1_q`, unconditional) | `npc_e2_q` (`<= npc_e1_q`) | no |
| WB | `pc_wb_q` (`<= pc_e2_q`, unconditional, no branch-target substitution) | `npc_wb_q` (`<= npc_e2_q`) | `pc_wb_o` only |

`pc_wb_o` (also exposed as `retire_pc_o`, §7.2) is sourced from the **"own PC" track**
— it reports each retiring instruction's own fetch address, not any resolved branch/
jump target. This is architecturally correct and matches standard ISA-simulator PC
semantics (report the PC of the instruction that just executed), but is worth stating
explicitly since it's easy to assume a "retirement PC" port reports a next-fetch
address instead.

The "next PC" track (`npc_e1_q`/`npc_e2_q`/`npc_wb_q`) correctly carries the resolved
branch/jump target in lockstep with the instruction through all three stages, but as
of this writing **only `pc_wb_o` is exposed as a module output — `npc_wb_q` has no
corresponding port.** A straightforward, low-risk addition (`npc_wb_o`, mirroring the
existing `pc_wb_o` pattern) would expose it for future debug visibility or
predicted-vs-actual next-PC checking; not yet added to the RTL.

Branch/jump target computation itself lives in `riscv_exec.v`:
`branch_target_r = opcode_pc_i + jimm20_r` for JAL (J-type immediate), confirmed
against a hand-decoded instruction and the reference model's independently-computed
target.

### 7.2 Cosim/debug ports (new since original hierarchy documentation)

`riscv_core.v` (and threaded straight through `riscv_top.v`, connected 1:1 to `u_core`)
now exposes 35 additional debug/observability ports, added as a non-functional,
additive-only change (no existing port, signal, or always-block logic modified;
lint-clean, 0 errors, 0 new warnings vs. pre-change baseline):

- **Retirement pulse group:** `retire_valid_o`, `retire_rd_o`, `retire_pc_o`,
  `retire_value_o` — sourced from `riscv_issue.v`'s internal
  `pipe_valid_wb_w`/`pipe_rd_wb_w`/`pipe_pc_wb_w`/`pipe_result_wb_w`, which in turn
  trace to `riscv_pipe_ctrl.v`'s `valid_wb_o` (`= valid_wb_q & ~issue_stall_i` — the
  single-cycle "instruction completing writeback this cycle, unstalled" signal) and
  `rd_wb_o`. This is the correct single poll point for "did any instruction retire this
  cycle" — preferred over OR-ing the four separate per-functional-unit writeback-valid
  wires (`writeback_mem_valid_w`, `writeback_div_valid_w`, etc.), which only indicate
  *which* value is being written back, not whether retirement occurred at all.
  `retire_rd_o == 0` is ambiguous between "wrote x0" and "no destination" but harmless,
  since `x0` always reads as zero regardless.
- **Register-file debug bus:** `debug_x1_o`..`debug_x31_o` (31-wide, one wire per
  non-zero GPR) — added because `riscv_regfile.v`'s normal read ports
  (`ra0_value_o`/`rb0_value_o`) only support the pipeline's actual 2-operand read
  bandwidth, with no port for reading an arbitrary register index. Sourced from the
  regfile's existing per-register simulation-friendly-name wires
  (`x1_ra_w`...`x31_t6_w` in the `REGFILE` branch); tied to zero in the unused
  `REGFILE_XILINX_SINGLE` branch.

These ports have no effect on core functionality — they are read-only observability
taps for verification tooling (see `knowledge_capture_cosim.md` for the cosim harness
that consumes them).

### 7.3 Store byte-lane/strobe encoding (`riscv_lsu.v`)

`riscv_lsu.v`'s `mem_wr_r`/`mem_data_r` logic (store-path byte-enable + data
positioning) is a complete, gapless table keyed on store width and, for sub-word
stores, on `mem_addr_r[1:0]`:

| Width | Address bits | Strobe (`mem_wr_r`) | Data lane |
|---|---|---|---|
| Word (SW) | — | `4'hF` | Full word, unshifted |
| Halfword (SH) | `2'h2` | `4'b1100` | `[31:16]` |
| Halfword (SH) | `2'h0` (default) | `4'b0011` | `[15:0]` |
| Byte (SB) | `2'h3` | `4'b1000` | `[31:24]` |
| Byte (SB) | `2'h2` | `4'b0100` | `[23:16]` |
| Byte (SB) | `2'h1` | `4'b0010` | `[15:8]` |
| Byte (SB) | `2'h0` | `4'b0001` | `[7:0]` |

(`2'h1`/`2'h3` for halfword stores are unaligned accesses, trapped upstream before
reaching this logic.) The strobe alone fully determines the byte lane — no additional
address-bit decode is needed downstream of `mem_wr_r` to reconstruct which bytes of
`mem_data_wr_o` are live.

Separately, `mem_addr_o` is **unconditionally word-aligned at the LSU** before
reaching the cache/AXI boundary (`assign mem_addr_o = {mem_addr_q[31:2], 2'b0};`) —
sub-word store/load addressing is entirely a byte-lane/strobe concern downstream of
address generation, never an address-value concern.

### 7.4 Core↔D-cache local bus signal correlation (internal wires, not ports)

One level inside `riscv_top.v`, the core↔D-cache local bus (§1.1's `mem_d_*` ports)
appears as internal wires with distinct names:
`dcache_addr_w`, `dcache_data_wr_w`, `dcache_rd_w`, `dcache_wr_w`, `dcache_ack_w`,
`dcache_data_rd_w`. These are the same signals as `mem_d_addr_o`/`mem_d_data_wr_o`/
`mem_d_rd_o`/`mem_d_wr_o`/`mem_d_ack_i`/`mem_d_data_rd_i` at the `riscv_core.v`
boundary, renamed at the `riscv_top.v` internal-wire level — not a second, separate
bus. Worth noting for anyone tracing signal names across the `riscv_core.v` /
`riscv_top.v` boundary, since the naming convention changes at that seam.

### 7.5 Newly identified: `top_tcm_axi` / `top_tcm_wrapper` (out of scope, flagged)

A second, TCM-based (tightly-coupled-memory, AXI4-Lite) core build variant exists in
the repository at `top_tcm_axi/`/`top_tcm_wrapper/`, discovered incidentally during
verification tooling work. It is not mentioned anywhere in this document's original
scope statement or `Files to be used.txt`, and is confirmed out of scope for this
project (`core` + `top_cache_axi` only, per the project's explicit sourcing decision).
Flagged here as a documentation-coverage gap worth a dedicated look at some point, not
a correction to this document's existing scope.

---

## Appendix: File Inventory (this scope only)

| File | Role |
|---|---|
| `top_cache_axi/src_v/riscv_top.v` | Generated top-level structural wrapper |
| `core/riscv/riscv_core.v` | CPU pipeline top, instantiates all execution stages |
| `core/riscv/riscv_fetch.v` | IF stage: PC generation, branch redirect mux |
| `core/riscv/riscv_decode.v` | ID stage: wraps `riscv_decoder`, optional extra pipe stage |
| `core/riscv/riscv_issue.v` | Issue/scoreboard, register read + bypass, opcode fan-out |
| `core/riscv/riscv_pipe_ctrl.v` | E1/E2/WB sequencing and hazard/stall control (inside `u_issue`) |
| `core/riscv/riscv_regfile.v` | 32×32-bit GPR file (inside `u_issue`) |
| `core/riscv/riscv_exec.v` | ALU + branch resolution |
| `core/riscv/riscv_lsu.v` | Load/store address gen, response FIFO, sign-extension |
| `core/riscv/riscv_mul.v` | Multiply unit |
| `core/riscv/riscv_div.v` | Divide unit (out-of-pipe, multi-cycle) |
| `core/riscv/riscv_csr.v` | CSR file, interrupt/exception logic |
| `core/riscv/riscv_mmu.v` | MMU / pass-through stub (`SUPPORT_MMU`-gated) |
| `top_cache_axi/src_v/icache.v` | L1 instruction cache (read-only, 2-way, 256 sets) |
| `top_cache_axi/src_v/icache_tag_ram.v` | I-cache tag storage (per way) |
| `top_cache_axi/src_v/icache_data_ram.v` | I-cache data storage (per way) |
| `top_cache_axi/src_v/dcache.v` | D-cache top: cached/uncached split + AXI mux |
| `top_cache_axi/src_v/dcache_mux.v` | Routes requests by `mem_cacheable_i` |
| `top_cache_axi/src_v/dcache_core.v` | D-cache lookup/fill/writeback state machine |
| `top_cache_axi/src_v/dcache_core_tag_ram.v` | D-cache tag storage (per way) — has known blocking-assignment issue |
| `top_cache_axi/src_v/dcache_core_data_ram.v` | D-cache data storage (per way) |
| `top_cache_axi/src_v/dcache_if_pmem.v` | Uncacheable pass-through memory interface |
| `top_cache_axi/src_v/dcache_pmem_mux.v` | Arbitrates cached vs. uncached onto shared AXI port |
| `top_cache_axi/src_v/dcache_axi.v` | AXI4 master protocol wrapper for D-cache |