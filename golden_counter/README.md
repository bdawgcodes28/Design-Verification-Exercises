# 4-Bit Counter (Working Version)
This directory contains two things:

1. A SystemVerilog design of a 4-bit counter
2. A testbench written in SystemVerilog to test the functionality of the counter

## Counter Design Overview
The 4-bit counter has four signals or ports

1. clock input (clk)
2. reset input (rst_n)
3. enable input (en)
4. count output (count)

The counter increments its count value each time a positive clock edge is reached. The count will only
increase if the enable signal is active

### Notes
1. The clock, reset, and enable signals are what we call logic values. They can only hold numerical values of 1 or 0.
2. The enable signal (en) is active high. This means that when en = 1, the count will be enabled to increment
3. The reset signal (rst_n) is active low. This means that when rst_n = 0, the count will reset to 0

