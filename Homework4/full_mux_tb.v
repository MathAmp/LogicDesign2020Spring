`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:17:26 04/13/2020
// Design Name:   full_mux
// Module Name:   /home/ise/ise_projects/Homework4/full_mux_tb.v
// Project Name:  Homework4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: full_mux
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module full_mux_tb;

	// Inputs
	reg G_L;
	reg [15:0] S;
	reg [3:0] X;

	// Outputs
	wire Y;

	// Instantiate the Unit Under Test (UUT)
	full_mux uut (
		.G_L(G_L), 
		.S(S), 
		.X(X), 
		.Y(Y)
	);

	initial begin
		// Initialize Inputs
		G_L = 0;
		S = 16'b1010101010101010;
		X = 0;
		
		// Add stimulus here
		
		X = 4'b0000;
		#100;
		X = 4'b0001;
		#100;
		X = 4'b0010;
		#100;
		X = 4'b0011;
		#100;
		X = 4'b0100;
		#100;
		X = 4'b0101;
		#100;
		X = 4'b0110;
		#100;
		X = 4'b0111;
		#100;
		X = 4'b1000;
		#100;
		X = 4'b1001;
		#100;
		X = 4'b1010;
		#100;
		X = 4'b1011;
		#100;
		X = 4'b1100;
		#100;
		X = 4'b1101;
		#100;
		X = 4'b1110;
		#100;
		X = 4'b1111;
		#100;
		

	end
      
endmodule

