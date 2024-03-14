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
    tracep->declBit(c+9,"en", false,-1);
    tracep->declBus(c+10,"sw_op", false,-1, 2,0);
    tracep->declBus(c+11,"sw_a", false,-1, 3,0);
    tracep->declBus(c+12,"sw_b", false,-1, 3,0);
    tracep->declBus(c+13,"led_flag", false,-1, 2,0);
    tracep->declBus(c+14,"seg0", false,-1, 7,0);
    tracep->declBus(c+15,"seg1", false,-1, 7,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+9,"en", false,-1);
    tracep->declBus(c+10,"sw_op", false,-1, 2,0);
    tracep->declBus(c+11,"sw_a", false,-1, 3,0);
    tracep->declBus(c+12,"sw_b", false,-1, 3,0);
    tracep->declBus(c+13,"led_flag", false,-1, 2,0);
    tracep->declBus(c+14,"seg0", false,-1, 7,0);
    tracep->declBus(c+15,"seg1", false,-1, 7,0);
    tracep->declBus(c+1,"res_alu2bcd", false,-1, 3,0);
    tracep->pushNamePrefix("ALU0 ");
    tracep->declBit(c+9,"en", false,-1);
    tracep->declBus(c+10,"op", false,-1, 2,0);
    tracep->declBus(c+11,"a", false,-1, 3,0);
    tracep->declBus(c+12,"b", false,-1, 3,0);
    tracep->declBus(c+1,"result", false,-1, 3,0);
    tracep->declBit(c+2,"overflow", false,-1);
    tracep->declBit(c+3,"carry", false,-1);
    tracep->declBit(c+4,"zero", false,-1);
    tracep->declBit(c+5,"cin", false,-1);
    tracep->declBus(c+6,"cf_and_res", false,-1, 4,0);
    tracep->declBus(c+7,"t_no_cin", false,-1, 3,0);
    tracep->declBus(c+8,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bcd7seg ");
    tracep->declBus(c+1,"res_num", false,-1, 3,0);
    tracep->declBus(c+14,"o_seg0", false,-1, 7,0);
    tracep->declBus(c+15,"o_seg1", false,-1, 7,0);
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
    bufp->fullCData(oldp+1,(vlSelf->top__DOT__res_alu2bcd),4);
    bufp->fullBit(oldp+2,(vlSelf->top__DOT____Vcellout__ALU0__overflow));
    bufp->fullBit(oldp+3,(vlSelf->top__DOT____Vcellout__ALU0__carry));
    bufp->fullBit(oldp+4,(vlSelf->top__DOT____Vcellout__ALU0__zero));
    bufp->fullBit(oldp+5,(vlSelf->top__DOT__ALU0__DOT__cin));
    bufp->fullCData(oldp+6,(vlSelf->top__DOT__ALU0__DOT__cf_and_res),5);
    bufp->fullCData(oldp+7,(vlSelf->top__DOT__ALU0__DOT__t_no_cin),4);
    bufp->fullIData(oldp+8,(vlSelf->top__DOT__ALU0__DOT__i),32);
    bufp->fullBit(oldp+9,(vlSelf->en));
    bufp->fullCData(oldp+10,(vlSelf->sw_op),3);
    bufp->fullCData(oldp+11,(vlSelf->sw_a),4);
    bufp->fullCData(oldp+12,(vlSelf->sw_b),4);
    bufp->fullCData(oldp+13,(vlSelf->led_flag),3);
    bufp->fullCData(oldp+14,(vlSelf->seg0),8);
    bufp->fullCData(oldp+15,(vlSelf->seg1),8);
}
