`timescale 1ns / 1ns

///////////////////////////////////////////////
////////// THIS IS A TESTBENCH CODE ///////////
////////// DO NOT MODIFY BELOW CODES //////////
///////////////////////////////////////////////
///////////////////////////////////////////////

module stopwatch_tb;

	// Inputs
	reg clk;
	reg button;
	reg clr;
	reg select;

	// Outputs
	wire [6:0] seg_1;
	wire [6:0] seg_10;

	// Instantiate the Unit Under Test (UUT)
	stopwatch uut (
		.clk(clk), 
		.button(button), 
		.clr(clr), 
		.select(select), 
		.seg_1(seg_1), 
		.seg_10(seg_10)
	);

	wire [6:0] dec;
	reg[6:0] ans;
	reg pass;

	_7seg_to_dec stb(
		.seg_one(seg_1),
		.seg_ten(seg_10),
		.dec(dec)
	);
	
   always #10 clk = ~clk;

   initial begin
		$display("Initialization ...");
		pass <= 1;
		
		clk <= 0;
		clr <=1; #100;
      clr <=0;

		// Test Starts //////////////////////////////////////////////////
		/////////////////////////////////////////////////////////////////		

		$display("Test Starts");
		$display("Test 1 - Stopwatch output before finishing");
		$display("-------------");
		button <= 1; #100
		button <= 0; #100	
		for (ans = 0; ans < 50; ans = ans+1) begin
			if(dec == ans) $display("%d passed", ans);
			else begin
				$display("%d failed, your module returned %d", ans, dec);
				pass = 0;
			end
			#1000;
		end

		$display("Test 2 - Stopwatch output when select is given low");
		$display("-------------");
		for (ans = 50; ans < 100; ans = ans+1) begin
			if(ans == 60) begin
				button <= 1; #100;
				button <= 0; #900;
			end 
			else if(ans == 73) begin
				button <= 1; #100;
				button <= 0; #900;
			end
			else #1000;
		end
		
		select <= 1; #100;
		if (dec == 60) $display("60 passed");
		else begin
			$display("60 failed, your module returned %d", dec);
			pass = 0;
		end
		
		$display("Test 3 - Stopwatch output when select is given high");
		$display("-------------");
		select <= 0; #100;
		if (dec == 73) $display("73 passed");
		else begin
			$display("73 failed, your module returned %d", dec);
			pass = 0;
		end
		
		
		$display("Test Ends");
		if (pass) $display("Passed all cases!");
		else $display("Failed at some cases. See test result");
		
		$finish(0);
		
		// Test Ends /////////////////////////////////////////////////////
		/////////////////////////////////////////////////////////////////
		
	end
      
endmodule

module _7seg_to_dec(
	input [6:0]seg_one,
	input [6:0]seg_ten,
	output reg [6:0]dec
);
	// decimal digit
	reg[4:0] one;
	reg[6:0] ten;
	
	// Convert 7-segment info to decimal digit
	always @(seg_one or seg_ten) begin
		case(seg_one)
			7'b0111111: one <= 4'd0;
			7'b0000110: one <= 4'd1;
			7'b1011011: one <= 4'd2;
			7'b1001111: one <= 4'd3;
			7'b1100110: one <= 4'd4;
			7'b1101101: one <= 4'd5;
			7'b1111101: one <= 4'd6;
			7'b0000111: one <= 4'd7;
			7'b1111111: one <= 4'd8;
			7'b1101111: one <= 4'd9;
			default: one <= 4'd0;
      endcase	
		 case(seg_ten)
			7'b0111111: ten <= 7'd0;
			7'b0000110: ten <= 7'd10;
			7'b1011011: ten <= 7'd20;
			7'b1001111: ten <= 7'd30;
			7'b1100110: ten <= 7'd40;
			7'b1101101: ten <= 7'd50;
			7'b1111101: ten <= 7'd60;
			7'b0000111: ten <= 7'd70;
			7'b1111111: ten <= 7'd80;
			7'b1101111: ten <= 7'd90;
			default: ten <= 7'd0;
      endcase	
	end
			
	// Compute output
	always @(one or ten) begin
		dec <= one + ten;
	end
endmodule 