// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_tb.h for the primary calling header

#include "Vcpu_tb__pch.h"

VL_ATTR_COLD void Vcpu_tb___024root___eval_initial__TOP(Vcpu_tb___024root* vlSelf);
VlCoroutine Vcpu_tb___024root___eval_initial__TOP__Vtiming__0(Vcpu_tb___024root* vlSelf);
VlCoroutine Vcpu_tb___024root___eval_initial__TOP__Vtiming__1(Vcpu_tb___024root* vlSelf);
VlCoroutine Vcpu_tb___024root___eval_initial__TOP__Vtiming__2(Vcpu_tb___024root* vlSelf);

void Vcpu_tb___024root___eval_initial(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_initial\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcpu_tb___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vcpu_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vcpu_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vcpu_tb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

VlCoroutine Vcpu_tb___024root___eval_initial__TOP__Vtiming__0(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cpu_tb__DOT__clk = 0U;
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "tb/cpu_tb.v", 
                                             20);
        vlSelfRef.cpu_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.cpu_tb__DOT__clk)));
    }
}

VlCoroutine Vcpu_tb___024root___eval_initial__TOP__Vtiming__1(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cpu_tb__DOT__rst = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb/cpu_tb.v", 
                                         27);
    vlSelfRef.cpu_tb__DOT__rst = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000186a0ULL, 
                                         nullptr, "tb/cpu_tb.v", 
                                         28);
    vlSelfRef.cpu_tb__DOT__rst = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb/cpu_tb.v", 
                                         30);
    vlSelfRef.cpu_tb__DOT__rst = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000186a0ULL, 
                                         nullptr, "tb/cpu_tb.v", 
                                         32);
    VL_FINISH_MT("tb/cpu_tb.v", 33, "");
}

VlCoroutine Vcpu_tb___024root___eval_initial__TOP__Vtiming__2(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile("cpu_tb.vcd"s);
    vlSymsp->_traceDumpOpen();
    co_await vlSelfRef.__VdlySched.delay(0x0000000000030d40ULL, 
                                         nullptr, "tb/cpu_tb.v", 
                                         39);
    VL_FINISH_MT("tb/cpu_tb.v", 39, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vcpu_tb___024root___eval_triggers__act(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_triggers__act\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    (((((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                         << 3U) 
                                                        | (((IData)(vlSelfRef.cpu_tb__DOT__rst) 
                                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cpu_tb__DOT__rst__0))) 
                                                           << 2U)) 
                                                       | ((((IData)(vlSelfRef.cpu_tb__DOT__uut__DOT__opcode) 
                                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cpu_tb__DOT__uut__DOT__opcode__0)) 
                                                           << 1U) 
                                                          | ((IData)(vlSelfRef.cpu_tb__DOT__uut__DOT__instr) 
                                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cpu_tb__DOT__uut__DOT__instr__0)))) 
                                                      << 4U) 
                                                     | (((((IData)(vlSelfRef.cpu_tb__DOT__src_sample) 
                                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cpu_tb__DOT__src_sample__0)) 
                                                          << 3U) 
                                                         | (((IData)(vlSelfRef.cpu_tb__DOT__pc_sample) 
                                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cpu_tb__DOT__pc_sample__0)) 
                                                            << 2U)) 
                                                        | ((((IData)(vlSelfRef.cpu_tb__DOT__dest_sample) 
                                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cpu_tb__DOT__dest_sample__0)) 
                                                            << 1U) 
                                                           | ((IData)(vlSelfRef.cpu_tb__DOT__clk) 
                                                              & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cpu_tb__DOT__clk__0))))))));
    vlSelfRef.__Vtrigprevexpr___TOP__cpu_tb__DOT__clk__0 
        = vlSelfRef.cpu_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__cpu_tb__DOT__dest_sample__0 
        = vlSelfRef.cpu_tb__DOT__dest_sample;
    vlSelfRef.__Vtrigprevexpr___TOP__cpu_tb__DOT__pc_sample__0 
        = vlSelfRef.cpu_tb__DOT__pc_sample;
    vlSelfRef.__Vtrigprevexpr___TOP__cpu_tb__DOT__src_sample__0 
        = vlSelfRef.cpu_tb__DOT__src_sample;
    vlSelfRef.__Vtrigprevexpr___TOP__cpu_tb__DOT__uut__DOT__instr__0 
        = vlSelfRef.cpu_tb__DOT__uut__DOT__instr;
    vlSelfRef.__Vtrigprevexpr___TOP__cpu_tb__DOT__uut__DOT__opcode__0 
        = vlSelfRef.cpu_tb__DOT__uut__DOT__opcode;
    vlSelfRef.__Vtrigprevexpr___TOP__cpu_tb__DOT__rst__0 
        = vlSelfRef.cpu_tb__DOT__rst;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered[0U] = (2ULL | vlSelfRef.__VactTriggered
                                         [0U]);
        vlSelfRef.__VactTriggered[0U] = (4ULL | vlSelfRef.__VactTriggered
                                         [0U]);
        vlSelfRef.__VactTriggered[0U] = (8ULL | vlSelfRef.__VactTriggered
                                         [0U]);
        vlSelfRef.__VactTriggered[0U] = (0x0000000000000010ULL 
                                         | vlSelfRef.__VactTriggered
                                         [0U]);
        vlSelfRef.__VactTriggered[0U] = (0x0000000000000020ULL 
                                         | vlSelfRef.__VactTriggered
                                         [0U]);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcpu_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vcpu_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___trigger_anySet__act\n"); );
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

