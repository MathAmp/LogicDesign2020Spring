`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:39:28 05/06/2020
// Design Name:   rslatch
// Module Name:   /home/ise/ise_projects/Sequential/rslatch_tb.v
// Project Name:  Sequential
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: rslatch
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module rslatch_tb;

	// Inputs
	reg R;
	reg S;

	// Outputs
	wire Q;
	wire Q_L;

	// Instantiate the Unit Under Test (UUT)
	rslatch uut (
		.R(R), 
		.S(S), 
		.Q(Q), 
		.Q_L(Q_L)
	);
	////////////rslatch tb///////////////
	initial begin
		// Initialize Inputs
		R = 0;
		S = 0;

		// Wait 100 ns for global reset to finish
		#100;
      
		
		// Add stimulus here
		R = 0;
		S = 1;
		#100
		
		R = 1;
		S = 0;
		#100
		
		R = 1;
		S = 1;
		#100
		
		R = 0;
		S = 0;


	end
      
endmodule

