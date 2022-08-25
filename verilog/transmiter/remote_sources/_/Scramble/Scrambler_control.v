`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:29:59 06/11/2021 
// Design Name: 
// Module Name:    Scrambler_control 
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
module Scrambler_control(
    input wire Clk,
    input wire MAC_Data,
    input wire Reset,
	 input wire En,
    output reg Out
    );
	 

	 
	 wire Scrambled_data;
	 reg start_scramble ;
	 reg [6:0] Preamble_signal_length;
	 reg [11:0] FIFO;
	 
	 // instantiate Scrambler 
	 Scrambler scrambler (
    .Clk(Clk), 
    .Reset(Reset), 
    .En(start_scramble), 
    .MAC_Data(FIFO[0]), 
    .Scrambled_data(Scrambled_data)
    );
	 
	 always@(posedge Clk) begin
		 if (~En || Reset ) begin
			Out <= 1'b0;	// the Scrambler is disable and sends 0
			Preamble_signal_length <= 7'b0;
			start_scramble <= 1'b0;
			FIFO <= 12'b0; 
		 end
		 else if ( Preamble_signal_length < 7'd12 )begin
			Out <= 1'b1;
			FIFO[Preamble_signal_length] <= MAC_Data;
			Preamble_signal_length <= Preamble_signal_length + 1'b1;
		 end
		 else if ( Preamble_signal_length < 7'd36 ) begin
			Out <= FIFO[0];
			FIFO <= {MAC_Data,FIFO[11:1]};
			Preamble_signal_length <= Preamble_signal_length + 1'b1; 
		 end
		 else if ( Preamble_signal_length < 7'd84 ) begin
			start_scramble <= 1'b1;	 
			Out <= Scrambled_data;
			FIFO <={MAC_Data,FIFO[11:1]};
			Preamble_signal_length <= Preamble_signal_length + 1'b1; 
		 end 
		 else begin 
			Out <= 1'b0;
			FIFO <= 12'b0;	 
		 end
	 end
endmodule
