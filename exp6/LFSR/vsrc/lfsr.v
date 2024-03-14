module lfsr (clk, en, din, dout);
	input 				clk, en;
	input [7:0]			din;
	output [7:0] 		dout;

	reg 			h_lfsr, allzero;
	reg [7:0]		lfsrreg;
/* verilator lint_off BLKSEQ */

	always @(posedge clk) begin
		if (en) begin
			allzero = ~(| lfsrreg);
			h_lfsr = lfsrreg[4] ^ lfsrreg[3] ^ lfsrreg[2] ^ lfsrreg[0] ^ allzero;
			lfsrreg = {h_lfsr, lfsrreg[7:1]};
		end
		else begin
			lfsrreg = din;
		end
	end

	assign dout = lfsrreg;
/* verilator lint_off BLKSEQ */
endmodule
