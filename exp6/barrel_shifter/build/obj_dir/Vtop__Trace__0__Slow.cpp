// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+29,"AorL", false,-1);
    tracep->declBit(c+30,"LorR", false,-1);
    tracep->declBus(c+31,"shamt", false,-1, 2,0);
    tracep->declBus(c+32,"din", false,-1, 7,0);
    tracep->declBus(c+33,"dout", false,-1, 7,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+29,"AorL", false,-1);
    tracep->declBit(c+30,"LorR", false,-1);
    tracep->declBus(c+31,"shamt", false,-1, 2,0);
    tracep->declBus(c+32,"din", false,-1, 7,0);
    tracep->declBus(c+33,"dout", false,-1, 7,0);
    tracep->declBit(c+42,"zero", false,-1);
    tracep->declBit(c+1,"mux21out", false,-1);
    tracep->declBit(c+2,"a0out", false,-1);
    tracep->declBit(c+3,"a1out", false,-1);
    tracep->declBit(c+4,"a2out", false,-1);
    tracep->declBit(c+5,"a3out", false,-1);
    tracep->declBit(c+6,"a4out", false,-1);
    tracep->declBit(c+7,"a5out", false,-1);
    tracep->declBit(c+8,"a6out", false,-1);
    tracep->declBit(c+9,"a7out", false,-1);
    tracep->declBit(c+10,"b0out", false,-1);
    tracep->declBit(c+11,"b1out", false,-1);
    tracep->declBit(c+12,"b2out", false,-1);
    tracep->declBit(c+13,"b3out", false,-1);
    tracep->declBit(c+14,"b4out", false,-1);
    tracep->declBit(c+15,"b5out", false,-1);
    tracep->declBit(c+16,"b6out", false,-1);
    tracep->declBit(c+17,"b7out", false,-1);
    tracep->pushNamePrefix("a0 ");
    tracep->declBus(c+18,"sel", false,-1, 1,0);
    tracep->declBit(c+34,"x0", false,-1);
    tracep->declBit(c+35,"x1", false,-1);
    tracep->declBit(c+34,"x2", false,-1);
    tracep->declBit(c+42,"x3", false,-1);
    tracep->declBit(c+2,"y", false,-1);
    tracep->declBit(c+2,"data_y", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("a1 ");
    tracep->declBus(c+18,"sel", false,-1, 1,0);
    tracep->declBit(c+35,"x0", false,-1);
    tracep->declBit(c+36,"x1", false,-1);
    tracep->declBit(c+35,"x2", false,-1);
    tracep->declBit(c+34,"x3", false,-1);
    tracep->declBit(c+3,"y", false,-1);
    tracep->declBit(c+3,"data_y", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("a2 ");
    tracep->declBus(c+18,"sel", false,-1, 1,0);
    tracep->declBit(c+36,"x0", false,-1);
    tracep->declBit(c+37,"x1", false,-1);
    tracep->declBit(c+36,"x2", false,-1);
    tracep->declBit(c+35,"x3", false,-1);
    tracep->declBit(c+4,"y", false,-1);
    tracep->declBit(c+4,"data_y", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("a3 ");
    tracep->declBus(c+18,"sel", false,-1, 1,0);
    tracep->declBit(c+37,"x0", false,-1);
    tracep->declBit(c+38,"x1", false,-1);
    tracep->declBit(c+37,"x2", false,-1);
    tracep->declBit(c+36,"x3", false,-1);
    tracep->declBit(c+5,"y", false,-1);
    tracep->declBit(c+5,"data_y", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("a4 ");
    tracep->declBus(c+18,"sel", false,-1, 1,0);
    tracep->declBit(c+38,"x0", false,-1);
    tracep->declBit(c+39,"x1", false,-1);
    tracep->declBit(c+38,"x2", false,-1);
    tracep->declBit(c+37,"x3", false,-1);
    tracep->declBit(c+6,"y", false,-1);
    tracep->declBit(c+6,"data_y", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("a5 ");
    tracep->declBus(c+18,"sel", false,-1, 1,0);
    tracep->declBit(c+39,"x0", false,-1);
    tracep->declBit(c+40,"x1", false,-1);
    tracep->declBit(c+39,"x2", false,-1);
    tracep->declBit(c+38,"x3", false,-1);
    tracep->declBit(c+7,"y", false,-1);
    tracep->declBit(c+7,"data_y", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("a6 ");
    tracep->declBus(c+18,"sel", false,-1, 1,0);
    tracep->declBit(c+40,"x0", false,-1);
    tracep->declBit(c+41,"x1", false,-1);
    tracep->declBit(c+40,"x2", false,-1);
    tracep->declBit(c+39,"x3", false,-1);
    tracep->declBit(c+8,"y", false,-1);
    tracep->declBit(c+8,"data_y", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("a7 ");
    tracep->declBus(c+18,"sel", false,-1, 1,0);
    tracep->declBit(c+41,"x0", false,-1);
    tracep->declBit(c+1,"x1", false,-1);
    tracep->declBit(c+41,"x2", false,-1);
    tracep->declBit(c+40,"x3", false,-1);
    tracep->declBit(c+9,"y", false,-1);
    tracep->declBit(c+9,"data_y", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b0 ");
    tracep->declBus(c+19,"sel", false,-1, 1,0);
    tracep->declBit(c+2,"x0", false,-1);
    tracep->declBit(c+4,"x1", false,-1);
    tracep->declBit(c+2,"x2", false,-1);
    tracep->declBit(c+42,"x3", false,-1);
    tracep->declBit(c+10,"y", false,-1);
    tracep->declBit(c+10,"data_y", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b1 ");
    tracep->declBus(c+19,"sel", false,-1, 1,0);
    tracep->declBit(c+3,"x0", false,-1);
    tracep->declBit(c+5,"x1", false,-1);
    tracep->declBit(c+3,"x2", false,-1);
    tracep->declBit(c+42,"x3", false,-1);
    tracep->declBit(c+11,"y", false,-1);
    tracep->declBit(c+11,"data_y", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b2 ");
    tracep->declBus(c+19,"sel", false,-1, 1,0);
    tracep->declBit(c+4,"x0", false,-1);
    tracep->declBit(c+6,"x1", false,-1);
    tracep->declBit(c+4,"x2", false,-1);
    tracep->declBit(c+2,"x3", false,-1);
    tracep->declBit(c+12,"y", false,-1);
    tracep->declBit(c+12,"data_y", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b3 ");
    tracep->declBus(c+19,"sel", false,-1, 1,0);
    tracep->declBit(c+5,"x0", false,-1);
    tracep->declBit(c+7,"x1", false,-1);
    tracep->declBit(c+5,"x2", false,-1);
    tracep->declBit(c+3,"x3", false,-1);
    tracep->declBit(c+13,"y", false,-1);
    tracep->declBit(c+13,"data_y", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b4 ");
    tracep->declBus(c+19,"sel", false,-1, 1,0);
    tracep->declBit(c+6,"x0", false,-1);
    tracep->declBit(c+8,"x1", false,-1);
    tracep->declBit(c+6,"x2", false,-1);
    tracep->declBit(c+4,"x3", false,-1);
    tracep->declBit(c+14,"y", false,-1);
    tracep->declBit(c+14,"data_y", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b5 ");
    tracep->declBus(c+19,"sel", false,-1, 1,0);
    tracep->declBit(c+7,"x0", false,-1);
    tracep->declBit(c+9,"x1", false,-1);
    tracep->declBit(c+7,"x2", false,-1);
    tracep->declBit(c+5,"x3", false,-1);
    tracep->declBit(c+15,"y", false,-1);
    tracep->declBit(c+15,"data_y", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b6 ");
    tracep->declBus(c+19,"sel", false,-1, 1,0);
    tracep->declBit(c+8,"x0", false,-1);
    tracep->declBit(c+1,"x1", false,-1);
    tracep->declBit(c+8,"x2", false,-1);
    tracep->declBit(c+6,"x3", false,-1);
    tracep->declBit(c+16,"y", false,-1);
    tracep->declBit(c+16,"data_y", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b7 ");
    tracep->declBus(c+19,"sel", false,-1, 1,0);
    tracep->declBit(c+9,"x0", false,-1);
    tracep->declBit(c+1,"x1", false,-1);
    tracep->declBit(c+9,"x2", false,-1);
    tracep->declBit(c+7,"x3", false,-1);
    tracep->declBit(c+17,"y", false,-1);
    tracep->declBit(c+17,"data_y", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("c0 ");
    tracep->declBus(c+20,"sel", false,-1, 1,0);
    tracep->declBit(c+10,"x0", false,-1);
    tracep->declBit(c+14,"x1", false,-1);
    tracep->declBit(c+10,"x2", false,-1);
    tracep->declBit(c+42,"x3", false,-1);
    tracep->declBit(c+21,"y", false,-1);
    tracep->declBit(c+21,"data_y", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("c1 ");
    tracep->declBus(c+20,"sel", false,-1, 1,0);
    tracep->declBit(c+11,"x0", false,-1);
    tracep->declBit(c+15,"x1", false,-1);
    tracep->declBit(c+11,"x2", false,-1);
    tracep->declBit(c+42,"x3", false,-1);
    tracep->declBit(c+22,"y", false,-1);
    tracep->declBit(c+22,"data_y", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("c2 ");
    tracep->declBus(c+20,"sel", false,-1, 1,0);
    tracep->declBit(c+12,"x0", false,-1);
    tracep->declBit(c+16,"x1", false,-1);
    tracep->declBit(c+12,"x2", false,-1);
    tracep->declBit(c+42,"x3", false,-1);
    tracep->declBit(c+23,"y", false,-1);
    tracep->declBit(c+23,"data_y", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("c3 ");
    tracep->declBus(c+20,"sel", false,-1, 1,0);
    tracep->declBit(c+13,"x0", false,-1);
    tracep->declBit(c+17,"x1", false,-1);
    tracep->declBit(c+13,"x2", false,-1);
    tracep->declBit(c+42,"x3", false,-1);
    tracep->declBit(c+24,"y", false,-1);
    tracep->declBit(c+24,"data_y", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("c4 ");
    tracep->declBus(c+20,"sel", false,-1, 1,0);
    tracep->declBit(c+14,"x0", false,-1);
    tracep->declBit(c+1,"x1", false,-1);
    tracep->declBit(c+14,"x2", false,-1);
    tracep->declBit(c+10,"x3", false,-1);
    tracep->declBit(c+25,"y", false,-1);
    tracep->declBit(c+25,"data_y", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("c5 ");
    tracep->declBus(c+20,"sel", false,-1, 1,0);
    tracep->declBit(c+15,"x0", false,-1);
    tracep->declBit(c+1,"x1", false,-1);
    tracep->declBit(c+15,"x2", false,-1);
    tracep->declBit(c+11,"x3", false,-1);
    tracep->declBit(c+26,"y", false,-1);
    tracep->declBit(c+26,"data_y", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("c6 ");
    tracep->declBus(c+20,"sel", false,-1, 1,0);
    tracep->declBit(c+16,"x0", false,-1);
    tracep->declBit(c+1,"x1", false,-1);
    tracep->declBit(c+16,"x2", false,-1);
    tracep->declBit(c+42,"x3", false,-1);
    tracep->declBit(c+27,"y", false,-1);
    tracep->declBit(c+27,"data_y", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("c7 ");
    tracep->declBus(c+20,"sel", false,-1, 1,0);
    tracep->declBit(c+17,"x0", false,-1);
    tracep->declBit(c+1,"x1", false,-1);
    tracep->declBit(c+17,"x2", false,-1);
    tracep->declBit(c+17,"x3", false,-1);
    tracep->declBit(c+28,"y", false,-1);
    tracep->declBit(c+28,"data_y", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux21_0 ");
    tracep->declBit(c+29,"sel", false,-1);
    tracep->declBit(c+41,"x1", false,-1);
    tracep->declBit(c+42,"x0", false,-1);
    tracep->declBit(c+1,"y", false,-1);
    tracep->declBit(c+1,"data_y", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->top__DOT__mux21_0__DOT__data_y));
    bufp->fullBit(oldp+2,(vlSelf->top__DOT__a0__DOT__data_y));
    bufp->fullBit(oldp+3,(vlSelf->top__DOT__a1__DOT__data_y));
    bufp->fullBit(oldp+4,(vlSelf->top__DOT__a2__DOT__data_y));
    bufp->fullBit(oldp+5,(vlSelf->top__DOT__a3__DOT__data_y));
    bufp->fullBit(oldp+6,(vlSelf->top__DOT__a4__DOT__data_y));
    bufp->fullBit(oldp+7,(vlSelf->top__DOT__a5__DOT__data_y));
    bufp->fullBit(oldp+8,(vlSelf->top__DOT__a6__DOT__data_y));
    bufp->fullBit(oldp+9,(vlSelf->top__DOT__a7__DOT__data_y));
    bufp->fullBit(oldp+10,(vlSelf->top__DOT__b0__DOT__data_y));
    bufp->fullBit(oldp+11,(vlSelf->top__DOT__b1__DOT__data_y));
    bufp->fullBit(oldp+12,(((2U & (IData)(vlSelf->top__DOT____Vcellinp__b0__sel))
                             ? ((1U & (IData)(vlSelf->top__DOT____Vcellinp__b0__sel))
                                 ? (IData)(vlSelf->top__DOT__a0__DOT__data_y)
                                 : (IData)(vlSelf->top__DOT__a2__DOT__data_y))
                             : ((1U & (IData)(vlSelf->top__DOT____Vcellinp__b0__sel))
                                 ? (IData)(vlSelf->top__DOT__a4__DOT__data_y)
                                 : (IData)(vlSelf->top__DOT__a2__DOT__data_y)))));
    bufp->fullBit(oldp+13,(((2U & (IData)(vlSelf->top__DOT____Vcellinp__b0__sel))
                             ? ((1U & (IData)(vlSelf->top__DOT____Vcellinp__b0__sel))
                                 ? (IData)(vlSelf->top__DOT__a1__DOT__data_y)
                                 : (IData)(vlSelf->top__DOT__a3__DOT__data_y))
                             : ((1U & (IData)(vlSelf->top__DOT____Vcellinp__b0__sel))
                                 ? (IData)(vlSelf->top__DOT__a5__DOT__data_y)
                                 : (IData)(vlSelf->top__DOT__a3__DOT__data_y)))));
    bufp->fullBit(oldp+14,(vlSelf->top__DOT__b4__DOT__data_y));
    bufp->fullBit(oldp+15,(vlSelf->top__DOT__b5__DOT__data_y));
    bufp->fullBit(oldp+16,(vlSelf->top__DOT__b6__DOT__data_y));
    bufp->fullBit(oldp+17,(vlSelf->top__DOT__b7__DOT__data_y));
    bufp->fullCData(oldp+18,(vlSelf->top__DOT____Vcellinp__a0__sel),2);
    bufp->fullCData(oldp+19,(vlSelf->top__DOT____Vcellinp__b0__sel),2);
    bufp->fullCData(oldp+20,(vlSelf->top__DOT____Vcellinp__c0__sel),2);
    bufp->fullBit(oldp+21,(((2U & (IData)(vlSelf->top__DOT____Vcellinp__c0__sel))
                             ? ((~ (IData)(vlSelf->top__DOT____Vcellinp__c0__sel)) 
                                & (IData)(vlSelf->top__DOT__b0__DOT__data_y))
                             : ((1U & (IData)(vlSelf->top__DOT____Vcellinp__c0__sel))
                                 ? (IData)(vlSelf->top__DOT__b4__DOT__data_y)
                                 : (IData)(vlSelf->top__DOT__b0__DOT__data_y)))));
    bufp->fullBit(oldp+22,(((2U & (IData)(vlSelf->top__DOT____Vcellinp__c0__sel))
                             ? ((~ (IData)(vlSelf->top__DOT____Vcellinp__c0__sel)) 
                                & (IData)(vlSelf->top__DOT__b1__DOT__data_y))
                             : ((1U & (IData)(vlSelf->top__DOT____Vcellinp__c0__sel))
                                 ? (IData)(vlSelf->top__DOT__b5__DOT__data_y)
                                 : (IData)(vlSelf->top__DOT__b1__DOT__data_y)))));
    bufp->fullBit(oldp+23,(((2U & (IData)(vlSelf->top__DOT____Vcellinp__c0__sel))
                             ? ((~ (IData)(vlSelf->top__DOT____Vcellinp__c0__sel)) 
                                & ((2U & (IData)(vlSelf->top__DOT____Vcellinp__b0__sel))
                                    ? ((1U & (IData)(vlSelf->top__DOT____Vcellinp__b0__sel))
                                        ? (IData)(vlSelf->top__DOT__a0__DOT__data_y)
                                        : (IData)(vlSelf->top__DOT__a2__DOT__data_y))
                                    : ((1U & (IData)(vlSelf->top__DOT____Vcellinp__b0__sel))
                                        ? (IData)(vlSelf->top__DOT__a4__DOT__data_y)
                                        : (IData)(vlSelf->top__DOT__a2__DOT__data_y))))
                             : ((1U & (IData)(vlSelf->top__DOT____Vcellinp__c0__sel))
                                 ? (IData)(vlSelf->top__DOT__b6__DOT__data_y)
                                 : ((2U & (IData)(vlSelf->top__DOT____Vcellinp__b0__sel))
                                     ? ((1U & (IData)(vlSelf->top__DOT____Vcellinp__b0__sel))
                                         ? (IData)(vlSelf->top__DOT__a0__DOT__data_y)
                                         : (IData)(vlSelf->top__DOT__a2__DOT__data_y))
                                     : ((1U & (IData)(vlSelf->top__DOT____Vcellinp__b0__sel))
                                         ? (IData)(vlSelf->top__DOT__a4__DOT__data_y)
                                         : (IData)(vlSelf->top__DOT__a2__DOT__data_y)))))));
    bufp->fullBit(oldp+24,(((2U & (IData)(vlSelf->top__DOT____Vcellinp__c0__sel))
                             ? ((~ (IData)(vlSelf->top__DOT____Vcellinp__c0__sel)) 
                                & ((2U & (IData)(vlSelf->top__DOT____Vcellinp__b0__sel))
                                    ? ((1U & (IData)(vlSelf->top__DOT____Vcellinp__b0__sel))
                                        ? (IData)(vlSelf->top__DOT__a1__DOT__data_y)
                                        : (IData)(vlSelf->top__DOT__a3__DOT__data_y))
                                    : ((1U & (IData)(vlSelf->top__DOT____Vcellinp__b0__sel))
                                        ? (IData)(vlSelf->top__DOT__a5__DOT__data_y)
                                        : (IData)(vlSelf->top__DOT__a3__DOT__data_y))))
                             : ((1U & (IData)(vlSelf->top__DOT____Vcellinp__c0__sel))
                                 ? (IData)(vlSelf->top__DOT__b7__DOT__data_y)
                                 : ((2U & (IData)(vlSelf->top__DOT____Vcellinp__b0__sel))
                                     ? ((1U & (IData)(vlSelf->top__DOT____Vcellinp__b0__sel))
                                         ? (IData)(vlSelf->top__DOT__a1__DOT__data_y)
                                         : (IData)(vlSelf->top__DOT__a3__DOT__data_y))
                                     : ((1U & (IData)(vlSelf->top__DOT____Vcellinp__b0__sel))
                                         ? (IData)(vlSelf->top__DOT__a5__DOT__data_y)
                                         : (IData)(vlSelf->top__DOT__a3__DOT__data_y)))))));
    bufp->fullBit(oldp+25,(((2U & (IData)(vlSelf->top__DOT____Vcellinp__c0__sel))
                             ? ((1U & (IData)(vlSelf->top__DOT____Vcellinp__c0__sel))
                                 ? (IData)(vlSelf->top__DOT__b0__DOT__data_y)
                                 : (IData)(vlSelf->top__DOT__b4__DOT__data_y))
                             : ((1U & (IData)(vlSelf->top__DOT____Vcellinp__c0__sel))
                                 ? (IData)(vlSelf->top__DOT__mux21_0__DOT__data_y)
                                 : (IData)(vlSelf->top__DOT__b4__DOT__data_y)))));
    bufp->fullBit(oldp+26,(((2U & (IData)(vlSelf->top__DOT____Vcellinp__c0__sel))
                             ? ((1U & (IData)(vlSelf->top__DOT____Vcellinp__c0__sel))
                                 ? (IData)(vlSelf->top__DOT__b1__DOT__data_y)
                                 : (IData)(vlSelf->top__DOT__b5__DOT__data_y))
                             : ((1U & (IData)(vlSelf->top__DOT____Vcellinp__c0__sel))
                                 ? (IData)(vlSelf->top__DOT__mux21_0__DOT__data_y)
                                 : (IData)(vlSelf->top__DOT__b5__DOT__data_y)))));
    bufp->fullBit(oldp+27,(((2U & (IData)(vlSelf->top__DOT____Vcellinp__c0__sel))
                             ? ((~ (IData)(vlSelf->top__DOT____Vcellinp__c0__sel)) 
                                & (IData)(vlSelf->top__DOT__b6__DOT__data_y))
                             : ((1U & (IData)(vlSelf->top__DOT____Vcellinp__c0__sel))
                                 ? (IData)(vlSelf->top__DOT__mux21_0__DOT__data_y)
                                 : (IData)(vlSelf->top__DOT__b6__DOT__data_y)))));
    bufp->fullBit(oldp+28,(((2U & (IData)(vlSelf->top__DOT____Vcellinp__c0__sel))
                             ? (IData)(vlSelf->top__DOT__b7__DOT__data_y)
                             : ((1U & (IData)(vlSelf->top__DOT____Vcellinp__c0__sel))
                                 ? (IData)(vlSelf->top__DOT__mux21_0__DOT__data_y)
                                 : (IData)(vlSelf->top__DOT__b7__DOT__data_y)))));
    bufp->fullBit(oldp+29,(vlSelf->AorL));
    bufp->fullBit(oldp+30,(vlSelf->LorR));
    bufp->fullCData(oldp+31,(vlSelf->shamt),3);
    bufp->fullCData(oldp+32,(vlSelf->din),8);
    bufp->fullCData(oldp+33,(vlSelf->dout),8);
    bufp->fullBit(oldp+34,((1U & (IData)(vlSelf->din))));
    bufp->fullBit(oldp+35,((1U & ((IData)(vlSelf->din) 
                                  >> 1U))));
    bufp->fullBit(oldp+36,((1U & ((IData)(vlSelf->din) 
                                  >> 2U))));
    bufp->fullBit(oldp+37,((1U & ((IData)(vlSelf->din) 
                                  >> 3U))));
    bufp->fullBit(oldp+38,((1U & ((IData)(vlSelf->din) 
                                  >> 4U))));
    bufp->fullBit(oldp+39,((1U & ((IData)(vlSelf->din) 
                                  >> 5U))));
    bufp->fullBit(oldp+40,((1U & ((IData)(vlSelf->din) 
                                  >> 6U))));
    bufp->fullBit(oldp+41,((1U & ((IData)(vlSelf->din) 
                                  >> 7U))));
    bufp->fullBit(oldp+42,(0U));
}
