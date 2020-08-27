`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:15:54 04/29/2020
// Design Name:   FullAdder
// Module Name:   /home/ise/ise_projects/SNUBoard/FA.v
// Project Name:  SNUBoard
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: FullAdder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module FA;

	// Inputs
	reg a;
	reg b;
	reg c_in;

	// Outputs
	wire s;
	wire c_out;

	// Instantiate the Unit Under Test (UUT)
	FullAdder uut (
		.a(a), 
		.b(b), 
		.c_in(c_in), 
		.s(s), 
		.c_out(c_out)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;
		c_in = 0;
		#100;
      a = 0;
		b = 0;
		c_in = 1;
		#100;
		a = 0;
		b = 1;
		c_in = 0;
		#100;
		a = 0;
		b = 1;
		c_in = 1;
		#100;
		a = 1;
		b = 0;
		c_in = 0;
		#100;
      a = 1;
		b = 0;
		c_in = 1;
		#100;
		a = 1;
		b = 1;
		c_in = 0;
		#100;
		a = 1;
		b = 1;
		c_in = 1;
		
		
		// Add stimulus here

	end
      
endmodule