void Vcpu_tb___024root___nba_sequent__TOP__0(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___nba_sequent__TOP__0\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__cpu_tb__DOT__uut__DOT__pc = vlSelfRef.cpu_tb__DOT__uut__DOT__pc;
    vlSelfRef.__Vdly__cpu_tb__DOT__uut__DOT__pc = ((IData)(vlSelfRef.cpu_tb__DOT__rst)
                                                    ? 0U
                                                    : 
                                                   (0x000000ffU 
                                                    & ((IData)(1U) 
                                                       + (IData)(vlSelfRef.cpu_tb__DOT__uut__DOT__pc))));
}

void Vcpu_tb___024root___nba_sequent__TOP__1(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___nba_sequent__TOP__1\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlyVal__cpu_tb__DOT__uut__DOT__rf__DOT__regs__v0 
        = vlSelfRef.cpu_tb__DOT__uut__DOT__alu_result;
    vlSelfRef.__VdlyDim0__cpu_tb__DOT__uut__DOT__rf__DOT__regs__v0 
        = (7U & ((IData)(vlSelfRef.cpu_tb__DOT__uut__DOT__instr) 
                 >> 5U));
    vlSelfRef.__VdlySet__cpu_tb__DOT__uut__DOT__rf__DOT__regs__v0 = 1U;
}

void Vcpu_tb___024root___nba_sequent__TOP__2(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___nba_sequent__TOP__2\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                      & (1U == vlSymsp->TOP____024unit.__VmonitorNum))))) {
        VL_WRITEF_NX("%0t | %0# | %x | %b| %1# | %1# | %x %x %x %x %x %x %x %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,8,
                     (IData)(vlSelfRef.cpu_tb__DOT__pc_sample),
                     12,vlSelfRef.cpu_tb__DOT__uut__DOT__instr,
                     4,(0x0000000fU & ((IData)(vlSelfRef.cpu_tb__DOT__uut__DOT__instr) 
                                       >> 8U)),3,(IData)(vlSelfRef.cpu_tb__DOT__dest_sample),
                     3,vlSelfRef.cpu_tb__DOT__src_sample,
                     8,vlSelfRef.cpu_tb__DOT__uut__DOT__rf__DOT__regs
                     [0U],8,vlSelfRef.cpu_tb__DOT__uut__DOT__rf__DOT__regs
                     [1U],8,vlSelfRef.cpu_tb__DOT__uut__DOT__rf__DOT__regs
                     [2U],8,vlSelfRef.cpu_tb__DOT__uut__DOT__rf__DOT__regs
                     [3U],8,vlSelfRef.cpu_tb__DOT__uut__DOT__rf__DOT__regs
                     [4U],8,vlSelfRef.cpu_tb__DOT__uut__DOT__rf__DOT__regs
                     [5U],8,vlSelfRef.cpu_tb__DOT__uut__DOT__rf__DOT__regs
                     [6U],8,vlSelfRef.cpu_tb__DOT__uut__DOT__rf__DOT__regs
                     [7U]);
    }
}

