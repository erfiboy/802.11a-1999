`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:03:13 06/12/2021 
// Design Name: 
// Module Name:    Topmodule 
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
module Topmodule(
    input wire Clk,
    input wire Data,
    input wire Reset,
    input wire En,
    output reg Out
    );
	 
	 wire Out_scrambler;
	 wire Out_descrambler;
	 wire Out_convendcoder;
	 wire Out_viterbi;
	 wire Out_interleaver;
	 wire Out_deinterleaver;
	 reg [9:0] counter;
	 
	 
	 Scrambler_control Scrambler (
    .Clk(Clk), 
    .MAC_Data(Data), 
    .Reset(Reset), 
    .En(En), 
    .Out(Out_scrambler)
    );

	 convencoder_control convendcoder (
    .Clk(Clk), 
    .Reset(Reset), 
    .En(En), 
    .Data(Out_scrambler), 
    .kout(Out_convendcoder)
    );

	 control_interleaver interleaved (
    .Clk(Clk), 
    .Reset(Reset), 
    .En(En), 
    .Data(Out_convendcoder), 
    .Out(Out_interleaver)
    );
	 
	 control_deinterleaver deinterleaved (
    .Clk(Clk), 
    .Reset(Reset), 
    .En(En), 
    .Data(Out_interleaver), 
    .Out(Out_deinterleaver) 
    );
	 
	 viterbicontrol vit (
    .Data(Out_deinterleaver), 
    .Clk(Clk), 
    .En(En), 
    .Reset(Reset), 
    .Out(Out_viterbi)
    );

	 
	 Descrambler_control Descrambler (
    .Clk(Clk),  
    .Reset(Reset), 
    .En(En), 
    .Data(Out_viterbi), 
    .Out(Out_descrambler)
    );
	 
	always@ (posedge Clk)begin
		if(~En || Reset) begin
			Out <= 1'b0;
			counter <= 10'b0;
		end
		else 
			Out <= Out_descrambler;
	end
	
endmodule
