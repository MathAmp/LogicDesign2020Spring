`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:41:29 05/13/2020 
// Design Name: 
// Module Name:    dflipflop 
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
module dflipflop(
		input D,
		input CLK,
		output reg Q,
		output reg Q_L
    );

	 always @ (negedge CLK)
		begin Q <= D; Q_L <= ~D; end
	

endmodule
