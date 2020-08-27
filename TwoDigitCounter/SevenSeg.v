`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:46:12 05/20/2020 
// Design Name: 
// Module Name:    SevenSeg 
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
module SevenSeg(
		input [3:0] num,
		output reg [6:0] signal
    );

	 always @ (num) begin
		 case(num)
			 4'b0000: signal <= 7'b0111111;
			 4'b0001: signal <= 7'b0000110;
			 4'b0010: signal <= 7'b1011011;
			 4'b0011: signal <= 7'b1001111;
			 4'b0100: signal <= 7'b1100110;
			 4'b0101: signal <= 7'b1101101;
			 4'b0110: signal <= 7'b1111101;
			 4'b0111: signal <= 7'b0000111;
			 4'b1000: signal <= 7'b1111111;
			 4'b1001: signal <= 7'b1101111;
		 endcase
	 end

endmodule
