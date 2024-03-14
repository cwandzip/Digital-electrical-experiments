`timescale 1ns/1ns
module tb ();
	reg [3:0]	in_a, in_b;
	reg			Cin;
	wire		Carry, Zero, Overflow;
	wire [3:0]	Result;

	adder adder0(
		.in_a(in_a), .in_b(in_b), .Cin(Cin),
		.Carry(Carry), .Zero(Zero), .Overflow(Overflow), .Result(Result)
	);

	task check;
	input [3:0]	task_a, task_b;
	input 		task_Cin;
	input [3:0]	addres, res;
	input		addcf, addzf, addof, rescf, reszf, resof;
	begin
		if(addres != res)
		begin
			$display("Error:in_a=%d,in_b=%d,Cin=%b,result should be %d, get %d", task_a, task_b, task_Cin, res, addres);
		end

		if(addcf != rescf)
		begin
			$display("Error:in_a=%d,in_b=%d,Cin=%b, Carry should be %b, get %b", task_a, task_b, task_Cin, rescf, addcf);
		end

		if(addof != resof)
		begin
			$display("Error:in_a=%d,in_b=%d,Cin=%b, Overflow should be %b, get %b", task_a, task_b, task_Cin, resof, addof);
		end

		if(addzf != reszf)
		begin
			$display("Error:in_a=%d,in_b=%d,Cin=%b, Zero should be %b, get %b", task_a, task_b, task_Cin, reszf, addzf);
		end
	end
	endtask
	/* verilator lint_off WIDTHEXPAND */
	/* verilator lint_off WIDTHTRUNC */

	initial
	begin
		reg [4:0]	k;
		reg 		of, z, c;
		reg [4:0]	i, j;
		for(i = 5'b00000; i < 5'b10000; i=i+5'b00001) begin
			for(j = 5'b00000; j < 5'b10000; j=j+5'b00001) begin
				in_a = i[3:0]; in_b = j[3:0]; Cin = 0;
				k = in_a + in_b;
				of = (in_a[3] == (in_b[3] ^ {Cin})) && (k[3] != in_a[3]);
				z = (k[3:0]==4'b0000) ? 1 : 0;
				c = k[4];
				#20;
				check(in_a, in_b, Cin,
							Result[3:0], k[3:0], 
							Carry, Zero, Overflow,
							c, z, of);
			end
		end

		for(i = 5'b00000; i < 5'b10000; i=i+5'b00001) begin
			for(j = 5'b00000; j < 5'b10000; j=j+5'b00001) begin
				in_a = i[3:0]; in_b = j[3:0]; Cin = 1;
				k = in_a + (in_b ^ {4{Cin}}) + Cin;
				of = (in_a[3] == (in_b[3] ^ Cin)) && (k[3] != in_a[3]);
				z = (k[3:0]==4'b0000) ? 1 : 0;
				c = k[4];
				#20;
				check(in_a, in_b, Cin,
							Result[3:0], k[3:0], 
							Carry, Zero, Overflow,
							c, z, of);
			end
		end
	
	$display("Test Finish.");
	end
	/* verilator lint_off WIDTHEXPAND */
	/* verilator lint_off WIDTHTRUNC */


endmodule
