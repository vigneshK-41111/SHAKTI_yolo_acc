module cnn_axi_slave_wrapper #(
    parameter ADDR_WIDTH = 32,
    parameter DATA_WIDTH = 32,
    parameter MEM_DEPTH  = 16384
)(
    input clk,
    input rst_n,

    // ================= AXI4 WRITE =================
    input  [ADDR_WIDTH-1:0] AWADDR,
    input  [7:0]  AWLEN,
    input         AWVALID,
    output reg    AWREADY,

    input  [DATA_WIDTH-1:0] WDATA,
    input  [DATA_WIDTH/8-1:0] WSTRB,
    input         WVALID,
    input         WLAST,
    output reg    WREADY,

    output reg    BVALID,
    input         BREADY,
    output reg [1:0] BRESP,
    // WRITE channel additions
    input  [2:0] AWSIZE,
    input  [1:0] AWBURST,

    // READ channel additions
    input  [2:0] ARSIZE,
    input  [1:0] ARBURST,

    // AXI-Lite additions
    input  [3:0] S_AXI_WSTRB,
    output reg [1:0] S_AXI_RRESP,
    output reg [1:0] S_AXI_BRESP,   

    // ================= AXI4 READ =================
    input  [ADDR_WIDTH-1:0] ARADDR,
    input  [7:0]  ARLEN,
    input         ARVALID,
    output reg    ARREADY,

    output reg [DATA_WIDTH-1:0] RDATA,
    output reg    RVALID,
    input         RREADY,
    output reg    RLAST,
    output reg [1:0] RRESP,

    // ================= AXI-LITE =================
    input  [31:0] S_AXI_AWADDR,
    input         S_AXI_AWVALID,
    output reg    S_AXI_AWREADY,

    input  [31:0] S_AXI_WDATA,
    input         S_AXI_WVALID,
    output reg    S_AXI_WREADY,

    input  [31:0] S_AXI_ARADDR,
    input         S_AXI_ARVALID,
    output reg    S_AXI_ARREADY,

    output reg [31:0] S_AXI_RDATA,
    output reg        S_AXI_RVALID,
    input             S_AXI_RREADY,

    output reg        S_AXI_BVALID,
    input             S_AXI_BREADY
);

    // =========================================================
    // 🔧 MEMORY (32-bit BRAM)
    // =========================================================
    (* ram_style = "block" *) reg [31:0] input_mem  [0:MEM_DEPTH-1];
    (* ram_style = "block" *) reg [31:0] output_mem [0:MEM_DEPTH-1];

    // =========================================================
    // 🔧 WRITE CHANNEL
    // =========================================================
    reg [ADDR_WIDTH-1:0] waddr;
    reg [7:0] wlen_cnt;
    reg writing;


    always @(posedge clk) begin
    if (!rst_n) begin
        BRESP <= 2'b00;
        RRESP <= 2'b00;
        S_AXI_RRESP <= 2'b00;
        S_AXI_BRESP <= 2'b00;
    end
