// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->top__DOT__res_alu2bcd),4);
        bufp->chgBit(oldp+1,(vlSelf->top__DOT____Vcellout__ALU0__overflow));
        bufp->chgBit(oldp+2,(vlSelf->top__DOT____Vcellout__ALU0__carry));
        bufp->chgBit(oldp+3,(vlSelf->top__DOT____Vcellout__ALU0__zero));
        bufp->chgBit(oldp+4,(vlSelf->top__DOT__ALU0__DOT__cin));
        bufp->chgCData(oldp+5,(vlSelf->top__DOT__ALU0__DOT__cf_and_res),5);
        bufp->chgCData(oldp+6,(vlSelf->top__DOT__ALU0__DOT__t_no_cin),4);
        bufp->chgIData(oldp+7,(vlSelf->top__DOT__ALU0__DOT__i),32);
    }
    bufp->chgBit(oldp+8,(vlSelf->en));
    bufp->chgCData(oldp+9,(vlSelf->sw_op),3);
    bufp->chgCData(oldp+10,(vlSelf->sw_a),4);
    bufp->chgCData(oldp+11,(vlSelf->sw_b),4);
    bufp->chgCData(oldp+12,(vlSelf->led_flag),3);
    bufp->chgCData(oldp+13,(vlSelf->seg0),8);
    bufp->chgCData(oldp+14,(vlSelf->seg1),8);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
