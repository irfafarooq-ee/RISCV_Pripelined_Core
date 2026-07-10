// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top___024root___nba_sequent__TOP__3(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_sequent__TOP__3\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__tb_top__DOT__DUT__DOT__rf__DOT__x__v0 = 0U;
    if (((IData)(vlSelfRef.tb_top__DOT__DUT__DOT__RegWEn_wb) 
         & (0U != (0x0000001fU & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_wb 
                                  >> 7U))))) {
        vlSelfRef.__VdlyVal__tb_top__DOT__DUT__DOT__rf__DOT__x__v0 
            = vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__dataW;
        vlSelfRef.__VdlyDim0__tb_top__DOT__DUT__DOT__rf__DOT__x__v0 
            = (0x0000001fU & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_wb 
                              >> 7U));
        vlSelfRef.__VdlySet__tb_top__DOT__DUT__DOT__rf__DOT__x__v0 = 1U;
    }
}

void Vtb_top___024root___nba_sequent__TOP__4(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_sequent__TOP__4\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_top__DOT__DUT__DOT__flush) {
        vlSelfRef.tb_top__DOT__DUT__DOT__JSel_ex = vlSelfRef.tb_top__DOT__DUT__DOT__JSel;
        vlSelfRef.tb_top__DOT__DUT__DOT__BSel_ex = vlSelfRef.tb_top__DOT__DUT__DOT__BSel;
        vlSelfRef.tb_top__DOT__DUT__DOT__Eq_ex = vlSelfRef.tb_top__DOT__DUT__DOT__branch__DOT__Eq;
        vlSelfRef.tb_top__DOT__DUT__DOT__Lt_ex = vlSelfRef.tb_top__DOT__DUT__DOT__branch__DOT__Lt;
        vlSelfRef.tb_top__DOT__DUT__DOT__BrUn_ex = vlSelfRef.tb_top__DOT__DUT__DOT__BrUn;
        vlSelfRef.tb_top__DOT__DUT__DOT__immediate_ex 
            = ((4U & (IData)(vlSelfRef.tb_top__DOT__DUT__DOT__inst_type))
                ? ((2U & (IData)(vlSelfRef.tb_top__DOT__DUT__DOT__inst_type))
                    ? 0U : ((1U & (IData)(vlSelfRef.tb_top__DOT__DUT__DOT__inst_type))
                             ? 0U : (0xfffff000U & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id)))
                : ((2U & (IData)(vlSelfRef.tb_top__DOT__DUT__DOT__inst_type))
                    ? ((1U & (IData)(vlSelfRef.tb_top__DOT__DUT__DOT__inst_type))
                        ? (((- (IData)((vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                        >> 0x0000001fU))) 
                            << 0x0000000dU) | ((((2U 
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
                        : ((((0x00000ffeU & ((- (IData)(
                                                        (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                                         >> 0x0000001fU))) 
                                             << 1U)) 
                             | (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                >> 0x0000001fU)) << 0x00000014U) 
                           | ((((0x000001feU & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                                >> 0x0000000bU)) 
                                | (1U & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                         >> 0x00000014U))) 
                               << 0x0000000bU) | (0x000007feU 
                                                  & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                                     >> 0x00000014U)))))
                    : ((1U & (IData)(vlSelfRef.tb_top__DOT__DUT__DOT__inst_type))
                        ? (((- (IData)((vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                        >> 0x0000001fU))) 
                            << 0x0000000cU) | ((0x00000fe0U 
                                                & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                                   >> 0x00000014U)) 
                                               | (0x0000001fU 
                                                  & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                                     >> 7U))))
                        : (((- (IData)((vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                        >> 0x0000001fU))) 
                            << 0x0000000cU) | (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                               >> 0x00000014U)))));
        vlSelfRef.tb_top__DOT__DUT__DOT__WBSel_ex = 
            ((IData)(vlSelfRef.tb_top__DOT__DUT__DOT__mux_en)
              ? 1U : (IData)(vlSelfRef.tb_top__DOT__DUT__DOT__WBSel));
    } else {
        vlSelfRef.tb_top__DOT__DUT__DOT__JSel_ex = 0U;
        vlSelfRef.tb_top__DOT__DUT__DOT__BSel_ex = 0U;
        vlSelfRef.tb_top__DOT__DUT__DOT__Eq_ex = 0U;
        vlSelfRef.tb_top__DOT__DUT__DOT__Lt_ex = 0U;
        vlSelfRef.tb_top__DOT__DUT__DOT__BrUn_ex = 0U;
        vlSelfRef.tb_top__DOT__DUT__DOT__immediate_ex = 0U;
        vlSelfRef.tb_top__DOT__DUT__DOT__WBSel_ex = 0U;
    }
}

