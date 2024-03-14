// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    // Body
    Vtop___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->top__DOT__process_data__DOT__curdata = 0U;
    vlSelf->top__DOT__process_data__DOT__predata = 0U;
    vlSelf->top__DOT__seg45__DOT__cnt_t = 0U;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__o_ready = vlSelf->o_ready;
    vlSelf->__Vtrigrprev__TOP__top__DOT__sig_Release 
        = vlSelf->top__DOT__sig_Release;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list[0U] = 0x1aU;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list[1U] = 0x35U;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list[2U] = 0x22U;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list[3U] = 0x1dU;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list[4U] = 0x2aU;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list[5U] = 0x3cU;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list[6U] = 0x2cU;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list[7U] = 0x1bU;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list[8U] = 0x2dU;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list[9U] = 0x15U;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list[0xaU] = 0x4dU;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list[0xbU] = 0x44U;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list[0xcU] = 0x31U;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list[0xdU] = 0x3aU;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list[0xeU] = 0x4bU;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list[0xfU] = 0x42U;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list[0x10U] = 0x3bU;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list[0x11U] = 0x43U;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list[0x12U] = 0x33U;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list[0x13U] = 0x34U;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list[0x14U] = 0x2bU;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list[0x15U] = 0x24U;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list[0x16U] = 0x23U;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list[0x17U] = 0x21U;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list[0x18U] = 0x32U;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list[0x19U] = 0x1cU;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list[0x1aU] = 0x45U;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list[0x1bU] = 0x46U;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list[0x1cU] = 0x3eU;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list[0x1dU] = 0x3dU;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list[0x1eU] = 0x36U;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list[0x1fU] = 0x2eU;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list[0x20U] = 0x25U;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list[0x21U] = 0x26U;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list[0x22U] = 0x1eU;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list[0x23U] = 0x16U;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list[0U] = 0x7aU;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list[1U] = 0x79U;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list[2U] = 0x78U;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list[3U] = 0x77U;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list[4U] = 0x76U;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list[5U] = 0x75U;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list[6U] = 0x74U;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list[7U] = 0x73U;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list[8U] = 0x72U;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list[9U] = 0x71U;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list[0xaU] = 0x70U;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list[0xbU] = 0x6fU;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list[0xcU] = 0x6eU;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list[0xdU] = 0x6dU;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list[0xeU] = 0x6cU;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list[0xfU] = 0x6bU;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list[0x10U] = 0x6aU;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list[0x11U] = 0x69U;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list[0x12U] = 0x68U;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list[0x13U] = 0x67U;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list[0x14U] = 0x66U;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list[0x15U] = 0x65U;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list[0x16U] = 0x64U;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list[0x17U] = 0x63U;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list[0x18U] = 0x62U;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list[0x19U] = 0x61U;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list[0x1aU] = 0x30U;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list[0x1bU] = 0x39U;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list[0x1cU] = 0x38U;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list[0x1dU] = 0x37U;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list[0x1eU] = 0x36U;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list[0x1fU] = 0x35U;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list[0x20U] = 0x34U;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list[0x21U] = 0x33U;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list[0x22U] = 0x32U;
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list[0x23U] = 0x31U;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtop___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/lhjysyx/DigitalCircuitsExperiments/exp7/keyboard/vsrc/top.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtop___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*7:0*/, 16> Vtop__ConstPool__TABLE_h3c5508f7_0;

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*3:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*3:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*3:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*3:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    // Body
    vlSelf->o_ready = vlSelf->top__DOT__ready;
    vlSelf->o_overflow = vlSelf->top__DOT__overflow;
    __Vtableidx1 = (0xfU & (IData)(vlSelf->top__DOT__seg01__DOT__code_t));
    vlSelf->o_seg0 = Vtop__ConstPool__TABLE_h3c5508f7_0
        [__Vtableidx1];
    __Vtableidx2 = (0xfU & ((IData)(vlSelf->top__DOT__seg01__DOT__code_t) 
                            >> 4U));
    vlSelf->o_seg1 = Vtop__ConstPool__TABLE_h3c5508f7_0
        [__Vtableidx2];
    __Vtableidx3 = (0xfU & (IData)(vlSelf->top__DOT__seg23__DOT__ascii_t));
    vlSelf->o_seg2 = Vtop__ConstPool__TABLE_h3c5508f7_0
        [__Vtableidx3];
    __Vtableidx4 = (0xfU & ((IData)(vlSelf->top__DOT__seg23__DOT__ascii_t) 
                            >> 4U));
    vlSelf->o_seg3 = Vtop__ConstPool__TABLE_h3c5508f7_0
        [__Vtableidx4];
    __Vtableidx5 = (0xfU & (IData)(vlSelf->top__DOT__seg45__DOT__cnt_t));
    vlSelf->o_seg4 = Vtop__ConstPool__TABLE_h3c5508f7_0
        [__Vtableidx5];
    __Vtableidx6 = (0xfU & ((IData)(vlSelf->top__DOT__seg45__DOT__cnt_t) 
                            >> 4U));
    vlSelf->o_seg5 = Vtop__ConstPool__TABLE_h3c5508f7_0
        [__Vtableidx6];
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
                       == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit 
        = ((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
           == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
                          == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit) 
           | ((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
              == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
                          == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit) 
           | ((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
              == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
                          == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit) 
           | ((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
              == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
                          == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit) 
           | ((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
              == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
                          == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit) 
           | ((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
              == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
                          == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit) 
           | ((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
              == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
                          == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit) 
           | ((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
              == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
                          == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit) 
           | ((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
              == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
                          == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
                          [9U]))) & vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit) 
           | ((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
              == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
                          == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
                          [0xaU]))) & vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit) 
           | ((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
              == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
                          == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
                          [0xbU]))) & vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit) 
           | ((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
              == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
                          == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
                          [0xcU]))) & vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit) 
           | ((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
              == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
                          == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
                          [0xdU]))) & vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit) 
           | ((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
              == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
                          == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
                          [0xeU]))) & vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit) 
           | ((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
              == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
                          == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
                          [0xfU]))) & vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit) 
           | ((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
              == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
                          == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
                          [0x10U]))) & vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list
              [0x10U]));
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit) 
           | ((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
              == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
              [0x10U]));
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
                          == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
                          [0x11U]))) & vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list
              [0x11U]));
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit) 
           | ((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
              == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
              [0x11U]));
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
                          == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
                          [0x12U]))) & vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list
              [0x12U]));
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit) 
           | ((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
              == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
              [0x12U]));
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
                          == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
                          [0x13U]))) & vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list
              [0x13U]));
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit) 
           | ((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
              == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
              [0x13U]));
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
                          == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
                          [0x14U]))) & vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list
              [0x14U]));
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit) 
           | ((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
              == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
              [0x14U]));
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
                          == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
                          [0x15U]))) & vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list
              [0x15U]));
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit) 
           | ((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
              == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
              [0x15U]));
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
                          == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
                          [0x16U]))) & vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list
              [0x16U]));
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit) 
           | ((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
              == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
              [0x16U]));
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
                          == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
                          [0x17U]))) & vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list
              [0x17U]));
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit) 
           | ((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
              == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
              [0x17U]));
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
                          == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
                          [0x18U]))) & vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list
              [0x18U]));
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit) 
           | ((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
              == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
              [0x18U]));
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
                          == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
                          [0x19U]))) & vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list
              [0x19U]));
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit) 
           | ((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
              == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
              [0x19U]));
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
                          == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
                          [0x1aU]))) & vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list
              [0x1aU]));
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit) 
           | ((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
              == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
              [0x1aU]));
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
                          == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
                          [0x1bU]))) & vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list
              [0x1bU]));
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit) 
           | ((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
              == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
              [0x1bU]));
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
                          == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
                          [0x1cU]))) & vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list
              [0x1cU]));
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit) 
           | ((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
              == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
              [0x1cU]));
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
                          == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
                          [0x1dU]))) & vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list
              [0x1dU]));
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit) 
           | ((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
              == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
              [0x1dU]));
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
                          == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
                          [0x1eU]))) & vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list
              [0x1eU]));
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit) 
           | ((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
              == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
              [0x1eU]));
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
                          == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
                          [0x1fU]))) & vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list
              [0x1fU]));
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit) 
           | ((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
              == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
              [0x1fU]));
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
                          == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
                          [0x20U]))) & vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list
              [0x20U]));
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit) 
           | ((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
              == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
              [0x20U]));
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
                          == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
                          [0x21U]))) & vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list
              [0x21U]));
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit) 
           | ((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
              == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
              [0x21U]));
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
                          == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
                          [0x22U]))) & vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list
              [0x22U]));
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit) 
           | ((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
              == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
              [0x22U]));
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
                          == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
                          [0x23U]))) & vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list
              [0x23U]));
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit) 
           | ((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer) 
              == vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list
              [0x23U]));
    vlSelf->top__DOT__to_segascii = ((IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit)
                                      ? (IData)(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out)
                                      : 0U);
}

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge o_ready)\n");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge top.sig_Release)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge o_ready)\n");
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge top.sig_Release)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->ps2_clk = VL_RAND_RESET_I(1);
    vlSelf->ps2_data = VL_RAND_RESET_I(1);
    vlSelf->clrn = VL_RAND_RESET_I(1);
    vlSelf->o_seg0 = VL_RAND_RESET_I(8);
    vlSelf->o_seg1 = VL_RAND_RESET_I(8);
    vlSelf->o_seg2 = VL_RAND_RESET_I(8);
    vlSelf->o_seg3 = VL_RAND_RESET_I(8);
    vlSelf->o_seg4 = VL_RAND_RESET_I(8);
    vlSelf->o_seg5 = VL_RAND_RESET_I(8);
    vlSelf->o_ready = VL_RAND_RESET_I(1);
    vlSelf->o_overflow = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__overflow = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__to_segascii = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__sig_Release = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__recv_data__DOT__buffer = VL_RAND_RESET_I(10);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top__DOT__recv_data__DOT__fifo[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__recv_data__DOT__w_ptr = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__recv_data__DOT__r_ptr = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__recv_data__DOT__count = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__recv_data__DOT__ps2_clk_sync = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__recv_data__DOT____Vlvbound_h1a91ade8__0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__process_data__DOT__data_buffer = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__process_data__DOT__curdata = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__process_data__DOT__predata = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 36; ++__Vi0) {
        vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 36; ++__Vi0) {
        vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__seg01__DOT__code_t = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__seg23__DOT__ascii_t = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__seg45__DOT__cnt_t = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__top__DOT__recv_data__DOT__r_ptr = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvdim0__top__DOT__recv_data__DOT__fifo__v0 = 0;
    vlSelf->__Vdlyvval__top__DOT__recv_data__DOT__fifo__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__top__DOT__recv_data__DOT__fifo__v0 = 0;
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__o_ready = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__top__DOT__sig_Release = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
