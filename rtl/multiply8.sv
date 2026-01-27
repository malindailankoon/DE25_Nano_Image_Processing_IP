module multiply8(
    input logic clk, rst,
    input logic [7:0] a, b,
    input logic in_valid,
    output logic [15:0] out,
    output logic output_valid
);

    // stage 1 signals
    logic partial_products [0:7][0:7];
    logic stage_one_valid;

    // stage 2 signals
    logic  [9:0] r1, r1_temp;
    logic  [7:0] r2, r2_temp;
    logic  [9:0] r3, r3_temp;
    logic  [7:0] r4, r4_temp;
    logic  [7:0] r5, r5_temp;
    logic  [7:0] r6, r6_temp;
    logic stage_two_valid;

    // stage 3 signals
    logic  [10:0] s1, s1_temp;
    logic [9:0] s2, s2_temp;
    logic [9:0] s3, s3_temp;
    logic [7:0] s4, s4_temp;
    logic stage_three_valid;

    // stage 4 signals
    logic [13:0] t1, t1_temp;
    logic [10:0] t2, t2_temp;
    logic [7:0] t3, t3_temp;
    logic stage_four_valid;

    // stage 5 signals
    logic [15:0] u1, u1_temp;
    logic [9:0] u2, u2_temp;
    logic stage_five_valid;


    // stage 6 signals
    logic [15:0] sum_temp;



    // control signal propegation
    always_ff @(posedge clk) begin
        if (rst) begin
            stage_one_valid <= 0;
            stage_two_valid <= 0;
            stage_three_valid <= 0;
            stage_four_valid <= 0;
            stage_five_valid <= 0;
            output_valid <= 0;
        end
        else begin
            stage_one_valid <= in_valid;
            stage_two_valid <= stage_one_valid;
            stage_three_valid <= stage_two_valid;
            stage_four_valid <= stage_three_valid;
            stage_five_valid <= stage_four_valid;
            output_valid <= stage_five_valid;
        end
    end




    // stage 1: generate the 64 partial products
    always_ff @(posedge clk) begin
        if (in_valid) begin
            for (int i=0; i<8; i=i+1) begin
                for (int j=0; j<8; j=j+1) begin
                    partial_products[i][j] <= a[i] & b[j];
                end
            end
        end
    end


    //---------------------------------------------------
    //-------stage 2: first reduction cycle--------------

    // column 0
    assign r1_temp[0] = partial_products[0][0];
    // column 1
    half_adder ha_1(.a(partial_products[0][1]), .b(partial_products[1][0]), .s(r1_temp[1]), .cout(r1_temp[2]));
    // column 2
    full_adder fa_1(.a(partial_products[0][2]), .b(partial_products[1][1]), .cin(partial_products[2][0]), .s(r2_temp[0]), .cout(r1_temp[3]));
    // column 3
    full_adder fa_2(.a(partial_products[0][3]), .b(partial_products[1][2]), .cin(partial_products[2][1]), .s(r2_temp[1]), .cout(r1_temp[4]));
    assign r3_temp[0] = partial_products[3][0];
    // column 4
    full_adder fa_3(.a(partial_products[0][4]), .b(partial_products[1][3]), .cin(partial_products[2][2]), .s(r2_temp[2]), .cout(r1_temp[5]));
    half_adder ha_2(.a(partial_products[3][1]), .b(partial_products[4][0]), .s(r3_temp[1]), .cout(r2_temp[3]));
    // column 5
    full_adder fa_4(.a(partial_products[0][5]), .b(partial_products[1][4]), .cin(partial_products[2][3]), .s(r3_temp[2]), .cout(r1_temp[6]));
    full_adder fa_5(.a(partial_products[3][2]), .b(partial_products[4][1]), .cin(partial_products[5][0]), .s(r4_temp[0]), .cout(r2_temp[4]));
    // column 6
    full_adder fa_6(.a(partial_products[0][6]), .b(partial_products[1][5]), .cin(partial_products[2][4]), .s(r3_temp[3]), .cout(r1_temp[7]));
    full_adder fa_7(.a(partial_products[3][3]), .b(partial_products[4][2]), .cin(partial_products[5][1]), .s(r4_temp[1]), .cout(r2_temp[5]));
    assign r5_temp[0] = partial_products[6][0];
    // column 7
    full_adder fa_8(.a(partial_products[0][7]), .b(partial_products[1][6]), .cin(partial_products[2][5]), .s(r3_temp[4]), .cout(r1_temp[8]));
    full_adder fa_9(.a(partial_products[3][4]), .b(partial_products[4][3]), .cin(partial_products[5][2]), .s(r4_temp[2]), .cout(r2_temp[6]));
    assign r5_temp[1] = partial_products[6][1];
    assign r6_temp[0] = partial_products[7][0];
    // column 8
    half_adder ha_3(.a(partial_products[1][7]), .b(partial_products[2][6]), .s(r3_temp[5]), .cout(r1_temp[9]));
    full_adder fa_10(.a(partial_products[3][5]), .b(partial_products[4][4]), .cin(partial_products[5][3]), .s(r4_temp[3]), .cout(r2_temp[7]));
    assign r5_temp[2] = partial_products[6][2];
    assign r6_temp[1] = partial_products[7][1];
    // column 9
    assign r3_temp[6] = partial_products[2][7];
    full_adder fa_11(.a(partial_products[3][6]), .b(partial_products[4][5]), .cin(partial_products[5][4]), .s(r4_temp[4]), .cout(r3_temp[7]));
    assign r5_temp[3] = partial_products[6][3];
    assign r6_temp[2] = partial_products[7][2];
    // coulumn 10
    full_adder fa_12(.a(partial_products[3][7]), .b(partial_products[4][6]), .cin(partial_products[5][5]), .s(r4_temp[5]), .cout(r3_temp[8]));
    assign r5_temp[4] = partial_products[6][4];
    assign r6_temp[3] = partial_products[7][3];
    // column 11
    half_adder ha_4(.a(partial_products[4][7]), .b(partial_products[5][6]), .s(r4_temp[6]), .cout(r3_temp[9]));
    assign r5_temp[5] = partial_products[6][5];
    assign r6_temp[4] = partial_products[7][4];
    // column 12
    assign r4_temp[7] = partial_products[5][7]; 
    assign r5_temp[6] = partial_products[6][6];
    assign r6_temp[5] = partial_products[7][5];
    // column 13
    assign r5_temp[7] = partial_products[6][7];
    assign r6_temp[6] = partial_products[7][6];
    // column 14
    assign r6_temp[7] = partial_products[7][7];

    always_ff @(posedge clk) begin
        if (stage_one_valid) begin
            r1 <= r1_temp;
            r2 <= r2_temp;
            r3 <= r3_temp;
            r4 <= r4_temp;
            r5 <= r5_temp;
            r6 <= r6_temp;
        end
    end



    


    // half_adder ha_5(.a(), .b(), .s(), .cout());
    // full_adder fa13(.a(), .b(), .cin(), .s(), .cout());
    //---------------------------------------------------------
    // ----------stage 3: 2nd reduction cycle------------------

    // column 1
    assign s1_temp[0] = r1[0];
    // column 2
    assign s1_temp[1] = r1[1];
    // column 3
    half_adder ha_5(.a(r1[2]), .b(r2[0]), .s(s1_temp[2]), .cout(s1_temp[3]));
    // column 4
    full_adder fa13(.a(r1[3]), .b(r2[1]), .cin(r3[0]), .s(s2_temp[0]), .cout(s1_temp[4]));
    // column 5
    full_adder fa14(.a(r1[4]), .b(r2[2]), .cin(r3[1]), .s(s2_temp[1]), .cout(s1_temp[5]));
    // column 6
    full_adder fa15(.a(r1[5]), .b(r2[3]), .cin(r3[2]), .s(s2_temp[2]), .cout(s1_temp[6]));
    assign s3_temp[0] = r4[0];
    // column 7
    full_adder fa16(.a(r1[6]), .b(r2[4]), .cin(r3[3]), .s(s2_temp[3]), .cout(s1_temp[7]));
    half_adder ha_6(.a(r4[1]), .b(r5[0]), .s(s3_temp[1]), .cout(s2_temp[4]));
    // column 8
    full_adder fa17(.a(r1[7]), .b(r2[5]), .cin(r3[4]), .s(s3_temp[2]), .cout(s1_temp[8]));
    full_adder fa18(.a(r4[2]), .b(r5[1]), .cin(r6[0]), .s(s4_temp[0]), .cout(s2_temp[5]));
    // column 9
    full_adder fa19(.a(r1[8]), .b(r2[6]), .cin(r3[5]), .s(s3_temp[3]), .cout(s1_temp[9]));
    full_adder fa20(.a(r4[3]), .b(r5[2]), .cin(r6[1]), .s(s4_temp[1]), .cout(s2_temp[6]));
    // column 10
    full_adder fa21(.a(r1[9]), .b(r2[7]), .cin(r3[6]), .s(s3_temp[4]), .cout(s1_temp[10]));
    full_adder fa22(.a(r4[4]), .b(r5[3]), .cin(r6[2]), .s(s4_temp[2]), .cout(s2_temp[7]));
    // column 11
    assign s3_temp[5] = r3[7];
    full_adder fa23(.a(r4[5]), .b(r5[4]), .cin(r6[3]), .s(s4_temp[3]), .cout(s2_temp[8]));
    // column 12
    assign s3_temp[6] = r3[8];
    full_adder fa24(.a(r4[6]), .b(r5[5]), .cin(r6[4]), .s(s4_temp[4]), .cout(s2_temp[9]));
    // column 13
    assign s3_temp[7] = r3[9];
    full_adder fa25(.a(r4[7]), .b(r5[6]), .cin(r6[5]), .s(s4_temp[5]), .cout(s3_temp[8]));
    // column 14
    half_adder ha_7(.a(r5[7]), .b(r6[6]), .s(s4_temp[6]), .cout(s3_temp[9]));
    // column 15
    assign s4_temp[7] = r6[7];


    always_ff @(posedge clk) begin
        if (stage_two_valid) begin
            s1 <= s1_temp;
            s2 <= s2_temp;
            s3 <= s3_temp;
            s4 <= s4_temp;
        end
    end


    //--------------------------------------
    //---stage 3: 4th reduction cycle-------
    // column 1
    assign t1_temp[0] = s1[0];
    // column 2
    assign t1_temp[1] = s1[1];
    // column 3
    assign t1_temp[2] = s1[2];
    // column 4
    half_adder ha_8(.a(s1[3]), .b(s2[0]), .s(t1_temp[3]), .cout(t1_temp[4]));
    // column 5
    half_adder ha_9(.a(s1[4]), .b(s2[1]), .s(t2_temp[0]), .cout(t1_temp[5]));
    // column 6
    full_adder fa26(.a(s1[5]), .b(s2[2]), .cin(s3[0]), .s(t2_temp[1]), .cout(t1_temp[6]));
    // column 7
    full_adder fa27(.a(s1[6]), .b(s2[3]), .cin(s3[1]), .s(t2_temp[2]), .cout(t1_temp[7]));
    // column 8
    full_adder fa28(.a(s1[7]), .b(s2[4]), .cin(s3[2]), .s(t2_temp[3]), .cout(t1_temp[8]));
    assign t3_temp[0] = s4[0];
    // column 9
    full_adder fa29(.a(s1[8]), .b(s2[5]), .cin(s3[3]), .s(t2_temp[4]), .cout(t1_temp[9]));
    assign t3_temp[1] = s4[1];
    // column 10
    full_adder fa30(.a(s1[9]), .b(s2[6]), .cin(s3[4]), .s(t2_temp[5]), .cout(t1_temp[10]));
    assign t3_temp[2] = s4[2];
    // column 11
    full_adder fa31(.a(s1[10]), .b(s2[7]), .cin(s3[5]), .s(t2_temp[6]), .cout(t1_temp[11]));
    assign t3_temp[3] = s4[3];
    // column 12
    half_adder ha_10(.a(s2[8]), .b(s3[6]), .s(t2_temp[7]), .cout(t1_temp[12]));
    assign t3_temp[4] = s4[4];
    // column 13
    half_adder ha_11(.a(s2[9]), .b(s3[7]), .s(t2_temp[8]), .cout(t1_temp[13]));
    assign t3_temp[5] = s4[5];
    // column 14
    assign t2_temp[9] = s3[8];
    assign t3_temp[6] = s4[6];
    // column 15
    assign t2_temp[10] = s3[9];
    assign t3_temp[7] = s4[7];


    always_ff @(posedge clk) begin 
        if (stage_three_valid) begin
            t1 <= t1_temp;
            t2 <= t2_temp;
            t3 <= t3_temp;
        end
    end



    //------------------------------------------
    //-----stage 5: final reduction layer-------

    //column 1
    assign u1_temp[0] = t1[0];
    // column 2
    assign u1_temp[1] = t1[1];
    // column 3
    assign u1_temp[2] = t1[2];
    // column 4
    assign u1_temp[3] = t1[3];
    // column 5
    half_adder ha_12(.a(t1[4]), .b(t2[0]), .s(u1_temp[4]), .cout(u1_temp[5]));
    // column 6
    half_adder ha_13(.a(t1[5]), .b(t2[1]), .s(u2_temp[0]), .cout(u1_temp[6]));
    // column 7
    half_adder ha_14(.a(t1[6]), .b(t2[2]), .s(u2_temp[1]), .cout(u1_temp[7]));
    // column 8
    full_adder fa32(.a(t1[7]), .b(t2[3]), .cin(t3[0]), .s(u2_temp[2]), .cout(u1_temp[8]));
    // column 9
    full_adder fa33(.a(t1[8]), .b(t2[4]), .cin(t3[1]), .s(u2_temp[3]), .cout(u1_temp[9]));
    // column 10
    full_adder fa34(.a(t1[9]), .b(t2[5]), .cin(t3[2]), .s(u2_temp[4]), .cout(u1_temp[10]));
    // column 11
    full_adder fa35(.a(t1[10]), .b(t2[6]), .cin(t3[3]), .s(u2_temp[5]), .cout(u1_temp[11]));
    // column 12
    full_adder fa36(.a(t1[11]), .b(t2[7]), .cin(t3[4]), .s(u2_temp[6]), .cout(u1_temp[12]));
    // column 13
    full_adder fa37(.a(t1[12]), .b(t2[8]), .cin(t3[5]), .s(u2_temp[7]), .cout(u1_temp[13]));
    // column 14
    full_adder fa38(.a(t1[13]), .b(t2[9]), .cin(t3[6]), .s(u2_temp[8]), .cout(u1_temp[14]));
    // column 15
    half_adder ha_15(.a(t2[10]), .b(t3[7]), .s(u2_temp[9]), .cout(u1_temp[15]));


    always_ff @(posedge clk) begin
        if (stage_four_valid) begin
            u1 <= u1_temp;
            u2 <= u2_temp;
        end
    end


    //------------------------------------------------
    //----stage 6: final addition stage---------------

    // for now i'm just going to add, if the simulation works remember to make it faster

    assign sum_temp = u1 + {1'b0, u2, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0};


    always_ff @(posedge clk) begin
        if (stage_five_valid) begin
            out <= sum_temp;
        end
    end



endmodule