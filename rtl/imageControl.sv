// `timescale 1ns / 1ps

// module imageControl(
//     input  logic        clk, rst,
//     input  logic [7:0]  pixel_data_in,
//     input  logic        pixel_data_in_valid,
//     output logic [71:0] pixel_data_out,
//     output logic        pixel_data_out_valid,
//     output logic        o_intr
// );

//     logic [8:0] pixelCounter, readCounter;
//     logic [1:0] currentWrLineBuffer;
//     logic [3:0] lineBufferDataValid, lineBuffRdData;
//     logic [1:0] currentRdLineBuffer;
//     logic [23:0] lb0data, lb1data, lb2data, lb3data;
//     logic rd_line_buffer;
//     logic [11:0] totalPixelCounter;
//     logic rdState;

//     // --- control logic for initiating the reading once 3 rows have been populated -- 
//     localparam IDLE = 1'b0,
//                RD_BUFFER = 1'b1;

//     assign pixel_data_out_valid = rd_line_buffer;

//     always_ff @(posedge clk) begin 
//         if (rst) 
//             totalPixelCounter <= 0;
//         else if (pixel_data_in_valid && !rd_line_buffer)
//             totalPixelCounter <= totalPixelCounter + 1;
//         else if (!pixel_data_in_valid && rd_line_buffer)
//             totalPixelCounter <= totalPixelCounter - 1;
//     end

//     always_ff @(posedge clk) begin
//         if (rst) begin
//             rdState <= IDLE;
//             rd_line_buffer <= 1'b0;
//             o_intr <=1'b0;
//         end
//         else begin
//             case (rdState) 
//                 IDLE: begin
//                     o_intr <= 1'b0;
//                     if (totalPixelCounter >= 1536) begin // once 3 rows have been populated, start reading 
//                         rd_line_buffer <= 1'b1;
//                         rdState <= RD_BUFFER;
//                     end
//                 end

//                 RD_BUFFER: begin
//                     if (readCounter == 511) begin
//                         rdState <= IDLE;
//                         rd_line_buffer <= 1'b0;
//                         o_intr <= 1'b1;
//                     end
//                 end
//             endcase
//         end
//     end

//     always_ff @(posedge clk) begin
//         if (rst)
//             pixelCounter <= 0;
//         else if (pixel_data_in_valid)
//             pixelCounter <= pixelCounter + 1'b1;
//     end

//     // --- Control logic for choosing which line buffer to send pixels to ---
//     always_ff @(posedge clk) begin
//         if (rst)
//             currentWrLineBuffer <= 0;
//         else if (pixelCounter == 511 && pixel_data_in_valid) // with this logic (note the non blocking assignment of the update) the currentWrLineBuffer will 
//             currentWrLineBuffer <= currentWrLineBuffer + 1;  // update just as the 512 pixel is written to the old line buffer (the updating of the currentWrLineBuffer is not immediate).
//     end

//     always_comb begin
//         lineBufferDataValid = 4'b0;
//         lineBufferDataValid[currentWrLineBuffer] = pixel_data_in_valid;
//     end
//     //-----------------------------------------------------------------------




//     // --- control logic to choose which line buffers to read from --- (can read from 3 line buffers at a time)
//     always_ff @(posedge clk) begin
//         if (rst)
//             readCounter <= 0;
//         else if (rd_line_buffer)
//             readCounter <= readCounter + 1;
//     end

//     always_ff @(posedge clk) begin
//         if (rst)
//             currentRdLineBuffer <= 0;
//         else if (readCounter == 511 && rd_line_buffer)
//             currentRdLineBuffer <= currentRdLineBuffer + 1;
//     end

//     always_comb begin
//         case (currentRdLineBuffer) // control logic for choosing the datapaths
//             2'b00: pixel_data_out = {lb2data, lb1data, lb0data};
//             2'b01: pixel_data_out = {lb3data, lb2data, lb1data};
//             2'b10: pixel_data_out = {lb0data, lb3data, lb2data};
//             default: pixel_data_out = {lb1data, lb0data, lb3data};
//         endcase
//     end

