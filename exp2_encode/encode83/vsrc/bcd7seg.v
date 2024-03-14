module bcd7seg(
  input  [2:0] b,
  output reg [7:0] h
);

always @(b)
begin
	case (b)
	0: h = ~ 8'b11111100;
	1: h = ~ 8'b01100000;
	2: h = ~ 8'b11011010;
	3: h = ~ 8'b11110010;
	4: h = ~ 8'b01100110;
	5: h = ~ 8'b10110110;
	6: h = ~ 8'b10111110;
	7: h = ~ 8'b11100000;
	default: h = ~ 8'b11111111;
	endcase
end
endmodule
