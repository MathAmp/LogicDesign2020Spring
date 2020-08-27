`timescale 1ns/1ps

//Machine code layout

/*
Load:	01 [rt] [rs] [off] -> rt = rs[off]
Loading to any register should update tb_data of TB wiring (Handled by TA).

Store: 	10 [rs] [rd] [off] -> rd[off] = rs

Arith:	11 [op] [rd] [rs]
	11 00 NOP
	11 01 ADD	rd += rs , set Flag accordingly.
	11 10 SUB	rd -= rs , set Flag accordingly.
	11 11 NOP

Br Zero:	00 00 [   off   ] -> Jump to PC+off when Zero Flag is 1,
	                        If not, increment PC by 1 as usual.
Br Pos:	00 01 [   off   ] -> Jump to PC+off when Pos Flag is 1,
	                        If not, increment PC by 1 as usual.
Br Neg:	00 10 [   off   ] -> Jump to PC+off when Neg Flag is 1,
	                        If not, increment PC by 1 as usual.
Br Un:	00 11 [   off   ] -> Jump to PC+off
*/


module cpu	//Do not change top module name or ports.
(
	input	clk,
	input	areset,

	output	[7:0] imem_addr,	//Request instruction memory
	input	[7:0] imem_data,	//Returns 

	output	[7:0] tb_data		//Testbench wiring.
);


	//Data memory and testbench wiring. you may rename them if you like.
	wire dmem_write;
	wire [7:0] dmem_addr, dmem_write_data, dmem_read_data;

	wire [7:0] pc_data, next_pc, pc_selected;
	wire [7:0] instruction, constant;
	wire [7:0] rs1_data, rs2_data, write_data, alu_src2, alu_result;
	wire br, alusrc, memwrite, regdst, memtoreg, regwrite;
	wire [1:0] brflag, rs1, rs2, rd, aluop;
	wire [2:0] flag, flag_result;
	wire jump, flagwrite;
	
	
	
	//Data memory module in tb.v.
	memory dmem(	.clk(clk), .areset(areset),
			.write(dmem_write), .addr(dmem_addr),
			.write_data(dmem_write_data), .read_data(dmem_read_data));

	assign tb_data = dmem_read_data;
	//Testbench wiring end.

	//Write your code here.
	
	assign next_pc = areset ? 8'b00000000 : pc_selected;
	pc p(.clk(clk), .next_address(next_pc), .address(pc_data));
	
	//memory imem(.clk(clk), );
	
	assign imem_addr[7:0] = pc_data[7:0];
	assign instruction[7:0] = imem_data[7:0];
	
	
	control_logic c(
		.mode(instruction[7:6]), .opcode(instruction[5:4]), 
		.br(br), .alusrc(alusrc), .aluop(aluop),
		.memwrite(memwrite), .regdst(regdst), .memtoreg(memtoreg),
		.brflag(brflag), .regwrite(regwrite)
	);

	assign rs1[1:0] = instruction[3:2];
	assign rs2[1:0] = memwrite ? instruction[5:4] : instruction[1:0];
	assign rd[1:0] = regdst ? instruction[3:2] : instruction[5:4];
	assign write_data[7:0] = memtoreg ? dmem_read_data[7:0] : alu_result[7:0];
	assign dmem_write = memwrite;
	
	sign_extension s(
		.off(instruction[3:0]), .br(br), .extended_off(constant)
	); 
	
	reg_file rf(
		.clk(clk), .areset(areset), .wen(regwrite),
		.rs1(rs1), .rs2(rs2), .rd(rd),
		.wdata(write_data), .rs1_data(rs1_data), .rs2_data(rs2_data)
	);
	
	assign alu_src2 = alusrc ? rs2_data : constant;
	
	alu a(
		.alusrc(alusrc), .aluop(aluop), .s1(rs1_data), .s2(alu_src2),
		.result(alu_result), .flag(flag_result), .fwen(flagwrite)
	);
	
	assign dmem_addr = alu_result;
	assign dmem_write_data = rs2_data;
	
	flag_reg fr(
		.clk(clk), .areset(areset), .fwen(flagwrite), .fdata(flag_result), .flag(flag)
	); 
	br_control_unit brcu(
		.br(br), .brflag(brflag), .flag(flag), .jump(jump)
	);
	
	assign pc_selected = pc_data + (jump ? constant : 8'b00000001);

endmodule

module sign_extension
(
	input [3:0] off,
	input br,
	output [7:0] extended_off
);
	assign extended_off[7:0] = br ? {{4{off[3]}}, off[3:0]} : {{6{off[1]}}, off[1:0]};
endmodule

module reg_file
(
	input clk, 
	input areset, 
	input wen, 
	input [1:0] rs1, 
	input [1:0] rs2, 
	input [1:0] rd, 
	input [7:0] wdata,
	output [7:0] rs1_data,
	output [7:0] rs2_data
);
	reg [7:0] register[3:0];
	
	always @ (posedge clk) begin
		if(areset) begin
			register[0] <= 8'b00000000;
			register[1] <= 8'b00000000;
			register[2] <= 8'b00000000;
			register[3] <= 8'b00000000;
		end
		else begin
			if(wen) begin
				register[rd] <= wdata;
			end
		end
	end
	
	assign rs1_data = register[rs1];
	assign rs2_data = register[rs2];

endmodule

module flag_reg
(
	input clk, 
	input areset, 
	input fwen, 
	input [2:0] fdata,
	output [2:0] flag
);
	reg [2:0] flag_register;
	always @ (posedge clk) begin
		if(areset) begin
			flag_register[2:0] <= 3'b000;
		end
		else begin
			if(fwen) begin
				flag_register[2:0] <= fdata[2:0];
			end
		end
	end
	assign flag[2:0] = flag_register[2:0];
	
endmodule

module br_control_unit
(
	input br,
	input [1:0] brflag,
	input [2:0] flag,
	output jump
);
	assign jump = ~br ? 0:(
		(brflag==2'b00 & flag[0])| 
		(brflag==2'b01 & flag[1])|
		(brflag==2'b10 & flag[2])|
		(brflag==2'b11)
	);

endmodule

module alu
(
	input alusrc,
	input [1:0] aluop,
	input [7:0] s1,
	input [7:0] s2,
	output [7:0] result,
	output [2:0] flag,
	output fwen
); 
	assign result = (aluop[1]) ? (s1-s2) : (s1+s2);
	assign flag = (result == 8'b00000000) ? 3'b001 : (
		result[7] ? 3'b100 : 3'b010
	);
	assign fwen = aluop[0];

endmodule

module control_logic
(
	input [1:0] mode,
	input [1:0] opcode,
	output br,
	output alusrc,
	output [1:0] aluop,
	output memwrite,
	output regdst,
	output memtoreg,
	output [1:0] brflag,
	output regwrite
);
	assign br = (mode == 2'b00);
	assign alusrc = (mode == 2'b11 & (opcode == 2'b01 | opcode == 2'b10));
	assign aluop[0] = (mode == 2'b11) & (opcode != 2'b00);
	assign aluop[1] = (mode == 2'b11) & (opcode == 2'b10);
	assign memwrite = (mode == 2'b10);
	assign regdst = (mode != 2'b01);
	assign memtoreg = (mode == 2'b01);
	assign brflag[1:0] = opcode[1:0];
	assign regwrite = ((mode == 2'b11) & (opcode != 2'b00)) | (mode == 2'b01);

endmodule

module pc
(
	input clk,
	input [7:0] next_address,
	output [7:0] address
);
	reg [7:0] addr;
	always @ (posedge clk) begin
		addr <= next_address;
	end
	assign address = addr;

endmodule
