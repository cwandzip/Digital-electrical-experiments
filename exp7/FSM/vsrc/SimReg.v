module SimReg (clk, reset, state_din, state_dout, state_wen);
	input 			clk, reset, state_wen;
	input [3:0] 	state_din;
	output reg [3:0] 	state_dout;
/* verilator lint_off UNUSEDPARAM */
	parameter[3:0] S0 = 0, S1 = 1, S2 = 2, S3 = 3,
          S4 = 4, S5 = 5, S6 = 6, S7 = 7, S8 = 8;

	always @(posedge clk) begin
		if (!state_wen) 
			state_dout <= S0;
		else begin
			if (!reset) 
				state_dout <= S0;
			else begin
				state_dout <= state_din;
			end
		end
	end
/* verilator lint_off UNUSEDPARAM */

endmodule

