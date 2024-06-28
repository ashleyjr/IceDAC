module x_mem_2p_2048x2( 
   input  logic            i_clk,
   input  logic   [10:0]   i_addr,
   input  logic            i_we,
   input  logic   [1:0]    i_wdata,   
   output logic   [1:0]    o_rdata
);
   logic n_we;
   assign n_we = ~i_we;

   //`ifndef SIM
 
   //   logic [15:0]   rdata;
   //   logic [15:0]   wdata;

   //   assign o_rdata[1] = rdata[11];
   //   assign o_rdata[0] = rdata[3];

   //   assign wdata[11] = i_wdata[1];
   //   assign wdata[3]  = i_wdata[0];
   //   
   //   SB_RAM40_4K #(
   //      .WRITE_MODE (32'sd3     ),
   //      .READ_MODE  (32'sd3     )
   //   ) u_ram (
   //      .MASK       (16'hxxxx   ),
   //      .RDATA      (o_rdata    ),
   //      .RADDR      (i_addr     ),
   //      .RCLK       (i_clk      ),
   //      .RCLKE      (1'b1       ),
   //      .RE         (n_we       ),
   //      .WADDR      (i_addr     ),
   //      .WCLK       (i_clk      ),
   //      .WCLKE      (1'b1       ),
   //      .WDATA      (i_wdata    ),
   //      .WE         (i_we       )
   //   );
   //
   //`else
 
    logic [1:0] mem [0:2047];

    always_ff@(posedge i_clk) begin
       if(i_we)  
          mem[i_addr[2:0]] <= i_wdata;
    end
     
    always_ff@(posedge i_clk) begin
       if(n_we)  
          o_rdata <= mem[i_addr[2:0]];
    end 
   
   //`endif
endmodule

