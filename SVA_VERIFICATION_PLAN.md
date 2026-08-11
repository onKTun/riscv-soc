# General SVA Verification Plan

## 1. Purpose

This document is a reusable verification-plan template for applying
SystemVerilog Assertions (SVA) to RTL designs. It can be adapted for controllers,
finite-state machines, pipelines, FIFOs, memories, bus interfaces, processors,
DSP blocks, accelerators, and other synchronous or asynchronous logic.

Replace bracketed placeholders such as `[DUT name]` with project-specific
information before using this document for sign-off.

## Agent backend contract

This section is the authoritative backend contract consumed by the Testbench
Generation Agent. The agent must obtain these values from this active plan at
runtime; they must not be hardcoded into the backend-agnostic pipeline.

| Plan field | Required value |
|---|---|
| Verification backend | `verilator_sva` |
| Testbench language | SystemVerilog |
| Testbench extension | `.sv` |
| Default timescale | `1ns/1ps` when the reference does not specify one; mark it as defaulted |
| Simulator/compiler | Verilator with GNU Make and a C++ compiler |
| Generated top | `<dut_top_module>_tb` |
| Generated file | `<dut_top_module>_tb.sv` |
| DUT instance name | `dut` |
| Waveform format | VCD |
| Waveform filename | `<dut_top_module>.vcd` |
| Coverage mode | Explicit SVA `cover property` points using Verilator user coverage |
| Compile-lint mode | Verilator lint of DUT sources and generated testbench together |

### Required inputs from the reference and approved final plan

Generation must hard-fail rather than guess when any required item cannot be
resolved:

- Instantiable RTL top-module name
- DUT source file or files
- Concrete port names, directions, and widths
- Clock port and active sampling edge
- Reset style, polarity, duration, and target state when reset is specified
- Every signal referenced by an approved trigger or expected response
- Hierarchical path for any approved internal observation
- Approved test cases and their stable `CHK_<NNN>_<slug>` identifiers

Clock period must come from the reference when behavior depends on real time.
For purely cycle-based checks, the generated testbench may use a 10 ns simulation
period as a non-functional default and must identify it as defaulted.

### Context and provenance rules

- For initial testbench generation, the structured reference is authoritative
  for behavioral intent.
- RTL supplied at the same time is supplementary context for module discovery,
  binding, widths, hierarchy, and compile grounding; it must not silently change
  a specified expected result.
- RTL becomes required grounding for later targeted assertions, waveform-driven
  debug, and implementation-specific Level 2+ work.
- Generate checks only from approved behavioral facts in the final test plan.
  Do not invent requirements from RTL implementation details.
- Preserve each check's `field_path`, source text, provenance, routing decision,
  and stable check ID in generated metadata and diagnostics.
- Facts routed to the human-review gate must not generate executable checks
  until explicitly approved.

### Generated testbench structure

Step 4 must emit one complete, self-checking SystemVerilog testbench named
`<dut_top_module>_tb.sv`. Unless an approved plan explicitly requires a separate
checker, the generated file contains the assertions and coverage points directly
so it matches the architecture's single-file output contract.

The generated file must contain, in this order:

1. Timescale declaration
2. Testbench module `<dut_top_module>_tb`
3. Bound DUT port signals with resolved widths
4. Clock generator
5. DUT instantiation named `dut`
6. Hierarchical observation aliases, if approved and resolved
7. Reset task or reset stimulus sequence from the bound reset contract
8. Reusable stimulus tasks
9. Labeled assertions and companion coverage/vacuity tracking
10. Directed stimulus for approved checks
11. VCD dump setup using `<dut_top_module>.vcd`
12. Watchdog timeout
13. Completion summary and `$finish`

Stimulus should be driven away from the DUT sampling edge when possible to avoid
races. For a positive-edge DUT, drive synchronous inputs on the falling edge
unless the reference specifies a different protocol.

### Stable check-ID conventions

Every generated check retains its Step-1 ID verbatim. Convert the ID to a legal
SystemVerilog identifier only by adding a suffix; never renumber or regenerate
it.

```systemverilog
CHK_001_request_response_A: assert property (
    @(posedge clk) disable iff (!rst_n)
    request |=> response
) else $error("[CHK_001_request_response] response missing");

CHK_001_request_response_C: cover property (
    @(posedge clk) disable iff (!rst_n)
    request
);
```

For any implication that may pass vacuously, generate companion trigger tracking
that emits the same ID:

