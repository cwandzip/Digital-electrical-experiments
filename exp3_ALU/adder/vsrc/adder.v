`timescale 1ns/1ns
module adder (in_a, in_b, Cin, Carry, Zero, Overflow, Result);
	input [3:0]		in_a, in_b;
	input 			Cin;
	output			Carry;
	output 			Zero;
	output 			Overflow;
	output [3:0]	Result;

	wire  [3:0] t_no_Cin; 
	/* verilator lint_off WIDTHEXPAND */
	/* verilator lint_off WIDTHTRUNC */
	assign t_no_Cin = {4{ Cin }} ^ in_b;
	assign {Carry, Result} = in_a + t_no_Cin + Cin;
	assign Overflow = (in_a[4-1] == t_no_Cin[4-1]) && (Result [4-1] != in_a[4-1]);
	
	assign Zero = ~(| Result);
	/* verilator lint_off WIDTHEXPAND */
	/* verilator lint_off WIDTHTRUNC */
endmodule