void Vtb_top___024root___nba_sequent__TOP__5(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_sequent__TOP__5\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_top__DOT__reset_n) {
        vlSelfRef.tb_top__DOT__DUT__DOT__mem_dat_wb 
            = vlSelfRef.tb_top__DOT__mem_wdata;
        vlSelfRef.tb_top__DOT__DUT__DOT__dmem_wb = vlSelfRef.tb_top__DOT__DUT__DOT__WB_3__DOT__data_in;
        vlSelfRef.tb_top__DOT__DUT__DOT__pc_wb = vlSelfRef.tb_top__DOT__DUT__DOT__pc_mem;
        vlSelfRef.tb_top__DOT__DUT__DOT__alu_wb = vlSelfRef.tb_top__DOT__mem_addr;
        vlSelfRef.tb_top__DOT__DUT__DOT__data1_wb = vlSelfRef.tb_top__DOT__DUT__DOT__data1_mem;
        vlSelfRef.tb_top__DOT__DUT__DOT__data2_wb = vlSelfRef.tb_top__DOT__DUT__DOT__data2_mem;
        vlSelfRef.tb_top__DOT__mem_wdata = vlSelfRef.tb_top__DOT__DUT__DOT__branch__DOT__op2;
        vlSelfRef.tb_top__DOT__DUT__DOT__pc_mem = vlSelfRef.tb_top__DOT__DUT__DOT__pc_ex;
        vlSelfRef.tb_top__DOT__mem_addr = ((8U & (IData)(vlSelfRef.tb_top__DOT__DUT__DOT__ALUSel_ex))
                                            ? ((4U 
                                                & (IData)(vlSelfRef.tb_top__DOT__DUT__DOT__ALUSel_ex))
                                                ? 0U
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.tb_top__DOT__DUT__DOT__ALUSel_ex))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tb_top__DOT__DUT__DOT__ALUSel_ex))
                                                     ? 0U
                                                     : 
                                                    (VL_LTS_III(32, vlSelfRef.tb_top__DOT__DUT__DOT__alu__DOT__data1, vlSelfRef.tb_top__DOT__DUT__DOT__alu__DOT__data2)
                                                      ? 1U
                                                      : 0U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tb_top__DOT__DUT__DOT__ALUSel_ex))
                                                     ? 
                                                    ((vlSelfRef.tb_top__DOT__DUT__DOT__alu__DOT__data1 
                                                      < vlSelfRef.tb_top__DOT__DUT__DOT__alu__DOT__data2)
                                                      ? 1U
                                                      : 0U)
                                                     : 
                                                    (vlSelfRef.tb_top__DOT__DUT__DOT__alu__DOT__data1 
                                                     << 
                                                     (0x0000001fU 
                                                      & vlSelfRef.tb_top__DOT__DUT__DOT__alu__DOT__data2)))))
                                            : ((4U 
                                                & (IData)(vlSelfRef.tb_top__DOT__DUT__DOT__ALUSel_ex))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelfRef.tb_top__DOT__DUT__DOT__ALUSel_ex))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tb_top__DOT__DUT__DOT__ALUSel_ex))
                                                     ? 
                                                    (vlSelfRef.tb_top__DOT__DUT__DOT__alu__DOT__data1 
                                                     - vlSelfRef.tb_top__DOT__DUT__DOT__alu__DOT__data2)
                                                     : 
                                                    VL_SHIFTRS_III(32,32,5, vlSelfRef.tb_top__DOT__DUT__DOT__alu__DOT__data1, 
                                                                   (0x0000001fU 
                                                                    & vlSelfRef.tb_top__DOT__DUT__DOT__alu__DOT__data2)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tb_top__DOT__DUT__DOT__ALUSel_ex))
                                                     ? 
                                                    (vlSelfRef.tb_top__DOT__DUT__DOT__alu__DOT__data1 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.tb_top__DOT__DUT__DOT__alu__DOT__data2))
                                                     : 
                                                    (vlSelfRef.tb_top__DOT__DUT__DOT__alu__DOT__data1 
                                                     ^ vlSelfRef.tb_top__DOT__DUT__DOT__alu__DOT__data2)))
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.tb_top__DOT__DUT__DOT__ALUSel_ex))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tb_top__DOT__DUT__DOT__ALUSel_ex))
                                                     ? 
                                                    (vlSelfRef.tb_top__DOT__DUT__DOT__alu__DOT__data1 
                                                     | vlSelfRef.tb_top__DOT__DUT__DOT__alu__DOT__data2)
                                                     : 
                                                    (vlSelfRef.tb_top__DOT__DUT__DOT__alu__DOT__data1 
                                                     & vlSelfRef.tb_top__DOT__DUT__DOT__alu__DOT__data2))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tb_top__DOT__DUT__DOT__ALUSel_ex))
                                                     ? vlSelfRef.tb_top__DOT__DUT__DOT__alu__DOT__data2
                                                     : 
                                                    (vlSelfRef.tb_top__DOT__DUT__DOT__alu__DOT__data1 
                                                     + vlSelfRef.tb_top__DOT__DUT__DOT__alu__DOT__data2)))));
        vlSelfRef.tb_top__DOT__DUT__DOT__data1_mem 
            = vlSelfRef.tb_top__DOT__DUT__DOT__data1_ex;
        vlSelfRef.tb_top__DOT__DUT__DOT__data2_mem 
            = vlSelfRef.tb_top__DOT__DUT__DOT__data2_ex;
        vlSelfRef.tb_top__DOT__DUT__DOT__MemRW_mem 
            = vlSelfRef.tb_top__DOT__DUT__DOT__MemRW_ex;
    } else {
        vlSelfRef.tb_top__DOT__DUT__DOT__mem_dat_wb = 0U;
        vlSelfRef.tb_top__DOT__DUT__DOT__dmem_wb = 0U;
        vlSelfRef.tb_top__DOT__DUT__DOT__pc_wb = 0U;
        vlSelfRef.tb_top__DOT__DUT__DOT__alu_wb = 0U;
        vlSelfRef.tb_top__DOT__DUT__DOT__data1_wb = 0U;
        vlSelfRef.tb_top__DOT__DUT__DOT__data2_wb = 0U;
        vlSelfRef.tb_top__DOT__mem_wdata = 0U;
        vlSelfRef.tb_top__DOT__DUT__DOT__pc_mem = 0U;
        vlSelfRef.tb_top__DOT__mem_addr = 0U;
        vlSelfRef.tb_top__DOT__DUT__DOT__data1_mem = 0U;
        vlSelfRef.tb_top__DOT__DUT__DOT__data2_mem = 0U;
        vlSelfRef.tb_top__DOT__DUT__DOT__MemRW_mem = 0U;
    }
    vlSelfRef.tb_top__DOT__DUT__DOT__pc__DOT__inc_value 
        = ((IData)(vlSelfRef.tb_top__DOT__DUT__DOT__pc_sel_mem)
            ? vlSelfRef.tb_top__DOT__mem_addr : ((IData)(4U) 
                                                 + vlSelfRef.tb_top__DOT__imem_addr));
    vlSelfRef.tb_top__DOT__dmem_inst__DOT__local_addr 
        = ((0x80008000U <= vlSelfRef.tb_top__DOT__mem_addr)
            ? (vlSelfRef.tb_top__DOT__mem_addr - (IData)(0x80008000U))
            : 0U);
    vlSelfRef.tb_top__DOT__dmem_inst__DOT__word_index 
        = (vlSelfRef.tb_top__DOT__dmem_inst__DOT__local_addr 
           >> 2U);
}

void Vtb_top___024root___nba_sequent__TOP__6(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_sequent__TOP__6\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__DUT__DOT__tracer_inst__DOT__cycle 
        = vlSelfRef.__Vdly__tb_top__DOT__DUT__DOT__tracer_inst__DOT__cycle;
}

void Vtb_top___024root___nba_sequent__TOP__7(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_sequent__TOP__7\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_top__DOT__DUT__DOT__flush) {
        vlSelfRef.tb_top__DOT__DUT__DOT__MemRW_ex = 
            ((~ (IData)(vlSelfRef.tb_top__DOT__DUT__DOT__mux_en)) 
             & (IData)(vlSelfRef.tb_top__DOT__DUT__DOT__MemRW));
        vlSelfRef.tb_top__DOT__DUT__DOT__pc_ex = vlSelfRef.tb_top__DOT__DUT__DOT__pc_id;
        vlSelfRef.tb_top__DOT__DUT__DOT__ALUSel_ex 
            = ((IData)(vlSelfRef.tb_top__DOT__DUT__DOT__mux_en)
                ? 0x0bU : (IData)(vlSelfRef.tb_top__DOT__DUT__DOT__ALUSel));
        vlSelfRef.tb_top__DOT__DUT__DOT__data1_ex = 
            ((0U == (0x0000001fU & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                    >> 0x0000000fU)))
              ? 0U : (((((0x0000001fU & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                         >> 0x0000000fU)) 
                         == (0x0000001fU & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_wb 
                                            >> 7U))) 
                        & (IData)(vlSelfRef.tb_top__DOT__DUT__DOT__RegWEn_wb)) 
                       & (0U != (0x0000001fU & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_wb 
                                                >> 7U))))
                       ? vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__dataW
                       : vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__x
                      [(0x0000001fU & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                       >> 0x0000000fU))]));
        vlSelfRef.tb_top__DOT__DUT__DOT__data2_ex = 
            ((0U == (0x0000001fU & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                    >> 0x00000014U)))
              ? 0U : (((((0x0000001fU & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                         >> 0x00000014U)) 
                         == (0x0000001fU & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_wb 
                                            >> 7U))) 
                        & (IData)(vlSelfRef.tb_top__DOT__DUT__DOT__RegWEn_wb)) 
                       & (0U != (0x0000001fU & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_wb 
                                                >> 7U))))
                       ? vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__dataW
                       : vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__x
                      [(0x0000001fU & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                       >> 0x00000014U))]));
        vlSelfRef.tb_top__DOT__DUT__DOT__pc_id = vlSelfRef.tb_top__DOT__DUT__DOT__IF_1__DOT__data_in;
    } else {
        vlSelfRef.tb_top__DOT__DUT__DOT__MemRW_ex = 0U;
        vlSelfRef.tb_top__DOT__DUT__DOT__pc_ex = 0U;
        vlSelfRef.tb_top__DOT__DUT__DOT__ALUSel_ex = 0U;
        vlSelfRef.tb_top__DOT__DUT__DOT__data1_ex = 0U;
        vlSelfRef.tb_top__DOT__DUT__DOT__data2_ex = 0U;
        vlSelfRef.tb_top__DOT__DUT__DOT__pc_id = 0x04c4b400U;
    }
}

