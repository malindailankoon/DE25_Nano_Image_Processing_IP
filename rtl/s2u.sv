module s2u(
    input logic [7:0] in,
    output logic [7:0] out,
    output logic is_neg
);

    always_comb begin
        if (in[7] == 1) begin
            out = (~in) + 1;
            is_neg = 1;
        end
        else begin
            out = in;
            is_neg = 0;
        end
    end

endmodule
