module x_top(
   input    logic          i_clk,
   input    logic          i_rx,
   output   logic          o_tx,
   output   logic [63:0]   o_code
);

   logic          nrst;
   logic          rx_valid;
   logic [7:0]    rx;
   logic          tx_valid;
   logic          tx_accept;
   logic [7:0]    tx;
   logic [10:0]   addr;
   logic          we;
   logic [5:0]    wdata;
   logic [5:0]    rdata;
   logic [5:0]    bin;


   // No reset as all flops are reset to zero and the
   // FPGA will take care of this when loading bitstream
   assign nrst = 1'b1;

   x_uart_rx #(
      .p_clk_hz         (12000000   ),
      .p_baud           (9600       )
   ) u_rx (
      .i_clk            (i_clk      ),
      .i_rst_n          (nrst       ),
      .i_rx             (i_rx       ),
      .o_valid          (rx_valid   ),
      .o_data           (rx         )
   );

   x_uart_tx #(
      .p_clk_hz         (12000000   ),
      .p_baud           (9600       )
   ) u_tx (
      .i_clk            (i_clk      ),
      .i_rst_n          (nrst       ),
      .o_tx             (o_tx       ),
      .i_valid          (tx_valid   ),
      .i_data           (tx         ),
      .o_accept         (tx_accept  )
   );
   
   x_ctrl u_ctrl(
      .i_clk            (i_clk      ),
      .i_nrst           (nrst       ),                    
      .i_cmd_valid      (rx_valid   ),
      .i_cmd            (rx         ),
      .o_rsp_valid      (tx_valid   ),
      .o_rsp            (tx         ),        
      .i_rsp_accept     (tx_accept  ),
      .o_addr           (addr       ),         
      .o_wdata_valid    (we         ),
      .o_wdata          (wdata      ),        
      .i_rdata          (rdata      ),
      .o_bin_code       (bin        )
   );

   x_mem u_mem(
      .i_clk            (i_clk      ),
      .i_nrst           (nrst       ),
      .i_addr           (addr       ),
      .i_we             (we         ),
      .i_wdata          (wdata      ),
      .o_rdata          (rdata      )
   );

   x_bin_to_therm u_bin_to_therm(   
      .i_clk            (i_clk      ),
      .i_nrst           (nrst       ),
      .i_bin            (bin        ),
      .o_therm          (o_code     )
   );

endmodule
