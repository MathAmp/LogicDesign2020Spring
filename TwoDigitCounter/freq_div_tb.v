`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:25:24 05/20/2020
// Design Name:   freq_div
// Module Name:   /home/ise/ise_projects/TwoDigitCounter/freq_div_tb.v
// Project Name:  TwoDigitCounter
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: freq_div
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module freq_div_tb;

	// Inputs
	reg clr;
	reg clkin;

	// Outputs
	wire clkout;

	always #10 clkin = ~clkin;

	// Instantiate the Unit Under Test (UUT)
	freq_div uut (
		.clr(clr), 
		.clkin(clkin), 
		.clkout(clkout)
	);

	initial begin
		// Initialize Inputs
		clr = 1;
		clkin = 0;
		#100
		clr = 0;
		
		// Wait 100 ns for global reset to finish
		
        
		// Add stimulus here

	end
      
endmodule

