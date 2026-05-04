module mailbox_arbiter #(
    parameter ADDR_WIDTH = 64,
    parameter DATA_WIDTH = 32
)(
    input  wire clk,
    input  wire resetn,

    // ================= CPU MAILBOX WRITE INTERFACE =================
    input  wire        cpu_wr_en,
    input  wire [3:0]  cpu_addr,
    input  wire [31:0] cpu_wdata,

    // ================= CPU MAILBOX READ INTERFACE =================
    input  wire        cpu_rd_en,
    input  wire [3:0]  cpu_raddr,
    output reg  [31:0] cpu_rdata,

    // ================= CNN CONTROL =================
    output reg         cnn_start,
    input  wire        cnn_done,

    output reg [31:0]  in_addr,
    output reg [31:0]  out_addr,
    output reg [31:0]  size,

    // ================= AXI MASTER (CPU SIDE) =================
    input  wire [ADDR_WIDTH-1:0] cpu_araddr,
    input  wire                  cpu_arvalid,
    output wire                  cpu_arready,

    input  wire [ADDR_WIDTH-1:0] cpu_awaddr,
    input  wire                  cpu_awvalid,
    output wire                  cpu_awready,

    input  wire [DATA_WIDTH-1:0] cpu_wdata_axi,
    input  wire                  cpu_wvalid,
    output wire                  cpu_wready,

    // ================= AXI MASTER (CNN SIDE) =================
    input  wire [ADDR_WIDTH-1:0] cnn_araddr,
    input  wire                  cnn_arvalid,
    output wire                  cnn_arready,

    input  wire [ADDR_WIDTH-1:0] cnn_awaddr,
    input  wire                  cnn_awvalid,
    output wire                  cnn_awready,

    input  wire [DATA_WIDTH-1:0] cnn_wdata,
    input  wire                  cnn_wvalid,
    output wire                  cnn_wready,

    // ================= SHARED DDR AXI =================
    output wire [ADDR_WIDTH-1:0] m_axi_araddr,
    output wire                  m_axi_arvalid,
    input  wire                  m_axi_arready,

    output wire [ADDR_WIDTH-1:0] m_axi_awaddr,
    output wire                  m_axi_awvalid,
    input  wire                  m_axi_awready,

    output wire [DATA_WIDTH-1:0] m_axi_wdata,
    output wire                  m_axi_wvalid,
    input  wire                  m_axi_wready
);

    // ================= MAILBOX REGISTERS =================
    reg start_reg;
    reg done_reg;
    reg busy_reg;

    // ================= FSM =================
    localparam IDLE = 2'd0;
    localparam RUN  = 2'd1;
    localparam DONE = 2'd2;

    reg [1:0] state;

    // ================= MAILBOX WRITE =================
    always @(posedge clk) begin
        if (!resetn) begin
            start_reg <= 0;
            in_addr   <= 0;
            out_addr  <= 0;
            size      <= 0;
        end else if (cpu_wr_en) begin
            case (cpu_addr)
                4'h0: start_reg <= cpu_wdata[0];
                4'h1: in_addr   <= cpu_wdata;
                4'h2: out_addr  <= cpu_wdata;
                4'h3: size      <= cpu_wdata;
            endcase
        end
    end

    // ================= MAILBOX READ =================
    always @(*) begin
        case (cpu_raddr)
            4'h0: cpu_rdata = {29'b0, busy_reg, done_reg, start_reg};
            4'h1: cpu_rdata = in_addr;
            4'h2: cpu_rdata = out_addr;
            4'h3: cpu_rdata = size;
            default: cpu_rdata = 0;
        endcase
    end

    // ================= FSM =================
    always @(posedge clk) begin
        if (!resetn) begin
            state      <= IDLE;
            cnn_start  <= 0;
            done_reg   <= 0;
            busy_reg   <= 0;
        end else begin
            case (state)

            IDLE: begin
                done_reg  <= 0;
                cnn_start <= 0;
                if (start_reg) begin
                    busy_reg  <= 1;
                    cnn_start <= 1;
                    state     <= RUN;
                end
            end

            RUN: begin
                cnn_start <= 0;
                if (cnn_done) begin
                    busy_reg <= 0;
                    done_reg <= 1;
                    state    <= DONE;
                end
            end

            DONE: begin
                if (!start_reg) begin
                    done_reg <= 0;
                    state    <= IDLE;
                end
            end

            endcase
        end
    end

    // ================= ARBITRATION =================
    wire use_cnn = (state == RUN);

    assign m_axi_araddr  = use_cnn ? cnn_araddr  : cpu_araddr;
    assign m_axi_arvalid = use_cnn ? cnn_arvalid : cpu_arvalid;

    assign m_axi_awaddr  = use_cnn ? cnn_awaddr  : cpu_awaddr;
    assign m_axi_awvalid = use_cnn ? cnn_awvalid : cpu_awvalid;

    assign m_axi_wdata   = use_cnn ? cnn_wdata   : cpu_wdata_axi;
    assign m_axi_wvalid  = use_cnn ? cnn_wvalid  : cpu_wvalid;
    assign m_axi_bready = 1'b1;
    assign m_axi_rready = 1'b1;

    // READY routing
    assign cnn_arready = use_cnn ? m_axi_arready : 0;
    assign cpu_arready = use_cnn ? 0 : m_axi_arready;

    assign cnn_awready = use_cnn ? m_axi_awready : 0;
    assign cpu_awready = use_cnn ? 0 : m_axi_awready;

    assign cnn_wready  = use_cnn ? m_axi_wready : 0;
    assign cpu_wready  = use_cnn ? 0 : m_axi_wready;

endmodule