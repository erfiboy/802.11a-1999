`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:26:39 06/09/2021 
// Design Name: 
// Module Name:    Scrambler 
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

module Scrambler(
    input wire Clk,
    input wire Reset,
	 input wire En,
    input MAC_Data,
    output wire Scrambled_data
    );
	 reg [6:0] seed;              
	 wire Xored_seed = seed[3] ^ seed [6];
	 assign Scrambled_data = Xored_seed ^ MAC_Data;	
	 
	 always@ (posedge Clk)begin
		if (Reset || ~En) begin
			seed <= 7'b1111111; 			// initial seed is 1111111
		end
		else if (En)begin
			seed <= {seed[5:0] , Xored_seed};
		end
	 end
endmodule
