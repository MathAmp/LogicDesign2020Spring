`timescale 1ns/1ps

module vending_machine
(
	input clk,
	input reset, // positive reset
	input nickel, // 5 cents
	input dime, // 10 cents
	output [3:0] balance, // current balance in the vending machine
	output open // soda output
);

	reg [1:0] state;

	always @(posedge clk) begin
		if(reset) begin
			state <= 2'b00;
		end
		else if (~(nickel & dime)) begin
			if(nickel | dime) begin
				state <= (((2 * dime + nickel + state) < 2'd3) ? (2 * dime + nickel + state) : 2'd3);
			end
		end
	end
	
	assign balance = state == 2'b00 ? 4'd0 : (state== 2'b01 ? 4'd5: (state==2'b10 ? 4'd10 : 4'd15));
	assign open = state == 2'd3;

endmodule
