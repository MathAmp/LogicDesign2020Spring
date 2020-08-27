`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   08:36:04 05/13/2020
// Design Name:   JK
// Module Name:   /home/ise/ise_projects/HW8/JK_tb.v
// Project Name:  HW8
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: JK
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module JK_tb;

	// Inputs
	reg J;
	reg K;
	reg CLK;

	// Outputs
	wire Q;
	wire Q_L;

	always #100 CLK = ~CLK;

	// Instantiate the Unit Under Test (UUT)
	JK uut (
		.J(J), 
		.K(K), 
		.CLK(CLK), 
		.Q(Q), 
		.Q_L(Q_L)
	);

	initial begin
		// Initialize Inputs
		J = 0;
		K = 0;
		CLK = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

