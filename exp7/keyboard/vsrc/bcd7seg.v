module bcd7seg (num, bcd);
	input [3:0] 		num;
	output reg [7:0] 	bcd;

	// ---a---
	// |	  |
	// f	  b
	// ---g---
	// |	  |
	// e	  c
	// ---d---

	always @(*) begin
		case (num)
	//	4'b0000: bcd = ~ 8'b11111100;
		4'b0001: bcd = ~ 8'b01100000;
		4'b0010: bcd = ~ 8'b11011010;
		4'b0011: bcd = ~ 8'b11110010;
		4'b0100: bcd = ~ 8'b01100110;
		4'b0101: bcd = ~ 8'b10110110;
		4'b0110: bcd = ~ 8'b10111110;
		4'b0111: bcd = ~ 8'b11100000;
		4'b1000: bcd = ~ 8'b11111110;
		4'b1001: bcd = ~ 8'b11110110;
		4'b1010: bcd = ~ 8'b11101110;
		4'b1011: bcd = ~ 8'b00111110;
		4'b1100: bcd = ~ 8'b00011010;
		4'b1101: bcd = ~ 8'b01111010;
		4'b1110: bcd = ~ 8'b10011110;
		4'b1111: bcd = ~ 8'b10001110;
		default: bcd = ~ 8'b00000000;
		endcase
	end
endmodule
