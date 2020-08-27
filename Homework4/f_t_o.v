`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:24:57 04/14/2020
// Design Name:   four_to_one
// Module Name:   /home/ise/ise_projects/Homework4/f_t_o.v
// Project Name:  Homework4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: four_to_one
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module f_t_o;

	// Inputs
	reg G_L;
	reg [3:0] S;
	reg [1:0] X;

	// Outputs
	wire Y;

	// Instantiate the Unit Under Test (UUT)
	four_to_one uut (
		.G_L(G_L), 
		.S(S), 
		.X(X), 
		.Y(Y)
	);

	initial begin
		// Initialize Inputs
		G_L = 0;
		S = 4'b0111;
		X = 0;

		// Wait 100 ns for global reset to finish
		X=2'b00;
		#100;
		X=2'b01;
		#100;
		X=2'b10;
		#100;
		X=2'b11;
		#100;
		// Add stimulus here

	end
      
endmodule

