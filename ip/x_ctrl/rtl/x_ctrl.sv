module x_ctrl(
   input    logic             i_clk,
   input    logic             i_nrst,
   // Command/Response
   input    logic             i_cmd_valid,
   input    logic    [7:0]    i_cmd,
   output   logic             o_rsp_valid,
   output   logic    [7:0]    o_rsp,
   input    logic             i_rsp_accept,
   // Address to memory
   output   logic    [10:0]   o_addr,
   // Writes to memory
   output   logic             o_wdata_valid,
   output   logic    [5:0]    o_wdata,
   // Reads from memory
   input    logic    [5:0]    i_rdata,
   // Drive out the binary code
   output   logic    [5:0]    o_bin_code
);

   logic          cmd_valid_q;
   logic [7:0]    cmd_q;

   logic          cmd_addr_en;
   logic [10:0]   cmd_addr_d;
   logic [10:0]   cmd_addr_q;

   logic          cmd_data_en;
   logic [5:0]    cmd_data_d;
   logic [5:0]    cmd_data_q;

   logic          cmd_write_valid_d;
   logic          cmd_write_valid_q;
   
   logic          p0_cmd_read_valid;
   logic          p1_cmd_read_valid;
   logic          p2_cmd_read_valid;

   logic          cmd_play_toggle_en;
   logic          play_d;
   logic          play_q;
   
   logic          last_play_d;
   logic          last_play_q;

   logic          cmd_advance_top_en;
   logic [15:0]   advance_top_d;
   logic [15:0]   advance_top_q;

   logic          cmd_addr_cnt_top_en;
   logic          addr_cnt_en;
   logic [10:0]   addr_cnt_top_d;
   logic [10:0]   addr_cnt_top_q;
   logic [10:0]   addr_cnt_d;
   logic [10:0]   addr_cnt_q;

   logic [15:0]   advance_d;
   logic [15:0]   advance_q;
   logic          advance_en;
   logic          advance_top;

   logic [5:0]    cmd_static_d;
   logic [5:0]    cmd_static_q;
   logic          cmd_static_en;

   logic          static_d;
   logic          static_q;
   logic          cmd_static_toggle_en;

   logic          pass;
   logic [7:0]    rsp_d;
   logic [7:0]    rsp_q;
   logic          rsp_en;
   logic          rsp_valid_en;
   logic          rsp_valid_d;
   logic          rsp_valid_q;

   // Flop inputs
   always_ff@(posedge i_clk or negedge i_nrst) begin
      if(!i_nrst) cmd_valid_q <= 'd0;
      else        cmd_valid_q <= i_cmd_valid;
   end
   
   always_ff@(posedge i_clk or negedge i_nrst) begin
      if(!i_nrst) cmd_q <= 'd0;
      else        cmd_q <= i_cmd;
   end

   // 4'h0 - Shift in command addresses
   assign cmd_addr_d = {cmd_addr_q[6:0], cmd_q[3:0]}; 
   
   always_ff@(posedge i_clk or negedge i_nrst) begin
      if(!i_nrst)             cmd_addr_q <= 'd0;
      else if(cmd_addr_en)    cmd_addr_q <= cmd_addr_d;
   end

   // 4'h1 - Shift in data
   assign cmd_data_d = {cmd_data_q[1:0],cmd_q[3:0]}; 
   
   always_ff@(posedge i_clk or negedge i_nrst) begin
      if(!i_nrst)             cmd_data_q <= 'd0;
      else if(cmd_data_en)    cmd_data_q <= cmd_data_d;
   end

   // 4'h2 - Issue a write 
   always_ff@(posedge i_clk or negedge i_nrst) begin
      if(!i_nrst) cmd_write_valid_q <= 'd0;
      else        cmd_write_valid_q <= cmd_write_valid_d;
   end

   // 4'h3 - Capture a read
   always_ff@(posedge i_clk or negedge i_nrst) begin
      if(!i_nrst) p1_cmd_read_valid <= 'd0;
      else        p1_cmd_read_valid <= p0_cmd_read_valid;
   end
   
   always_ff@(posedge i_clk or negedge i_nrst) begin
      if(!i_nrst) p2_cmd_read_valid <= 'd0;
      else        p2_cmd_read_valid <= p1_cmd_read_valid;
   end

   // 4'h4 - Toggle play contents 
   assign play_d = ~play_q;

   always_ff@(posedge i_clk or negedge i_nrst) begin
      if(!i_nrst)                   play_q <= 'd0;
      else if(cmd_play_toggle_en)   play_q <= play_d;
   end

   // 4'h5 - Capture advance rate
   assign advance_top_d = {advance_top_q[11:0], cmd_q[3:0]};

   always_ff@(posedge i_clk or negedge i_nrst) begin
      if(!i_nrst)                   advance_top_q <= 'd0;
      else if(cmd_advance_top_en)   advance_top_q <= advance_top_d;
   end

   // 4'h6 - Capture address top
   assign addr_cnt_top_d = {addr_cnt_top_q[6:0], cmd_q[3:0]};

   always_ff@(posedge i_clk or negedge i_nrst) begin
      if(!i_nrst)                   addr_cnt_top_q <= 'd0;
      else if(cmd_addr_cnt_top_en)  addr_cnt_top_q <= addr_cnt_top_d;
   end

   // 4'h7 - Capture static data
   assign cmd_static_d = {cmd_static_q[1:0], cmd_q[3:0]};

   always_ff@(posedge i_clk or negedge i_nrst) begin
      if(!i_nrst)             cmd_static_q <= 'd0;
      else if(cmd_static_en)  cmd_static_q <= cmd_static_d;
   end

   // 4'h8 - Toggle play contents 
   assign static_d = ~static_q;

   always_ff@(posedge i_clk or negedge i_nrst) begin
      if(!i_nrst)                      static_q <= 'd0;
      else if(cmd_static_toggle_en)    static_q <= static_d;
   end

   // Decode commands
   assign cmd_addr_en          = (cmd_q[7:4] == 4'h0) & cmd_valid_q;
   assign cmd_data_en          = (cmd_q[7:4] == 4'h1) & cmd_valid_q;
   assign cmd_write_valid_d    = (cmd_q[7:4] == 4'h2) & cmd_valid_q & ~play_q;
   assign p0_cmd_read_valid    = (cmd_q[7:4] == 4'h3) & cmd_valid_q;
   assign cmd_play_toggle_en   = (cmd_q[7:4] == 4'h4) & cmd_valid_q;
   assign cmd_advance_top_en   = (cmd_q[7:4] == 4'h5) & cmd_valid_q;
   assign cmd_addr_cnt_top_en  = (cmd_q[7:4] == 4'h6) & cmd_valid_q;
   assign cmd_static_en        = (cmd_q[7:4] == 4'h7) & cmd_valid_q;
   assign cmd_static_toggle_en = (cmd_q[7:4] == 4'h7) & cmd_valid_q;

   // All commands have a response (0xA5 == PASS)
   
   assign pass = 
      cmd_addr_en | 
      cmd_data_en |       
      cmd_write_valid_d |   
      cmd_play_toggle_en | 
      cmd_advance_top_en | 
      cmd_addr_cnt_top_en |
      cmd_static_en |       
      cmd_static_toggle_en;

   assign rsp_d = (pass) ? 8'hA5 : {2'b00,i_rdata}; 

   assign rsp_en = pass | i_rsp_accept | p2_cmd_read_valid; 

   assign o_rsp = rsp_q;

   always_ff@(posedge i_clk or negedge i_nrst) begin
      if(!i_nrst)       rsp_q <= 'd0;
      else if(rsp_en)   rsp_q <= rsp_d;
   end

   assign rsp_valid_d = ~rsp_valid_q;

   assign rsp_valid_en = i_rsp_accept | rsp_en;

   assign o_rsp_valid = rsp_valid_q;

   always_ff@(posedge i_clk or negedge i_nrst) begin
      if(!i_nrst)             rsp_valid_q <= 'd0;
      else if(rsp_valid_en)   rsp_valid_q <= rsp_valid_d;
   end

   // Address memory
   assign o_addr        = (play_q) ? addr_cnt_q : cmd_addr_q;
   
   // Write to memory
   assign o_wdata_valid = cmd_write_valid_q;
   assign o_wdata       = cmd_data_q;

   // Falling edge on play
   assign last_play_d = play_q;

   always_ff@(posedge i_clk or negedge i_nrst) begin
      if(!i_nrst)    last_play_q <= 'd0;
      else           last_play_q <= last_play_d;
   end

   // Address counter
   assign addr_cnt_en = (play_q) ? advance_top : last_play_q;
   assign addr_cnt_d  = (~play_q || (addr_cnt_q == addr_cnt_top_q)) ? 'd0 : (addr_cnt_q + 'd1);

   always_ff@(posedge i_clk or negedge i_nrst) begin
      if(!i_nrst)          addr_cnt_q <= 'd0;
      else if(addr_cnt_en) addr_cnt_q <= addr_cnt_d;
   end

   // Advance counter
   
   assign advance_top = (advance_q == advance_top_q);
   assign advance_en  = last_play_q | play_q;
   assign advance_d   = (~play_q || advance_top) ? 'd0 : (advance_q + 'd1);

   always_ff@(posedge i_clk or negedge i_nrst) begin
      if(!i_nrst)          advance_q <= 'd0;
      else if(advance_en)  advance_q <= advance_d;
   end

   // Mux the bin code
   assign o_bin_code = (play_q  ) ? i_rdata:
                       (static_q) ? cmd_static_q:
                                    'd0;

endmodule
