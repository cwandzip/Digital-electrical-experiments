// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmux241.h for the primary calling header

#ifndef VERILATED_VMUX241___024ROOT_H_
#define VERILATED_VMUX241___024ROOT_H_  // guard

#include "verilated.h"

class Vmux241__Syms;

class Vmux241___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(Y,1,0);
    VL_IN8(X0,1,0);
    VL_IN8(X1,1,0);
    VL_IN8(X2,1,0);
    VL_IN8(X3,1,0);
    VL_OUT8(F,1,0);
    CData/*1:0*/ mux241__DOT__i0__DOT__i0__DOT__lut_out;
    CData/*0:0*/ mux241__DOT__i0__DOT__i0__DOT__hit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*3:0*/, 4> mux241__DOT__i0__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*1:0*/, 4> mux241__DOT__i0__DOT__i0__DOT__key_list;
    VlUnpacked<CData/*1:0*/, 4> mux241__DOT__i0__DOT__i0__DOT__data_list;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vmux241__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmux241___024root(Vmux241__Syms* symsp, const char* v__name);
    ~Vmux241___024root();
    VL_UNCOPYABLE(Vmux241___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