```systemverilog
bit CHK_001_request_response_seen;

always_ff @(posedge clk) begin
    if (!rst_n)
        CHK_001_request_response_seen <= 1'b0;
    else if (request) begin
        CHK_001_request_response_seen <= 1'b1;
        $display("[TRIGGER][CHK_001_request_response]");
    end
end

final begin
    if (!CHK_001_request_response_seen)
        $warning("[VACUOUS][CHK_001_request_response] trigger not observed");
end
```

The generated manifest carries the same check ID and originating reference
`field_path`.

### Watchdog policy

The final bound plan must carry `watchdog_cycles`.

- Use an explicit reference value when provided.
- Otherwise use `max(1000, 10 × longest specified cycle latency)`.
- If no finite latency can be derived, use 1000 cycles and mark the value as
  defaulted in the final plan.
- Timeout must call `$fatal` and include `[WATCHDOG]` in its message.

The watchdog is a testbench safety limit, not a new DUT performance requirement.

### Compile-lint contract

Step 4.5 must lint the generated source together with the resolved DUT sources in
a temporary directory. It must not lint the testbench in isolation.

Canonical command shape:

```bash
verilator --lint-only --timing --assert -Wall -Wno-fatal \
    --top-module <dut_top_module>_tb \
    <dut_sources> <dut_top_module>_tb.sv
```

Compiler errors hard-fail generation after the single architecture-authorized
repair attempt. Warnings are preserved in `<dut_top_module>_lint.json` with
their file, line, category, severity, and message.

### Simulation and coverage contract

Canonical executable build and run shape:

```bash
verilator --binary --timing --assert --trace --coverage-user \
    -Wall -Wno-fatal --top-module <dut_top_module>_tb \
    --Mdir sim_build <dut_sources> <dut_top_module>_tb.sv

./sim_build/V<dut_top_module>_tb \
    +verilator+coverage+file+sim_build/coverage.dat

verilator_coverage --annotate sim_build/coverage-report \
    sim_build/coverage.dat
```

If the installed Verilator predates the runtime coverage filename option, use
its default coverage output and record that compatibility choice in the lint or
run report. Assertion failures, `$fatal`, unresolved bindings, watchdog timeout,
and compile errors are failures. A zero-hit required cover point is a coverage
closure failure, even when every assertion reports a pass.

### Oracle and Q&A compatibility

- Oracle-driven generation uses the same backend identity, filename, top-module,
  structural, lint, watchdog, waveform, and coverage conventions.
- It generates only the cases named by the oracle prompt and does not modify the
  state of the core pipeline.
- Q&A is read-only and may explain generated assertions, trigger tracking,
  watchdogs, bound signals, and coverage using stable check IDs and line-level
  references.

## 2. Scope

### In scope

- Clock and reset behavior
- Interface protocols and handshakes
- Legal state transitions
- Data stability and latency
- Resource, counter, and buffer bounds
- Output pulse timing
- Safety invariants and mutual exclusion
- Error handling and recovery
- Assertion activation and functional coverage
- Simulation and, where supported, formal reuse

### Out of scope unless explicitly added

- Analog behavior
- Physical timing after place and route
- Clock-domain crossing structural analysis
- Power intent and power-aware simulation
- Software correctness
- Performance benchmarking
- End-to-end numerical reference models better handled by a scoreboard or cocotb

## 3. Design overview

Document the design before writing properties:

| Item | Project definition |
|---|---|
| DUT | `[top-level module]` |
| Function | `[brief description]` |
| Clock domains | `[clock names, periods, and relationships]` |
| Resets | `[polarity, synchronous/asynchronous, affected domains]` |
| Interfaces | `[valid/ready, request/acknowledge, bus, FIFO, etc.]` |
| Internal state | `[FSMs, counters, queues, pipelines]` |
| Parameters | `[widths, depths, latency, feature switches]` |
| Error behavior | `[drop, retry, flag, reset, recovery]` |

Identify which signals are architectural interfaces and which internal signals
the assertions are allowed to observe.

## 4. Verification objectives

The SVA environment should verify that:

1. The DUT reaches a defined state after reset.
2. Interface protocols are followed on every relevant clock.
3. Requests receive responses within the specified latency.
4. State machines use only legal states and transitions.
5. Data remains stable whenever the protocol requires stability.
6. Counters, pointers, occupancy values, and addresses remain within bounds.
7. Overflow, underflow, collision, and illegal-operation conditions are handled.
8. Mutually exclusive controls or outputs never overlap.
9. Pulses have the required minimum and maximum width.
10. Error states recover according to the specification.
11. Important properties are exercised non-vacuously.
12. Assumptions about the environment are explicit and reviewed.

## 5. Verification architecture

