`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:46:01 05/06/2020
// Design Name:   grslatch
// Module Name:   /home/ise/ise_projects/Sequential/grslatch_tb.v
// Project Name:  Sequential
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: grslatch
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module grslatch_tb;

	// Inputs
	reg ENA;
	reg R;
	reg S;

	// Outputs
	wire Q;
	wire Q_L;

	// Instantiate the Unit Under Test (UUT)
	grslatch uut (
		.ENA(ENA), 
		.R(R), 
		.S(S), 
		.Q(Q), 
		.Q_L(Q_L)
	);
	////////////grslatch tb///////////////
	always #95 ENA = ~ENA;

	initial begin
		// Initialize Inputs
		ENA = 1;
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

