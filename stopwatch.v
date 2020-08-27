module stopwatch (clk, button, clr, select, seg_1, seg_10);

input clk, button, clr, select;
output [6:0] seg_1, seg_10;

// internal wires
wire [6:0] count_1, count_10;                 // counter values
wire idle, start, store_1, store_2, finish;   // control signals

// counter
counter counter_0 (.clkin(clk), .clr(clr), .sec(count_1), .tensec(count_10));
// controller
controller controller_0 (.clk(clk), .clr(clr), .button(button), .idle(idle), .start(start), 
                         .store_1(store_1), .store_2(store_2), .finish(finish));

// time records for 1st & 2nd event in seven segment display format
reg [6:0] record1_1, record1_10, record2_1, record2_10;

/* TODO */
always @(posedge clk) begin
    if (clr) begin
        /* Your code here*/
		  {record1_10, record1_1} <= {0, 0};
		  {record2_10, record2_1} <= {0, 0};
    end

    else if (store_1) begin
        /* Your code here*/
		  {record1_10, record1_1} <= {count_10, count_1};
    end

    else if (store_2) begin
        /* Your code here*/
		  {record2_10, record2_1} <= {count_10, count_1};
    end
end

/* TODO */
// output assignment
// 1. Turn on all seven segments when it is idle.
// 2. Show counter value when stopwatch is working.
// 3. When stopwatch stops after third button press, 
//    show the 1st record or the 2nd record depending
//    on the select signal
/* Your code here*/

assign {seg_10, seg_1} = idle ? {7'b1111111, 7'b1111111} : 
			(finish ? (select ? {record1_10, record1_1}:{record2_10, record2_1}) : {count_10, count_1});

endmodule

module controller (clk, clr, button, store_1, store_2, finish, start, idle);

input clk, clr, button;
output store_1, store_2; // high for only one cycle when the 2nd/3rd button press comes
output idle;             // high when it is in idle state
output start;            // high for only one cycle when the 1st button press comes
output finish;           // high after the 3rd button press

// state encoding
// S0: Idle
// S1: Button pressed once
// S2: Button pressed twice
// S3: Button pressed three times (or more)
parameter S0 = 2'b00, S1 = 2'b01, S2 = 2'b10, S3 = 2'b11;

wire button_sync; // synchronized button signal
button_press_sync button_press_sync_0 (.clk(clk), .button_in(button), .clr(clr), .button_out(button_sync));

reg [1:0] state; 
reg [1:0] state_d; // 1 cycle delayed state

/* TODO */
always @(posedge clk) begin
    if (clr) begin
        /* Your code here*/
		  state <= S0;
    end
    else if (button_sync) begin
        case(state)
        /* Your code here*/
				 S0: state <= S1;
				 S1: state <= S2;
				 S2: state <= S3;
				 S3: state <= S3;
        endcase
    end
    else begin
        /* Your code here*/
    end
    state_d <= state;
end

/* TODO */
// output assignment
/* Your code here*/

assign start = (state_d == S0) & (state == S1);
assign store_1 = (state_d == S1) & (state == S2);
assign store_2 = (state_d == S2) & (state == S3);
assign idle = (state == S0) & ~start;
assign finish = (state == S3);

endmodule

// Button Press Synchronizer, Frequency Divider, Two-Digit Counter, 7-Segment Display
// are already implemented for you.

///////////////////////////////////////////////
///////////////////////////////////////////////
////////// DO NOT MODIFY BELOW CODES //////////
///////////////////////////////////////////////
///////////////////////////////////////////////

module button_press_sync(clk, button_in, clr, button_out);

    input clk;
    input button_in;
    input clr;
    output reg button_out;

    reg [1:0] current_state;
    reg [1:0] next_state;

    // state encoding
    parameter a = 2'b00, b = 2'b01, c = 2'b10, err = 2'b11;

    // determine state
    always @ (*)
    begin
        case({current_state, button_in})
            {a,1'b0} : next_state <= a;
            {a,1'b1} : next_state <= b;
            {b,1'b0} : next_state <= a;
            {b,1'b1} : next_state <= c;
            {c,1'b0} : next_state <= a;
            {c,1'b1} : next_state <= c;
            default  : next_state <= err;
        endcase
    end

    always @(posedge clk or posedge clr)
    begin
        if(clr)
            current_state <= a;
        else
            current_state <= next_state;
    end

    always @ (*)
    begin
        case (current_state)
            a : button_out <= 1'b0;
            b : button_out <= 1'b1;
            c : button_out <= 1'b0;
            default : button_out <= 1'b0;
        endcase
    end

endmodule

module counter(input clkin, input clr, output reg [6:0] sec, output reg [6:0] tensec);
     reg [3:0] sec_out; reg [3:0] tensec_out; reg clk_sec; reg [4:0] cnt = 5'd0;
     
     // Frequency Divider
     always @(posedge clkin) begin
        if(clr) begin
            cnt <= 5'd0;
            clk_sec <= 1'b0;
        end
        if(cnt == 5'd24) begin
            cnt <= 5'd0;
            clk_sec <= ~clk_sec;
        end
        else begin
            cnt <= cnt +1;
        end
    end
    
    // Two-Digit Counter
    always @(posedge clk_sec or posedge clr)
        begin
            if(clr) begin
                sec_out <= 4'd0;
                tensec_out <= 4'd0;
            end
            else if(sec_out == 4'd9) begin
                sec_out <= 4'd0;
                if(tensec_out == 4'd9)
                    tensec_out <= 4'd0;
                else
                    tensec_out <= tensec_out + 4'd1;
                end
            else
                sec_out <= sec_out + 4'd1;
        end
    
    // 7-Segment Display
    always @(sec_out)
        begin
            case(sec_out)
                4'd0: sec<= 7'b0111111;
                4'd1: sec<= 7'b0000110;
                4'd2: sec<= 7'b1011011;
                4'd3: sec<= 7'b1001111;
                4'd4: sec<= 7'b1100110;
                4'd5: sec<= 7'b1101101;
                4'd6: sec<= 7'b1111101;
                4'd7: sec<= 7'b0000111;
                4'd8: sec<= 7'b1111111;
                4'd9: sec<= 7'b1101111;
                default: sec<= 7'b0000000;
            endcase
        end
            
    always @(tensec_out)
        begin
            case(tensec_out)
                4'd0: tensec<= 7'b0111111;
                4'd1: tensec<= 7'b0000110;
                4'd2: tensec<= 7'b1011011;
                4'd3: tensec<= 7'b1001111;
                4'd4: tensec<= 7'b1100110;
                4'd5: tensec<= 7'b1101101;
                4'd6: tensec<= 7'b1111101;
                4'd7: tensec<= 7'b0000111;
                4'd8: tensec<= 7'b1111111;
                4'd9: tensec<= 7'b1101111;
                default: tensec<= 7'b0000000;
            endcase
        end

endmodule

