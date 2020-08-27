`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:20:11 05/20/2020 
// Design Name: 
// Module Name:    freq_div 
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
module freq_div(
		input clr,
		input clkin,
		output reg clkout
    );
	 
	 reg [5:0] cnt;
	 
	 always @ (posedge clkin or posedge clr) begin
		if(clr) begin
			cnt <= 6'd0;
			clkout <= 0;
		end
		else if(cnt == 6'd24) begin
			cnt <= 6'd0;
			clkout <= ~clkout;
		end
		else begin
			cnt <= cnt + 1;
		end
	end
endmodule
