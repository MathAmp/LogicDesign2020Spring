`timescale 1ns / 1ps

module vending_machine_tb;

	// Inputs
	reg clk;
	reg reset;
	reg nickel;
	reg dime;

	// Outputs
	wire [3:0] balance;
	wire open;

	// Instantiate the Unit Under Test (UUT)
	vending_machine uut (
		.clk(clk), 
		.reset(reset), 
		.nickel(nickel), 
		.dime(dime), 
		.balance(balance), 
		.open(open)
	);

	/* helper variables */
	integer i;
	reg [2:0] wrong_flag;

	// Test 1 I/O
	reg [0:4] test1_nickel;
	reg [0:4] test1_dime;
	reg [0:4] test1_reset;
	reg [0:4] test1_open;
	reg [3:0] test1_balance [0:4];

	// Test 2 I/O
	reg [0:2] test2_nickel;
	reg [0:2] test2_dime;
	reg [0:2] test2_reset;
	reg [0:2] test2_open;
	reg [3:0] test2_balance [0:2];
	
	// Test 3 I/O
	reg [0:11] test3_nickel;
	reg [0:11] test3_dime;
	reg [0:11] test3_reset;
	reg [0:11] test3_open;
	reg [3:0] test3_balance [0:11];
	
	initial begin

		/* Initialize reference output */
		wrong_flag = 3'd0;
		
		// Test 1 I/O
		test1_nickel = 5'b11110;
		test1_dime = 5'b00000;
		test1_reset = 5'b00001;		
		test1_open = 5'b00110;
		test1_balance[0] = 4'd5;
		test1_balance[1] = 4'd10;
		test1_balance[2] = 4'd15;
		test1_balance[3] = 4'd15;
		test1_balance[4] = 4'd0;
		
		// Test 2 I/O
		test2_nickel = 3'b000;
		test2_dime = 3'b110;
		test2_reset = 3'b001;
		test2_open = 3'b010;
		test2_balance[0] = 4'd10;
		test2_balance[1] = 4'd15;
		test2_balance[2] = 4'd0;

		// Test 3 I/O
		test3_nickel = 12'b010010000100;
		test3_dime = 12'b000100100010;
		test3_reset = 12'b000001000001;
		test3_open = 12'b000110000110;
		test3_balance[0] = 4'd0;
		test3_balance[1] = 4'd5;
		test3_balance[2] = 4'd5;
		test3_balance[3] = 4'd15;
		test3_balance[4] = 4'd15;
		test3_balance[5] = 4'd0;
		test3_balance[6] = 4'd10;
		test3_balance[7] = 4'd10;
		test3_balance[8] = 4'd10;
		test3_balance[9] = 4'd15;
		test3_balance[10] = 4'd15;
		test3_balance[11] = 4'd0;
	
		$display("Starting Vending Machine Test!");

		clk = 1; reset = 1; dime = 0; nickel = 0; #40
		reset = 0;	

		/* Test 1: N - N - N - N - R */
		$display("Test 1: Nickel - Nickel - Nickel - Nickel - Reset");

		for (i=0; i < 5; i = i+1) begin
			nickel = test1_nickel[i];
			dime = test1_dime[i];
			reset = test1_reset[i];	
			#1;
			
			if ((test1_open[i] !== open) || (test1_balance[i] !== balance)) begin
				$display("Test 1 failed at # %d: answer: %d, output: %d", $time, test1_balance[i], balance); 
				wrong_flag[0] = 1;
			end
			#39;
		end
	
		/* Test 2: D - D - R */
		$display("Test 2: Dime - Dime - Reset");
		
		for (i=0; i < 3; i = i+1) begin
			nickel = test2_nickel[i];
			dime = test2_dime[i];
			reset = test2_reset[i];
			#1;
			
			if ((test2_open[i] !== open) || (test2_balance[i] !== balance)) begin
				$display("Test 2 failed at # %d: answer: %d, output: %d", $time, test2_balance[i], balance); 
				wrong_flag[1] = 1;
			end
			#39;
		end
			
		/* Test 3: H - N - H - D - N - R - D - H - H - N - D - R */
		$display("Test 3: Hold - Nickel - Hold - Dime - Nickel - Reset - Dime - Hold - Hold - Nickel - Dime - Reset");
		
		for (i=0; i < 12; i = i+1) begin
			nickel = test3_nickel[i];
			dime = test3_dime[i];
			reset = test3_reset[i];
			#1;
			
			if ((test3_open[i] !== open) || (test3_balance[i] !== balance)) begin
				$display("Test 3 failed at # %d: answer: %d, output: %d", $time, test3_balance[i], balance); 
				wrong_flag[2] = 1;
			end
			#39;
		end
	
		$display("[Test Results]");
		for (i = 0; i < 3; i =i+1) begin
			if (wrong_flag[i] === 1) $display("Test %d failed", i);
			else $display("Test %d passed", i);
		end
		$finish;

	end
	
	always #20 clk <= ~clk;
      
endmodule
