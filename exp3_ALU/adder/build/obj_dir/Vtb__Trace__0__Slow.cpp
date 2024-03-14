// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb__Syms.h"


VL_ATTR_COLD void Vtb___024root__trace_init_sub__TOP__0(Vtb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("tb ");
    tracep->declBus(c+1,"in_a", false,-1, 3,0);
    tracep->declBus(c+2,"in_b", false,-1, 3,0);
    tracep->declBit(c+3,"Cin", false,-1);
    tracep->declBit(c+10,"Carry", false,-1);
    tracep->declBit(c+11,"Zero", false,-1);
    tracep->declBit(c+12,"Overflow", false,-1);
    tracep->declBus(c+13,"Result", false,-1, 3,0);
    tracep->pushNamePrefix("adder0 ");
    tracep->declBus(c+1,"in_a", false,-1, 3,0);
    tracep->declBus(c+2,"in_b", false,-1, 3,0);
    tracep->declBit(c+3,"Cin", false,-1);
    tracep->declBit(c+10,"Carry", false,-1);
    tracep->declBit(c+11,"Zero", false,-1);
    tracep->declBit(c+12,"Overflow", false,-1);
    tracep->declBus(c+13,"Result", false,-1, 3,0);
    tracep->declBus(c+14,"t_no_Cin", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+4,"k", false,-1, 4,0);
    tracep->declBit(c+5,"of", false,-1);
    tracep->declBit(c+6,"z", false,-1);
    tracep->declBit(c+7,"c", false,-1);
    tracep->declBus(c+8,"i", false,-1, 4,0);
    tracep->declBus(c+9,"j", false,-1, 4,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtb___024root__trace_init_top(Vtb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_init_top\n"); );
    // Body
    Vtb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb___024root__trace_register(Vtb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtb___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtb___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb___024root__trace_full_sub_0(Vtb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_full_top_0\n"); );
    // Init
    Vtb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb___024root*>(voidSelf);
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb___024root__trace_full_sub_0(Vtb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->tb__DOT__in_a),4);
    bufp->fullCData(oldp+2,(vlSelf->tb__DOT__in_b),4);
    bufp->fullBit(oldp+3,(vlSelf->tb__DOT__Cin));
    bufp->fullCData(oldp+4,(vlSelf->tb__DOT__unnamedblk1__DOT__k),5);
    bufp->fullBit(oldp+5,(vlSelf->tb__DOT__unnamedblk1__DOT__of));
    bufp->fullBit(oldp+6,(vlSelf->tb__DOT__unnamedblk1__DOT__z));
    bufp->fullBit(oldp+7,(vlSelf->tb__DOT__unnamedblk1__DOT__c));
    bufp->fullCData(oldp+8,(vlSelf->tb__DOT__unnamedblk1__DOT__i),5);
    bufp->fullCData(oldp+9,(vlSelf->tb__DOT__unnamedblk1__DOT__j),5);
    bufp->fullBit(oldp+10,((1U & (((IData)(vlSelf->tb__DOT__in_a) 
                                   + ((IData)(vlSelf->tb__DOT__adder0__DOT__t_no_Cin) 
                                      + (IData)(vlSelf->tb__DOT__Cin))) 
                                  >> 4U))));
    bufp->fullBit(oldp+11,((1U & (~ (IData)((0U != 
                                             (0xfU 
                                              & ((IData)(vlSelf->tb__DOT__in_a) 
                                                 + 
                                                 ((IData)(vlSelf->tb__DOT__adder0__DOT__t_no_Cin) 
                                                  + (IData)(vlSelf->tb__DOT__Cin))))))))));
    bufp->fullBit(oldp+12,((((1U & ((IData)(vlSelf->tb__DOT__in_a) 
                                    >> 3U)) == (1U 
                                                & ((IData)(vlSelf->tb__DOT__adder0__DOT__t_no_Cin) 
                                                   >> 3U))) 
                            & ((1U & (((IData)(vlSelf->tb__DOT__in_a) 
                                       + ((IData)(vlSelf->tb__DOT__adder0__DOT__t_no_Cin) 
                                          + (IData)(vlSelf->tb__DOT__Cin))) 
                                      >> 3U)) != (1U 
                                                  & ((IData)(vlSelf->tb__DOT__in_a) 
                                                     >> 3U))))));
    bufp->fullCData(oldp+13,((0xfU & ((IData)(vlSelf->tb__DOT__in_a) 
                                      + ((IData)(vlSelf->tb__DOT__adder0__DOT__t_no_Cin) 
                                         + (IData)(vlSelf->tb__DOT__Cin))))),4);
    bufp->fullCData(oldp+14,(vlSelf->tb__DOT__adder0__DOT__t_no_Cin),4);
}
