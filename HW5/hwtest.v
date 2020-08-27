`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   08:12:01 04/28/2020
// Design Name:   hw
// Module Name:   /home/ise/ise_projects/HW5/hwtest.v
// Project Name:  HW5
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: hw
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module hwtest;

	// Inputs
	reg [3:0] in;

	// Outputs
	wire [7:0] out;

	// Instantiate the Unit Under Test (UUT)
	hw uut (
		.in(in), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		in = 0;

		// Wait 100 ns for global reset to finish
		#100;
		in = 4'b0000;
		#100;
		in = 4'b0001;
		#100;
		in = 4'b0010;
		#100;
		in = 4'b0011;
		#100;
		in = 4'b0100;
		#100;
		in = 4'b0101;
		#100;
		in = 4'b0110;
		#100;
		in = 4'b0111;
		#100;
		in = 4'b1000;
		#100;
		in = 4'b1001;
		#100;
		in = 4'b1010;
		#100;
		in = 4'b1011;
		#100;
		in = 4'b1100;
		#100;
		in = 4'b1101;
		#100;
		in = 4'b1110;
		#100;
		in = 4'b1111;
        
		// Add stimulus here

	end
      
endmodule