void Vtb_top___024root___nba_comb__TOP__0(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_comb__TOP__0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__mem_rdata = ((IData)(vlSelfRef.tb_top__DOT__DUT__DOT__MemRW_mem)
                                         ? 0U : vlSelfRef.tb_top__DOT__dmem_inst__DOT__dmem
                                        [(0x00007fffU 
                                          & vlSelfRef.tb_top__DOT__dmem_inst__DOT__word_index)]);
}

void Vtb_top___024root___nba_sequent__TOP__8(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_sequent__TOP__8\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__tb_top__DOT__DUT__DOT__rf__DOT__x__v0) {
        vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__x[vlSelfRef.__VdlyDim0__tb_top__DOT__DUT__DOT__rf__DOT__x__v0] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__DUT__DOT__rf__DOT__x__v0;
    }
}

void Vtb_top___024root___nba_sequent__TOP__9(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_sequent__TOP__9\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__dataW 
        = ((0U == (IData)(vlSelfRef.tb_top__DOT__DUT__DOT__WBSel_wb))
            ? vlSelfRef.tb_top__DOT__DUT__DOT__dmem_wb
            : ((1U == (IData)(vlSelfRef.tb_top__DOT__DUT__DOT__WBSel_wb))
                ? vlSelfRef.tb_top__DOT__DUT__DOT__alu_wb
                : ((2U == (IData)(vlSelfRef.tb_top__DOT__DUT__DOT__WBSel_wb))
                    ? ((IData)(4U) + vlSelfRef.tb_top__DOT__DUT__DOT__pc_wb)
                    : 0U)));
    if (vlSelfRef.tb_top__DOT__reset_n) {
        vlSelfRef.tb_top__DOT__DUT__DOT__RegWEn_wb 
            = vlSelfRef.tb_top__DOT__DUT__DOT__RegWEn_mem;
        vlSelfRef.tb_top__DOT__DUT__DOT__inst_wb = vlSelfRef.tb_top__DOT__DUT__DOT__inst_mem;
        vlSelfRef.tb_top__DOT__DUT__DOT__inst_mem = vlSelfRef.tb_top__DOT__DUT__DOT__inst_ex;
        vlSelfRef.tb_top__DOT__DUT__DOT__RegWEn_mem 
            = vlSelfRef.tb_top__DOT__DUT__DOT__RegWEn_ex;
    } else {
        vlSelfRef.tb_top__DOT__DUT__DOT__RegWEn_wb = 0U;
        vlSelfRef.tb_top__DOT__DUT__DOT__inst_wb = 0U;
        vlSelfRef.tb_top__DOT__DUT__DOT__inst_mem = 0U;
        vlSelfRef.tb_top__DOT__DUT__DOT__RegWEn_mem = 0U;
    }
    vlSelfRef.tb_top__DOT__DUT__DOT__rvfi_valid = (
                                                   (0x33U 
                                                    == 
                                                    (0x0000007fU 
                                                     & vlSelfRef.tb_top__DOT__DUT__DOT__inst_wb)) 
                                                   | ((0x13U 
                                                       == 
                                                       (0x0000007fU 
                                                        & vlSelfRef.tb_top__DOT__DUT__DOT__inst_wb)) 
                                                      | ((3U 
                                                          == 
                                                          (0x0000007fU 
                                                           & vlSelfRef.tb_top__DOT__DUT__DOT__inst_wb)) 
                                                         | ((0x67U 
                                                             == 
                                                             (0x0000007fU 
                                                              & vlSelfRef.tb_top__DOT__DUT__DOT__inst_wb)) 
                                                            | ((0x23U 
                                                                == 
                                                                (0x0000007fU 
                                                                 & vlSelfRef.tb_top__DOT__DUT__DOT__inst_wb)) 
                                                               | ((0x63U 
                                                                   == 
                                                                   (0x0000007fU 
                                                                    & vlSelfRef.tb_top__DOT__DUT__DOT__inst_wb)) 
                                                                  | ((0x37U 
                                                                      == 
                                                                      (0x0000007fU 
                                                                       & vlSelfRef.tb_top__DOT__DUT__DOT__inst_wb)) 
                                                                     | ((0x17U 
                                                                         == 
                                                                         (0x0000007fU 
                                                                          & vlSelfRef.tb_top__DOT__DUT__DOT__inst_wb)) 
                                                                        | (0x6fU 
                                                                           == 
                                                                           (0x0000007fU 
                                                                            & vlSelfRef.tb_top__DOT__DUT__DOT__inst_wb))))))))));
    vlSelfRef.tb_top__DOT__DUT__DOT__wstrb = ((0U == 
                                               (7U 
                                                & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_mem 
                                                   >> 0x0000000cU)))
                                               ? ((2U 
                                                   & vlSelfRef.tb_top__DOT__mem_addr)
                                                   ? 
                                                  ((1U 
                                                    & vlSelfRef.tb_top__DOT__mem_addr)
                                                    ? 8U
                                                    : 4U)
                                                   : 
                                                  ((1U 
                                                    & vlSelfRef.tb_top__DOT__mem_addr)
                                                    ? 2U
                                                    : 1U))
                                               : ((1U 
                                                   == 
                                                   (7U 
                                                    & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_mem 
                                                       >> 0x0000000cU)))
                                                   ? 
                                                  ((2U 
                                                    & vlSelfRef.tb_top__DOT__mem_addr)
                                                    ? 0x0cU
                                                    : 3U)
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_mem 
                                                        >> 0x0000000cU)))
                                                    ? 0x0fU
                                                    : 0U)));
}

