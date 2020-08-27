`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:26:25 05/06/2020 
// Design Name: 
// Module Name:    rslatch 
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
module rslatch(
		input R,
		input S,
		output Q,
		output Q_L
    );
	 
	 assign #10 Q_L = ~(S || Q);
	 assign #10 Q = ~(R || Q_L);

endmodule
