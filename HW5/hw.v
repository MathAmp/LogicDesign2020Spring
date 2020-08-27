`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:03:52 04/28/2020 
// Design Name: 
// Module Name:    hw 
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
module hw(
		input [3:0] in,
		output [7:0] out
    );
		seg7_display Seg7_display(
			.in(out)
		);

		reg [7:0] out_reg;
		
		assign out = out_reg;
		
		always@(in)
			begin
				case(in)
					4'b0000: out_reg = 8'b00111111;
					4'b0001: out_reg = 8'b00000001;
					4'b0010: out_reg = 8'b01000001;
					4'b0011: out_reg = 8'b01001001;
					4'b0100: out_reg = 8'b01100010;
					4'b0101: out_reg = 8'b01011100;
					4'b0110: out_reg = 8'b01010010;
					4'b0111: out_reg = 8'b01100100;
					4'b1000: out_reg = 8'b00110110;
					4'b1001: out_reg = 8'b01110110;
					default: out_reg = 8'b00000000;
				endcase
			end
endmodule