void Vtb_top___024root___nba_sequent__TOP__10(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_sequent__TOP__10\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_top__DOT__DUT__DOT__flush) {
        vlSelfRef.tb_top__DOT__DUT__DOT__RegWEn_ex 
            = ((~ (IData)(vlSelfRef.tb_top__DOT__DUT__DOT__mux_en)) 
               & (IData)(vlSelfRef.tb_top__DOT__DUT__DOT__RegWEn));
        vlSelfRef.tb_top__DOT__DUT__DOT__inst_ex = vlSelfRef.tb_top__DOT__DUT__DOT__inst_id;
        vlSelfRef.tb_top__DOT__DUT__DOT__inst_id = vlSelfRef.tb_top__DOT__DUT__DOT__IF_2__DOT__data_in;
    } else {
        vlSelfRef.tb_top__DOT__DUT__DOT__RegWEn_ex = 0U;
        vlSelfRef.tb_top__DOT__DUT__DOT__inst_ex = 0U;
        vlSelfRef.tb_top__DOT__DUT__DOT__inst_id = 0U;
    }
    if ((0x00000040U & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id)) {
        if ((0x00000020U & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id)) {
            if ((0x00000010U & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id)) {
                if ((8U & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id)) {
                    vlSelfRef.tb_top__DOT__DUT__DOT__WBSel = 1U;
                    vlSelfRef.tb_top__DOT__DUT__DOT__JSel = 0U;
                    vlSelfRef.tb_top__DOT__DUT__DOT__BSel = 0U;
                    vlSelfRef.tb_top__DOT__DUT__DOT__inst_type = 0U;
                    vlSelfRef.tb_top__DOT__DUT__DOT__RegWEn = 0U;
                    vlSelfRef.tb_top__DOT__DUT__DOT__MemRW = 0U;
                    vlSelfRef.tb_top__DOT__DUT__DOT__ALUSel = 0U;
                    vlSelfRef.tb_top__DOT__DUT__DOT__BrUn = 0U;
                } else if ((4U & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id)) {
                    vlSelfRef.tb_top__DOT__DUT__DOT__WBSel = 1U;
                    vlSelfRef.tb_top__DOT__DUT__DOT__JSel = 0U;
                    vlSelfRef.tb_top__DOT__DUT__DOT__BSel = 0U;
                    vlSelfRef.tb_top__DOT__DUT__DOT__inst_type = 0U;
                    vlSelfRef.tb_top__DOT__DUT__DOT__RegWEn = 0U;
                    vlSelfRef.tb_top__DOT__DUT__DOT__MemRW = 0U;
                    vlSelfRef.tb_top__DOT__DUT__DOT__ALUSel = 0U;
                    vlSelfRef.tb_top__DOT__DUT__DOT__BrUn = 0U;
                } else if ((2U & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id)) {
                    if ((1U & (~ vlSelfRef.tb_top__DOT__DUT__DOT__inst_id))) {
                        vlSelfRef.tb_top__DOT__DUT__DOT__WBSel = 1U;
                        vlSelfRef.tb_top__DOT__DUT__DOT__JSel = 0U;
                        vlSelfRef.tb_top__DOT__DUT__DOT__BSel = 0U;
                        vlSelfRef.tb_top__DOT__DUT__DOT__inst_type = 0U;
                        vlSelfRef.tb_top__DOT__DUT__DOT__RegWEn = 0U;
                        vlSelfRef.tb_top__DOT__DUT__DOT__MemRW = 0U;
                        vlSelfRef.tb_top__DOT__DUT__DOT__ALUSel = 0U;
                        vlSelfRef.tb_top__DOT__DUT__DOT__BrUn = 0U;
                    }
                } else {
                    vlSelfRef.tb_top__DOT__DUT__DOT__WBSel = 1U;
                    vlSelfRef.tb_top__DOT__DUT__DOT__JSel = 0U;
                    vlSelfRef.tb_top__DOT__DUT__DOT__BSel = 0U;
                    vlSelfRef.tb_top__DOT__DUT__DOT__inst_type = 0U;
                    vlSelfRef.tb_top__DOT__DUT__DOT__RegWEn = 0U;
                    vlSelfRef.tb_top__DOT__DUT__DOT__MemRW = 0U;
                    vlSelfRef.tb_top__DOT__DUT__DOT__ALUSel = 0U;
                    vlSelfRef.tb_top__DOT__DUT__DOT__BrUn = 0U;
                }
            } else {
                if ((8U & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id)) {
                    if ((4U & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id)) {
                        if ((2U & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id)) {
                            if ((1U & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id)) {
                                vlSelfRef.tb_top__DOT__DUT__DOT__WBSel = 2U;
                                vlSelfRef.tb_top__DOT__DUT__DOT__inst_type = 2U;
                            } else {
                                vlSelfRef.tb_top__DOT__DUT__DOT__WBSel = 1U;
                                vlSelfRef.tb_top__DOT__DUT__DOT__inst_type = 0U;
                            }
                            if ((1U & (~ vlSelfRef.tb_top__DOT__DUT__DOT__inst_id))) {
                                vlSelfRef.tb_top__DOT__DUT__DOT__BrUn = 0U;
                            }
                        } else {
                            vlSelfRef.tb_top__DOT__DUT__DOT__WBSel = 1U;
                            vlSelfRef.tb_top__DOT__DUT__DOT__inst_type = 0U;
                            vlSelfRef.tb_top__DOT__DUT__DOT__BrUn = 0U;
                        }
                    } else {
                        vlSelfRef.tb_top__DOT__DUT__DOT__WBSel = 1U;
                        vlSelfRef.tb_top__DOT__DUT__DOT__inst_type = 0U;
                        vlSelfRef.tb_top__DOT__DUT__DOT__BrUn = 0U;
                    }
                    vlSelfRef.tb_top__DOT__DUT__DOT__JSel 
                        = ((1U & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                  >> 2U)) && ((1U & 
                                               (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id)));
                    vlSelfRef.tb_top__DOT__DUT__DOT__BSel 
                        = ((1U & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                  >> 2U)) && ((1U & 
                                               (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id)));
                    vlSelfRef.tb_top__DOT__DUT__DOT__RegWEn 
                        = ((1U & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                  >> 2U)) && ((1U & 
                                               (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id)));
                } else {
                    if ((4U & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id)) {
                        vlSelfRef.tb_top__DOT__DUT__DOT__WBSel 
                            = ((2U & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id)
                                ? ((1U & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id)
                                    ? 2U : 1U) : 1U);
                        vlSelfRef.tb_top__DOT__DUT__DOT__JSel 
                            = ((1U & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                      >> 1U)) && (1U 
                                                  & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id));
                        vlSelfRef.tb_top__DOT__DUT__DOT__BSel 
                            = ((1U & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                      >> 1U)) && (1U 
                                                  & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id));
                        vlSelfRef.tb_top__DOT__DUT__DOT__inst_type = 0U;
                        vlSelfRef.tb_top__DOT__DUT__DOT__BrUn = 0U;
                    } else {
                        vlSelfRef.tb_top__DOT__DUT__DOT__WBSel = 1U;
                        vlSelfRef.tb_top__DOT__DUT__DOT__JSel 
                            = ((1U & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                      >> 1U)) && (1U 
                                                  & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id));
                        vlSelfRef.tb_top__DOT__DUT__DOT__BSel 
                            = ((1U & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                      >> 1U)) && (1U 
                                                  & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id));
                        if ((2U & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id)) {
                            if ((1U & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id)) {
                                vlSelfRef.tb_top__DOT__DUT__DOT__inst_type = 3U;
                                if (((((0U == (7U & 
                                               (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                                >> 0x0000000cU))) 
                                       || (1U == (7U 
                                                  & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                                     >> 0x0000000cU)))) 
                                      || (4U == (7U 
                                                 & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                                    >> 0x0000000cU)))) 
                                     || (5U == (7U 
                                                & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                                   >> 0x0000000cU))))) {
                                    vlSelfRef.tb_top__DOT__DUT__DOT__BrUn = 0U;
                                } else if (((6U == 
                                             (7U & 
                                              (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                               >> 0x0000000cU))) 
                                            || (7U 
                                                == 
                                                (7U 
                                                 & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                                    >> 0x0000000cU))))) {
                                    vlSelfRef.tb_top__DOT__DUT__DOT__BrUn = 1U;
                                }
                            } else {
                                vlSelfRef.tb_top__DOT__DUT__DOT__inst_type = 0U;
                                vlSelfRef.tb_top__DOT__DUT__DOT__BrUn = 0U;
                            }
                        } else {
                            vlSelfRef.tb_top__DOT__DUT__DOT__inst_type = 0U;
                            vlSelfRef.tb_top__DOT__DUT__DOT__BrUn = 0U;
                        }
                    }
                    vlSelfRef.tb_top__DOT__DUT__DOT__RegWEn 
                        = ((1U & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                  >> 2U)) && ((1U & 
                                               (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id)));
                }
                vlSelfRef.tb_top__DOT__DUT__DOT__MemRW = 0U;
                vlSelfRef.tb_top__DOT__DUT__DOT__ALUSel = 0U;
            }
        } else {
            vlSelfRef.tb_top__DOT__DUT__DOT__WBSel = 1U;
            vlSelfRef.tb_top__DOT__DUT__DOT__JSel = 0U;
            vlSelfRef.tb_top__DOT__DUT__DOT__BSel = 0U;
            vlSelfRef.tb_top__DOT__DUT__DOT__inst_type = 0U;
            vlSelfRef.tb_top__DOT__DUT__DOT__RegWEn = 0U;
            vlSelfRef.tb_top__DOT__DUT__DOT__MemRW = 0U;
            vlSelfRef.tb_top__DOT__DUT__DOT__ALUSel = 0U;
            vlSelfRef.tb_top__DOT__DUT__DOT__BrUn = 0U;
        }
    } else {
        if ((0x00000020U & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id)) {
            vlSelfRef.tb_top__DOT__DUT__DOT__WBSel = 1U;
            if ((0x00000010U & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id)) {
                vlSelfRef.tb_top__DOT__DUT__DOT__BSel 
                    = ((1U & (~ (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                 >> 3U))) && ((1U & 
                                               (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                                >> 2U)) 
                                              && ((1U 
                                                   & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id))));
                if ((8U & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id)) {
                    vlSelfRef.tb_top__DOT__DUT__DOT__inst_type = 0U;
                    vlSelfRef.tb_top__DOT__DUT__DOT__ALUSel = 0U;
                    vlSelfRef.tb_top__DOT__DUT__DOT__BrUn = 0U;
                } else if ((4U & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id)) {
                    if ((2U & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id)) {
                        if ((1U & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id)) {
                            vlSelfRef.tb_top__DOT__DUT__DOT__inst_type = 4U;
                            vlSelfRef.tb_top__DOT__DUT__DOT__ALUSel = 1U;
                        } else {
                            vlSelfRef.tb_top__DOT__DUT__DOT__inst_type = 0U;
                            vlSelfRef.tb_top__DOT__DUT__DOT__ALUSel = 0U;
                        }
                        if ((1U & (~ vlSelfRef.tb_top__DOT__DUT__DOT__inst_id))) {
                            vlSelfRef.tb_top__DOT__DUT__DOT__BrUn = 0U;
                        }
                    } else {
                        vlSelfRef.tb_top__DOT__DUT__DOT__inst_type = 0U;
                        vlSelfRef.tb_top__DOT__DUT__DOT__ALUSel = 0U;
                        vlSelfRef.tb_top__DOT__DUT__DOT__BrUn = 0U;
                    }
                } else {
                    if ((2U & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id)) {
                        if ((1U & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id)) {
                            vlSelfRef.tb_top__DOT__DUT__DOT__inst_type = 5U;
                            if ((0x00004000U & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id)) {
                                if ((0x00002000U & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id)) {
                                    vlSelfRef.tb_top__DOT__DUT__DOT__ALUSel 
                                        = ((0x00001000U 
                                            & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id)
                                            ? 2U : 3U);
                                } else if ((0x00001000U 
                                            & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id)) {
                                    if ((0U == (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                                >> 0x00000019U))) {
                                        vlSelfRef.tb_top__DOT__DUT__DOT__ALUSel = 5U;
                                    } else if ((0x20U 
                                                == 
                                                (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                                 >> 0x00000019U))) {
                                        vlSelfRef.tb_top__DOT__DUT__DOT__ALUSel = 6U;
                                    }
                                } else {
                                    vlSelfRef.tb_top__DOT__DUT__DOT__ALUSel = 4U;
                                }
                            } else if ((0x00002000U 
                                        & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id)) {
                                vlSelfRef.tb_top__DOT__DUT__DOT__ALUSel 
                                    = ((0x00001000U 
                                        & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id)
                                        ? 9U : 0x0aU);
                            } else if ((0x00001000U 
                                        & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id)) {
                                vlSelfRef.tb_top__DOT__DUT__DOT__ALUSel = 8U;
                            } else if ((0U == (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                               >> 0x00000019U))) {
                                vlSelfRef.tb_top__DOT__DUT__DOT__ALUSel = 0U;
                            } else if ((0x20U == (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                                  >> 0x00000019U))) {
                                vlSelfRef.tb_top__DOT__DUT__DOT__ALUSel = 7U;
                            }
                        } else {
                            vlSelfRef.tb_top__DOT__DUT__DOT__inst_type = 0U;
                            vlSelfRef.tb_top__DOT__DUT__DOT__ALUSel = 0U;
                        }
                    } else {
                        vlSelfRef.tb_top__DOT__DUT__DOT__inst_type = 0U;
                        vlSelfRef.tb_top__DOT__DUT__DOT__ALUSel = 0U;
                    }
                    vlSelfRef.tb_top__DOT__DUT__DOT__BrUn = 0U;
                }
            } else {
                vlSelfRef.tb_top__DOT__DUT__DOT__BSel 
                    = ((1U & (~ (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                 >> 3U))) && ((1U & 
                                               (~ (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                                   >> 2U))) 
                                              && ((1U 
                                                   & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id))));
                vlSelfRef.tb_top__DOT__DUT__DOT__inst_type 
                    = ((8U & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id)
                        ? 0U : ((4U & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id)
                                 ? 0U : ((2U & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id)
                                          ? ((1U & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id)
                                              ? 1U : 0U)
                                          : 0U)));
                vlSelfRef.tb_top__DOT__DUT__DOT__ALUSel = 0U;
                vlSelfRef.tb_top__DOT__DUT__DOT__BrUn = 0U;
            }
            vlSelfRef.tb_top__DOT__DUT__DOT__RegWEn 
                = ((1U & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                          >> 4U)) && ((1U & (~ (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                                >> 3U))) 
                                      && ((4U & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id)
                                           ? ((1U & 
                                               (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id))
                                           : ((1U & 
                                               (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id)))));
        } else if ((0x00000010U & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id)) {
            vlSelfRef.tb_top__DOT__DUT__DOT__WBSel = 1U;
            vlSelfRef.tb_top__DOT__DUT__DOT__BSel = 
                ((1U & (~ (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                           >> 3U))) && ((4U & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id)
                                         ? ((1U & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                                   >> 1U)) 
                                            && (1U 
                                                & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id))
                                         : ((1U & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                                   >> 1U)) 
                                            && (1U 
                                                & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id))));
            if ((8U & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id)) {
                vlSelfRef.tb_top__DOT__DUT__DOT__inst_type = 0U;
                vlSelfRef.tb_top__DOT__DUT__DOT__ALUSel = 0U;
                vlSelfRef.tb_top__DOT__DUT__DOT__BrUn = 0U;
            } else if ((4U & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id)) {
                if ((2U & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id)) {
                    vlSelfRef.tb_top__DOT__DUT__DOT__inst_type 
                        = ((1U & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id)
                            ? 4U : 0U);
                    if ((1U & (~ vlSelfRef.tb_top__DOT__DUT__DOT__inst_id))) {
                        vlSelfRef.tb_top__DOT__DUT__DOT__BrUn = 0U;
                    }
                } else {
                    vlSelfRef.tb_top__DOT__DUT__DOT__inst_type = 0U;
                    vlSelfRef.tb_top__DOT__DUT__DOT__BrUn = 0U;
                }
                vlSelfRef.tb_top__DOT__DUT__DOT__ALUSel = 0U;
            } else {
                vlSelfRef.tb_top__DOT__DUT__DOT__inst_type = 0U;
                if ((2U & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id)) {
                    if ((1U & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id)) {
                        if ((0x00004000U & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id)) {
                            if ((0x00002000U & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id)) {
                                vlSelfRef.tb_top__DOT__DUT__DOT__ALUSel 
                                    = ((0x00001000U 
                                        & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id)
                                        ? 2U : 3U);
                            } else if ((0x00001000U 
                                        & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id)) {
                                if ((0U == (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                            >> 0x00000019U))) {
                                    vlSelfRef.tb_top__DOT__DUT__DOT__ALUSel = 5U;
                                } else if ((0x20U == 
                                            (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                             >> 0x00000019U))) {
                                    vlSelfRef.tb_top__DOT__DUT__DOT__ALUSel = 6U;
                                }
                            } else {
                                vlSelfRef.tb_top__DOT__DUT__DOT__ALUSel = 4U;
                            }
                        } else {
                            vlSelfRef.tb_top__DOT__DUT__DOT__ALUSel 
                                = ((0x00002000U & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id)
                                    ? ((0x00001000U 
                                        & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id)
                                        ? 9U : 0x0aU)
                                    : ((0x00001000U 
                                        & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id)
                                        ? 8U : 0U));
                        }
                    } else {
                        vlSelfRef.tb_top__DOT__DUT__DOT__ALUSel = 0U;
                    }
                } else {
                    vlSelfRef.tb_top__DOT__DUT__DOT__ALUSel = 0U;
                }
                vlSelfRef.tb_top__DOT__DUT__DOT__BrUn = 0U;
            }
            vlSelfRef.tb_top__DOT__DUT__DOT__RegWEn 
                = ((1U & (~ (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                             >> 3U))) && ((4U & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id)
                                           ? ((1U & 
                                               (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id))
                                           : ((1U & 
                                               (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id))));
        } else {
            vlSelfRef.tb_top__DOT__DUT__DOT__WBSel 
                = ((8U & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id)
                    ? 1U : ((4U & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id)
                             ? 1U : ((2U & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id)
                                      ? ((1U & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id)
                                          ? 0U : 1U)
                                      : 1U)));
            vlSelfRef.tb_top__DOT__DUT__DOT__BSel = 
                ((1U & (~ (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                           >> 3U))) && ((1U & (~ (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                                  >> 2U))) 
                                        && ((1U & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                                   >> 1U)) 
                                            && (1U 
                                                & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id))));
            vlSelfRef.tb_top__DOT__DUT__DOT__inst_type = 0U;
            vlSelfRef.tb_top__DOT__DUT__DOT__RegWEn 
                = ((1U & (~ (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                             >> 3U))) && ((1U & (~ 
                                                 (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                                  >> 2U))) 
                                          && ((1U & 
                                               (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id))));
            vlSelfRef.tb_top__DOT__DUT__DOT__ALUSel = 0U;
            vlSelfRef.tb_top__DOT__DUT__DOT__BrUn = 0U;
        }
        vlSelfRef.tb_top__DOT__DUT__DOT__JSel = ((1U 
                                                  & (~ 
                                                     (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                                      >> 5U))) 
                                                 && ((1U 
                                                      & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                                         >> 4U)) 
                                                     && ((1U 
                                                          & (~ 
                                                             (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                                              >> 3U))) 
                                                         && ((1U 
                                                              & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                                                 >> 2U)) 
                                                             && ((1U 
                                                                  & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                                                     >> 1U)) 
                                                                 && (1U 
                                                                     & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id))))));
        vlSelfRef.tb_top__DOT__DUT__DOT__MemRW = ((1U 
                                                   & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                                      >> 5U)) 
                                                  && ((1U 
                                                       & (~ 
                                                          (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                                           >> 4U))) 
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
                                                                      & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id))))));
    }
    vlSelfRef.tb_top__DOT__DUT__DOT__PCWrite = 1U;
    vlSelfRef.tb_top__DOT__DUT__DOT__mux_en = 0U;
    vlSelfRef.tb_top__DOT__DUT__DOT__IFWrite = 1U;
    if ((3U == (0x0000007fU & vlSelfRef.tb_top__DOT__DUT__DOT__inst_ex))) {
        if (((IData)(vlSelfRef.tb_top__DOT__DUT__DOT__RegWEn_ex) 
             & (0U != (0x0000001fU & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_ex 
                                      >> 7U))))) {
            if ((((0x0000001fU & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_ex 
                                  >> 7U)) == (0x0000001fU 
                                              & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                                 >> 0x0000000fU))) 
                 | ((0x0000001fU & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_ex 
                                    >> 7U)) == (0x0000001fU 
                                                & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                                   >> 0x00000014U))))) {
                vlSelfRef.tb_top__DOT__DUT__DOT__PCWrite = 0U;
                vlSelfRef.tb_top__DOT__DUT__DOT__mux_en = 1U;
                vlSelfRef.tb_top__DOT__DUT__DOT__IFWrite = 0U;
            }
        }
    }
}

