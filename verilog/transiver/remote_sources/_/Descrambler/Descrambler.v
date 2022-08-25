`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:59:05 06/11/2021 
// Design Name: 
// Module Name:    Descrambler 
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
module Descrambler(
    input wire Clk,
    input wire Reset,
    input wire Scrambled_Data,
    input wire En,
    output wire Descrambled_Data
    );
	 
	 reg [2:0] counter_intial_seed;
	 reg [6:0] seed;
	 // first 7 bits are always zero so for implimenting faster Descrambler we din't use FIFO 
	 assign Descrambled_Data = (counter_intial_seed > 7'd6)?Scrambled_Data^seed[6]^seed[3]:1'b0;
	 
	 always@(posedge Clk)begin
		if( ~En || Reset )begin
			seed <= 7'b0;
			counter_intial_seed <= 3'b0;
		end
		else if ( En )begin 
			if (counter_intial_seed < 3'd7)begin
				seed <= {seed[5:0],Scrambled_Data};
				counter_intial_seed <= counter_intial_seed+1;
			end 
			else 
				seed <= { seed[5:0] , seed[6]^seed[3] };
		end
	 end

endmodule
