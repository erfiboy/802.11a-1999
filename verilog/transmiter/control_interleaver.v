`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:42:15 07/06/2021 
// Design Name: 
// Module Name:    control_interleaver 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module control_interleaver(
    input Clk,
    input Reset,
    input En,
	 input Data,
    output reg Out
    );
		
	 wire interleaved_data ;
	 reg start_Interleaver ;
	 reg [5:0] Signal_length;
	 reg [3:0] Preamble_detection;
	 reg [8:0] Data_lenght;
	 reg [8:0] counter;
	 wire enable;
	 reg [35:0] shiftreg; 
	 wire [11:0] size;
	 assign size = 96;
	 reg [5:0] out_index;
	 
	interleaver interleaver (
    .Clk(Clk), 
    .Data(Data), 
    .Reset(Reset), 
    .EN(start_Interleaver), 
    .Size(Size), 
    .Out(interleaved_data)
    );
		
	  
		 
	 always@ (posedge Clk)begin
		if (Reset || ~En)begin 
			start_Interleaver <= 1'b0;
			Preamble_detection <= 4'b0;
			Signal_length <= 6'b0;
		   Data_lenght <= 9'b0;
			counter <= 9'b0;
			shiftreg <= 36'b0;
			Out <= 1'b0;
			out_index <= 6'b0;
		end
		else if (Preamble_detection < 4'd12 )begin
			if (Data)begin
				Preamble_detection <= Preamble_detection + 1'b1;
				Out <= 1'b0;
				shiftreg[Preamble_detection] <= 1'b1;
			end
			else begin
				Preamble_detection <= 4'b0;
				Out <= 1'b0;
				shiftreg[Preamble_detection] <= 1'b0;
				end
		end
		else if (Signal_length < 5'd24) begin
			Signal_length <=  Signal_length + 1'b1;
			shiftreg[Preamble_detection + Signal_length] <= Data;
			if (Signal_length > 5'd1)begin
				Out <= shiftreg[out_index];
				out_index <= out_index + 1'b1;
			end
		end	
		else if (Data_lenght < 9'd96 && counter < 14)begin
			counter <= counter + 1'b1;
			start_Interleaver <=1;
			Out <= shiftreg[out_index];
			out_index <= out_index + 1'b1;
		end


		else if(Data_lenght < 9'd96 && counter < 192 ) begin
			Out <= interleaved_data ;
			start_Interleaver <=1;
			Data_lenght <= Data_lenght + 1'b1;
		end
		else
			Out <= 1'b0;
	 end
	 
	 assign enable = (Signal_length == 24)? 1'b1: 1'b0;
endmodule

