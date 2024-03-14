module bcd7seg (res_num, o_seg0, o_seg1);
	input [3:0]			res_num;
	output reg [7:0]	o_seg0, o_seg1;

	/* verilator lint_off WIDTHEXPAND */
	/* verilator lint_off WIDTHTRUNC */
	always @(*)
	begin
		//flag
		o_seg1 = res_num[3]? (~ 8'b00000010):(~ 8'b00000000);

		//num
		case (res_num[2:0])
		3'b000: o_seg0 = ~ 8'b11111100;
		3'b001: o_seg0 = res_num[3]? (~ 8'b11100000):(~ 8'b01100000);
		3'b010: o_seg0 = res_num[3]? (~ 8'b10111110):(~ 8'b11011010);
		3'b011: o_seg0 = res_num[3]? (~ 8'b10110110):(~ 8'b11110010);
		3'b100: o_seg0 = res_num[3]? (~ 8'b01100110):(~ 8'b01100110);
		3'b101: o_seg0 = res_num[3]? (~ 8'b11110010):(~ 8'b10110110);
		3'b110: o_seg0 = res_num[3]? (~ 8'b11011010):(~ 8'b10111110);
		3'b111: o_seg0 = res_num[3]? (~ 8'b01100000):(~ 8'b11100000);
		default: o_seg0 = ~ 8'b11111111;
		endcase
	end
	/* verilator lint_off WIDTHEXPAND */
	/* verilator lint_off WIDTHTRUNC */

endmodule