void Vtb_top___024root___nba_comb__TOP__1(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_comb__TOP__1\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__DUT__DOT__WB_3__DOT__data_in 
        = ((0x00004000U & vlSelfRef.tb_top__DOT__DUT__DOT__inst_mem)
            ? ((0x00002000U & vlSelfRef.tb_top__DOT__DUT__DOT__inst_mem)
                ? 0U : ((0x00001000U & vlSelfRef.tb_top__DOT__DUT__DOT__inst_mem)
                         ? ((2U & vlSelfRef.tb_top__DOT__mem_addr)
                             ? VL_SHIFTR_III(32,32,32, vlSelfRef.tb_top__DOT__mem_rdata, 0x00000010U)
                             : (0x0000ffffU & vlSelfRef.tb_top__DOT__mem_rdata))
                         : ((2U & vlSelfRef.tb_top__DOT__mem_addr)
                             ? ((1U & vlSelfRef.tb_top__DOT__mem_addr)
                                 ? VL_SHIFTR_III(32,32,32, vlSelfRef.tb_top__DOT__mem_rdata, 0x00000018U)
                                 : (0x000000ffU & (vlSelfRef.tb_top__DOT__mem_rdata 
                                                   >> 0x00000010U)))
                             : ((1U & vlSelfRef.tb_top__DOT__mem_addr)
                                 ? (0x000000ffU & (vlSelfRef.tb_top__DOT__mem_rdata 
                                                   >> 8U))
                                 : (0x000000ffU & vlSelfRef.tb_top__DOT__mem_rdata)))))
            : ((0x00002000U & vlSelfRef.tb_top__DOT__DUT__DOT__inst_mem)
                ? ((0x00001000U & vlSelfRef.tb_top__DOT__DUT__DOT__inst_mem)
                    ? 0U : vlSelfRef.tb_top__DOT__mem_rdata)
                : ((0x00001000U & vlSelfRef.tb_top__DOT__DUT__DOT__inst_mem)
                    ? ((2U & vlSelfRef.tb_top__DOT__mem_addr)
                        ? (((- (IData)((vlSelfRef.tb_top__DOT__mem_rdata 
                                        >> 0x0000001fU))) 
                            << 0x00000010U) | (vlSelfRef.tb_top__DOT__mem_rdata 
                                               >> 0x00000010U))
                        : (((- (IData)((1U & (vlSelfRef.tb_top__DOT__mem_rdata 
                                              >> 0x0000000fU)))) 
                            << 0x00000010U) | (0x0000ffffU 
                                               & vlSelfRef.tb_top__DOT__mem_rdata)))
                    : ((2U & vlSelfRef.tb_top__DOT__mem_addr)
                        ? ((1U & vlSelfRef.tb_top__DOT__mem_addr)
                            ? (((- (IData)((vlSelfRef.tb_top__DOT__mem_rdata 
                                            >> 0x0000001fU))) 
                                << 8U) | (vlSelfRef.tb_top__DOT__mem_rdata 
                                          >> 0x00000018U))
                            : (((- (IData)((1U & (vlSelfRef.tb_top__DOT__mem_rdata 
                                                  >> 0x00000017U)))) 
                                << 8U) | (0x000000ffU 
                                          & (vlSelfRef.tb_top__DOT__mem_rdata 
                                             >> 0x00000010U))))
                        : ((1U & vlSelfRef.tb_top__DOT__mem_addr)
                            ? (((- (IData)((1U & (vlSelfRef.tb_top__DOT__mem_rdata 
                                                  >> 0x0000000fU)))) 
                                << 8U) | (0x000000ffU 
                                          & (vlSelfRef.tb_top__DOT__mem_rdata 
                                             >> 8U)))
                            : (((- (IData)((1U & (vlSelfRef.tb_top__DOT__mem_rdata 
                                                  >> 7U)))) 
                                << 8U) | (0x000000ffU 
                                          & vlSelfRef.tb_top__DOT__mem_rdata)))))));
}

