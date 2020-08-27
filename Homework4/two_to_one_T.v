`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:15:22 04/14/2020
// Design Name:   two_to_one
// Module Name:   /home/ise/ise_projects/Homework4/two_to_one_T.v
// Project Name:  Homework4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: two_to_one
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module two_to_one_T;

	// Inputs
	reg G_L;
	reg [1:0] S;
	reg X;

	// Outputs
	wire Y;

	// Instantiate the Unit Under Test (UUT)
	two_to_one uut (
		.G_L(G_L), 
		.S(S), 
		.X(X), 
		.Y(Y)
	);

	initial begin
		// Initialize Inputs
		G_L = 0;
		S = 0;
		X = 0;

		// Wait 100 ns for global reset to finish
		S = 2'b00;
		X = 0;
		#100;
		S = 2'b00;
		X = 1;
		#100;
		S = 2'b01;
		X = 0;
		#100;
		S = 2'b01;
		X = 1;
		#100;
		S = 2'b10;
		X = 0;
		#100;
		S = 2'b10;
		X = 1;
		#100;
		S = 2'b11;
		X = 0;
		#100;
		S = 2'b11;
		X = 1;
		#100;
        
		// Add stimulus here

	end
      
endmodule

