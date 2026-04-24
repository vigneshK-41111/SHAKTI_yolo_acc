module BRAM1(
             CLK,
             ADDR,
             DI,
             WE,
             EN,
             DO
             );

   parameter                      PIPELINED      = 0;
   parameter                      ADDR_WIDTH = 1;
   parameter                      DATA_WIDTH = 1;
   parameter                      MEMSIZE    = 1;

   input                          CLK;
   input [ADDR_WIDTH-1:0]         ADDR;
   input [DATA_WIDTH-1:0]         DI;
   input                          WE;
   input                          EN;
   output [DATA_WIDTH-1:0]        DO;

   wire [DATA_WIDTH-1:0] DO;
   wire [DATA_WIDTH-1:0] wr_rg_DO;
   wire [7:0]  wr_dummy8;
   wire [3:0]  wr_dummy4;

   assign WE_I =  ~WE ;
   assign EN_I =  ~EN ;
   assign CLK_I = ~CLK ;

   genvar i;

   
   if(ADDR_WIDTH==12 && DATA_WIDTH==64) begin : gen_blk_1
    SPRAM_4096x72 inst( .A(ADDR), .CE(CLK), .WEB(WE_I), .OEB(1'b0), .CSB(EN_I), .I({8'b0,DI[63:0]}), .O({wr_dummy8,DO[63:0]}));
    end 
      else if( ADDR_WIDTH==12 && DATA_WIDTH==32) begin : gen_blk_1  
     SPRAM_4096x32 inst( .A(ADDR), .CE(CLK), .WEB(WE_I), .OEB(1'b0), .CSB(EN_I), .I(DI), .O(DO));
    end
    else if( ADDR_WIDTH==13 && DATA_WIDTH==32) begin : gen_blk_1  
     spram_8192_32 inst( .A(ADDR), .CEB(CLK_I), .WEB(WE_I), .OEB(1'b0), .CSB(EN_I), .I(DI), .O(DO));
    end
     else if(ADDR_WIDTH==12 && DATA_WIDTH==16) begin : gen_blk_1  
     SPRAM_4096x16 inst( .A(ADDR), .CE(CLK), .WEB(WE_I), .OEB(1'b0), .CSB(EN_I), .I(DI), .O(DO));
    end
 else if(ADDR_WIDTH==11 && DATA_WIDTH==32) begin : gen_blk_1  
     SPRAM_2048x36 inst( .A(ADDR), .CE(CLK), .WEB(WE_I), .OEB(1'b0), .CSB(EN_I), .I({4'b0,DI[31:0]}), .O({wr_dummy4,DO[31:0]}));
    end
 else if(ADDR_WIDTH==10 && DATA_WIDTH==32) begin : gen_blk_1  
     SPRAM_1024x36 inst( .A(ADDR), .CE(CLK), .WEB(WE_I), .OEB(1'b0), .CSB(EN_I), .I({4'b0,DI[31:0]}), .O({wr_dummy4,DO[31:0]}));
    end
     else if(ADDR_WIDTH==6 && DATA_WIDTH==32) begin : gen_blk_1 
     SPRAM_64x32 inst( .A(ADDR), .CE(CLK), .WEB(WE_I), .OEB(1'b0), .CSB(EN_I), .I(DI), .O(DO));
    end
    else if(ADDR_WIDTH==4 && DATA_WIDTH==32) begin : gen_blk_1 
     SPRAM_32x32 inst( .A({1'b0,ADDR}), .CE(CLK), .WEB(WE_I), .OEB(1'b0), .CSB(EN_I), .I(DI), .O(DO));
    end
endmodule


