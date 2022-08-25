`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:11:33 06/30/2021 
// Design Name: 
// Module Name:    interleaver 
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
module interleaver(
	 input wire Clk,
	 input wire Data,
	 input wire Reset,
	 input wire EN,
	 input wire [11:0] Size,
	 output wire Out
	 );
	 
	 // by setting this paramete correctly in the top module
	 // this module wotks for all of the coding rate and modulation
	 parameter Ncbps = 48;
	 parameter Nbpsc = 1;
	 parameter coding_rate = 1/2;
	 parameter OFDM_symbol = 1/2;

	 
	 
	 reg [96:1] in_data;			// a buffer that save the data that must have 2x(size of OFDM symbol)
	 wire [2:0] sym_size;		// number of symboles for this phase just we transmit 2 byte of data
	 wire [8:0] index;			// the index of data out from data reg after permution
	 reg [7:0] counter;			// counter that counte the data receiving cycle
	 reg [6:0] indexes_i_j [47:0];	// RAM that store the index after permution for speeding up				
	 reg [6:0] index_out;		// temp index for fiil the indexes_i_j matrix
	 wire [1:0] s;					// the s in the permutation formula
	 reg [6:0]temp_k;				// equal k in permutation formula
	 reg [6:0]temp_x;				// equal to j in permutation formula
	 reg [6:0]temp_i;				// equal to i in permutation formula
	 integer j;
	 
	 assign s = (Nbpsc/2 > 1)?Nbpsc/2:1;    //s = max(Nbpsc/2,1);
	 assign sym_size = (counter < 95)? 2'd0:  // calculate the number of cycles to repeat
							 (counter < 143)? 2'd1:
							 (counter < 191)? 2'd2:2'd3;
							 
	 
	 always@ (posedge Clk) begin
		if (~EN || Reset)begin															// initialize registers
			in_data <= 96'b0;
			counter <= 8'b0;
			index_out <= 7'b0;
			temp_k <= 7'b0;
		end
		else if(counter < 192) begin			 
			in_data[counter+1] <= Data;													// recive data and fill the in_data reg
			if(counter >= 47)
				index_out <= index_out + 1'b1;  
			else
				temp_k <= temp_k + 1'b1;  													 // in the first 48 cycles calculate the permution of sequence
			counter <= counter + 1'b1;
		end	
		else
			counter <= 8'd200; 																// freeze the module and wait for reset
	 end  
	 assign index = indexes_i_j[index_out-48*sym_size] + 48*sym_size +1; 	// find the correct index for data out from LUT
	 assign Out = (counter < 40) ? 1'b0:												// assign output  			
					  (counter < 143)? in_data[index] : 1'b0;
	 
	 always@(temp_k,s) begin
		if (~EN || Reset)begin
			for (j=0;j<48;j=j+1) begin
				indexes_i_j[j] = 7'b0;
			end
			// for the first index of matrix
			temp_i = (Ncbps>>4)*(temp_k[3:0])+(temp_k>>4); 					// (Ncbps/16)*(mod(k,16))+floor(k/16);
			temp_x = (s == 1)? 1'b0:(temp_i+Ncbps-((86*Ncbps)/256));    //  s*floor(i/s)+mod(i+Ncbps-floor(16*i/Ncbps),s);
			indexes_i_j[temp_k] = s*(temp_i>>(s-1))+temp_x; 				//  Creating LUT
		end
		else begin
			temp_i = (Ncbps>>4)*(temp_k[3:0])+(temp_k>>4);              // (Ncbps/16)*(mod(k,16))+floor(k/16);
			temp_x = (s == 1)? 1'b0:(temp_i+Ncbps-((86*Ncbps)/256));    //s*floor(i/s)+mod(i+Ncbps-floor(16*i/Ncbps),s);
			indexes_i_j[temp_k] = s*(temp_i>>(s-1))+temp_x;					//  Creating LUT	
		end
	end 
			 
endmodule
