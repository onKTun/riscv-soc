# Core + cache SVA testbench

This Verilator/SystemVerilog environment follows `SVA_VERIFICATION_PLAN.md`.
It binds sixteen stable `CHK_*` assertion groups to `riscv_top`, generates VCD
waveforms, enables explicit `cover property` coverage, and fails sign-off if a
required trigger is not observed.

Run from any PowerShell directory:

```powershell
powershell -ExecutionPolicy Bypass -File C:\Users\pigle\riscv-soc\testbench\sva\run_sva.ps1
```

Outputs are written below `testbench/sva/sim_build`, including `coverage.dat`
and the annotated `coverage-report` directory. The 10 ns clock and 3000-cycle
watchdog are cycle-based defaults inherited from the existing directed cache
test environment.

From WSL/Ubuntu, run:

```bash
cd /mnt/c/Users/pigle/riscv-soc
bash testbench/sva/run_sva.sh
```

## MUL/DIV/CSR SVA testbench

`riscv_muldiv_csr_sva.sv` adds a second, independent checker
(`riscv_muldiv_csr_sva_checker`, `CHK_017`-`CHK_030`) also bound to
`riscv_top`, covering `riscv_multiplier`, `riscv_divider`, `riscv_csr`, and
`riscv_csr_regfile` -- none of which were exercised by any existing test
despite `SUPPORT_MULDIV=1` being the core's default build configuration.
It runs against its own dedicated top module, `riscv_muldiv_csr_tb.sv`,
which drives a hand-assembled RV32M + Zicsr directed program (see
`knowledge_capture.md` in the project root for the full derivation,
including the RISC-V spec Table 7.1 divide-by-zero/overflow semantics and
the Python reference model used to validate them before committing to
assertion values).

Run it the same way as the cache/AXI suite:

```bash
bash testbench/sva/run_sva_muldiv_csr.sh
```

Outputs are written below `testbench/sva/sim_build_muldiv_csr`.

**Known, documented gap:** `CHK_029_illegal_csr_exception` and
`CHK_030_mepc_capture` are compiled in and remain live assertions, but are
excluded from this suite's sign-off vacuity gate. `riscv_csr.v`'s
`csr_fault_r` -- the sole source of `EXCEPTION_ILLEGAL_INSTRUCTION` for CSR
opcodes -- is tied to `1'b0` whenever the core is built with
`SUPPORT_SUPER=0`, and `riscv_top.v` does not expose `SUPPORT_SUPER` as a
pass-through parameter. This makes the illegal-CSR-access trap path
unreachable from any `riscv_top`-instantiating testbench today, including
this one. This is a verified, accepted gap (not a silent hole): if
`riscv_top.v` is ever changed to expose `SUPPORT_SUPER`, these checks will
begin contributing to sign-off automatically the next time this suite runs.

**Known, pre-existing environment issue (both suites):** the
`+verilator+coverage+file+` runtime plusarg is rejected by Verilator 5.020
("Unknown runtime argument"). This reproduces identically on the original
`run_sva.sh` in this same environment and is not specific to the new suite.
`run_sva_muldiv_csr.sh` treats this as non-fatal and re-runs without
coverage collection so a real test failure is never masked by it; the
underlying simulation result (pass/fail, all `$error`/`$fatal` assertion
checks) is unaffected either way.

