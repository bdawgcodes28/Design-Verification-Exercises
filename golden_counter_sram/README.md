# 4-Bit Counter + SRAM (Working Version)
This directory contains two things:

1. A SystemVerilog design of a 4-bit counter connected to a simple SRAM memory cell
2. A testbench to test the functionality of the aformentioned design.

## Counter SRAM Design Overview
The SystemVerilog design file is comprised of three separate modules (4-bit counter, SRAM memory cell, & top-level module).
The two modules are connected by a top level module.

### 4-Bit Counter Module
The 4-bit counter has four signals or ports

1. Clock (clk)
2. Reset (rst_n)
3. Enable (en)
4. Count (count)

The counter increments its value on a positive clock edge (low to high). This will only happen when the enable
signal (en) is equal to 1 or is high.

### SRAM Memory Cell Module
The SRAM memory cell has 5 signals or ports

1. Clock (clk)
2. Write Enable (write_en) | are we enabling data to be written to a memory address?
3. Address (address) | 4-bit memory address
4. Write Data (write_data) | data to be written to a memory address
5. Read Data (read_data) | read data that is stored in a memory address

### Top Level Module
The top level module has the same signals from the 4-bit counter &
SRAM memory cell modules (minus internal signals), and instances of the 4-bit counter and SRAM memory cell.

## Notes
1. When the counter increments, the SRAM will index through its memory addresses
2. When the reset is triggered, the SRAM will return to address 0

# Running Working Example
Take a moment to look through and understand both the SV and testbench for the counter SRAM design. Once you have an
understanding of the design, executive the verilator simulation.
```bash
verilator --binary --timing --trace --top-module test counter_sram_design/counter_sram.sv testbench/counter_sram_tb.sv
```
```bash
./obj_dir/Vtest
```
```bash
gtkwave dump.vcd
```
Once you open the waveform window take a momemnt to view the signals and the behavior of the design. Experiment with changing certain
values in the design/testbench to see if you can predict the new behavior.