A typical SVA environment contains:

```text
stimulus/testbench ──► DUT inputs
                          │
                          ├──► DUT outputs
                          └──► selected internal state
                                      │
                                      ▼
                              SVA checker/bind module
                                      │
                         assertions + assumptions + covers
```

Recommended separation:

- **RTL** implements the design.
- **Checker modules** contain properties and expose only required signals.
- **Bind files** attach reusable checkers without modifying RTL when supported.
- **Testbenches** generate directed or randomized stimulus.
- **Coverage reports** prove that important assertion triggers were reached.

## 6. Property categories

### 6.1 Reset and initialization

Verify reset assertion, reset release, initial values, and recovery from reset in
every operational state.

```systemverilog
property p_reset_state;
    @(posedge clk)
    !rst_n |-> (state == RESET_STATE && valid == 1'b0);
endproperty
```

Plan checks for:

- Reset assertion behavior
- Synchronous or asynchronous reset semantics
- First active clock after reset release
- Reset during an active transaction
- Output inactivity during reset
- Multiple resets and reset glitches if relevant

### 6.2 Protocol and handshake behavior

```systemverilog
property p_request_acknowledged;
    @(posedge clk) disable iff (!rst_n)
    request |-> ##[1:MAX_LATENCY] acknowledge;
endproperty
```

Plan checks for:

- Request-to-response latency
- No response without a request
- Valid/ready transfer rules
- Backpressure handling
- No dropped or duplicated transactions
- Stable control and data while stalled
- Outstanding-transaction limits

### 6.3 Data integrity and stability

```systemverilog
property p_data_stable_while_stalled;
    @(posedge clk) disable iff (!rst_n)
    valid && !ready |=> valid && $stable(data);
endproperty
```

Plan checks for:

- Data stability until acceptance
- Input-to-output latency
- Ordering
- No corruption during stalls
- Correct metadata association
- Pipeline stage progression

### 6.4 FSM behavior

```systemverilog
property p_legal_state;
    @(posedge clk) disable iff (!rst_n)
    state inside {IDLE, ACTIVE, DONE, ERROR};
endproperty
```

Plan checks for:

- Legal state encodings
- Every allowed transition
- Every prohibited transition
- Progress or bounded completion
- Recovery from error states
- No deadlock or unintended livelock

### 6.5 Counters, FIFOs, and resources

```systemverilog
property p_fifo_bounds;
    @(posedge clk) disable iff (!rst_n)
    occupancy <= DEPTH;
endproperty
```

Plan checks for:

- No overflow or underflow
- Pointer and occupancy consistency
- Counter rollover policy
- Simultaneous push/pop behavior
- Full and empty flags
- Address bounds and alignment
- Allocation and release balance

### 6.6 Output timing and safety invariants

```systemverilog
property p_one_cycle_pulse;
    @(posedge clk) disable iff (!rst_n)
    pulse |=> !pulse;
endproperty

property p_mutual_exclusion;
    @(posedge clk) disable iff (!rst_n)
    !(grant_a && grant_b);
endproperty
```

Plan checks for:

- One-cycle or bounded-width pulses
- Mutually exclusive grants or enables
- Required output ordering
- Safe default outputs
- No spurious output during idle or reset

## 7. SVA sampling and timing rules

SVA samples expressions at the clock event before nonblocking assignments from
that edge update registered signals. Every property must account for the DUT's
register boundaries.

```systemverilog
antecedent |-> consequent;  // same sampled clock
antecedent |=> consequent;  // next sampled clock
```

Use these operators deliberately:

| Construct | Intended use |
|---|---|
| `|->` | Consequent is required on the same sampled clock |
| `|=>` | Consequent is required on the next sampled clock |
| `$past(x)` | Previous sampled value of `x` |
| `$rose(x)` | Sampled low-to-high transition |
| `$fell(x)` | Sampled high-to-low transition |
| `$stable(x)` | No sampled change |
| `disable iff` | Abort/suppress obligations during reset or invalid operation |

For each property, document the expected sampling edge and latency. A property
should not be changed merely to make a failure disappear; confirm the intended
interface timing first.

## 8. Requirement-to-property matrix

The authoritative traceability lives in the generated JSON artifacts. A
human-readable matrix may be rendered using this structure:

