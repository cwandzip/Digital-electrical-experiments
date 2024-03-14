module seg_code (code, clk, isRelease, bcdcode0, bcdcode1);
	input [7:0]		code;
	input 			clk, isRelease;
	output [7:0]	bcdcode0, bcdcode1;

	reg [7:0] code_t;
	always @(posedge clk) begin
		if (isRelease)
			code_t <= 8'b00000000;
		else
			code_t <= code;
	end

	bcd7seg bcd7seg0(
		.num 	(code_t[3:0]),
		.bcd 	(bcdcode0)
	);

	bcd7seg bcd7seg1(
		.num 	(code_t[7:4]),
		.bcd 	(bcdcode1)
	);

endmodule
