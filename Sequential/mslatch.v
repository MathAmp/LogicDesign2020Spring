`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:57:08 05/06/2020 
// Design Name: 
// Module Name:    mslatch 
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
module mslatch(
		input CLK,
		input R,
		input S,
		output Q,
		output Q_L
    );
	 
	 wire R_temp, S_temp, not_CLK;
	 
	 grslatch U1(.ENA(CLK), .R(R), .S(S), .Q(R_temp), .Q_L(S_temp));
	 assign #10 not_CLK = ~CLK;
	 grslatch U2(.ENA(not_CLK), .R(R_temp), .S(S_temp), .Q(Q), .Q_L(Q_L));

endmodule
