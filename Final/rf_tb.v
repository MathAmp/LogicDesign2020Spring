`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   04:24:13 06/22/2020
// Design Name:   reg_file
// Module Name:   /home/ise/ise_projects/Final/rf_tb.v
// Project Name:  Final
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: reg_file
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module rf_tb;

	// Inputs
	reg clk;
	reg areset;
	reg wen;
	reg [1:0] rs1;
	reg [1:0] rs2;
	reg [1:0] rd;
	reg [7:0] wdata;

	// Outputs
	wire [7:0] rs1_data;
	wire [7:0] rs2_data;

	always #5 clk = ~clk;

	// Instantiate the Unit Under Test (UUT)
	reg_file uut (
		.clk(clk), 
		.areset(areset), 
		.wen(wen), 
		.rs1(rs1), 
		.rs2(rs2), 
		.rd(rd), 
		.wdata(wdata), 
		.rs1_data(rs1_data), 
		.rs2_data(rs2_data)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		areset = 1;
		wen = 0;
		rs1 = 0;
		rs2 = 0;
		rd = 0;
		wdata = 0;

		// Wait 100 ns for global reset to finish
		#100;
      
		areset = 0;
		wen = 1;
		wdata = 8'b01010101;
		rd = 2;
		#200;
		wdata = 8'b00011110;
		rd = 3;
		#200;
		wen = 0;
		rd = 0;
		
		#300;
		rs1 = 2;
		rs2 = 3;
		// Add stimulus here

	end
      
endmodule