void Vtb_top___024root___nba_comb__TOP__2(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_comb__TOP__2\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__DUT__DOT__fwd_a = 0U;
    if ((((IData)(vlSelfRef.tb_top__DOT__DUT__DOT__RegWEn_mem) 
          & (0U != (0x0000001fU & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_mem 
                                   >> 7U)))) & ((0x0000001fU 
                                                 & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_mem 
                                                    >> 7U)) 
                                                == 
                                                (0x0000001fU 
                                                 & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_ex 
                                                    >> 0x0000000fU))))) {
        vlSelfRef.tb_top__DOT__DUT__DOT__fwd_a = 1U;
    } else if ((((IData)(vlSelfRef.tb_top__DOT__DUT__DOT__RegWEn_wb) 
                 & (0U != (0x0000001fU & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_wb 
                                          >> 7U)))) 
                & ((0x0000001fU & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_wb 
                                   >> 7U)) == (0x0000001fU 
                                               & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_ex 
                                                  >> 0x0000000fU))))) {
        vlSelfRef.tb_top__DOT__DUT__DOT__fwd_a = 2U;
    }
    vlSelfRef.tb_top__DOT__DUT__DOT__fwd_b = 0U;
    if ((((IData)(vlSelfRef.tb_top__DOT__DUT__DOT__RegWEn_mem) 
          & (0U != (0x0000001fU & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_mem 
                                   >> 7U)))) & ((0x0000001fU 
                                                 & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_mem 
                                                    >> 7U)) 
                                                == 
                                                (0x0000001fU 
                                                 & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_ex 
                                                    >> 0x00000014U))))) {
        vlSelfRef.tb_top__DOT__DUT__DOT__fwd_b = 1U;
    } else if ((((IData)(vlSelfRef.tb_top__DOT__DUT__DOT__RegWEn_wb) 
                 & (0U != (0x0000001fU & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_wb 
                                          >> 7U)))) 
                & ((0x0000001fU & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_wb 
                                   >> 7U)) == (0x0000001fU 
                                               & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_ex 
                                                  >> 0x00000014U))))) {
        vlSelfRef.tb_top__DOT__DUT__DOT__fwd_b = 2U;
    }
    if (vlSelfRef.tb_top__DOT__DUT__DOT__IFWrite) {
        vlSelfRef.tb_top__DOT__DUT__DOT__IF_1__DOT__data_in 
            = vlSelfRef.tb_top__DOT__imem_addr;
        vlSelfRef.tb_top__DOT__DUT__DOT__IF_2__DOT__data_in 
            = vlSelfRef.tb_top__DOT__imem_inst;
    } else {
        vlSelfRef.tb_top__DOT__DUT__DOT__IF_1__DOT__data_in 
            = vlSelfRef.tb_top__DOT__DUT__DOT__pc_id;
        vlSelfRef.tb_top__DOT__DUT__DOT__IF_2__DOT__data_in 
            = vlSelfRef.tb_top__DOT__DUT__DOT__inst_id;
    }
    vlSelfRef.tb_top__DOT__DUT__DOT__branch__DOT__op1 
        = ((0U == (IData)(vlSelfRef.tb_top__DOT__DUT__DOT__fwd_a))
            ? vlSelfRef.tb_top__DOT__DUT__DOT__data1_ex
            : ((1U == (IData)(vlSelfRef.tb_top__DOT__DUT__DOT__fwd_a))
                ? vlSelfRef.tb_top__DOT__mem_addr : 
               ((2U == (IData)(vlSelfRef.tb_top__DOT__DUT__DOT__fwd_a))
                 ? vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__dataW
                 : vlSelfRef.tb_top__DOT__DUT__DOT__data1_ex)));
    vlSelfRef.tb_top__DOT__DUT__DOT__branch__DOT__op2 
        = ((0U == (IData)(vlSelfRef.tb_top__DOT__DUT__DOT__fwd_b))
            ? vlSelfRef.tb_top__DOT__DUT__DOT__data2_ex
            : ((1U == (IData)(vlSelfRef.tb_top__DOT__DUT__DOT__fwd_b))
                ? vlSelfRef.tb_top__DOT__mem_addr : 
               ((2U == (IData)(vlSelfRef.tb_top__DOT__DUT__DOT__fwd_b))
                 ? vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__dataW
                 : vlSelfRef.tb_top__DOT__DUT__DOT__data2_ex)));
    vlSelfRef.tb_top__DOT__DUT__DOT__alu__DOT__data1 
        = ((IData)(vlSelfRef.tb_top__DOT__DUT__DOT__JSel_ex)
            ? vlSelfRef.tb_top__DOT__DUT__DOT__pc_ex
            : vlSelfRef.tb_top__DOT__DUT__DOT__branch__DOT__op1);
    vlSelfRef.tb_top__DOT__DUT__DOT__alu__DOT__data2 
        = ((IData)(vlSelfRef.tb_top__DOT__DUT__DOT__BSel_ex)
            ? vlSelfRef.tb_top__DOT__DUT__DOT__immediate_ex
            : vlSelfRef.tb_top__DOT__DUT__DOT__branch__DOT__op2);
    vlSelfRef.tb_top__DOT__DUT__DOT__branch__DOT__Eq 
        = ((0x63U == (0x0000007fU & vlSelfRef.tb_top__DOT__DUT__DOT__inst_ex)) 
           & (vlSelfRef.tb_top__DOT__DUT__DOT__branch__DOT__op1 
              == vlSelfRef.tb_top__DOT__DUT__DOT__branch__DOT__op2));
    vlSelfRef.tb_top__DOT__DUT__DOT__branch__DOT__Lt 
        = ((0x63U == (0x0000007fU & vlSelfRef.tb_top__DOT__DUT__DOT__inst_ex)) 
           & ((IData)(vlSelfRef.tb_top__DOT__DUT__DOT__BrUn)
               ? (vlSelfRef.tb_top__DOT__DUT__DOT__branch__DOT__op1 
                  < vlSelfRef.tb_top__DOT__DUT__DOT__branch__DOT__op2)
               : VL_LTS_III(32, vlSelfRef.tb_top__DOT__DUT__DOT__branch__DOT__op1, vlSelfRef.tb_top__DOT__DUT__DOT__branch__DOT__op2)));
}

