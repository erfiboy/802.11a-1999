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

	// Outputs
	wire Out;
	reg [0:0] in [72:1];
	// Instantiate the Unit Under Test (UUT)
	transmiter uut (
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
			@(negedge Clk)
			En = 1;
			for(i = 1; i < 700 ; i=i+1)begin 
			@(negedge Clk); 
				Data = in[i]; 
			end
			$stop	;	 
   end
endmodule

