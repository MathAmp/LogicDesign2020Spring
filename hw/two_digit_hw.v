`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    06:22:02 05/27/2020 
// Design Name: 
// Module Name:    two_digit_hw 
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
module two_digit_hw(
		input clkin,
		input rst,
		input toggle,
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
		 if(rst) begin
			 one <= 4'd0;
			 ten <= 4'd0;
			 cnt <= 10'd0;
		 end
		 else if(rst == 0) begin
			 if(toggle == 0) begin
				 if(cnt == 10'd99) begin
					 cnt = 10'd0;
				 end
				 else begin
					 cnt = cnt + 1;
				 end
			 end
			 else begin
				 if(cnt == 10'd0) begin
					 cnt = 10'd99;
				 end
				 else begin
					 cnt = cnt - 1;
				 end
			 end
			 ten = cnt / 10;
			 one = cnt % 10;
		 end
	 end

endmodule



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

