module bram_1rw(
             clka,
             rst_n,
             ena,
             wea,
             addra,
             dina,
             douta
             );

   parameter                      ADDR_WIDTH = 1;
   parameter                      DATA_WIDTH = 1;
   parameter                      MEMSIZE    = 1;
   parameter                      PIPELINED  = 0;

   input                          clka;
   input                          rst_n;
   input                          ena;
   input                          wea;
   input [ADDR_WIDTH-1:0]         addra;
   input [DATA_WIDTH-1:0]         dina;
   output [DATA_WIDTH-1:0]        douta;


   assign wea_i =  ~wea ;
   assign ena_i =  ~ena ;
   genvar i;




   wire [4:0]  wr_dummy5;
   wire [6:0]  wr_dummy7;
   wire [10:0] wr_dummy11;
   wire [11:0] wr_dummy12;
   wire [15:0] wr_dummy16;
   wire [31:0] wr_dummy32;
   wire [36:0] wr_dummy37;
   wire [42:0] wr_dummy43;
   wire [43:0] wr_dummy44;



   generate 

   if(DATA_WIDTH==512) begin : gen_blk_1
     SPRAM_64x64 inst0( .A(addra), .CE(clka), .WEB(wea_i), .OEB(1'b0), .CSB(ena_i), .I(dina[63:0]), .O(douta[63:0]));
     SPRAM_64x64 inst1( .A(addra), .CE(clka), .WEB(wea_i), .OEB(1'b0), .CSB(ena_i), .I(dina[127:64]), .O(douta[127:64]));
     SPRAM_64x64 inst2( .A(addra), .CE(clka), .WEB(wea_i), .OEB(1'b0), .CSB(ena_i), .I(dina[191:128]), .O(douta[191:128]));
     SPRAM_64x64 inst3( .A(addra), .CE(clka), .WEB(wea_i), .OEB(1'b0), .CSB(ena_i), .I(dina[255:192]), .O(douta[255:192]));
     SPRAM_64x64 inst4( .A(addra), .CE(clka), .WEB(wea_i), .OEB(1'b0), .CSB(ena_i), .I(dina[319:256]), .O(douta[319:256]));
     SPRAM_64x64 inst5( .A(addra), .CE(clka), .WEB(wea_i), .OEB(1'b0), .CSB(ena_i), .I(dina[383:320]), .O(douta[383:320]));
     SPRAM_64x64 inst6( .A(addra), .CE(clka), .WEB(wea_i), .OEB(1'b0), .CSB(ena_i), .I(dina[447:384]), .O(douta[447:384]));
     SPRAM_64x64 inst7( .A(addra), .CE(clka), .WEB(wea_i), .OEB(1'b0), .CSB(ena_i), .I(dina[511:448]), .O(douta[511:448]));
   end
   else if(DATA_WIDTH==112) begin : gen_blk_1 
     SPRAM_64x64 inst0( .A(addra), .CE(clka), .WEB(wea_i), .OEB(1'b0), .CSB(ena_i), .I(dina[63:0]), .O(douta[63:0]));
     SPRAM_64x64 inst1( .A(addra), .CE(clka), .WEB(wea_i), .OEB(1'b0), .CSB(ena_i), .I({16'b0,dina[111:64]}), .O({wr_dummy16,douta[111:64]}));
   end
   else if(DATA_WIDTH==72) begin : gen_blk_1 
    SPRAM_64x72 inst0( .A(addra), .CE(clka), .WEB(wea_i), .OEB(1'b0), .CSB(ena_i), .I(dina), .O(douta));
   end
   else if(DATA_WIDTH==64) begin : gen_blk_1 
    SPRAM_64x64 inst0( .A(addra), .CE(clka), .WEB(wea_i), .OEB(1'b0), .CSB(ena_i), .I(dina[63:0]), .O(douta[63:0]));
   end
    else if(DATA_WIDTH==32) begin : gen_blk_1 
     SPRAM_64x32 inst0( .A(addra), .CE(clka), .WEB(wea_i), .OEB(1'b0), .CSB(ena_i), .I(dina[31:0]), .O(douta[31:0]));
     //SPRAM_64x64 inst0( .A(addra), .CE(clka), .WEB(wea_i), .OEB(1'b0), .CSB(ena_i), .I({43'b0,dina[20:0]}), .O({wr_dummy43,douta[20:0]}));
   end
   else if(DATA_WIDTH==21) begin : gen_blk_1 
     SPRAM_64x27 inst0( .A(addra), .CE(clka), .WEB(wea_i), .OEB(1'b0), .CSB(ena_i), .I({11'b0,dina[20:0]}), .O({wr_dummy11,douta[20:0]}));
     //SPRAM_64x64 inst0( .A(addra), .CE(clka), .WEB(wea_i), .OEB(1'b0), .CSB(ena_i), .I({43'b0,dina[20:0]}), .O({wr_dummy43,douta[20:0]}));
   end
   else if(DATA_WIDTH==20) begin : gen_blk_1 
     //SPRAM_64x20 inst0( .A(addra), .CE(clka), .WEB(wea_i), .OEB(1'b0), .CSB(ena_i), .I(dina[19:0]), .O(douta[19:0]));
     SPRAM_64x32 inst0( .A(addra), .CE(clka), .WEB(wea_i), .OEB(1'b0), .CSB(ena_i), .I({12'b0,dina[19:0]}), .O({wr_dummy12,douta[19:0]}));
     //SPRAM_64x64 inst0( .A(addra), .CE(clka), .WEB(wea_i), .OEB(1'b0), .CSB(ena_i), .I({44'b0,dina[19:0]}), .O({wr_dummy44,douta[19:0]}));
   end
   else if(DATA_WIDTH==27) begin : gen_blk_1 
     SPRAM_64x27 inst0( .A(addra), .CE(clka), .WEB(wea_i), .OEB(1'b0), .CSB(ena_i), .I(dina), .O(douta));
     //SPRAM_64x32 inst0( .A(addra), .CE(clka), .WEB(wea_i), .OEB(1'b0), .CSB(ena_i), .I({5'b0,dina[26:0]}), .O({wr_dummy5,douta[26:0]}));
     //SPRAM_64x64 inst0( .A(addra), .CE(clka), .WEB(wea_i), .OEB(1'b0), .CSB(ena_i), .I({37'b0,dina[26:0]}), .O({wr_dummy37,douta[26:0]}));
   end
   else if(DATA_WIDTH==39) begin : gen_blk_1 
     SPRAM_64x39 inst0( .A(addra), .CE(clka), .WEB(wea_i), .OEB(1'b0), .CSB(ena_i), .I(dina), .O(douta));
   end

   endgenerate

endmodule
