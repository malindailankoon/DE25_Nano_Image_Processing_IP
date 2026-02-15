module thresh_block(
    input logic        clk, rst,
    input logic [15:0] data_in,
    input logic        input_valid,
    input logic [15:0] thresh_value,
    output logic [7:0] data_out,
    output logic       out_valid
);

    logic [7:0] data_out_temp;

    assign data_out_temp = (data_in > thresh_value) ? 8'd255 : 8'd0;

    always_ff @(posedge clk) begin
        if (rst) begin
            out_valid <= 0;
        end else begin
            out_valid <= input_valid;
        end

        data_out <= data_out_temp;
        
    end

endmodule
