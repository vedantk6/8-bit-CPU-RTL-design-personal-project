// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_tb.h for the primary calling header

#include "Vcpu_tb__pch.h"

VL_ATTR_COLD void Vcpu_tb___024root___eval_static(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_static\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

VL_ATTR_COLD void Vcpu_tb___024root___eval_initial__TOP(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_initial__TOP\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("Time|PC|Instr|Opcode|Dest|Src|Registers R0-R7\n",0);
    vlSymsp->TOP____024unit.__VmonitorNum = 1U;
    VL_READMEM_N(true, 12, 256, 0, "/root/4bit_cpu/program.mem"s
                 ,  &(vlSelfRef.cpu_tb__DOT__uut__DOT__mem__DOT__memory)
                 , 0, ~0ULL);
    vlSelfRef.cpu_tb__DOT__uut__DOT__rf__DOT__regs[0U] = 0U;
    vlSelfRef.cpu_tb__DOT__uut__DOT__rf__DOT__regs[1U] = 0U;
    vlSelfRef.cpu_tb__DOT__uut__DOT__rf__DOT__regs[2U] = 0U;
    vlSelfRef.cpu_tb__DOT__uut__DOT__rf__DOT__regs[3U] = 0U;
    vlSelfRef.cpu_tb__DOT__uut__DOT__rf__DOT__regs[4U] = 0U;
    vlSelfRef.cpu_tb__DOT__uut__DOT__rf__DOT__regs[5U] = 0U;
    vlSelfRef.cpu_tb__DOT__uut__DOT__rf__DOT__regs[6U] = 0U;
    vlSelfRef.cpu_tb__DOT__uut__DOT__rf__DOT__regs[7U] = 0U;
    vlSelfRef.cpu_tb__DOT__uut__DOT__rf__DOT__i = 8U;
}

VL_ATTR_COLD void Vcpu_tb___024root___eval_final(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_final\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vcpu_tb___024root___eval_phase__stl(Vcpu_tb___024root* vlSelf);

VL_ATTR_COLD void Vcpu_tb___024root___eval_settle(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_settle\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vcpu_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("tb/cpu_tb.v", 3, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vcpu_tb___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vcpu_tb___024root___eval_triggers__stl(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_triggers__stl\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcpu_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vcpu_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vcpu_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vcpu_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vcpu_tb___024root___stl_sequent__TOP__0(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___stl_sequent__TOP__0\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cpu_tb__DOT__uut__DOT__instr = vlSelfRef.cpu_tb__DOT__uut__DOT__mem__DOT__memory
        [vlSelfRef.cpu_tb__DOT__uut__DOT__pc];
    vlSelfRef.cpu_tb__DOT__uut__DOT__opcode = (0x0000000fU 
                                               & ((IData)(vlSelfRef.cpu_tb__DOT__uut__DOT__instr) 
                                                  >> 8U));
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

VL_ATTR_COLD void Vcpu_tb___024root____Vm_traceActivitySetAll(Vcpu_tb___024root* vlSelf);

VL_ATTR_COLD void Vcpu_tb___024root___eval_stl(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_stl\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vcpu_tb___024root___stl_sequent__TOP__0(vlSelf);
        Vcpu_tb___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vcpu_tb___024root___eval_phase__stl(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_phase__stl\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vcpu_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vcpu_tb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vcpu_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vcpu_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vcpu_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge cpu_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @( cpu_tb.dest_sample)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @( cpu_tb.pc_sample)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @( cpu_tb.src_sample)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @( cpu_tb.uut.instr)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @( cpu_tb.uut.opcode)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @(posedge cpu_tb.rst)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 7 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcpu_tb___024root____Vm_traceActivitySetAll(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root____Vm_traceActivitySetAll\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
}

VL_ATTR_COLD void Vcpu_tb___024root___ctor_var_reset(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___ctor_var_reset\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->cpu_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5729153853397715463ull);
    vlSelf->cpu_tb__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11012557873277913936ull);
    vlSelf->cpu_tb__DOT__pc_sample = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8734239502650010862ull);
    vlSelf->cpu_tb__DOT__dest_sample = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17862325123099448392ull);
    vlSelf->cpu_tb__DOT__src_sample = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15026268432437667169ull);
    vlSelf->cpu_tb__DOT__uut__DOT__pc = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14642175564803471473ull);
    vlSelf->cpu_tb__DOT__uut__DOT__instr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 14767139088176618236ull);
    vlSelf->cpu_tb__DOT__uut__DOT__opcode = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5236096982551056287ull);
    vlSelf->cpu_tb__DOT__uut__DOT__rdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3922189444967272916ull);
    vlSelf->cpu_tb__DOT__uut__DOT__sdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2104372953421348632ull);
    vlSelf->cpu_tb__DOT__uut__DOT__alu_result = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16429791471034937953ull);
    vlSelf->cpu_tb__DOT__uut__DOT__carry = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10703452950350832792ull);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->cpu_tb__DOT__uut__DOT__mem__DOT__memory[__Vi0] = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 234814572813675392ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->cpu_tb__DOT__uut__DOT__rf__DOT__regs[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7552033737152335878ull);
    }
    vlSelf->cpu_tb__DOT__uut__DOT__rf__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7846526218100161254ull);
    vlSelf->__Vdly__cpu_tb__DOT__uut__DOT__pc = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12770991140000233363ull);
    vlSelf->__VdlyVal__cpu_tb__DOT__uut__DOT__rf__DOT__regs__v0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4526744587015052446ull);
    vlSelf->__VdlyDim0__cpu_tb__DOT__uut__DOT__rf__DOT__regs__v0 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15016897194301515272ull);
    vlSelf->__VdlySet__cpu_tb__DOT__uut__DOT__rf__DOT__regs__v0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__cpu_tb__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7758402960855881928ull);
    vlSelf->__Vtrigprevexpr___TOP__cpu_tb__DOT__dest_sample__0 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9050624336341064182ull);
    vlSelf->__Vtrigprevexpr___TOP__cpu_tb__DOT__pc_sample__0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16669416303434380640ull);
    vlSelf->__Vtrigprevexpr___TOP__cpu_tb__DOT__src_sample__0 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13433235364437590385ull);
    vlSelf->__Vtrigprevexpr___TOP__cpu_tb__DOT__uut__DOT__instr__0 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 11432521649676021637ull);
    vlSelf->__Vtrigprevexpr___TOP__cpu_tb__DOT__uut__DOT__opcode__0 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12793640613733822789ull);
    vlSelf->__Vtrigprevexpr___TOP__cpu_tb__DOT__rst__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12560738087831066905ull);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
