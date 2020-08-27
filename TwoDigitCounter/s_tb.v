`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:09:33 05/20/2020
// Design Name:   SevenSeg
// Module Name:   /home/ise/ise_projects/TwoDigitCounter/s_tb.v
// Project Name:  TwoDigitCounter
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: SevenSeg
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module s_tb;

	// Inputs
	reg [3:0] num;

	// Outputs
	wire [6:0] signal;

	// Instantiate the Unit Under Test (UUT)
	SevenSeg uut (
		.num(num), 
		.signal(signal)
	);

	initial begin
		// Initialize Inputs
		num = 25/3;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

