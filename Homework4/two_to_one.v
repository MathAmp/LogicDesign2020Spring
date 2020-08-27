`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:33:13 04/13/2020 
// Design Name: 
// Module Name:    two_to_one 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module two_to_one(
		input G_L,
		input [1:0] S,
		input X,
		output Y
    );
	 wire X_L;
	 wire Y_A, Y_B;
	 wire G;
	 
	 assign G = ~G_L;
	 assign X_L	= ~X;
	 assign Y_A = G & S[1] & X;
	 assign Y_B = G & S[0] & X_L;
	 
	 assign Y = Y_A | Y_B;

endmodule
