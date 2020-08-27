`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:02:21 05/28/2020 
// Design Name: 
// Module Name:    prac 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module prac(
		input [1:0] mode,
		input opcode,
		input ain, bin, cin,
		output result, cout
	);
	
	reg [3:0] result_reg, cout_reg;
	wire n_ain, n_bin;
	assign n_ain = ~ain;
	assign n_bin = ~bin;
	
	always @(*) begin
		if(mode == 0) begin
			result_reg[0] <= ain;
			result_reg[1] <= n_ain;
			result_reg[2] <= ain ^ bin;
			result_reg[3] <= ain ~^ bin;
		end
		
		else if(mode == 1) begin
			{cout_reg[0], result_reg[0]} <= {0, ain};
			{cout_reg[1], result_reg[1]} <= ~{0, ain};
			{cout_reg[2], result_reg[2]} <= ain + bin;
			{cout_reg[3], result_reg[3]} <= (~ain) + bin;
		end

		else begin
			{cout_reg[0], result_reg[0]} <= ain + 1;
			{cout_reg[1], result_reg[1]} <= (~{0, ain}) + 1;
			{cout_reg[2], result_reg[2]} <= ain + bin + 1;
			{cout_reg[3], result_reg[3]} <= bin + ((~{0, ain}) + 1);
		end
	end

	assign result = result_reg;
	assign cout = cout_reg;

endmodule