| Check ID | Reference `field_path` | Requirement | Trigger/stimulus | Assertion | Cover point | Routing | Status |
|---|---|---|---|---|---|---|---|
| `CHK_001_reset` | `functional_requirements.[reset_behavior]` | `[behavior required after reset]` | `[bound reset sequence]` | `CHK_001_reset_A` | `CHK_001_reset_C` | Approved | Planned |
| `CHK_002_handshake` | `functional_requirements.[field]` | `[handshake requirement]` | `[request cases]` | `CHK_002_handshake_A` | `CHK_002_handshake_C` | Approved | Planned |
| `CHK_003_stability` | `standards_protocols.compliance_requirements[0]` | `[stability requirement]` | `[stall sequence]` | `CHK_003_stability_A` | `CHK_003_stability_C` | Gate-2 | Planned |
| `CHK_004_transition` | `structure_internals.internal_state_machines[0]` | `[transition requirement]` | `[transition trigger]` | `CHK_004_transition_A` | `CHK_004_transition_C` | Approved | Planned |

The generated JSON must additionally retain source text, source entries,
`doc_class`, confidence, routing reason, bound signals, and the reference digest.
Markdown is a rendered view and must not become a second source of truth.

Recommended status values:

- **Planned** — requirement identified; property not complete.
- **Implemented** — property compiles and is enabled.
- **Covered** — its meaningful trigger has a nonzero coverage hit.
- **Passing** — all relevant regressions pass.
- **Waived** — excluded with documented rationale and approval.

## 9. Assumptions and guarantees

Separate environmental assumptions from DUT obligations.

Examples of assumptions:

- Inputs are stable around the sampling edge.
- Only legal command encodings are driven.
- A producer holds `valid` and data while stalled.
- Reset eventually deasserts.
- Clocks continue toggling.

Examples of guarantees:

- The DUT never overflows an internal queue.
- Every accepted request eventually receives a response.
- Output data remains stable under backpressure.
- Two exclusive grants are never asserted together.

In simulation, invalid environment behavior may be checked with assertions so a
bad testbench fails visibly. In formal verification, environmental restrictions
normally use `assume property`, while DUT requirements use `assert property`.
Every assumption must be reviewed to ensure it does not hide a design defect.

## 10. Stimulus plan

Assertions monitor behavior but do not, by themselves, guarantee that useful
behavior occurs. Provide stimulus for:

| Priority | Scenario class | Examples |
|---|---|---|
| P0 | Reset | Startup, release, mid-transaction reset |
| P0 | Nominal operation | Every primary transaction type |
| P0 | Boundaries | Empty/full, minimum/maximum, first/last entry |
| P0 | Back-to-back activity | No idle gap between legal operations |
| P0 | Assertion triggers | At least one non-vacuous hit per required property |
| P1 | Stalls and delays | Backpressure, delayed response, variable latency |
| P1 | Simultaneous events | Push/pop, request/cancel, multiple candidates |
| P1 | Errors | Illegal command, timeout, overflow attempt, recovery |
| P1 | Parameter values | Minimum, maximum, and representative configurations |
| P2 | Long-duration behavior | Counter rollover, sustained traffic, repeated reset |

Stimulus may come from a SystemVerilog testbench, cocotb, UVM, constrained-random
simulation, or a formal engine. Keep the same checker enabled across flows where
tool support permits.

## 11. Assertion and functional coverage

For every important assertion antecedent, add a cover property proving that the
trigger occurred. A passing assertion whose antecedent never matched may be
vacuous.

```systemverilog
a_response: assert property (
    @(posedge clk) disable iff (!rst_n)
    request |=> response
);

c_response_attempt: cover property (
    @(posedge clk) disable iff (!rst_n)
    request
);

c_response_observed: cover property (
    @(posedge clk) disable iff (!rst_n)
    response
);
```

General coverage goals:

| Coverage item | Goal |
|---|---|
| Required assertion antecedents | Every trigger hit at least once |
| FSM states | Every legal state reached |
| FSM transitions | Every required legal transition reached |
| Interface operations | Every command/response type reached |
| Latency | Minimum, maximum, and representative latency reached |
| Boundaries | Empty/full and minimum/maximum conditions reached |
| Errors | Every supported error and recovery path reached |
| Reset | Startup and operational reset reached |
| Back-to-back behavior | Consecutive legal transactions reached |
| Parameters | Every supported or representative configuration reached |

With Verilator, use `--coverage-user` for explicit user coverage or `--coverage`
for broader supported coverage. Generate reports with `verilator_coverage`.
Commercial simulators may provide more complete assertion attempt, success,
failure, and vacuity reporting.

## 12. Formal verification strategy

Formal verification is a future or separate flow and is not the Phase-1 backend
identity defined by this active plan. The Testbench Generation Agent must not
silently replace the `verilator_sva` simulation backend with a formal tool.

Where formal tools are available:

