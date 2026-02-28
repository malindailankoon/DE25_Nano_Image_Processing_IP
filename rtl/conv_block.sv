module conv_block(
    input logic clk, rst,
    input logic [71:0] data_in,
    input logic [71:0] kernel,
    input logic [20:0] thresh_value,
    input logic input_valid,
    output logic [7:0] data_out,
    output logic output_valid
);

    logic [143:0] ms_to_as_data;
    logic ms_to_as_data_valid;

    logic [20:0] as_to_ts_data;
    logic as_to_ts_valid;

    multiply_stage ms(
        .clk(clk),
        .rst(rst),
        .kernel(kernel),
        .pixel_window(data_in),
        .input_valid(input_valid),
        .multiplied_data(ms_to_as_data),
        .output_valid(ms_to_as_data_valid)
    );

    accum_block as(
        .clk(clk),
        .rst(rst),
        .data_in(ms_to_as_data),
        .input_valid(ms_to_as_data_valid),
        .data_out(as_to_ts_data),
        .out_valid(as_to_ts_valid)
    );

    thresh_block ts(
        .clk(clk),
        .rst(rst),
        .data_in(as_to_ts_data),
        .input_valid(as_to_ts_valid),
        .thresh_value(thresh_value),
        .data_out(data_out),
        .out_valid(output_valid)
    );


endmodule
