# Core + cache SVA testbench

This Verilator/SystemVerilog environment follows `SVA_VERIFICATION_PLAN.md`.
It binds thirty-nine stable `CHK_*` assertion groups to `riscv_top`, generates VCD
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