1. Convert environmental restrictions into reviewed assumptions.
2. Prove safety properties first.
3. Add bounded progress and response properties.
4. Add covers to demonstrate reachability.
5. Review unreachable covers for over-constraint.
6. Inspect counterexamples at the first failing clock.
7. Track proof depth, convergence, and unproven properties.

Formal proof is particularly useful for arbiters, FIFOs, FSM transition safety,
protocol invariants, resource bounds, and corner cases difficult to reach in
simulation.

## 13. Debug procedure

When a property fails:

1. Record its name, message, timestamp, and active configuration.
2. Inspect the waveform around the antecedent and consequent clocks.
3. Account for SVA sampling and nonblocking assignment timing.
4. Confirm the property matches the written requirement.
5. Check whether the stimulus violated an environment assumption.
6. Determine whether the root cause is RTL, property, stimulus, or integration.
7. Fix the root cause and add a regression reproducing the failure.
8. Confirm the property trigger has coverage after the fix.

Do not weaken a valid property solely to make a regression pass.

## 14. Regression plan

Run SVA verification after changes to:

- RTL functionality
- Pipeline or output latency
- Reset behavior
- State encoding or transitions
- Interface protocols
- Parameters and widths
- Assertions or assumptions
- Testbench stimulus
- Simulator or verification-tool versions

A generic Verilator flow is:

```bash
verilator --lint-only --timing --assert [sources]
verilator --binary --timing --assert --coverage-user [sources]
./obj_dir/V<testbench_top> +verilator+coverage+file+coverage.dat
verilator_coverage --annotate coverage-report coverage.dat
```

Adapt the commands to the simulator, source layout, top module, and installed
Verilator version.

## 15. Entry criteria

Verification may begin when:

- The relevant specification is reviewed and versioned.
- Clock, reset, interface, and latency behavior are defined.
- RTL compiles and elaborates.
- Required internal observation points are identified.
- The testbench can provide clock, reset, and basic stimulus.
- Tool versions and supported SVA syntax are known.

## 16. Sign-off criteria

SVA verification is complete only when:

- Every in-scope requirement maps to an assertion or documented waiver.
- All required properties compile and remain enabled in regression.
- Lint has no unexplained diagnostics affecting property meaning.
- All required simulations pass without assertion failures.
- Every required assertion antecedent is covered non-vacuously.
- Required state, transition, boundary, error, reset, and parameter coverage goals
  are met.
- Formal properties are proven or their bounds and limitations are documented.
- All assumptions are reviewed and shown not to over-constrain the DUT.
- Failures, waivers, exclusions, and unsupported constructs are documented.
- Coverage reports and regression results are archived for the release.

## 17. Deliverables

- Approved SVA verification plan
- Requirement-to-property traceability matrix
- Checker and bind modules
- Simulation/formal assumptions
- Directed and randomized stimulus
- Assertion and functional coverage report
- Regression results
- Failure and waiver log
- Sign-off summary with residual risks

## 18. Residual-risk statement

Passing simulation proves that enabled properties held for executed stimulus; it
does not prove all possible input sequences. Coverage reduces the risk of
vacuous or untested behavior but is not proof. Formal verification can provide
exhaustive results only within the model, bounds, and assumptions used.

## 19. Testbench Generation Agent alignment

This plan maps onto the Phase-1 agent architecture as follows:

| Architecture stage | SVA-plan responsibility |
|---|---|
| Step 1 — test-plan generation | Read this plan to select `verilator_sva`; produce abstract directed checks only from behavioral reference facts; preserve provenance and stable check IDs |
| Step 2 — human gate | Block generation until all flagged facts and proposed checks are explicitly reviewed |
| Step 3 — deterministic binding | Bind DUT top, ports, clock, reset, widths, and approved hierarchical observations; apply timescale and watchdog policy; hard-fail unresolved signals |
| Step 4 — testbench generation | Emit `<dut_top_module>_tb.sv` using the required structure, SVA labels, trigger covers, diagnostics, VCD setup, and watchdog |
| Step 4.5 — deterministic compile-lint | Lint the generated testbench together with resolved DUT files using the canonical Verilator command; preserve findings; allow one LLM repair attempt |
| Oracle path | Apply the same backend, naming, lint, watchdog, waveform, and coverage conventions without mutating core-pipeline state |
| Q&A path | Explain the testbench read-only using check IDs, bound signals, properties, coverage, watchdogs, and source lines |

The JSON artifacts produced by the architecture remain authoritative. Any
Markdown plan or report is rendered for human review and must not drift from its
JSON twin.
