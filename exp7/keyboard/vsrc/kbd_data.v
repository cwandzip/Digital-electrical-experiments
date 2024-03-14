module kbd_data (clk, kbdfifo_data, ready, code, ascii, isRelease);
	input 				clk, ready;
	input [7:0] 		kbdfifo_data;
	output reg [7:0]	code, ascii;
	output reg 			isRelease;
/* verilator lint_off WIDTHTRUNC */
/* verilator lint_off UNUSEDSIGNAL */
	reg [23:0] data_buffer;
	reg [7:0] curdata = 8'b00000000;
	reg [7:0] predata = 8'b00000000;


	always @(posedge ready) begin
		curdata <= kbdfifo_data;
		predata <= curdata;
	end
	always @(posedge clk) begin
		if (ready) begin
			isRelease <= 1'b0;
			//去掉重复键码
			if ((data_buffer[15:8] == 8'hf0) || (curdata != predata)) begin
				data_buffer[23:16] <= data_buffer[15:8];
				data_buffer[15:8] <= predata[7:0];
				data_buffer[7:0] <= curdata[7:0];
			end
			$display("R = %h", isRelease);
		end 
		else begin
			//有按键松开
			if (data_buffer[15:8] == 8'hf0) begin
				isRelease <= 1'b1;
				$display("R = %h", isRelease);
			end 
		end
	end
	assign code = data_buffer[7:0];

	data2ascii data2ascii0 (
		.code		(data_buffer[7:0]), 
		.ascii 		(ascii)
	);
/* verilator lint_off WIDTHTRUNC */
/* verilator lint_off UNUSEDSIGNAL */
endmodule
