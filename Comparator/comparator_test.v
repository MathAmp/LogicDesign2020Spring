// Verilog test fixture created from schematic /home/ise/ise_projects/Comparator/comparator.sch - Wed Apr  1 12:11:23 2020

`timescale 1ns / 1ps

module comparator_comparator_sch_tb();

// Inputs
   reg input_A;
   reg input_B;
   reg input_C;
   reg input_D;

// Output
   wire output_EQ;
   wire output_GT;
   wire output_LT;

// Bidirs

// Instantiate the UUT
   comparator UUT (
		.input_A(input_A), 
		.input_B(input_B), 
		.input_C(input_C), 
		.input_D(input_D), 
		.output_EQ(output_EQ), 
		.output_GT(output_GT), 
		.output_LT(output_LT)
   );
// Initialize Inputs

   initial begin
		input_A = 0;
		input_B = 0;
		input_C = 0;
		input_D = 0;
		#50;
		
		input_A = 0;
		input_B = 0;
		input_C = 0;
		input_D = 1;
		#50;
		
		input_A = 0;
		input_B = 0;
		input_C = 1;
		input_D = 0;
		#50;
		
		input_A = 0;
		input_B = 0;
		input_C = 1;
		input_D = 1;
		#50;

		input_A = 0;
		input_B = 1;
		input_C = 0;
		input_D = 0;
		#50;
		
		input_A = 0;
		input_B = 1;
		input_C = 0;
		input_D = 1;
		#50;
		
		input_A = 0;
		input_B = 1;
		input_C = 1;
		input_D = 0;
		#50;
		
		input_A = 0;
		input_B = 1;
		input_C = 1;
		input_D = 1;
		#50;		

		input_A = 1;
		input_B = 0;
		input_C = 0;
		input_D = 0;
		#50;
		
		input_A = 1;
		input_B = 0;
		input_C = 0;
		input_D = 1;
		#50;
		
		input_A = 1;
		input_B = 0;
		input_C = 1;
		input_D = 0;
		#50;
		
		input_A = 1;
		input_B = 0;
		input_C = 1;
		input_D = 1;
		#50;
		
		input_A = 1;
		input_B = 1;
		input_C = 0;
		input_D = 0;
		#50;
		
		input_A = 1;
		input_B = 1;
		input_C = 0;
		input_D = 1;
		#50;
		
		input_A = 1;
		input_B = 1;
		input_C = 1;
		input_D = 0;
		#50;
		
		input_A = 1;
		input_B = 1;
		input_C = 1;
		input_D = 1;
		#50;
	end
endmodule
