// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

extern const VlUnpacked<CData/*7:0*/, 16> Vtop__ConstPool__TABLE_h33a98c1b_0;
extern const VlUnpacked<CData/*7:0*/, 16> Vtop__ConstPool__TABLE_h0c7ca8b1_0;

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->top__DOT__ALU0__DOT__cin = 0U;
    vlSelf->top__DOT__ALU0__DOT__cf_and_res = 0U;
    vlSelf->top__DOT__ALU0__DOT__t_no_cin = 0U;
    if (vlSelf->en) {
        if ((1U & (~ ((IData)(vlSelf->sw_op) >> 2U)))) {
            if ((2U & (IData)(vlSelf->sw_op))) {
                if ((1U & (~ (IData)(vlSelf->sw_op)))) {
                    vlSelf->top__DOT__ALU0__DOT__cin = 1U;
                }
            } else {
                vlSelf->top__DOT__ALU0__DOT__cin = 
                    (1U & (IData)(vlSelf->sw_op));
            }
        }
        if ((4U & (IData)(vlSelf->sw_op))) {
            if ((1U & (~ ((IData)(vlSelf->sw_op) >> 1U)))) {
                vlSelf->top__DOT__ALU0__DOT__i = 4U;
            }
            if ((2U & (IData)(vlSelf->sw_op))) {
                if ((1U & (IData)(vlSelf->sw_op))) {
                    vlSelf->top__DOT__res_alu2bcd = 
                        (((IData)(vlSelf->sw_a) == (IData)(vlSelf->sw_b))
                          ? 1U : 0U);
                    vlSelf->top__DOT____Vcellout__ALU0__overflow = 0U;
                    vlSelf->top__DOT____Vcellout__ALU0__carry = 0U;
                    vlSelf->top__DOT____Vcellout__ALU0__zero 
                        = (1U & (~ (IData)((0U != (IData)(vlSelf->top__DOT__res_alu2bcd)))));
                } else {
                    vlSelf->top__DOT__res_alu2bcd = 
                        (((1U & ((IData)(vlSelf->sw_a) 
                                 >> 3U)) > (1U & ((IData)(vlSelf->sw_b) 
                                                  >> 3U)))
                          ? 1U : (((1U & ((IData)(vlSelf->sw_a) 
                                          >> 3U)) < 
                                   (1U & ((IData)(vlSelf->sw_b) 
                                          >> 3U))) ? 0U
                                   : (((7U & (IData)(vlSelf->sw_a)) 
                                       < (7U & (IData)(vlSelf->sw_b)))
                                       ? 1U : 0U)));
                    vlSelf->top__DOT____Vcellout__ALU0__overflow = 0U;
                    vlSelf->top__DOT____Vcellout__ALU0__carry = 0U;
                    vlSelf->top__DOT____Vcellout__ALU0__zero 
                        = (1U & (~ (IData)((0U != (IData)(vlSelf->top__DOT__res_alu2bcd)))));
                }
            } else if ((1U & (IData)(vlSelf->sw_op))) {
                vlSelf->top__DOT____Vcellout__ALU0__overflow = 0U;
                vlSelf->top__DOT____Vcellout__ALU0__carry = 0U;
                vlSelf->top__DOT__res_alu2bcd = ((0xcU 
                                                  & (IData)(vlSelf->top__DOT__res_alu2bcd)) 
                                                 | ((((1U 
                                                       & ((IData)(vlSelf->sw_a) 
                                                          >> 1U)) 
                                                      != 
                                                      (1U 
                                                       & ((IData)(vlSelf->sw_b) 
                                                          >> 1U))) 
                                                     << 1U) 
                                                    | ((1U 
                                                        & (IData)(vlSelf->sw_a)) 
                                                       != 
                                                       (1U 
                                                        & (IData)(vlSelf->sw_b)))));
                vlSelf->top__DOT__res_alu2bcd = ((3U 
                                                  & (IData)(vlSelf->top__DOT__res_alu2bcd)) 
                                                 | ((((1U 
                                                       & ((IData)(vlSelf->sw_a) 
                                                          >> 3U)) 
                                                      != 
                                                      (1U 
                                                       & ((IData)(vlSelf->sw_b) 
                                                          >> 3U))) 
                                                     << 3U) 
                                                    | (((1U 
                                                         & ((IData)(vlSelf->sw_a) 
                                                            >> 2U)) 
                                                        != 
                                                        (1U 
                                                         & ((IData)(vlSelf->sw_b) 
                                                            >> 2U))) 
                                                       << 2U)));
                vlSelf->top__DOT____Vcellout__ALU0__zero 
                    = (1U & (~ (IData)((0U != (IData)(vlSelf->top__DOT__res_alu2bcd)))));
            } else {
                vlSelf->top__DOT__res_alu2bcd = ((IData)(vlSelf->sw_a) 
                                                 | (IData)(vlSelf->sw_b));
                vlSelf->top__DOT____Vcellout__ALU0__overflow = 0U;
                vlSelf->top__DOT____Vcellout__ALU0__carry = 0U;
                vlSelf->top__DOT____Vcellout__ALU0__zero 
                    = (1U & (~ (IData)((0U != (IData)(vlSelf->top__DOT__res_alu2bcd)))));
            }
        } else if ((2U & (IData)(vlSelf->sw_op))) {
            if ((1U & (IData)(vlSelf->sw_op))) {
                vlSelf->top__DOT__ALU0__DOT__i = 4U;
                vlSelf->top__DOT__res_alu2bcd = ((IData)(vlSelf->sw_a) 
                                                 & (IData)(vlSelf->sw_b));
                vlSelf->top__DOT____Vcellout__ALU0__overflow = 0U;
                vlSelf->top__DOT____Vcellout__ALU0__carry = 0U;
                vlSelf->top__DOT____Vcellout__ALU0__zero 
                    = (1U & (~ (IData)((0U != (IData)(vlSelf->top__DOT__res_alu2bcd)))));
            } else {
                vlSelf->top__DOT__res_alu2bcd = (0xfU 
                                                 & (~ (IData)(vlSelf->sw_a)));
                vlSelf->top__DOT____Vcellout__ALU0__overflow = 0U;
                vlSelf->top__DOT____Vcellout__ALU0__carry = 0U;
                vlSelf->top__DOT____Vcellout__ALU0__zero 
                    = (1U & (~ (IData)((0U != (IData)(vlSelf->top__DOT__res_alu2bcd)))));
            }
        } else if ((1U & (IData)(vlSelf->sw_op))) {
            vlSelf->top__DOT__ALU0__DOT__t_no_cin = 
                (0xfU & (~ (IData)(vlSelf->sw_b)));
            vlSelf->top__DOT__ALU0__DOT__cf_and_res 
                = (0x1fU & ((IData)(1U) + ((IData)(vlSelf->sw_a) 
                                           + (IData)(vlSelf->top__DOT__ALU0__DOT__t_no_cin))));
            vlSelf->top__DOT____Vcellout__ALU0__carry 
                = (1U & ((IData)(vlSelf->top__DOT__ALU0__DOT__cf_and_res) 
                         >> 4U));
            vlSelf->top__DOT__res_alu2bcd = (0xfU & (IData)(vlSelf->top__DOT__ALU0__DOT__cf_and_res));
            vlSelf->top__DOT____Vcellout__ALU0__overflow 
                = (((1U & ((IData)(vlSelf->sw_a) >> 3U)) 
                    == (1U & ((IData)(vlSelf->top__DOT__ALU0__DOT__t_no_cin) 
                              >> 3U))) & ((1U & ((IData)(vlSelf->top__DOT__res_alu2bcd) 
                                                 >> 3U)) 
                                          != (1U & 
                                              ((IData)(vlSelf->sw_a) 
                                               >> 3U))));
            vlSelf->top__DOT____Vcellout__ALU0__zero 
                = (1U & (~ (IData)((0U != (IData)(vlSelf->top__DOT__res_alu2bcd)))));
        } else {
            vlSelf->top__DOT__ALU0__DOT__t_no_cin = vlSelf->sw_b;
            vlSelf->top__DOT__ALU0__DOT__cf_and_res 
                = (0x1fU & ((IData)(vlSelf->sw_a) + (IData)(vlSelf->top__DOT__ALU0__DOT__t_no_cin)));
            vlSelf->top__DOT____Vcellout__ALU0__carry 
                = (1U & ((IData)(vlSelf->top__DOT__ALU0__DOT__cf_and_res) 
                         >> 4U));
            vlSelf->top__DOT__res_alu2bcd = (0xfU & (IData)(vlSelf->top__DOT__ALU0__DOT__cf_and_res));
            vlSelf->top__DOT____Vcellout__ALU0__overflow 
                = (((1U & ((IData)(vlSelf->sw_a) >> 3U)) 
                    == (1U & ((IData)(vlSelf->top__DOT__ALU0__DOT__t_no_cin) 
                              >> 3U))) & ((1U & ((IData)(vlSelf->top__DOT__res_alu2bcd) 
                                                 >> 3U)) 
                                          != (1U & 
                                              ((IData)(vlSelf->sw_a) 
                                               >> 3U))));
            vlSelf->top__DOT____Vcellout__ALU0__zero 
                = (1U & (~ (IData)((0U != (IData)(vlSelf->top__DOT__res_alu2bcd)))));
        }
    } else {
        vlSelf->top__DOT____Vcellout__ALU0__overflow = 0U;
        vlSelf->top__DOT____Vcellout__ALU0__carry = 0U;
        vlSelf->top__DOT____Vcellout__ALU0__zero = 0U;
        vlSelf->top__DOT__res_alu2bcd = 0U;
    }
    vlSelf->led_flag = (((IData)(vlSelf->top__DOT____Vcellout__ALU0__overflow) 
                         << 2U) | (((IData)(vlSelf->top__DOT____Vcellout__ALU0__carry) 
                                    << 1U) | (IData)(vlSelf->top__DOT____Vcellout__ALU0__zero)));
    __Vtableidx1 = vlSelf->top__DOT__res_alu2bcd;
    vlSelf->seg1 = Vtop__ConstPool__TABLE_h33a98c1b_0
        [__Vtableidx1];
    vlSelf->seg0 = Vtop__ConstPool__TABLE_h0c7ca8b1_0
        [__Vtableidx1];
}

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
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
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<0> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vtop___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/lhjysyx/DigitalCircuitsExperiments/exp3_ALU/ALU/vsrc/top.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vtop___024root___eval_ico(vlSelf);
        }
    }
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
                    VL_FATAL_MT("/home/lhjysyx/DigitalCircuitsExperiments/exp3_ALU/ALU/vsrc/top.v", 1, "", "Active region did not converge.");
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
                VL_FATAL_MT("/home/lhjysyx/DigitalCircuitsExperiments/exp3_ALU/ALU/vsrc/top.v", 1, "", "NBA region did not converge.");
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
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
    if (VL_UNLIKELY((vlSelf->sw_op & 0xf8U))) {
        Verilated::overWidthError("sw_op");}
    if (VL_UNLIKELY((vlSelf->sw_a & 0xf0U))) {
        Verilated::overWidthError("sw_a");}
    if (VL_UNLIKELY((vlSelf->sw_b & 0xf0U))) {
        Verilated::overWidthError("sw_b");}
}
#endif  // VL_DEBUG
