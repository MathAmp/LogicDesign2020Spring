`timescale 1ns / 1ps

module shift_reg_8b(
	input CLRb,
	input [1:0] S,
	input CLK,
	input SDL,
	input SDR,
	input [7:0] D,
	output [7:0] Q
    );

    // Implement your module here!

	reg [7:0] Q_reg;
	assign Q = Q_reg;
	
	always @ (posedge CLK)
	begin
		if(CLRb == 0) begin
			Q_reg[7:0] <= 8'b00000000;
			end
		else begin
			if(S[1:0] == 2'b11) begin
				Q_reg[7:0] <= D[7:0];
			end
			else if(S[1:0] == 2'b10) begin
				Q_reg[7:1] <= Q_reg[6:0];
				Q_reg[0] <= SDL;
			end
			else if(S[1:0] == 2'b01) begin
				Q_reg[6:0] <= Q_reg[7:1];
				Q_reg[7] <= SDR;
			end
			else if(S[1:0] == 2'b00) begin
				Q_reg <= Q_reg;
			end
		end
	end

endmodule

