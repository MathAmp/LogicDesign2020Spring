`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:41:24 05/06/2020 
// Design Name: 
// Module Name:    grslatch 
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
module grslatch(
		input ENA,
		input R,
		input S,
		output Q,
		output Q_L
    );
	 
	 wire R_temp, S_temp;
	 assign #10 R_temp = R && ENA;
	 assign #10 S_temp = S && ENA;

	 rslatch U2(.R(R_temp), .S(S_temp), .Q(Q), .Q_L(Q_L));


endmodule
