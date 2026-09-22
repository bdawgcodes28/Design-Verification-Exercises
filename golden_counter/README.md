# 4-Bit Counter (Working Version)
This directory contains two things:

1. A SystemVerilog design of a 4-bit counter
2. A testbench written in SystemVerilog to test the functionality of the counter

## Counter Design Overview
The 4-bit counter has four signals or ports:

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

# Running through working example
Take a moment to look through both the counter design and the testbench. You can navigate to them using the following commands:
```bash
cd counter design
nano counter.sv
```
```bash
cd testbench
nano counter_tb.sv
```

## Running Verilator and GTKWave simulations
Navigate back to the root repository of the golden_counter directory. Once there, run the following command.
(Note, the --top-module test is the name of your testbench module)
```bash
verilator --binary --timing --trace --top-module test counter_design/counter.sv testbench/counter_tb.sv
```
This will create a directory titled "obj_dir." Once the directory has been created, run the following command.
```bash
./obj_dir/Vtest
```
This will create a .vcd file that contains the testbench waveform. To view the waveform, use the following command:
(Note, dump.vcd is declared inside of the testbench. You can name it whatever you choose when creating your own tests)
```bash
gtkwave dump.vcd
```
Once you run this command, a separate GTKWave window will open and you will be able to append signals to the view and see
how the design is behaving. View the last few minutes of [This video tutorial](https://www.youtube.com/watch?v=DF2nm_O0KW4)
to get an example.
