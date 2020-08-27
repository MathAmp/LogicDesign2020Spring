`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:18:03 05/28/2020
// Design Name:   prac
// Module Name:   /home/ise/ise_projects/MidtermPrepare/prac_tb.v
// Project Name:  MidtermPrepare
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: prac
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module prac_tb;

	// Inputs
	reg [1:0] mode;
	reg opcode;
	reg ain;
	reg bin;
	reg cin;

	// Outputs
	wire result;
	wire cout;

	// Instantiate the Unit Under Test (UUT)
	prac uut (
		.mode(mode), 
		.opcode(opcode), 
		.ain(ain), 
		.bin(bin), 
		.cin(cin), 
		.result(result), 
		.cout(cout)
	);

	initial begin
		// Initialize Inputs
		mode = 1;
		opcode = 0;
		ain = 0;
		bin = 0;
		cin = 0;

		// Wait 100 ns for global reset to finish
		#100;
      opcode = 0;
		ain = 5;
		bin = 6;
		#100;
      opcode = 1;
		#100;
      opcode = 2;
		#100;
      opcode = 3;
		
		
		// Add stimulus here

	end
      
endmodule

