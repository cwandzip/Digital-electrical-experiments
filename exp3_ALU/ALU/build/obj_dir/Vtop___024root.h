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
    VL_IN8(en,0,0);
    VL_IN8(sw_op,2,0);
    VL_IN8(sw_a,3,0);
    VL_IN8(sw_b,3,0);
    VL_OUT8(led_flag,2,0);
    VL_OUT8(seg0,7,0);
    VL_OUT8(seg1,7,0);
    CData/*3:0*/ top__DOT__res_alu2bcd;
    CData/*0:0*/ top__DOT____Vcellout__ALU0__zero;
    CData/*0:0*/ top__DOT____Vcellout__ALU0__carry;
    CData/*0:0*/ top__DOT____Vcellout__ALU0__overflow;
    CData/*0:0*/ top__DOT__ALU0__DOT__cin;
    CData/*4:0*/ top__DOT__ALU0__DOT__cf_and_res;
    CData/*3:0*/ top__DOT__ALU0__DOT__t_no_cin;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ top__DOT__ALU0__DOT__i;
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
