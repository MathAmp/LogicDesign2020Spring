`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:03:26 04/24/2020
// Design Name:   SNU_Board
// Module Name:   /home/ksw/TA/xilinx_snuboard/SNU_Board_Simulate.v
// Project Name:  xilinx_snuboard
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: SNU_Board
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module SNU_Board_Simulate;

	// Inputs
	reg SW1;
	reg SW2;
	reg SW3;
	reg SW4;
	reg SW5;
	reg SW6;

	// Outputs
	wire [6:0] J1;
	wire [6:0] J2;
	wire [6:0] J3;
	wire [6:0] J4;
	wire [6:0] J5;
	wire [6:0] J6;
	wire D1;
	wire D2;
	wire D3;
	wire D4;
	wire D5;
	wire D6;

	// Instantiate the Unit Under Test (UUT)
	SNU_Board uut (
		.SW1(SW1), 
		.SW2(SW2), 
		.SW3(SW3), 
		.SW4(SW4), 
		.SW5(SW5), 
		.SW6(SW6), 
		.J1(J1), 
		.J2(J2), 
		.J3(J3), 
		.J4(J4), 
		.J5(J5), 
		.J6(J6), 
		.D1(D1), 
		.D2(D2), 
		.D3(D3), 
		.D4(D4), 
		.D5(D5), 
		.D6(D6)
	);

	parameter outfile = "out/result.dat";
	 integer i;
	 integer fp;
		initial begin
			fp = $fopen(outfile, "w");
			if(!fp)begin
				$display("Open Error during write. Make sure /out folder is current in the project folder.");
			end
			for(i=0;i<64;i=i+1)begin
				{SW1, SW2, SW3, SW4, SW5, SW6} = i;			
				#1;
				$fwrite(fp,"%0d\n", i);
				$fwrite(fp,"%0d\n", J1);
				$fwrite(fp,"%0d\n", J2);
				$fwrite(fp,"%0d\n", J3);
				$fwrite(fp,"%0d\n", J4);
				$fwrite(fp,"%0d\n", J5);
				$fwrite(fp,"%0d\n", J6);
				$fwrite(fp,"%0d\n", D1);
				$fwrite(fp,"%0d\n", D2);
				$fwrite(fp,"%0d\n", D3);
				$fwrite(fp,"%0d\n", D4);
				$fwrite(fp,"%0d\n", D5);
				$fwrite(fp,"%0d\n", D6);	
				$display("Writing input of %3d",i);
			end
			$fclose(fp);
			$display("Writing Done.");
		end
      
endmodule

