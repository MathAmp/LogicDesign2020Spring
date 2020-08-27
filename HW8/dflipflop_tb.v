`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:00:57 05/13/2020
// Design Name:   dflipflop
// Module Name:   /home/ise/ise_projects/HW8/dflipflop_tb.v
// Project Name:  HW8
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: dflipflop
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module dflipflop_tb;

	// Inputs
	reg D;
	reg CLK;

	// Outputs
	wire Q;
	wire Q_L;

	always #100 CLK = ~CLK;
	
	// Instantiate the Unit Under Test (UUT)
	dflipflop uut (
		.D(D), 
		.CLK(CLK), 
		.Q(Q), 
		.Q_L(Q_L)
	);

	initial begin
		// Initialize Inputs
		D = 0;
		CLK = 1;

		// Wait 100 ns for global reset to finish
        
		// Add stimulus here
		D = 0;
		# 500;
		D = 1;
		# 500;
		D = 0;
		# 500;
		D = 1;
		# 600;
		D = 0;
		# 350;
		D = 1;
		# 300;

	end
      
endmodule

