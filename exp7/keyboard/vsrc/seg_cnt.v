module seg_cnt (isRelease, bcdcnt4, bcdcnt5);
	input 			isRelease;
	output [7:0]	bcdcnt4, bcdcnt5;
	
	reg [7:0] cnt_t = 8'b00000000;
	always @(negedge isRelease) begin
		cnt_t <= cnt_t + 8'b00000001;
	end

	bcd7seg bcd7seg4(
		.num 	(cnt_t[3:0]),
		.bcd 	(bcdcnt4)
	);

	bcd7seg bcd7seg5(
		.num 	(cnt_t[7:4]),
		.bcd 	(bcdcnt5)
	);

endmodule
