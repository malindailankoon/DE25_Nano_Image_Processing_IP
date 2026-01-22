// `timescale 1ns / 100ps

// module line_buffer(
//     input logic clk, rst,
//     input logic [7:0] data_in,
//     input logic data_valid,
//     output logic [23:0] data_out, // outputs 3 pixels needed for a 3x3 pixel convolution. note that verilog doesn't allow multidimensional port declarations
//     input logic rd_data
// );

//     logic [7:0] line [511:0]; // line buffer
//     logic [8:0] wrtptr, rdptr;

//     // modelling how data is written
//     always_ff @( posedge clk ) begin 
//         if (data_valid)
//             line[wrtptr] <= data_in;
//     end

//     // updating the wrtptr
//     always_ff @(posedge clk) begin
//         if (rst) 
//             wrtptr <= 'd0;
//         else if (data_valid)
//             wrtptr <= wrtptr + 'd1;
//     end

//     assign data_out = {line[rdptr], line[rdptr+1], line[rdptr+2]};

//     always_ff @(posedge clk) begin
//         if (rst)
//             rdptr <= 'd0;
//         else if (rd_data)
//             rdptr <= rdptr + 'd1;
//     end
    
// endmodule




`timescale 1ns / 100ps

module lineBuffer(
input   i_clk,
input   i_rst,
input [7:0] i_data,
input   i_data_valid,
output [23:0] o_data,
input i_rd_data
);

reg [7:0] line [511:0]; //line buffer
reg [8:0] wrPntr;
reg [8:0] rdPntr;

always @(posedge i_clk)
begin
    if(i_data_valid)
        line[wrPntr] <= i_data;
end

always @(posedge i_clk)
begin
    if(i_rst)
        wrPntr <= 'd0;
    else if(i_data_valid)
        wrPntr <= wrPntr + 'd1;
end

assign o_data = {line[rdPntr],line[rdPntr+1],line[rdPntr+2]};

always @(posedge i_clk)
begin
    if(i_rst)
        rdPntr <= 'd0;
    else if(i_rd_data)
        rdPntr <= rdPntr + 'd1;
end


endmodule
