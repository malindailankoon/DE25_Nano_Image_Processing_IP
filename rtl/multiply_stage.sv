module multiply_stage(
    input logic          clk, rst,
    input logic [71:0]   kernel,
    input logic [71:0]   pixel_window,
    input logic          input_valid,
    output logic [143:0] multiplied_data,
    output logic         output_valid,
);

    logic [8:0] mult_valid;

    assign output_valid = & mult_valid;

    multiply_block mb1(
        .clk(clk),
        .rst(rst),
        .pixel_data(pixel_window[7:0]),
        .kernel_data(kernel[7:0]),
        .input_valid(input_valid),
        .multiply_out(multiplied_data[15:0]),
        .output_valid(mult_valid[0])
    );

    multiply_block mb2(
        .clk(clk),
        .rst(rst),
        .pixel_data(pixel_window[15:8]),
        .kernel_data(kernel[15:8]),
        .input_valid(input_valid),
        .multiply_out(multiplied_data[31:16]),
        .output_valid(mult_valid[1])
    );

    multiply_block mb3(
        .clk(clk),
        .rst(rst),
        .pixel_data(pixel_window[23:16]),
        .kernel_data(kernel[23:16]),
        .input_valid(input_valid),
        .multiply_out(multiplied_data[47:32]),
        .output_valid(mult_valid[2])
    );

    multiply_block mb4(
        .clk(clk),
        .rst(rst),
        .pixel_data(pixel_window[31:24]),
        .kernel_data(kernel[31:24]),
        .input_valid(input_valid),
        .multiply_out(multiplied_data[63:48]),
        .output_valid(mult_valid[3])
    );

    multiply_block mb5(
        .clk(clk),
        .rst(rst),
        .pixel_data(pixel_window[39:32]),
        .kernel_data(kernel[39:24]),
        .input_valid(input_valid),
        .multiply_out(multiplied_data[79:64]),
        .output_valid(mult_valid[4])
    );

    multiply_block mb6(
        .clk(clk),
        .rst(rst),
        .pixel_data(pixel_window[47:40]),
        .kernel_data(kernel[47:40]),
        .input_valid(input_valid),
        .multiply_out(multiplied_data[95:80]),
        .output_valid(mult_valid[5])
    );

    multiply_block mb7(
        .clk(clk),
        .rst(rst),
        .pixel_data(pixel_window[55:48]),
        .kernel_data(kernel[55:48]),
        .input_valid(input_valid),
        .multiply_out(multiplied_data[111:96]),
        .output_valid(mult_valid[6])
    );

    multiply_block mb8(
        .clk(clk),
        .rst(rst),
        .pixel_data(pixel_window[63:56]),
        .kernel_data(kernel[63:56]),
        .input_valid(input_valid),
        .multiply_out(multiplied_data[127:112]),
        .output_valid(mult_valid[7])
    );

    multiply_block mb9(
        .clk(clk),
        .rst(rst),
        .pixel_data(pixel_window[71:64]),
        .kernel_data(kernel[71:64]),
        .input_valid(input_valid),
        .multiply_out(multiplied_data[143:128]),
        .output_valid(mult_valid[8])
    );

endmodule