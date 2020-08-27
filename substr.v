`timescale 1ns/1ps			

module seq_detector
(
	//Control signals
	input clk,	//Positive edge triggered.
	input reset,	//Reset all in 1

	//Data signals
	input seq,
	output detected
);
	//Declare your variables here.

	reg [1:0] state;

	always @(posedge clk)
	begin
		//Write your code here.
		if(reset) begin
			state <= 2'b00;
		end
		else begin
			if(state==2'b00) begin
				state <= (seq ? 2'b00 : 2'b01);
			end
			else if(state == 2'b01) begin
				state <= (seq ? 2'b10 : 2'b01);
			end
			else if(state == 2'b10) begin
				state <= (seq ? 2'b00 : 2'b11);
			end
			else begin
				state <= (seq ? 2'b10 : 2'b01);
			end
		end
	end

	//You may write some wiring code here.
	assign detected = (state == 2'b10) & (~seq);

endmodule
