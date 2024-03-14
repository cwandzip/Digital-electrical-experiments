module ALU (en, op, a, b, result, overflow, carry, zero);
	input			en;
	input [2:0]		op;
	input [3:0]		a, b;
	output reg [3:0]	result;
	output reg		overflow, carry, zero;

	reg cin;
	reg [4:0] cf_and_res;
	reg [3:0] t_no_cin;
	integer i;

	/* verilator lint_off WIDTHEXPAND */
	/* verilator lint_off WIDTHTRUNC */
	/* verilator lint_off BLKSEQ */
	always @(*) begin

		cin = 0;
		cf_and_res = 5'b00000;
		t_no_cin = 4'b0000;
		if(en)begin
			case(op)
			//add
			3'b000:begin
				assign cin = 0;
				assign t_no_cin = {4{ cin }} ^ b;
				assign cf_and_res = a + t_no_cin + cin;
				assign carry = cf_and_res[4];
				assign result = cf_and_res[3:0];
				assign overflow = (a[4-1] == t_no_cin[4-1]) && (result [4-1] != a[4-1]);
				assign zero = ~(| result);
			end

			//sub
			3'b001:begin
				assign cin = 1;
				assign t_no_cin = {4{ cin }} ^ b;
				assign cf_and_res = a + t_no_cin + cin;
				assign carry = cf_and_res[4];
				assign result = cf_and_res[3:0];
				assign overflow = (a[4-1] == t_no_cin[4-1]) && (result [4-1] != a[4-1]);
				assign zero = ~(| result);
			end

			//not
			3'b010:begin
				assign overflow = 0;
				assign carry = 0;
				assign cin = 1;
				assign result = {4{ cin }} ^ a;
				assign zero = ~(| result);
			end

			//and
			3'b011:begin
				assign overflow = 0;
				assign carry = 0;

				for(i = 0; i <= 3; i = i + 1) begin
					if (a[i] == 1 && b[i] == 1)
						result[i] = 1;
					else
						result[i] = 0;
				end

				assign zero = ~(| result);
			end

			//or
			3'b100:begin
				assign overflow = 0;
				assign carry = 0;

				for(i = 0; i <= 3; i = i + 1) begin
					if (a[i] == 1 || b[i] == 1)
						result[i] = 1;
					else
						result[i] = 0;
				end

				assign zero = ~(| result);
			end

			//xor
			3'b101:begin
				assign overflow = 0;
				assign carry = 0;

				for(i = 0; i <= 3; i = i + 1) begin
					if (a[i] != b[i])
						result[i] = 1;
					else
						result[i] = 0;
				end

				assign zero = ~(| result);
			end

			//com
			3'b110:begin
				assign overflow = 0;
				assign carry = 0;

				if(a[3] > b[3])
					result = 4'b0001;
					//a为负数，b为正数
				else if(a[3] < b[3])
					result = 4'b0000;
					//a为正数，b为负数
				else if(a[2:0] < b[2:0])
					result = 4'b0001;
				else
					result = 4'b0000;
				
				assign zero = ~(| result);
			end

			//equal
			3'b111:begin
				assign overflow = 0;
				assign carry = 0;

				if(a == b)
					result = 4'b0001;
				else
					result = 4'b0000;

				assign zero = ~(| result);
			end
			endcase
		end
		else begin
			assign overflow = 0;
			assign carry = 0;
			assign zero = 0;
			assign result = 4'b0000;
		end
	end
	/* verilator lint_off WIDTHEXPAND */
	/* verilator lint_off WIDTHTRUNC */
/* verilator lint_off BLKSEQ */

endmodule