void Vtb_top___024root___nba_sequent__TOP__11(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_sequent__TOP__11\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__DUT__DOT__flush = (1U & 
                                              ((~ (IData)(vlSelfRef.tb_top__DOT__reset_n)) 
                                               | (~ (IData)(vlSelfRef.tb_top__DOT__DUT__DOT__pc_sel))));
}

extern const VlUnpacked<CData/*0:0*/, 512> Vtb_top__ConstPool__TABLE_hc9331fcf_0;

void Vtb_top___024root___nba_comb__TOP__3(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_comb__TOP__3\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = ((((IData)(vlSelfRef.tb_top__DOT__DUT__DOT__branch__DOT__Eq) 
                      << 8U) | (((IData)(vlSelfRef.tb_top__DOT__DUT__DOT__branch__DOT__Lt) 
                                 << 7U) | (0x00000070U 
                                           & (vlSelfRef.tb_top__DOT__DUT__DOT__inst_ex 
                                              >> 8U)))) 
                    | ((((0x63U == (0x0000007fU & vlSelfRef.tb_top__DOT__DUT__DOT__inst_ex)) 
                         << 3U) | ((0x6fU == (0x0000007fU 
                                              & vlSelfRef.tb_top__DOT__DUT__DOT__inst_ex)) 
                                   << 2U)) | (((0x67U 
                                                == 
                                                (0x0000007fU 
                                                 & vlSelfRef.tb_top__DOT__DUT__DOT__inst_ex)) 
                                               << 1U) 
                                              | (0x37U 
                                                 == 
                                                 (0x0000007fU 
                                                  & vlSelfRef.tb_top__DOT__DUT__DOT__inst_ex)))));
    vlSelfRef.tb_top__DOT__DUT__DOT__pc_sel = Vtb_top__ConstPool__TABLE_hc9331fcf_0
        [__Vtableidx1];
}