void Vcpu_tb___024root___nba_sequent__TOP__3(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___nba_sequent__TOP__3\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__cpu_tb__DOT__uut__DOT__rf__DOT__regs__v0) {
        vlSelfRef.cpu_tb__DOT__uut__DOT__rf__DOT__regs[vlSelfRef.__VdlyDim0__cpu_tb__DOT__uut__DOT__rf__DOT__regs__v0] 
            = vlSelfRef.__VdlyVal__cpu_tb__DOT__uut__DOT__rf__DOT__regs__v0;
    }
    vlSelfRef.cpu_tb__DOT__pc_sample = vlSelfRef.cpu_tb__DOT__uut__DOT__pc;
    vlSelfRef.cpu_tb__DOT__dest_sample = (7U & ((IData)(vlSelfRef.cpu_tb__DOT__uut__DOT__instr) 
                                                >> 5U));
    vlSelfRef.cpu_tb__DOT__src_sample = (7U & ((IData)(vlSelfRef.cpu_tb__DOT__uut__DOT__instr) 
                                               >> 2U));
}

void Vcpu_tb___024root___nba_sequent__TOP__4(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___nba_sequent__TOP__4\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cpu_tb__DOT__uut__DOT__pc = vlSelfRef.__Vdly__cpu_tb__DOT__uut__DOT__pc;
    vlSelfRef.cpu_tb__DOT__uut__DOT__instr = vlSelfRef.cpu_tb__DOT__uut__DOT__mem__DOT__memory
        [vlSelfRef.cpu_tb__DOT__uut__DOT__pc];
    vlSelfRef.cpu_tb__DOT__uut__DOT__opcode = (0x0000000fU 
                                               & ((IData)(vlSelfRef.cpu_tb__DOT__uut__DOT__instr) 
                                                  >> 8U));
}

