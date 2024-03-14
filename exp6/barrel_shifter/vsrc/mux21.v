module mux21 (sel, x1, x0, y);
	input	sel, x1, x0;
	output 	y;
/* verilator lint_off COMBDLY */
	reg data_y;
	always @(*) begin
		case (sel)
		1'b0: data_y <= x0;
		1'b1: data_y <= x1;
		endcase
	end
	assign y = data_y;
/* verilator lint_off COMBDLY */
endmodule
