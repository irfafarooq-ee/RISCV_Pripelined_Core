// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP___024ROOT_H_
#define VERILATED_VTB_TOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_top__DOT__clk;
        CData/*0:0*/ tb_top__DOT__reset_n;
        CData/*0:0*/ tb_top__DOT__mem_ack;
        CData/*2:0*/ tb_top__DOT__DUT__DOT__inst_type;
        CData/*1:0*/ tb_top__DOT__DUT__DOT__WBSel;
        CData/*3:0*/ tb_top__DOT__DUT__DOT__ALUSel;
        CData/*0:0*/ tb_top__DOT__DUT__DOT__BSel;
        CData/*0:0*/ tb_top__DOT__DUT__DOT__RegWEn;
        CData/*0:0*/ tb_top__DOT__DUT__DOT__MemRW;
        CData/*0:0*/ tb_top__DOT__DUT__DOT__JSel;
        CData/*0:0*/ tb_top__DOT__DUT__DOT__BrUn;
        CData/*0:0*/ tb_top__DOT__DUT__DOT__pc_sel;
        CData/*0:0*/ tb_top__DOT__DUT__DOT__PCWrite;
        CData/*0:0*/ tb_top__DOT__DUT__DOT__mux_en;
        CData/*0:0*/ tb_top__DOT__DUT__DOT__IFWrite;
        CData/*0:0*/ tb_top__DOT__DUT__DOT__BrUn_ex;
        CData/*0:0*/ tb_top__DOT__DUT__DOT__JSel_ex;
        CData/*0:0*/ tb_top__DOT__DUT__DOT__BSel_ex;
        CData/*0:0*/ tb_top__DOT__DUT__DOT__MemRW_ex;
        CData/*0:0*/ tb_top__DOT__DUT__DOT__RegWEn_ex;
        CData/*0:0*/ tb_top__DOT__DUT__DOT__flush;
        CData/*0:0*/ tb_top__DOT__DUT__DOT__Eq_ex;
        CData/*0:0*/ tb_top__DOT__DUT__DOT__Lt_ex;
        CData/*2:0*/ tb_top__DOT__DUT__DOT__inst_type_ex;
        CData/*3:0*/ tb_top__DOT__DUT__DOT__ALUSel_ex;
        CData/*1:0*/ tb_top__DOT__DUT__DOT__WBSel_ex;
        CData/*0:0*/ tb_top__DOT__DUT__DOT__MemRW_mem;
        CData/*0:0*/ tb_top__DOT__DUT__DOT__RegWEn_mem;
        CData/*0:0*/ tb_top__DOT__DUT__DOT__pc_sel_mem;
        CData/*1:0*/ tb_top__DOT__DUT__DOT__WBSel_mem;
        CData/*0:0*/ tb_top__DOT__DUT__DOT__MemRW_wb;
        CData/*0:0*/ tb_top__DOT__DUT__DOT__RegWEn_wb;
        CData/*1:0*/ tb_top__DOT__DUT__DOT__WBSel_wb;
        CData/*1:0*/ tb_top__DOT__DUT__DOT__fwd_a;
        CData/*1:0*/ tb_top__DOT__DUT__DOT__fwd_b;
        CData/*3:0*/ tb_top__DOT__DUT__DOT__wstrb;
        CData/*0:0*/ tb_top__DOT__DUT__DOT__rvfi_valid;
        CData/*0:0*/ tb_top__DOT__DUT__DOT__pc__DOT__write_en;
        CData/*0:0*/ tb_top__DOT__DUT__DOT__branch__DOT__Eq;
        CData/*0:0*/ tb_top__DOT__DUT__DOT__branch__DOT__Lt;
        CData/*3:0*/ tb_top__DOT__DUT__DOT__tracer_inst__DOT__rvfi_mem_rmask;
        CData/*3:0*/ tb_top__DOT__DUT__DOT__tracer_inst__DOT__rvfi_mem_wmask;
        CData/*4:0*/ tb_top__DOT__DUT__DOT__tracer_inst__DOT__rvfi_rs1_addr;
        CData/*4:0*/ tb_top__DOT__DUT__DOT__tracer_inst__DOT__rvfi_rs2_addr;
        CData/*4:0*/ tb_top__DOT__DUT__DOT__tracer_inst__DOT__rvfi_rs3_addr;
        CData/*4:0*/ tb_top__DOT__DUT__DOT__tracer_inst__DOT__rvfi_rd_addr;
        CData/*0:0*/ tb_top__DOT__DUT__DOT__tracer_inst__DOT__insn_is_compressed;
        CData/*4:0*/ tb_top__DOT__DUT__DOT__tracer_inst__DOT__data_accessed;
        CData/*0:0*/ tb_top__DOT__DUT__DOT__tracer_inst__DOT__rs1_float;
        CData/*0:0*/ tb_top__DOT__DUT__DOT__tracer_inst__DOT__rs2_float;
        CData/*0:0*/ tb_top__DOT__DUT__DOT__tracer_inst__DOT__rs3_float;
        CData/*0:0*/ tb_top__DOT__DUT__DOT__tracer_inst__DOT__rd_float;
        CData/*4:0*/ __VdlyDim0__tb_top__DOT__DUT__DOT__rf__DOT__x__v0;
        CData/*0:0*/ __VdlySet__tb_top__DOT__DUT__DOT__rf__DOT__x__v0;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__reset_n__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__DUT__DOT__flush__0;
        CData/*0:0*/ __Vtrigprevexpr_h754fbaed__1;
        CData/*0:0*/ __VactDidInit;
        IData/*31:0*/ tb_top__DOT__imem_addr;
        IData/*31:0*/ tb_top__DOT__imem_inst;
        IData/*31:0*/ tb_top__DOT__mem_addr;
        IData/*31:0*/ tb_top__DOT__mem_wdata;
    };
    struct {
        IData/*31:0*/ tb_top__DOT__mem_rdata;
        IData/*31:0*/ tb_top__DOT__DUT__DOT__dataR;
        IData/*31:0*/ tb_top__DOT__DUT__DOT__inc_value;
        IData/*31:0*/ tb_top__DOT__DUT__DOT__dmem_out;
        IData/*31:0*/ tb_top__DOT__DUT__DOT__pc_id;
        IData/*31:0*/ tb_top__DOT__DUT__DOT__inst_id;
        IData/*31:0*/ tb_top__DOT__DUT__DOT__pc_ex;
        IData/*31:0*/ tb_top__DOT__DUT__DOT__data1_ex;
        IData/*31:0*/ tb_top__DOT__DUT__DOT__data2_ex;
        IData/*31:0*/ tb_top__DOT__DUT__DOT__immediate_ex;
        IData/*31:0*/ tb_top__DOT__DUT__DOT__inst_ex;
        IData/*31:0*/ tb_top__DOT__DUT__DOT__data1_mem;
        IData/*31:0*/ tb_top__DOT__DUT__DOT__data2_mem;
        IData/*31:0*/ tb_top__DOT__DUT__DOT__alu_mem;
        IData/*31:0*/ tb_top__DOT__DUT__DOT__inst_mem;
        IData/*31:0*/ tb_top__DOT__DUT__DOT__pc_mem;
        IData/*31:0*/ tb_top__DOT__DUT__DOT__pc_wb;
        IData/*31:0*/ tb_top__DOT__DUT__DOT__alu_wb;
        IData/*31:0*/ tb_top__DOT__DUT__DOT__dmem_wb;
        IData/*31:0*/ tb_top__DOT__DUT__DOT__inst_wb;
        IData/*31:0*/ tb_top__DOT__DUT__DOT__data1_wb;
        IData/*31:0*/ tb_top__DOT__DUT__DOT__data2_wb;
        IData/*31:0*/ tb_top__DOT__DUT__DOT__mem_dat_wb;
        IData/*31:0*/ tb_top__DOT__DUT__DOT__pc__DOT__inc_value;
        IData/*31:0*/ tb_top__DOT__DUT__DOT__IF_1__DOT__data_in;
        IData/*31:0*/ tb_top__DOT__DUT__DOT__IF_2__DOT__data_in;
        IData/*31:0*/ tb_top__DOT__DUT__DOT__rf__DOT__dataW;
        IData/*31:0*/ tb_top__DOT__DUT__DOT__rf__DOT__i;
        IData/*31:0*/ tb_top__DOT__DUT__DOT__branch__DOT__op1;
        IData/*31:0*/ tb_top__DOT__DUT__DOT__branch__DOT__op2;
        IData/*31:0*/ tb_top__DOT__DUT__DOT__alu__DOT__data1;
        IData/*31:0*/ tb_top__DOT__DUT__DOT__alu__DOT__data2;
        IData/*31:0*/ tb_top__DOT__DUT__DOT__WB_3__DOT__data_in;
        IData/*31:0*/ tb_top__DOT__DUT__DOT__tracer_inst__DOT__rvfi_insn;
        IData/*31:0*/ tb_top__DOT__DUT__DOT__tracer_inst__DOT__rvfi_rs1_rdata;
        IData/*31:0*/ tb_top__DOT__DUT__DOT__tracer_inst__DOT__rvfi_rs2_rdata;
        IData/*31:0*/ tb_top__DOT__DUT__DOT__tracer_inst__DOT__rvfi_rs3_rdata;
        IData/*31:0*/ tb_top__DOT__DUT__DOT__tracer_inst__DOT__rvfi_rd_wdata;
        IData/*31:0*/ tb_top__DOT__DUT__DOT__tracer_inst__DOT__rvfi_pc_rdata;
        IData/*31:0*/ tb_top__DOT__DUT__DOT__tracer_inst__DOT__rvfi_pc_wdata;
        IData/*31:0*/ tb_top__DOT__DUT__DOT__tracer_inst__DOT__file_handle;
        IData/*31:0*/ tb_top__DOT__DUT__DOT__tracer_inst__DOT__cycle;
        IData/*31:0*/ tb_top__DOT__DUT__DOT__tracer_inst__DOT__i;
        IData/*31:0*/ tb_top__DOT__imem_instance__DOT__address;
        IData/*31:0*/ tb_top__DOT__dmem_inst__DOT__local_addr;
        IData/*31:0*/ tb_top__DOT__dmem_inst__DOT__word_index;
        IData/*31:0*/ __Vdly__tb_top__DOT__DUT__DOT__tracer_inst__DOT__cycle;
        IData/*31:0*/ __VdlyVal__tb_top__DOT__DUT__DOT__rf__DOT__x__v0;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 32> tb_top__DOT__DUT__DOT__rf__DOT__x;
        VlUnpacked<IData/*31:0*/, 32768> tb_top__DOT__imem_instance__DOT__imem;
        VlUnpacked<IData/*31:0*/, 32768> tb_top__DOT__dmem_inst__DOT__dmem;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
        VlUnpacked<CData/*0:0*/, 11> __Vm_traceActivity;
    };
    std::string tb_top__DOT__DUT__DOT__tracer_inst__DOT__file_name;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hf6097d86__0;
    VlTriggerScheduler __VtrigSched_hf0f872d7__0;
    VlTriggerScheduler __VtrigSched_hf6097ec5__0;

    // INTERNAL VARIABLES
    Vtb_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_top___024root(Vtb_top__Syms* symsp, const char* v__name);
    ~Vtb_top___024root();
    VL_UNCOPYABLE(Vtb_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
