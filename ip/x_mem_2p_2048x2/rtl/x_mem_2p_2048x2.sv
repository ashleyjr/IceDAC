module x_mem_2p_2048x2(
   input  logic            i_nrst,
   input  logic            i_clk,
   input  logic   [10:0]   i_addr,
   input  logic            i_we,
   input  logic   [1:0]    i_wdata,   
   output logic   [1:0]    o_rdata
);

   `ifndef SIM
   
      SB_RAM40_4K #(
         .WRITE_MODE (32'sd0     ),
         .READ_MODE  (32'sd0     )
      ) u_ram_rs1 (
         .MASK       (16'hxxxx   ),
         .RDATA      (o_rdata    ),
         .RADDR      (i_addr     ),
         .RCLK       (i_clk      ),
         .RCLKE      (1'b1       ),
         .RE         (1'b1       ),
         .WADDR      (i_addr     ),
         .WCLK       (i_clk      ),
         .WCLKE      (1'b1       ),
         .WDATA      (i_wdata    ),
         .WE         (we         )
      );
   
   `else
 
      logic [1:0] mem [0:2047];

      always_ff@(posedge i_clk or negedge i_nrst) begin
         if(!i_nrst)    mem[i_addr] <= 'd0;
         else if(i_we)  mem[i_addr] <= i_wdata;
      end
       
      always_ff@(posedge i_clk or negedge i_nrst) begin
         if(!i_nrst)    o_rdata <= 'd0;
         else           o_rdata <= mem[i_addr];
      end 
   
   `endif
endmodule

