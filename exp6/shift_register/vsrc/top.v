module top (clk, sel, i_num, o_Q);
	input 			clk;
	input [2:0]		sel;
	input [7:0]		i_num;
	output [7:0] 	o_Q;

	reg [7:0] Q;

	always @(posedge clk) begin
		case (sel)
			3'b000: Q <= 8'b00000000;
			3'b001: Q <= i_num;
			3'b010: Q <= {1'b0, i_num[7:1]};		//logr
			3'b011: Q <= {i_num[6:0], 1'b0};		//logl
			3'b100: Q <= {i_num[7], i_num[7:1]};		//Arir
			3'b101: Q <= {i_num[7], Q[7:1]};		//串行输入，并行输出
			3'b110: Q <= {Q[0], Q[7:1]};			//cycle r
			3'b111: Q <= {Q[6:0], Q[7]};			//cycle l
		endcase
	end

	assign o_Q = Q;

endmodule
