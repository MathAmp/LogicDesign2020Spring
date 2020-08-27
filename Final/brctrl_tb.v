`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   04:56:07 06/22/2020
// Design Name:   br_control_unit
// Module Name:   /home/ise/ise_projects/Final/brctrl_tb.v
// Project Name:  Final
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: br_control_unit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module brctrl_tb;

	// Inputs
	reg br;
	reg [1:0] brflag;
	reg [2:0] flag;

	// Outputs
	wire jump;

	// Instantiate the Unit Under Test (UUT)
	br_control_unit uut (
		.br(br), 
		.brflag(brflag), 
		.flag(flag), 
		.jump(jump)
	);

	initial begin
		// Initialize Inputs
		br = 0;
		brflag = 0;
		flag = 0;

		// Wait 100 ns for global reset to finish
		#100;
       
		br = 1;
		brflag = 1;
		flag = 3'b010;
		// Add stimulus here

	end
      
endmodule

