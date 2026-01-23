// `timescale 1ns / 1ps

// module conv(
//     input  logic        clk,
//     input  logic [71:0] pixel_data_in, // 9 pixels (8-bits each) flattened
//     input  logic        pixel_data_in_valid,
//     output logic [7:0]  data_out,
//     output logic        data_out_valid
// );

//     // This module will Blur the image using a 3x3 blurring kernel
    
// /* 
//         | 1  1  1 |
//         | 1  1  1 | x 1/9
//         | 1  1  1 |

// */

//     // --- Parameters and Constants
//     // 1/9 approximated as 7282/65536 (2^16)
//     localparam int DIV_MULT = 7282;
//     localparam int DIV_SHIFT = 16;

//     // Kernal initialization
//     logic [7:0] kernel [8:0] = '{default: 8'h01}; 


//     //--------------------------------------------
// 	//----Internal Signals (pipeline stages)------
// 	// 1) multiplication stages
// 	logic [15:0] mult_data [8:0];
// 	logic        v1;
	
// 	// 2) summation
// 	logic [19:0] sum_temp; // 16-bit * 9 values = ~20 bits needed
// 	logic [19:0] sum_reg;
// 	logic        v2;
	
// 	// 3) fixed point division
// 	logic [32:0] product_long; // 20 bits (sum) + 13 bits (7282) = 33 bits


//     //--------------------------------------------
// 	//----Stage 1: parallel multipliers-----------
// 	always_ff @(posedge clk) begin
//         for (int i=0; i<9; i=i+1) begin
//             mult_data[i] <= kernel[i] * pixel_data_in[i*8 +: 8];
//         end
//         v1 <= pixel_data_in_valid;
// 	end

//     //--------------------------------------------
// 	//----Stage 2: adder tree---------------------
// 	always_comb begin
//         sum_temp = 20'h0;
//         for (int i=0; i<9; i=i+1) begin
//             sum_temp = sum_temp + mult_data[i];
//         end
//     end

//     always_ff @(posedge clk) begin
//         sum_reg <= sum_temp;
//         v2 <= v1;
//     end

//     //--------------------------------------------
// 	//----Stage 3: division-----------------------
// 	assign product_long = sum_reg * DIV_MULT;

//     always_ff @(posedge clk) begin
//         data_out <= product_long >> DIV_SHIFT;
//         data_out_valid <= v2;
//     end

// endmodule







`timescale 1ns / 100ps

module conv(
input        clk,
input [71:0] pixel_data_in,
input        pixel_data_in_valid,
output reg [7:0] data_out,
output reg   data_out_valid
    );
    
integer i; 
reg [7:0] kernel [8:0];
reg [15:0] multData[8:0];
reg [15:0] sumDataInt;
reg [15:0] sumData;
reg multDataValid;
reg sumDataValid;
reg convolved_data_valid;

initial
begin
    for(i=0;i<9;i=i+1)
    begin
        kernel[i] = 1;
    end
end    
    
always @(posedge clk)
begin
    for(i=0;i<9;i=i+1)
    begin
        multData[i] <= kernel[i]*pixel_data_in[i*8+:8];
    end
    multDataValid <= pixel_data_in_valid;
end


always @(*)
begin
    sumDataInt = 0;
    for(i=0;i<9;i=i+1)
    begin
        sumDataInt = sumDataInt + multData[i];
    end
end

always @(posedge clk)
begin
    sumData <= sumDataInt;
    sumDataValid <= multDataValid;
end
    
always @(posedge clk)
begin
    data_out <= sumData/9;
    data_out_valid <= sumDataValid;
end
    
endmodule