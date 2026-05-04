`timescale 1ns/1ps

module tb;

// ================= CLOCK =================
reg clk;
reg rst_n;

initial begin
    clk = 0;
    forever #5 clk = ~clk;
end

// ================= MEMORY =================
// Shared memory (input + output)
reg [7:0] mem [0:2000000];

// ================= AXI PIX (INPUT) =================
wire [63:0] pix_araddr;
wire        pix_arvalid;
reg         pix_arready;

reg  [31:0] pix_rdata;
reg         pix_rvalid;
wire        pix_rready;

// ================= AXI OUT (OUTPUT) =================
wire [63:0] out_awaddr;
wire        out_awvalid;
reg         out_awready;

wire [31:0] out_wdata;
wire        out_wvalid;
reg         out_wready;

reg         out_bvalid;
wire        out_bready;

// ================= AXI-LITE =================
reg  [5:0]  s_awaddr;
reg         s_awvalid;
wire        s_awready;

reg  [31:0] s_wdata;
reg         s_wvalid;
wire        s_wready;

wire        s_bvalid;
reg         s_bready;

reg  [5:0]  s_araddr;
reg         s_arvalid;
wire        s_arready;

wire [31:0] s_rdata;
wire        s_rvalid;
reg         s_rready;

// ================= DUT =================
mobilenet_top dut (
    .ap_clk(clk),
    .ap_rst_n(rst_n),

    // ===== PIX AXI (READ) =====
    .m_axi_mnv2_cnn_axi4_pix_ARADDR(pix_araddr),
    .m_axi_mnv2_cnn_axi4_pix_ARVALID(pix_arvalid),
    .m_axi_mnv2_cnn_axi4_pix_ARREADY(pix_arready),
    .m_axi_mnv2_cnn_axi4_pix_RDATA(pix_rdata),
    .m_axi_mnv2_cnn_axi4_pix_RVALID(pix_rvalid),
    .m_axi_mnv2_cnn_axi4_pix_RREADY(pix_rready),

    // ===== OUT AXI (WRITE) =====
    .m_axi_mnv2_cnn_axi4_out_AWADDR(out_awaddr),
    .m_axi_mnv2_cnn_axi4_out_AWVALID(out_awvalid),
    .m_axi_mnv2_cnn_axi4_out_AWREADY(out_awready),
    .m_axi_mnv2_cnn_axi4_out_WDATA(out_wdata),
    .m_axi_mnv2_cnn_axi4_out_WVALID(out_wvalid),
    .m_axi_mnv2_cnn_axi4_out_WREADY(out_wready),
    .m_axi_mnv2_cnn_axi4_out_BVALID(out_bvalid),
    .m_axi_mnv2_cnn_axi4_out_BREADY(out_bready),

    // ===== AXI-LITE =====
    .s_axi_mnv2_cnn_axilite_ctrl_AWADDR(s_awaddr),
    .s_axi_mnv2_cnn_axilite_ctrl_AWVALID(s_awvalid),
    .s_axi_mnv2_cnn_axilite_ctrl_AWREADY(s_awready),

    .s_axi_mnv2_cnn_axilite_ctrl_WDATA(s_wdata),
    .s_axi_mnv2_cnn_axilite_ctrl_WVALID(s_wvalid),
    .s_axi_mnv2_cnn_axilite_ctrl_WREADY(s_wready),

    .s_axi_mnv2_cnn_axilite_ctrl_BVALID(s_bvalid),
    .s_axi_mnv2_cnn_axilite_ctrl_BREADY(s_bready),

    .s_axi_mnv2_cnn_axilite_ctrl_ARADDR(s_araddr),
    .s_axi_mnv2_cnn_axilite_ctrl_ARVALID(s_arvalid),
    .s_axi_mnv2_cnn_axilite_ctrl_ARREADY(s_arready),

    .s_axi_mnv2_cnn_axilite_ctrl_RDATA(s_rdata),
    .s_axi_mnv2_cnn_axilite_ctrl_RVALID(s_rvalid),
    .s_axi_mnv2_cnn_axilite_ctrl_RREADY(s_rready),

    .interrupt()
);

// ================= LOAD IMAGE =================
integer i, f;
initial begin
    f = $fopen("image3.raw", "rb");
    if (f == 0) begin
        $display("FAILED TO OPEN image");
        $finish;
    end

    i = 0;
    while (!$feof(f)) begin
        mem[i] = $fgetc(f);
        i = i + 1;
    end

    $fclose(f);
    $display("Loaded %d bytes", i);
end

// ================= PIX AXI MODEL =================
always @(posedge clk) begin
    pix_arready <= 1;

    if (pix_arvalid) begin
        pix_rvalid <= 1;
        pix_rdata <= {
            mem[pix_araddr[31:0]+3],
            mem[pix_araddr[31:0]+2],
            mem[pix_araddr[31:0]+1],
            mem[pix_araddr[31:0]]
        };
    end else begin
        pix_rvalid <= 0;
    end
end

// ================= OUT AXI MODEL =================
always @(posedge clk) begin
    out_awready <= 1;
    out_wready  <= 1;

    if (out_wvalid) begin
        mem[out_awaddr[31:0]]     <= out_wdata[7:0];
        mem[out_awaddr[31:0] + 1] <= out_wdata[15:8];
        mem[out_awaddr[31:0] + 2] <= out_wdata[23:16];
        mem[out_awaddr[31:0] + 3] <= out_wdata[31:24];
        out_bvalid <= 1;
    end else begin
        out_bvalid <= 0;
    end
end

// ================= AXI-LITE MODEL =================
assign s_awready = 1;
assign s_wready  = 1;
assign s_bvalid  = s_awvalid & s_wvalid;

assign s_arready = 1;
assign s_rvalid  = s_arvalid;
assign s_rdata   = 32'h0;

// ================= AXI-LITE WRITE TASK =================
task axi_write(input [5:0] addr, input [31:0] data);
begin
    @(posedge clk);
    s_awaddr  <= addr;
    s_awvalid <= 1;
    s_wdata   <= data;
    s_wvalid  <= 1;
    s_bready  <= 1;

    @(posedge clk);
    s_awvalid <= 0;
    s_wvalid  <= 0;

    //wait(s_bvalid);
    @(posedge clk);
    s_bready <= 0;
end
endtask

// ================= TEST =================
initial begin
    rst_n = 0;

    s_awvalid = 0;
    s_wvalid  = 0;
    s_bready  = 0;
    s_arvalid = 0;
    s_rready  = 0;

    pix_arready = 0;
    pix_rvalid  = 0;

    out_awready = 0;
    out_wready  = 0;
    out_bvalid  = 0;

    #100;
    rst_n = 1;

    // ===== CONFIG =====
    axi_write(6'h10, 0);        // input addr
    axi_write(6'h1c, 200000);   // output addr
    axi_write(6'h28, 416);      // size

    // START
    $display("CNN STARTED");
    axi_write(6'h00, 1);

    // WAIT
    #1000000;

    // PRINT OUTPUT
    $display("OUT[0]=%d", mem[200000]);
    $display("OUT[1]=%d", mem[200001]);
    $display("OUT[2]=%d", mem[200002]);

    $display("Simulation DONE");
    $finish;
end

endmodule
