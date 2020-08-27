`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:18:01 05/20/2020 
// Design Name: 
// Module Name:    two_digit 
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
module two_digit(
		input clkin,
		input rst,
		output [6:0] seg_one,
		output [6:0] seg_ten
    );
	 
	 reg [9:0] cnt;
	 
	 wire clk;
	 reg [3:0] one;
	 reg [3:0] ten;
	 
	 SevenSeg u2(.num(ten), .signal(seg_ten));
	 SevenSeg u3(.num(one), .signal(seg_one));
	 
	 freq_div u1(.clr(rst), .clkin(clkin), .clkout(clk));
	 
	 always @ (posedge clk or posedge rst) begin
		 if(rst == 1) begin
			 one <= 4'b0000;
			 ten <= 4'b0000;
			 cnt <= 10'd0;
		 end
		 else if(rst == 0) begin
			 if(cnt == 10'd99) begin
				 cnt = 10'd0;
			 end
			 else begin
				 cnt = cnt +1;
			 end
			 ten = cnt/10;
			 one = cnt%10;
		 end
	 end


endmodule