//     always_comb begin
//         case (currentRdLineBuffer) // control logic for the read enable signals
//             2'b00: begin
//                 lineBuffRdData[0] = rd_line_buffer;
//                 lineBuffRdData[1] = rd_line_buffer;
//                 lineBuffRdData[2] = rd_line_buffer;
//                 lineBuffRdData[3] = 1'b0;
//             end
//             2'b01: begin
//                 lineBuffRdData[0] = 1'b0;
//                 lineBuffRdData[1] = rd_line_buffer;
//                 lineBuffRdData[2] = rd_line_buffer;
//                 lineBuffRdData[3] = rd_line_buffer;
//             end
//             2'b10: begin
//                 lineBuffRdData[0] = rd_line_buffer;
//                 lineBuffRdData[1] = 1'b0;
//                 lineBuffRdData[2] = rd_line_buffer;
//                 lineBuffRdData[3] = rd_line_buffer;
//             end
//             default: begin
//                 lineBuffRdData[0] = rd_line_buffer;
//                 lineBuffRdData[1] = rd_line_buffer;
//                 lineBuffRdData[2] = 1'b0;
//                 lineBuffRdData[3] = rd_line_buffer;
//             end
//         endcase 
//     end
//     //-----------------------------------------------------------------------------------

//     line_buffer lb0(
//         .clk(clk),
//         .rst(rst),
//         .data_in(pixel_data_in),
//         .data_valid(lineBufferDataValid[0]),
//         .data_out(lb0data),
//         .rd_data(lineBuffRdData[0])
//     );


//     line_buffer lb1(
//         .clk(clk),
//         .rst(rst),
//         .data_in(pixel_data_in),
//         .data_valid(lineBufferDataValid[1]),
//         .data_out(lb1data),
//         .rd_data(lineBuffRdData[1])
//     );

//     line_buffer lb2(
//         .clk(clk),
//         .rst(rst),
//         .data_in(pixel_data_in),
//         .data_valid(lineBufferDataValid[2]),
//         .data_out(lb2data),
//         .rd_data(lineBuffRdData[2])
//     );

//     line_buffer lb3(
//         .clk(clk),
//         .rst(rst),
//         .data_in(pixel_data_in),
//         .data_valid(lineBufferDataValid[3]),
//         .data_out(lb3data),
//         .rd_data(lineBuffRdData[3])
//     );

// endmodule






