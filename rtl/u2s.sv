module u2s(
    input logic [15:0] in,
    input logic is_neg,
    output logic [15:0] out
);

    always_comb begin
        if (is_neg == 1'b1) begin
            out = (~in) + 1;
        end
        else begin
            out = in;
        end
    end

endmodule
