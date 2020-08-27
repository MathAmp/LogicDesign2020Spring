`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:10:31 04/08/2020 
// Design Name: 
// Module Name:    v74x139_3 
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
module v74x139_3(
		 input G_L,
		 input A,
		 input B,
		 output [3:0] Y_L
    );
	 
	wire G;
	wire [1:0] In;
	reg [3:0] Y;
	
	assign G = ~G_L;
	assign In = {A, B};
	assign Y_L = Y;
	
	always @ (G or In)
		begin
			if(G == 1) begin
				if(A == 0 && B == 0) begin
					Y = 4'b1110;
				end
				else if(A == 0 && B == 1) begin
					Y = 4'b1101;
				end
				else if(A == 1 && B == 0) begin
					Y = 4'b1011;
				end
				else begin
					Y = 4'b0111;
				end
			end
			else begin
				Y = 4'b1111;
			end
		end

endmodule
