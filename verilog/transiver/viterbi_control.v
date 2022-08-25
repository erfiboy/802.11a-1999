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
module viterbicontrol(
    input Clk,
    input Reset,
    input En,
	 input Data,
    output reg Out
    );
		
	 wire viterbied_data ;
	 reg start_Viterbi ;
	 reg [5:0] Signal_length;
	 reg [3:0] Preamble_detection;
	 reg [8:0] Data_lenght;
	 reg [8:0] counter;
	 wire enable;
	 reg [35:0] shiftreg; 
	
	
		
	 Viterbidecoder Viterbi (
    .Data(Data), 
    .Clk(Clk), 
    .EN(start_Viterbi), 
    .Reset(Reset), 
    .Out(viterbied_data)
    );
	 
		 
	 always@ (posedge Clk)begin
		if (Reset || ~En)begin 
			start_Viterbi <= 1'b0;
			Preamble_detection <= 4'b0;
			Signal_length <= 6'b0;
		   Data_lenght <= 9'b0;
			counter <= 9'b0;
			shiftreg <= 36'b0;
			Out <= 1'b0;
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
			Out <= 1'b0;
			shiftreg[Preamble_detection + Signal_length] <= Data;
		end	
		else if (Data_lenght < 9'd96 && counter < 156)begin
			Out <= 1'b0;
			start_Viterbi <=1;
			Data_lenght <= Data_lenght + 1'b1;
			counter <= counter + 1'b1;
		end
		else if(counter < 156)
			counter <= counter + 1'b1;
		else if (Signal_length == 5'd24 && counter < 192) begin
			Out <= shiftreg[0];
			shiftreg <= shiftreg >> 1 ;
			counter <= counter + 1'b1;
			Data_lenght <= 9'b0;		
		end
		else if(Data_lenght < 9'd96 && counter == 192 ) begin
			Out <= viterbied_data ;
			start_Viterbi <=1;
			Data_lenght <= Data_lenght + 1'b1;
		end
		else
			Out <= 1'b0;
	 end
	 
	 assign enable = (Signal_length == 24)? 1'b1: 1'b0;
endmodule
