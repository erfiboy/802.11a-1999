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
module convencoder_control(
    input Clk,
    input Reset,
    input En,
	 input Data,
    output kout
    );
		
	 wire encoded_data;
	 reg start_endcode ;
	 reg [5:0] Signal_length;
	 reg [3:0] Preamble_detection;
	 reg [8:0] Data_lenght;
	 wire enable;
	 
	 Encoder conv (
    .Data(Data), 
    .Clk(Clk), 
    .Reset(Reset), 
    .EN(start_endcode), 
    .Out(encoded_data));
	 
	 always@ (posedge Clk)begin
		if (Reset || ~En)begin 
			start_endcode <= 1'b0;
			Preamble_detection <= 4'b0;
			Signal_length <= 6'b0;
		   Data_lenght <= 9'b0;
			//Out <= 1'b0;
		end
		else if (Preamble_detection < 4'd12 && Preamble_detection != 12 )begin
			if (Data)begin
				Preamble_detection <= Preamble_detection + 1'b1;
				//Out <= 1'b1;
			end
			else begin
				Preamble_detection <= 4'b0;
				//Out <= 1'b0;
				end
		end
		else if (Signal_length < 5'd24) begin
			Signal_length <=  Signal_length + 1'b1;
			//Out <= Data;
		end	
		else if(Data_lenght < 96 ) begin
			//Out <= encoded_data;
			start_endcode <=1;
			Data_lenght <= Data_lenght + 1'b1;
		end
		else
			start_endcode <=0;
			//Out <= 1'b0;
	 end
	 assign enable = (Signal_length == 24)? 1'b1: 1'b0;
	 assign kout = (Reset || ~En)? 1'b0 :
						(Preamble_detection < 4'd12)?((Data)?1'b1:1'b0):
						(Signal_length < 5'd24)? Data:
						(Data_lenght < 96)?encoded_data:1'b0;
endmodule