end

    always @(posedge clk) begin
        if (!rst_n) begin
            AWREADY <= 0; WREADY <= 0; BVALID <= 0;
            writing <= 0;
        end else begin
            // Address phase
            if (AWVALID && !writing) begin
                AWREADY <= 1;
                waddr   <= AWADDR;
                wlen_cnt <= AWLEN;
                writing <= 1;
            end else begin
                AWREADY <= 0;
            end

            // Data phase
            if (writing && WVALID) begin
                WREADY <= 1;

                input_mem[waddr[15:2]] <= WDATA;
                waddr <= waddr + 4;

                if (WLAST) begin
                    writing <= 0;
                    BVALID  <= 1;
                    BRESP   <= 2'b00;
                end
            end else begin
                WREADY <= 0;
            end

            if (BVALID && BREADY)
                BVALID <= 0;
        end
    end

    // =========================================================
    // 🔧 READ CHANNEL
    // =========================================================
    reg [ADDR_WIDTH-1:0] raddr;
    reg [7:0] rlen_cnt;
    reg reading;

    always @(posedge clk) begin
        if (!rst_n) begin
            ARREADY <= 0; RVALID <= 0; reading <= 0;
        end else begin
            // Address phase
            if (ARVALID && !reading) begin
                ARREADY <= 1;
                raddr   <= ARADDR;
                rlen_cnt <= ARLEN;
                reading <= 1;
            end else begin
                ARREADY <= 0;
            end

            // Data phase
            if (reading && (!RVALID || (RVALID && RREADY))) begin
                RDATA <= output_mem[raddr[15:2]];
                RVALID <= 1;
                RRESP  <= 2'b00;

                if (rlen_cnt == 0) begin
                    RLAST <= 1;
                    reading <= 0;
                end else begin
                    RLAST <= 0;
                    rlen_cnt <= rlen_cnt - 1;
                end

                raddr <= raddr + 4;
            end else if (RVALID && RREADY) begin
                RVALID <= 0;
            end
        end
    end

    // =========================================================
    // 🔧 AXI-LITE CONTROL
    // =========================================================
    reg start;
    reg [31:0] size;
    reg done;

    always @(posedge clk) begin
        if (!rst_n) begin
            S_AXI_AWREADY <= 0; S_AXI_WREADY <= 0;
            S_AXI_BVALID  <= 0; S_AXI_ARREADY <= 0;
            S_AXI_RVALID  <= 0;
        end else begin
            // WRITE
            if (S_AXI_AWVALID && S_AXI_WVALID) begin
                S_AXI_AWREADY <= 1;
                S_AXI_WREADY  <= 1;

                case (S_AXI_AWADDR)
                    32'h00: start <= S_AXI_WDATA[0];
                    32'h04: size  <= S_AXI_WDATA;
                    default: ;
                endcase

                S_AXI_BVALID <= 1;
            end else begin
                S_AXI_AWREADY <= 0;
                S_AXI_WREADY  <= 0;
            end

            if (S_AXI_BVALID && S_AXI_BREADY)
                S_AXI_BVALID <= 0;

            // READ
            if (S_AXI_ARVALID) begin
                S_AXI_ARREADY <= 1;

                case (S_AXI_ARADDR)
                    32'h00: S_AXI_RDATA <= {31'd0, start};
                    32'h04: S_AXI_RDATA <= size;
                    32'h08: S_AXI_RDATA <= {31'd0, done};
                    default: S_AXI_RDATA <= 0;
                endcase

                S_AXI_RVALID <= 1;
            end else begin
                S_AXI_ARREADY <= 0;
            end

            if (S_AXI_RVALID && S_AXI_RREADY)
                S_AXI_RVALID <= 0;
        end
    end

    // =========================================================
    // 🔧 CNN CORE
    // =========================================================
    reg [7:0] cnn_input;
    wire [7:0] cnn_output;
    wire cnn_valid;

    // dummy AXI-lite tie-off
    wire d1,d2,d3,d4;
    wire [31:0] d5;
    wire [1:0] d6;
    wire interrupt;

    cnn_accel cnn_core (
        .ap_clk(clk),
        .ap_rst_n(rst_n),
        .input_r(cnn_input),
        .output_r(cnn_output),
        .output_r_ap_vld(cnn_valid),

        .s_axi_control_AWVALID(1'b0),
        .s_axi_control_AWREADY(d1),
        .s_axi_control_AWADDR(0),
        .s_axi_control_WVALID(1'b0),
        .s_axi_control_WREADY(d2),
        .s_axi_control_WDATA(0),
        .s_axi_control_WSTRB(0),
        .s_axi_control_ARVALID(1'b0),
        .s_axi_control_ARREADY(d3),
        .s_axi_control_ARADDR(0),
        .s_axi_control_RVALID(d4),
        .s_axi_control_RREADY(1'b0),
        .s_axi_control_RDATA(d5),
        .s_axi_control_RRESP(d6),
        .s_axi_control_BVALID(),
        .s_axi_control_BREADY(1'b0),
        .s_axi_control_BRESP(),
        .interrupt(interrupt)
    );

    // =========================================================
    // 🔧 CNN EXECUTION
    // =========================================================
    reg [31:0] idx;
    reg running;

    always @(posedge clk) begin
        if (!rst_n) begin
            idx <= 0; done <= 0; running <= 0;
        end else begin
            if (start && !running) begin
                running <= 1;
                idx <= 0;
                done <= 0;
            end

            if (running) begin
                cnn_input <= input_mem[idx][7:0];

                if (cnn_valid) begin
                    output_mem[idx][7:0] <= cnn_output;
                    idx <= idx + 1;

                    if (idx == size-1) begin
                        running <= 0;
                        done <= 1;
                    end
                end
            end
        end
    end

endmodule