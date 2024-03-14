module top (din, shamt, AorL, LorR, dout);
	input 				AorL, LorR;
	input [2:0]			shamt;
	input [7:0]			din;
	output reg [7:0]	dout;

	wire zero;
	assign zero = 0;
	wire mux21out;
	wire a0out, a1out, a2out, a3out, a4out, a5out, a6out, a7out;
	wire b0out, b1out, b2out, b3out, b4out, b5out, b6out, b7out;

	mux21 mux21_0 (
		.sel(AorL),
		.x0(zero),
		.x1(din[7]),
		.y(mux21out)
	);
	
	mux41 a0 (.sel({LorR, shamt[0]}), .x0(din[0]), .x1(din[1]), .x2(din[0]), .x3(zero), .y(a0out));
	mux41 a1 (.sel({LorR, shamt[0]}), .x0(din[1]), .x1(din[2]), .x2(din[1]), .x3(din[0]), .y(a1out));
	mux41 a2 (.sel({LorR, shamt[0]}), .x0(din[2]), .x1(din[3]), .x2(din[2]), .x3(din[1]), .y(a2out));
	mux41 a3 (.sel({LorR, shamt[0]}), .x0(din[3]), .x1(din[4]), .x2(din[3]), .x3(din[2]), .y(a3out));
	mux41 a4 (.sel({LorR, shamt[0]}), .x0(din[4]), .x1(din[5]), .x2(din[4]), .x3(din[3]), .y(a4out));
	mux41 a5 (.sel({LorR, shamt[0]}), .x0(din[5]), .x1(din[6]), .x2(din[5]), .x3(din[4]), .y(a5out));
	mux41 a6 (.sel({LorR, shamt[0]}), .x0(din[6]), .x1(din[7]), .x2(din[6]), .x3(din[5]), .y(a6out));
	mux41 a7 (.sel({LorR, shamt[0]}), .x0(din[7]), .x1(mux21out), .x2(din[7]), .x3(din[6]), .y(a7out));

	mux41 b0 (.sel({LorR, shamt[1]}), .x0(a0out), .x1(a2out), .x2(a0out), .x3(zero), .y(b0out));
	mux41 b1 (.sel({LorR, shamt[1]}), .x0(a1out), .x1(a3out), .x2(a1out), .x3(zero), .y(b1out));
	mux41 b2 (.sel({LorR, shamt[1]}), .x0(a2out), .x1(a4out), .x2(a2out), .x3(a0out), .y(b2out));
	mux41 b3 (.sel({LorR, shamt[1]}), .x0(a3out), .x1(a5out), .x2(a3out), .x3(a1out), .y(b3out));
	mux41 b4 (.sel({LorR, shamt[1]}), .x0(a4out), .x1(a6out), .x2(a4out), .x3(a2out), .y(b4out));
	mux41 b5 (.sel({LorR, shamt[1]}), .x0(a5out), .x1(a7out), .x2(a5out), .x3(a3out), .y(b5out));
	mux41 b6 (.sel({LorR, shamt[1]}), .x0(a6out), .x1(mux21out), .x2(a6out), .x3(a4out), .y(b6out));
	mux41 b7 (.sel({LorR, shamt[1]}), .x0(a7out), .x1(mux21out), .x2(a7out), .x3(a5out), .y(b7out));

	mux41 c0 (.sel({LorR, shamt[2]}), .x0(b0out), .x1(b4out), .x2(b0out), .x3(zero), .y(dout[0]));
	mux41 c1 (.sel({LorR, shamt[2]}), .x0(b1out), .x1(b5out), .x2(b1out), .x3(zero), .y(dout[1]));
	mux41 c2 (.sel({LorR, shamt[2]}), .x0(b2out), .x1(b6out), .x2(b2out), .x3(zero), .y(dout[2]));
	mux41 c3 (.sel({LorR, shamt[2]}), .x0(b3out), .x1(b7out), .x2(b3out), .x3(zero), .y(dout[3]));
	mux41 c4 (.sel({LorR, shamt[2]}), .x0(b4out), .x1(mux21out), .x2(b4out), .x3(b0out), .y(dout[4]));
	mux41 c5 (.sel({LorR, shamt[2]}), .x0(b5out), .x1(mux21out), .x2(b5out), .x3(b1out), .y(dout[5]));
	mux41 c6 (.sel({LorR, shamt[2]}), .x0(b6out), .x1(mux21out), .x2(b6out), .x3(zero), .y(dout[6]));
	mux41 c7 (.sel({LorR, shamt[2]}), .x0(b7out), .x1(mux21out), .x2(b7out), .x3(b7out), .y(dout[7]));


endmodule

