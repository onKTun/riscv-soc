# SVA Test Cases

The combined RISC-V core, instruction-cache, data-cache, and AXI SVA suite
currently contains 39 requirement groups, 44 executable assertions, and 39
companion coverage points.

| Check ID | Test case | Assertion behavior |
|---|---|---|
| `CHK_001_reset_quiet` | AXI inactivity during reset | No instruction or data AXI read/write request may be active while reset is asserted. |
| `CHK_002_icache_refill` | I-cache refill request | I-cache refills must use a 32-byte-aligned address, an eight-beat burst, and AXI `INCR` burst type. |
| `CHK_003_icache_response` | I-cache response framing | Instruction-channel `RLAST` may only assert with `RVALID`. |
| `CHK_004_dcache_read` | D-cache read request | D-cache AXI reads must be word-aligned and use the `INCR` burst type. |
| `CHK_005_dcache_write` | D-cache write strobes | Every valid data-write beat must enable at least one byte lane. |
| `CHK_006_dcache_response` | D-cache response framing | Data-channel `RLAST` may only assert with `RVALID`. |
| `CHK_007_icache_fsm` | I-cache legal states | The I-cache FSM must remain within its legal state encodings; coverage confirms that `REFILL` is reached. |
| `CHK_008_dcache_fsm` | D-cache legal states | The D-cache FSM must remain within its legal state encodings; coverage confirms that `REFILL` is reached. |
| `CHK_009_reset_states` | Cache reset states | During reset, the I-cache must be in its reset/flush state and the D-cache must be in its reset state. |
| `CHK_010_icache_read_only` | Instruction cache is read-only | The instruction cache must never issue an AXI write transaction. |
| `CHK_011_fetch_alignment` | Instruction-fetch alignment | Every instruction-fetch address issued by the core must be word-aligned. |
| `CHK_012_core_data_request` | Data request exclusion | The core must never request a data read and data write simultaneously. |
| `CHK_013_icache_refill_exit` | I-cache refill completion | A completed I-cache refill must transition to `RELOOKUP` on the next clock. |
| `CHK_014_icache_relookup` | I-cache relookup completion | The I-cache must transition from `RELOOKUP` to `LOOKUP` on the next clock. |
| `CHK_015_dcache_refill_exit` | D-cache refill completion | A completed D-cache refill must transition to either `READ` or `WRITE`. |
| `CHK_016_axi_response` | AXI response status | Instruction-read, data-read, and data-write responses must all be AXI `OKAY`. This group contains three assertions. |
| `CHK_017_clock_period` | Clock frequency | Consecutive rising edges must be 10 ns apart, corresponding to the plan's default 100 MHz simulation clock. |
| `CHK_018_clock_duty` | Clock duty cycle | Clock high time and low time must each be 5 ns, enforcing a 50% duty cycle. This group contains two assertions. |
| `CHK_019_reset_duration` | Minimum reset duration | Startup reset must remain asserted for at least five sampled rising clock edges. |
| `CHK_020_reset_release` | Stable reset release | Reset must remain deasserted on the clock following its release. |
| `CHK_021_post_reset_quiet` | First active cycle safety | No instruction or data AXI request may be active on the first sampled clock after reset release. |
| `CHK_022_pipeline_reset` | Pipeline reset state | E1, E2, and writeback valid/control registers must all be clear during reset. |
| `CHK_023_load_store_exclusion` | Load/store control exclusion | E1 and E2 may not be marked as both a load and store simultaneously. |
| `CHK_024_operation_class` | Pipeline operation class | At most one of load, store, CSR, divide, and multiply may be selected in E1 or E2. |
| `CHK_025_invalid_stage_clear` | Invalid E1 controls | An invalid E1 pipeline stage must not retain active control bits. |
| `CHK_026_pipeline_stall` | Pipeline stall stability | E1, E2, and writeback valid, control, PC, and opcode registers must remain stable across a stall. |
| `CHK_028_zero_register` | Zero-register operand | Reading `x0` as the first source operand must always produce zero. |
| `CHK_029_pipeline_pc` | Pipeline PC alignment | Every valid E1, E2, and writeback PC must remain word-aligned. |
| `CHK_030_branch_control` | Branch control safety | Taken and not-taken controls may not overlap, and requested branch targets must be word-aligned. |
| `CHK_031_pipeline_progress` | E1-to-E2 progression | A valid, unstalled, unsquashed E1 instruction must advance into E2 on the next clock. |
| `CHK_032_pipeline_complete` | Pipeline completion controls | Every valid E1, E2, and writeback stage must carry the `COMPLETE` control bit. |
| `CHK_033_e1_e2_metadata` | E1-to-E2 metadata | For an unstalled, unsquashed instruction, PC, opcode, and control bits must propagate unchanged from E1 to E2. |
| `CHK_034_e2_wb_metadata` | E2-to-writeback metadata | For a non-exception instruction, PC, opcode, and control bits must propagate unchanged from E2 to writeback. |
| `CHK_035_add_result` | ADD and ADDI execution | Writeback results for `ADD` and `ADDI` must equal the independently calculated operand sum. This group contains two assertions. |
| `CHK_036_lui_result` | LUI execution | A committed `LUI` result must equal its upper immediate with twelve low zero bits. |
| `CHK_037_commit_destination` | Writeback destination | A nonzero commit destination must match the instruction's encoded `rd` and occur only with valid writeback. |
| `CHK_038_load_store_destination` | Load/store destination semantics | Loads must enable destination-register writeback and stores must not. This group contains two assertions. |
| `CHK_039_branch_class` | Branch execution class | A branch in E1 must also select the ALU execution path used for branch comparison and target processing. |
| `CHK_040_stall_cause` | Legal pipeline stall cause | A pipeline stall must be attributable to divide, load, or store processing. |

## Assertion Coverage

Each `CHK_*` group has a companion `cover property` and explicit trigger
tracking to prevent vacuous sign-off. The latest Verilator regression result
was:

```text
Functional core/cache/AXI test: PASS
Assertions:                    44 passing, 0 failing
Required cover points:         39/39 hit
Assertion coverage:            100%
Watchdog timeout:              Not triggered
```

`CHK_027` is reserved for exception-driven pipeline-squash verification. It is
not enabled because the current nominal program does not generate an exception;
enabling it would produce a zero-hit, vacuous check contrary to the verification
plan.

The editable assertion source is `testbench/sva/riscv_top_tb.sv`. Files under
`testbench/sva/sim_build/coverage-report` are generated coverage annotations and
should not be edited directly.
