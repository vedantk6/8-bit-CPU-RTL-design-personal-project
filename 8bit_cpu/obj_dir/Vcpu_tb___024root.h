// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcpu_tb.h for the primary calling header

#ifndef VERILATED_VCPU_TB___024ROOT_H_
#define VERILATED_VCPU_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vcpu_tb___024unit;


class Vcpu_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcpu_tb___024root final : public VerilatedModule {
  public:
    // CELLS
    Vcpu_tb___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ cpu_tb__DOT__clk;
    CData/*0:0*/ cpu_tb__DOT__rst;
    CData/*7:0*/ cpu_tb__DOT__pc_sample;
    CData/*2:0*/ cpu_tb__DOT__dest_sample;
    CData/*2:0*/ cpu_tb__DOT__src_sample;
    CData/*7:0*/ cpu_tb__DOT__uut__DOT__pc;
    CData/*3:0*/ cpu_tb__DOT__uut__DOT__opcode;
    CData/*7:0*/ cpu_tb__DOT__uut__DOT__rdata;
    CData/*7:0*/ cpu_tb__DOT__uut__DOT__sdata;
    CData/*7:0*/ cpu_tb__DOT__uut__DOT__alu_result;
    CData/*0:0*/ cpu_tb__DOT__uut__DOT__carry;
    CData/*7:0*/ __Vdly__cpu_tb__DOT__uut__DOT__pc;
    CData/*7:0*/ __VdlyVal__cpu_tb__DOT__uut__DOT__rf__DOT__regs__v0;
    CData/*2:0*/ __VdlyDim0__cpu_tb__DOT__uut__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __VdlySet__cpu_tb__DOT__uut__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__cpu_tb__DOT__clk__0;
    CData/*2:0*/ __Vtrigprevexpr___TOP__cpu_tb__DOT__dest_sample__0;
    CData/*7:0*/ __Vtrigprevexpr___TOP__cpu_tb__DOT__pc_sample__0;
    CData/*2:0*/ __Vtrigprevexpr___TOP__cpu_tb__DOT__src_sample__0;
    CData/*3:0*/ __Vtrigprevexpr___TOP__cpu_tb__DOT__uut__DOT__opcode__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__cpu_tb__DOT__rst__0;
    CData/*0:0*/ __VactDidInit;
    SData/*11:0*/ cpu_tb__DOT__uut__DOT__instr;
    SData/*11:0*/ __Vtrigprevexpr___TOP__cpu_tb__DOT__uut__DOT__instr__0;
    IData/*31:0*/ cpu_tb__DOT__uut__DOT__rf__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<SData/*11:0*/, 256> cpu_tb__DOT__uut__DOT__mem__DOT__memory;
    VlUnpacked<CData/*7:0*/, 8> cpu_tb__DOT__uut__DOT__rf__DOT__regs;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;

    // INTERNAL VARIABLES
    Vcpu_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcpu_tb___024root(Vcpu_tb__Syms* symsp, const char* v__name);
    ~Vcpu_tb___024root();
    VL_UNCOPYABLE(Vcpu_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
