`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:48:01 04/08/2020 
// Design Name: 
// Module Name:    v74x139_1 
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
module v74x139_1(
    input G_L,
    input A,
    input B,
    output Y0_L,
	 output Y1_L,
	 output Y2_L,
	 output Y3_L
    );
	 wire G;
	 wire A_L, B_L;
	 wire A_1, B_1;
	 
	 not U1(G, G_L);
	 not U2(A_L, A);
	 not U3(B_L, B);
	 not U4(A_1, A_L);
	 not U5(B_1, B_L);
	 
	 nand nand0(Y0_L, A_L, B_L, G);
	 nand nand1(Y1_L, A_L, B_1, G);
	 nand nand2(Y2_L, A_1, B_L, G);
	 nand nand3(Y3_L, A_1, B_1, G);

endmodule
