`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:57:34 05/20/2020
// Design Name:   two_digit
// Module Name:   /home/ise/ise_projects/TwoDigitCounter/total_tb.v
// Project Name:  TwoDigitCounter
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: two_digit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module total_tb;

	// Inputs
	reg clkin;
	reg rst;

	// Outputs
	wire [6:0] seg_one;
	wire [6:0] seg_ten;
	always #10 clkin = ~clkin;
	
	// Instantiate the Unit Under Test (UUT)
	two_digit uut (
		.clkin(clkin), 
		.rst(rst), 
		.seg_one(seg_one), 
		.seg_ten(seg_ten)
	);



	initial begin
		// Initialize Inputs
		clkin = 0;
		rst = 1;

		// Wait 100 ns for global reset to finish
		#100;
		rst = 0;
        
		// Add stimulus here

	end
      
endmodule

