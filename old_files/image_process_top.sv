`timescale 1ns / 100ps

module image_process_top(
    input axi_clk, 
    input axi_rst_n,
    // slave interface
    input data_in_valid,
    input [7:0] data_in,
    output o_data_ready,
    // master interface
    output o_data_valid,
    output [7:0] o_data,
    input i_data_ready,
    // interrupt signal
    output intr
);

    logic [71:0] pixel_data;
    logic pdv;
    logic axi_prog_full;
    logic [7:0] convolved_data;
    logic convolved_data_valid;


    assign o_data_ready = !axi_prog_full;

    imageControl IC(
        .clk(axi_clk),
        .rst(!axi_rst_n),
        .pixel_data_in(data_in),
        .pixel_data_in_valid(data_in_valid),
        .pixel_data_out(pixel_data),
        .pixel_data_out_valid(pdv),
        .o_intr(intr)
    );

    conv Conv(
        .clk(axi_clk),
        .pixel_data_in(pixel_data),
        .pixel_data_in_valid(pdv),
        .data_out(convolved_data),
        .data_out_valid(convolved_data_valid)
    );

    util_axis_fifo 
    #(
        .DATA_WIDTH(8),
        .ADDRESS_WIDTH(4),
        .ASYNC_CLK(0),
        .M_AXIS_REGISTERED(1),
        .ALMOST_EMPTY_THRESHOLD(2),
        .ALMOST_FULL_THRESHOLD(8),
        .TLAST_EN(0),
        .TKEEP_EN(0),
        .REMOVE_NULL_BEAT_EN(0)
    ) FIFO (
        .m_axis_aclk(axi_clk),
        .m_axis_aresetn(axi_rst_n),
        .m_axis_ready(i_data_ready),
        .m_axis_valid(o_data_valid),
        .m_axis_data(o_data),
        .m_axis_tkeep(),
        .m_axis_tlast(),
        .m_axis_level(),
        .m_axis_empty(),
        .m_axis_almost_empty(),

        .s_axis_aclk(axi_clk),
        .s_axis_aresetn(axi_rst_n),
        .s_axis_ready(),
        .s_axis_valid(convolved_data_valid),
        .s_axis_data(convolved_data),
        .s_axis_tkeep(),
        .s_axis_tlast(),
        .s_axis_room(),
        .s_axis_full(),
        .s_axis_almost_full(axi_prog_full)
    );

endmodule




// `timescale 1ns / 1ps



// module imageProcessTop(
// input   axi_clk,
// input   axi_reset_n,
// //slave interface
// input   i_data_valid,
// input [7:0] i_data,
// output  o_data_ready,
// //master interface
// output  o_data_valid,
// output [7:0] o_data,
// input   i_data_ready,
// //interrupt
// output  o_intr

//     );

// wire [71:0] pixel_data;
// wire pixel_data_valid;
// wire axis_prog_full;
// wire [7:0] convolved_data;
// wire convolved_data_valid;

// assign o_data_ready = !axis_prog_full;
    
// imageControl IC(
//     .i_clk(axi_clk),
//     .i_rst(!axi_reset_n),
//     .i_pixel_data(i_data),
//     .i_pixel_data_valid(i_data_valid),
//     .o_pixel_data(pixel_data),
//     .o_pixel_data_valid(pixel_data_valid),
//     .o_intr(o_intr)
//   );    
  
//  conv conv(
//      .i_clk(axi_clk),
//      .i_pixel_data(pixel_data),
//      .i_pixel_data_valid(pixel_data_valid),
//      .o_convolved_data(convolved_data),
//      .o_convolved_data_valid(convolved_data_valid)
//  ); 
 
//  outputBuffer OB (
//    .wr_rst_busy(),        // output wire wr_rst_busy
//    .rd_rst_busy(),        // output wire rd_rst_busy
//    .s_aclk(axi_clk),                  // input wire s_aclk
//    .s_aresetn(axi_reset_n),            // input wire s_aresetn
//    .s_axis_tvalid(convolved_data_valid),    // input wire s_axis_tvalid
//    .s_axis_tready(),    // output wire s_axis_tready
//    .s_axis_tdata(convolved_data),      // input wire [7 : 0] s_axis_tdata
//    .m_axis_tvalid(o_data_valid),    // output wire m_axis_tvalid
//    .m_axis_tready(i_data_ready),    // input wire m_axis_tready
//    .m_axis_tdata(o_data),      // output wire [7 : 0] m_axis_tdata
//    .axis_prog_full(axis_prog_full)  // output wire axis_prog_full
//  );
  
    
    
// endmodule