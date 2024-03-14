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
        bufp->chgBit(oldp+0,(vlSelf->top__DOT__ready));
        bufp->chgBit(oldp+1,(vlSelf->top__DOT__overflow));
        bufp->chgCData(oldp+2,((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer)),8);
        bufp->chgCData(oldp+3,(vlSelf->top__DOT__to_segascii),8);
        bufp->chgBit(oldp+4,(vlSelf->top__DOT__sig_Release));
        bufp->chgIData(oldp+5,(vlSelf->top__DOT__process_data__DOT__data_buffer),24);
        bufp->chgCData(oldp+6,(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out),8);
        bufp->chgBit(oldp+7,(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit));
        bufp->chgSData(oldp+8,(vlSelf->top__DOT__recv_data__DOT__buffer),10);
        bufp->chgCData(oldp+9,(vlSelf->top__DOT__recv_data__DOT__w_ptr),3);
        bufp->chgCData(oldp+10,(vlSelf->top__DOT__recv_data__DOT__count),4);
        bufp->chgCData(oldp+11,(vlSelf->top__DOT__recv_data__DOT__ps2_clk_sync),3);
        bufp->chgBit(oldp+12,((IData)((4U == (6U & (IData)(vlSelf->top__DOT__recv_data__DOT__ps2_clk_sync))))));
        bufp->chgCData(oldp+13,(vlSelf->top__DOT__seg01__DOT__code_t),8);
        bufp->chgCData(oldp+14,((0xfU & (IData)(vlSelf->top__DOT__seg01__DOT__code_t))),4);
        bufp->chgCData(oldp+15,((0xfU & ((IData)(vlSelf->top__DOT__seg01__DOT__code_t) 
                                         >> 4U))),4);
        bufp->chgCData(oldp+16,(vlSelf->top__DOT__seg23__DOT__ascii_t),8);
        bufp->chgCData(oldp+17,((0xfU & (IData)(vlSelf->top__DOT__seg23__DOT__ascii_t))),4);
        bufp->chgCData(oldp+18,((0xfU & ((IData)(vlSelf->top__DOT__seg23__DOT__ascii_t) 
                                         >> 4U))),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgCData(oldp+19,(vlSelf->top__DOT__seg45__DOT__cnt_t),8);
        bufp->chgCData(oldp+20,((0xfU & (IData)(vlSelf->top__DOT__seg45__DOT__cnt_t))),4);
        bufp->chgCData(oldp+21,((0xfU & ((IData)(vlSelf->top__DOT__seg45__DOT__cnt_t) 
                                         >> 4U))),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgCData(oldp+22,(vlSelf->top__DOT__recv_data__DOT__fifo
                                [vlSelf->top__DOT__recv_data__DOT__r_ptr]),8);
        bufp->chgCData(oldp+23,(vlSelf->top__DOT__recv_data__DOT__fifo[0]),8);
        bufp->chgCData(oldp+24,(vlSelf->top__DOT__recv_data__DOT__fifo[1]),8);
        bufp->chgCData(oldp+25,(vlSelf->top__DOT__recv_data__DOT__fifo[2]),8);
        bufp->chgCData(oldp+26,(vlSelf->top__DOT__recv_data__DOT__fifo[3]),8);
        bufp->chgCData(oldp+27,(vlSelf->top__DOT__recv_data__DOT__fifo[4]),8);
        bufp->chgCData(oldp+28,(vlSelf->top__DOT__recv_data__DOT__fifo[5]),8);
        bufp->chgCData(oldp+29,(vlSelf->top__DOT__recv_data__DOT__fifo[6]),8);
        bufp->chgCData(oldp+30,(vlSelf->top__DOT__recv_data__DOT__fifo[7]),8);
        bufp->chgCData(oldp+31,(vlSelf->top__DOT__recv_data__DOT__r_ptr),3);
    }
    bufp->chgBit(oldp+32,(vlSelf->clk));
    bufp->chgBit(oldp+33,(vlSelf->ps2_clk));
    bufp->chgBit(oldp+34,(vlSelf->ps2_data));
    bufp->chgBit(oldp+35,(vlSelf->clrn));
    bufp->chgCData(oldp+36,(vlSelf->o_seg0),8);
    bufp->chgCData(oldp+37,(vlSelf->o_seg1),8);
    bufp->chgCData(oldp+38,(vlSelf->o_seg2),8);
    bufp->chgCData(oldp+39,(vlSelf->o_seg3),8);
    bufp->chgCData(oldp+40,(vlSelf->o_seg4),8);
    bufp->chgCData(oldp+41,(vlSelf->o_seg5),8);
    bufp->chgBit(oldp+42,(vlSelf->o_ready));
    bufp->chgBit(oldp+43,(vlSelf->o_overflow));
    bufp->chgCData(oldp+44,(vlSelf->top__DOT__process_data__DOT__curdata),8);
    bufp->chgCData(oldp+45,(vlSelf->top__DOT__process_data__DOT__predata),8);
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
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
