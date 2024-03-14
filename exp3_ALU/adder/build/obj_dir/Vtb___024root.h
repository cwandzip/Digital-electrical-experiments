// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb.h for the primary calling header

#ifndef VERILATED_VTB___024ROOT_H_
#define VERILATED_VTB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"

class Vtb__Syms;

class Vtb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*3:0*/ tb__DOT__in_a;
    CData/*3:0*/ tb__DOT__in_b;
    CData/*0:0*/ tb__DOT__Cin;
    CData/*0:0*/ tb__DOT__Carry;
    CData/*0:0*/ tb__DOT__Overflow;
    CData/*3:0*/ tb__DOT__Result;
    CData/*4:0*/ tb__DOT__unnamedblk1__DOT__k;
    CData/*0:0*/ tb__DOT__unnamedblk1__DOT__of;
    CData/*0:0*/ tb__DOT__unnamedblk1__DOT__z;
    CData/*0:0*/ tb__DOT__unnamedblk1__DOT__c;
    CData/*4:0*/ tb__DOT__unnamedblk1__DOT__i;
    CData/*4:0*/ tb__DOT__unnamedblk1__DOT__j;
    CData/*3:0*/ tb__DOT__adder0__DOT__t_no_Cin;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb___024root(Vtb__Syms* symsp, const char* v__name);
    ~Vtb___024root();
    VL_UNCOPYABLE(Vtb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
