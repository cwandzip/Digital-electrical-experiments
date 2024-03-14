module top (clk, ps2_clk, ps2_data, clrn, 
			o_seg0, o_seg1, o_seg2, o_seg3, o_seg4, o_seg5, o_ready, o_overflow);
	input 			clk, ps2_clk, ps2_data, clrn;
	output [7:0] 	o_seg0, o_seg1, o_seg2, o_seg3, o_seg4, o_seg5;
	output			o_ready, o_overflow;
/* verilator lint_off WIDTHEXPAND */
	//output
	wire [7:0] data;
	wire ready;
	wire overflow;
	ps2_keyboard recv_data (
		.clk		(clk),
		.clrn		(clrn),
		.ps2_clk	(ps2_clk),
		.ps2_data	(ps2_data),
		.data		(data),
		.ready		(ready),
		.nextdata_n	(1'b0),
		.overflow	(overflow)
	);

	//input
	wire [7:0] recv2proc_data;
	wire recv2proc_ready;
	assign recv2proc_data = data;
	assign recv2proc_ready = ready;
	//output
	wire [7:0] to_segcode, to_segascii;
	// wire proc2recv_nextdata;
	wire sig_Release;
	kbd_data process_data (
		.clk			(clk), 
		.kbdfifo_data	(recv2proc_data), 
		.ready			(recv2proc_ready), 
		.code			(to_segcode), 
		.ascii			(to_segascii), 
		// .nextdata		(proc2recv_nextdata),
		.isRelease		(sig_Release)
	);

	seg_code seg01 (
		.code			(to_segcode), 
		.clk			(clk),
		.isRelease		(sig_Release),
		.bcdcode0		(o_seg0),
		.bcdcode1		(o_seg1)
	);

	seg_ascii seg23 (
		.ascii			(to_segascii), 
		.clk			(clk),
		.isRelease		(sig_Release),
		.bcdasc2		(o_seg2), 
		.bcdasc3		(o_seg3)
	);

	seg_cnt seg45 (
		.isRelease		(sig_Release), 
		.bcdcnt4		(o_seg4), 
		.bcdcnt5		(o_seg5)
	);

	assign o_ready = ready;
	assign o_overflow = overflow;
	/* verilator lint_off WIDTHEXPAND */
endmodule
