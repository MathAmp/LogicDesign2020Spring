`timescale 1ns / 1ns

module two_digit_hw_tb;

	// Inputs
	reg clkin;
	reg clr;
	reg toggle;
	// Outputs
	wire [6:0] sec;
	wire [6:0] tensec;

	// Instantiate the Unit Under Test (UUT)
	two_digit_hw uut (
		.clkin(clkin), 
		.rst(clr), 
		.toggle(toggle),
		.seg_one(sec), 
		.seg_ten(tensec)
	);
	
	wire [6:0] dec;
	reg[6:0] ans;
	reg pass;

	_7seg_to_dec_hw stb(
		.seg_one(sec),
		.seg_ten(tensec),
		.dec(dec)
	);
	
	////////////////////////////////////////////
	// User Code - Implement proper input clock //
   always #10 clkin = ~clkin;
	////////////////////////////////////////////

   initial begin
		/////////////////////////////////////////////////////////////////
		// Default Initilaization - DON'T TOUCH /////////////////////////
		clkin <= 0;
		toggle <= 0;
      clr =1; #40;
      clr =0;
		pass <= 1;
		/////////////////////////////////////////////////////////////////
		
		
		/////////////////////////////////////////////////////////////////
		// TEST CODE - DON'T TOUCH! /////////////////////////////////////
		// compare output every 1us 
		$display("Test Starts");
		$display("Test 1 - 0-49");
		$display("-------------");
		for (ans = 0; ans < 50; ans = ans+1) begin
			if(dec == ans) $display("%d passed", ans);
			else begin
				if (dec == -1 || dec == -2) $display("%d failed, check your 7-segment table", ans);
				else $display("%d failed, your module returned %d", ans, dec);
				pass = 0;
			end
			#1000;
		end
		
		$display("Test 2 - 0-99 after reset");
		$display("--------------------------");
		clr = 1; #40; clr = 0;
		for (ans = 0; ans < 100; ans = ans+1) begin
			if(dec == ans) $display("%d passed", ans);
			else begin
				if (dec == -1 || dec == -2) $display("%d failed, check your 7-segment table", ans);
				else $display("%d failed, your module returned %d", ans, dec);
				pass = 0;
			end
			#1000;
		end
		
		$display("Test 3 - Back to start after 99");
		for (ans = 0; ans < 50; ans = ans+1) begin
			if(dec == ans) $display("%d passed", ans);
			else begin
				if (dec == -1 || dec == -2) $display("%d failed, check your 7-segment table", ans);
				else $display("%d failed, your module returned %d", ans, dec);
				pass = 0;
			end
			#1000;
		end
		
		$display("Test 4 - Toggle test 0 - 66 - 0 - 66 ");
		$display("--------------------------");
		clr = 1; #40; clr = 0;
		for (ans = 0; ans < 66; ans = ans+1) begin
			if(dec == ans) $display("%d passed", ans);
			else begin
				if (dec == -1 || dec == -2) $display("%d failed, check your 7-segment table", ans);
				else $display("%d failed, your module returned %d", ans, dec);
				pass = 0;
			end
			#1000;
		end
		toggle = 1;
		for (ans = 66; ans > 0; ans = ans-1) begin
			if(dec == ans) $display("%d passed", ans);
			else begin
				if (dec == -1 || dec == -2) $display("%d failed, check your 7-segment table", ans);
				else $display("%d failed, your module returned %d", ans, dec);
				pass = 0;
			end
			#1000;
		end
		if(dec == 0) $display("0 passed");
		else begin
			if (dec == -1 || dec == -2) $display("0 failed, check your 7-segment table");
			else $display("0 failed, your module returned %d", dec);
			pass = 0;
		end
		#1000;
		for (ans = 99; ans > 65; ans = ans-1) begin
			if(dec == ans) $display("%d passed", ans);
			else begin
				if (dec == -1 || dec == -2) $display("%d failed, check your 7-segment table", ans);
				else $display("%d failed, your module returned %d", ans, dec);
				pass = 0;
			end
			#1000;
		end
		
		if (pass) $display("Passed all cases!");
		else $display("Failed at some cases. See test result");
		$display("Test Ends");
		
		$finish(0);
		// Test End /////////////////////////////////////////////////////
		/////////////////////////////////////////////////////////////////
		
	end
      
endmodule

module _7seg_to_dec_hw(
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
			default: one <= -1;
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
			default: ten <= -1;
      endcase	
	end
			
	// Compute output
	always @(one or ten) begin
		dec <= one + ten;
	end
endmodule 