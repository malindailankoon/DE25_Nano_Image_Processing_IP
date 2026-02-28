module thresh_block(
    input logic        clk, rst,
    input logic [20:0] data_in, // modified the data in from 16 bits to 21 bits to mach the new bit width
    input logic        input_valid,
    input logic [20:0] thresh_value, // thresh is 21 bits now as well
    output logic [7:0] data_out,
    output logic       out_valid
);

    logic [7:0] data_out_temp;

    // assign data_out_temp = (data_in > thresh_value) ? 8'd255 : 8'd0;
    // logic [20:0] tv = 

    // assign data_out_temp = ($signed(data_in) > $signed(21'd45)) ? 8'd255 : 8'd0;
    assign data_out_temp = ($signed(data_in) > $signed(thresh_value)) ? 8'd255 : 8'd0;

    always_ff @(posedge clk) begin
        if (rst) begin
            out_valid <= 0;
        end else begin
            out_valid <= input_valid;
        end

        data_out <= data_out_temp;
        
    end

endmodule
