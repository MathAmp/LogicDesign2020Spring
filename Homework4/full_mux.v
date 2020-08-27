`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:39:02 04/13/2020 
// Design Name: 
// Module Name:    full_mux 
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
module full_mux(
		input G_L,
		input [15:0] S,
		input [3:0] X,
		output Y
    );
	 wire [3:0] Y_S;
	 
	 four_to_one F1(.G_L(G_L), .S(S[15:12]), .X(X[1:0]), .Y(Y_S[3]));
	 four_to_one F2(.G_L(G_L), .S(S[11:8]), .X(X[1:0]), .Y(Y_S[2]));
	 four_to_one F3(.G_L(G_L), .S(S[7:4]), .X(X[1:0]), .Y(Y_S[1]));
	 four_to_one F4(.G_L(G_L), .S(S[3:0]), .X(X[1:0]), .Y(Y_S[0]));

	 four_to_one F5(.G_L(G_L), .S(Y_S[3:0]), .X(X[3:2]), .Y(Y));
	 
endmodule