void Vtb_top___024root___nba_sequent__TOP__0(Vtb_top___024root* vlSelf);
void Vtb_top___024root___nba_sequent__TOP__1(Vtb_top___024root* vlSelf);
void Vtb_top___024root___nba_sequent__TOP__2(Vtb_top___024root* vlSelf);

void Vtb_top___024root___eval_nba(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_nba\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x000000000000000aULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtb_top___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_top___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_top___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_top___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_top___024root___nba_sequent__TOP__4(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_top___024root___nba_sequent__TOP__5(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
    if ((0x000000000000000aULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtb_top___024root___nba_sequent__TOP__6(vlSelf);
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_top___024root___nba_sequent__TOP__7(vlSelf);
        vlSelfRef.__Vm_traceActivity[6U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_top___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_top___024root___nba_sequent__TOP__8(vlSelf);
        vlSelfRef.__Vm_traceActivity[7U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_top___024root___nba_sequent__TOP__9(vlSelf);
        vlSelfRef.__Vm_traceActivity[8U] = 1U;
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_top___024root___nba_sequent__TOP__10(vlSelf);
        vlSelfRef.__Vm_traceActivity[9U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_top___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_top___024root___nba_comb__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x0000000aU] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_top___024root___nba_sequent__TOP__11(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_top___024root___nba_comb__TOP__3(vlSelf);
    }
}

void Vtb_top___024root___timing_commit(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___timing_commit\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (8ULL & vlSelfRef.__VactTriggered[0U]))) {
        vlSelfRef.__VtrigSched_hf6097d86__0.commit(
                                                   "@(negedge tb_top.clk)");
    }
    if ((! (0x0000000000000010ULL & vlSelfRef.__VactTriggered
            [0U]))) {
        vlSelfRef.__VtrigSched_hf0f872d7__0.commit(
                                                   "@( (tb_top.DUT.inst_id[6] && (tb_top.DUT.inst_id[5] && (tb_top.DUT.inst_id[4] && ((~ tb_top.DUT.inst_id[3]) && ((~ tb_top.DUT.inst_id[2]) && (tb_top.DUT.inst_id[1] && tb_top.DUT.inst_id[0])))))))");
    }
    if ((! (1ULL & vlSelfRef.__VactTriggered[0U]))) {
        vlSelfRef.__VtrigSched_hf6097ec5__0.commit(
                                                   "@(posedge tb_top.clk)");
    }
}

void Vtb_top___024root___timing_resume(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___timing_resume\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hf6097d86__0.resume(
                                                   "@(negedge tb_top.clk)");
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VactTriggered
         [0U])) {
        vlSelfRef.__VtrigSched_hf0f872d7__0.resume(
                                                   "@( (tb_top.DUT.inst_id[6] && (tb_top.DUT.inst_id[5] && (tb_top.DUT.inst_id[4] && ((~ tb_top.DUT.inst_id[3]) && ((~ tb_top.DUT.inst_id[2]) && (tb_top.DUT.inst_id[1] && tb_top.DUT.inst_id[0])))))))");
    }
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hf6097ec5__0.resume(
                                                   "@(posedge tb_top.clk)");
    }
    if ((0x0000000000000020ULL & vlSelfRef.__VactTriggered
         [0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_top___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vtb_top___024root___eval_triggers__act(Vtb_top___024root* vlSelf);
bool Vtb_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

bool Vtb_top___024root___eval_phase__act(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_phase__act\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_top___024root___eval_triggers__act(vlSelf);
    Vtb_top___024root___timing_commit(vlSelf);
    Vtb_top___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_top___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Vtb_top___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

void Vtb_top___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_top___024root___eval_phase__nba(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_phase__nba\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_top___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_top___024root___eval_nba(vlSelf);
        Vtb_top___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vtb_top___024root___eval(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_top___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/mnt/c/CAO/lab8/tb/tb_top.sv", 19, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/mnt/c/CAO/lab8/tb/tb_top.sv", 19, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vtb_top___024root___eval_phase__act(vlSelf));
    } while (Vtb_top___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vtb_top___024root___eval_debug_assertions(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_debug_assertions\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
