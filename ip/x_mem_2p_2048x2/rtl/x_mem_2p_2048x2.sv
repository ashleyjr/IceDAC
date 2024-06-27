module x_mem_2p_2048x2(
   input  logic            i_nrst,
   input  logic            i_clk,
   input  logic   [10:0]   i_addr,
   input  logic            i_we,
   input  logic   [1:0]    i_wdata,   
   output logic   [1:0]    o_rdata
);

   logic [2047:0] mem_en;
   logic [1:0]    mem      [0:2047];

   genvar i;
   generate
      for(i=0;i<2048;i=i+1) begin
         
         assign mem_en[i] = (i_addr == i) && i_we;

         always_ff@(posedge i_clk or negedge i_nrst) begin
            if(!i_nrst)          mem[i] <= 'd0;
            else if(mem_en[i])   mem[i] <= i_wdata;
         end

      end
   endgenerate

   assign o_rdata = mem[i_addr];

endmodule

