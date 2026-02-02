module multiply_block(
    input logic clk, rst,
    input logic [7:0] pixel_data,
    input logic [7:0] kernal_data,
    input logic input_valid,
    output logic output_valid,
    output logic [15:0] multiply_out
);

    logic [7:0] s2u_to_mult8;
    logic is_neg_1;
    logic is_neg_2;
    logic [15:0] mo;

    s2u s2u_inst(.in(kernal_data), .out(s2u_to_mult8), .is_neg(is_neg_1));

    multiply8 m8(.clk(clk),
                 .rst(rst),
                 .is_neg_in(is_neg_1),
                 .is_neg_out(is_neg_2),
                 .a(pixel_data), 
                 .b(s2u_to_mult8),
                 .in_valid(input_valid),
                 .out(mo),
                 .output_valid(output_valid)
                 );

    u2s u2s_inst(.in(mo), 
                 .is_neg(is_neg_2),
                 .out(multiply_out));

endmodule