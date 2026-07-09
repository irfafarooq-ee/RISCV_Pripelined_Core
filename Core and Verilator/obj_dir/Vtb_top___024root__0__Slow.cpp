// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

VL_ATTR_COLD void Vtb_top___024root___eval_static__TOP(Vtb_top___024root* vlSelf);
VL_ATTR_COLD void Vtb_top___024root____Vm_traceActivitySetAll(Vtb_top___024root* vlSelf);

VL_ATTR_COLD void Vtb_top___024root___eval_static(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_static\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_top___024root___eval_static__TOP(vlSelf);
    Vtb_top___024root____Vm_traceActivitySetAll(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__clk__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__reset_n__0 
        = vlSelfRef.tb_top__DOT__reset_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__DUT__DOT__flush__0 
        = vlSelfRef.tb_top__DOT__DUT__DOT__flush;
    vlSelfRef.__Vtrigprevexpr_h754fbaed__1 = ((1U & 
                                               (vlSelfRef.tb_top__DOT__DUT__DOT__inst_id 
                                                >> 6U)) 
                                              && ((1U 
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
                                                                      & vlSelfRef.tb_top__DOT__DUT__DOT__inst_id)))))));
}

VL_ATTR_COLD void Vtb_top___024root___eval_static__TOP(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_static__TOP\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__clk = 0U;
    vlSelfRef.tb_top__DOT__DUT__DOT__rvfi_valid = 0U;
    vlSelfRef.tb_top__DOT__DUT__DOT__tracer_inst__DOT__i = 0U;
}

