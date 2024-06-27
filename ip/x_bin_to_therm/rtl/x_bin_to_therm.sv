module x_bin_to_therm#(
   parameter N = 64
)(
   input  logic                  i_clk,
   input  logic                  i_nrst,
   input  logic  [$clog2(N)-1:0] i_bin,
   output logic  [N-1:0]         o_therm
);
   logic  [N:0] shift_d;
   logic  [N:0] shift_q; 
   logic  [N:0] therm_d;
   logic  [N:0] therm_q;

   // Create thermo code with pipeline
   assign shift_d = 'd1 << i_bin;

   always_ff@(posedge i_clk or negedge i_nrst) begin
      if(!i_nrst) shift_q <= 'd0;
      else        shift_q <= shift_d;
   end

   assign therm_d = shift_q - 'd1;

   always_ff@(posedge i_clk or negedge i_nrst) begin
      if(!i_nrst) therm_q <= 'd0;
      else        therm_q <= therm_d;
   end

   // Re-wire to creep in from edges of signal
   genvar i;
   generate
      for(i=0;i<N;i=i+1) begin
         if(i[0] == 0) begin
            assign o_therm[i/2] = therm_q[i];
         end else begin
            assign o_therm[N-(i/2)-1] = therm_q[i]; 
         end
      end
   endgenerate

endmodule

