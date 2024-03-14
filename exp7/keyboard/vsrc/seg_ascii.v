module seg_ascii (ascii, clk, isRelease, bcdasc2, bcdasc3);
	input [7:0]		ascii;
	input			clk, isRelease;
	output [7:0]	bcdasc2, bcdasc3;
	
	reg [7:0] ascii_t;
	always @(posedge clk) begin
		if (isRelease)
			ascii_t <= 8'b00000000;
		else
			ascii_t <= ascii;
	end

	bcd7seg bcd7seg2(
		.num 	(ascii_t[3:0]),
		.bcd 	(bcdasc2)
	);

	bcd7seg bcd7seg3(
		.num 	(ascii_t[7:4]),
		.bcd 	(bcdasc3)
	);
endmodule
