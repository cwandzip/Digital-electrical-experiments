// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

extern const VlUnpacked<CData/*7:0*/, 16> Vtop__ConstPool__TABLE_h3c5508f7_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*3:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*3:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*2:0*/ __Vdly__top__DOT__recv_data__DOT__ps2_clk_sync;
    __Vdly__top__DOT__recv_data__DOT__ps2_clk_sync = 0;
    CData/*2:0*/ __Vdly__top__DOT__recv_data__DOT__w_ptr;
    __Vdly__top__DOT__recv_data__DOT__w_ptr = 0;
    CData/*3:0*/ __Vdly__top__DOT__recv_data__DOT__count;
    __Vdly__top__DOT__recv_data__DOT__count = 0;
    IData/*23:0*/ __Vdly__top__DOT__process_data__DOT__data_buffer;
    __Vdly__top__DOT__process_data__DOT__data_buffer = 0;
    CData/*0:0*/ __Vdly__top__DOT__sig_Release;
    __Vdly__top__DOT__sig_Release = 0;
    // Body
    __Vdly__top__DOT__recv_data__DOT__ps2_clk_sync 
        = vlSelf->top__DOT__recv_data__DOT__ps2_clk_sync;
    __Vdly__top__DOT__recv_data__DOT__count = vlSelf->top__DOT__recv_data__DOT__count;
    __Vdly__top__DOT__recv_data__DOT__w_ptr = vlSelf->top__DOT__recv_data__DOT__w_ptr;
    vlSelf->__Vdly__top__DOT__recv_data__DOT__r_ptr 
        = vlSelf->top__DOT__recv_data__DOT__r_ptr;
    vlSelf->__Vdlyvset__top__DOT__recv_data__DOT__fifo__v0 = 0U;
    __Vdly__top__DOT__sig_Release = vlSelf->top__DOT__sig_Release;
    __Vdly__top__DOT__process_data__DOT__data_buffer 
        = vlSelf->top__DOT__process_data__DOT__data_buffer;
    __Vdly__top__DOT__recv_data__DOT__ps2_clk_sync 
        = ((6U & ((IData)(vlSelf->top__DOT__recv_data__DOT__ps2_clk_sync) 
                  << 1U)) | (IData)(vlSelf->ps2_clk));
    if (vlSelf->clrn) {
        if (vlSelf->top__DOT__ready) {
            vlSelf->__Vdly__top__DOT__recv_data__DOT__r_ptr 
                = (7U & ((IData)(1U) + (IData)(vlSelf->top__DOT__recv_data__DOT__r_ptr)));
            if (((IData)(vlSelf->top__DOT__recv_data__DOT__w_ptr) 
                 == (7U & ((IData)(1U) + (IData)(vlSelf->top__DOT__recv_data__DOT__r_ptr))))) {
                vlSelf->top__DOT__ready = 0U;
            }
        }
        if ((IData)((4U == (6U & (IData)(vlSelf->top__DOT__recv_data__DOT__ps2_clk_sync))))) {
            if ((0xaU == (IData)(vlSelf->top__DOT__recv_data__DOT__count))) {
                if ((((~ (IData)(vlSelf->top__DOT__recv_data__DOT__buffer)) 
                      & (IData)(vlSelf->ps2_data)) 
                     & VL_REDXOR_32((0x1ffU & ((IData)(vlSelf->top__DOT__recv_data__DOT__buffer) 
                                               >> 1U))))) {
                    vlSelf->__Vdlyvval__top__DOT__recv_data__DOT__fifo__v0 
                        = (0xffU & ((IData)(vlSelf->top__DOT__recv_data__DOT__buffer) 
                                    >> 1U));
                    vlSelf->__Vdlyvset__top__DOT__recv_data__DOT__fifo__v0 = 1U;
                    vlSelf->__Vdlyvdim0__top__DOT__recv_data__DOT__fifo__v0 
                        = vlSelf->top__DOT__recv_data__DOT__w_ptr;
                    vlSelf->top__DOT__ready = 1U;
                    __Vdly__top__DOT__recv_data__DOT__w_ptr 
                        = (7U & ((IData)(1U) + (IData)(vlSelf->top__DOT__recv_data__DOT__w_ptr)));
                    vlSelf->top__DOT__overflow = ((IData)(vlSelf->top__DOT__overflow) 
                                                  | ((IData)(vlSelf->top__DOT__recv_data__DOT__r_ptr) 
                                                     == 
                                                     (7U 
                                                      & ((IData)(1U) 
                                                         + (IData)(vlSelf->top__DOT__recv_data__DOT__w_ptr)))));
                }
                __Vdly__top__DOT__recv_data__DOT__count = 0U;
            } else {
                vlSelf->top__DOT__recv_data__DOT____Vlvbound_h1a91ade8__0 
                    = vlSelf->ps2_data;
                if ((9U >= (IData)(vlSelf->top__DOT__recv_data__DOT__count))) {
                    vlSelf->top__DOT__recv_data__DOT__buffer 
                        = (((~ ((IData)(1U) << (IData)(vlSelf->top__DOT__recv_data__DOT__count))) 
                            & (IData)(vlSelf->top__DOT__recv_data__DOT__buffer)) 
                           | (0x3ffU & ((IData)(vlSelf->top__DOT__recv_data__DOT____Vlvbound_h1a91ade8__0) 
                                        << (IData)(vlSelf->top__DOT__recv_data__DOT__count))));
                }
                __Vdly__top__DOT__recv_data__DOT__count 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__recv_data__DOT__count)));
            }
        }
    } else {
        __Vdly__top__DOT__recv_data__DOT__count = 0U;
        __Vdly__top__DOT__recv_data__DOT__w_ptr = 0U;
        vlSelf->__Vdly__top__DOT__recv_data__DOT__r_ptr = 0U;
        vlSelf->top__DOT__overflow = 0U;
        vlSelf->top__DOT__ready = 0U;
    }
    if (VL_UNLIKELY(vlSelf->o_ready)) {
        if (((0xf0U == (0xffU & (vlSelf->top__DOT__process_data__DOT__data_buffer 
                                 >> 8U))) | ((IData)(vlSelf->top__DOT__process_data__DOT__curdata) 
                                             != (IData)(vlSelf->top__DOT__process_data__DOT__predata)))) {
            __Vdly__top__DOT__process_data__DOT__data_buffer 
                = ((0xff0000U & (vlSelf->top__DOT__process_data__DOT__data_buffer 
                                 << 8U)) | (((IData)(vlSelf->top__DOT__process_data__DOT__predata) 
                                             << 8U) 
                                            | (IData)(vlSelf->top__DOT__process_data__DOT__curdata)));
        }
        VL_WRITEF("R = %x\n",1,vlSelf->top__DOT__sig_Release);
        __Vdly__top__DOT__sig_Release = 0U;
    } else if (VL_UNLIKELY((0xf0U == (0xffU & (vlSelf->top__DOT__process_data__DOT__data_buffer 
                                               >> 8U))))) {
        VL_WRITEF("R = %x\n",1,vlSelf->top__DOT__sig_Release);
        __Vdly__top__DOT__sig_Release = 1U;
    }
    if (vlSelf->top__DOT__sig_Release) {
        vlSelf->top__DOT__seg23__DOT__ascii_t = 0U;
        vlSelf->top__DOT__seg01__DOT__code_t = 0U;
    } else {
        vlSelf->top__DOT__seg23__DOT__ascii_t = vlSelf->top__DOT__to_segascii;
        vlSelf->top__DOT__seg01__DOT__code_t = (0xffU 
                                                & vlSelf->top__DOT__process_data__DOT__data_buffer);
    }
    vlSelf->top__DOT__recv_data__DOT__ps2_clk_sync 
        = __Vdly__top__DOT__recv_data__DOT__ps2_clk_sync;
    vlSelf->top__DOT__recv_data__DOT__w_ptr = __Vdly__top__DOT__recv_data__DOT__w_ptr;
    vlSelf->top__DOT__recv_data__DOT__count = __Vdly__top__DOT__recv_data__DOT__count;
    vlSelf->top__DOT__sig_Release = __Vdly__top__DOT__sig_Release;
    vlSelf->top__DOT__process_data__DOT__data_buffer 
        = __Vdly__top__DOT__process_data__DOT__data_buffer;
    vlSelf->o_ready = vlSelf->top__DOT__ready;
    vlSelf->o_overflow = vlSelf->top__DOT__overflow;
    __Vtableidx3 = (0xfU & (IData)(vlSelf->top__DOT__seg23__DOT__ascii_t));
    vlSelf->o_seg2 = Vtop__ConstPool__TABLE_h3c5508f7_0
        [__Vtableidx3];
    __Vtableidx4 = (0xfU & ((IData)(vlSelf->top__DOT__seg23__DOT__ascii_t) 
                            >> 4U));
    vlSelf->o_seg3 = Vtop__ConstPool__TABLE_h3c5508f7_0
        [__Vtableidx4];
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
    __Vtableidx1 = (0xfU & (IData)(vlSelf->top__DOT__seg01__DOT__code_t));
    vlSelf->o_seg0 = Vtop__ConstPool__TABLE_h3c5508f7_0
        [__Vtableidx1];
    __Vtableidx2 = (0xfU & ((IData)(vlSelf->top__DOT__seg01__DOT__code_t) 
                            >> 4U));
    vlSelf->o_seg1 = Vtop__ConstPool__TABLE_h3c5508f7_0
        [__Vtableidx2];
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*3:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*3:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    // Body
    vlSelf->top__DOT__seg45__DOT__cnt_t = (0xffU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__seg45__DOT__cnt_t)));
    __Vtableidx5 = (0xfU & (IData)(vlSelf->top__DOT__seg45__DOT__cnt_t));
    vlSelf->o_seg4 = Vtop__ConstPool__TABLE_h3c5508f7_0
        [__Vtableidx5];
    __Vtableidx6 = (0xfU & ((IData)(vlSelf->top__DOT__seg45__DOT__cnt_t) 
                            >> 4U));
    vlSelf->o_seg5 = Vtop__ConstPool__TABLE_h3c5508f7_0
        [__Vtableidx6];
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->top__DOT__process_data__DOT__predata = vlSelf->top__DOT__process_data__DOT__curdata;
    vlSelf->top__DOT__process_data__DOT__curdata = 
        vlSelf->top__DOT__recv_data__DOT__fifo[vlSelf->top__DOT__recv_data__DOT__r_ptr];
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->top__DOT__recv_data__DOT__r_ptr = vlSelf->__Vdly__top__DOT__recv_data__DOT__r_ptr;
    if (vlSelf->__Vdlyvset__top__DOT__recv_data__DOT__fifo__v0) {
        vlSelf->top__DOT__recv_data__DOT__fifo[vlSelf->__Vdlyvdim0__top__DOT__recv_data__DOT__fifo__v0] 
            = vlSelf->__Vdlyvval__top__DOT__recv_data__DOT__fifo__v0;
    }
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtop___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/lhjysyx/DigitalCircuitsExperiments/exp7/keyboard/vsrc/top.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/lhjysyx/DigitalCircuitsExperiments/exp7/keyboard/vsrc/top.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtop___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->ps2_clk & 0xfeU))) {
        Verilated::overWidthError("ps2_clk");}
    if (VL_UNLIKELY((vlSelf->ps2_data & 0xfeU))) {
        Verilated::overWidthError("ps2_data");}
    if (VL_UNLIKELY((vlSelf->clrn & 0xfeU))) {
        Verilated::overWidthError("clrn");}
}
#endif  // VL_DEBUG
