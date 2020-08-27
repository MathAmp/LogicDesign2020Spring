`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:11:25 05/06/2020 
// Design Name: 
// Module Name:    oscillator 
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
module oscillator(
		input ENA,
		output CLK
    );

	 wire temp[1:0];
	 
	 assign #10 CLK = ~(ENA & temp[1]);
	 assign #10 temp[0] = ~CLK;
	 assign #10 temp[1] = ~temp[0];
		
endmodule
