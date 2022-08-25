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
module transmiter(
    input wire Clk,
    input wire Data,
    input wire Reset,
    input wire En,
    output reg Out
    );
	 
	 wire Out_scrambler;
	 wire Out_convendcoder;
	 wire Out_interleaver;
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
	 

	 
	always@ (posedge Clk)begin
		if(~En || Reset) begin
			Out <= 1'b0;
			counter <= 10'b0;
		end
		else
			Out <= Out_interleaver;
	end
	
endmodule
