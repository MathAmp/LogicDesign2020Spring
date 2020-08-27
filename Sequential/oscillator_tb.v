`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:14:09 05/06/2020
// Design Name:   oscillator
// Module Name:   /home/ise/ise_projects/Sequential/oscillator_tb.v
// Project Name:  Sequential
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: oscillator
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module oscillator_tb;

	// Inputs
	reg ENA;

	// Outputs
	wire CLK;

	// Instantiate the Unit Under Test (UUT)
	oscillator uut (
		.ENA(ENA), 
		.CLK(CLK)
	);
	////////////oscillator tb///////////////
	initial begin
		// Initialize Inputs
		ENA = 0;

		// Wait 100 ns for global reset to finish
		#100;
		
		ENA = 1;
		#200;
		
		ENA = 0;
		#100;
        
		// Add stimulus here

	end
      
endmodule

