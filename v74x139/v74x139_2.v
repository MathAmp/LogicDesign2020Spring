`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:04:48 04/08/2020 
// Design Name: 
// Module Name:    v74x139_2 
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
module v74x139_2(
	 input G_L,
	 input A,
	 input B,
	 output [3:0] Y_L
    );
	 wire G;
	 wire A_L, B_L;
	
	 assign G = ~G_L;
	 assign A_L = ~A;
	 assign B_L = ~B;
	 
	 assign Y_L[0] = ~(A_L & B_L & G);
	 assign Y_L[1] = ~(A_L & B   & G);
	 assign Y_L[2] = ~(A   & B_L & G);
	 assign Y_L[3] = ~(A   & B   & G);
	 

endmodule
