
  function Bit#(`xlen) fn_probe_csr (Bit#(12) csr_addr);
    case (csr_addr)

        `MVENDORID : return zeroExtend(soc.soc_sb.sbread.mv_csr_mvendorid);
        `MTVEC : return zeroExtend(soc.soc_sb.sbread.mv_csr_mtvec);
        `MSTATUS : return zeroExtend(soc.soc_sb.sbread.mv_csr_mstatus);
        `MARCHID : return zeroExtend(soc.soc_sb.sbread.mv_csr_marchid);
        `MIMPID : return zeroExtend(soc.soc_sb.sbread.mv_csr_mimpid);
        `MHARTID : return zeroExtend(soc.soc_sb.sbread.mv_csr_mhartid);
        `MIP : return zeroExtend(soc.soc_sb.sbread.mv_csr_mip);
        `MIE : return zeroExtend(soc.soc_sb.sbread.mv_csr_mie);
        `MSCRATCH : return zeroExtend(soc.soc_sb.sbread.mv_csr_mscratch);
        `MEPC : return zeroExtend(soc.soc_sb.sbread.mv_csr_mepc);
        `MTVAL : return zeroExtend(soc.soc_sb.sbread.mv_csr_mtval);
        `MCAUSE : return zeroExtend(soc.soc_sb.sbread.mv_csr_mcause);
        `MCYCLEH : return zeroExtend(soc.soc_sb.sbread.mv_csr_mcycleh);
        `MCYCLE : return zeroExtend(soc.soc_sb.sbread.mv_csr_mcycle);
        `MINSTRETH : return zeroExtend(soc.soc_sb.sbread.mv_csr_minstreth);
        `MINSTRET : return zeroExtend(soc.soc_sb.sbread.mv_csr_minstret);
        `MISA : return zeroExtend(soc.soc_sb.sbread.mv_csr_misa);
        `MSTATUSH : return zeroExtend(soc.soc_sb.sbread.mv_csr_mstatush);
        `MCOUNTINHIBIT : return zeroExtend(soc.soc_sb.sbread.mv_csr_mcountinhibit);
        `CUSTOMCONTROL : return zeroExtend(soc.soc_sb.sbread.mv_csr_customcontrol);
        `DCSR : return zeroExtend(soc.soc_sb.sbread.mv_csr_dcsr);
        `DPC : return zeroExtend(soc.soc_sb.sbread.mv_csr_dpc);
        `DSCRATCH0 : return zeroExtend(soc.soc_sb.sbread.mv_csr_dscratch0);
        `DSCRATCH1 : return zeroExtend(soc.soc_sb.sbread.mv_csr_dscratch1);
    default: return 0;
    endcase
  endfunction
