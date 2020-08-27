`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:39:04 04/22/2020
// Design Name:   seg
// Module Name:   /home/ise/ise_projects/BCDtoDec/seg_tb.v
// Project Name:  BCDtoDec
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: seg
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module seg_tb;

	// Inputs
	reg [3:0] in;

	// Outputs
	wire [7:0] out;

	// Instantiate the Unit Under Test (UUT)
	seg uut (
		.in(in), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		in = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		in = 4'b0000;
		#50;
		in = 4'b0001;
		#50;
		in = 4'b0010;
		#50;
		in = 4'b0011;
		#50;
		in = 4'b0100;
		#50;
		in = 4'b0101;
		#50;
		in = 4'b0110;
		#50;
		in = 4'b0111;
		#50;
		in = 4'b1000;
		#50;
		in = 4'b1001;
		#50;
		in = 4'b1010;
		#50;
		in = 4'b1011;
		#50;
		in = 4'b1100;
		#50;
		in = 4'b1101;
		#50;
		in = 4'b1110;
		#50;
		in = 4'b1111;
		#50;
	end
      
endmodule

