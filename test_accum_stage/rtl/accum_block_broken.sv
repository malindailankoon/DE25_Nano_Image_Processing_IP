module accum_block(
    input logic         clk, rst,
    input logic [143:0] data_in,
    input logic         input_valid,
    output logic [15:0] data_out,
    output logic        out_valid
);

    /* verilator lint_off UNUSEDSIGNAL */
    //################
    // stage 1 signals
    logic [15:0] s1_a1_sum_temp, s1_a1_carry_temp, s1_a1_sum, s1_a1_carry;
    logic [15:0] s1_a2_sum_temp, s1_a2_carry_temp, s1_a2_sum, s1_a2_carry;
    logic [15:0] s1_a3_sum_temp, s1_a3_carry_temp, s1_a3_sum, s1_a3_carry;
    logic        s1_valid;


    //################
    // stage 2 signals
    logic [15:0] s2_a1_sum_temp, s2_a1_carry_temp, s2_a1_sum, s2_a1_carry;
    logic [15:0] s2_a2_sum_temp, s2_a2_carry_temp, s2_a2_sum, s2_a2_carry;
    logic        s2_valid;


    //################
    // stage 3 signals
    logic [15:0] s3_a1_sum_temp, s3_a1_carry_temp, s3_a1_sum, s3_a1_carry;
    logic [15:0] carry_buff;
    logic        s3_valid;


    //################
    // stage 4 signals
    logic [15:0] s4_a1_sum_temp, s4_a1_carry_temp, s4_a1_sum, s4_a1_carry;
    logic        s4_valid;

    //################
    // stage 5 signals
    logic [15:0] s5_temp;
    logic        s5_valid;

    /* verilator lint_on UNUSEDSIGNAL */


    //###########################
    // Control signal propegation
    always_ff @(posedge clk) begin
        if (rst) begin
            s1_valid  <= 0;
            s2_valid  <= 0;
            s3_valid  <= 0;
            s4_valid  <= 0;
            s5_valid  <= 0;
            out_valid <= 0;
        end
        else begin
            s1_valid  <= input_valid;
            s2_valid  <= s1_valid;
            s3_valid  <= s2_valid;
            s4_valid  <= s3_valid;
            s5_valid  <= s4_valid;
            out_valid <= s5_valid;
        end
    end


    //########
    // Stage 1
    genvar i;
    generate
        for (i=0; i<16; i=i+1) begin
            full_adder fa(
                .a   (data_in[i]),
                .b   (data_in[i + 16]),
                .cin (data_in[i + 32]),
                .s   (s1_a1_sum_temp[i]),
                .cout(s1_a1_carry_temp[i])
            );
        end

        for (i=0; i<16; i=i+1) begin
            full_adder fa(
                .a   (data_in[i + 48]),
                .b   (data_in[i + 64]),
                .cin (data_in[i + 80]),
                .s   (s1_a2_sum_temp[i]),
                .cout(s1_a2_carry_temp[i])
            );
        end

        for (i=0; i<16; i=i+1) begin
            full_adder fa(
                .a   (data_in[i + 96]),
                .b   (data_in[i + 112]),
                .cin (data_in[i + 128]),
                .s   (s1_a3_sum_temp[i]),
                .cout(s1_a3_carry_temp[i])
            );
        end
    endgenerate

    always_ff @(posedge clk) begin
        s1_a1_sum <= s1_a1_sum_temp;
        s1_a2_sum <= s1_a2_sum_temp;
        s1_a3_sum <= s1_a3_sum_temp;

        s1_a1_carry <= {s1_a1_carry_temp[14:0], 1'b0};
        s1_a2_carry <= {s1_a2_carry_temp[14:0], 1'b0};
        s1_a3_carry <= {s1_a3_carry_temp[14:0], 1'b0};
    end


    // Stage 2
    generate
        for (i=0; i<16; i=i+1) begin
            full_adder fa(
                .a(s1_a1_sum[i]),
                .b(s1_a1_carry[i]),
                .cin(s1_a2_sum[i]),
                .s(s2_a1_sum_temp[i]),
                .cout(s2_a1_carry_temp[i])
            );
        end

        for (i=0; i<16; i=i+1) begin
            full_adder fa(
                .a(s1_a2_carry[i]),
                .b(s1_a3_sum[i]),
                .cin(s1_a3_carry[i]),
                .s(s2_a2_sum_temp[i]),
                .cout(s2_a2_carry_temp[i])
            );
        end
    endgenerate

    always_ff @(posedge clk) begin
        s2_a1_sum <= s2_a1_sum_temp;
        s2_a2_sum <= s2_a2_sum_temp;

        s2_a1_carry <= {s2_a1_carry_temp[14:0], 1'b0};
        s2_a2_carry <= {s2_a2_carry_temp[14:0], 1'b0};
    end


    //########
    // Stage 3

    generate
        for (i=0; i<16; i=i+1) begin
            full_adder fa(
                .a(s2_a1_sum[i]),
                .b(s2_a1_carry[i]),
                .cin(s2_a2_sum[i]),
                .s(s3_a1_sum_temp[i]),
                .cout(s3_a1_carry_temp[i])
            );
        end
    endgenerate

    always_ff @(posedge clk) begin
        s3_a1_sum   <= s3_a1_sum_temp;
        s3_a1_carry <= {s3_a1_carry_temp[14:0], 1'b0};
        carry_buff  <= s2_a2_carry;
    end



    //########
    // Stage 4
    generate
        for(i=0; i<16; i=i+1) begin
            full_adder fa(
                .a(s3_a1_sum[i]),
                .b(s3_a1_carry[i]),
                .cin(carry_buff[i]),
                .s(s4_a1_sum_temp[i]),
                .cout(s4_a1_carry_temp[i])
            );
        end
    endgenerate

    always_ff @(posedge clk) begin
        s4_a1_sum <= s4_a1_sum_temp;

        s4_a1_carry <= {s4_a1_carry_temp[14:0], 1'b0};
    end


    //########
    // Stage 5

    assign s5_temp = s4_a1_sum + s4_a1_carry;

    always_ff @(posedge clk) begin
        data_out <= s5_temp;
    end



endmodule

