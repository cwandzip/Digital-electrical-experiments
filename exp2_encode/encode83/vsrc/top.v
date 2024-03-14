module top (x,en,y,flag,seg_o);
	input [7:0] x;
	input en;
	output [2:0] y;
	output flag;
	output [7:0] seg_o;

	wire [2:0] encode83_y;

	encode83 encode83 (
		.x(x),
		.en(en),
		.y(encode83_y),
		.flag(flag)
	);

	assign y = encode83_y;

	bcd7seg seg(.b(encode83_y), .h(seg_o));
endmodule