void Vcpu_tb___024root___nba_comb__TOP__0(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___nba_comb__TOP__0\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cpu_tb__DOT__uut__DOT__sdata = vlSelfRef.cpu_tb__DOT__uut__DOT__rf__DOT__regs
        [(7U & ((IData)(vlSelfRef.cpu_tb__DOT__uut__DOT__instr) 
                >> 2U))];
    vlSelfRef.cpu_tb__DOT__uut__DOT__rdata = vlSelfRef.cpu_tb__DOT__uut__DOT__rf__DOT__regs
        [(7U & ((IData)(vlSelfRef.cpu_tb__DOT__uut__DOT__instr) 
                >> 5U))];
    vlSelfRef.cpu_tb__DOT__uut__DOT__alu_result = (0x000000ffU 
                                                   & ((0x00000800U 
                                                       & (IData)(vlSelfRef.cpu_tb__DOT__uut__DOT__instr))
                                                       ? 
                                                      ((0x00000400U 
                                                        & (IData)(vlSelfRef.cpu_tb__DOT__uut__DOT__instr))
                                                        ? 0U
                                                        : 
                                                       ((0x00000200U 
                                                         & (IData)(vlSelfRef.cpu_tb__DOT__uut__DOT__instr))
                                                         ? 0U
                                                         : 
                                                        ((0x00000100U 
                                                          & (IData)(vlSelfRef.cpu_tb__DOT__uut__DOT__instr))
                                                          ? 
                                                         VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.cpu_tb__DOT__uut__DOT__rdata), 1U)
                                                          : 
                                                         VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.cpu_tb__DOT__uut__DOT__rdata), 1U))))
                                                       : 
                                                      ((0x00000400U 
                                                        & (IData)(vlSelfRef.cpu_tb__DOT__uut__DOT__instr))
                                                        ? 
                                                       ((0x00000200U 
                                                         & (IData)(vlSelfRef.cpu_tb__DOT__uut__DOT__instr))
                                                         ? 
                                                        ((0x00000100U 
                                                          & (IData)(vlSelfRef.cpu_tb__DOT__uut__DOT__instr))
                                                          ? 
                                                         (((IData)(vlSelfRef.cpu_tb__DOT__uut__DOT__rdata) 
                                                           == (IData)(vlSelfRef.cpu_tb__DOT__uut__DOT__sdata))
                                                           ? 1U
                                                           : 0U)
                                                          : 
                                                         (((IData)(vlSelfRef.cpu_tb__DOT__uut__DOT__rdata) 
                                                           > (IData)(vlSelfRef.cpu_tb__DOT__uut__DOT__sdata))
                                                           ? 1U
                                                           : 0U))
                                                         : 
                                                        ((0x00000100U 
                                                          & (IData)(vlSelfRef.cpu_tb__DOT__uut__DOT__instr))
                                                          ? 
                                                         (~ 
                                                          ((IData)(vlSelfRef.cpu_tb__DOT__uut__DOT__rdata) 
                                                           | (IData)(vlSelfRef.cpu_tb__DOT__uut__DOT__sdata)))
                                                          : 
                                                         ((IData)(vlSelfRef.cpu_tb__DOT__uut__DOT__rdata) 
                                                          ^ (IData)(vlSelfRef.cpu_tb__DOT__uut__DOT__sdata))))
                                                        : 
                                                       ((0x00000200U 
                                                         & (IData)(vlSelfRef.cpu_tb__DOT__uut__DOT__instr))
                                                         ? 
                                                        ((0x00000100U 
                                                          & (IData)(vlSelfRef.cpu_tb__DOT__uut__DOT__instr))
                                                          ? 
                                                         ((IData)(vlSelfRef.cpu_tb__DOT__uut__DOT__rdata) 
                                                          | (IData)(vlSelfRef.cpu_tb__DOT__uut__DOT__sdata))
                                                          : 
                                                         ((IData)(vlSelfRef.cpu_tb__DOT__uut__DOT__rdata) 
                                                          & (IData)(vlSelfRef.cpu_tb__DOT__uut__DOT__sdata)))
                                                         : 
                                                        ((0x00000100U 
                                                          & (IData)(vlSelfRef.cpu_tb__DOT__uut__DOT__instr))
                                                          ? 
                                                         ((IData)(vlSelfRef.cpu_tb__DOT__uut__DOT__rdata) 
                                                          - (IData)(vlSelfRef.cpu_tb__DOT__uut__DOT__sdata))
                                                          : 
                                                         ((IData)(vlSelfRef.cpu_tb__DOT__uut__DOT__rdata) 
                                                          + (IData)(vlSelfRef.cpu_tb__DOT__uut__DOT__sdata)))))));
    vlSelfRef.cpu_tb__DOT__uut__DOT__carry = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.cpu_tb__DOT__uut__DOT__instr) 
                  >> 0x0000000bU)))) {
        if ((1U & (~ ((IData)(vlSelfRef.cpu_tb__DOT__uut__DOT__instr) 
                      >> 0x0000000aU)))) {
            if ((1U & (~ ((IData)(vlSelfRef.cpu_tb__DOT__uut__DOT__instr) 
                          >> 9U)))) {
                vlSelfRef.cpu_tb__DOT__uut__DOT__carry 
                    = (1U & ((0x00000100U & (IData)(vlSelfRef.cpu_tb__DOT__uut__DOT__instr))
                              ? (1U & (((IData)(vlSelfRef.cpu_tb__DOT__uut__DOT__rdata) 
                                        - (IData)(vlSelfRef.cpu_tb__DOT__uut__DOT__sdata)) 
                                       >> 8U)) : (1U 
                                                  & (((IData)(vlSelfRef.cpu_tb__DOT__uut__DOT__rdata) 
                                                      + (IData)(vlSelfRef.cpu_tb__DOT__uut__DOT__sdata)) 
                                                     >> 8U))));
            }
        }
    }
}

void Vcpu_tb___024root___eval_nba(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_nba\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000000041ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vcpu_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vcpu_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0x000000000000003eULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vcpu_tb___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vcpu_tb___024root___nba_sequent__TOP__3(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((0x0000000000000041ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vcpu_tb___024root___nba_sequent__TOP__4(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((0x0000000000000041ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vcpu_tb___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
}

void Vcpu_tb___024root___timing_resume(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___timing_resume\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000000080ULL & vlSelfRef.__VactTriggered
         [0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vcpu_tb___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vcpu_tb___024root___eval_phase__act(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_phase__act\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vcpu_tb___024root___eval_triggers__act(vlSelf);
    Vcpu_tb___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vcpu_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Vcpu_tb___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

void Vcpu_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vcpu_tb___024root___eval_phase__nba(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_phase__nba\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vcpu_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vcpu_tb___024root___eval_nba(vlSelf);
        Vcpu_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vcpu_tb___024root___eval(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vcpu_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb/cpu_tb.v", 3, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vcpu_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("tb/cpu_tb.v", 3, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vcpu_tb___024root___eval_phase__act(vlSelf));
    } while (Vcpu_tb___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vcpu_tb___024root___eval_debug_assertions(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_debug_assertions\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
