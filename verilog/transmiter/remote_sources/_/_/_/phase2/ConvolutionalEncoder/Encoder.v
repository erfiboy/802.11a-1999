`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:32:50 06/21/2021 
// Design Name: 
// Module Name:    Encoder 
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
module Encoder(
    input wire Data,
    input wire Clk,
    input wire Reset,
	 input wire EN,
    output wire Out
    );
	 parameter datalen = 48;
	 parameter indexsize = $clog2(2*datalen); 
	 parameter FIFOsize =100;
	 
	 reg [FIFOsize:1] FIFO,NextFIFO; //256 byte lenght
	 reg [6:1] shift;
	 reg [indexsize:1] in_index;
	
    always@ (Data , FIFO , shift , in_index)begin	
			NextFIFO = FIFO >> 1;
			NextFIFO[in_index] = (Data ^ shift[1] ^ shift[2] ^ shift[4] ^ shift[5 ]);
			NextFIFO[in_index+1] = (Data ^ shift[1] ^ shift[4] ^ shift[5] ^ shift[6]);
	 end
	 
	 always@ (posedge Clk)begin
		if(Reset == 1'b1 || ~EN)begin
			shift <= 6'b0;  
			FIFO <= {FIFOsize{1'b0}};
			in_index <= {indexsize{1'b0}};
		end
		else begin
			FIFO <= NextFIFO;
			in_index <= in_index + 1'b1;
			shift <= {Data,shift[6:2]};

		end
	 end
	 
	 assign Out = FIFO[1];


endmodule
