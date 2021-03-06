`timescale 1ns / 1ps

module cpu_sim;

    // Control signals
    reg clk;
    reg areset;
    
    // Instruction
    wire [7:0] imem_data;

    // Inputs from CPU
    wire [7:0] imem_addr; // Requested address of Instruction Memory
    wire [7:0] tb_data; // data read from Data Memory (used for comparing Data Memory against reference status)

    // 8-bit Microprocessor
    cpu uut (
        .clk(clk), 
        .areset(areset), 
        .imem_addr(imem_addr), 
        .imem_data(imem_data), 
        .tb_data(tb_data)
    );

    /** [How Testing is performed]
      *
      * 1. Idea
      *
      *     (1) For each test case, we compare the data memory to reference status after instructions have been executed.
      *     (2) The testbench will read data from the data memory through tb_data wire, which is directly conencted to dmem_read_data.
      *     (3) In order to sequentially read data from data memory, special instructions (described in the Implementation) will be performed during the test phase.
      * 
      * 2. Implementation
      *
      *     (1) testbench will switch from normal instruction mode to test phase when tb_data becomes 0x22(=34), i.e., when value 0x22 is loaded to the register
      * 
      *     (2) When we enter test phase, the following instructions will be performed:
      *         (Note that mem[0] = 1 when we enter every test phase. We explicitly save 1 in mem[0] to load to r1 and use it as an incrementer.)
      *
      *         1) sub r0, r0 -> make r0 0
      *         2) load r1, r0, 0 -> check mem[0] and load 1 to r1
      *         3) add r0, r1 -> increment r0 by 1
      *         4) load r2, r0, 0 -> check mem[i]
      *         5) repeat 3 and 4
      *
      *     (3) After each test case has been evaluated, the testbench will reset your microprocessor and move on to the next case.
      *
      * 3. Note
      *
      *     (1) Since testing relies on special instructions composed of sub, add, and load, test WILL NOT function correctly until you implement these features.
      *     (2) The magic code to enter the test phase is 0x22. TAKE CAUTION when you write your own testbench or change the initial values of data memory.
      *     (3) mem[0] MUST BE 1 everytime we enter the test phase. Since our ALU does not have "increment funciton" we somehow need to have a register that has a value of 1.
      *     (4) Incorret implementation of jumps MAY LEAD TO infinite simulation, because your microprocessor may never reach the instruction that loads the magic value.
      *
      */

    reg [2:0] test_level = 3'd0; // total of 6 (0~5) tests (only 3 tests will be provided)
    reg [7:0] tester_memory[(6<<6)-1:0]; // (32 bytes for instruction memory, 32 bytes for reference data memory) x 6 tests

    reg test_phase = 1'b0; // 0: work as instruction mem, 1: work as tester
    reg [7:0] accumulator = 8'b0; // tester memory counter
    reg [7:0] n_errors = 8'b0; // tester error counter
    reg init_reset = 1'b1; // initial reset flag

    wire [7:0] tester_arithop;
    wire [7:0] tester_memop;
    wire [7:0] tester_instruction;

    // Alias for instructions
    wire [7:0] nop;
    wire [1:0] jmp, load, store, arith;
    wire [1:0] add, sub, addi;
    wire [1:0] zero, pos, neg, uncond;
    wire [1:0] r0, r1, r2, r3;

    assign nop = 8'hc0;
    assign jmp = 2'b00;
    assign load = 2'b01;
    assign store = 2'b10;
    assign arith = 2'b11;

    assign add = 2'b01;
    assign sub = 2'b10;
    assign addi = 2'b11;

    assign zero = 2'b00;
    assign pos = 2'b01;
    assign neg = 2'b10;
    assign uncond = 2'b11;

    assign r0 = 2'b00;
    assign r1 = 2'b01;
    assign r2 = 2'b10;
    assign r3 = 2'b11;

    /* Main Procedeural Block */
    always @(posedge clk)
    begin
        if(areset)
        begin

            /* Transition to next test case */
            areset <= 0;
            test_phase <= 0;
            accumulator <= 0;
            n_errors <= 0;
            test_level <= (init_reset == 1) ? test_level : (test_level + 1);
            init_reset <= 1'b0;
            

            /******************** LEVEL 0: Simple Accumulation ********************/

            //Instruction memory
            tester_memory[0]    <= nop; //NOP       
            tester_memory[1]    <= {load, r0, r1, 2'b00};   //r0 = 1
            tester_memory[2]    <= {load, r2, r1, 2'b00};   //r2 = 1
            tester_memory[3]    <= {arith, add, r0, r0};    //r0 = 2
            tester_memory[4]    <= {arith, add, r0, r0};    //r0 = 4
            tester_memory[5]    <= {arith, add, r0, r0};    //r0 = 8
            tester_memory[6]    <= {arith, add, r0, r0};    //r0 = 16
            tester_memory[7]    <= {arith, add, r0, r0};    //r0 = 32
            tester_memory[8]    <= {arith, add, r0, r2};    //r0 = 33
            tester_memory[9]    <= {arith, add, r0, r2};    //r0 = 34
            tester_memory[10]   <= {store, r0, r2, 2'b00};  //mem[1] = r0
            tester_memory[11]   <= {load, r0, r2, 2'b00};   //r0 = mem[1] (done)
            tester_memory[12]   <= 8'b00000000;
            tester_memory[13]   <= 8'b00000000;
            tester_memory[14]   <= 8'b00000000;
            tester_memory[15]   <= 8'b00000000;
            tester_memory[16]   <= 8'b00000000;
            tester_memory[17]   <= 8'b00000000;
            tester_memory[18]   <= 8'b00000000;
            tester_memory[19]   <= 8'b00000000;
            tester_memory[20]   <= 8'b00000000;
            tester_memory[21]   <= 8'b00000000;
            tester_memory[22]   <= 8'b00000000;
            tester_memory[23]   <= 8'b00000000;
            tester_memory[24]   <= 8'b00000000;
            tester_memory[25]   <= 8'b00000000;
            tester_memory[26]   <= 8'b00000000;
            tester_memory[27]   <= 8'b00000000;
            tester_memory[28]   <= 8'b00000000;
            tester_memory[29]   <= 8'b00000000;
            tester_memory[30]   <= 8'b00000000;
            tester_memory[31]   <= 8'b00000000;

            // Reference data memory (will be compared against data memory)
            tester_memory[32 + 0]   <= 8'h01;
            tester_memory[32 + 1]   <= 8'h22; // Magic Code (0x22 = 34)
            tester_memory[32 + 2]   <= 8'h03; 
            tester_memory[32 + 3]   <= 8'h04; 
            tester_memory[32 + 4]   <= 8'h05; 
            tester_memory[32 + 5]   <= 8'h06; 
            tester_memory[32 + 6]   <= 8'h07; 
            tester_memory[32 + 7]   <= 8'h08; 
            tester_memory[32 + 8]   <= 8'h09; 
            tester_memory[32 + 9]   <= 8'h10; 
            tester_memory[32 + 10]  <= 8'h11; 
            tester_memory[32 + 11]  <= 8'h12; 
            tester_memory[32 + 12]  <= 8'h13; 
            tester_memory[32 + 13]  <= 8'h14; 
            tester_memory[32 + 14]  <= 8'h15; 
            tester_memory[32 + 15]  <= 8'h16; 
            tester_memory[32 + 16]  <= 8'h17; 
            tester_memory[32 + 17]  <= 8'h18; 
            tester_memory[32 + 18]  <= 8'h19; 
            tester_memory[32 + 19]  <= 8'h20; 
            tester_memory[32 + 20]  <= 8'h21; 
            tester_memory[32 + 21]  <= 8'h22; 
            tester_memory[32 + 22]  <= 8'h23; 
            tester_memory[32 + 23]  <= 8'h24; 
            tester_memory[32 + 24]  <= 8'h25; 
            tester_memory[32 + 25]  <= 8'h26; 
            tester_memory[32 + 26]  <= 8'h27; 
            tester_memory[32 + 27]  <= 8'h28; 
            tester_memory[32 + 28]  <= 8'h29; 
            tester_memory[32 + 29]  <= 8'h30; 
            tester_memory[32 + 30]  <= 8'h31; 
            tester_memory[32 + 31]  <= 8'h32;

            /******************** LEVEL 1: Simple Branch Test ********************/

            // Instruction memory
            tester_memory[(2 << 5) + 0] <= nop; //NOP       
            tester_memory[(2 << 5) + 1] <= nop; //NOP
            tester_memory[(2 << 5) + 2] <= {load, r0, r1, 2'b00};   //r0 = 1
            tester_memory[(2 << 5) + 3] <= {jmp, uncond, 4'd7};     //pc = pc + 0x7
            tester_memory[(2 << 5) + 4] <= 8'b00000000;
            tester_memory[(2 << 5) + 5] <= 8'b00000000;
            tester_memory[(2 << 5) + 6] <= 8'b00000000;
            tester_memory[(2 << 5) + 7] <= 8'b00000000;
            tester_memory[(2 << 5) + 8] <= 8'b00000000;
            tester_memory[(2 << 5) + 9]     <= {jmp, uncond, 4'd3};     //Should never be executed.
            tester_memory[(2 << 5) + 10]    <= {load, r2, r1, 2'b00};   //r2 = 1
            tester_memory[(2 << 5) + 11]    <= {arith, add, r0, r0};    //r0 = 2
            tester_memory[(2 << 5) + 12]    <= {arith, add, r0, r0};    //r0 = 4
            tester_memory[(2 << 5) + 13]    <= {arith, add, r0, r0};    //r0 = 8
            tester_memory[(2 << 5) + 14]    <= {arith, add, r0, r0};    //r0 = 16
            tester_memory[(2 << 5) + 15]    <= {arith, add, r0, r0};    //r0 = 32
            tester_memory[(2 << 5) + 16]    <= {arith, add, r2, r2};    //r2 = 2
            tester_memory[(2 << 5) + 17]    <= {arith, add, r0, r2};    //r0 = 34 (0x22)
            tester_memory[(2 << 5) + 18]    <= {arith, add, r2, r2};    //r2 = 4
            tester_memory[(2 << 5) + 19]    <= {store, r0, r2, 2'b00};  //mem[4] = r0
            tester_memory[(2 << 5) + 20]    <= {load, r0, r2, 2'b00};   //r0 = mem[4] (done)
            tester_memory[(2 << 5) + 21]    <= 8'b00000000;
            tester_memory[(2 << 5) + 22]    <= 8'b00000000;
            tester_memory[(2 << 5) + 23]    <= 8'b00000000;
            tester_memory[(2 << 5) + 24]    <= 8'b00000000;
            tester_memory[(2 << 5) + 25]    <= 8'b00000000;
            tester_memory[(2 << 5) + 26]    <= 8'b00000000;
            tester_memory[(2 << 5) + 27]    <= 8'b00000000;
            tester_memory[(2 << 5) + 28]    <= 8'b00000000;
            tester_memory[(2 << 5) + 29]    <= 8'b00000000;
            tester_memory[(2 << 5) + 30]    <= 8'b00000000;
            tester_memory[(2 << 5) + 31]    <= 8'b00000000;

            // Reference data memory (will be compared against data memory)
            tester_memory[(3 << 5) + 0] <= 8'h01;
            tester_memory[(3 << 5) + 1] <= 8'h02;
            tester_memory[(3 << 5) + 2] <= 8'h03;
            tester_memory[(3 << 5) + 3] <= 8'h04;
            tester_memory[(3 << 5) + 4] <= 8'h22;
            tester_memory[(3 << 5) + 5] <= 8'h06;
            tester_memory[(3 << 5) + 6] <= 8'h07;
            tester_memory[(3 << 5) + 7] <= 8'h08;
            tester_memory[(3 << 5) + 8] <= 8'h09;
            tester_memory[(3 << 5) + 9] <= 8'h10;
            tester_memory[(3 << 5) + 10]    <= 8'h11;
            tester_memory[(3 << 5) + 11]    <= 8'h12;
            tester_memory[(3 << 5) + 12]    <= 8'h13;
            tester_memory[(3 << 5) + 13]    <= 8'h14;
            tester_memory[(3 << 5) + 14]    <= 8'h15;
            tester_memory[(3 << 5) + 15]    <= 8'h16;
            tester_memory[(3 << 5) + 16]    <= 8'h17;
            tester_memory[(3 << 5) + 17]    <= 8'h18;
            tester_memory[(3 << 5) + 18]    <= 8'h19;
            tester_memory[(3 << 5) + 19]    <= 8'h20;
            tester_memory[(3 << 5) + 20]    <= 8'h21;
            tester_memory[(3 << 5) + 21]    <= 8'h22;
            tester_memory[(3 << 5) + 22]    <= 8'h23;
            tester_memory[(3 << 5) + 23]    <= 8'h24;
            tester_memory[(3 << 5) + 24]    <= 8'h25;
            tester_memory[(3 << 5) + 25]    <= 8'h26;
            tester_memory[(3 << 5) + 26]    <= 8'h27;
            tester_memory[(3 << 5) + 27]    <= 8'h28;
            tester_memory[(3 << 5) + 28]    <= 8'h29;
            tester_memory[(3 << 5) + 29]    <= 8'h30;
            tester_memory[(3 << 5) + 30]    <= 8'h31;
            tester_memory[(3 << 5) + 31]    <= 8'h32;

            /******************** LEVEL 2: Memory Operations ********************/

            //Instruction memory
            tester_memory[(4 << 5) + 0] <= nop; //NOP       
            tester_memory[(4 << 5) + 1] <= {load, r0, r0, 2'b01};   //r0 = m[0 + 1] = 2
            tester_memory[(4 << 5) + 2] <= {load, r1, r0, 2'b00};   //r1 = m[2 + 0] = 3
            tester_memory[(4 << 5) + 3] <= {load, r2, r1, 2'b01};   //r2 = m[3 + 1] = 5
            tester_memory[(4 << 5) + 4] <= {arith, add, r2, r1};    //r2 = 3 + 5 = 8
            tester_memory[(4 << 5) + 5] <= {load, r3, r2, 2'b10};   //r3 = m[8 - 2] = 7
            tester_memory[(4 << 5) + 6] <= {arith, add, r3, r2};    //r3 = 7 + 8 = 15
            tester_memory[(4 << 5) + 7] <= {store, r0, r2, 2'b01};  //m[8 + 1] = 2
            tester_memory[(4 << 5) + 8] <= {arith, add, r2, r3};    //r2 = 8 + 15 = 23
            tester_memory[(4 << 5) + 9] <= {store, r2, r0, 2'b01};  //m[2 + 1] = 23 (0x17)
            tester_memory[(4 << 5) + 10]    <= {arith, add, r2, r3};    //r2 = 23 + 15 = 38 (0x26)
            tester_memory[(4 << 5) + 11]    <= {arith, add, r1, r1};    //r1 = 3 + 3 = 6
            tester_memory[(4 << 5) + 12]    <= {arith, sub, r2, r1};    //r2 = 38 - 6 = 32 (0x20)
            tester_memory[(4 << 5) + 13]    <= {store, r2, r1, 2'b00};  //m[6 + 0] = 32
            tester_memory[(4 << 5) + 14]    <= {arith, add, r2, r0};    //r2 = 32 + 2 = 34 (0x22)
            tester_memory[(4 << 5) + 15]    <= {store, r2, r1, 2'b01};  //m[6 + 1] = 34
            tester_memory[(4 << 5) + 16]    <= {load, r2, r3, 2'b01};   //r2 = m[15 + 1] = 23 (0x17)
            tester_memory[(4 << 5) + 17]    <= {store, r1, r2, 2'b01};  //m[23 + 1] = 6
            tester_memory[(4 << 5) + 18]    <= {load, r3, r1, 2'b01};   //r3 = m[6 + 1] = 34(0x22. done)
            tester_memory[(4 << 5) + 19]    <= {8'hff};
            tester_memory[(4 << 5) + 20]    <= {8'hff};
            tester_memory[(4 << 5) + 21]    <= {8'hff};
            tester_memory[(4 << 5) + 22]    <= {8'hff};
            tester_memory[(4 << 5) + 23]    <= {8'hff};
            tester_memory[(4 << 5) + 24]    <= {8'hff};
            tester_memory[(4 << 5) + 25]    <= {8'hff};
            tester_memory[(4 << 5) + 26]    <= {8'hff};
            tester_memory[(4 << 5) + 27]    <= {8'hff};
            tester_memory[(4 << 5) + 28]    <= {8'hff};
            tester_memory[(4 << 5) + 29]    <= {8'hff};
            tester_memory[(4 << 5) + 30]    <= {8'hff};
            tester_memory[(4 << 5) + 31]    <= {8'hff};

            // Reference data memory (will be compared against data memory)
            tester_memory[(5 << 5) + 0] <= 8'h01;
            tester_memory[(5 << 5) + 1] <= 8'h02;
            tester_memory[(5 << 5) + 2] <= 8'h03;
            tester_memory[(5 << 5) + 3] <= 8'h17;
            tester_memory[(5 << 5) + 4] <= 8'h05;
            tester_memory[(5 << 5) + 5] <= 8'h06;
            tester_memory[(5 << 5) + 6] <= 8'h20;
            tester_memory[(5 << 5) + 7] <= 8'h22;
            tester_memory[(5 << 5) + 8] <= 8'h09;
            tester_memory[(5 << 5) + 9] <= 8'h02;
            tester_memory[(5 << 5) + 10]    <= 8'h11;
            tester_memory[(5 << 5) + 11]    <= 8'h12;
            tester_memory[(5 << 5) + 12]    <= 8'h13;
            tester_memory[(5 << 5) + 13]    <= 8'h14;
            tester_memory[(5 << 5) + 14]    <= 8'h15;
            tester_memory[(5 << 5) + 15]    <= 8'h16;
            tester_memory[(5 << 5) + 16]    <= 8'h17;
            tester_memory[(5 << 5) + 17]    <= 8'h18;
            tester_memory[(5 << 5) + 18]    <= 8'h19;
            tester_memory[(5 << 5) + 19]    <= 8'h20;
            tester_memory[(5 << 5) + 20]    <= 8'h21;
            tester_memory[(5 << 5) + 21]    <= 8'h22;
            tester_memory[(5 << 5) + 22]    <= 8'h23;
            tester_memory[(5 << 5) + 23]    <= 8'h24;
            tester_memory[(5 << 5) + 24]    <= 8'h06;
            tester_memory[(5 << 5) + 25]    <= 8'h26;
            tester_memory[(5 << 5) + 26]    <= 8'h27;
            tester_memory[(5 << 5) + 27]    <= 8'h28;
            tester_memory[(5 << 5) + 28]    <= 8'h29;
            tester_memory[(5 << 5) + 29]    <= 8'h30;
            tester_memory[(5 << 5) + 30]    <= 8'h31;
            tester_memory[(5 << 5) + 31]    <= 8'h32;

            /******************** LEVEL 3: UNKNOWN ********************/
				tester_memory[(6 << 5) + 0]       <= nop; //NOP       
            tester_memory[(6 << 5) + 1]       <= {load, r0, r0, 2'b00}; //r0=1
            tester_memory[(6 << 5) + 2]       <= {load, r1, r1, 2'b00}; //r1=1
            tester_memory[(6 << 5) + 3]       <= {arith, add, r0, r0};  //r0=2
            tester_memory[(6 << 5) + 4]       <= {arith, add, r1, r0};  //r1=3
            tester_memory[(6 << 5) + 5]       <= {store, r1, r0, 2'b01}; //mem[2]=r1=3
            tester_memory[(6 << 5) + 6]       <= {arith, addi, r1, 2'b01};  //r1=4
            tester_memory[(6 << 5) + 7]       <= {arith, addi, r0, 2'b01}; //r0=3
            tester_memory[(6 << 5) + 8]       <= {store, r1, r0, 2'b01};  //mem[3]=r1=4
            tester_memory[(6 << 5) + 9]       <= {arith, addi, r1, 2'b10};
            tester_memory[(6 << 5) + 10]     <= {arith, addi, r1, 2'b11}; // r1=1 > 0
            tester_memory[(6 << 5) + 11]     <= {jmp, pos, 4'b0010};
            tester_memory[(6 << 5) + 12]     <= {jmp, uncond, 4'b0000};
            tester_memory[(6 << 5) + 13]     <= {arith, sub, r1, r1};
            tester_memory[(6 << 5) + 14]     <= {jmp, zero, 4'b0010};
            tester_memory[(6 << 5) + 15]     <= {jmp, uncond, 4'b1101}; 
            tester_memory[(6 << 5) + 16]     <= {jmp, zero, 4'b0010};
            tester_memory[(6 << 5) + 17]     <= {jmp, uncond, 4'b1110}; 
            tester_memory[(6 << 5) + 18]     <= {arith, addi, r1, 2'b10};  // r1 = -2
            tester_memory[(6 << 5) + 19]     <= {jmp, neg, 4'b0010}; // 
            tester_memory[(6 << 5) + 20]     <= {jmp, uncond, 4'b1101};  
            tester_memory[(6 << 5) + 21]     <= {arith, addi, r0, 2'b01}; // r0 = 4
            tester_memory[(6 << 5) + 22]     <=	{arith, add, r0, r0}; // r0= 8
            tester_memory[(6 << 5) + 23]     <= {arith, add, r0, r0}; // r0= 16
            tester_memory[(6 << 5) + 24]     <= {arith, add, r0, r0}; // r0 = 32
            tester_memory[(6 << 5) + 25]     <= {arith, add, r1, r0}; // r1 = 30
            tester_memory[(6 << 5) + 26]     <= {arith, addi, r0, 2'b01};			
            tester_memory[(6 << 5) + 27]     <= {arith, addi, r0, 2'b01};
            tester_memory[(6 << 5) + 28]     <= {store, r0, r1, 2'b11};
            tester_memory[(6 << 5) + 29]     <= {load, r0, r1, 2'b11};
            tester_memory[(6 << 5) + 30]     <= {8'hff};
            tester_memory[(6 << 5) + 31]     <= {8'hff};
            // Reference data memory (will be compared against data memory)
            tester_memory[(7 << 5) + 0] <= 8'h01; //01
            tester_memory[(7 << 5) + 1] <= 8'h03; //01
            tester_memory[(7 << 5) + 2] <= 8'h03;
            tester_memory[(7 << 5) + 3] <= 8'h04;
            tester_memory[(7 << 5) + 4] <= 8'h04;
            tester_memory[(7 << 5) + 5] <= 8'h04;
            tester_memory[(7 << 5) + 6] <= 8'h08;
            tester_memory[(7 << 5) + 7] <= 8'h04;
            tester_memory[(7 << 5) + 8] <= 8'h09;
            tester_memory[(7 << 5) + 9] <= 8'h10;
            tester_memory[(7 << 5) + 10]    <= 8'h0C; //0x0C=12
            tester_memory[(7 << 5) + 11]    <= 8'h0A; //0x0A=10
            tester_memory[(7 << 5) + 12]    <= 8'h13;
            tester_memory[(7 << 5) + 13]    <= 8'h14; 
            tester_memory[(7 << 5) + 14]    <= 8'h15;
            tester_memory[(7 << 5) + 15]    <= 8'h16;
            tester_memory[(7 << 5) + 16]    <= 8'h17;
            tester_memory[(7 << 5) + 17]    <= 8'h18; 
            tester_memory[(7 << 5) + 18]    <= 8'h19;
            tester_memory[(7 << 5) + 19]    <= 8'h20; 
            tester_memory[(7 << 5) + 20]    <= 8'h14; //0x14=20
            tester_memory[(7 << 5) + 21]    <= 8'h22;
            tester_memory[(7 << 5) + 22]    <= 8'h23;
            tester_memory[(7 << 5) + 23]    <= 8'h24;
            tester_memory[(7 << 5) + 24]    <= 8'h25;
            tester_memory[(7 << 5) + 25]    <= 8'h26;
            tester_memory[(7 << 5) + 26]    <= 8'h27;
            tester_memory[(7 << 5) + 27]    <= 8'h28;
            tester_memory[(7 << 5) + 28]    <= 8'h29;
            tester_memory[(7 << 5) + 29]    <= 8'h34;
            tester_memory[(7 << 5) + 30]    <= 8'h31;
            tester_memory[(7 << 5) + 31]    <= 8'h32;   

            /******************** LEVEL 4: UNKNOWN ********************/

            /******************** LEVEL 5: UNKNOWN ********************/

        end

        else if(test_phase == 1) // test phase
        begin
            if(!accumulator[6])
            begin
                if(accumulator[0])
                begin
                    if(tester_memory[{test_level, 1'b1, accumulator[5:1]}] !== tb_data)
                    begin
                        $display("Data mismatch at mem[%d]. %d (Testbench) != %d (Your result)", accumulator[5:1], tester_memory[{test_level, 1'b1, accumulator[5:1]}], tb_data);
                        n_errors <= n_errors + 1;
                    end
                end
                accumulator <= accumulator + 1;
            end
            else
            begin
                $display("Test level %d finished. Score: (%d/32)", test_level, (32 - n_errors));
                areset <= 1; // move to next test case

                if (test_level == 3'd3) begin
                    $finish; // end of test simulation
                end
            end
        end
        else if(tb_data === 8'h22) // Switch to test phase. 0x22 is the magic code
        begin
            test_phase <= 1;
        end
    end
    
    assign tester_arithop = (accumulator < 2 ? 8'b11100000 /*sub r0, r0 */ : 8'b11010001 /*add r0, r1*/);
    assign tester_memop = (accumulator < 2 ? 8'b01010000 /*load r1, r0, 0*/ : 8'b01100000 /*load r2, r0, 0*/);
    assign tester_instruction = (accumulator[6] ? nop : (accumulator[0] ? tester_memop : tester_arithop));
    assign imem_data = (test_phase ? tester_instruction : (imem_addr < 32 ? tester_memory[{test_level, 1'b0, imem_addr[4:0]}] : nop));


    // Initialization and clock.
    initial
    begin
        // Initialize Inputs
        clk = 0;
        areset = 1;
        #18;

        areset = 0;
    end
    always #5 clk = ~clk;

endmodule

/** [Data Memory module]
  *
  * This module is given, so you do not need to reimplement it.
  * You could however, change the values in the data memory for more robust testing.
  * 
  */
module memory
(
    input clk,
    input areset,

    input write, // 0 : read mode, 1 : write mode
    input [7:0] addr,

    input [7:0] write_data, 
    output [7:0] read_data
);

    reg [7:0] data_memory[31:0]; // 32 bytes.

    always @(posedge clk)
    begin
        if(areset) begin
            data_memory[0] <= 8'h01;
            data_memory[1] <= 8'h02;
            data_memory[2] <= 8'h03;
            data_memory[3] <= 8'h04;
            data_memory[4] <= 8'h05;
            data_memory[5] <= 8'h06;
            data_memory[6] <= 8'h07;
            data_memory[7] <= 8'h08;
            data_memory[8] <= 8'h09;
            data_memory[9] <= 8'h10;
            data_memory[10] <= 8'h11;
            data_memory[11] <= 8'h12;
            data_memory[12] <= 8'h13;
            data_memory[13] <= 8'h14;
            data_memory[14] <= 8'h15;
            data_memory[15] <= 8'h16;
            data_memory[16] <= 8'h17;
            data_memory[17] <= 8'h18;
            data_memory[18] <= 8'h19;
            data_memory[19] <= 8'h20;
            data_memory[20] <= 8'h21;
            data_memory[21] <= 8'h22;
            data_memory[22] <= 8'h23;
            data_memory[23] <= 8'h24;
            data_memory[24] <= 8'h25;
            data_memory[25] <= 8'h26;
            data_memory[26] <= 8'h27;
            data_memory[27] <= 8'h28;
            data_memory[28] <= 8'h29;
            data_memory[29] <= 8'h30;
            data_memory[30] <= 8'h31;
            data_memory[31] <= 8'h32;
        end
        else if(write != 0) begin
            data_memory[addr] <= write_data;
        end
    end

    assign read_data = (write || addr > 32) ? 8'hff : data_memory[addr];

endmodule
