`timescale 1ns/1ps

module tb;

// ================= CLOCK =================
reg clk;
reg rst_n;

initial begin
    clk = 0;
    forever #5 clk = ~clk; // 100MHz
end

// ================= MEMORY =================
reg [7:0] mem [0:1000000];

// ================= AXI FULL =================
// READ ADDRESS
wire [63:0] araddr;
wire        arvalid;
reg         arready;

// READ DATA
reg  [31:0] rdata;
reg         rvalid;
wire        rready;

// WRITE ADDRESS
wire [63:0] awaddr;
wire        awvalid;
reg         awready;

// WRITE DATA
wire [31:0] wdata;
wire        wvalid;
reg         wready;

// WRITE RESPONSE
reg         bvalid;
wire        bready;

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
cnn_accel dut (
    .ap_clk(clk),
    .ap_rst_n(rst_n),

    // AXI MASTER
    .m_axi_gmem_ARADDR(araddr),
    .m_axi_gmem_ARVALID(arvalid),
    .m_axi_gmem_ARREADY(arready),

    .m_axi_gmem_RDATA(rdata),
    .m_axi_gmem_RVALID(rvalid),
    .m_axi_gmem_RREADY(rready),

    .m_axi_gmem_AWADDR(awaddr),
    .m_axi_gmem_AWVALID(awvalid),
    .m_axi_gmem_AWREADY(awready),

    .m_axi_gmem_WDATA(wdata),
    .m_axi_gmem_WVALID(wvalid),
    .m_axi_gmem_WREADY(wready),

    .m_axi_gmem_BVALID(bvalid),
    .m_axi_gmem_BREADY(bready),

    // AXI-LITE
    .s_axi_control_AWADDR(s_awaddr),
    .s_axi_control_AWVALID(s_awvalid),
    .s_axi_control_AWREADY(s_awready),

    .s_axi_control_WDATA(s_wdata),
    .s_axi_control_WVALID(s_wvalid),
    .s_axi_control_WREADY(s_wready),

    .s_axi_control_BVALID(s_bvalid),
    .s_axi_control_BREADY(s_bready),

    .s_axi_control_ARADDR(s_araddr),
    .s_axi_control_ARVALID(s_arvalid),
    .s_axi_control_ARREADY(s_arready),

    .s_axi_control_RDATA(s_rdata),
    .s_axi_control_RVALID(s_rvalid),
    .s_axi_control_RREADY(s_rready),

    .interrupt()
);

// ================= LOAD IMAGE =================
integer i, f;

initial begin
    f = $fopen("image22.raw", "rb");
    if (f == 0) begin
        $display("FAILED TO OPEN image3.raw");
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

// ================= AXI MEMORY MODEL =================
initial begin
    arready = 1;
    awready = 1;
    wready  = 1;
    rvalid  = 0;
    bvalid  = 0;
end

always @(posedge clk) begin
    if (!rst_n) begin
        rvalid <= 0;
        bvalid <= 0;
    end else begin

        // READ
        if (arvalid && !rvalid) begin
            rdata <= {
                mem[araddr[31:0]+3],
                mem[araddr[31:0]+2],
                mem[araddr[31:0]+1],
                mem[araddr[31:0]]
            };
            rvalid <= 1;
        end else if (rvalid && rready) begin
            rvalid <= 0;
        end

        // WRITE
        if (awvalid && wvalid && !bvalid) begin
            mem[awaddr[31:0]]     <= wdata[7:0];
            mem[awaddr[31:0]+1]   <= wdata[15:8];
            mem[awaddr[31:0]+2]   <= wdata[23:16];
            mem[awaddr[31:0]+3]   <= wdata[31:24];
            bvalid <= 1;
        end else if (bvalid && bready) begin
            bvalid <= 0;
        end
    end
end
// ================= AXI-LITE SLAVE MODEL =================

reg s_bvalid_reg = 0;
reg s_rvalid_reg = 0;

assign s_bvalid = s_bvalid_reg;
assign s_rvalid = s_rvalid_reg;
assign s_rdata  = 32'h0;

always @(posedge clk) begin
    if (!rst_n) begin
        s_bvalid_reg <= 0;
        s_rvalid_reg <= 0;
    end else begin
        // WRITE RESPONSE
        if (s_awvalid && s_wvalid)
            s_bvalid_reg <= 1;
        else if (s_bvalid_reg && s_bready)
            s_bvalid_reg <= 0;

        // READ RESPONSE (not used but safe)
        if (s_arvalid)
            s_rvalid_reg <= 1;
        else if (s_rvalid_reg && s_rready)
            s_rvalid_reg <= 0;
    end
end
// ================= AXI-LITE WRITE =================
task axi_write;
    input [5:0] addr;
    input [31:0] data;
begin
    @(posedge clk);

    s_awaddr  <= addr;
    s_awvalid <= 1;
    s_wdata   <= data;
    s_wvalid  <= 1;

    // wait for DUT to accept address
   // wait(s_awready);

    @(posedge clk);
    s_awvalid <= 0;

    // wait for DUT to accept data
    //wait(s_wready);

    @(posedge clk);
    s_wvalid <= 0;

    // wait for response
    //wait(s_bvalid);

    @(posedge clk);
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

    #100;
    rst_n = 1;

    #50;

    // CONFIGURE CNN
// INPUT ADDRESS (64-bit split)
axi_write(6'h10, 32'd0);        // lower
axi_write(6'h14, 32'd0);        // upper

// OUTPUT ADDRESS (64-bit split)
axi_write(6'h1C, 32'd200000);   // lower
axi_write(6'h20, 32'd0);        // upper

// SIZE
axi_write(6'h28, 32'd416);

// START
axi_write(6'h00, 32'h1);

    // START
    axi_write(6'h00, 32'h1);

    $display("CNN STARTED");

    #500000;

    // DEBUG OUTPUT
    $display("OUT[0]=%d", mem[200000]);
    $display("OUT[1]=%d", mem[200001]);
    $display("OUT[2]=%d", mem[200002]);

    $display("Simulation DONE");
    $finish;
end

endmodule
