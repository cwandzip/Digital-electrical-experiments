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
    VL_IN8(clk,0,0);
    VL_OUT8(o_ready,0,0);
    CData/*0:0*/ top__DOT__sig_Release;
    VL_IN8(ps2_clk,0,0);
    VL_IN8(ps2_data,0,0);
    VL_IN8(clrn,0,0);
    VL_OUT8(o_seg0,7,0);
    VL_OUT8(o_seg1,7,0);
    VL_OUT8(o_seg2,7,0);
    VL_OUT8(o_seg3,7,0);
    VL_OUT8(o_seg4,7,0);
    VL_OUT8(o_seg5,7,0);
    VL_OUT8(o_overflow,0,0);
    CData/*0:0*/ top__DOT__ready;
    CData/*0:0*/ top__DOT__overflow;
    CData/*7:0*/ top__DOT__to_segascii;
    CData/*2:0*/ top__DOT__recv_data__DOT__w_ptr;
    CData/*2:0*/ top__DOT__recv_data__DOT__r_ptr;
    CData/*3:0*/ top__DOT__recv_data__DOT__count;
    CData/*2:0*/ top__DOT__recv_data__DOT__ps2_clk_sync;
    CData/*0:0*/ top__DOT__recv_data__DOT____Vlvbound_h1a91ade8__0;
    CData/*7:0*/ top__DOT__process_data__DOT__curdata;
    CData/*7:0*/ top__DOT__process_data__DOT__predata;
    CData/*7:0*/ top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out;
    CData/*0:0*/ top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit;
    CData/*7:0*/ top__DOT__seg01__DOT__code_t;
    CData/*7:0*/ top__DOT__seg23__DOT__ascii_t;
    CData/*7:0*/ top__DOT__seg45__DOT__cnt_t;
    CData/*2:0*/ __Vdly__top__DOT__recv_data__DOT__r_ptr;
    CData/*2:0*/ __Vdlyvdim0__top__DOT__recv_data__DOT__fifo__v0;
    CData/*7:0*/ __Vdlyvval__top__DOT__recv_data__DOT__fifo__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__recv_data__DOT__fifo__v0;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __Vtrigrprev__TOP__o_ready;
    CData/*0:0*/ __Vtrigrprev__TOP__top__DOT__sig_Release;
    CData/*0:0*/ __VactContinue;
    SData/*9:0*/ top__DOT__recv_data__DOT__buffer;
    IData/*23:0*/ top__DOT__process_data__DOT__data_buffer;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 8> top__DOT__recv_data__DOT__fifo;
    VlUnpacked<CData/*7:0*/, 36> top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list;
    VlUnpacked<CData/*7:0*/, 36> top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

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
