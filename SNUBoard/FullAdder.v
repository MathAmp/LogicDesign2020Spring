`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:58:34 04/29/2020 
// Design Name: 
// Module Name:    FullAdder 
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
module FullAdder(
		input a,
		input b,
		input c_in,
		output s,
		output c_out
    );
	wire c1, c2, s_temp;
	HalfAdder U1(.a(a), .b(b), .c(c1), .s(s_temp));
	HalfAdder U2(.a(c_in), .b(s_temp), .c(c2), .s(s));
	assign c_out = c1 | c2;

endmodule
