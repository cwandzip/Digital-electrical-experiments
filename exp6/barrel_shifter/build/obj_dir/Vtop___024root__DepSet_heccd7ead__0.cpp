// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->top__DOT____Vcellinp__c0__sel = (((IData)(vlSelf->LorR) 
                                              << 1U) 
                                             | (1U 
                                                & ((IData)(vlSelf->shamt) 
                                                   >> 2U)));
    if (vlSelf->AorL) {
        if (vlSelf->AorL) {
            vlSelf->top__DOT__mux21_0__DOT__data_y 
                = (1U & ((IData)(vlSelf->din) >> 7U));
        }
    } else {
        vlSelf->top__DOT__mux21_0__DOT__data_y = 0U;
    }
    vlSelf->top__DOT____Vcellinp__b0__sel = (((IData)(vlSelf->LorR) 
                                              << 1U) 
                                             | (1U 
                                                & ((IData)(vlSelf->shamt) 
                                                   >> 1U)));
    vlSelf->top__DOT____Vcellinp__a0__sel = (((IData)(vlSelf->LorR) 
                                              << 1U) 
                                             | (1U 
                                                & (IData)(vlSelf->shamt)));
    if ((2U & (IData)(vlSelf->top__DOT____Vcellinp__a0__sel))) {
        vlSelf->top__DOT__a0__DOT__data_y = (1U & (
                                                   (~ (IData)(vlSelf->top__DOT____Vcellinp__a0__sel)) 
                                                   & (IData)(vlSelf->din)));
        if ((1U & (IData)(vlSelf->top__DOT____Vcellinp__a0__sel))) {
            vlSelf->top__DOT__a1__DOT__data_y = (1U 
                                                 & (IData)(vlSelf->din));
            vlSelf->top__DOT__a6__DOT__data_y = (1U 
                                                 & ((IData)(vlSelf->din) 
                                                    >> 5U));
            vlSelf->top__DOT__a7__DOT__data_y = (1U 
                                                 & ((IData)(vlSelf->din) 
                                                    >> 6U));
            vlSelf->top__DOT__a2__DOT__data_y = (1U 
                                                 & ((IData)(vlSelf->din) 
                                                    >> 1U));
            vlSelf->top__DOT__a3__DOT__data_y = (1U 
                                                 & ((IData)(vlSelf->din) 
                                                    >> 2U));
            vlSelf->top__DOT__a4__DOT__data_y = (1U 
                                                 & ((IData)(vlSelf->din) 
                                                    >> 3U));
            vlSelf->top__DOT__a5__DOT__data_y = (1U 
                                                 & ((IData)(vlSelf->din) 
                                                    >> 4U));
        } else {
            vlSelf->top__DOT__a1__DOT__data_y = (1U 
                                                 & ((IData)(vlSelf->din) 
                                                    >> 1U));
            vlSelf->top__DOT__a6__DOT__data_y = (1U 
                                                 & ((IData)(vlSelf->din) 
                                                    >> 6U));
            vlSelf->top__DOT__a7__DOT__data_y = (1U 
                                                 & ((IData)(vlSelf->din) 
                                                    >> 7U));
            vlSelf->top__DOT__a2__DOT__data_y = (1U 
                                                 & ((IData)(vlSelf->din) 
                                                    >> 2U));
            vlSelf->top__DOT__a3__DOT__data_y = (1U 
                                                 & ((IData)(vlSelf->din) 
                                                    >> 3U));
            vlSelf->top__DOT__a4__DOT__data_y = (1U 
                                                 & ((IData)(vlSelf->din) 
                                                    >> 4U));
            vlSelf->top__DOT__a5__DOT__data_y = (1U 
                                                 & ((IData)(vlSelf->din) 
                                                    >> 5U));
        }
    } else if ((1U & (IData)(vlSelf->top__DOT____Vcellinp__a0__sel))) {
        vlSelf->top__DOT__a0__DOT__data_y = (1U & ((IData)(vlSelf->din) 
                                                   >> 1U));
        vlSelf->top__DOT__a1__DOT__data_y = (1U & ((IData)(vlSelf->din) 
                                                   >> 2U));
        vlSelf->top__DOT__a6__DOT__data_y = (1U & ((IData)(vlSelf->din) 
                                                   >> 7U));
        vlSelf->top__DOT__a7__DOT__data_y = (1U & (IData)(vlSelf->top__DOT__mux21_0__DOT__data_y));
        vlSelf->top__DOT__a2__DOT__data_y = (1U & ((IData)(vlSelf->din) 
                                                   >> 3U));
        vlSelf->top__DOT__a3__DOT__data_y = (1U & ((IData)(vlSelf->din) 
                                                   >> 4U));
        vlSelf->top__DOT__a4__DOT__data_y = (1U & ((IData)(vlSelf->din) 
                                                   >> 5U));
        vlSelf->top__DOT__a5__DOT__data_y = (1U & ((IData)(vlSelf->din) 
                                                   >> 6U));
    } else {
        vlSelf->top__DOT__a0__DOT__data_y = (1U & (IData)(vlSelf->din));
        vlSelf->top__DOT__a1__DOT__data_y = (1U & ((IData)(vlSelf->din) 
                                                   >> 1U));
        vlSelf->top__DOT__a6__DOT__data_y = (1U & ((IData)(vlSelf->din) 
                                                   >> 6U));
        vlSelf->top__DOT__a7__DOT__data_y = (1U & ((IData)(vlSelf->din) 
                                                   >> 7U));
        vlSelf->top__DOT__a2__DOT__data_y = (1U & ((IData)(vlSelf->din) 
                                                   >> 2U));
        vlSelf->top__DOT__a3__DOT__data_y = (1U & ((IData)(vlSelf->din) 
                                                   >> 3U));
        vlSelf->top__DOT__a4__DOT__data_y = (1U & ((IData)(vlSelf->din) 
                                                   >> 4U));
        vlSelf->top__DOT__a5__DOT__data_y = (1U & ((IData)(vlSelf->din) 
                                                   >> 5U));
    }
    if ((2U & (IData)(vlSelf->top__DOT____Vcellinp__b0__sel))) {
        vlSelf->top__DOT__b0__DOT__data_y = ((~ (IData)(vlSelf->top__DOT____Vcellinp__b0__sel)) 
                                             & (IData)(vlSelf->top__DOT__a0__DOT__data_y));
        vlSelf->top__DOT__b1__DOT__data_y = ((~ (IData)(vlSelf->top__DOT____Vcellinp__b0__sel)) 
                                             & (IData)(vlSelf->top__DOT__a1__DOT__data_y));
        if ((1U & (IData)(vlSelf->top__DOT____Vcellinp__b0__sel))) {
            vlSelf->top__DOT__b4__DOT__data_y = vlSelf->top__DOT__a2__DOT__data_y;
            vlSelf->top__DOT__b6__DOT__data_y = vlSelf->top__DOT__a4__DOT__data_y;
            vlSelf->top__DOT__b5__DOT__data_y = vlSelf->top__DOT__a3__DOT__data_y;
            vlSelf->top__DOT__b7__DOT__data_y = vlSelf->top__DOT__a5__DOT__data_y;
        } else {
            vlSelf->top__DOT__b4__DOT__data_y = vlSelf->top__DOT__a4__DOT__data_y;
            vlSelf->top__DOT__b6__DOT__data_y = vlSelf->top__DOT__a6__DOT__data_y;
            vlSelf->top__DOT__b5__DOT__data_y = vlSelf->top__DOT__a5__DOT__data_y;
            vlSelf->top__DOT__b7__DOT__data_y = vlSelf->top__DOT__a7__DOT__data_y;
        }
    } else if ((1U & (IData)(vlSelf->top__DOT____Vcellinp__b0__sel))) {
        vlSelf->top__DOT__b0__DOT__data_y = vlSelf->top__DOT__a2__DOT__data_y;
        vlSelf->top__DOT__b1__DOT__data_y = vlSelf->top__DOT__a3__DOT__data_y;
        vlSelf->top__DOT__b4__DOT__data_y = vlSelf->top__DOT__a6__DOT__data_y;
        vlSelf->top__DOT__b6__DOT__data_y = vlSelf->top__DOT__mux21_0__DOT__data_y;
        vlSelf->top__DOT__b5__DOT__data_y = vlSelf->top__DOT__a7__DOT__data_y;
        vlSelf->top__DOT__b7__DOT__data_y = vlSelf->top__DOT__mux21_0__DOT__data_y;
    } else {
        vlSelf->top__DOT__b0__DOT__data_y = vlSelf->top__DOT__a0__DOT__data_y;
        vlSelf->top__DOT__b1__DOT__data_y = vlSelf->top__DOT__a1__DOT__data_y;
        vlSelf->top__DOT__b4__DOT__data_y = vlSelf->top__DOT__a4__DOT__data_y;
        vlSelf->top__DOT__b6__DOT__data_y = vlSelf->top__DOT__a6__DOT__data_y;
        vlSelf->top__DOT__b5__DOT__data_y = vlSelf->top__DOT__a5__DOT__data_y;
        vlSelf->top__DOT__b7__DOT__data_y = vlSelf->top__DOT__a7__DOT__data_y;
    }
    vlSelf->dout = ((((2U & (IData)(vlSelf->top__DOT____Vcellinp__c0__sel))
                       ? (IData)(vlSelf->top__DOT__b7__DOT__data_y)
                       : ((1U & (IData)(vlSelf->top__DOT____Vcellinp__c0__sel))
                           ? (IData)(vlSelf->top__DOT__mux21_0__DOT__data_y)
                           : (IData)(vlSelf->top__DOT__b7__DOT__data_y))) 
                     << 7U) | ((((2U & (IData)(vlSelf->top__DOT____Vcellinp__c0__sel))
                                  ? ((~ (IData)(vlSelf->top__DOT____Vcellinp__c0__sel)) 
                                     & (IData)(vlSelf->top__DOT__b6__DOT__data_y))
                                  : ((1U & (IData)(vlSelf->top__DOT____Vcellinp__c0__sel))
                                      ? (IData)(vlSelf->top__DOT__mux21_0__DOT__data_y)
                                      : (IData)(vlSelf->top__DOT__b6__DOT__data_y))) 
                                << 6U) | ((((2U & (IData)(vlSelf->top__DOT____Vcellinp__c0__sel))
                                             ? ((1U 
                                                 & (IData)(vlSelf->top__DOT____Vcellinp__c0__sel))
                                                 ? (IData)(vlSelf->top__DOT__b1__DOT__data_y)
                                                 : (IData)(vlSelf->top__DOT__b5__DOT__data_y))
                                             : ((1U 
                                                 & (IData)(vlSelf->top__DOT____Vcellinp__c0__sel))
                                                 ? (IData)(vlSelf->top__DOT__mux21_0__DOT__data_y)
                                                 : (IData)(vlSelf->top__DOT__b5__DOT__data_y))) 
                                           << 5U) | 
                                          ((((2U & (IData)(vlSelf->top__DOT____Vcellinp__c0__sel))
                                              ? ((1U 
                                                  & (IData)(vlSelf->top__DOT____Vcellinp__c0__sel))
                                                  ? (IData)(vlSelf->top__DOT__b0__DOT__data_y)
                                                  : (IData)(vlSelf->top__DOT__b4__DOT__data_y))
                                              : ((1U 
                                                  & (IData)(vlSelf->top__DOT____Vcellinp__c0__sel))
                                                  ? (IData)(vlSelf->top__DOT__mux21_0__DOT__data_y)
                                                  : (IData)(vlSelf->top__DOT__b4__DOT__data_y))) 
                                            << 4U) 
                                           | ((((2U 
                                                 & (IData)(vlSelf->top__DOT____Vcellinp__c0__sel))
                                                 ? 
                                                ((~ (IData)(vlSelf->top__DOT____Vcellinp__c0__sel)) 
                                                 & ((2U 
                                                     & (IData)(vlSelf->top__DOT____Vcellinp__b0__sel))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->top__DOT____Vcellinp__b0__sel))
                                                      ? (IData)(vlSelf->top__DOT__a1__DOT__data_y)
                                                      : (IData)(vlSelf->top__DOT__a3__DOT__data_y))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->top__DOT____Vcellinp__b0__sel))
                                                      ? (IData)(vlSelf->top__DOT__a5__DOT__data_y)
                                                      : (IData)(vlSelf->top__DOT__a3__DOT__data_y))))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->top__DOT____Vcellinp__c0__sel))
                                                  ? (IData)(vlSelf->top__DOT__b7__DOT__data_y)
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->top__DOT____Vcellinp__b0__sel))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT____Vcellinp__b0__sel))
                                                    ? (IData)(vlSelf->top__DOT__a1__DOT__data_y)
                                                    : (IData)(vlSelf->top__DOT__a3__DOT__data_y))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT____Vcellinp__b0__sel))
                                                    ? (IData)(vlSelf->top__DOT__a5__DOT__data_y)
                                                    : (IData)(vlSelf->top__DOT__a3__DOT__data_y))))) 
                                               << 3U) 
                                              | ((((2U 
                                                    & (IData)(vlSelf->top__DOT____Vcellinp__c0__sel))
                                                    ? 
                                                   ((~ (IData)(vlSelf->top__DOT____Vcellinp__c0__sel)) 
                                                    & ((2U 
                                                        & (IData)(vlSelf->top__DOT____Vcellinp__b0__sel))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->top__DOT____Vcellinp__b0__sel))
                                                         ? (IData)(vlSelf->top__DOT__a0__DOT__data_y)
                                                         : (IData)(vlSelf->top__DOT__a2__DOT__data_y))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->top__DOT____Vcellinp__b0__sel))
                                                         ? (IData)(vlSelf->top__DOT__a4__DOT__data_y)
                                                         : (IData)(vlSelf->top__DOT__a2__DOT__data_y))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT____Vcellinp__c0__sel))
                                                     ? (IData)(vlSelf->top__DOT__b6__DOT__data_y)
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT____Vcellinp__b0__sel))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT____Vcellinp__b0__sel))
                                                       ? (IData)(vlSelf->top__DOT__a0__DOT__data_y)
                                                       : (IData)(vlSelf->top__DOT__a2__DOT__data_y))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT____Vcellinp__b0__sel))
                                                       ? (IData)(vlSelf->top__DOT__a4__DOT__data_y)
                                                       : (IData)(vlSelf->top__DOT__a2__DOT__data_y))))) 
                                                  << 2U) 
                                                 | ((((2U 
                                                       & (IData)(vlSelf->top__DOT____Vcellinp__c0__sel))
                                                       ? 
                                                      ((~ (IData)(vlSelf->top__DOT____Vcellinp__c0__sel)) 
                                                       & (IData)(vlSelf->top__DOT__b1__DOT__data_y))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->top__DOT____Vcellinp__c0__sel))
                                                        ? (IData)(vlSelf->top__DOT__b5__DOT__data_y)
                                                        : (IData)(vlSelf->top__DOT__b1__DOT__data_y))) 
                                                     << 1U) 
                                                    | ((2U 
                                                        & (IData)(vlSelf->top__DOT____Vcellinp__c0__sel))
                                                        ? 
                                                       ((~ (IData)(vlSelf->top__DOT____Vcellinp__c0__sel)) 
                                                        & (IData)(vlSelf->top__DOT__b0__DOT__data_y))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->top__DOT____Vcellinp__c0__sel))
                                                         ? (IData)(vlSelf->top__DOT__b4__DOT__data_y)
                                                         : (IData)(vlSelf->top__DOT__b0__DOT__data_y))))))))));
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
                VL_FATAL_MT("/home/lhjysyx/DigitalCircuitsExperiments/exp4/barrel_shifter/vsrc/top.v", 1, "", "Input combinational region did not converge.");
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
                    VL_FATAL_MT("/home/lhjysyx/DigitalCircuitsExperiments/exp4/barrel_shifter/vsrc/top.v", 1, "", "Active region did not converge.");
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
                VL_FATAL_MT("/home/lhjysyx/DigitalCircuitsExperiments/exp4/barrel_shifter/vsrc/top.v", 1, "", "NBA region did not converge.");
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
    if (VL_UNLIKELY((vlSelf->shamt & 0xf8U))) {
        Verilated::overWidthError("shamt");}
    if (VL_UNLIKELY((vlSelf->AorL & 0xfeU))) {
        Verilated::overWidthError("AorL");}
    if (VL_UNLIKELY((vlSelf->LorR & 0xfeU))) {
        Verilated::overWidthError("LorR");}
}
#endif  // VL_DEBUG
