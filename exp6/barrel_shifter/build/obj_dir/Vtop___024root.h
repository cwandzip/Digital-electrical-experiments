// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(din,7,0);
    VL_IN8(shamt,2,0);
    VL_IN8(AorL,0,0);
    VL_IN8(LorR,0,0);
    VL_OUT8(dout,7,0);
    CData/*1:0*/ top__DOT____Vcellinp__a0__sel;
    CData/*1:0*/ top__DOT____Vcellinp__b0__sel;
    CData/*1:0*/ top__DOT____Vcellinp__c0__sel;
    CData/*0:0*/ top__DOT__mux21_0__DOT__data_y;
    CData/*0:0*/ top__DOT__a0__DOT__data_y;
    CData/*0:0*/ top__DOT__a1__DOT__data_y;
    CData/*0:0*/ top__DOT__a2__DOT__data_y;
    CData/*0:0*/ top__DOT__a3__DOT__data_y;
    CData/*0:0*/ top__DOT__a4__DOT__data_y;
    CData/*0:0*/ top__DOT__a5__DOT__data_y;
    CData/*0:0*/ top__DOT__a6__DOT__data_y;
    CData/*0:0*/ top__DOT__a7__DOT__data_y;
    CData/*0:0*/ top__DOT__b0__DOT__data_y;
    CData/*0:0*/ top__DOT__b1__DOT__data_y;
    CData/*0:0*/ top__DOT__b4__DOT__data_y;
    CData/*0:0*/ top__DOT__b5__DOT__data_y;
    CData/*0:0*/ top__DOT__b6__DOT__data_y;
    CData/*0:0*/ top__DOT__b7__DOT__data_y;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
