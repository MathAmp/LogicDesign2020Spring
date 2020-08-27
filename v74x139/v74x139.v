`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:46:06 04/08/2020 
// Design Name: 
// Module Name:    v74x139 
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
module v74x139(
		 input G_L1,
		 input G_L2,
		 input A1,
		 input A2,
		 input B1,
		 input B2,
		 output [3:0] Y_L1,
		 output [3:0] Y_L2
    );
	 
	 v74x139_2 U1(.G_L(G_L1), .A(A1), .B(B1), .Y_L(Y_L1));
	 v74x139_2 U2(.G_L(G_L2), .A(A2), .B(B2), .Y_L(Y_L2));

endmodule
