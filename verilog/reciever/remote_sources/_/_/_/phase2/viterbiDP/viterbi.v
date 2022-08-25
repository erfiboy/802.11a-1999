`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    06:34:55 06/24/2021 
// Design Name: 
// Module Name:    viterbi 
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
module Viterbidecoder(
    input wire Data,
    input wire Clk,
	 input wire EN,
    input wire Reset,
    output wire Out
    );
	 parameter in_size = 96;
	 parameter out_sise = 48;
	 
	 reg flag_outputmod;									// assert when we output is ready not used for now but for the next phase
	 reg [47:0] outreg;     							// backtracs bit are in it  
	 reg [5:0]findpath;	   							// findpath is the state when we back track 
	 reg decidedpath;
	 reg [10:1] counter; 								// a global counter that we can find out what state we are in 
	 reg [in_size-1:0] FIFO;							// save all input in this register and then start the algorithm
	 reg [6:1] CS,NS;        
	 reg [2:1] out0,out1,cost0,cost1;   			 // cost of transition between current state to next state
	 reg [5:0]state, statezero, stateone; 			 // intial state and next state with zero added and next state with one added
	 reg [1:0]costzero, costone;						 // cost to go to next zero added state and one added state
	 reg [39:0]total_cost_zero, total_cost_one;	 // cost to go to next zero added state and one added state
	 reg [39:0]Cost[63:0];								 // cost of all posible pathes for backtracking
	 reg [39:0]cost_next_state[63:0];				 // cost of all posible pathes for forward and calculate the path cost
	 reg [5:0]allposibllepaths[63:0][150:0];		 // 3D matrix that store the parent state of every state for backtracking
	 reg [5:0]path_next_state[63:0];					 // path to next state
	 reg flag;												 // zero : input mode , 1 is caculation mod
	 reg [5:0] min_cost_state;							 // at the end findes the minimum state of the last stage so we can backtrack
	 reg [48:0] min_path;								 // minimum cost path 
	 
	 integer i,j,index1;
	 always@ (posedge Clk) begin
		if (Reset == 1'b1 || ~EN)	begin
			CS <= 6'b0;
			outreg <=48'b0;
			index1 =0; 
			flag_outputmod <=0;
			counter <= 10'b0;
			FIFO <= {in_size{1'b0}};
			flag <=0;
			decidedpath <=0;
			for(i=0;i<64;i=i+1) begin
				Cost[i] <= 40'd0;
			end
			for(i=0;i<64;i=i+1) 
				for(j=0;j<150;j=j+1) 
					allposibllepaths[i][j] <= 6'd0;
		end
		else if ( counter < in_size && flag == 0 ) begin
			FIFO[counter] <= Data;
			if (counter == in_size -1)
				flag <=1;
			else	
				counter <= counter + 1'b1;
		end
		else if ( counter < 2*in_size && flag == 1)begin
					for(i=0;i<64;i=i+1) begin
						Cost[i] <= cost_next_state[i];
					end
					for(j=0;j<64;j=j+1) begin
						allposibllepaths[j][counter] <= path_next_state[j] ;
						cost_next_state[j] <= NS;
						end
					if(counter == 7'd48) begin // if we find all bits that for now is 48 bit backtrack 
						findpath <= min_cost_state;
					end
					outreg[counter-in_size] <= CS[6];
					CS <= NS;
				   FIFO <= FIFO >> 2;
					counter <= counter + 1;
		end
		else if ( counter < (2*in_size+out_sise) && flag == 1) begin
			 flag_outputmod <=1;
			 index1= index1+1;
			 outreg <= outreg>>1;
		end
	 end
	// clculating the next state and costs 
	// and compelete the matrix cost and pathes
	always@(*) begin
		for(i=0;i<64;i=i+1) begin
			state = i;
			statezero = {state[4:0],1'b1};
			stateone = {state[4:0],1'b0};
			
			out0[1] = 1'b0 ^ CS[1] ^ CS[2] ^ CS[4] ^ CS[5];
			out0[2] = 1'b0 ^ CS[1] ^ CS[4] ^ CS[5] ^ CS[6];
			cost0 = (FIFO[1]^out0[1]) + (FIFO[2]^out0[2]);
			out1[1] = 1'b1 ^ CS[1] ^ CS[2] ^ CS[4] ^ CS[5];
			out1[2] = 1'b1 ^ CS[1] ^ CS[4] ^ CS[5] ^ CS[6];
			cost1 = (FIFO[1]^out1[1]) + (FIFO[2]^out1[2]); 
			if(cost0 <= cost1)
				NS = {1'b0,CS[6:2]};
			else
				NS = {1'b1,CS[6:2]};
			cost1 = {out0[1],out0[2]} ^ Data;
			costone = {out1[1],out1[2]} ^ Data;
			total_cost_zero = cost1[1] + cost1[2] + Cost[statezero];
			total_cost_one = costone[0] + costone[1] + Cost[stateone];
			
			if(total_cost_zero<total_cost_one) begin
				 cost_next_state[state] = total_cost_zero;
				 path_next_state[state] = statezero;
			end 
			else begin
				 cost_next_state[state] = total_cost_one;
				 path_next_state[state] = stateone;
			end
			end
	end
	 // output 
	 assign Out = outreg[0];
	   
	 // finding the minimum path at the end and 
	 // backtrack to the first state
	 integer p;
	 always@(*) begin
			min_cost_state = 6'd0;
		 min_path = Cost[0];
		 for(p=0;p<64;p=p+1) begin
			 if(min_path > Cost[p]) begin
				 min_path = Cost[p];
	 			 min_cost_state = p;
	 		 end
	 	 end
	 end

		
endmodule
