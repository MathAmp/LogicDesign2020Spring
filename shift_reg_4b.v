`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:25:51 05/11/2020 
// Design Name: 
// Module Name:    tester 
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
module shift_reg_4b(
    input CLRb,
    input [1:0] S,
    input CLK,
    input SDL,
    input SDR,
    input [3:0] D,
    output [3:0] Q
    );
	 //Implement your module here!
	
	 reg [3:0] reg_Q;
	 assign Q = reg_Q;
	 
	 always @ (posedge CLK)
	 begin
		if(CLRb == 0) begin
			reg_Q[3:0] <= 4'b0000;
			end
		else begin
			if(S == 2'b11) begin
				reg_Q[3:0] <= D[3:0];
			end
			else if(S == 2'b10) begin
				reg_Q[3] <= reg_Q[2];
				reg_Q[2] <= reg_Q[1];
				reg_Q[1] <= reg_Q[0];
				reg_Q[0] <= SDL;
			end
			else if(S == 2'b01) begin
				reg_Q[3] <= SDR;
				reg_Q[2:0] <= reg_Q[3:1];
			end
			else if(S == 2'b00) begin
				reg_Q <= reg_Q;
			end
		end
	 end
	
	
	 
endmodule
