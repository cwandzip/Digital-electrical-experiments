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
    tracep->declBit(c+6,"clk", false,-1);
    tracep->declBit(c+7,"en", false,-1);
    tracep->declBus(c+8,"in", false,-1, 7,0);
    tracep->declBus(c+9,"out0", false,-1, 7,0);
    tracep->declBus(c+10,"out1", false,-1, 7,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+6,"clk", false,-1);
    tracep->declBit(c+7,"en", false,-1);
    tracep->declBus(c+8,"in", false,-1, 7,0);
    tracep->declBus(c+9,"out0", false,-1, 7,0);
    tracep->declBus(c+10,"out1", false,-1, 7,0);
    tracep->declBus(c+1,"lfsr2bcd", false,-1, 7,0);
    tracep->pushNamePrefix("bcd7seg0 ");
    tracep->declBus(c+2,"num", false,-1, 3,0);
    tracep->declBus(c+9,"bcd", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("bcd7seg1 ");
    tracep->declBus(c+3,"num", false,-1, 3,0);
    tracep->declBus(c+10,"bcd", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lfsr0 ");
    tracep->declBit(c+6,"clk", false,-1);
    tracep->declBit(c+7,"en", false,-1);
    tracep->declBus(c+8,"din", false,-1, 7,0);
    tracep->declBus(c+1,"dout", false,-1, 7,0);
    tracep->declBit(c+4,"h_lfsr", false,-1);
    tracep->declBit(c+5,"allzero", false,-1);
    tracep->declBus(c+1,"lfsrreg", false,-1, 7,0);
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
    bufp->fullCData(oldp+1,(vlSelf->top__DOT__lfsr0__DOT__lfsrreg),8);
    bufp->fullCData(oldp+2,((0xfU & (IData)(vlSelf->top__DOT__lfsr0__DOT__lfsrreg))),4);
    bufp->fullCData(oldp+3,((0xfU & ((IData)(vlSelf->top__DOT__lfsr0__DOT__lfsrreg) 
                                     >> 4U))),4);
    bufp->fullBit(oldp+4,((1U & (VL_REDXOR_8((0x1dU 
                                              & (IData)(vlSelf->top__DOT__lfsr0__DOT__lfsrreg))) 
                                 ^ (~ (IData)((0U != (IData)(vlSelf->top__DOT__lfsr0__DOT__lfsrreg))))))));
    bufp->fullBit(oldp+5,((1U & (~ (IData)((0U != (IData)(vlSelf->top__DOT__lfsr0__DOT__lfsrreg)))))));
    bufp->fullBit(oldp+6,(vlSelf->clk));
    bufp->fullBit(oldp+7,(vlSelf->en));
    bufp->fullCData(oldp+8,(vlSelf->in),8);
    bufp->fullCData(oldp+9,(vlSelf->out0),8);
    bufp->fullCData(oldp+10,(vlSelf->out1),8);
}
