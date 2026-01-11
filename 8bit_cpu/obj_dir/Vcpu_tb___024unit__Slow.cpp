// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_tb.h for the primary calling header

#include "Vcpu_tb__pch.h"

void Vcpu_tb___024unit___ctor_var_reset(Vcpu_tb___024unit* vlSelf);

Vcpu_tb___024unit::Vcpu_tb___024unit(Vcpu_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcpu_tb___024unit___ctor_var_reset(this);
}

void Vcpu_tb___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcpu_tb___024unit::~Vcpu_tb___024unit() {
}
