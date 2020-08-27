`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:41:59 04/21/2020 
// Design Name: 
// Module Name:    seg 
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
module seg(
    input [3:0] in,
    output [7:0] out
    );

	seg7_display Seg7_display(
		.in(out)
	);
	// Implement your code from here.
	
	reg [7:0] out_reg;
	
	assign out=out_reg;
	
	always@(in) 
		begin
			case(in)
				4'b0000: out_reg = 8'b00111111;
				4'b0001: out_reg = 8'b00000110;
				4'b0010: out_reg = 8'b01011011;
				4'b0011: out_reg = 8'b01001111;
				4'b0100: out_reg = 8'b01100110;
				4'b0101: out_reg = 8'b01101101;
				4'b0110: out_reg = 8'b01111101;
				4'b0111: out_reg = 8'b00000111;
				4'b1000: out_reg = 8'b01111111;
				4'b1001: out_reg = 8'b01100111;
				4'b1010: out_reg = 8'b01110111;
				4'b1011: out_reg = 8'b01111100;
				4'b1100: out_reg = 8'b00111001;
				4'b1101: out_reg = 8'b01011110;
				4'b1110: out_reg = 8'b01111001;
				4'b1111: out_reg = 8'b01110001;
				default: out_reg = 8'b00000000;
			endcase
		end
	
endmodule
