`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:08:26 05/06/2020
// Design Name:   mslatch
// Module Name:   /home/ise/ise_projects/Sequential/mslatch_tb.v
// Project Name:  Sequential
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mslatch
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module mslatch_tb;

	// Inputs
	reg CLK;
	reg R;
	reg S;

	// Outputs
	wire Q;
	wire Q_L;

	// Instantiate the Unit Under Test (UUT)
	mslatch uut (
		.CLK(CLK), 
		.R(R), 
		.S(S), 
		.Q(Q), 
		.Q_L(Q_L)
	);
	//////////// mslatch tb ////////
	always #95 CLK = ~CLK;

	initial begin
		// Initialize Inputs
		CLK = 1;
		R = 0;
		S = 0;

		// Wait 100 ns for global reset to finish
		R = 0;
		S = 1;
		#500;
		R = 1;
		S = 0;
		#500;
		R = 0;
		S = 0;
		#500;
		R = 1;
		S = 1;
		#500;
		// Add stimulus here

	end
      
endmodule

