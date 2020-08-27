`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:31:48 05/13/2020 
// Design Name: 
// Module Name:    JK 
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
module JK(
		input J,
		input K,
		input CLK,
		output Q,
		output Q_L
    );
	 
	 always @ (posedge CLK)
		case ({J,K})
			2'b00 : begin Q <= Q; Q_L <= Q_L; end
			2'b01 : begin Q <= 0; Q_L <= 1; end
			2'b10 : begin Q <= 1; Q_L <= 0; end
			2'b11 : begin Q <= Q_L; Q_L <= 0; end
		en

endmodule