`timescale 1ns / 100ps

module imageControl(
input                    clk,
input                    rst,
input [7:0]              pixel_data_in,
input                    pixel_data_in_valid,
output reg [71:0]        pixel_data_out,
output                   pixel_data_out_valid,
output reg               o_intr
);

reg [8:0] pixelCounter;
reg [1:0] currentWrLineBuffer;
reg [3:0] lineBuffDataValid;
reg [3:0] lineBuffRdData;
reg [1:0] currentRdLineBuffer;
wire [23:0] lb0data;
wire [23:0] lb1data;
wire [23:0] lb2data;
wire [23:0] lb3data;
reg [8:0] rdCounter;
reg rd_line_buffer;
reg [11:0] totalPixelCounter;
reg rdState;

localparam IDLE = 'b0,
           RD_BUFFER = 'b1;

assign pixel_data_out_valid = rd_line_buffer;

always @(posedge clk)
begin
    if(rst)
        totalPixelCounter <= 0;
    else
    begin
        if(pixel_data_in_valid & !rd_line_buffer)
            totalPixelCounter <= totalPixelCounter + 1;
        else if(!pixel_data_in_valid & rd_line_buffer)
            totalPixelCounter <= totalPixelCounter - 1;
    end
end

always @(posedge clk)
begin
    if(rst)
    begin
        rdState <= IDLE;
        rd_line_buffer <= 1'b0;
        o_intr <= 1'b0;
    end
    else
    begin
        case(rdState)
            IDLE:begin
                o_intr <= 1'b0;
                if(totalPixelCounter >= 1536)
                begin
                    rd_line_buffer <= 1'b1;
                    rdState <= RD_BUFFER;
                end
            end
            RD_BUFFER:begin
                if(rdCounter == 511)
                begin
                    rdState <= IDLE;
                    rd_line_buffer <= 1'b0;
                    o_intr <= 1'b1;
                end
            end
        endcase
    end
end
    
always @(posedge clk)
begin
    if(rst)
        pixelCounter <= 0;
    else 
    begin
        if(pixel_data_in_valid)
            pixelCounter <= pixelCounter + 1;
    end
end


always @(posedge clk)
begin
    if(rst)
        currentWrLineBuffer <= 0;
    else
    begin
        if(pixelCounter == 511 & pixel_data_in_valid)
            currentWrLineBuffer <= currentWrLineBuffer+1;
    end
end


always @(*)
begin
    lineBuffDataValid = 4'h0;
    lineBuffDataValid[currentWrLineBuffer] = pixel_data_in_valid;
end

always @(posedge clk)
begin
    if(rst)
        rdCounter <= 0;
    else 
    begin
        if(rd_line_buffer)
            rdCounter <= rdCounter + 1;
    end
end

always @(posedge clk)
begin
    if(rst)
    begin
        currentRdLineBuffer <= 0;
    end
    else
    begin
        if(rdCounter == 511 & rd_line_buffer)
            currentRdLineBuffer <= currentRdLineBuffer + 1;
    end
end


always @(*)
begin
    case(currentRdLineBuffer)
        0:begin
            pixel_data_out = {lb2data,lb1data,lb0data};
        end
        1:begin
            pixel_data_out = {lb3data,lb2data,lb1data};
        end
        2:begin
            pixel_data_out = {lb0data,lb3data,lb2data};
        end
        3:begin
            pixel_data_out = {lb1data,lb0data,lb3data};
        end
    endcase
end

always @(*)
begin
    case(currentRdLineBuffer)
        0:begin
            lineBuffRdData[0] = rd_line_buffer;
            lineBuffRdData[1] = rd_line_buffer;
            lineBuffRdData[2] = rd_line_buffer;
            lineBuffRdData[3] = 1'b0;
        end
       1:begin
            lineBuffRdData[0] = 1'b0;
            lineBuffRdData[1] = rd_line_buffer;
            lineBuffRdData[2] = rd_line_buffer;
            lineBuffRdData[3] = rd_line_buffer;
        end
       2:begin
             lineBuffRdData[0] = rd_line_buffer;
             lineBuffRdData[1] = 1'b0;
             lineBuffRdData[2] = rd_line_buffer;
             lineBuffRdData[3] = rd_line_buffer;
       end  
      3:begin
             lineBuffRdData[0] = rd_line_buffer;
             lineBuffRdData[1] = rd_line_buffer;
             lineBuffRdData[2] = 1'b0;
             lineBuffRdData[3] = rd_line_buffer;
       end        
    endcase
end
    
line_buffer lB0(
    .clk(clk),
    .rst(rst),
    .data_in(pixel_data_in),
    .data_valid(lineBuffDataValid[0]),
    .data_out(lb0data),
    .rd_data(lineBuffRdData[0])
 ); 
 
 line_buffer lB1(
     .clk(clk),
     .rst(rst),
     .data_in(pixel_data_in),
     .data_valid(lineBuffDataValid[1]),
     .data_out(lb1data),
     .rd_data(lineBuffRdData[1])
  ); 
  
  line_buffer lB2(
      .clk(clk),
      .rst(rst),
      .data_in(pixel_data_in),
      .data_valid(lineBuffDataValid[2]),
      .data_out(lb2data),
      .rd_data(lineBuffRdData[2])
   ); 
   
   line_buffer lB3(
       .clk(clk),
       .rst(rst),
       .data_in(pixel_data_in),
       .data_valid(lineBuffDataValid[3]),
       .data_out(lb3data),
       .rd_data(lineBuffRdData[3])
    );    
    
endmodule