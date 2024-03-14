module mux41 (sel, x0, x1, x2, x3, y);
	input [1:0]	sel;
	input 		x0, x1, x2, x3;
	output		y;
/* verilator lint_off COMBDLY */
	reg data_y;
	always @(*) begin
		case (sel)
			2'b00: data_y <= x0;
			2'b01: data_y <= x1;
			2'b10: data_y <= x2;
			2'b11: data_y <= x3;
		endcase
	end
	assign y = data_y;
/* verilator lint_off COMBDLY */
endmodule
