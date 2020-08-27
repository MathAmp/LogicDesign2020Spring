`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   05:18:55 05/06/2020
// Design Name:   alu
// Module Name:   /home/ise/ise_projects/hw7/alu_test.v
// Project Name:  hw7
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: alu
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module alu_test;

	// Inputs
	reg [1:0] mode;
	reg [1:0] opcode;
	reg ain;
	reg bin;

	// Outputs
	wire result;
	wire cout;

	// Instantiate the Unit Under Test (UUT)
	alu uut (
		.mode(mode), 
		.opcode(opcode), 
		.ain(ain), 
		.bin(bin), 
		.result(result), 
		.cout(cout)
	);

	initial begin
		// Initialize Inputs
		mode = 0;
		opcode = 0;
		ain = 0;
		bin = 0;

		// Wait 100 ns for global reset to finish
		#50;
		mode = 0;
		opcode = 0;
		ain = 0;
		bin = 0; 
		#50; 
		mode = 0;
		opcode = 0;
		ain = 0;
		bin = 1;
		#50;
		mode = 0;
		opcode = 0;
		ain = 1;
		bin = 0; 
		#50; 
		mode = 0;
		opcode = 0;
		ain = 1;
		bin = 1;

		#50;
		mode = 0;
		opcode = 2'b01;
		ain = 0;
		bin = 0; 
		#50; 
		mode = 0;
		opcode = 2'b01;
		ain = 0;
		bin = 1;
		#50;
		mode = 0;
		opcode = 2'b01;
		ain = 1;
		bin = 0; 
		#50; 
		mode = 0;
		opcode = 2'b01;
		ain = 1;
		bin = 1;
		
		#50;
		mode = 0;
		opcode = 2'b10;
		ain = 0;
		bin = 0; 
		#50; 
		mode = 0;
		opcode = 2'b10;
		ain = 0;
		bin = 1;
		#50;
		mode = 0;
		opcode = 2'b10;
		ain = 1;
		bin = 0; 
		#50; 
		mode = 0;
		opcode = 2'b10;
		ain = 1;
		bin = 1;
		
		#50;
		mode = 0;
		opcode = 2'b11;
		ain = 0;
		bin = 0; 
		#50; 
		mode = 0;
		opcode = 2'b11;
		ain = 0;
		bin = 1;
		#50;
		mode = 0;
		opcode = 2'b11;
		ain = 1;
		bin = 0; 
		#50; 
		mode = 0;
		opcode = 2'b11;
		ain = 1;
		bin = 1;
		// Add stimulus here

		#50;
		mode = 2'b01;
		opcode = 0;
		ain = 0;
		bin = 0; 
		#50; 
		mode = 2'b01;
		opcode = 0;
		ain = 0;
		bin = 1;
		#50;
		mode = 2'b01;
		opcode = 0;
		ain = 1;
		bin = 0; 
		#50; 
		mode = 2'b01;
		opcode = 0;
		ain = 1;
		bin = 1;

		#50;
		mode = 2'b01;
		opcode = 2'b01;
		ain = 0;
		bin = 0; 
		#50; 
		mode = 2'b01;
		opcode = 2'b01;
		ain = 0;
		bin = 1;
		#50;
		mode = 2'b01;
		opcode = 2'b01;
		ain = 1;
		bin = 0; 
		#50; 
		mode = 2'b01;
		opcode = 2'b01;
		ain = 1;
		bin = 1;
		
		#50;
		mode = 2'b01;
		opcode = 2'b10;
		ain = 0;
		bin = 0; 
		#50; 
		mode = 2'b01;
		opcode = 2'b10;
		ain = 0;
		bin = 1;
		#50;
		mode = 2'b01;
		opcode = 2'b10;
		ain = 1;
		bin = 0; 
		#50; 
		mode = 2'b01;
		opcode = 2'b10;
		ain = 1;
		bin = 1;
		
		#50;
		mode = 2'b01;
		opcode = 2'b11;
		ain = 0;
		bin = 0; 
		#50; 
		mode = 2'b01;
		opcode = 2'b11;
		ain = 0;
		bin = 1;
		#50;
		mode = 2'b01;
		opcode = 2'b11;
		ain = 1;
		bin = 0; 
		#50; 
		mode = 2'b01;
		opcode = 2'b11;
		ain = 1;
		bin = 1;


		#50;
		mode = 2'b10;
		opcode = 0;
		ain = 0;
		bin = 0; 
		#50; 
		mode = 2'b10;
		opcode = 0;
		ain = 0;
		bin = 1;
		#50;
		mode = 2'b10;
		opcode = 0;
		ain = 1;
		bin = 0; 
		#50; 
		mode = 2'b10;
		opcode = 0;
		ain = 1;
		bin = 1;

		#50;
		mode = 2'b10;
		opcode = 2'b01;
		ain = 0;
		bin = 0; 
		#50; 
		mode = 2'b10;
		opcode = 2'b01;
		ain = 0;
		bin = 1;
		#50;
		mode = 2'b10;
		opcode = 2'b01;
		ain = 1;
		bin = 0; 
		#50; 
		mode = 2'b10;
		opcode = 2'b01;
		ain = 1;
		bin = 1;
		
		#50;
		mode = 2'b10;
		opcode = 2'b10;
		ain = 0;
		bin = 0; 
		#50; 
		mode = 2'b10;
		opcode = 2'b10;
		ain = 0;
		bin = 1;
		#50;
		mode = 2'b10;
		opcode = 2'b10;
		ain = 1;
		bin = 0; 
		#50; 
		mode = 2'b10;
		opcode = 2'b10;
		ain = 1;
		bin = 1;
		
		#50;
		mode = 2'b10;
		opcode = 2'b11;
		ain = 0;
		bin = 0; 
		#50; 
		mode = 2'b10;
		opcode = 2'b11;
		ain = 0;
		bin = 1;
		#50;
		mode = 2'b10;
		opcode = 2'b11;
		ain = 1;
		bin = 0; 
		#50; 
		mode = 2'b10;
		opcode = 2'b11;
		ain = 1;
		bin = 1;
	end
      
endmodule

