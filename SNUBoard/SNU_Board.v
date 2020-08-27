`timescale 1ns / 1ps
`define X_SIZE 2048
`define Y_SIZE 2048
`define HIGH 255
`define LOW 0
`define LEVEL 256
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:31:42 04/20/2020 
// Design Name: 
// Module Name:    SNU_Board 
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
module SNU_Board(
	 //Tactile Switch
    input SW1, 
    input SW2,
    input SW3,
    input SW4,
    input SW5,
    input SW6,
	 //7 Segment Display
    output [6:0] J1,
    output [6:0] J2,
    output [6:0] J3,
    output [6:0] J4,
    output [6:0] J5,
    output [6:0] J6,
	 //LEDs
    output D1, //RED
    output D2, //YELLOW
    output D3, //GREEN
    output D4, //RED
    output D5, //YELLOW
    output D6  //GREEN
    );
	 //////////////////////////////////////////////
	 ////////Instantiate your modules here/////////
	 //////////////////////////////////////////////
	 
	 //wire [3:0] switchinput;
	 //assign switchinput = {SW3, SW4, SW5, SW6};
	 
	 //bcd u1(.in(switchinput/10), .out(J5));
	 //bcd u2(.in(switchinput%10), .out(J6));

	 wire temp;
	 FullAdder u1(.a(SW3), .b(SW5), .c_in(SW6), .s(D6), .c_out(temp));
	 FullAdder u2(.a(SW2), .b(SW4), .c_in(temp), .s(D5), .c_out(D4));
	 
	 //////////////////////////////////////////////
	 //////////////////////////////////////////////
	 //////////////////////////////////////////////
endmodule
