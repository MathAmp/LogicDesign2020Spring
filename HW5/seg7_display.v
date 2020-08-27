`timescale 1ns / 1ps
`define X_SIZE 2048
`define Y_SIZE 2048
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:12:56 04/21/2020 
// Design Name: 
// Module Name:    seg7_display 
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




/*
DO NOT MODIFY!

Module for making segment display images.
Images are saved at /out.
Make sure all files are at /data.
*/

module seg7_display(
    input [7:0] in //in[7]=dp, in[6]=g, in[5]=f, in[4]=e, in[3]=d, in[2]=c, in[1]=b, in[0]=a,
    );
	parameter read_filename = "data/seg.bmp";
	 parameter reada = "data/seg_a.bmp";
	 parameter readb = "data/seg_b.bmp";
	 parameter readc = "data/seg_c.bmp";
	 parameter readd = "data/seg_d.bmp";
	 parameter reade = "data/seg_e.bmp";
	 parameter readf = "data/seg_f.bmp";
	 parameter readg = "data/seg_g.bmp";
	 parameter readdp = "data/seg_dp.bmp";

	reg [31:0] bicompression,
	bisizeimage,
	bixpelspermeter,
	biypelspermeter,
	biclrused,
	biclrimportant;
	reg [15:0] bftype;
	reg [31:0] bfsize;
	reg [15:0] bfreserved1, bfreserved2;
	reg [31:0] bfoffbits;
	reg [31:0] bisize, biwidth, biheight;
	reg [7:0] realwidth, realheight;
	integer temp;
	reg [15:0] biplanes, bibitcount;
	reg [7:0] image_orig [0:`Y_SIZE][0:`X_SIZE][0:2];
	reg [7:0] image_out [0:`Y_SIZE][0:`X_SIZE][0:2];
	reg [7:0] image_in [0:`Y_SIZE][0:`X_SIZE][0:2];


	 task readbmp(input [128*8:1] read_filename, input [7:1]sel);
	 //sel=0: Original, sel=1~8: a~g
		 integer fp;
		 integer i, j, k;
		 reg [7:0] dat;
		 
		 begin
		 fp = $fopen(read_filename, "rb");
		 if(!fp)begin
			$display("OpenError during seg read\n");
			$finish;
		end
		
		temp=$fread(bftype, fp);
		temp=$fread(bfsize, fp);
		temp=$fread(bfreserved1, fp);
		temp=$fread(bfreserved2, fp);
		temp=$fread(bfoffbits, fp);
		temp=$fread(bisize, fp);
		temp=$fread(biwidth, fp);
		temp=$fread(biheight, fp);
		temp=$fread(biplanes, fp);
		temp=$fread(bibitcount, fp);
		temp=$fread(bicompression, fp);
		temp=$fread(bisizeimage, fp);
		temp=$fread(bixpelspermeter, fp);
		temp=$fread(biypelspermeter, fp);
		temp=$fread(biclrused, fp);
		temp=$fread(biclrimportant, fp);
		realwidth = (1+(biwidth[31:24]-1)/4)*4;
		realheight = biheight[31:24];
		for(i=0;i<realheight;i=i+1)begin
			for(j=0;j<realwidth;j=j+1)begin
				for(k=0;k<3;k=k+1)begin
					temp=$fread(dat, fp);
					if(sel==0)image_orig[realheight-i][j][2-k]=dat;
					else image_in[realheight-i][j][2-k]=dat;
				end
			end
		end
		$fclose(fp);
		end
	endtask
	
	
	task writebmp(input [24*8:1] write_filename);
		integer fp;
		integer i, j, k;
		begin
			fp = $fopen(write_filename, "wb");
			if(!fp)begin
				$display("OpenError during write\n");
			end
			$fwrite(fp, "%c", bftype[15:8]);
			$fwrite(fp, "%c", bftype[7:0]);
			
			$fwrite(fp, "%c", bfsize[31:24]);
      $fwrite(fp, "%c", bfsize[23:16]);
      $fwrite(fp, "%c", bfsize[15:8]);
      $fwrite(fp, "%c", bfsize[7:0]);
			$fwrite(fp, "%c", bfreserved1[15:8]);
      $fwrite(fp, "%c", bfreserved1[7:0]);
			$fwrite(fp, "%c", bfreserved2[15:8]);
      $fwrite(fp, "%c", bfreserved2[7:0]);
      $fwrite(fp, "%c", bfoffbits[31:24]);
      $fwrite(fp, "%c", bfoffbits[23:16]);
      $fwrite(fp, "%c", bfoffbits[15:8]);
      $fwrite(fp, "%c", bfoffbits[7:0]);
			$fwrite(fp, "%c", bisize[31:24]);
      $fwrite(fp, "%c", bisize[23:16]);
      $fwrite(fp, "%c", bisize[15:8]);
      $fwrite(fp, "%c", bisize[7:0]);
			$fwrite(fp, "%c", biwidth[31:24]);
      $fwrite(fp, "%c", biwidth[23:16]);
      $fwrite(fp, "%c", biwidth[15:8]);
      $fwrite(fp, "%c", biwidth[7:0]);
			$fwrite(fp, "%c", biheight[31:24]);
      $fwrite(fp, "%c", biheight[23:16]);
      $fwrite(fp, "%c", biheight[15:8]);
      $fwrite(fp, "%c", biheight[7:0]);
			$fwrite(fp, "%c", biplanes[15:8]);
      $fwrite(fp, "%c", biplanes[7:0]);
			$fwrite(fp, "%c", bibitcount[15:8]);
      $fwrite(fp, "%c", bibitcount[7:0]);
			$fwrite(fp, "%c", bicompression[31:24]);
      $fwrite(fp, "%c", bicompression[23:16]);
      $fwrite(fp, "%c", bicompression[15:8]);
      $fwrite(fp, "%c", bicompression[7:0]);
			$fwrite(fp, "%c", bisizeimage[31:24]);
      $fwrite(fp, "%c", bisizeimage[23:16]);
      $fwrite(fp, "%c", bisizeimage[15:8]);
      $fwrite(fp, "%c", bisizeimage[7:0]);
			$fwrite(fp, "%c", bixpelspermeter[31:24]);
      $fwrite(fp, "%c", bixpelspermeter[23:16]);
      $fwrite(fp, "%c", bixpelspermeter[15:8]);
      $fwrite(fp, "%c", bixpelspermeter[7:0]);
			$fwrite(fp, "%c", biypelspermeter[31:24]);
      $fwrite(fp, "%c", biypelspermeter[23:16]);
      $fwrite(fp, "%c", biypelspermeter[15:8]);
      $fwrite(fp, "%c", biypelspermeter[7:0]);
			$fwrite(fp, "%c", biclrused[31:24]);
      $fwrite(fp, "%c", biclrused[23:16]);
      $fwrite(fp, "%c", biclrused[15:8]);
      $fwrite(fp, "%c", biclrused[7:0]);
			$fwrite(fp, "%c", biclrimportant[31:24]);
      $fwrite(fp, "%c", biclrimportant[23:16]);
      $fwrite(fp, "%c", biclrimportant[15:8]);
      $fwrite(fp, "%c", biclrimportant[7:0]);
			
			for(i=0;i<realheight;i=i+1)begin
				for(j=0;j<realwidth;j=j+1)begin
					for(k=0;k<3;k=k+1)begin
						$fwrite(fp, "%c", image_out[realheight-i][j][2-k]);
					end
				end
			end
			$fclose(fp);
		end
	endtask
	
	task setorig();
		integer i, j, k;
		begin
			for(i=0;i<realheight;i=i+1)begin
				for(j=0;j<realwidth;j=j+1)begin
					for(k=0;k<3;k=k+1)begin
						image_out[realheight-i][j][2-k]=image_orig[realheight-i][j][2-k];
					end
				end
			end
		end
	endtask
	 
	task setdiff();
		integer i, j, k;
		begin
			for(i=0;i<realheight;i=i+1)begin
				for(j=0;j<realwidth;j=j+1)begin
					for(k=0;k<3;k=k+1)begin
						if(image_orig[realheight-i][j][2-k]!=image_in[realheight-i][j][2-k])
						image_out[realheight-i][j][2-k]=image_in[realheight-i][j][2-k];
					end
				end
			end
		end
	endtask
	 integer t0, t1, t2, t3, t4;
	 reg[24*8:1] output_name;
	 always@(in) begin
		readbmp(read_filename,0);
		setorig();
		if(in[0]!=0)begin
			readbmp(reada, 1);
			setdiff();
		end
		if(in[1]!=0)begin
			readbmp(readb, 2);
			setdiff();
		end
		if(in[2]!=0)begin
			readbmp(readc, 3);
			setdiff();
		end
		if(in[3]!=0)begin
			readbmp(readd, 4);
			setdiff();
		end
		if(in[4]!=0)begin
			readbmp(reade, 5);
			setdiff();
		end
		if(in[5]!=0)begin
			readbmp(readf, 6);
			setdiff();
		end
		if(in[6]!=0)begin
			readbmp(readg, 7);
			setdiff();
		end
		if(in[7]!=0)begin
			readbmp(readdp, 8);
			setdiff();
		end
		output_name = "out/seg_out_xxxxx ns.bmp";
			t4 = ($stime/32'd10000) % 32'd10;
		  t3 = ($stime/32'd1000) % 32'd10;
		  t2 = ($stime/32'd100) % 32'd10;
		  t1 = ($stime/32'd10) % 32'd10;
		  t0 = $stime % 32'd10;
	
		  output_name[64:57] = "0" + t0;
		  output_name[72:65] = "0" + t1;
		  output_name[80:73] = "0" + t2;
		  output_name[88:81] = "0" + t3;
		  output_name[96:89] = "0" + t4;
		$display("Writing output:%s", output_name); 
		writebmp(output_name);
		$display("Writing Done.");
	end

endmodule
