// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcpu_tb__Syms.h"


void Vcpu_tb___024root__trace_chg_0_sub_0(Vcpu_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcpu_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root__trace_chg_0\n"); );
    // Body
    Vcpu_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu_tb___024root*>(voidSelf);
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vcpu_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vcpu_tb___024root__trace_chg_0_sub_0(Vcpu_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root__trace_chg_0_sub_0\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgCData(oldp+0,(vlSelfRef.cpu_tb__DOT__uut__DOT__rf__DOT__regs[0]),8);
        bufp->chgCData(oldp+1,(vlSelfRef.cpu_tb__DOT__uut__DOT__rf__DOT__regs[1]),8);
        bufp->chgCData(oldp+2,(vlSelfRef.cpu_tb__DOT__uut__DOT__rf__DOT__regs[2]),8);
        bufp->chgCData(oldp+3,(vlSelfRef.cpu_tb__DOT__uut__DOT__rf__DOT__regs[3]),8);
        bufp->chgCData(oldp+4,(vlSelfRef.cpu_tb__DOT__uut__DOT__rf__DOT__regs[4]),8);
        bufp->chgCData(oldp+5,(vlSelfRef.cpu_tb__DOT__uut__DOT__rf__DOT__regs[5]),8);
        bufp->chgCData(oldp+6,(vlSelfRef.cpu_tb__DOT__uut__DOT__rf__DOT__regs[6]),8);
        bufp->chgCData(oldp+7,(vlSelfRef.cpu_tb__DOT__uut__DOT__rf__DOT__regs[7]),8);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+8,(vlSelfRef.cpu_tb__DOT__pc_sample),8);
        bufp->chgCData(oldp+9,(vlSelfRef.cpu_tb__DOT__dest_sample),3);
        bufp->chgCData(oldp+10,(vlSelfRef.cpu_tb__DOT__src_sample),3);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgCData(oldp+11,(vlSelfRef.cpu_tb__DOT__uut__DOT__pc),8);
        bufp->chgSData(oldp+12,(vlSelfRef.cpu_tb__DOT__uut__DOT__instr),12);
        bufp->chgCData(oldp+13,((0x0000000fU & ((IData)(vlSelfRef.cpu_tb__DOT__uut__DOT__instr) 
                                                >> 8U))),4);
        bufp->chgCData(oldp+14,((7U & ((IData)(vlSelfRef.cpu_tb__DOT__uut__DOT__instr) 
                                       >> 5U))),3);
        bufp->chgCData(oldp+15,((7U & ((IData)(vlSelfRef.cpu_tb__DOT__uut__DOT__instr) 
                                       >> 2U))),3);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgCData(oldp+16,(vlSelfRef.cpu_tb__DOT__uut__DOT__rdata),8);
        bufp->chgCData(oldp+17,(vlSelfRef.cpu_tb__DOT__uut__DOT__sdata),8);
        bufp->chgCData(oldp+18,(vlSelfRef.cpu_tb__DOT__uut__DOT__alu_result),8);
        bufp->chgBit(oldp+19,(vlSelfRef.cpu_tb__DOT__uut__DOT__carry));
    }
    bufp->chgBit(oldp+20,(vlSelfRef.cpu_tb__DOT__clk));
    bufp->chgBit(oldp+21,(vlSelfRef.cpu_tb__DOT__rst));
    bufp->chgIData(oldp+22,(vlSelfRef.cpu_tb__DOT__uut__DOT__rf__DOT__i),32);
}

void Vcpu_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root__trace_cleanup\n"); );
    // Body
    Vcpu_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu_tb___024root*>(voidSelf);
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
