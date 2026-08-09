# RISC-V core testbench

This is a small, self-checking testbench for the bare `riscv_core` module. It
provides one-cycle-latency instruction and data memories and runs an embedded
RV32I program that checks arithmetic, a conditional branch, a word store, and
a word load. The simulation prints `PASS` and exits when the program writes 1
to the result address (`0x104`); failures and timeouts return a non-zero status.

Run it from this directory with:

```sh
make
```

The Makefile expects Icarus Verilog (`iverilog` and `vvp`). A waveform named
`riscv_core_tb.vcd` is also generated for inspection in GTKWave or another VCD
viewer.
