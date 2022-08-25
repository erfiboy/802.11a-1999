`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:11:33 06/12/2021
// Design Name:   Topmodule
// Module Name:   E:/courses/FPGA/Projects/verilog/phase1/Scramble_and_descramble/Scrambler_descrambler_tb.v
// Project Name:  Scramble_and_descramble
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Topmodule
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Topmodule_tb;

	// Inputs
	reg Clk;
	reg Data;
	reg Reset;
	reg En;
	reg data;
	// Outputs
	wire Out;
	reg [0:0] in [72:1];
	// Instantiate the Unit Under Test (UUT)
	Topmodule uut (
		.Clk(Clk), 
		.Data(Data), 
		.Reset(Reset), 
		.En(En), 
		.Out(Out)
	);
 
	initial begin
		// Initialize Inputs
		$readmemb( "Input.txt" , in );
		Clk = 0;
		Data = 0; 
		Reset = 0;
		En = 0;
		forever #10 Clk = ~Clk;
	end 
	integer i;
	initial begin
		
		En = 0; 
			#20
			Data = 0;
			for(i = 1; i < 1000 ; i=i+1)begin 
			if(i<70)
				data = in[i];
			else
				data = 1'b0;
			@(negedge Clk); 
				if(i > 180 && i < 250)begin 
				 En = 1;
				 Data = in[i-180]; 
				 end 
				 else if (i >250) 
					Data = 0;
			end
			$stop	;	 
   end
endmodule

