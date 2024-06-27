module x_top(
   input    logic          i_clk,
   input    logic          i_nrst,
   input    logic          i_rx,
   output   logic          o_tx,
   output   logic [63:0]   o_code
)

   x_uart_rx u_rx(
      .i_clk            (clk     ),
      .i_rst_n          (i_nrst  ),
      .i_rx             (i_rx    ),
      .o_valid          (rx_valid),
      .o_data           (rx      )
   );

   x_uart_tx u_tx(
      .i_clk            (clk     ),
      .i_rst_n          (i_nrst  ),
      .o_tx             (o_tx    ),
      .i_valid          (tx_valid),
      .i_data           (tx      )
   );
   
   x_ctrl u_ctrl(
      .i_clk            (clk     ),
      .i_nrst           (i_nrst  ),                    
      .i_cmd_valid      (rx_valid),
      .i_cmd            (rx      ),
      .o_rsp_valid      (tx_valid),
      .o_rsp            (tx      ),         
      .o_addr           (addr    ),         
      .o_wdata_valid    (we      ),
      .o_wdata          (wdata   ),        
      .i_rdata          (rdata   )
   );

   x_mem u_mem(
      .i_clk            (clk     ),
      .i_nrst           (i_nrst  ),
      .i_addr           (addr    ),
      .i_we             (we      ),
      .i_wdata          (wdata   ),
      .o_rdata          (rdata   )
   );

   x_bin_to_therm(
      .i_clk            (clk     ),
      .i_nrst           (i_nrst  ),
      .i_bin            (bin     ),
      .o_therm          (o_code  )
   );

endmodule
