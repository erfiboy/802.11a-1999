`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:03:12 06/30/2021 
// Design Name: 
// Module Name:    deinterleaver 
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

module deinterleaver(
	 input wire Clk,
	 input wire Data,
	 input wire Reset,
	 input wire EN,
	 input wire [11:0] Size,
	 output wire Out
	 );
	 
	 parameter Ncbps = 48;
	 parameter Nbpsc = 1;
	 parameter x = 16/Ncbps;
	 
	 reg [96:1] in_data;
	 wire [2:0] sym_size;
	 wire [8:0] index;
	 reg [7:0] counter;
	 reg [6:0] indexes_i_j [47:0];
	 reg [6:0] k;
	 reg [6:0] index_out;
	 wire [1:0] s;
	 reg [6:0]temp_k;
	 reg [6:0]temp_x;
	 reg [6:0]temp_i;
	 integer j;
	 
	 assign s = (Nbpsc/2 > 1)?Nbpsc/2:1;    //s = max(Nbpsc/2,1);
	 assign sym_size = (counter < 95)? 2'd0:
							 (counter < 143)? 2'd1:
							 (counter < 191)? 2'd2:2'd3;
							 
	 
	 always@ (posedge Clk) begin
		if (~EN || Reset)begin
			in_data <= 96'b0;
			counter <= 8'b0;
			index_out <= 7'b0;
			temp_k <= 7'b0;
		end
		else if(counter < 192) begin
			in_data[counter+1] <= Data;
			if(counter >= 47)
				index_out <= index_out + 1'b1;
			else
				temp_k <= temp_k + 1'b1; 
			counter <= counter + 1'b1;
		end	
		else
			counter <= 8'd200;
	 end  
	 assign index = (counter < 160)? indexes_i_j[index_out-48*sym_size] + 48*sym_size +1 : 1'b0; 
	 assign Out = (counter < 40) ? 1'b0:
					  (counter < 143)? in_data[index] : 1'b0;
	 
	 always@(temp_k,s) begin
		if (~EN || Reset)begin
			for (j=0;j<48;j=j+1) begin
				indexes_i_j[j] = 7'b0;
			end 
			temp_i = 16*temp_k - (Ncbps-1)*((temp_k*86)/256); // (Ncbps/16)*(mod(k,16))+floor(k/16);
			indexes_i_j[temp_k] = temp_i;
		end
		else begin
			temp_i = 16*temp_k - (Ncbps-1)*((temp_k*86)/256); // (Ncbps/16)*(mod(k,16))+floor(k/16);
			indexes_i_j[temp_k] = temp_i;
		end
	end 
	

   // divide by 3
	
endmodule
