// testbe1nch to test the functionality of 4-bit counter
`timescale 1ns/1ps

module counter_tb();

	// inputs and outputs
	logic clk; // clock signal
	logic rst_n; // active low reset
	logic en; // enable signal
	logic [3:0] count;

	// instantiate a counter and map all variables
	counter dut(
		.clk(clk),
		.rst_n(rst_n),
		.en(en),
		.count(count)
	);

	// initialize clock and reset to 0
	// toggle clock every 20 nanoseconds
	initial clk = 0;
	initial rst_n = 0;
	always #10 clk = ~clk;

	initial begin
		// dumpfile to view signals
		$dumpfile("dump.vcd");
		// dump all signals in the test bench
		$dumpvars(0, counter_tb);

		// test cases
		en = 0;
		rst_n = 1;
		#10
		en = 1;
		#100
		rst_n = 0;
		#10
		$finish; // explicitly end simulation

	end
endmodule
