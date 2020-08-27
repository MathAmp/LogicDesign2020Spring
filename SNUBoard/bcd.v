`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:17:08 04/29/2020 
// Design Name: 
// Module Name:    bcd 
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
module bcd(
    input [3:0] in,
    output [6:0] out
    );

	// Implement your code from here.
	
	reg [6:0] out_reg;
	
	assign out=out_reg;
	
	always@(in) 
		begin
			case(in)
				4'b0000: out_reg = 7'b0111111;
				4'b0001: out_reg = 7'b0000110;
				4'b0010: out_reg = 7'b1011011;
				4'b0011: out_reg = 7'b1001111;
				4'b0100: out_reg = 7'b1100110;
				4'b0101: out_reg = 7'b1101101;
				4'b0110: out_reg = 7'b1111101;
				4'b0111: out_reg = 7'b0000111;
				4'b1000: out_reg = 7'b1111111;
				4'b1001: out_reg = 7'b1100111;
				default: out_reg = 7'b0000000;
			endcase
		end
	


endmodule
