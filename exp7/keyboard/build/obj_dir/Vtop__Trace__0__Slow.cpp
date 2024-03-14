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
    tracep->declBit(c+33,"clk", false,-1);
    tracep->declBit(c+34,"ps2_clk", false,-1);
    tracep->declBit(c+35,"ps2_data", false,-1);
    tracep->declBit(c+36,"clrn", false,-1);
    tracep->declBus(c+37,"o_seg0", false,-1, 7,0);
    tracep->declBus(c+38,"o_seg1", false,-1, 7,0);
    tracep->declBus(c+39,"o_seg2", false,-1, 7,0);
    tracep->declBus(c+40,"o_seg3", false,-1, 7,0);
    tracep->declBus(c+41,"o_seg4", false,-1, 7,0);
    tracep->declBus(c+42,"o_seg5", false,-1, 7,0);
    tracep->declBit(c+43,"o_ready", false,-1);
    tracep->declBit(c+44,"o_overflow", false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+33,"clk", false,-1);
    tracep->declBit(c+34,"ps2_clk", false,-1);
    tracep->declBit(c+35,"ps2_data", false,-1);
    tracep->declBit(c+36,"clrn", false,-1);
    tracep->declBus(c+37,"o_seg0", false,-1, 7,0);
    tracep->declBus(c+38,"o_seg1", false,-1, 7,0);
    tracep->declBus(c+39,"o_seg2", false,-1, 7,0);
    tracep->declBus(c+40,"o_seg3", false,-1, 7,0);
    tracep->declBus(c+41,"o_seg4", false,-1, 7,0);
    tracep->declBus(c+42,"o_seg5", false,-1, 7,0);
    tracep->declBit(c+43,"o_ready", false,-1);
    tracep->declBit(c+44,"o_overflow", false,-1);
    tracep->declBus(c+23,"data", false,-1, 7,0);
    tracep->declBit(c+1,"ready", false,-1);
    tracep->declBit(c+2,"overflow", false,-1);
    tracep->declBus(c+23,"recv2proc_data", false,-1, 7,0);
    tracep->declBit(c+43,"recv2proc_ready", false,-1);
    tracep->declBus(c+3,"to_segcode", false,-1, 7,0);
    tracep->declBus(c+4,"to_segascii", false,-1, 7,0);
    tracep->declBit(c+5,"sig_Release", false,-1);
    tracep->pushNamePrefix("process_data ");
    tracep->declBit(c+33,"clk", false,-1);
    tracep->declBit(c+43,"ready", false,-1);
    tracep->declBus(c+23,"kbdfifo_data", false,-1, 7,0);
    tracep->declBus(c+3,"code", false,-1, 7,0);
    tracep->declBus(c+4,"ascii", false,-1, 7,0);
    tracep->declBit(c+5,"isRelease", false,-1);
    tracep->declBus(c+6,"data_buffer", false,-1, 23,0);
    tracep->declBus(c+45,"curdata", false,-1, 7,0);
    tracep->declBus(c+46,"predata", false,-1, 7,0);
    tracep->pushNamePrefix("data2ascii0 ");
    tracep->declBus(c+3,"code", false,-1, 7,0);
    tracep->declBus(c+4,"ascii", false,-1, 7,0);
    tracep->pushNamePrefix("mux0 ");
    tracep->declBus(c+47,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+48,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+48,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+4,"out", false,-1, 7,0);
    tracep->declBus(c+3,"key", false,-1, 7,0);
    tracep->declBus(c+49,"default_out", false,-1, 7,0);
    tracep->declArray(c+50,"lut", false,-1, 575,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+47,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+48,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+48,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+68,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+4,"out", false,-1, 7,0);
    tracep->declBus(c+3,"key", false,-1, 7,0);
    tracep->declBus(c+49,"default_out", false,-1, 7,0);
    tracep->declArray(c+50,"lut", false,-1, 575,0);
    tracep->declBus(c+69,"PAIR_LEN", false,-1, 31,0);
    tracep->declBus(c+7,"lut_out", false,-1, 7,0);
    tracep->declBit(c+8,"hit", false,-1);
    tracep->declBus(c+70,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(5);
    tracep->pushNamePrefix("recv_data ");
    tracep->declBit(c+33,"clk", false,-1);
    tracep->declBit(c+36,"clrn", false,-1);
    tracep->declBit(c+34,"ps2_clk", false,-1);
    tracep->declBit(c+35,"ps2_data", false,-1);
    tracep->declBit(c+71,"nextdata_n", false,-1);
    tracep->declBus(c+23,"data", false,-1, 7,0);
    tracep->declBit(c+1,"ready", false,-1);
    tracep->declBit(c+2,"overflow", false,-1);
    tracep->declBus(c+9,"buffer", false,-1, 9,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+24+i*1,"fifo", true,(i+0), 7,0);
    }
    tracep->declBus(c+10,"w_ptr", false,-1, 2,0);
    tracep->declBus(c+32,"r_ptr", false,-1, 2,0);
    tracep->declBus(c+11,"count", false,-1, 3,0);
    tracep->declBus(c+12,"ps2_clk_sync", false,-1, 2,0);
    tracep->declBit(c+13,"sampling", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("seg01 ");
    tracep->declBus(c+3,"code", false,-1, 7,0);
    tracep->declBit(c+33,"clk", false,-1);
    tracep->declBit(c+5,"isRelease", false,-1);
    tracep->declBus(c+37,"bcdcode0", false,-1, 7,0);
    tracep->declBus(c+38,"bcdcode1", false,-1, 7,0);
    tracep->declBus(c+14,"code_t", false,-1, 7,0);
    tracep->pushNamePrefix("bcd7seg0 ");
    tracep->declBus(c+15,"num", false,-1, 3,0);
    tracep->declBus(c+37,"bcd", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("bcd7seg1 ");
    tracep->declBus(c+16,"num", false,-1, 3,0);
    tracep->declBus(c+38,"bcd", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("seg23 ");
    tracep->declBus(c+4,"ascii", false,-1, 7,0);
    tracep->declBit(c+33,"clk", false,-1);
    tracep->declBit(c+5,"isRelease", false,-1);
    tracep->declBus(c+39,"bcdasc2", false,-1, 7,0);
    tracep->declBus(c+40,"bcdasc3", false,-1, 7,0);
    tracep->declBus(c+17,"ascii_t", false,-1, 7,0);
    tracep->pushNamePrefix("bcd7seg2 ");
    tracep->declBus(c+18,"num", false,-1, 3,0);
    tracep->declBus(c+39,"bcd", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("bcd7seg3 ");
    tracep->declBus(c+19,"num", false,-1, 3,0);
    tracep->declBus(c+40,"bcd", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("seg45 ");
    tracep->declBit(c+5,"isRelease", false,-1);
    tracep->declBus(c+41,"bcdcnt4", false,-1, 7,0);
    tracep->declBus(c+42,"bcdcnt5", false,-1, 7,0);
    tracep->declBus(c+20,"cnt_t", false,-1, 7,0);
    tracep->pushNamePrefix("bcd7seg4 ");
    tracep->declBus(c+21,"num", false,-1, 3,0);
    tracep->declBus(c+41,"bcd", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("bcd7seg5 ");
    tracep->declBus(c+22,"num", false,-1, 3,0);
    tracep->declBus(c+42,"bcd", false,-1, 7,0);
    tracep->popNamePrefix(3);
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

extern const VlWide<18>/*575:0*/ Vtop__ConstPool__CONST_h1dc02992_0;

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->top__DOT__ready));
    bufp->fullBit(oldp+2,(vlSelf->top__DOT__overflow));
    bufp->fullCData(oldp+3,((0xffU & vlSelf->top__DOT__process_data__DOT__data_buffer)),8);
    bufp->fullCData(oldp+4,(vlSelf->top__DOT__to_segascii),8);
    bufp->fullBit(oldp+5,(vlSelf->top__DOT__sig_Release));
    bufp->fullIData(oldp+6,(vlSelf->top__DOT__process_data__DOT__data_buffer),24);
    bufp->fullCData(oldp+7,(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__lut_out),8);
    bufp->fullBit(oldp+8,(vlSelf->top__DOT__process_data__DOT__data2ascii0__DOT__mux0__DOT__i0__DOT__hit));
    bufp->fullSData(oldp+9,(vlSelf->top__DOT__recv_data__DOT__buffer),10);
    bufp->fullCData(oldp+10,(vlSelf->top__DOT__recv_data__DOT__w_ptr),3);
    bufp->fullCData(oldp+11,(vlSelf->top__DOT__recv_data__DOT__count),4);
    bufp->fullCData(oldp+12,(vlSelf->top__DOT__recv_data__DOT__ps2_clk_sync),3);
    bufp->fullBit(oldp+13,((IData)((4U == (6U & (IData)(vlSelf->top__DOT__recv_data__DOT__ps2_clk_sync))))));
    bufp->fullCData(oldp+14,(vlSelf->top__DOT__seg01__DOT__code_t),8);
    bufp->fullCData(oldp+15,((0xfU & (IData)(vlSelf->top__DOT__seg01__DOT__code_t))),4);
    bufp->fullCData(oldp+16,((0xfU & ((IData)(vlSelf->top__DOT__seg01__DOT__code_t) 
                                      >> 4U))),4);
    bufp->fullCData(oldp+17,(vlSelf->top__DOT__seg23__DOT__ascii_t),8);
    bufp->fullCData(oldp+18,((0xfU & (IData)(vlSelf->top__DOT__seg23__DOT__ascii_t))),4);
    bufp->fullCData(oldp+19,((0xfU & ((IData)(vlSelf->top__DOT__seg23__DOT__ascii_t) 
                                      >> 4U))),4);
    bufp->fullCData(oldp+20,(vlSelf->top__DOT__seg45__DOT__cnt_t),8);
    bufp->fullCData(oldp+21,((0xfU & (IData)(vlSelf->top__DOT__seg45__DOT__cnt_t))),4);
    bufp->fullCData(oldp+22,((0xfU & ((IData)(vlSelf->top__DOT__seg45__DOT__cnt_t) 
                                      >> 4U))),4);
    bufp->fullCData(oldp+23,(vlSelf->top__DOT__recv_data__DOT__fifo
                             [vlSelf->top__DOT__recv_data__DOT__r_ptr]),8);
    bufp->fullCData(oldp+24,(vlSelf->top__DOT__recv_data__DOT__fifo[0]),8);
    bufp->fullCData(oldp+25,(vlSelf->top__DOT__recv_data__DOT__fifo[1]),8);
    bufp->fullCData(oldp+26,(vlSelf->top__DOT__recv_data__DOT__fifo[2]),8);
    bufp->fullCData(oldp+27,(vlSelf->top__DOT__recv_data__DOT__fifo[3]),8);
    bufp->fullCData(oldp+28,(vlSelf->top__DOT__recv_data__DOT__fifo[4]),8);
    bufp->fullCData(oldp+29,(vlSelf->top__DOT__recv_data__DOT__fifo[5]),8);
    bufp->fullCData(oldp+30,(vlSelf->top__DOT__recv_data__DOT__fifo[6]),8);
    bufp->fullCData(oldp+31,(vlSelf->top__DOT__recv_data__DOT__fifo[7]),8);
    bufp->fullCData(oldp+32,(vlSelf->top__DOT__recv_data__DOT__r_ptr),3);
    bufp->fullBit(oldp+33,(vlSelf->clk));
    bufp->fullBit(oldp+34,(vlSelf->ps2_clk));
    bufp->fullBit(oldp+35,(vlSelf->ps2_data));
    bufp->fullBit(oldp+36,(vlSelf->clrn));
    bufp->fullCData(oldp+37,(vlSelf->o_seg0),8);
    bufp->fullCData(oldp+38,(vlSelf->o_seg1),8);
    bufp->fullCData(oldp+39,(vlSelf->o_seg2),8);
    bufp->fullCData(oldp+40,(vlSelf->o_seg3),8);
    bufp->fullCData(oldp+41,(vlSelf->o_seg4),8);
    bufp->fullCData(oldp+42,(vlSelf->o_seg5),8);
    bufp->fullBit(oldp+43,(vlSelf->o_ready));
    bufp->fullBit(oldp+44,(vlSelf->o_overflow));
    bufp->fullCData(oldp+45,(vlSelf->top__DOT__process_data__DOT__curdata),8);
    bufp->fullCData(oldp+46,(vlSelf->top__DOT__process_data__DOT__predata),8);
    bufp->fullIData(oldp+47,(0x24U),32);
    bufp->fullIData(oldp+48,(8U),32);
    bufp->fullCData(oldp+49,(0U),8);
    bufp->fullWData(oldp+50,(Vtop__ConstPool__CONST_h1dc02992_0),576);
    bufp->fullIData(oldp+68,(1U),32);
    bufp->fullIData(oldp+69,(0x10U),32);
    bufp->fullIData(oldp+70,(0x24U),32);
    bufp->fullBit(oldp+71,(0U));
}
