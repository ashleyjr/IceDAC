module x_mem(
   input  logic            i_nrst,
   input  logic            i_clk,
   input  logic   [10:0]   i_addr,
   input  logic            i_we,
   input  logic   [5:0]    i_wdata,   
   output logic   [5:0]    o_rdata
);
   
   logic [10:0]   addr_q   [0:2];
   logic [1:0]    rdata_d  [0:2];
   logic [2:0]    we_q;
   logic [1:0]    wdata_q  [0:2];

   genvar i;
   generate
      for(i=0;i<3;i=i+1) begin
         
         always_ff@(posedge i_clk or negedge i_nrst) begin
            if(!i_nrst) we_q[i] <= 'd0;
            else        we_q[i] <=  i_we;
         end
         
         always_ff@(posedge i_clk or negedge i_nrst) begin
            if(!i_nrst) addr_q[i] <= 'd0;
            else        addr_q[i] <= i_addr;
         end
         
         always_ff@(posedge i_clk or negedge i_nrst) begin
            if(!i_nrst) wdata_q[i] <= 'd0;
            else        wdata_q[i] <= i_wdata[(((i+1)*2)-1):(i*2)];
         end

         x_mem_2p_2048x2 u_mem_2p_2048x2 ( 
            .i_clk      (i_clk      ),
            .i_addr     (addr_q[i]  ),
            .i_we       (we_q[i]    ),
            .i_wdata    (wdata_q[i] ),   
            .o_rdata    (rdata_d[i] )
         );

         always_ff@(posedge i_clk or negedge i_nrst) begin
            if(!i_nrst) o_rdata[(((i+1)*2)-1):(i*2)] <= 'd0;
            else        o_rdata[(((i+1)*2)-1):(i*2)] <= rdata_d[i]; 
         end
      
      end
   endgenerate

endmodule

