`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   08:27:19 04/28/2020
// Design Name:   seg
// Module Name:   /home/ise/ise_projects/HW5/test.v
// Project Name:  HW5
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

module test;

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
		#10;
        
		// Add stimulus here
		#10;
		in = 4'b0000;
		#10;
		in = 4'b0001;
		#10;
		in = 4'b0010;
		#10;
		in = 4'b0011;
		#10;
		in = 4'b0100;
		#10;
		in = 4'b0101;
		#10;
		in = 4'b0110;
		#10;
		in = 4'b0111;
		#10;
		in = 4'b1000;
		#10;
		in = 4'b1001;
		#10;
		in = 4'b1010;
		#10;
		in = 4'b1011;
		#10;
		in = 4'b1100;
		#10;
		in = 4'b1101;
		#10;
		in = 4'b1110;
		#10;
		in = 4'b1111;
	end
      
endmodule

