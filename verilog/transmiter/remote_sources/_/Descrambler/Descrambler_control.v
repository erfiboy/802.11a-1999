`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:50:53 06/11/2021 
// Design Name: 
// Module Name:    Descrambler_control 
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
module Descrambler_control(
    input Clk,
    input Reset,
    input En,
	 input Data,
    output reg Out
    );
		
	 wire Descrambled_data;
	 reg start_Descramble ;
	 reg [5:0] Signal_length;
	 reg [3:0] Preamble_detection;
	 reg [6:0] Data_lenght;
	 
	// Instantiate the module
	Descrambler descrambler (
		 .Clk(Clk), 
		 .Reset(Reset), 
		 .Scrambled_Data(Data), 
		 .En(start_Descramble), 
		 .Descrambled_Data(Descrambled_data)
		 ); 
		  
		 
	 always@ (posedge Clk)begin
		if (Reset || ~En)begin 
			start_Descramble <= 1'b0;
			Preamble_detection <= 4'b0;
			Signal_length <= 6'b0;
		   Data_lenght <= 7'b0;
			Out <= 1'b0;
		end
		else if (Preamble_detection < 4'd12 )begin
			if (Data)begin
				Preamble_detection <= Preamble_detection + 1'b1;
				Out <= 1'b0;
			end
			else
				Preamble_detection <= 4'b0;
		end
		else if (Signal_length < 5'd24) begin
			Signal_length <=  Signal_length + 1'b1;
			Out <= Data;
		end	
		else if(Data_lenght < 6'd48 ) begin
			Out <= Descrambled_data;
			start_Descramble <=1;
			Data_lenght <= Data_lenght + 1'b1;
		end
		else
			Out <= 1'b0;
	 end
	 
endmodule
