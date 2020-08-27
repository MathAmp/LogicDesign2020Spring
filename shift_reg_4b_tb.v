`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:40:57 05/10/2020
// Design Name:   shift_reg_4b
// Module Name:   /home/ksw/TA/LAB08/shift_reg_4b_tb.v
// Project Name:  LAB08
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: shift_reg_4b
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module shift_reg_4b_tb;
	//Do not modify!
	// Inputs
	reg CLRb;
	reg [1:0] S;
	reg CLK;
	reg SDL;
	reg SDR;
	reg [3:0] D;

	// Outputs
	wire [3:0] Q;
	wire [3:0] T;
	// Instantiate the Unit Under Test (UUT)
	ref uut (
		.CLRb(CLRb), 
		.S(S), 
		.CLK(CLK), 
		.SDL(SDL), 
		.SDR(SDR), 
		.D(D), 
		.Q(Q)
	);
	shift_reg_4b test(
		.CLRb(CLRb), 
		.S(S), 
		.CLK(CLK), 
		.SDL(SDL), 
		.SDR(SDR), 
		.D(D), 
		.Q(T)
	);
	always #5 CLK = ~CLK;
	reg wrong;
	reg pass;
	
	always @(T or Q) begin
		#1;
		if(!(T===Q))begin 
			$display("Wrong at #%0d",$time());
			wrong = 1;
			pass = 0;
		end
	end
	
	integer i;
	initial begin
		// Initialize Inputs
		$display("Testing...");
		CLRb = 0;
		S=0;
		CLK=0;
		SDL=0;
		SDR=0;
		D=0;
		wrong = 0;
		i=0;
		pass = 1;
		#13;
		repeat(7) begin
			CLRb = 1;
			wrong = 0;
			i = i+1;
			$display("Test %0d Started. D=%b, SDL=%d, SDR=%d",i,D,SDL,SDR);
			{SDR, D, SDL} = $random();
			S=3;
			#10;
			S=2;
			#10;
			S=1;
			#10;
			S=0;
			#20;
			S=2;
			#30;
			S=1;
			#40;
			CLRb=0;
			#10;
			if(!wrong) $display("Test passed.");
		end
		$display("Test Finished.");
		if(pass)$display("Overall test passed.");
		else $display("Overall test failed.");
		
	end
endmodule

//4bit Universial Shift Register with structual modeling
//Will make reference outputs.
//Surely nobody wants to implement such complex circuit
//using schematic design..
module ref(
    input CLRb,
    input [1:0] S,
    input CLK,
    input SDL,
    input SDR,
    input [3:0] D,
    output [3:0] Q
    );
	  //   left SDR q3 q2 q1 q0 SDL right
	  //s1s0=01 right/ 10 left 
	  
	 wire wm0,wd0;
	 //  out orig  r   l   load  s1   s0
	 Mux m0(wm0,Q[0],SDL,Q[1],D[0],S[0],S[1]);
	 assign wd0 = wm0&(CLRb);
	 Dff d0(Q[0], wd0, CLK, 1'b1);
	 
	 wire wm1,wd1;
	 Mux m1(wm1,Q[1],Q[0],Q[2],D[1],S[0],S[1]);
	 assign wd1 = wm1&(CLRb);
	 Dff d1(Q[1], wd1, CLK, 1'b1);
	 
	 wire wm2,wd2;
	 Mux m2(wm2,Q[2],Q[1],Q[3],D[2],S[0],S[1]);
	 assign wd2 = wm2&(CLRb);
	 Dff d2(Q[2], wd2, CLK, 1'b1);
	 
	 wire wm3,wd3;
	 Mux m3(wm3,Q[3],Q[2],SDR,D[3],S[0],S[1]);
	 assign wd3 = wm3&(CLRb);
	 Dff d3(Q[3], wd3, CLK, 1'b1);
 
endmodule

primitive Mux (y, a, b, c, d, s1, s0);
  output y;
  input a, b, c,d,s1,s0;
  table
    // a  b  c  d  s1  s0  : y
       0  ?  ?  ?  0  0:  0;
       1  ?  ?  ?  0  0:  1;
       ?  0  ?  ?  0  1:  0;
       ?  1  ?  ?  0  1:  1;
       ?  ?  0  ?  1  0:  0;
       ?  ?  1  ?  1  0:  1;
       ?  ?  ?  0  1  1:  0;
       ?  ?  ?  1  1  1:  1;
  endtable
endprimitive

primitive Dff (q, d, clk, rst);
  output q;
  input clk, rst, d;
  reg q;
  initial q = 0;
  table
    // d  clk  rst : old q : q
       ?   ?    0  :   ?   : 0;
       0   R    1  :   ?   : 0;
       1  (01)  1  :   ?   : 1;
       ?   N    1  :   ?   : -;
       *   ?    1  :   ?   : -;
       ?   ?   (0?):   ?   : -;
  endtable
endprimitive 