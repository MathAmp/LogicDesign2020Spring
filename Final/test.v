`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   03:51:42 06/22/2020
// Design Name:   sign_extension
// Module Name:   /home/ise/ise_projects/Final/test.v
// Project Name:  Final
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: sign_extension
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test;

	// Inputs
	reg [3:0] x;

	reg br;
	// Outputs
	wire [7:0] extended_x;

	// Instantiate the Unit Under Test (UUT)
	sign_extension uut (
		.off(x),
		.br(br),
		.extended_off(extended_x)
	);

	initial begin
		// Initialize Inputs
		x = 0;
		br = 0;
		// Wait 100 ns for global reset to finish
		#100;
		x= 1;
		#100;
		x = 2;
		#100;
		x = 4'b1100;
        
		// Add stimulus here

	end
      
endmodule

