module accum_block2(
    input logic         clk, rst,
    input logic [143:0] data_in,
    input logic         input_valid,
    output logic [15:0] data_out,
    output logic        out_valid
);
    /* verilaotr lint_off UNDRIVEN */
    /* verilator lint_off UNUSEDSIGNAL */
    // stage 1 signals
    logic [95:0] s1_temp, s1;
    logic        s1_valid;

    // stage 2 signals
    logic [63:0] s2_temp, s2;
    // logic [47:0] s2_temp, s2;
    logic        s2_valid;

    // stage 3 signals
    // logic [31:0] s3_temp, s3;
    logic [47:0] s3_temp, s3;
    // logic [15:0] s3_buff;
    logic        s3_valid;

    // stage 4 signals
    logic [31:0] s4_temp, s4;
    logic        s4_valid;

    // stage 5 signals
    logic [15:0] s5_temp;
    /* verilator lint_on UNUSEDSIGNAL */
    /* verilaotr lint_off UNDRIVEN */


    // control signal propegation
    always_ff @(posedge clk) begin
        if (rst) begin
            s1_valid <= 1'b0;
            s2_valid <= 1'b0;
            s3_valid <= 1'b0;
            s4_valid <= 1'b0;
            out_valid <= 1'b0;
        end
        else begin
            s1_valid <= input_valid;
            s2_valid <= s1_valid;
            s3_valid <= s2_valid;
            s4_valid <= s3_valid;
            out_valid <= s4_valid;
        end
    end


    // stage 1: 1st reduction stage
    genvar i;
    genvar j;
    generate
        for (i=0; i<3; i=i+1) begin
            for (j=0; j<16; j=j+1) begin
                full_adder fa(
                    .a(data_in[j + 48*i]),
                    .b(data_in[j + 16 + 48*i]),
                    .cin(data_in[j + 32 + 48*i]),
                    .s(s1_temp[j + 32*i]),
                    // .cout(s1_temp[j + 16 + 32*i])
                    .cout(s1_temp[ (j==0) ? 32'b0 : (j-1) + 16 + 32*i ])
                );
            end
        end
    endgenerate

    always_ff @( posedge clk ) begin
        if (input_valid) begin
            s1 <= s1_temp;
        end
    end


    // stage 2: 2nd reduction phase
    generate
        for (i=0; i<2; i=i+1) begin
            for (j=0; j<16; j=j+1) begin
                full_adder fa(
                    .a(s1[j + 48*i]),
                    .b(s1[j + 16 + 48*i]),
                    .cin(s1[j + 32 + 48*i]),
                    .s(s2_temp[j + 32*i]),
                    // .cout(s2_temp[j + 16 + 32*i])
                    .cout(s2_temp[ (j==0) ? 32'b0 : (j-1) + 16 + 32*i ])
                );
            end
        end
    endgenerate

    always_ff @(posedge clk) begin
        if (s1_valid)
            s2 <= s2_temp;
    end


    // stage 3: 3rd reduction stage
    generate
        for (j=0; j<16; j=j+1) begin
            full_adder fa(
                .a(s2[j]),
                .b(s2[j + 16]),
                .cin(s2[j + 32]),
                .s(s3_temp[j]),
                // .cout(s3_temp[j + 16])
                .cout(s3_temp[ (j==0) ? 32'b0 : j + 16 ])
            );
        end
    endgenerate

    assign s3_temp[47:32] = s2[63:48];

    always_ff @(posedge clk) begin
        if (s2_valid) begin
            s3 <= s3_temp;
            // s3_buff <= s2[63:48];
        end
    end


    // stage 4: 4th reduction stage
    generate
        for (j=0; j<16; j=j+1) begin
            full_adder fa(
                .a(s3[j]),
                .b(s3[j + 16]),
                // .cin(s3_buff),
                // .cin(s2[j + 48]),
                .cin(s3[j + 32]),
                .s(s4_temp[j]),
                // .cout(s4_temp[j + 16])
                .cout(s4_temp[ (j==0) ? 32'b0 : j + 16 ])
            );
        end
    endgenerate

    always_ff @(posedge clk) begin
        if (s3_valid)
            s4 <= s4_temp;
    end


    // stage 5: final stage (fast add)
    // TODO: implement an actual adder if final simulations are done

    // assign s5_temp = s4[15:0] + s4[31:16];
    assign s5_temp = s4[15:0] + {s4[30:16], 1'b0};

    always_ff @(posedge clk) begin
        if (s4_valid)
            data_out <= s5_temp;
    end


endmodule
