`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   06:31:27 05/20/2020
// Design Name:   shift_reg_8b
// Module Name:   /home/ise/ise_projects/Shifter/shift_reg_8b_tb.v
// Project Name:  Shifter
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: shift_reg_8b
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module shift_reg_8b_tb;

	// Inputs
	reg CLRb;
	reg [1:0] S;
	reg CLK;
	reg SDL;
	reg SDR;
	reg [7:0] D;

	// Outputs
	wire [7:0] Q;

	always #20 CLK = ~CLK;

	// Instantiate the Unit Under Test (UUT)
	shift_reg_8b uut (
		.CLRb(CLRb), 
		.S(S), 
		.CLK(CLK), 
		.SDL(SDL), 
		.SDR(SDR), 
		.D(D), 
		.Q(Q)
	);

	initial begin
		// Initialize Inputs
		CLRb = 0;
		D = 8'b00101110;
		CLK = 0;
		SDL = 0;
		SDR = 0;
		S = 0;

		// Wait 100 ns for global reset to finish
		#106;
		CLRb = 1;
		#100;
		S = 2'b11;
		#200;
		S = 2'b10;
		#20;
		S = 2'b00;
		#180;
		S = 2'b10;
		SDL = 1;	
		#20;
		S = 2'b00;
		#200;
		S = 2'b01;
		#40;
		S = 2'b00;
		#100;
		S = 2'b01;
		SDR = 1;
		#38;
		S = 2'b00;
		#200;
		S = 2'b00;

		// Add stimulus here

	end
      
endmodule

