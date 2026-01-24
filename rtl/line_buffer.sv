module line_buffer (
    input logic         clk, rst,
    input logic [7:0]   data_in,
    input logic         data_in_valid,
    input logic         rd_req,
    output logic [23:0] data_out,
    output logic        full,
    output logic        done
);

    logic [7:0] line [0:511];
    logic [8:0] wrtptr, rdptr;
    logic [7:0] d0, d1, d2;
    logic shift_en;

    assign full = &wrtptr;
    assign done = &rdptr;

    // advancing of the wrtptr
    always_ff @( posedge clk ) begin
        if (rst)
            wrtptr <= '0;
        else if (data_in_valid) 
            wrtptr <= wrtptr + 1;
    end


    // writing logic to the buffer
    always_ff @(posedge clk) begin
        if (data_in_valid)
            line[wrtptr] <= data_in;
    end

    always_comb begin
        shift_en = 1'b0;
        if (wrtptr == 9'd1 || wrtptr == 9'd2 || wrtptr == 9'd3 || rd_req) begin
            shift_en = 1'b1;
        end
    end

    always_ff @(posedge clk) begin
        if (rst) begin
            rdptr <= 0;
        end
        else begin
            if (((wrtptr == 9'd1 || wrtptr == 9'd2 || wrtptr == 9'd3) && data_in_valid) || rd_req) begin
                rdptr <= rdptr + 1;
            end
            else begin
                rdptr <= rdptr;
            end
        end
    end


    // shift register logic 
    always_ff @(posedge clk) begin
        if (shift_en) begin
            d0 <= line[rdptr];
            d1 <= d0;
            d2 <= d1;
        end
    end


    // data out
    assign data_out = {d2, d1, d0};
    



    
endmodule