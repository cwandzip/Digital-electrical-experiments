module top (clk, en, in, out0, out1);
	input 			clk, en;
	input [7:0] 	in;
	output [7:0] 	out0, out1;

	lfsr lfsr0 (
		.clk 	(clk),
		.en 	(en),
		.din 	(in),
		.dout 	(lfsr2bcd)
	);

	wire [7:0] lfsr2bcd;

	bcd7seg bcd7seg0 (
		.num 	(lfsr2bcd[3:0]),
		.bcd 	(out0)
	);

	bcd7seg bcd7seg1 (
		.num 	(lfsr2bcd[7:4]),
		.bcd 	(out1)
	);

endmodule
