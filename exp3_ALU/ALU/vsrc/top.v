module top (en, sw_op, sw_a, sw_b, led_flag, seg0, seg1);
	input 			en;
	input [2:0]		sw_op;
	input [3:0]		sw_a, sw_b;
	output [2:0]	led_flag;
	output [7:0]	seg0, seg1;

	wire [3:0] 		res_alu2bcd;
/* verilator lint_off WIDTHEXPAND */
	ALU ALU0 (
		.en			(en),
		.op			(sw_op),
		.a			(sw_a),
		.b			(sw_b),
		.result		(res_alu2bcd),
		.overflow	(led_flag[2]),
		.carry		(led_flag[1]),
		.zero		(led_flag[0])
	);
	
	bcd7seg u_bcd7seg(
		.res_num 	(res_alu2bcd),
		.o_seg0  	(seg0),
		.o_seg1  	(seg1)
	);
/* verilator lint_off WIDTHEXPAND */
endmodule
