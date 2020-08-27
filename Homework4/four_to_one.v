`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:17:52 04/13/2020 
// Design Name: 
// Module Name:    four_to_one 
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
module four_to_one(
		input G_L,
		input [3:0] S,
		input [1:0] X,
		output Y
    );
	 wire [1:0] X_L;
	 wire [3:0] Y_S;
	 wire G;
	 
	 assign G = ~G_L;
	 assign X_L	= ~X;
	 assign Y_S[3] = G & S[3] & X[1] & X[0];
	 assign Y_S[2] = G & S[2] & X[1] & X_L[0];
	 assign Y_S[1] = G & S[1] & X_L[1] & X[0];
	 assign Y_S[0] = G & S[0] & X_L[1] & X_L[0];
	 
	 assign Y = Y_S[3] | Y_S[2] | Y_S[1] | Y_S[0];

endmodule
