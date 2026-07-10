// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_top__Syms.h"


void Vtb_top___024root__trace_chg_0_sub_0(Vtb_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_chg_0\n"); );
    // Body
    Vtb_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_top___024root*>(voidSelf);
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtb_top___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_top___024root__trace_chg_0_sub_0(Vtb_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_chg_0_sub_0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [7U])))) {
        bufp->chgIData(oldp+0,(vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__x[0]),32);
        bufp->chgIData(oldp+1,(vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__x[1]),32);
        bufp->chgIData(oldp+2,(vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__x[2]),32);
        bufp->chgIData(oldp+3,(vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__x[3]),32);
        bufp->chgIData(oldp+4,(vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__x[4]),32);
        bufp->chgIData(oldp+5,(vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__x[5]),32);
        bufp->chgIData(oldp+6,(vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__x[6]),32);
        bufp->chgIData(oldp+7,(vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__x[7]),32);
        bufp->chgIData(oldp+8,(vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__x[8]),32);
        bufp->chgIData(oldp+9,(vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__x[9]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__x[10]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__x[11]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__x[12]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__x[13]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__x[14]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__x[15]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__x[16]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__x[17]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__x[18]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__x[19]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__x[20]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__x[21]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__x[22]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__x[23]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__x[24]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__x[25]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__x[26]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__x[27]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__x[28]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__x[29]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__x[30]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__x[31]),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+32,(vlSelfRef.tb_top__DOT__imem_addr),32);
        bufp->chgIData(oldp+33,(vlSelfRef.tb_top__DOT__imem_inst),32);
        bufp->chgBit(oldp+34,(vlSelfRef.tb_top__DOT__DUT__DOT__pc_sel_mem));
        bufp->chgCData(oldp+35,(vlSelfRef.tb_top__DOT__DUT__DOT__WBSel_mem),2);
        bufp->chgBit(oldp+36,(vlSelfRef.tb_top__DOT__DUT__DOT__MemRW_wb));
        bufp->chgCData(oldp+37,(vlSelfRef.tb_top__DOT__DUT__DOT__WBSel_wb),2);
        bufp->chgIData(oldp+38,(((IData)(4U) + vlSelfRef.tb_top__DOT__imem_addr)),32);
        bufp->chgBit(oldp+39,(vlSelfRef.tb_top__DOT__DUT__DOT__pc__DOT__write_en));
        bufp->chgIData(oldp+40,(vlSelfRef.tb_top__DOT__imem_instance__DOT__address),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+41,(vlSelfRef.tb_top__DOT__DUT__DOT__tracer_inst__DOT__rvfi_insn),32);
        bufp->chgCData(oldp+42,(vlSelfRef.tb_top__DOT__DUT__DOT__tracer_inst__DOT__rvfi_rs1_addr),5);
        bufp->chgCData(oldp+43,(vlSelfRef.tb_top__DOT__DUT__DOT__tracer_inst__DOT__rvfi_rs2_addr),5);
        bufp->chgCData(oldp+44,(vlSelfRef.tb_top__DOT__DUT__DOT__tracer_inst__DOT__rvfi_rs3_addr),5);
        bufp->chgIData(oldp+45,(vlSelfRef.tb_top__DOT__DUT__DOT__tracer_inst__DOT__rvfi_rs1_rdata),32);
        bufp->chgIData(oldp+46,(vlSelfRef.tb_top__DOT__DUT__DOT__tracer_inst__DOT__rvfi_rs2_rdata),32);
        bufp->chgIData(oldp+47,(vlSelfRef.tb_top__DOT__DUT__DOT__tracer_inst__DOT__rvfi_rs3_rdata),32);
        bufp->chgCData(oldp+48,(vlSelfRef.tb_top__DOT__DUT__DOT__tracer_inst__DOT__rvfi_rd_addr),5);
        bufp->chgIData(oldp+49,(vlSelfRef.tb_top__DOT__DUT__DOT__tracer_inst__DOT__rvfi_rd_wdata),32);
        bufp->chgIData(oldp+50,(vlSelfRef.tb_top__DOT__DUT__DOT__tracer_inst__DOT__rvfi_pc_rdata),32);
        bufp->chgIData(oldp+51,(vlSelfRef.tb_top__DOT__DUT__DOT__tracer_inst__DOT__rvfi_pc_wdata),32);
        bufp->chgIData(oldp+52,(vlSelfRef.tb_top__DOT__DUT__DOT__tracer_inst__DOT__file_handle),32);
        bufp->chgBit(oldp+53,(vlSelfRef.tb_top__DOT__DUT__DOT__tracer_inst__DOT__insn_is_compressed));
        bufp->chgCData(oldp+54,(vlSelfRef.tb_top__DOT__DUT__DOT__tracer_inst__DOT__data_accessed),5);
        bufp->chgBit(oldp+55,(vlSelfRef.tb_top__DOT__DUT__DOT__tracer_inst__DOT__rs1_float));
        bufp->chgBit(oldp+56,(vlSelfRef.tb_top__DOT__DUT__DOT__tracer_inst__DOT__rs2_float));
        bufp->chgBit(oldp+57,(vlSelfRef.tb_top__DOT__DUT__DOT__tracer_inst__DOT__rs3_float));
        bufp->chgBit(oldp+58,(vlSelfRef.tb_top__DOT__DUT__DOT__tracer_inst__DOT__rd_float));
        bufp->chgIData(oldp+59,(vlSelfRef.tb_top__DOT__DUT__DOT__tracer_inst__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+60,(vlSelfRef.tb_top__DOT__DUT__DOT__BrUn_ex));
        bufp->chgBit(oldp+61,(vlSelfRef.tb_top__DOT__DUT__DOT__JSel_ex));
        bufp->chgBit(oldp+62,(vlSelfRef.tb_top__DOT__DUT__DOT__BSel_ex));
        bufp->chgBit(oldp+63,(vlSelfRef.tb_top__DOT__DUT__DOT__Eq_ex));
        bufp->chgBit(oldp+64,(vlSelfRef.tb_top__DOT__DUT__DOT__Lt_ex));
        bufp->chgCData(oldp+65,(vlSelfRef.tb_top__DOT__DUT__DOT__WBSel_ex),2);
        bufp->chgIData(oldp+66,(vlSelfRef.tb_top__DOT__DUT__DOT__immediate_ex),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgIData(oldp+67,(vlSelfRef.tb_top__DOT__mem_addr),32);
        bufp->chgIData(oldp+68,(vlSelfRef.tb_top__DOT__mem_wdata),32);
        bufp->chgBit(oldp+69,(vlSelfRef.tb_top__DOT__DUT__DOT__MemRW_mem));
        bufp->chgBit(oldp+70,((1U & (~ (IData)(vlSelfRef.tb_top__DOT__DUT__DOT__MemRW_mem)))));
        bufp->chgIData(oldp+71,(vlSelfRef.tb_top__DOT__DUT__DOT__pc__DOT__inc_value),32);
        bufp->chgIData(oldp+72,(vlSelfRef.tb_top__DOT__DUT__DOT__data1_mem),32);
        bufp->chgIData(oldp+73,(vlSelfRef.tb_top__DOT__DUT__DOT__data2_mem),32);
        bufp->chgIData(oldp+74,(vlSelfRef.tb_top__DOT__DUT__DOT__pc_mem),32);
        bufp->chgIData(oldp+75,(vlSelfRef.tb_top__DOT__DUT__DOT__pc_wb),32);
        bufp->chgIData(oldp+76,(vlSelfRef.tb_top__DOT__DUT__DOT__alu_wb),32);
        bufp->chgIData(oldp+77,(vlSelfRef.tb_top__DOT__DUT__DOT__dmem_wb),32);
        bufp->chgIData(oldp+78,(vlSelfRef.tb_top__DOT__DUT__DOT__data1_wb),32);
        bufp->chgIData(oldp+79,(vlSelfRef.tb_top__DOT__DUT__DOT__data2_wb),32);
        bufp->chgIData(oldp+80,(vlSelfRef.tb_top__DOT__DUT__DOT__mem_dat_wb),32);
        bufp->chgCData(oldp+81,((3U & vlSelfRef.tb_top__DOT__mem_addr)),2);
        bufp->chgIData(oldp+82,(vlSelfRef.tb_top__DOT__dmem_inst__DOT__local_addr),32);
        bufp->chgIData(oldp+83,(vlSelfRef.tb_top__DOT__dmem_inst__DOT__word_index),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[6U]))) {
        bufp->chgIData(oldp+84,(vlSelfRef.tb_top__DOT__DUT__DOT__pc_id),32);
        bufp->chgBit(oldp+85,(vlSelfRef.tb_top__DOT__DUT__DOT__MemRW_ex));
        bufp->chgCData(oldp+86,(vlSelfRef.tb_top__DOT__DUT__DOT__ALUSel_ex),4);
        bufp->chgIData(oldp+87,(vlSelfRef.tb_top__DOT__DUT__DOT__pc_ex),32);
        bufp->chgIData(oldp+88,(vlSelfRef.tb_top__DOT__DUT__DOT__data1_ex),32);
        bufp->chgIData(oldp+89,(vlSelfRef.tb_top__DOT__DUT__DOT__data2_ex),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[8U]))) {
        bufp->chgCData(oldp+90,(vlSelfRef.tb_top__DOT__DUT__DOT__wstrb),4);
        bufp->chgCData(oldp+91,((0x0000001fU & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_wb 
                                                >> 7U))),5);
        bufp->chgCData(oldp+92,((7U & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_mem 
                                       >> 0x0000000cU))),3);
        bufp->chgIData(oldp+93,(vlSelfRef.tb_top__DOT__DUT__DOT__inst_mem),32);
        bufp->chgBit(oldp+94,(vlSelfRef.tb_top__DOT__DUT__DOT__RegWEn_mem));
        bufp->chgBit(oldp+95,(vlSelfRef.tb_top__DOT__DUT__DOT__RegWEn_wb));
        bufp->chgIData(oldp+96,(vlSelfRef.tb_top__DOT__DUT__DOT__inst_wb),32);
        bufp->chgIData(oldp+97,(vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__dataW),32);
        bufp->chgCData(oldp+98,((0x0000001fU & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_wb 
                                                >> 0x0000000fU))),5);
        bufp->chgCData(oldp+99,((0x0000001fU & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_wb 
                                                >> 0x00000014U))),5);
        bufp->chgBit(oldp+100,(vlSelfRef.tb_top__DOT__DUT__DOT__rvfi_valid));
        bufp->chgCData(oldp+101,((0x0000007fU & vlSelfRef.tb_top__DOT__DUT__DOT__inst_wb)),7);
        bufp->chgCData(oldp+102,((0x0000001fU & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_mem 
                                                 >> 7U))),5);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[9U]))) {
        bufp->chgBit(oldp+103,(((1U & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                       >> 6U)) && (
                                                   (1U 
                                                    & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                                       >> 5U)) 
                                                   && ((1U 
                                                        & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                                           >> 4U)) 
                                                       && ((1U 
                                                            & (~ 
                                                               (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                                                >> 3U))) 
                                                           && ((1U 
                                                                & (~ 
                                                                   (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                                                    >> 2U))) 
                                                               && ((1U 
                                                                    & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                                                       >> 1U)) 
                                                                   && (1U 
                                                                       & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id)))))))));
        bufp->chgCData(oldp+104,((0x0000001fU & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                                 >> 0x0000000fU))),5);
        bufp->chgCData(oldp+105,((0x0000001fU & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                                 >> 0x00000014U))),5);
        bufp->chgCData(oldp+106,(vlSelfRef.tb_top__DOT__DUT__DOT__inst_type),3);
        bufp->chgCData(oldp+107,(vlSelfRef.tb_top__DOT__DUT__DOT__WBSel),2);
        bufp->chgCData(oldp+108,(vlSelfRef.tb_top__DOT__DUT__DOT__ALUSel),4);
        bufp->chgBit(oldp+109,(vlSelfRef.tb_top__DOT__DUT__DOT__BSel));
        bufp->chgBit(oldp+110,(vlSelfRef.tb_top__DOT__DUT__DOT__RegWEn));
        bufp->chgBit(oldp+111,(vlSelfRef.tb_top__DOT__DUT__DOT__MemRW));
        bufp->chgBit(oldp+112,(vlSelfRef.tb_top__DOT__DUT__DOT__JSel));
        bufp->chgBit(oldp+113,(vlSelfRef.tb_top__DOT__DUT__DOT__BrUn));
        bufp->chgBit(oldp+114,(vlSelfRef.tb_top__DOT__DUT__DOT__PCWrite));
        bufp->chgBit(oldp+115,(vlSelfRef.tb_top__DOT__DUT__DOT__mux_en));
        bufp->chgBit(oldp+116,(vlSelfRef.tb_top__DOT__DUT__DOT__IFWrite));
        bufp->chgIData(oldp+117,(vlSelfRef.tb_top__DOT__DUT__DOT__inst_id),32);
        bufp->chgBit(oldp+118,(vlSelfRef.tb_top__DOT__DUT__DOT__RegWEn_ex));
        bufp->chgIData(oldp+119,(vlSelfRef.tb_top__DOT__DUT__DOT__inst_ex),32);
        bufp->chgCData(oldp+120,(((IData)(vlSelfRef.tb_top__DOT__DUT__DOT__mux_en)
                                   ? 0x0bU : (IData)(vlSelfRef.tb_top__DOT__DUT__DOT__ALUSel))),4);
        bufp->chgCData(oldp+121,(((IData)(vlSelfRef.tb_top__DOT__DUT__DOT__mux_en)
                                   ? 1U : (IData)(vlSelfRef.tb_top__DOT__DUT__DOT__WBSel))),2);
        bufp->chgBit(oldp+122,(((~ (IData)(vlSelfRef.tb_top__DOT__DUT__DOT__mux_en)) 
                                & (IData)(vlSelfRef.tb_top__DOT__DUT__DOT__RegWEn))));
        bufp->chgBit(oldp+123,(((~ (IData)(vlSelfRef.tb_top__DOT__DUT__DOT__mux_en)) 
                                & (IData)(vlSelfRef.tb_top__DOT__DUT__DOT__MemRW))));
        bufp->chgIData(oldp+124,(((4U & (IData)(vlSelfRef.tb_top__DOT__DUT__DOT__inst_type))
                                   ? ((2U & (IData)(vlSelfRef.tb_top__DOT__DUT__DOT__inst_type))
                                       ? 0U : ((1U 
                                                & (IData)(vlSelfRef.tb_top__DOT__DUT__DOT__inst_type))
                                                ? 0U
                                                : (0xfffff000U 
                                                   & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id)))
                                   : ((2U & (IData)(vlSelfRef.tb_top__DOT__DUT__DOT__inst_type))
                                       ? ((1U & (IData)(vlSelfRef.tb_top__DOT__DUT__DOT__inst_type))
                                           ? (((- (IData)(
                                                          (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                                           >> 0x0000001fU))) 
                                               << 0x0000000dU) 
                                              | ((((2U 
                                                    & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                                       >> 0x0000001eU)) 
                                                   | (1U 
                                                      & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                                         >> 7U))) 
                                                  << 0x0000000bU) 
                                                 | ((0x000007e0U 
                                                     & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                                        >> 0x00000014U)) 
                                                    | (0x0000001eU 
                                                       & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                                          >> 7U)))))
                                           : ((((0x00000ffeU 
                                                 & ((- (IData)(
                                                               (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                                                >> 0x0000001fU))) 
                                                    << 1U)) 
                                                | (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                                   >> 0x0000001fU)) 
                                               << 0x00000014U) 
                                              | ((((0x000001feU 
                                                    & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                                       >> 0x0000000bU)) 
                                                   | (1U 
                                                      & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                                         >> 0x00000014U))) 
                                                  << 0x0000000bU) 
                                                 | (0x000007feU 
                                                    & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                                       >> 0x00000014U)))))
                                       : ((1U & (IData)(vlSelfRef.tb_top__DOT__DUT__DOT__inst_type))
                                           ? (((- (IData)(
                                                          (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                                           >> 0x0000001fU))) 
                                               << 0x0000000cU) 
                                              | ((0x00000fe0U 
                                                  & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                                     >> 0x00000014U)) 
                                                 | (0x0000001fU 
                                                    & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                                       >> 7U))))
                                           : (((- (IData)(
                                                          (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                                           >> 0x0000001fU))) 
                                               << 0x0000000cU) 
                                              | (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                                 >> 0x00000014U)))))),32);
        bufp->chgCData(oldp+125,((0x0000007fU & vlSelfRef.tb_top__DOT__DUT__DOT__inst_ex)),7);
        bufp->chgCData(oldp+126,((7U & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_ex 
                                        >> 0x0000000cU))),3);
        bufp->chgCData(oldp+127,((0x0000001fU & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_ex 
                                                 >> 0x0000000fU))),5);
        bufp->chgCData(oldp+128,((0x0000001fU & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_ex 
                                                 >> 0x00000014U))),5);
        bufp->chgCData(oldp+129,((0x0000001fU & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_ex 
                                                 >> 7U))),5);
        bufp->chgCData(oldp+130,((0x0000007fU & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id)),7);
        bufp->chgCData(oldp+131,((7U & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                        >> 0x0000000cU))),3);
        bufp->chgCData(oldp+132,((vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                  >> 0x00000019U)),7);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x0000000aU]))) {
        bufp->chgBit(oldp+133,(vlSelfRef.tb_top__DOT__DUT__DOT__branch__DOT__Eq));
        bufp->chgBit(oldp+134,(vlSelfRef.tb_top__DOT__DUT__DOT__branch__DOT__Lt));
        bufp->chgIData(oldp+135,(vlSelfRef.tb_top__DOT__DUT__DOT__branch__DOT__op1),32);
        bufp->chgIData(oldp+136,(vlSelfRef.tb_top__DOT__DUT__DOT__branch__DOT__op2),32);
        bufp->chgCData(oldp+137,(vlSelfRef.tb_top__DOT__DUT__DOT__fwd_a),2);
        bufp->chgCData(oldp+138,(vlSelfRef.tb_top__DOT__DUT__DOT__fwd_b),2);
        bufp->chgIData(oldp+139,(vlSelfRef.tb_top__DOT__DUT__DOT__alu__DOT__data2),32);
        bufp->chgIData(oldp+140,(vlSelfRef.tb_top__DOT__DUT__DOT__alu__DOT__data1),32);
        bufp->chgCData(oldp+141,((0x0000001fU & vlSelfRef.tb_top__DOT__DUT__DOT__alu__DOT__data2)),5);
    }
    bufp->chgBit(oldp+142,(vlSelfRef.tb_top__DOT__clk));
    bufp->chgBit(oldp+143,(vlSelfRef.tb_top__DOT__reset_n));
    bufp->chgIData(oldp+144,(vlSelfRef.tb_top__DOT__mem_rdata),32);
    bufp->chgBit(oldp+145,(vlSelfRef.tb_top__DOT__mem_ack));
    bufp->chgIData(oldp+146,(((8U & (IData)(vlSelfRef.tb_top__DOT__DUT__DOT__ALUSel_ex))
                               ? ((4U & (IData)(vlSelfRef.tb_top__DOT__DUT__DOT__ALUSel_ex))
                                   ? 0U : ((2U & (IData)(vlSelfRef.tb_top__DOT__DUT__DOT__ALUSel_ex))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.tb_top__DOT__DUT__DOT__ALUSel_ex))
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, vlSelfRef.tb_top__DOT__DUT__DOT__alu__DOT__data1, vlSelfRef.tb_top__DOT__DUT__DOT__alu__DOT__data2)
                                                    ? 1U
                                                    : 0U))
                                            : ((1U 
                                                & (IData)(vlSelfRef.tb_top__DOT__DUT__DOT__ALUSel_ex))
                                                ? (
                                                   (vlSelfRef.tb_top__DOT__DUT__DOT__alu__DOT__data1 
                                                    < vlSelfRef.tb_top__DOT__DUT__DOT__alu__DOT__data2)
                                                    ? 1U
                                                    : 0U)
                                                : (vlSelfRef.tb_top__DOT__DUT__DOT__alu__DOT__data1 
                                                   << 
                                                   (0x0000001fU 
                                                    & vlSelfRef.tb_top__DOT__DUT__DOT__alu__DOT__data2)))))
                               : ((4U & (IData)(vlSelfRef.tb_top__DOT__DUT__DOT__ALUSel_ex))
                                   ? ((2U & (IData)(vlSelfRef.tb_top__DOT__DUT__DOT__ALUSel_ex))
                                       ? ((1U & (IData)(vlSelfRef.tb_top__DOT__DUT__DOT__ALUSel_ex))
                                           ? (vlSelfRef.tb_top__DOT__DUT__DOT__alu__DOT__data1 
                                              - vlSelfRef.tb_top__DOT__DUT__DOT__alu__DOT__data2)
                                           : VL_SHIFTRS_III(32,32,5, vlSelfRef.tb_top__DOT__DUT__DOT__alu__DOT__data1, 
                                                            (0x0000001fU 
                                                             & vlSelfRef.tb_top__DOT__DUT__DOT__alu__DOT__data2)))
                                       : ((1U & (IData)(vlSelfRef.tb_top__DOT__DUT__DOT__ALUSel_ex))
                                           ? (vlSelfRef.tb_top__DOT__DUT__DOT__alu__DOT__data1 
                                              >> (0x0000001fU 
                                                  & vlSelfRef.tb_top__DOT__DUT__DOT__alu__DOT__data2))
                                           : (vlSelfRef.tb_top__DOT__DUT__DOT__alu__DOT__data1 
                                              ^ vlSelfRef.tb_top__DOT__DUT__DOT__alu__DOT__data2)))
                                   : ((2U & (IData)(vlSelfRef.tb_top__DOT__DUT__DOT__ALUSel_ex))
                                       ? ((1U & (IData)(vlSelfRef.tb_top__DOT__DUT__DOT__ALUSel_ex))
                                           ? (vlSelfRef.tb_top__DOT__DUT__DOT__alu__DOT__data1 
                                              | vlSelfRef.tb_top__DOT__DUT__DOT__alu__DOT__data2)
                                           : (vlSelfRef.tb_top__DOT__DUT__DOT__alu__DOT__data1 
                                              & vlSelfRef.tb_top__DOT__DUT__DOT__alu__DOT__data2))
                                       : ((1U & (IData)(vlSelfRef.tb_top__DOT__DUT__DOT__ALUSel_ex))
                                           ? vlSelfRef.tb_top__DOT__DUT__DOT__alu__DOT__data2
                                           : (vlSelfRef.tb_top__DOT__DUT__DOT__alu__DOT__data1 
                                              + vlSelfRef.tb_top__DOT__DUT__DOT__alu__DOT__data2)))))),32);
    bufp->chgIData(oldp+147,(((0U == (0x0000001fU & 
                                      (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                       >> 0x0000000fU)))
                               ? 0U : (((((0x0000001fU 
                                           & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                              >> 0x0000000fU)) 
                                          == (0x0000001fU 
                                              & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_wb 
                                                 >> 7U))) 
                                         & (IData)(vlSelfRef.tb_top__DOT__DUT__DOT__RegWEn_wb)) 
                                        & (0U != (0x0000001fU 
                                                  & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_wb 
                                                     >> 7U))))
                                        ? vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__dataW
                                        : vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__x
                                       [(0x0000001fU 
                                         & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                            >> 0x0000000fU))]))),32);
    bufp->chgIData(oldp+148,(((0U == (0x0000001fU & 
                                      (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                       >> 0x00000014U)))
                               ? 0U : (((((0x0000001fU 
                                           & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                              >> 0x00000014U)) 
                                          == (0x0000001fU 
                                              & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_wb 
                                                 >> 7U))) 
                                         & (IData)(vlSelfRef.tb_top__DOT__DUT__DOT__RegWEn_wb)) 
                                        & (0U != (0x0000001fU 
                                                  & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_wb 
                                                     >> 7U))))
                                        ? vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__dataW
                                        : vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__x
                                       [(0x0000001fU 
                                         & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                            >> 0x00000014U))]))),32);
    bufp->chgBit(oldp+149,(vlSelfRef.tb_top__DOT__DUT__DOT__pc_sel));
    bufp->chgBit(oldp+150,(vlSelfRef.tb_top__DOT__DUT__DOT__flush));
    bufp->chgIData(oldp+151,(((IData)(vlSelfRef.tb_top__DOT__DUT__DOT__IFWrite)
                               ? vlSelfRef.tb_top__DOT__imem_addr
                               : vlSelfRef.tb_top__DOT__DUT__DOT__pc_id)),32);
    bufp->chgIData(oldp+152,(((IData)(vlSelfRef.tb_top__DOT__DUT__DOT__IFWrite)
                               ? vlSelfRef.tb_top__DOT__imem_inst
                               : vlSelfRef.tb_top__DOT__DUT__DOT__inst_id)),32);
    bufp->chgIData(oldp+153,(vlSelfRef.tb_top__DOT__DUT__DOT__WB_3__DOT__data_in),32);
    bufp->chgIData(oldp+154,(vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__i),32);
    bufp->chgIData(oldp+155,(vlSelfRef.tb_top__DOT__DUT__DOT__tracer_inst__DOT__cycle),32);
}

void Vtb_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_cleanup\n"); );
    // Body
    Vtb_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_top___024root*>(voidSelf);
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x0000000aU] = 0U;
}
