module accum_block(
    input logic         clk, rst,
    input logic [143:0] data_in,
    input logic         input_valid,
    output logic [20:0] data_out,
    output logic        out_valid
);

    //###########################
    // Control signal propegation
    logic s1_valid, s2_valid, s3_valid, s4_valid, s5_valid;
    
    always_ff @(posedge clk) begin
        if (rst) begin
            s1_valid  <= 0;
            s2_valid  <= 0;
            s3_valid  <= 0;
            s4_valid  <= 0;
            s5_valid  <= 0;
            out_valid <= 0;
        end else begin
            s1_valid  <= input_valid;
            s2_valid  <= s1_valid;
            s3_valid  <= s2_valid;
            s4_valid  <= s3_valid;
            s5_valid  <= s4_valid;
            out_valid <= s5_valid;
        end
    end

    
    logic [20:0] ext_data [0:8];
    genvar j;
    generate
        for (j = 0; j < 9; j = j + 1) begin : sign_extend
            // Duplicate the sign bit (bit 15) 5 times, then append the 16 original bits
            assign ext_data[j] = {{5{data_in[(j*16) + 15]}}, data_in[j*16 +: 16]};
        end
    endgenerate



    logic [20:0] s1_a1_sum_temp, s1_a1_carry_temp, s1_a2_sum_temp, s1_a2_carry_temp, s1_a3_sum_temp, s1_a3_carry_temp;
    logic [20:0] s1_a1_sum, s1_a1_carry, s1_a2_sum, s1_a2_carry, s1_a3_sum, s1_a3_carry;
    
    logic [20:0] s2_a1_sum_temp, s2_a1_carry_temp, s2_a2_sum_temp, s2_a2_carry_temp;
    logic [20:0] s2_a1_sum, s2_a1_carry, s2_a2_sum, s2_a2_carry;
    
    logic [20:0] s3_a1_sum_temp, s3_a1_carry_temp;
    logic [20:0] s3_a1_sum, s3_a1_carry, carry_buff;
    
    logic [20:0] s4_a1_sum_temp, s4_a1_carry_temp;
    logic [20:0] s4_a1_sum, s4_a1_carry;
    
    logic [20:0] s5_temp;

    //########
    // Stage 1
    genvar i;
    generate
        for (i=0; i<21; i=i+1) begin : stg1
            full_adder fa1(.a(ext_data[0][i]), .b(ext_data[1][i]), .cin(ext_data[2][i]), .s(s1_a1_sum_temp[i]), .cout(s1_a1_carry_temp[i]));
            full_adder fa2(.a(ext_data[3][i]), .b(ext_data[4][i]), .cin(ext_data[5][i]), .s(s1_a2_sum_temp[i]), .cout(s1_a2_carry_temp[i]));
            full_adder fa3(.a(ext_data[6][i]), .b(ext_data[7][i]), .cin(ext_data[8][i]), .s(s1_a3_sum_temp[i]), .cout(s1_a3_carry_temp[i]));
        end
    endgenerate

    always_ff @(posedge clk) begin
        s1_a1_sum <= s1_a1_sum_temp;
        s1_a2_sum <= s1_a2_sum_temp;
        s1_a3_sum <= s1_a3_sum_temp;

        s1_a1_carry <= {s1_a1_carry_temp[19:0], 1'b0};
        s1_a2_carry <= {s1_a2_carry_temp[19:0], 1'b0};
        s1_a3_carry <= {s1_a3_carry_temp[19:0], 1'b0};
    end

    //########
    // Stage 2
    generate
        for (i=0; i<21; i=i+1) begin : stg2
            full_adder fa1(.a(s1_a1_sum[i]),  .b(s1_a1_carry[i]), .cin(s1_a2_sum[i]),   .s(s2_a1_sum_temp[i]), .cout(s2_a1_carry_temp[i]));
            full_adder fa2(.a(s1_a2_carry[i]),.b(s1_a3_sum[i]),   .cin(s1_a3_carry[i]), .s(s2_a2_sum_temp[i]), .cout(s2_a2_carry_temp[i]));
        end
    endgenerate

    always_ff @(posedge clk) begin
        s2_a1_sum <= s2_a1_sum_temp;
        s2_a2_sum <= s2_a2_sum_temp;

        s2_a1_carry <= {s2_a1_carry_temp[19:0], 1'b0};
        s2_a2_carry <= {s2_a2_carry_temp[19:0], 1'b0};
    end

    //########
    // Stage 3
    generate
        for (i=0; i<21; i=i+1) begin : stg3
            full_adder fa1(.a(s2_a1_sum[i]), .b(s2_a1_carry[i]), .cin(s2_a2_sum[i]), .s(s3_a1_sum_temp[i]), .cout(s3_a1_carry_temp[i]));
        end
    endgenerate

    always_ff @(posedge clk) begin
        s3_a1_sum   <= s3_a1_sum_temp;
        s3_a1_carry <= {s3_a1_carry_temp[19:0], 1'b0};
        
        carry_buff  <= s2_a2_carry; 
    end

    //########
    // Stage 4
    generate
        for(i=0; i<21; i=i+1) begin : stg4
            full_adder fa1(.a(s3_a1_sum[i]), .b(s3_a1_carry[i]), .cin(carry_buff[i]), .s(s4_a1_sum_temp[i]), .cout(s4_a1_carry_temp[i]));
        end
    endgenerate

    always_ff @(posedge clk) begin
        s4_a1_sum   <= s4_a1_sum_temp;
        s4_a1_carry <= {s4_a1_carry_temp[19:0], 1'b0};
    end

    //########
    // Stage 5
    assign s5_temp = s4_a1_sum + s4_a1_carry;
    always_ff @(posedge clk) begin
        data_out <= s5_temp;
    end

endmodule