// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb__Syms.h"


void Vtb___024root__trace_chg_sub_0(Vtb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_chg_top_0\n"); );
    // Init
    Vtb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb___024root*>(voidSelf);
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb___024root__trace_chg_sub_0(Vtb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+0,(vlSelf->tb__DOT__in_a),4);
        bufp->chgCData(oldp+1,(vlSelf->tb__DOT__in_b),4);
        bufp->chgBit(oldp+2,(vlSelf->tb__DOT__Cin));
        bufp->chgCData(oldp+3,(vlSelf->tb__DOT__unnamedblk1__DOT__k),5);
        bufp->chgBit(oldp+4,(vlSelf->tb__DOT__unnamedblk1__DOT__of));
        bufp->chgBit(oldp+5,(vlSelf->tb__DOT__unnamedblk1__DOT__z));
        bufp->chgBit(oldp+6,(vlSelf->tb__DOT__unnamedblk1__DOT__c));
        bufp->chgCData(oldp+7,(vlSelf->tb__DOT__unnamedblk1__DOT__i),5);
        bufp->chgCData(oldp+8,(vlSelf->tb__DOT__unnamedblk1__DOT__j),5);
    }
    bufp->chgBit(oldp+9,((1U & (((IData)(vlSelf->tb__DOT__in_a) 
                                 + ((IData)(vlSelf->tb__DOT__adder0__DOT__t_no_Cin) 
                                    + (IData)(vlSelf->tb__DOT__Cin))) 
                                >> 4U))));
    bufp->chgBit(oldp+10,((1U & (~ (IData)((0U != (0xfU 
                                                   & ((IData)(vlSelf->tb__DOT__in_a) 
                                                      + 
                                                      ((IData)(vlSelf->tb__DOT__adder0__DOT__t_no_Cin) 
                                                       + (IData)(vlSelf->tb__DOT__Cin))))))))));
    bufp->chgBit(oldp+11,((((1U & ((IData)(vlSelf->tb__DOT__in_a) 
                                   >> 3U)) == (1U & 
                                               ((IData)(vlSelf->tb__DOT__adder0__DOT__t_no_Cin) 
                                                >> 3U))) 
                           & ((1U & (((IData)(vlSelf->tb__DOT__in_a) 
                                      + ((IData)(vlSelf->tb__DOT__adder0__DOT__t_no_Cin) 
                                         + (IData)(vlSelf->tb__DOT__Cin))) 
                                     >> 3U)) != (1U 
                                                 & ((IData)(vlSelf->tb__DOT__in_a) 
                                                    >> 3U))))));
    bufp->chgCData(oldp+12,((0xfU & ((IData)(vlSelf->tb__DOT__in_a) 
                                     + ((IData)(vlSelf->tb__DOT__adder0__DOT__t_no_Cin) 
                                        + (IData)(vlSelf->tb__DOT__Cin))))),4);
    bufp->chgCData(oldp+13,(vlSelf->tb__DOT__adder0__DOT__t_no_Cin),4);
}

void Vtb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_cleanup\n"); );
    // Init
    Vtb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb___024root*>(voidSelf);
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