VL_ATTR_COLD void Vtb_top___024root___eval_initial__TOP(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_initial__TOP\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile("tb_top.vcd"s);
    vlSymsp->_traceDumpOpen();
    vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__x[0U] = 0U;
    vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__x[1U] = 0U;
    vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__x[2U] = 0U;
    vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__x[3U] = 0U;
    vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__x[4U] = 0U;
    vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__x[5U] = 0U;
    vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__x[6U] = 0U;
    vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__x[7U] = 0U;
    vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__x[8U] = 0U;
    vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__x[9U] = 0U;
    vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__x[0x0aU] = 0U;
    vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__x[0x0bU] = 0U;
    vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__x[0x0cU] = 0U;
    vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__x[0x0dU] = 0U;
    vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__x[0x0eU] = 0U;
    vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__x[0x0fU] = 0U;
    vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__x[0x10U] = 0U;
    vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__x[0x11U] = 0U;
    vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__x[0x12U] = 0U;
    vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__x[0x13U] = 0U;
    vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__x[0x14U] = 0U;
    vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__x[0x15U] = 0U;
    vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__x[0x16U] = 0U;
    vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__x[0x17U] = 0U;
    vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__x[0x18U] = 0U;
    vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__x[0x19U] = 0U;
    vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__x[0x1aU] = 0U;
    vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__x[0x1bU] = 0U;
    vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__x[0x1cU] = 0U;
    vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__x[0x1dU] = 0U;
    vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__x[0x1eU] = 0U;
    vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__x[0x1fU] = 0U;
    vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__i = 0x00000020U;
    VL_READMEM_N(true, 32, 32768, 0, "/mnt/c/CAO/lab8/tests/riscv_arithmetic_basic_test/imem_0.mem"s
                 ,  &(vlSelfRef.tb_top__DOT__imem_instance__DOT__imem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 32, 32768, 0, "/mnt/c/CAO/lab8/tests/riscv_arithmetic_basic_test/dmem_0.mem"s
                 ,  &(vlSelfRef.tb_top__DOT__dmem_inst__DOT__dmem)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vtb_top___024root___eval_final(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_final\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_top___024root___eval_phase__stl(Vtb_top___024root* vlSelf);

VL_ATTR_COLD void Vtb_top___024root___eval_settle(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_settle\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("/mnt/c/CAO/lab8/tb/tb_top.sv", 19, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vtb_top___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vtb_top___024root___eval_triggers__stl(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_triggers__stl\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vtb_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_top___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

extern const VlUnpacked<CData/*0:0*/, 512> Vtb_top__ConstPool__TABLE_hc9331fcf_0;

VL_ATTR_COLD void Vtb_top___024root___stl_sequent__TOP__0(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___stl_sequent__TOP__0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
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
    vlSelfRef.tb_top__DOT__DUT__DOT__PCWrite = 1U;
    vlSelfRef.tb_top__DOT__DUT__DOT__mux_en = 0U;
    vlSelfRef.tb_top__DOT__DUT__DOT__pc__DOT__inc_value 
        = ((IData)(vlSelfRef.tb_top__DOT__DUT__DOT__pc_sel_mem)
            ? vlSelfRef.tb_top__DOT__mem_addr : ((IData)(4U) 
                                                 + vlSelfRef.tb_top__DOT__imem_addr));
    vlSelfRef.tb_top__DOT__imem_instance__DOT__address 
        = (vlSelfRef.tb_top__DOT__imem_addr - (IData)(0x80000000U));
    vlSelfRef.tb_top__DOT__imem_inst = vlSelfRef.tb_top__DOT__imem_instance__DOT__imem
        [(0x00007fffU & (vlSelfRef.tb_top__DOT__imem_instance__DOT__address 
                         >> 2U))];
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
    vlSelfRef.tb_top__DOT__dmem_inst__DOT__local_addr 
        = ((0x80008000U <= vlSelfRef.tb_top__DOT__mem_addr)
            ? (vlSelfRef.tb_top__DOT__mem_addr - (IData)(0x80008000U))
            : 0U);
    vlSelfRef.tb_top__DOT__dmem_inst__DOT__word_index 
        = (vlSelfRef.tb_top__DOT__dmem_inst__DOT__local_addr 
           >> 2U);
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
    vlSelfRef.tb_top__DOT__DUT__DOT__rf__DOT__dataW 
        = ((0U == (IData)(vlSelfRef.tb_top__DOT__DUT__DOT__WBSel_wb))
            ? vlSelfRef.tb_top__DOT__DUT__DOT__dmem_wb
            : ((1U == (IData)(vlSelfRef.tb_top__DOT__DUT__DOT__WBSel_wb))
                ? vlSelfRef.tb_top__DOT__DUT__DOT__alu_wb
                : ((2U == (IData)(vlSelfRef.tb_top__DOT__DUT__DOT__WBSel_wb))
                    ? ((IData)(4U) + vlSelfRef.tb_top__DOT__DUT__DOT__pc_wb)
                    : 0U)));
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
    vlSelfRef.tb_top__DOT__mem_rdata = ((IData)(vlSelfRef.tb_top__DOT__DUT__DOT__MemRW_mem)
                                         ? 0U : vlSelfRef.tb_top__DOT__dmem_inst__DOT__dmem
                                        [(0x00007fffU 
                                          & vlSelfRef.tb_top__DOT__dmem_inst__DOT__word_index)]);
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

VL_ATTR_COLD void Vtb_top___024root___eval_stl(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_stl\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtb_top___024root___stl_sequent__TOP__0(vlSelf);
        Vtb_top___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vtb_top___024root___eval_phase__stl(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_phase__stl\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_top___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vtb_top___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtb_top___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtb_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_top___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_top.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge tb_top.reset_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(negedge tb_top.DUT.flush)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(negedge tb_top.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @( (tb_top.DUT.inst_id[6] && (tb_top.DUT.inst_id[5] && (tb_top.DUT.inst_id[4] && ((~ tb_top.DUT.inst_id[3]) && ((~ tb_top.DUT.inst_id[2]) && (tb_top.DUT.inst_id[1] && tb_top.DUT.inst_id[0])))))))\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_top___024root____Vm_traceActivitySetAll(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root____Vm_traceActivitySetAll\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
    vlSelfRef.__Vm_traceActivity[6U] = 1U;
    vlSelfRef.__Vm_traceActivity[7U] = 1U;
    vlSelfRef.__Vm_traceActivity[8U] = 1U;
    vlSelfRef.__Vm_traceActivity[9U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x0000000aU] = 1U;
}

VL_ATTR_COLD void Vtb_top___024root___ctor_var_reset(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___ctor_var_reset\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->tb_top__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16256328344204653681ull);
    vlSelf->tb_top__DOT__reset_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8360092971174828343ull);
    vlSelf->tb_top__DOT__imem_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9194465490672038850ull);
    vlSelf->tb_top__DOT__imem_inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7998254515689810449ull);
    vlSelf->tb_top__DOT__mem_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14431733383065478083ull);
    vlSelf->tb_top__DOT__mem_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11387155413978529310ull);
    vlSelf->tb_top__DOT__mem_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2595959192632280342ull);
    vlSelf->tb_top__DOT__mem_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6873887440717789237ull);
    vlSelf->tb_top__DOT__DUT__DOT__dataR = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12101163158227212830ull);
    vlSelf->tb_top__DOT__DUT__DOT__inc_value = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6833561966338127208ull);
    vlSelf->tb_top__DOT__DUT__DOT__dmem_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7609859182393785832ull);
    vlSelf->tb_top__DOT__DUT__DOT__inst_type = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8197402819250871260ull);
    vlSelf->tb_top__DOT__DUT__DOT__WBSel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8839755869095440386ull);
    vlSelf->tb_top__DOT__DUT__DOT__ALUSel = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8673074199384445530ull);
    vlSelf->tb_top__DOT__DUT__DOT__BSel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9523078474929846481ull);
    vlSelf->tb_top__DOT__DUT__DOT__RegWEn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6085115358855378869ull);
    vlSelf->tb_top__DOT__DUT__DOT__MemRW = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14070142840714557098ull);
    vlSelf->tb_top__DOT__DUT__DOT__JSel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16779448470417116866ull);
    vlSelf->tb_top__DOT__DUT__DOT__BrUn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9247101542535891673ull);
    vlSelf->tb_top__DOT__DUT__DOT__pc_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13813990486937072316ull);
    vlSelf->tb_top__DOT__DUT__DOT__PCWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1620393694836871745ull);
    vlSelf->tb_top__DOT__DUT__DOT__mux_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6323491126260101420ull);
    vlSelf->tb_top__DOT__DUT__DOT__IFWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 113355230559776954ull);
    vlSelf->tb_top__DOT__DUT__DOT__pc_id = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10128862561655604691ull);
    vlSelf->tb_top__DOT__DUT__DOT__inst_id = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3697137250677677629ull);
    vlSelf->tb_top__DOT__DUT__DOT__BrUn_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10738751362534802118ull);
    vlSelf->tb_top__DOT__DUT__DOT__JSel_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7321557395606266239ull);
    vlSelf->tb_top__DOT__DUT__DOT__BSel_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1346975809227611217ull);
    vlSelf->tb_top__DOT__DUT__DOT__MemRW_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14838106610011532832ull);
    vlSelf->tb_top__DOT__DUT__DOT__RegWEn_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3643281585459570884ull);
    vlSelf->tb_top__DOT__DUT__DOT__flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5514659726489253724ull);
    vlSelf->tb_top__DOT__DUT__DOT__Eq_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17104601192963948431ull);
    vlSelf->tb_top__DOT__DUT__DOT__Lt_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4263269916664296185ull);
    vlSelf->tb_top__DOT__DUT__DOT__inst_type_ex = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8207007616195726390ull);
    vlSelf->tb_top__DOT__DUT__DOT__ALUSel_ex = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9269633814610136037ull);
    vlSelf->tb_top__DOT__DUT__DOT__WBSel_ex = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10864012634385320606ull);
    vlSelf->tb_top__DOT__DUT__DOT__pc_ex = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2078978811211602981ull);
    vlSelf->tb_top__DOT__DUT__DOT__data1_ex = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9009424283708598774ull);
    vlSelf->tb_top__DOT__DUT__DOT__data2_ex = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16715402765101517657ull);
    vlSelf->tb_top__DOT__DUT__DOT__immediate_ex = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3541404124002747152ull);
    vlSelf->tb_top__DOT__DUT__DOT__inst_ex = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8622630602857971104ull);
    vlSelf->tb_top__DOT__DUT__DOT__data1_mem = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18192105143187130092ull);
    vlSelf->tb_top__DOT__DUT__DOT__data2_mem = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1391999403592750386ull);
    vlSelf->tb_top__DOT__DUT__DOT__alu_mem = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2600062580897821211ull);
    vlSelf->tb_top__DOT__DUT__DOT__inst_mem = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3235336584577921394ull);
    vlSelf->tb_top__DOT__DUT__DOT__pc_mem = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15032086558966029092ull);
    vlSelf->tb_top__DOT__DUT__DOT__MemRW_mem = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6152781666390775835ull);
    vlSelf->tb_top__DOT__DUT__DOT__RegWEn_mem = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16107151755824689666ull);
    vlSelf->tb_top__DOT__DUT__DOT__pc_sel_mem = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15978620585797139901ull);
    vlSelf->tb_top__DOT__DUT__DOT__WBSel_mem = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2747039573614852439ull);
    vlSelf->tb_top__DOT__DUT__DOT__MemRW_wb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1526840195431779884ull);
    vlSelf->tb_top__DOT__DUT__DOT__RegWEn_wb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4656086409505516406ull);
    vlSelf->tb_top__DOT__DUT__DOT__WBSel_wb = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1241870230764759663ull);
    vlSelf->tb_top__DOT__DUT__DOT__pc_wb = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3948655014728087992ull);
    vlSelf->tb_top__DOT__DUT__DOT__alu_wb = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16621591378109912013ull);
    vlSelf->tb_top__DOT__DUT__DOT__dmem_wb = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2383334809039040795ull);
    vlSelf->tb_top__DOT__DUT__DOT__inst_wb = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1841581339463410557ull);
    vlSelf->tb_top__DOT__DUT__DOT__data1_wb = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12622002308595381166ull);
    vlSelf->tb_top__DOT__DUT__DOT__data2_wb = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4910478682571995616ull);
    vlSelf->tb_top__DOT__DUT__DOT__mem_dat_wb = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5604153827418251787ull);
    vlSelf->tb_top__DOT__DUT__DOT__fwd_a = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10418917196449131430ull);
    vlSelf->tb_top__DOT__DUT__DOT__fwd_b = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17439146792608587729ull);
    vlSelf->tb_top__DOT__DUT__DOT__wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4574846750639518348ull);
    vlSelf->tb_top__DOT__DUT__DOT__rvfi_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16108182034079677280ull);
    vlSelf->tb_top__DOT__DUT__DOT__pc__DOT__inc_value = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18177698604370483601ull);
    vlSelf->tb_top__DOT__DUT__DOT__pc__DOT__write_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14223146966978159080ull);
    vlSelf->tb_top__DOT__DUT__DOT__IF_1__DOT__data_in = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13126214045015710498ull);
    vlSelf->tb_top__DOT__DUT__DOT__IF_2__DOT__data_in = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7337846354703591784ull);
    vlSelf->tb_top__DOT__DUT__DOT__rf__DOT__dataW = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2552234604659253176ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT__DUT__DOT__rf__DOT__x[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3440815672787231036ull);
    }
    vlSelf->tb_top__DOT__DUT__DOT__rf__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12015129476900818342ull);
    vlSelf->tb_top__DOT__DUT__DOT__branch__DOT__op1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18144827331759339434ull);
    vlSelf->tb_top__DOT__DUT__DOT__branch__DOT__op2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1865325464061635118ull);
    vlSelf->tb_top__DOT__DUT__DOT__branch__DOT__Eq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8498770169049065066ull);
    vlSelf->tb_top__DOT__DUT__DOT__branch__DOT__Lt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12516036266113354116ull);
    vlSelf->tb_top__DOT__DUT__DOT__alu__DOT__data1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7998197005467746284ull);
    vlSelf->tb_top__DOT__DUT__DOT__alu__DOT__data2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1980245117216388041ull);
    vlSelf->tb_top__DOT__DUT__DOT__WB_3__DOT__data_in = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18368713044008018605ull);
    vlSelf->tb_top__DOT__DUT__DOT__tracer_inst__DOT__rvfi_mem_rmask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13316785095085587878ull);
    vlSelf->tb_top__DOT__DUT__DOT__tracer_inst__DOT__rvfi_mem_wmask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14520403283418501702ull);
    vlSelf->tb_top__DOT__DUT__DOT__tracer_inst__DOT__rvfi_insn = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8015273876426889313ull);
    vlSelf->tb_top__DOT__DUT__DOT__tracer_inst__DOT__rvfi_rs1_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 969230756765731178ull);
    vlSelf->tb_top__DOT__DUT__DOT__tracer_inst__DOT__rvfi_rs2_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8710323576898783152ull);
    vlSelf->tb_top__DOT__DUT__DOT__tracer_inst__DOT__rvfi_rs3_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17855031948788105369ull);
    vlSelf->tb_top__DOT__DUT__DOT__tracer_inst__DOT__rvfi_rs1_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9119281446919019686ull);
    vlSelf->tb_top__DOT__DUT__DOT__tracer_inst__DOT__rvfi_rs2_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15999061097323443899ull);
    vlSelf->tb_top__DOT__DUT__DOT__tracer_inst__DOT__rvfi_rs3_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 217266680317163057ull);
    vlSelf->tb_top__DOT__DUT__DOT__tracer_inst__DOT__rvfi_rd_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4823749286174056350ull);
    vlSelf->tb_top__DOT__DUT__DOT__tracer_inst__DOT__rvfi_rd_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16664779478629281066ull);
    vlSelf->tb_top__DOT__DUT__DOT__tracer_inst__DOT__rvfi_pc_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18089539838566222524ull);
    vlSelf->tb_top__DOT__DUT__DOT__tracer_inst__DOT__rvfi_pc_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15925477582292216908ull);
    vlSelf->tb_top__DOT__DUT__DOT__tracer_inst__DOT__file_handle = 0;
    vlSelf->tb_top__DOT__DUT__DOT__tracer_inst__DOT__cycle = 0;
    vlSelf->tb_top__DOT__DUT__DOT__tracer_inst__DOT__insn_is_compressed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11709268841127256368ull);
    vlSelf->tb_top__DOT__DUT__DOT__tracer_inst__DOT__data_accessed = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6537660168332009550ull);
    vlSelf->tb_top__DOT__DUT__DOT__tracer_inst__DOT__rs1_float = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3387658666498752099ull);
    vlSelf->tb_top__DOT__DUT__DOT__tracer_inst__DOT__rs2_float = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7580412074469448517ull);
    vlSelf->tb_top__DOT__DUT__DOT__tracer_inst__DOT__rs3_float = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14084668868218352805ull);
    vlSelf->tb_top__DOT__DUT__DOT__tracer_inst__DOT__rd_float = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1735197422509933688ull);
    vlSelf->tb_top__DOT__DUT__DOT__tracer_inst__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 32768; ++__Vi0) {
        vlSelf->tb_top__DOT__imem_instance__DOT__imem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17329833073921263797ull);
    }
    vlSelf->tb_top__DOT__imem_instance__DOT__address = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10355185485312597609ull);
    for (int __Vi0 = 0; __Vi0 < 32768; ++__Vi0) {
        vlSelf->tb_top__DOT__dmem_inst__DOT__dmem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 867298272022456600ull);
    }
    vlSelf->tb_top__DOT__dmem_inst__DOT__local_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16223736161549975392ull);
    vlSelf->tb_top__DOT__dmem_inst__DOT__word_index = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1020425280143137983ull);
    vlSelf->__Vdly__tb_top__DOT__DUT__DOT__tracer_inst__DOT__cycle = 0;
    vlSelf->__VdlyVal__tb_top__DOT__DUT__DOT__rf__DOT__x__v0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9699232887172827058ull);
    vlSelf->__VdlyDim0__tb_top__DOT__DUT__DOT__rf__DOT__x__v0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8727532657394557462ull);
    vlSelf->__VdlySet__tb_top__DOT__DUT__DOT__rf__DOT__x__v0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9069298637648042572ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__reset_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1340790914745519504ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__DUT__DOT__flush__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12976930498777122651ull);
    vlSelf->__Vtrigprevexpr_h754fbaed__1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 139683004983571136ull);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 11; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
