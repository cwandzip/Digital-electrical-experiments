// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "verilated.h"

#include "Vtb___024root.h"

VlCoroutine Vtb___024root___eval_initial__TOP__0(Vtb___024root* vlSelf);

void Vtb___024root___eval_initial(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtb___024root___eval_initial__TOP__0(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtb___024root___eval_initial__TOP__0(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vtask_tb__DOT__check__0__task_a;
    __Vtask_tb__DOT__check__0__task_a = 0;
    CData/*3:0*/ __Vtask_tb__DOT__check__0__task_b;
    __Vtask_tb__DOT__check__0__task_b = 0;
    CData/*0:0*/ __Vtask_tb__DOT__check__0__task_Cin;
    __Vtask_tb__DOT__check__0__task_Cin = 0;
    CData/*3:0*/ __Vtask_tb__DOT__check__0__addres;
    __Vtask_tb__DOT__check__0__addres = 0;
    CData/*3:0*/ __Vtask_tb__DOT__check__0__res;
    __Vtask_tb__DOT__check__0__res = 0;
    CData/*0:0*/ __Vtask_tb__DOT__check__0__addcf;
    __Vtask_tb__DOT__check__0__addcf = 0;
    CData/*0:0*/ __Vtask_tb__DOT__check__0__addzf;
    __Vtask_tb__DOT__check__0__addzf = 0;
    CData/*0:0*/ __Vtask_tb__DOT__check__0__addof;
    __Vtask_tb__DOT__check__0__addof = 0;
    CData/*0:0*/ __Vtask_tb__DOT__check__0__rescf;
    __Vtask_tb__DOT__check__0__rescf = 0;
    CData/*0:0*/ __Vtask_tb__DOT__check__0__reszf;
    __Vtask_tb__DOT__check__0__reszf = 0;
    CData/*0:0*/ __Vtask_tb__DOT__check__0__resof;
    __Vtask_tb__DOT__check__0__resof = 0;
    CData/*3:0*/ __Vtask_tb__DOT__check__1__task_a;
    __Vtask_tb__DOT__check__1__task_a = 0;
    CData/*3:0*/ __Vtask_tb__DOT__check__1__task_b;
    __Vtask_tb__DOT__check__1__task_b = 0;
    CData/*0:0*/ __Vtask_tb__DOT__check__1__task_Cin;
    __Vtask_tb__DOT__check__1__task_Cin = 0;
    CData/*3:0*/ __Vtask_tb__DOT__check__1__addres;
    __Vtask_tb__DOT__check__1__addres = 0;
    CData/*3:0*/ __Vtask_tb__DOT__check__1__res;
    __Vtask_tb__DOT__check__1__res = 0;
    CData/*0:0*/ __Vtask_tb__DOT__check__1__addcf;
    __Vtask_tb__DOT__check__1__addcf = 0;
    CData/*0:0*/ __Vtask_tb__DOT__check__1__addzf;
    __Vtask_tb__DOT__check__1__addzf = 0;
    CData/*0:0*/ __Vtask_tb__DOT__check__1__addof;
    __Vtask_tb__DOT__check__1__addof = 0;
    CData/*0:0*/ __Vtask_tb__DOT__check__1__rescf;
    __Vtask_tb__DOT__check__1__rescf = 0;
    CData/*0:0*/ __Vtask_tb__DOT__check__1__reszf;
    __Vtask_tb__DOT__check__1__reszf = 0;
    CData/*0:0*/ __Vtask_tb__DOT__check__1__resof;
    __Vtask_tb__DOT__check__1__resof = 0;
    // Body
    vlSelf->tb__DOT__unnamedblk1__DOT__i = 0U;
    while ((0x10U > (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__i))) {
        vlSelf->tb__DOT__in_a = (0xfU & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__i));
        vlSelf->tb__DOT__in_b = 0U;
        vlSelf->tb__DOT__Cin = 0U;
        vlSelf->tb__DOT__unnamedblk1__DOT__k = vlSelf->tb__DOT__in_a;
        vlSelf->tb__DOT__unnamedblk1__DOT__of = ((~ 
                                                  ((IData)(vlSelf->tb__DOT__in_a) 
                                                   >> 3U)) 
                                                 & ((1U 
                                                     & ((IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k) 
                                                        >> 3U)) 
                                                    != 
                                                    (1U 
                                                     & ((IData)(vlSelf->tb__DOT__in_a) 
                                                        >> 3U))));
        vlSelf->tb__DOT__unnamedblk1__DOT__c = (1U 
                                                & ((IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k) 
                                                   >> 4U));
        vlSelf->tb__DOT__unnamedblk1__DOT__z = ((0U 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k)))
                                                 ? 1U
                                                 : 0U);
        co_await vlSelf->__VdlySched.delay(0x14ULL, 
                                           "/home/lhjysyx/DigitalCircuitsExperiments/exp3_ALU/adder/vsrc/tb.v", 
                                           55);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb__DOT__check__0__resof = vlSelf->tb__DOT__unnamedblk1__DOT__of;
        __Vtask_tb__DOT__check__0__reszf = vlSelf->tb__DOT__unnamedblk1__DOT__z;
        __Vtask_tb__DOT__check__0__rescf = vlSelf->tb__DOT__unnamedblk1__DOT__c;
        __Vtask_tb__DOT__check__0__addof = vlSelf->tb__DOT__Overflow;
        __Vtask_tb__DOT__check__0__addzf = (1U & (~ (IData)(
                                                            (0U 
                                                             != (IData)(vlSelf->tb__DOT__Result)))));
        __Vtask_tb__DOT__check__0__addcf = vlSelf->tb__DOT__Carry;
        __Vtask_tb__DOT__check__0__res = (0xfU & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k));
        __Vtask_tb__DOT__check__0__addres = vlSelf->tb__DOT__Result;
        __Vtask_tb__DOT__check__0__task_Cin = vlSelf->tb__DOT__Cin;
        __Vtask_tb__DOT__check__0__task_b = vlSelf->tb__DOT__in_b;
        __Vtask_tb__DOT__check__0__task_a = vlSelf->tb__DOT__in_a;
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__0__addres) 
                         != (IData)(__Vtask_tb__DOT__check__0__res)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b,result should be %2#, get %2#\n",
                      4,__Vtask_tb__DOT__check__0__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__0__task_b),
                      1,__Vtask_tb__DOT__check__0__task_Cin,
                      4,(IData)(__Vtask_tb__DOT__check__0__res),
                      4,__Vtask_tb__DOT__check__0__addres);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__0__addcf) 
                         != (IData)(__Vtask_tb__DOT__check__0__rescf)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Carry should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__0__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__0__task_b),
                      1,__Vtask_tb__DOT__check__0__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__0__rescf),
                      1,__Vtask_tb__DOT__check__0__addcf);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__0__addof) 
                         != (IData)(__Vtask_tb__DOT__check__0__resof)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Overflow should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__0__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__0__task_b),
                      1,__Vtask_tb__DOT__check__0__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__0__resof),
                      1,__Vtask_tb__DOT__check__0__addof);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__0__addzf) 
                         != (IData)(__Vtask_tb__DOT__check__0__reszf)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Zero should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__0__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__0__task_b),
                      1,__Vtask_tb__DOT__check__0__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__0__reszf),
                      1,__Vtask_tb__DOT__check__0__addzf);
        }
        vlSelf->tb__DOT__unnamedblk1__DOT__j = 1U;
        vlSelf->tb__DOT__in_a = (0xfU & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__i));
        vlSelf->tb__DOT__in_b = 1U;
        vlSelf->tb__DOT__Cin = 0U;
        vlSelf->tb__DOT__unnamedblk1__DOT__k = (0x1fU 
                                                & ((IData)(vlSelf->tb__DOT__in_a) 
                                                   + (IData)(vlSelf->tb__DOT__in_b)));
        vlSelf->tb__DOT__unnamedblk1__DOT__of = (((1U 
                                                   & ((IData)(vlSelf->tb__DOT__in_a) 
                                                      >> 3U)) 
                                                  == (IData)(
                                                             (((IData)(vlSelf->tb__DOT__in_b) 
                                                               >> 3U) 
                                                              ^ (IData)(vlSelf->tb__DOT__Cin)))) 
                                                 & ((1U 
                                                     & ((IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k) 
                                                        >> 3U)) 
                                                    != 
                                                    (1U 
                                                     & ((IData)(vlSelf->tb__DOT__in_a) 
                                                        >> 3U))));
        vlSelf->tb__DOT__unnamedblk1__DOT__c = (1U 
                                                & ((IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k) 
                                                   >> 4U));
        vlSelf->tb__DOT__unnamedblk1__DOT__z = ((0U 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k)))
                                                 ? 1U
                                                 : 0U);
        co_await vlSelf->__VdlySched.delay(0x14ULL, 
                                           "/home/lhjysyx/DigitalCircuitsExperiments/exp3_ALU/adder/vsrc/tb.v", 
                                           55);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb__DOT__check__0__resof = vlSelf->tb__DOT__unnamedblk1__DOT__of;
        __Vtask_tb__DOT__check__0__reszf = vlSelf->tb__DOT__unnamedblk1__DOT__z;
        __Vtask_tb__DOT__check__0__rescf = vlSelf->tb__DOT__unnamedblk1__DOT__c;
        __Vtask_tb__DOT__check__0__addof = vlSelf->tb__DOT__Overflow;
        __Vtask_tb__DOT__check__0__addzf = (1U & (~ (IData)(
                                                            (0U 
                                                             != (IData)(vlSelf->tb__DOT__Result)))));
        __Vtask_tb__DOT__check__0__addcf = vlSelf->tb__DOT__Carry;
        __Vtask_tb__DOT__check__0__res = (0xfU & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k));
        __Vtask_tb__DOT__check__0__addres = vlSelf->tb__DOT__Result;
        __Vtask_tb__DOT__check__0__task_Cin = vlSelf->tb__DOT__Cin;
        __Vtask_tb__DOT__check__0__task_b = vlSelf->tb__DOT__in_b;
        __Vtask_tb__DOT__check__0__task_a = vlSelf->tb__DOT__in_a;
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__0__addres) 
                         != (IData)(__Vtask_tb__DOT__check__0__res)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b,result should be %2#, get %2#\n",
                      4,__Vtask_tb__DOT__check__0__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__0__task_b),
                      1,__Vtask_tb__DOT__check__0__task_Cin,
                      4,(IData)(__Vtask_tb__DOT__check__0__res),
                      4,__Vtask_tb__DOT__check__0__addres);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__0__addcf) 
                         != (IData)(__Vtask_tb__DOT__check__0__rescf)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Carry should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__0__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__0__task_b),
                      1,__Vtask_tb__DOT__check__0__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__0__rescf),
                      1,__Vtask_tb__DOT__check__0__addcf);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__0__addof) 
                         != (IData)(__Vtask_tb__DOT__check__0__resof)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Overflow should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__0__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__0__task_b),
                      1,__Vtask_tb__DOT__check__0__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__0__resof),
                      1,__Vtask_tb__DOT__check__0__addof);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__0__addzf) 
                         != (IData)(__Vtask_tb__DOT__check__0__reszf)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Zero should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__0__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__0__task_b),
                      1,__Vtask_tb__DOT__check__0__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__0__reszf),
                      1,__Vtask_tb__DOT__check__0__addzf);
        }
        vlSelf->tb__DOT__unnamedblk1__DOT__j = 2U;
        vlSelf->tb__DOT__in_a = (0xfU & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__i));
        vlSelf->tb__DOT__in_b = 2U;
        vlSelf->tb__DOT__Cin = 0U;
        vlSelf->tb__DOT__unnamedblk1__DOT__k = (0x1fU 
                                                & ((IData)(vlSelf->tb__DOT__in_a) 
                                                   + (IData)(vlSelf->tb__DOT__in_b)));
        vlSelf->tb__DOT__unnamedblk1__DOT__of = (((1U 
                                                   & ((IData)(vlSelf->tb__DOT__in_a) 
                                                      >> 3U)) 
                                                  == (IData)(
                                                             (((IData)(vlSelf->tb__DOT__in_b) 
                                                               >> 3U) 
                                                              ^ (IData)(vlSelf->tb__DOT__Cin)))) 
                                                 & ((1U 
                                                     & ((IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k) 
                                                        >> 3U)) 
                                                    != 
                                                    (1U 
                                                     & ((IData)(vlSelf->tb__DOT__in_a) 
                                                        >> 3U))));
        vlSelf->tb__DOT__unnamedblk1__DOT__c = (1U 
                                                & ((IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k) 
                                                   >> 4U));
        vlSelf->tb__DOT__unnamedblk1__DOT__z = ((0U 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k)))
                                                 ? 1U
                                                 : 0U);
        co_await vlSelf->__VdlySched.delay(0x14ULL, 
                                           "/home/lhjysyx/DigitalCircuitsExperiments/exp3_ALU/adder/vsrc/tb.v", 
                                           55);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb__DOT__check__0__resof = vlSelf->tb__DOT__unnamedblk1__DOT__of;
        __Vtask_tb__DOT__check__0__reszf = vlSelf->tb__DOT__unnamedblk1__DOT__z;
        __Vtask_tb__DOT__check__0__rescf = vlSelf->tb__DOT__unnamedblk1__DOT__c;
        __Vtask_tb__DOT__check__0__addof = vlSelf->tb__DOT__Overflow;
        __Vtask_tb__DOT__check__0__addzf = (1U & (~ (IData)(
                                                            (0U 
                                                             != (IData)(vlSelf->tb__DOT__Result)))));
        __Vtask_tb__DOT__check__0__addcf = vlSelf->tb__DOT__Carry;
        __Vtask_tb__DOT__check__0__res = (0xfU & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k));
        __Vtask_tb__DOT__check__0__addres = vlSelf->tb__DOT__Result;
        __Vtask_tb__DOT__check__0__task_Cin = vlSelf->tb__DOT__Cin;
        __Vtask_tb__DOT__check__0__task_b = vlSelf->tb__DOT__in_b;
        __Vtask_tb__DOT__check__0__task_a = vlSelf->tb__DOT__in_a;
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__0__addres) 
                         != (IData)(__Vtask_tb__DOT__check__0__res)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b,result should be %2#, get %2#\n",
                      4,__Vtask_tb__DOT__check__0__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__0__task_b),
                      1,__Vtask_tb__DOT__check__0__task_Cin,
                      4,(IData)(__Vtask_tb__DOT__check__0__res),
                      4,__Vtask_tb__DOT__check__0__addres);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__0__addcf) 
                         != (IData)(__Vtask_tb__DOT__check__0__rescf)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Carry should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__0__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__0__task_b),
                      1,__Vtask_tb__DOT__check__0__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__0__rescf),
                      1,__Vtask_tb__DOT__check__0__addcf);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__0__addof) 
                         != (IData)(__Vtask_tb__DOT__check__0__resof)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Overflow should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__0__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__0__task_b),
                      1,__Vtask_tb__DOT__check__0__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__0__resof),
                      1,__Vtask_tb__DOT__check__0__addof);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__0__addzf) 
                         != (IData)(__Vtask_tb__DOT__check__0__reszf)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Zero should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__0__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__0__task_b),
                      1,__Vtask_tb__DOT__check__0__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__0__reszf),
                      1,__Vtask_tb__DOT__check__0__addzf);
        }
        vlSelf->tb__DOT__unnamedblk1__DOT__j = 3U;
        vlSelf->tb__DOT__in_a = (0xfU & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__i));
        vlSelf->tb__DOT__in_b = 3U;
        vlSelf->tb__DOT__Cin = 0U;
        vlSelf->tb__DOT__unnamedblk1__DOT__k = (0x1fU 
                                                & ((IData)(vlSelf->tb__DOT__in_a) 
                                                   + (IData)(vlSelf->tb__DOT__in_b)));
        vlSelf->tb__DOT__unnamedblk1__DOT__of = (((1U 
                                                   & ((IData)(vlSelf->tb__DOT__in_a) 
                                                      >> 3U)) 
                                                  == (IData)(
                                                             (((IData)(vlSelf->tb__DOT__in_b) 
                                                               >> 3U) 
                                                              ^ (IData)(vlSelf->tb__DOT__Cin)))) 
                                                 & ((1U 
                                                     & ((IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k) 
                                                        >> 3U)) 
                                                    != 
                                                    (1U 
                                                     & ((IData)(vlSelf->tb__DOT__in_a) 
                                                        >> 3U))));
        vlSelf->tb__DOT__unnamedblk1__DOT__c = (1U 
                                                & ((IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k) 
                                                   >> 4U));
        vlSelf->tb__DOT__unnamedblk1__DOT__z = ((0U 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k)))
                                                 ? 1U
                                                 : 0U);
        co_await vlSelf->__VdlySched.delay(0x14ULL, 
                                           "/home/lhjysyx/DigitalCircuitsExperiments/exp3_ALU/adder/vsrc/tb.v", 
                                           55);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb__DOT__check__0__resof = vlSelf->tb__DOT__unnamedblk1__DOT__of;
        __Vtask_tb__DOT__check__0__reszf = vlSelf->tb__DOT__unnamedblk1__DOT__z;
        __Vtask_tb__DOT__check__0__rescf = vlSelf->tb__DOT__unnamedblk1__DOT__c;
        __Vtask_tb__DOT__check__0__addof = vlSelf->tb__DOT__Overflow;
        __Vtask_tb__DOT__check__0__addzf = (1U & (~ (IData)(
                                                            (0U 
                                                             != (IData)(vlSelf->tb__DOT__Result)))));
        __Vtask_tb__DOT__check__0__addcf = vlSelf->tb__DOT__Carry;
        __Vtask_tb__DOT__check__0__res = (0xfU & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k));
        __Vtask_tb__DOT__check__0__addres = vlSelf->tb__DOT__Result;
        __Vtask_tb__DOT__check__0__task_Cin = vlSelf->tb__DOT__Cin;
        __Vtask_tb__DOT__check__0__task_b = vlSelf->tb__DOT__in_b;
        __Vtask_tb__DOT__check__0__task_a = vlSelf->tb__DOT__in_a;
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__0__addres) 
                         != (IData)(__Vtask_tb__DOT__check__0__res)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b,result should be %2#, get %2#\n",
                      4,__Vtask_tb__DOT__check__0__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__0__task_b),
                      1,__Vtask_tb__DOT__check__0__task_Cin,
                      4,(IData)(__Vtask_tb__DOT__check__0__res),
                      4,__Vtask_tb__DOT__check__0__addres);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__0__addcf) 
                         != (IData)(__Vtask_tb__DOT__check__0__rescf)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Carry should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__0__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__0__task_b),
                      1,__Vtask_tb__DOT__check__0__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__0__rescf),
                      1,__Vtask_tb__DOT__check__0__addcf);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__0__addof) 
                         != (IData)(__Vtask_tb__DOT__check__0__resof)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Overflow should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__0__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__0__task_b),
                      1,__Vtask_tb__DOT__check__0__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__0__resof),
                      1,__Vtask_tb__DOT__check__0__addof);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__0__addzf) 
                         != (IData)(__Vtask_tb__DOT__check__0__reszf)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Zero should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__0__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__0__task_b),
                      1,__Vtask_tb__DOT__check__0__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__0__reszf),
                      1,__Vtask_tb__DOT__check__0__addzf);
        }
        vlSelf->tb__DOT__unnamedblk1__DOT__j = 4U;
        vlSelf->tb__DOT__in_a = (0xfU & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__i));
        vlSelf->tb__DOT__in_b = 4U;
        vlSelf->tb__DOT__Cin = 0U;
        vlSelf->tb__DOT__unnamedblk1__DOT__k = (0x1fU 
                                                & ((IData)(vlSelf->tb__DOT__in_a) 
                                                   + (IData)(vlSelf->tb__DOT__in_b)));
        vlSelf->tb__DOT__unnamedblk1__DOT__of = (((1U 
                                                   & ((IData)(vlSelf->tb__DOT__in_a) 
                                                      >> 3U)) 
                                                  == (IData)(
                                                             (((IData)(vlSelf->tb__DOT__in_b) 
                                                               >> 3U) 
                                                              ^ (IData)(vlSelf->tb__DOT__Cin)))) 
                                                 & ((1U 
                                                     & ((IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k) 
                                                        >> 3U)) 
                                                    != 
                                                    (1U 
                                                     & ((IData)(vlSelf->tb__DOT__in_a) 
                                                        >> 3U))));
        vlSelf->tb__DOT__unnamedblk1__DOT__c = (1U 
                                                & ((IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k) 
                                                   >> 4U));
        vlSelf->tb__DOT__unnamedblk1__DOT__z = ((0U 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k)))
                                                 ? 1U
                                                 : 0U);
        co_await vlSelf->__VdlySched.delay(0x14ULL, 
                                           "/home/lhjysyx/DigitalCircuitsExperiments/exp3_ALU/adder/vsrc/tb.v", 
                                           55);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb__DOT__check__0__resof = vlSelf->tb__DOT__unnamedblk1__DOT__of;
        __Vtask_tb__DOT__check__0__reszf = vlSelf->tb__DOT__unnamedblk1__DOT__z;
        __Vtask_tb__DOT__check__0__rescf = vlSelf->tb__DOT__unnamedblk1__DOT__c;
        __Vtask_tb__DOT__check__0__addof = vlSelf->tb__DOT__Overflow;
        __Vtask_tb__DOT__check__0__addzf = (1U & (~ (IData)(
                                                            (0U 
                                                             != (IData)(vlSelf->tb__DOT__Result)))));
        __Vtask_tb__DOT__check__0__addcf = vlSelf->tb__DOT__Carry;
        __Vtask_tb__DOT__check__0__res = (0xfU & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k));
        __Vtask_tb__DOT__check__0__addres = vlSelf->tb__DOT__Result;
        __Vtask_tb__DOT__check__0__task_Cin = vlSelf->tb__DOT__Cin;
        __Vtask_tb__DOT__check__0__task_b = vlSelf->tb__DOT__in_b;
        __Vtask_tb__DOT__check__0__task_a = vlSelf->tb__DOT__in_a;
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__0__addres) 
                         != (IData)(__Vtask_tb__DOT__check__0__res)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b,result should be %2#, get %2#\n",
                      4,__Vtask_tb__DOT__check__0__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__0__task_b),
                      1,__Vtask_tb__DOT__check__0__task_Cin,
                      4,(IData)(__Vtask_tb__DOT__check__0__res),
                      4,__Vtask_tb__DOT__check__0__addres);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__0__addcf) 
                         != (IData)(__Vtask_tb__DOT__check__0__rescf)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Carry should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__0__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__0__task_b),
                      1,__Vtask_tb__DOT__check__0__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__0__rescf),
                      1,__Vtask_tb__DOT__check__0__addcf);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__0__addof) 
                         != (IData)(__Vtask_tb__DOT__check__0__resof)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Overflow should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__0__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__0__task_b),
                      1,__Vtask_tb__DOT__check__0__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__0__resof),
                      1,__Vtask_tb__DOT__check__0__addof);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__0__addzf) 
                         != (IData)(__Vtask_tb__DOT__check__0__reszf)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Zero should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__0__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__0__task_b),
                      1,__Vtask_tb__DOT__check__0__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__0__reszf),
                      1,__Vtask_tb__DOT__check__0__addzf);
        }
        vlSelf->tb__DOT__unnamedblk1__DOT__j = 5U;
        vlSelf->tb__DOT__in_a = (0xfU & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__i));
        vlSelf->tb__DOT__in_b = 5U;
        vlSelf->tb__DOT__Cin = 0U;
        vlSelf->tb__DOT__unnamedblk1__DOT__k = (0x1fU 
                                                & ((IData)(vlSelf->tb__DOT__in_a) 
                                                   + (IData)(vlSelf->tb__DOT__in_b)));
        vlSelf->tb__DOT__unnamedblk1__DOT__of = (((1U 
                                                   & ((IData)(vlSelf->tb__DOT__in_a) 
                                                      >> 3U)) 
                                                  == (IData)(
                                                             (((IData)(vlSelf->tb__DOT__in_b) 
                                                               >> 3U) 
                                                              ^ (IData)(vlSelf->tb__DOT__Cin)))) 
                                                 & ((1U 
                                                     & ((IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k) 
                                                        >> 3U)) 
                                                    != 
                                                    (1U 
                                                     & ((IData)(vlSelf->tb__DOT__in_a) 
                                                        >> 3U))));
        vlSelf->tb__DOT__unnamedblk1__DOT__c = (1U 
                                                & ((IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k) 
                                                   >> 4U));
        vlSelf->tb__DOT__unnamedblk1__DOT__z = ((0U 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k)))
                                                 ? 1U
                                                 : 0U);
        co_await vlSelf->__VdlySched.delay(0x14ULL, 
                                           "/home/lhjysyx/DigitalCircuitsExperiments/exp3_ALU/adder/vsrc/tb.v", 
                                           55);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb__DOT__check__0__resof = vlSelf->tb__DOT__unnamedblk1__DOT__of;
        __Vtask_tb__DOT__check__0__reszf = vlSelf->tb__DOT__unnamedblk1__DOT__z;
        __Vtask_tb__DOT__check__0__rescf = vlSelf->tb__DOT__unnamedblk1__DOT__c;
        __Vtask_tb__DOT__check__0__addof = vlSelf->tb__DOT__Overflow;
        __Vtask_tb__DOT__check__0__addzf = (1U & (~ (IData)(
                                                            (0U 
                                                             != (IData)(vlSelf->tb__DOT__Result)))));
        __Vtask_tb__DOT__check__0__addcf = vlSelf->tb__DOT__Carry;
        __Vtask_tb__DOT__check__0__res = (0xfU & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k));
        __Vtask_tb__DOT__check__0__addres = vlSelf->tb__DOT__Result;
        __Vtask_tb__DOT__check__0__task_Cin = vlSelf->tb__DOT__Cin;
        __Vtask_tb__DOT__check__0__task_b = vlSelf->tb__DOT__in_b;
        __Vtask_tb__DOT__check__0__task_a = vlSelf->tb__DOT__in_a;
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__0__addres) 
                         != (IData)(__Vtask_tb__DOT__check__0__res)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b,result should be %2#, get %2#\n",
                      4,__Vtask_tb__DOT__check__0__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__0__task_b),
                      1,__Vtask_tb__DOT__check__0__task_Cin,
                      4,(IData)(__Vtask_tb__DOT__check__0__res),
                      4,__Vtask_tb__DOT__check__0__addres);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__0__addcf) 
                         != (IData)(__Vtask_tb__DOT__check__0__rescf)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Carry should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__0__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__0__task_b),
                      1,__Vtask_tb__DOT__check__0__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__0__rescf),
                      1,__Vtask_tb__DOT__check__0__addcf);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__0__addof) 
                         != (IData)(__Vtask_tb__DOT__check__0__resof)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Overflow should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__0__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__0__task_b),
                      1,__Vtask_tb__DOT__check__0__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__0__resof),
                      1,__Vtask_tb__DOT__check__0__addof);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__0__addzf) 
                         != (IData)(__Vtask_tb__DOT__check__0__reszf)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Zero should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__0__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__0__task_b),
                      1,__Vtask_tb__DOT__check__0__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__0__reszf),
                      1,__Vtask_tb__DOT__check__0__addzf);
        }
        vlSelf->tb__DOT__unnamedblk1__DOT__j = 6U;
        vlSelf->tb__DOT__in_a = (0xfU & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__i));
        vlSelf->tb__DOT__in_b = 6U;
        vlSelf->tb__DOT__Cin = 0U;
        vlSelf->tb__DOT__unnamedblk1__DOT__k = (0x1fU 
                                                & ((IData)(vlSelf->tb__DOT__in_a) 
                                                   + (IData)(vlSelf->tb__DOT__in_b)));
        vlSelf->tb__DOT__unnamedblk1__DOT__of = (((1U 
                                                   & ((IData)(vlSelf->tb__DOT__in_a) 
                                                      >> 3U)) 
                                                  == (IData)(
                                                             (((IData)(vlSelf->tb__DOT__in_b) 
                                                               >> 3U) 
                                                              ^ (IData)(vlSelf->tb__DOT__Cin)))) 
                                                 & ((1U 
                                                     & ((IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k) 
                                                        >> 3U)) 
                                                    != 
                                                    (1U 
                                                     & ((IData)(vlSelf->tb__DOT__in_a) 
                                                        >> 3U))));
        vlSelf->tb__DOT__unnamedblk1__DOT__c = (1U 
                                                & ((IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k) 
                                                   >> 4U));
        vlSelf->tb__DOT__unnamedblk1__DOT__z = ((0U 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k)))
                                                 ? 1U
                                                 : 0U);
        co_await vlSelf->__VdlySched.delay(0x14ULL, 
                                           "/home/lhjysyx/DigitalCircuitsExperiments/exp3_ALU/adder/vsrc/tb.v", 
                                           55);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb__DOT__check__0__resof = vlSelf->tb__DOT__unnamedblk1__DOT__of;
        __Vtask_tb__DOT__check__0__reszf = vlSelf->tb__DOT__unnamedblk1__DOT__z;
        __Vtask_tb__DOT__check__0__rescf = vlSelf->tb__DOT__unnamedblk1__DOT__c;
        __Vtask_tb__DOT__check__0__addof = vlSelf->tb__DOT__Overflow;
        __Vtask_tb__DOT__check__0__addzf = (1U & (~ (IData)(
                                                            (0U 
                                                             != (IData)(vlSelf->tb__DOT__Result)))));
        __Vtask_tb__DOT__check__0__addcf = vlSelf->tb__DOT__Carry;
        __Vtask_tb__DOT__check__0__res = (0xfU & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k));
        __Vtask_tb__DOT__check__0__addres = vlSelf->tb__DOT__Result;
        __Vtask_tb__DOT__check__0__task_Cin = vlSelf->tb__DOT__Cin;
        __Vtask_tb__DOT__check__0__task_b = vlSelf->tb__DOT__in_b;
        __Vtask_tb__DOT__check__0__task_a = vlSelf->tb__DOT__in_a;
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__0__addres) 
                         != (IData)(__Vtask_tb__DOT__check__0__res)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b,result should be %2#, get %2#\n",
                      4,__Vtask_tb__DOT__check__0__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__0__task_b),
                      1,__Vtask_tb__DOT__check__0__task_Cin,
                      4,(IData)(__Vtask_tb__DOT__check__0__res),
                      4,__Vtask_tb__DOT__check__0__addres);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__0__addcf) 
                         != (IData)(__Vtask_tb__DOT__check__0__rescf)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Carry should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__0__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__0__task_b),
                      1,__Vtask_tb__DOT__check__0__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__0__rescf),
                      1,__Vtask_tb__DOT__check__0__addcf);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__0__addof) 
                         != (IData)(__Vtask_tb__DOT__check__0__resof)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Overflow should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__0__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__0__task_b),
                      1,__Vtask_tb__DOT__check__0__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__0__resof),
                      1,__Vtask_tb__DOT__check__0__addof);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__0__addzf) 
                         != (IData)(__Vtask_tb__DOT__check__0__reszf)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Zero should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__0__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__0__task_b),
                      1,__Vtask_tb__DOT__check__0__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__0__reszf),
                      1,__Vtask_tb__DOT__check__0__addzf);
        }
        vlSelf->tb__DOT__unnamedblk1__DOT__j = 7U;
        vlSelf->tb__DOT__in_a = (0xfU & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__i));
        vlSelf->tb__DOT__in_b = 7U;
        vlSelf->tb__DOT__Cin = 0U;
        vlSelf->tb__DOT__unnamedblk1__DOT__k = (0x1fU 
                                                & ((IData)(vlSelf->tb__DOT__in_a) 
                                                   + (IData)(vlSelf->tb__DOT__in_b)));
        vlSelf->tb__DOT__unnamedblk1__DOT__of = (((1U 
                                                   & ((IData)(vlSelf->tb__DOT__in_a) 
                                                      >> 3U)) 
                                                  == (IData)(
                                                             (((IData)(vlSelf->tb__DOT__in_b) 
                                                               >> 3U) 
                                                              ^ (IData)(vlSelf->tb__DOT__Cin)))) 
                                                 & ((1U 
                                                     & ((IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k) 
                                                        >> 3U)) 
                                                    != 
                                                    (1U 
                                                     & ((IData)(vlSelf->tb__DOT__in_a) 
                                                        >> 3U))));
        vlSelf->tb__DOT__unnamedblk1__DOT__c = (1U 
                                                & ((IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k) 
                                                   >> 4U));
        vlSelf->tb__DOT__unnamedblk1__DOT__z = ((0U 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k)))
                                                 ? 1U
                                                 : 0U);
        co_await vlSelf->__VdlySched.delay(0x14ULL, 
                                           "/home/lhjysyx/DigitalCircuitsExperiments/exp3_ALU/adder/vsrc/tb.v", 
                                           55);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb__DOT__check__0__resof = vlSelf->tb__DOT__unnamedblk1__DOT__of;
        __Vtask_tb__DOT__check__0__reszf = vlSelf->tb__DOT__unnamedblk1__DOT__z;
        __Vtask_tb__DOT__check__0__rescf = vlSelf->tb__DOT__unnamedblk1__DOT__c;
        __Vtask_tb__DOT__check__0__addof = vlSelf->tb__DOT__Overflow;
        __Vtask_tb__DOT__check__0__addzf = (1U & (~ (IData)(
                                                            (0U 
                                                             != (IData)(vlSelf->tb__DOT__Result)))));
        __Vtask_tb__DOT__check__0__addcf = vlSelf->tb__DOT__Carry;
        __Vtask_tb__DOT__check__0__res = (0xfU & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k));
        __Vtask_tb__DOT__check__0__addres = vlSelf->tb__DOT__Result;
        __Vtask_tb__DOT__check__0__task_Cin = vlSelf->tb__DOT__Cin;
        __Vtask_tb__DOT__check__0__task_b = vlSelf->tb__DOT__in_b;
        __Vtask_tb__DOT__check__0__task_a = vlSelf->tb__DOT__in_a;
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__0__addres) 
                         != (IData)(__Vtask_tb__DOT__check__0__res)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b,result should be %2#, get %2#\n",
                      4,__Vtask_tb__DOT__check__0__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__0__task_b),
                      1,__Vtask_tb__DOT__check__0__task_Cin,
                      4,(IData)(__Vtask_tb__DOT__check__0__res),
                      4,__Vtask_tb__DOT__check__0__addres);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__0__addcf) 
                         != (IData)(__Vtask_tb__DOT__check__0__rescf)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Carry should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__0__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__0__task_b),
                      1,__Vtask_tb__DOT__check__0__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__0__rescf),
                      1,__Vtask_tb__DOT__check__0__addcf);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__0__addof) 
                         != (IData)(__Vtask_tb__DOT__check__0__resof)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Overflow should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__0__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__0__task_b),
                      1,__Vtask_tb__DOT__check__0__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__0__resof),
                      1,__Vtask_tb__DOT__check__0__addof);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__0__addzf) 
                         != (IData)(__Vtask_tb__DOT__check__0__reszf)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Zero should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__0__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__0__task_b),
                      1,__Vtask_tb__DOT__check__0__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__0__reszf),
                      1,__Vtask_tb__DOT__check__0__addzf);
        }
        vlSelf->tb__DOT__unnamedblk1__DOT__j = 8U;
        vlSelf->tb__DOT__in_a = (0xfU & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__i));
        vlSelf->tb__DOT__in_b = 8U;
        vlSelf->tb__DOT__Cin = 0U;
        vlSelf->tb__DOT__unnamedblk1__DOT__k = (0x1fU 
                                                & ((IData)(vlSelf->tb__DOT__in_a) 
                                                   + (IData)(vlSelf->tb__DOT__in_b)));
        vlSelf->tb__DOT__unnamedblk1__DOT__of = (((1U 
                                                   & ((IData)(vlSelf->tb__DOT__in_a) 
                                                      >> 3U)) 
                                                  == (IData)(
                                                             (((IData)(vlSelf->tb__DOT__in_b) 
                                                               >> 3U) 
                                                              ^ (IData)(vlSelf->tb__DOT__Cin)))) 
                                                 & ((1U 
                                                     & ((IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k) 
                                                        >> 3U)) 
                                                    != 
                                                    (1U 
                                                     & ((IData)(vlSelf->tb__DOT__in_a) 
                                                        >> 3U))));
        vlSelf->tb__DOT__unnamedblk1__DOT__c = (1U 
                                                & ((IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k) 
                                                   >> 4U));
        vlSelf->tb__DOT__unnamedblk1__DOT__z = ((0U 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k)))
                                                 ? 1U
                                                 : 0U);
        co_await vlSelf->__VdlySched.delay(0x14ULL, 
                                           "/home/lhjysyx/DigitalCircuitsExperiments/exp3_ALU/adder/vsrc/tb.v", 
                                           55);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb__DOT__check__0__resof = vlSelf->tb__DOT__unnamedblk1__DOT__of;
        __Vtask_tb__DOT__check__0__reszf = vlSelf->tb__DOT__unnamedblk1__DOT__z;
        __Vtask_tb__DOT__check__0__rescf = vlSelf->tb__DOT__unnamedblk1__DOT__c;
        __Vtask_tb__DOT__check__0__addof = vlSelf->tb__DOT__Overflow;
        __Vtask_tb__DOT__check__0__addzf = (1U & (~ (IData)(
                                                            (0U 
                                                             != (IData)(vlSelf->tb__DOT__Result)))));
        __Vtask_tb__DOT__check__0__addcf = vlSelf->tb__DOT__Carry;
        __Vtask_tb__DOT__check__0__res = (0xfU & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k));
        __Vtask_tb__DOT__check__0__addres = vlSelf->tb__DOT__Result;
        __Vtask_tb__DOT__check__0__task_Cin = vlSelf->tb__DOT__Cin;
        __Vtask_tb__DOT__check__0__task_b = vlSelf->tb__DOT__in_b;
        __Vtask_tb__DOT__check__0__task_a = vlSelf->tb__DOT__in_a;
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__0__addres) 
                         != (IData)(__Vtask_tb__DOT__check__0__res)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b,result should be %2#, get %2#\n",
                      4,__Vtask_tb__DOT__check__0__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__0__task_b),
                      1,__Vtask_tb__DOT__check__0__task_Cin,
                      4,(IData)(__Vtask_tb__DOT__check__0__res),
                      4,__Vtask_tb__DOT__check__0__addres);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__0__addcf) 
                         != (IData)(__Vtask_tb__DOT__check__0__rescf)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Carry should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__0__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__0__task_b),
                      1,__Vtask_tb__DOT__check__0__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__0__rescf),
                      1,__Vtask_tb__DOT__check__0__addcf);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__0__addof) 
                         != (IData)(__Vtask_tb__DOT__check__0__resof)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Overflow should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__0__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__0__task_b),
                      1,__Vtask_tb__DOT__check__0__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__0__resof),
                      1,__Vtask_tb__DOT__check__0__addof);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__0__addzf) 
                         != (IData)(__Vtask_tb__DOT__check__0__reszf)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Zero should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__0__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__0__task_b),
                      1,__Vtask_tb__DOT__check__0__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__0__reszf),
                      1,__Vtask_tb__DOT__check__0__addzf);
        }
        vlSelf->tb__DOT__unnamedblk1__DOT__j = 9U;
        vlSelf->tb__DOT__in_a = (0xfU & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__i));
        vlSelf->tb__DOT__in_b = 9U;
        vlSelf->tb__DOT__Cin = 0U;
        vlSelf->tb__DOT__unnamedblk1__DOT__k = (0x1fU 
                                                & ((IData)(vlSelf->tb__DOT__in_a) 
                                                   + (IData)(vlSelf->tb__DOT__in_b)));
        vlSelf->tb__DOT__unnamedblk1__DOT__of = (((1U 
                                                   & ((IData)(vlSelf->tb__DOT__in_a) 
                                                      >> 3U)) 
                                                  == (IData)(
                                                             (((IData)(vlSelf->tb__DOT__in_b) 
                                                               >> 3U) 
                                                              ^ (IData)(vlSelf->tb__DOT__Cin)))) 
                                                 & ((1U 
                                                     & ((IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k) 
                                                        >> 3U)) 
                                                    != 
                                                    (1U 
                                                     & ((IData)(vlSelf->tb__DOT__in_a) 
                                                        >> 3U))));
        vlSelf->tb__DOT__unnamedblk1__DOT__c = (1U 
                                                & ((IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k) 
                                                   >> 4U));
        vlSelf->tb__DOT__unnamedblk1__DOT__z = ((0U 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k)))
                                                 ? 1U
                                                 : 0U);
        co_await vlSelf->__VdlySched.delay(0x14ULL, 
                                           "/home/lhjysyx/DigitalCircuitsExperiments/exp3_ALU/adder/vsrc/tb.v", 
                                           55);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb__DOT__check__0__resof = vlSelf->tb__DOT__unnamedblk1__DOT__of;
        __Vtask_tb__DOT__check__0__reszf = vlSelf->tb__DOT__unnamedblk1__DOT__z;
        __Vtask_tb__DOT__check__0__rescf = vlSelf->tb__DOT__unnamedblk1__DOT__c;
        __Vtask_tb__DOT__check__0__addof = vlSelf->tb__DOT__Overflow;
        __Vtask_tb__DOT__check__0__addzf = (1U & (~ (IData)(
                                                            (0U 
                                                             != (IData)(vlSelf->tb__DOT__Result)))));
        __Vtask_tb__DOT__check__0__addcf = vlSelf->tb__DOT__Carry;
        __Vtask_tb__DOT__check__0__res = (0xfU & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k));
        __Vtask_tb__DOT__check__0__addres = vlSelf->tb__DOT__Result;
        __Vtask_tb__DOT__check__0__task_Cin = vlSelf->tb__DOT__Cin;
        __Vtask_tb__DOT__check__0__task_b = vlSelf->tb__DOT__in_b;
        __Vtask_tb__DOT__check__0__task_a = vlSelf->tb__DOT__in_a;
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__0__addres) 
                         != (IData)(__Vtask_tb__DOT__check__0__res)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b,result should be %2#, get %2#\n",
                      4,__Vtask_tb__DOT__check__0__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__0__task_b),
                      1,__Vtask_tb__DOT__check__0__task_Cin,
                      4,(IData)(__Vtask_tb__DOT__check__0__res),
                      4,__Vtask_tb__DOT__check__0__addres);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__0__addcf) 
                         != (IData)(__Vtask_tb__DOT__check__0__rescf)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Carry should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__0__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__0__task_b),
                      1,__Vtask_tb__DOT__check__0__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__0__rescf),
                      1,__Vtask_tb__DOT__check__0__addcf);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__0__addof) 
                         != (IData)(__Vtask_tb__DOT__check__0__resof)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Overflow should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__0__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__0__task_b),
                      1,__Vtask_tb__DOT__check__0__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__0__resof),
                      1,__Vtask_tb__DOT__check__0__addof);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__0__addzf) 
                         != (IData)(__Vtask_tb__DOT__check__0__reszf)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Zero should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__0__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__0__task_b),
                      1,__Vtask_tb__DOT__check__0__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__0__reszf),
                      1,__Vtask_tb__DOT__check__0__addzf);
        }
        vlSelf->tb__DOT__unnamedblk1__DOT__j = 0xaU;
        vlSelf->tb__DOT__in_a = (0xfU & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__i));
        vlSelf->tb__DOT__in_b = 0xaU;
        vlSelf->tb__DOT__Cin = 0U;
        vlSelf->tb__DOT__unnamedblk1__DOT__k = (0x1fU 
                                                & ((IData)(vlSelf->tb__DOT__in_a) 
                                                   + (IData)(vlSelf->tb__DOT__in_b)));
        vlSelf->tb__DOT__unnamedblk1__DOT__of = (((1U 
                                                   & ((IData)(vlSelf->tb__DOT__in_a) 
                                                      >> 3U)) 
                                                  == (IData)(
                                                             (((IData)(vlSelf->tb__DOT__in_b) 
                                                               >> 3U) 
                                                              ^ (IData)(vlSelf->tb__DOT__Cin)))) 
                                                 & ((1U 
                                                     & ((IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k) 
                                                        >> 3U)) 
                                                    != 
                                                    (1U 
                                                     & ((IData)(vlSelf->tb__DOT__in_a) 
                                                        >> 3U))));
        vlSelf->tb__DOT__unnamedblk1__DOT__c = (1U 
                                                & ((IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k) 
                                                   >> 4U));
        vlSelf->tb__DOT__unnamedblk1__DOT__z = ((0U 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k)))
                                                 ? 1U
                                                 : 0U);
        co_await vlSelf->__VdlySched.delay(0x14ULL, 
                                           "/home/lhjysyx/DigitalCircuitsExperiments/exp3_ALU/adder/vsrc/tb.v", 
                                           55);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb__DOT__check__0__resof = vlSelf->tb__DOT__unnamedblk1__DOT__of;
        __Vtask_tb__DOT__check__0__reszf = vlSelf->tb__DOT__unnamedblk1__DOT__z;
        __Vtask_tb__DOT__check__0__rescf = vlSelf->tb__DOT__unnamedblk1__DOT__c;
        __Vtask_tb__DOT__check__0__addof = vlSelf->tb__DOT__Overflow;
        __Vtask_tb__DOT__check__0__addzf = (1U & (~ (IData)(
                                                            (0U 
                                                             != (IData)(vlSelf->tb__DOT__Result)))));
        __Vtask_tb__DOT__check__0__addcf = vlSelf->tb__DOT__Carry;
        __Vtask_tb__DOT__check__0__res = (0xfU & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k));
        __Vtask_tb__DOT__check__0__addres = vlSelf->tb__DOT__Result;
        __Vtask_tb__DOT__check__0__task_Cin = vlSelf->tb__DOT__Cin;
        __Vtask_tb__DOT__check__0__task_b = vlSelf->tb__DOT__in_b;
        __Vtask_tb__DOT__check__0__task_a = vlSelf->tb__DOT__in_a;
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__0__addres) 
                         != (IData)(__Vtask_tb__DOT__check__0__res)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b,result should be %2#, get %2#\n",
                      4,__Vtask_tb__DOT__check__0__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__0__task_b),
                      1,__Vtask_tb__DOT__check__0__task_Cin,
                      4,(IData)(__Vtask_tb__DOT__check__0__res),
                      4,__Vtask_tb__DOT__check__0__addres);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__0__addcf) 
                         != (IData)(__Vtask_tb__DOT__check__0__rescf)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Carry should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__0__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__0__task_b),
                      1,__Vtask_tb__DOT__check__0__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__0__rescf),
                      1,__Vtask_tb__DOT__check__0__addcf);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__0__addof) 
                         != (IData)(__Vtask_tb__DOT__check__0__resof)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Overflow should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__0__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__0__task_b),
                      1,__Vtask_tb__DOT__check__0__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__0__resof),
                      1,__Vtask_tb__DOT__check__0__addof);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__0__addzf) 
                         != (IData)(__Vtask_tb__DOT__check__0__reszf)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Zero should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__0__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__0__task_b),
                      1,__Vtask_tb__DOT__check__0__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__0__reszf),
                      1,__Vtask_tb__DOT__check__0__addzf);
        }
        vlSelf->tb__DOT__unnamedblk1__DOT__j = 0xbU;
        vlSelf->tb__DOT__in_a = (0xfU & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__i));
        vlSelf->tb__DOT__in_b = 0xbU;
        vlSelf->tb__DOT__Cin = 0U;
        vlSelf->tb__DOT__unnamedblk1__DOT__k = (0x1fU 
                                                & ((IData)(vlSelf->tb__DOT__in_a) 
                                                   + (IData)(vlSelf->tb__DOT__in_b)));
        vlSelf->tb__DOT__unnamedblk1__DOT__of = (((1U 
                                                   & ((IData)(vlSelf->tb__DOT__in_a) 
                                                      >> 3U)) 
                                                  == (IData)(
                                                             (((IData)(vlSelf->tb__DOT__in_b) 
                                                               >> 3U) 
                                                              ^ (IData)(vlSelf->tb__DOT__Cin)))) 
                                                 & ((1U 
                                                     & ((IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k) 
                                                        >> 3U)) 
                                                    != 
                                                    (1U 
                                                     & ((IData)(vlSelf->tb__DOT__in_a) 
                                                        >> 3U))));
        vlSelf->tb__DOT__unnamedblk1__DOT__c = (1U 
                                                & ((IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k) 
                                                   >> 4U));
        vlSelf->tb__DOT__unnamedblk1__DOT__z = ((0U 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k)))
                                                 ? 1U
                                                 : 0U);
        co_await vlSelf->__VdlySched.delay(0x14ULL, 
                                           "/home/lhjysyx/DigitalCircuitsExperiments/exp3_ALU/adder/vsrc/tb.v", 
                                           55);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb__DOT__check__0__resof = vlSelf->tb__DOT__unnamedblk1__DOT__of;
        __Vtask_tb__DOT__check__0__reszf = vlSelf->tb__DOT__unnamedblk1__DOT__z;
        __Vtask_tb__DOT__check__0__rescf = vlSelf->tb__DOT__unnamedblk1__DOT__c;
        __Vtask_tb__DOT__check__0__addof = vlSelf->tb__DOT__Overflow;
        __Vtask_tb__DOT__check__0__addzf = (1U & (~ (IData)(
                                                            (0U 
                                                             != (IData)(vlSelf->tb__DOT__Result)))));
        __Vtask_tb__DOT__check__0__addcf = vlSelf->tb__DOT__Carry;
        __Vtask_tb__DOT__check__0__res = (0xfU & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k));
        __Vtask_tb__DOT__check__0__addres = vlSelf->tb__DOT__Result;
        __Vtask_tb__DOT__check__0__task_Cin = vlSelf->tb__DOT__Cin;
        __Vtask_tb__DOT__check__0__task_b = vlSelf->tb__DOT__in_b;
        __Vtask_tb__DOT__check__0__task_a = vlSelf->tb__DOT__in_a;
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__0__addres) 
                         != (IData)(__Vtask_tb__DOT__check__0__res)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b,result should be %2#, get %2#\n",
                      4,__Vtask_tb__DOT__check__0__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__0__task_b),
                      1,__Vtask_tb__DOT__check__0__task_Cin,
                      4,(IData)(__Vtask_tb__DOT__check__0__res),
                      4,__Vtask_tb__DOT__check__0__addres);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__0__addcf) 
                         != (IData)(__Vtask_tb__DOT__check__0__rescf)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Carry should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__0__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__0__task_b),
                      1,__Vtask_tb__DOT__check__0__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__0__rescf),
                      1,__Vtask_tb__DOT__check__0__addcf);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__0__addof) 
                         != (IData)(__Vtask_tb__DOT__check__0__resof)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Overflow should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__0__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__0__task_b),
                      1,__Vtask_tb__DOT__check__0__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__0__resof),
                      1,__Vtask_tb__DOT__check__0__addof);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__0__addzf) 
                         != (IData)(__Vtask_tb__DOT__check__0__reszf)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Zero should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__0__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__0__task_b),
                      1,__Vtask_tb__DOT__check__0__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__0__reszf),
                      1,__Vtask_tb__DOT__check__0__addzf);
        }
        vlSelf->tb__DOT__unnamedblk1__DOT__j = 0xcU;
        vlSelf->tb__DOT__in_a = (0xfU & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__i));
        vlSelf->tb__DOT__in_b = 0xcU;
        vlSelf->tb__DOT__Cin = 0U;
        vlSelf->tb__DOT__unnamedblk1__DOT__k = (0x1fU 
                                                & ((IData)(vlSelf->tb__DOT__in_a) 
                                                   + (IData)(vlSelf->tb__DOT__in_b)));
        vlSelf->tb__DOT__unnamedblk1__DOT__of = (((1U 
                                                   & ((IData)(vlSelf->tb__DOT__in_a) 
                                                      >> 3U)) 
                                                  == (IData)(
                                                             (((IData)(vlSelf->tb__DOT__in_b) 
                                                               >> 3U) 
                                                              ^ (IData)(vlSelf->tb__DOT__Cin)))) 
                                                 & ((1U 
                                                     & ((IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k) 
                                                        >> 3U)) 
                                                    != 
                                                    (1U 
                                                     & ((IData)(vlSelf->tb__DOT__in_a) 
                                                        >> 3U))));
        vlSelf->tb__DOT__unnamedblk1__DOT__c = (1U 
                                                & ((IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k) 
                                                   >> 4U));
        vlSelf->tb__DOT__unnamedblk1__DOT__z = ((0U 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k)))
                                                 ? 1U
                                                 : 0U);
        co_await vlSelf->__VdlySched.delay(0x14ULL, 
                                           "/home/lhjysyx/DigitalCircuitsExperiments/exp3_ALU/adder/vsrc/tb.v", 
                                           55);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb__DOT__check__0__resof = vlSelf->tb__DOT__unnamedblk1__DOT__of;
        __Vtask_tb__DOT__check__0__reszf = vlSelf->tb__DOT__unnamedblk1__DOT__z;
        __Vtask_tb__DOT__check__0__rescf = vlSelf->tb__DOT__unnamedblk1__DOT__c;
        __Vtask_tb__DOT__check__0__addof = vlSelf->tb__DOT__Overflow;
        __Vtask_tb__DOT__check__0__addzf = (1U & (~ (IData)(
                                                            (0U 
                                                             != (IData)(vlSelf->tb__DOT__Result)))));
        __Vtask_tb__DOT__check__0__addcf = vlSelf->tb__DOT__Carry;
        __Vtask_tb__DOT__check__0__res = (0xfU & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k));
        __Vtask_tb__DOT__check__0__addres = vlSelf->tb__DOT__Result;
        __Vtask_tb__DOT__check__0__task_Cin = vlSelf->tb__DOT__Cin;
        __Vtask_tb__DOT__check__0__task_b = vlSelf->tb__DOT__in_b;
        __Vtask_tb__DOT__check__0__task_a = vlSelf->tb__DOT__in_a;
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__0__addres) 
                         != (IData)(__Vtask_tb__DOT__check__0__res)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b,result should be %2#, get %2#\n",
                      4,__Vtask_tb__DOT__check__0__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__0__task_b),
                      1,__Vtask_tb__DOT__check__0__task_Cin,
                      4,(IData)(__Vtask_tb__DOT__check__0__res),
                      4,__Vtask_tb__DOT__check__0__addres);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__0__addcf) 
                         != (IData)(__Vtask_tb__DOT__check__0__rescf)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Carry should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__0__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__0__task_b),
                      1,__Vtask_tb__DOT__check__0__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__0__rescf),
                      1,__Vtask_tb__DOT__check__0__addcf);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__0__addof) 
                         != (IData)(__Vtask_tb__DOT__check__0__resof)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Overflow should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__0__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__0__task_b),
                      1,__Vtask_tb__DOT__check__0__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__0__resof),
                      1,__Vtask_tb__DOT__check__0__addof);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__0__addzf) 
                         != (IData)(__Vtask_tb__DOT__check__0__reszf)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Zero should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__0__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__0__task_b),
                      1,__Vtask_tb__DOT__check__0__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__0__reszf),
                      1,__Vtask_tb__DOT__check__0__addzf);
        }
        vlSelf->tb__DOT__unnamedblk1__DOT__j = 0xdU;
        vlSelf->tb__DOT__in_a = (0xfU & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__i));
        vlSelf->tb__DOT__in_b = 0xdU;
        vlSelf->tb__DOT__Cin = 0U;
        vlSelf->tb__DOT__unnamedblk1__DOT__k = (0x1fU 
                                                & ((IData)(vlSelf->tb__DOT__in_a) 
                                                   + (IData)(vlSelf->tb__DOT__in_b)));
        vlSelf->tb__DOT__unnamedblk1__DOT__of = (((1U 
                                                   & ((IData)(vlSelf->tb__DOT__in_a) 
                                                      >> 3U)) 
                                                  == (IData)(
                                                             (((IData)(vlSelf->tb__DOT__in_b) 
                                                               >> 3U) 
                                                              ^ (IData)(vlSelf->tb__DOT__Cin)))) 
                                                 & ((1U 
                                                     & ((IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k) 
                                                        >> 3U)) 
                                                    != 
                                                    (1U 
                                                     & ((IData)(vlSelf->tb__DOT__in_a) 
                                                        >> 3U))));
        vlSelf->tb__DOT__unnamedblk1__DOT__c = (1U 
                                                & ((IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k) 
                                                   >> 4U));
        vlSelf->tb__DOT__unnamedblk1__DOT__z = ((0U 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k)))
                                                 ? 1U
                                                 : 0U);
        co_await vlSelf->__VdlySched.delay(0x14ULL, 
                                           "/home/lhjysyx/DigitalCircuitsExperiments/exp3_ALU/adder/vsrc/tb.v", 
                                           55);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb__DOT__check__0__resof = vlSelf->tb__DOT__unnamedblk1__DOT__of;
        __Vtask_tb__DOT__check__0__reszf = vlSelf->tb__DOT__unnamedblk1__DOT__z;
        __Vtask_tb__DOT__check__0__rescf = vlSelf->tb__DOT__unnamedblk1__DOT__c;
        __Vtask_tb__DOT__check__0__addof = vlSelf->tb__DOT__Overflow;
        __Vtask_tb__DOT__check__0__addzf = (1U & (~ (IData)(
                                                            (0U 
                                                             != (IData)(vlSelf->tb__DOT__Result)))));
        __Vtask_tb__DOT__check__0__addcf = vlSelf->tb__DOT__Carry;
        __Vtask_tb__DOT__check__0__res = (0xfU & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k));
        __Vtask_tb__DOT__check__0__addres = vlSelf->tb__DOT__Result;
        __Vtask_tb__DOT__check__0__task_Cin = vlSelf->tb__DOT__Cin;
        __Vtask_tb__DOT__check__0__task_b = vlSelf->tb__DOT__in_b;
        __Vtask_tb__DOT__check__0__task_a = vlSelf->tb__DOT__in_a;
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__0__addres) 
                         != (IData)(__Vtask_tb__DOT__check__0__res)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b,result should be %2#, get %2#\n",
                      4,__Vtask_tb__DOT__check__0__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__0__task_b),
                      1,__Vtask_tb__DOT__check__0__task_Cin,
                      4,(IData)(__Vtask_tb__DOT__check__0__res),
                      4,__Vtask_tb__DOT__check__0__addres);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__0__addcf) 
                         != (IData)(__Vtask_tb__DOT__check__0__rescf)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Carry should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__0__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__0__task_b),
                      1,__Vtask_tb__DOT__check__0__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__0__rescf),
                      1,__Vtask_tb__DOT__check__0__addcf);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__0__addof) 
                         != (IData)(__Vtask_tb__DOT__check__0__resof)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Overflow should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__0__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__0__task_b),
                      1,__Vtask_tb__DOT__check__0__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__0__resof),
                      1,__Vtask_tb__DOT__check__0__addof);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__0__addzf) 
                         != (IData)(__Vtask_tb__DOT__check__0__reszf)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Zero should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__0__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__0__task_b),
                      1,__Vtask_tb__DOT__check__0__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__0__reszf),
                      1,__Vtask_tb__DOT__check__0__addzf);
        }
        vlSelf->tb__DOT__unnamedblk1__DOT__j = 0xeU;
        vlSelf->tb__DOT__in_a = (0xfU & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__i));
        vlSelf->tb__DOT__in_b = 0xeU;
        vlSelf->tb__DOT__Cin = 0U;
        vlSelf->tb__DOT__unnamedblk1__DOT__k = (0x1fU 
                                                & ((IData)(vlSelf->tb__DOT__in_a) 
                                                   + (IData)(vlSelf->tb__DOT__in_b)));
        vlSelf->tb__DOT__unnamedblk1__DOT__of = (((1U 
                                                   & ((IData)(vlSelf->tb__DOT__in_a) 
                                                      >> 3U)) 
                                                  == (IData)(
                                                             (((IData)(vlSelf->tb__DOT__in_b) 
                                                               >> 3U) 
                                                              ^ (IData)(vlSelf->tb__DOT__Cin)))) 
                                                 & ((1U 
                                                     & ((IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k) 
                                                        >> 3U)) 
                                                    != 
                                                    (1U 
                                                     & ((IData)(vlSelf->tb__DOT__in_a) 
                                                        >> 3U))));
        vlSelf->tb__DOT__unnamedblk1__DOT__c = (1U 
                                                & ((IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k) 
                                                   >> 4U));
        vlSelf->tb__DOT__unnamedblk1__DOT__z = ((0U 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k)))
                                                 ? 1U
                                                 : 0U);
        co_await vlSelf->__VdlySched.delay(0x14ULL, 
                                           "/home/lhjysyx/DigitalCircuitsExperiments/exp3_ALU/adder/vsrc/tb.v", 
                                           55);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb__DOT__check__0__resof = vlSelf->tb__DOT__unnamedblk1__DOT__of;
        __Vtask_tb__DOT__check__0__reszf = vlSelf->tb__DOT__unnamedblk1__DOT__z;
        __Vtask_tb__DOT__check__0__rescf = vlSelf->tb__DOT__unnamedblk1__DOT__c;
        __Vtask_tb__DOT__check__0__addof = vlSelf->tb__DOT__Overflow;
        __Vtask_tb__DOT__check__0__addzf = (1U & (~ (IData)(
                                                            (0U 
                                                             != (IData)(vlSelf->tb__DOT__Result)))));
        __Vtask_tb__DOT__check__0__addcf = vlSelf->tb__DOT__Carry;
        __Vtask_tb__DOT__check__0__res = (0xfU & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k));
        __Vtask_tb__DOT__check__0__addres = vlSelf->tb__DOT__Result;
        __Vtask_tb__DOT__check__0__task_Cin = vlSelf->tb__DOT__Cin;
        __Vtask_tb__DOT__check__0__task_b = vlSelf->tb__DOT__in_b;
        __Vtask_tb__DOT__check__0__task_a = vlSelf->tb__DOT__in_a;
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__0__addres) 
                         != (IData)(__Vtask_tb__DOT__check__0__res)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b,result should be %2#, get %2#\n",
                      4,__Vtask_tb__DOT__check__0__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__0__task_b),
                      1,__Vtask_tb__DOT__check__0__task_Cin,
                      4,(IData)(__Vtask_tb__DOT__check__0__res),
                      4,__Vtask_tb__DOT__check__0__addres);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__0__addcf) 
                         != (IData)(__Vtask_tb__DOT__check__0__rescf)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Carry should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__0__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__0__task_b),
                      1,__Vtask_tb__DOT__check__0__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__0__rescf),
                      1,__Vtask_tb__DOT__check__0__addcf);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__0__addof) 
                         != (IData)(__Vtask_tb__DOT__check__0__resof)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Overflow should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__0__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__0__task_b),
                      1,__Vtask_tb__DOT__check__0__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__0__resof),
                      1,__Vtask_tb__DOT__check__0__addof);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__0__addzf) 
                         != (IData)(__Vtask_tb__DOT__check__0__reszf)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Zero should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__0__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__0__task_b),
                      1,__Vtask_tb__DOT__check__0__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__0__reszf),
                      1,__Vtask_tb__DOT__check__0__addzf);
        }
        vlSelf->tb__DOT__unnamedblk1__DOT__j = 0xfU;
        vlSelf->tb__DOT__in_a = (0xfU & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__i));
        vlSelf->tb__DOT__in_b = 0xfU;
        vlSelf->tb__DOT__Cin = 0U;
        vlSelf->tb__DOT__unnamedblk1__DOT__k = (0x1fU 
                                                & ((IData)(vlSelf->tb__DOT__in_a) 
                                                   + (IData)(vlSelf->tb__DOT__in_b)));
        vlSelf->tb__DOT__unnamedblk1__DOT__z = ((0U 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k)))
                                                 ? 1U
                                                 : 0U);
        vlSelf->tb__DOT__unnamedblk1__DOT__of = (((1U 
                                                   & ((IData)(vlSelf->tb__DOT__in_a) 
                                                      >> 3U)) 
                                                  == (IData)(
                                                             (((IData)(vlSelf->tb__DOT__in_b) 
                                                               >> 3U) 
                                                              ^ (IData)(vlSelf->tb__DOT__Cin)))) 
                                                 & ((1U 
                                                     & ((IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k) 
                                                        >> 3U)) 
                                                    != 
                                                    (1U 
                                                     & ((IData)(vlSelf->tb__DOT__in_a) 
                                                        >> 3U))));
        vlSelf->tb__DOT__unnamedblk1__DOT__c = (1U 
                                                & ((IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k) 
                                                   >> 4U));
        co_await vlSelf->__VdlySched.delay(0x14ULL, 
                                           "/home/lhjysyx/DigitalCircuitsExperiments/exp3_ALU/adder/vsrc/tb.v", 
                                           55);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb__DOT__check__0__resof = vlSelf->tb__DOT__unnamedblk1__DOT__of;
        __Vtask_tb__DOT__check__0__reszf = vlSelf->tb__DOT__unnamedblk1__DOT__z;
        __Vtask_tb__DOT__check__0__rescf = vlSelf->tb__DOT__unnamedblk1__DOT__c;
        __Vtask_tb__DOT__check__0__addof = vlSelf->tb__DOT__Overflow;
        __Vtask_tb__DOT__check__0__addzf = (1U & (~ (IData)(
                                                            (0U 
                                                             != (IData)(vlSelf->tb__DOT__Result)))));
        __Vtask_tb__DOT__check__0__addcf = vlSelf->tb__DOT__Carry;
        __Vtask_tb__DOT__check__0__res = (0xfU & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k));
        __Vtask_tb__DOT__check__0__addres = vlSelf->tb__DOT__Result;
        __Vtask_tb__DOT__check__0__task_Cin = vlSelf->tb__DOT__Cin;
        __Vtask_tb__DOT__check__0__task_b = vlSelf->tb__DOT__in_b;
        __Vtask_tb__DOT__check__0__task_a = vlSelf->tb__DOT__in_a;
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__0__addres) 
                         != (IData)(__Vtask_tb__DOT__check__0__res)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b,result should be %2#, get %2#\n",
                      4,__Vtask_tb__DOT__check__0__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__0__task_b),
                      1,__Vtask_tb__DOT__check__0__task_Cin,
                      4,(IData)(__Vtask_tb__DOT__check__0__res),
                      4,__Vtask_tb__DOT__check__0__addres);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__0__addcf) 
                         != (IData)(__Vtask_tb__DOT__check__0__rescf)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Carry should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__0__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__0__task_b),
                      1,__Vtask_tb__DOT__check__0__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__0__rescf),
                      1,__Vtask_tb__DOT__check__0__addcf);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__0__addof) 
                         != (IData)(__Vtask_tb__DOT__check__0__resof)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Overflow should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__0__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__0__task_b),
                      1,__Vtask_tb__DOT__check__0__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__0__resof),
                      1,__Vtask_tb__DOT__check__0__addof);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__0__addzf) 
                         != (IData)(__Vtask_tb__DOT__check__0__reszf)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Zero should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__0__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__0__task_b),
                      1,__Vtask_tb__DOT__check__0__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__0__reszf),
                      1,__Vtask_tb__DOT__check__0__addzf);
        }
        vlSelf->tb__DOT__unnamedblk1__DOT__j = 0x10U;
        vlSelf->tb__DOT__unnamedblk1__DOT__i = (0x1fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__i)));
    }
    vlSelf->tb__DOT__unnamedblk1__DOT__i = 0U;
    while ((0x10U > (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__i))) {
        vlSelf->tb__DOT__in_a = (0xfU & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__i));
        vlSelf->tb__DOT__in_b = 0U;
        vlSelf->tb__DOT__Cin = 1U;
        vlSelf->tb__DOT__unnamedblk1__DOT__k = (0x1fU 
                                                & (((IData)(vlSelf->tb__DOT__in_a) 
                                                    + 
                                                    ((IData)(vlSelf->tb__DOT__in_b) 
                                                     ^ 
                                                     (0xfU 
                                                      & (- (IData)((IData)(vlSelf->tb__DOT__Cin)))))) 
                                                   + (IData)(vlSelf->tb__DOT__Cin)));
        vlSelf->tb__DOT__unnamedblk1__DOT__of = (((1U 
                                                   & ((IData)(vlSelf->tb__DOT__in_a) 
                                                      >> 3U)) 
                                                  == (IData)(
                                                             (((IData)(vlSelf->tb__DOT__in_b) 
                                                               >> 3U) 
                                                              ^ (IData)(vlSelf->tb__DOT__Cin)))) 
                                                 & ((1U 
                                                     & ((IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k) 
                                                        >> 3U)) 
                                                    != 
                                                    (1U 
                                                     & ((IData)(vlSelf->tb__DOT__in_a) 
                                                        >> 3U))));
        vlSelf->tb__DOT__unnamedblk1__DOT__c = (1U 
                                                & ((IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k) 
                                                   >> 4U));
        vlSelf->tb__DOT__unnamedblk1__DOT__z = ((0U 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k)))
                                                 ? 1U
                                                 : 0U);
        co_await vlSelf->__VdlySched.delay(0x14ULL, 
                                           "/home/lhjysyx/DigitalCircuitsExperiments/exp3_ALU/adder/vsrc/tb.v", 
                                           70);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb__DOT__check__1__resof = vlSelf->tb__DOT__unnamedblk1__DOT__of;
        __Vtask_tb__DOT__check__1__reszf = vlSelf->tb__DOT__unnamedblk1__DOT__z;
        __Vtask_tb__DOT__check__1__rescf = vlSelf->tb__DOT__unnamedblk1__DOT__c;
        __Vtask_tb__DOT__check__1__addof = vlSelf->tb__DOT__Overflow;
        __Vtask_tb__DOT__check__1__addzf = (1U & (~ (IData)(
                                                            (0U 
                                                             != (IData)(vlSelf->tb__DOT__Result)))));
        __Vtask_tb__DOT__check__1__addcf = vlSelf->tb__DOT__Carry;
        __Vtask_tb__DOT__check__1__res = (0xfU & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k));
        __Vtask_tb__DOT__check__1__addres = vlSelf->tb__DOT__Result;
        __Vtask_tb__DOT__check__1__task_Cin = vlSelf->tb__DOT__Cin;
        __Vtask_tb__DOT__check__1__task_b = vlSelf->tb__DOT__in_b;
        __Vtask_tb__DOT__check__1__task_a = vlSelf->tb__DOT__in_a;
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__1__addres) 
                         != (IData)(__Vtask_tb__DOT__check__1__res)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b,result should be %2#, get %2#\n",
                      4,__Vtask_tb__DOT__check__1__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__1__task_b),
                      1,__Vtask_tb__DOT__check__1__task_Cin,
                      4,(IData)(__Vtask_tb__DOT__check__1__res),
                      4,__Vtask_tb__DOT__check__1__addres);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__1__addcf) 
                         != (IData)(__Vtask_tb__DOT__check__1__rescf)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Carry should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__1__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__1__task_b),
                      1,__Vtask_tb__DOT__check__1__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__1__rescf),
                      1,__Vtask_tb__DOT__check__1__addcf);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__1__addof) 
                         != (IData)(__Vtask_tb__DOT__check__1__resof)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Overflow should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__1__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__1__task_b),
                      1,__Vtask_tb__DOT__check__1__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__1__resof),
                      1,__Vtask_tb__DOT__check__1__addof);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__1__addzf) 
                         != (IData)(__Vtask_tb__DOT__check__1__reszf)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Zero should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__1__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__1__task_b),
                      1,__Vtask_tb__DOT__check__1__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__1__reszf),
                      1,__Vtask_tb__DOT__check__1__addzf);
        }
        vlSelf->tb__DOT__unnamedblk1__DOT__j = 1U;
        vlSelf->tb__DOT__in_a = (0xfU & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__i));
        vlSelf->tb__DOT__in_b = 1U;
        vlSelf->tb__DOT__Cin = 1U;
        vlSelf->tb__DOT__unnamedblk1__DOT__k = (0x1fU 
                                                & (((IData)(vlSelf->tb__DOT__in_a) 
                                                    + 
                                                    ((IData)(vlSelf->tb__DOT__in_b) 
                                                     ^ 
                                                     (0xfU 
                                                      & (- (IData)((IData)(vlSelf->tb__DOT__Cin)))))) 
                                                   + (IData)(vlSelf->tb__DOT__Cin)));
        vlSelf->tb__DOT__unnamedblk1__DOT__of = (((1U 
                                                   & ((IData)(vlSelf->tb__DOT__in_a) 
                                                      >> 3U)) 
                                                  == (IData)(
                                                             (((IData)(vlSelf->tb__DOT__in_b) 
                                                               >> 3U) 
                                                              ^ (IData)(vlSelf->tb__DOT__Cin)))) 
                                                 & ((1U 
                                                     & ((IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k) 
                                                        >> 3U)) 
                                                    != 
                                                    (1U 
                                                     & ((IData)(vlSelf->tb__DOT__in_a) 
                                                        >> 3U))));
        vlSelf->tb__DOT__unnamedblk1__DOT__c = (1U 
                                                & ((IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k) 
                                                   >> 4U));
        vlSelf->tb__DOT__unnamedblk1__DOT__z = ((0U 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k)))
                                                 ? 1U
                                                 : 0U);
        co_await vlSelf->__VdlySched.delay(0x14ULL, 
                                           "/home/lhjysyx/DigitalCircuitsExperiments/exp3_ALU/adder/vsrc/tb.v", 
                                           70);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb__DOT__check__1__resof = vlSelf->tb__DOT__unnamedblk1__DOT__of;
        __Vtask_tb__DOT__check__1__reszf = vlSelf->tb__DOT__unnamedblk1__DOT__z;
        __Vtask_tb__DOT__check__1__rescf = vlSelf->tb__DOT__unnamedblk1__DOT__c;
        __Vtask_tb__DOT__check__1__addof = vlSelf->tb__DOT__Overflow;
        __Vtask_tb__DOT__check__1__addzf = (1U & (~ (IData)(
                                                            (0U 
                                                             != (IData)(vlSelf->tb__DOT__Result)))));
        __Vtask_tb__DOT__check__1__addcf = vlSelf->tb__DOT__Carry;
        __Vtask_tb__DOT__check__1__res = (0xfU & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k));
        __Vtask_tb__DOT__check__1__addres = vlSelf->tb__DOT__Result;
        __Vtask_tb__DOT__check__1__task_Cin = vlSelf->tb__DOT__Cin;
        __Vtask_tb__DOT__check__1__task_b = vlSelf->tb__DOT__in_b;
        __Vtask_tb__DOT__check__1__task_a = vlSelf->tb__DOT__in_a;
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__1__addres) 
                         != (IData)(__Vtask_tb__DOT__check__1__res)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b,result should be %2#, get %2#\n",
                      4,__Vtask_tb__DOT__check__1__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__1__task_b),
                      1,__Vtask_tb__DOT__check__1__task_Cin,
                      4,(IData)(__Vtask_tb__DOT__check__1__res),
                      4,__Vtask_tb__DOT__check__1__addres);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__1__addcf) 
                         != (IData)(__Vtask_tb__DOT__check__1__rescf)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Carry should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__1__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__1__task_b),
                      1,__Vtask_tb__DOT__check__1__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__1__rescf),
                      1,__Vtask_tb__DOT__check__1__addcf);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__1__addof) 
                         != (IData)(__Vtask_tb__DOT__check__1__resof)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Overflow should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__1__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__1__task_b),
                      1,__Vtask_tb__DOT__check__1__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__1__resof),
                      1,__Vtask_tb__DOT__check__1__addof);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__1__addzf) 
                         != (IData)(__Vtask_tb__DOT__check__1__reszf)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Zero should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__1__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__1__task_b),
                      1,__Vtask_tb__DOT__check__1__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__1__reszf),
                      1,__Vtask_tb__DOT__check__1__addzf);
        }
        vlSelf->tb__DOT__unnamedblk1__DOT__j = 2U;
        vlSelf->tb__DOT__in_a = (0xfU & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__i));
        vlSelf->tb__DOT__in_b = 2U;
        vlSelf->tb__DOT__Cin = 1U;
        vlSelf->tb__DOT__unnamedblk1__DOT__k = (0x1fU 
                                                & (((IData)(vlSelf->tb__DOT__in_a) 
                                                    + 
                                                    ((IData)(vlSelf->tb__DOT__in_b) 
                                                     ^ 
                                                     (0xfU 
                                                      & (- (IData)((IData)(vlSelf->tb__DOT__Cin)))))) 
                                                   + (IData)(vlSelf->tb__DOT__Cin)));
        vlSelf->tb__DOT__unnamedblk1__DOT__of = (((1U 
                                                   & ((IData)(vlSelf->tb__DOT__in_a) 
                                                      >> 3U)) 
                                                  == (IData)(
                                                             (((IData)(vlSelf->tb__DOT__in_b) 
                                                               >> 3U) 
                                                              ^ (IData)(vlSelf->tb__DOT__Cin)))) 
                                                 & ((1U 
                                                     & ((IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k) 
                                                        >> 3U)) 
                                                    != 
                                                    (1U 
                                                     & ((IData)(vlSelf->tb__DOT__in_a) 
                                                        >> 3U))));
        vlSelf->tb__DOT__unnamedblk1__DOT__c = (1U 
                                                & ((IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k) 
                                                   >> 4U));
        vlSelf->tb__DOT__unnamedblk1__DOT__z = ((0U 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k)))
                                                 ? 1U
                                                 : 0U);
        co_await vlSelf->__VdlySched.delay(0x14ULL, 
                                           "/home/lhjysyx/DigitalCircuitsExperiments/exp3_ALU/adder/vsrc/tb.v", 
                                           70);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb__DOT__check__1__resof = vlSelf->tb__DOT__unnamedblk1__DOT__of;
        __Vtask_tb__DOT__check__1__reszf = vlSelf->tb__DOT__unnamedblk1__DOT__z;
        __Vtask_tb__DOT__check__1__rescf = vlSelf->tb__DOT__unnamedblk1__DOT__c;
        __Vtask_tb__DOT__check__1__addof = vlSelf->tb__DOT__Overflow;
        __Vtask_tb__DOT__check__1__addzf = (1U & (~ (IData)(
                                                            (0U 
                                                             != (IData)(vlSelf->tb__DOT__Result)))));
        __Vtask_tb__DOT__check__1__addcf = vlSelf->tb__DOT__Carry;
        __Vtask_tb__DOT__check__1__res = (0xfU & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k));
        __Vtask_tb__DOT__check__1__addres = vlSelf->tb__DOT__Result;
        __Vtask_tb__DOT__check__1__task_Cin = vlSelf->tb__DOT__Cin;
        __Vtask_tb__DOT__check__1__task_b = vlSelf->tb__DOT__in_b;
        __Vtask_tb__DOT__check__1__task_a = vlSelf->tb__DOT__in_a;
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__1__addres) 
                         != (IData)(__Vtask_tb__DOT__check__1__res)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b,result should be %2#, get %2#\n",
                      4,__Vtask_tb__DOT__check__1__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__1__task_b),
                      1,__Vtask_tb__DOT__check__1__task_Cin,
                      4,(IData)(__Vtask_tb__DOT__check__1__res),
                      4,__Vtask_tb__DOT__check__1__addres);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__1__addcf) 
                         != (IData)(__Vtask_tb__DOT__check__1__rescf)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Carry should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__1__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__1__task_b),
                      1,__Vtask_tb__DOT__check__1__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__1__rescf),
                      1,__Vtask_tb__DOT__check__1__addcf);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__1__addof) 
                         != (IData)(__Vtask_tb__DOT__check__1__resof)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Overflow should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__1__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__1__task_b),
                      1,__Vtask_tb__DOT__check__1__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__1__resof),
                      1,__Vtask_tb__DOT__check__1__addof);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__1__addzf) 
                         != (IData)(__Vtask_tb__DOT__check__1__reszf)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Zero should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__1__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__1__task_b),
                      1,__Vtask_tb__DOT__check__1__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__1__reszf),
                      1,__Vtask_tb__DOT__check__1__addzf);
        }
        vlSelf->tb__DOT__unnamedblk1__DOT__j = 3U;
        vlSelf->tb__DOT__in_a = (0xfU & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__i));
        vlSelf->tb__DOT__in_b = 3U;
        vlSelf->tb__DOT__Cin = 1U;
        vlSelf->tb__DOT__unnamedblk1__DOT__k = (0x1fU 
                                                & (((IData)(vlSelf->tb__DOT__in_a) 
                                                    + 
                                                    ((IData)(vlSelf->tb__DOT__in_b) 
                                                     ^ 
                                                     (0xfU 
                                                      & (- (IData)((IData)(vlSelf->tb__DOT__Cin)))))) 
                                                   + (IData)(vlSelf->tb__DOT__Cin)));
        vlSelf->tb__DOT__unnamedblk1__DOT__of = (((1U 
                                                   & ((IData)(vlSelf->tb__DOT__in_a) 
                                                      >> 3U)) 
                                                  == (IData)(
                                                             (((IData)(vlSelf->tb__DOT__in_b) 
                                                               >> 3U) 
                                                              ^ (IData)(vlSelf->tb__DOT__Cin)))) 
                                                 & ((1U 
                                                     & ((IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k) 
                                                        >> 3U)) 
                                                    != 
                                                    (1U 
                                                     & ((IData)(vlSelf->tb__DOT__in_a) 
                                                        >> 3U))));
        vlSelf->tb__DOT__unnamedblk1__DOT__c = (1U 
                                                & ((IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k) 
                                                   >> 4U));
        vlSelf->tb__DOT__unnamedblk1__DOT__z = ((0U 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k)))
                                                 ? 1U
                                                 : 0U);
        co_await vlSelf->__VdlySched.delay(0x14ULL, 
                                           "/home/lhjysyx/DigitalCircuitsExperiments/exp3_ALU/adder/vsrc/tb.v", 
                                           70);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb__DOT__check__1__resof = vlSelf->tb__DOT__unnamedblk1__DOT__of;
        __Vtask_tb__DOT__check__1__reszf = vlSelf->tb__DOT__unnamedblk1__DOT__z;
        __Vtask_tb__DOT__check__1__rescf = vlSelf->tb__DOT__unnamedblk1__DOT__c;
        __Vtask_tb__DOT__check__1__addof = vlSelf->tb__DOT__Overflow;
        __Vtask_tb__DOT__check__1__addzf = (1U & (~ (IData)(
                                                            (0U 
                                                             != (IData)(vlSelf->tb__DOT__Result)))));
        __Vtask_tb__DOT__check__1__addcf = vlSelf->tb__DOT__Carry;
        __Vtask_tb__DOT__check__1__res = (0xfU & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k));
        __Vtask_tb__DOT__check__1__addres = vlSelf->tb__DOT__Result;
        __Vtask_tb__DOT__check__1__task_Cin = vlSelf->tb__DOT__Cin;
        __Vtask_tb__DOT__check__1__task_b = vlSelf->tb__DOT__in_b;
        __Vtask_tb__DOT__check__1__task_a = vlSelf->tb__DOT__in_a;
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__1__addres) 
                         != (IData)(__Vtask_tb__DOT__check__1__res)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b,result should be %2#, get %2#\n",
                      4,__Vtask_tb__DOT__check__1__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__1__task_b),
                      1,__Vtask_tb__DOT__check__1__task_Cin,
                      4,(IData)(__Vtask_tb__DOT__check__1__res),
                      4,__Vtask_tb__DOT__check__1__addres);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__1__addcf) 
                         != (IData)(__Vtask_tb__DOT__check__1__rescf)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Carry should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__1__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__1__task_b),
                      1,__Vtask_tb__DOT__check__1__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__1__rescf),
                      1,__Vtask_tb__DOT__check__1__addcf);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__1__addof) 
                         != (IData)(__Vtask_tb__DOT__check__1__resof)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Overflow should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__1__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__1__task_b),
                      1,__Vtask_tb__DOT__check__1__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__1__resof),
                      1,__Vtask_tb__DOT__check__1__addof);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__1__addzf) 
                         != (IData)(__Vtask_tb__DOT__check__1__reszf)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Zero should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__1__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__1__task_b),
                      1,__Vtask_tb__DOT__check__1__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__1__reszf),
                      1,__Vtask_tb__DOT__check__1__addzf);
        }
        vlSelf->tb__DOT__unnamedblk1__DOT__j = 4U;
        vlSelf->tb__DOT__in_a = (0xfU & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__i));
        vlSelf->tb__DOT__in_b = 4U;
        vlSelf->tb__DOT__Cin = 1U;
        vlSelf->tb__DOT__unnamedblk1__DOT__k = (0x1fU 
                                                & (((IData)(vlSelf->tb__DOT__in_a) 
                                                    + 
                                                    ((IData)(vlSelf->tb__DOT__in_b) 
                                                     ^ 
                                                     (0xfU 
                                                      & (- (IData)((IData)(vlSelf->tb__DOT__Cin)))))) 
                                                   + (IData)(vlSelf->tb__DOT__Cin)));
        vlSelf->tb__DOT__unnamedblk1__DOT__of = (((1U 
                                                   & ((IData)(vlSelf->tb__DOT__in_a) 
                                                      >> 3U)) 
                                                  == (IData)(
                                                             (((IData)(vlSelf->tb__DOT__in_b) 
                                                               >> 3U) 
                                                              ^ (IData)(vlSelf->tb__DOT__Cin)))) 
                                                 & ((1U 
                                                     & ((IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k) 
                                                        >> 3U)) 
                                                    != 
                                                    (1U 
                                                     & ((IData)(vlSelf->tb__DOT__in_a) 
                                                        >> 3U))));
        vlSelf->tb__DOT__unnamedblk1__DOT__c = (1U 
                                                & ((IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k) 
                                                   >> 4U));
        vlSelf->tb__DOT__unnamedblk1__DOT__z = ((0U 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k)))
                                                 ? 1U
                                                 : 0U);
        co_await vlSelf->__VdlySched.delay(0x14ULL, 
                                           "/home/lhjysyx/DigitalCircuitsExperiments/exp3_ALU/adder/vsrc/tb.v", 
                                           70);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb__DOT__check__1__resof = vlSelf->tb__DOT__unnamedblk1__DOT__of;
        __Vtask_tb__DOT__check__1__reszf = vlSelf->tb__DOT__unnamedblk1__DOT__z;
        __Vtask_tb__DOT__check__1__rescf = vlSelf->tb__DOT__unnamedblk1__DOT__c;
        __Vtask_tb__DOT__check__1__addof = vlSelf->tb__DOT__Overflow;
        __Vtask_tb__DOT__check__1__addzf = (1U & (~ (IData)(
                                                            (0U 
                                                             != (IData)(vlSelf->tb__DOT__Result)))));
        __Vtask_tb__DOT__check__1__addcf = vlSelf->tb__DOT__Carry;
        __Vtask_tb__DOT__check__1__res = (0xfU & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k));
        __Vtask_tb__DOT__check__1__addres = vlSelf->tb__DOT__Result;
        __Vtask_tb__DOT__check__1__task_Cin = vlSelf->tb__DOT__Cin;
        __Vtask_tb__DOT__check__1__task_b = vlSelf->tb__DOT__in_b;
        __Vtask_tb__DOT__check__1__task_a = vlSelf->tb__DOT__in_a;
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__1__addres) 
                         != (IData)(__Vtask_tb__DOT__check__1__res)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b,result should be %2#, get %2#\n",
                      4,__Vtask_tb__DOT__check__1__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__1__task_b),
                      1,__Vtask_tb__DOT__check__1__task_Cin,
                      4,(IData)(__Vtask_tb__DOT__check__1__res),
                      4,__Vtask_tb__DOT__check__1__addres);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__1__addcf) 
                         != (IData)(__Vtask_tb__DOT__check__1__rescf)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Carry should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__1__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__1__task_b),
                      1,__Vtask_tb__DOT__check__1__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__1__rescf),
                      1,__Vtask_tb__DOT__check__1__addcf);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__1__addof) 
                         != (IData)(__Vtask_tb__DOT__check__1__resof)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Overflow should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__1__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__1__task_b),
                      1,__Vtask_tb__DOT__check__1__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__1__resof),
                      1,__Vtask_tb__DOT__check__1__addof);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__1__addzf) 
                         != (IData)(__Vtask_tb__DOT__check__1__reszf)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Zero should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__1__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__1__task_b),
                      1,__Vtask_tb__DOT__check__1__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__1__reszf),
                      1,__Vtask_tb__DOT__check__1__addzf);
        }
        vlSelf->tb__DOT__unnamedblk1__DOT__j = 5U;
        vlSelf->tb__DOT__in_a = (0xfU & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__i));
        vlSelf->tb__DOT__in_b = 5U;
        vlSelf->tb__DOT__Cin = 1U;
        vlSelf->tb__DOT__unnamedblk1__DOT__k = (0x1fU 
                                                & (((IData)(vlSelf->tb__DOT__in_a) 
                                                    + 
                                                    ((IData)(vlSelf->tb__DOT__in_b) 
                                                     ^ 
                                                     (0xfU 
                                                      & (- (IData)((IData)(vlSelf->tb__DOT__Cin)))))) 
                                                   + (IData)(vlSelf->tb__DOT__Cin)));
        vlSelf->tb__DOT__unnamedblk1__DOT__of = (((1U 
                                                   & ((IData)(vlSelf->tb__DOT__in_a) 
                                                      >> 3U)) 
                                                  == (IData)(
                                                             (((IData)(vlSelf->tb__DOT__in_b) 
                                                               >> 3U) 
                                                              ^ (IData)(vlSelf->tb__DOT__Cin)))) 
                                                 & ((1U 
                                                     & ((IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k) 
                                                        >> 3U)) 
                                                    != 
                                                    (1U 
                                                     & ((IData)(vlSelf->tb__DOT__in_a) 
                                                        >> 3U))));
        vlSelf->tb__DOT__unnamedblk1__DOT__c = (1U 
                                                & ((IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k) 
                                                   >> 4U));
        vlSelf->tb__DOT__unnamedblk1__DOT__z = ((0U 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k)))
                                                 ? 1U
                                                 : 0U);
        co_await vlSelf->__VdlySched.delay(0x14ULL, 
                                           "/home/lhjysyx/DigitalCircuitsExperiments/exp3_ALU/adder/vsrc/tb.v", 
                                           70);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb__DOT__check__1__resof = vlSelf->tb__DOT__unnamedblk1__DOT__of;
        __Vtask_tb__DOT__check__1__reszf = vlSelf->tb__DOT__unnamedblk1__DOT__z;
        __Vtask_tb__DOT__check__1__rescf = vlSelf->tb__DOT__unnamedblk1__DOT__c;
        __Vtask_tb__DOT__check__1__addof = vlSelf->tb__DOT__Overflow;
        __Vtask_tb__DOT__check__1__addzf = (1U & (~ (IData)(
                                                            (0U 
                                                             != (IData)(vlSelf->tb__DOT__Result)))));
        __Vtask_tb__DOT__check__1__addcf = vlSelf->tb__DOT__Carry;
        __Vtask_tb__DOT__check__1__res = (0xfU & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k));
        __Vtask_tb__DOT__check__1__addres = vlSelf->tb__DOT__Result;
        __Vtask_tb__DOT__check__1__task_Cin = vlSelf->tb__DOT__Cin;
        __Vtask_tb__DOT__check__1__task_b = vlSelf->tb__DOT__in_b;
        __Vtask_tb__DOT__check__1__task_a = vlSelf->tb__DOT__in_a;
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__1__addres) 
                         != (IData)(__Vtask_tb__DOT__check__1__res)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b,result should be %2#, get %2#\n",
                      4,__Vtask_tb__DOT__check__1__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__1__task_b),
                      1,__Vtask_tb__DOT__check__1__task_Cin,
                      4,(IData)(__Vtask_tb__DOT__check__1__res),
                      4,__Vtask_tb__DOT__check__1__addres);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__1__addcf) 
                         != (IData)(__Vtask_tb__DOT__check__1__rescf)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Carry should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__1__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__1__task_b),
                      1,__Vtask_tb__DOT__check__1__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__1__rescf),
                      1,__Vtask_tb__DOT__check__1__addcf);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__1__addof) 
                         != (IData)(__Vtask_tb__DOT__check__1__resof)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Overflow should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__1__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__1__task_b),
                      1,__Vtask_tb__DOT__check__1__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__1__resof),
                      1,__Vtask_tb__DOT__check__1__addof);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__1__addzf) 
                         != (IData)(__Vtask_tb__DOT__check__1__reszf)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Zero should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__1__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__1__task_b),
                      1,__Vtask_tb__DOT__check__1__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__1__reszf),
                      1,__Vtask_tb__DOT__check__1__addzf);
        }
        vlSelf->tb__DOT__unnamedblk1__DOT__j = 6U;
        vlSelf->tb__DOT__in_a = (0xfU & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__i));
        vlSelf->tb__DOT__in_b = 6U;
        vlSelf->tb__DOT__Cin = 1U;
        vlSelf->tb__DOT__unnamedblk1__DOT__k = (0x1fU 
                                                & (((IData)(vlSelf->tb__DOT__in_a) 
                                                    + 
                                                    ((IData)(vlSelf->tb__DOT__in_b) 
                                                     ^ 
                                                     (0xfU 
                                                      & (- (IData)((IData)(vlSelf->tb__DOT__Cin)))))) 
                                                   + (IData)(vlSelf->tb__DOT__Cin)));
        vlSelf->tb__DOT__unnamedblk1__DOT__of = (((1U 
                                                   & ((IData)(vlSelf->tb__DOT__in_a) 
                                                      >> 3U)) 
                                                  == (IData)(
                                                             (((IData)(vlSelf->tb__DOT__in_b) 
                                                               >> 3U) 
                                                              ^ (IData)(vlSelf->tb__DOT__Cin)))) 
                                                 & ((1U 
                                                     & ((IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k) 
                                                        >> 3U)) 
                                                    != 
                                                    (1U 
                                                     & ((IData)(vlSelf->tb__DOT__in_a) 
                                                        >> 3U))));
        vlSelf->tb__DOT__unnamedblk1__DOT__c = (1U 
                                                & ((IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k) 
                                                   >> 4U));
        vlSelf->tb__DOT__unnamedblk1__DOT__z = ((0U 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k)))
                                                 ? 1U
                                                 : 0U);
        co_await vlSelf->__VdlySched.delay(0x14ULL, 
                                           "/home/lhjysyx/DigitalCircuitsExperiments/exp3_ALU/adder/vsrc/tb.v", 
                                           70);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb__DOT__check__1__resof = vlSelf->tb__DOT__unnamedblk1__DOT__of;
        __Vtask_tb__DOT__check__1__reszf = vlSelf->tb__DOT__unnamedblk1__DOT__z;
        __Vtask_tb__DOT__check__1__rescf = vlSelf->tb__DOT__unnamedblk1__DOT__c;
        __Vtask_tb__DOT__check__1__addof = vlSelf->tb__DOT__Overflow;
        __Vtask_tb__DOT__check__1__addzf = (1U & (~ (IData)(
                                                            (0U 
                                                             != (IData)(vlSelf->tb__DOT__Result)))));
        __Vtask_tb__DOT__check__1__addcf = vlSelf->tb__DOT__Carry;
        __Vtask_tb__DOT__check__1__res = (0xfU & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k));
        __Vtask_tb__DOT__check__1__addres = vlSelf->tb__DOT__Result;
        __Vtask_tb__DOT__check__1__task_Cin = vlSelf->tb__DOT__Cin;
        __Vtask_tb__DOT__check__1__task_b = vlSelf->tb__DOT__in_b;
        __Vtask_tb__DOT__check__1__task_a = vlSelf->tb__DOT__in_a;
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__1__addres) 
                         != (IData)(__Vtask_tb__DOT__check__1__res)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b,result should be %2#, get %2#\n",
                      4,__Vtask_tb__DOT__check__1__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__1__task_b),
                      1,__Vtask_tb__DOT__check__1__task_Cin,
                      4,(IData)(__Vtask_tb__DOT__check__1__res),
                      4,__Vtask_tb__DOT__check__1__addres);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__1__addcf) 
                         != (IData)(__Vtask_tb__DOT__check__1__rescf)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Carry should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__1__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__1__task_b),
                      1,__Vtask_tb__DOT__check__1__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__1__rescf),
                      1,__Vtask_tb__DOT__check__1__addcf);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__1__addof) 
                         != (IData)(__Vtask_tb__DOT__check__1__resof)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Overflow should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__1__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__1__task_b),
                      1,__Vtask_tb__DOT__check__1__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__1__resof),
                      1,__Vtask_tb__DOT__check__1__addof);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__1__addzf) 
                         != (IData)(__Vtask_tb__DOT__check__1__reszf)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Zero should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__1__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__1__task_b),
                      1,__Vtask_tb__DOT__check__1__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__1__reszf),
                      1,__Vtask_tb__DOT__check__1__addzf);
        }
        vlSelf->tb__DOT__unnamedblk1__DOT__j = 7U;
        vlSelf->tb__DOT__in_a = (0xfU & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__i));
        vlSelf->tb__DOT__in_b = 7U;
        vlSelf->tb__DOT__Cin = 1U;
        vlSelf->tb__DOT__unnamedblk1__DOT__k = (0x1fU 
                                                & (((IData)(vlSelf->tb__DOT__in_a) 
                                                    + 
                                                    ((IData)(vlSelf->tb__DOT__in_b) 
                                                     ^ 
                                                     (0xfU 
                                                      & (- (IData)((IData)(vlSelf->tb__DOT__Cin)))))) 
                                                   + (IData)(vlSelf->tb__DOT__Cin)));
        vlSelf->tb__DOT__unnamedblk1__DOT__of = (((1U 
                                                   & ((IData)(vlSelf->tb__DOT__in_a) 
                                                      >> 3U)) 
                                                  == (IData)(
                                                             (((IData)(vlSelf->tb__DOT__in_b) 
                                                               >> 3U) 
                                                              ^ (IData)(vlSelf->tb__DOT__Cin)))) 
                                                 & ((1U 
                                                     & ((IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k) 
                                                        >> 3U)) 
                                                    != 
                                                    (1U 
                                                     & ((IData)(vlSelf->tb__DOT__in_a) 
                                                        >> 3U))));
        vlSelf->tb__DOT__unnamedblk1__DOT__c = (1U 
                                                & ((IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k) 
                                                   >> 4U));
        vlSelf->tb__DOT__unnamedblk1__DOT__z = ((0U 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k)))
                                                 ? 1U
                                                 : 0U);
        co_await vlSelf->__VdlySched.delay(0x14ULL, 
                                           "/home/lhjysyx/DigitalCircuitsExperiments/exp3_ALU/adder/vsrc/tb.v", 
                                           70);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb__DOT__check__1__resof = vlSelf->tb__DOT__unnamedblk1__DOT__of;
        __Vtask_tb__DOT__check__1__reszf = vlSelf->tb__DOT__unnamedblk1__DOT__z;
        __Vtask_tb__DOT__check__1__rescf = vlSelf->tb__DOT__unnamedblk1__DOT__c;
        __Vtask_tb__DOT__check__1__addof = vlSelf->tb__DOT__Overflow;
        __Vtask_tb__DOT__check__1__addzf = (1U & (~ (IData)(
                                                            (0U 
                                                             != (IData)(vlSelf->tb__DOT__Result)))));
        __Vtask_tb__DOT__check__1__addcf = vlSelf->tb__DOT__Carry;
        __Vtask_tb__DOT__check__1__res = (0xfU & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k));
        __Vtask_tb__DOT__check__1__addres = vlSelf->tb__DOT__Result;
        __Vtask_tb__DOT__check__1__task_Cin = vlSelf->tb__DOT__Cin;
        __Vtask_tb__DOT__check__1__task_b = vlSelf->tb__DOT__in_b;
        __Vtask_tb__DOT__check__1__task_a = vlSelf->tb__DOT__in_a;
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__1__addres) 
                         != (IData)(__Vtask_tb__DOT__check__1__res)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b,result should be %2#, get %2#\n",
                      4,__Vtask_tb__DOT__check__1__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__1__task_b),
                      1,__Vtask_tb__DOT__check__1__task_Cin,
                      4,(IData)(__Vtask_tb__DOT__check__1__res),
                      4,__Vtask_tb__DOT__check__1__addres);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__1__addcf) 
                         != (IData)(__Vtask_tb__DOT__check__1__rescf)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Carry should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__1__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__1__task_b),
                      1,__Vtask_tb__DOT__check__1__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__1__rescf),
                      1,__Vtask_tb__DOT__check__1__addcf);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__1__addof) 
                         != (IData)(__Vtask_tb__DOT__check__1__resof)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Overflow should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__1__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__1__task_b),
                      1,__Vtask_tb__DOT__check__1__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__1__resof),
                      1,__Vtask_tb__DOT__check__1__addof);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__1__addzf) 
                         != (IData)(__Vtask_tb__DOT__check__1__reszf)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Zero should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__1__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__1__task_b),
                      1,__Vtask_tb__DOT__check__1__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__1__reszf),
                      1,__Vtask_tb__DOT__check__1__addzf);
        }
        vlSelf->tb__DOT__unnamedblk1__DOT__j = 8U;
        vlSelf->tb__DOT__in_a = (0xfU & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__i));
        vlSelf->tb__DOT__in_b = 8U;
        vlSelf->tb__DOT__Cin = 1U;
        vlSelf->tb__DOT__unnamedblk1__DOT__k = (0x1fU 
                                                & (((IData)(vlSelf->tb__DOT__in_a) 
                                                    + 
                                                    ((IData)(vlSelf->tb__DOT__in_b) 
                                                     ^ 
                                                     (0xfU 
                                                      & (- (IData)((IData)(vlSelf->tb__DOT__Cin)))))) 
                                                   + (IData)(vlSelf->tb__DOT__Cin)));
        vlSelf->tb__DOT__unnamedblk1__DOT__of = (((1U 
                                                   & ((IData)(vlSelf->tb__DOT__in_a) 
                                                      >> 3U)) 
                                                  == (IData)(
                                                             (((IData)(vlSelf->tb__DOT__in_b) 
                                                               >> 3U) 
                                                              ^ (IData)(vlSelf->tb__DOT__Cin)))) 
                                                 & ((1U 
                                                     & ((IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k) 
                                                        >> 3U)) 
                                                    != 
                                                    (1U 
                                                     & ((IData)(vlSelf->tb__DOT__in_a) 
                                                        >> 3U))));
        vlSelf->tb__DOT__unnamedblk1__DOT__c = (1U 
                                                & ((IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k) 
                                                   >> 4U));
        vlSelf->tb__DOT__unnamedblk1__DOT__z = ((0U 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k)))
                                                 ? 1U
                                                 : 0U);
        co_await vlSelf->__VdlySched.delay(0x14ULL, 
                                           "/home/lhjysyx/DigitalCircuitsExperiments/exp3_ALU/adder/vsrc/tb.v", 
                                           70);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb__DOT__check__1__resof = vlSelf->tb__DOT__unnamedblk1__DOT__of;
        __Vtask_tb__DOT__check__1__reszf = vlSelf->tb__DOT__unnamedblk1__DOT__z;
        __Vtask_tb__DOT__check__1__rescf = vlSelf->tb__DOT__unnamedblk1__DOT__c;
        __Vtask_tb__DOT__check__1__addof = vlSelf->tb__DOT__Overflow;
        __Vtask_tb__DOT__check__1__addzf = (1U & (~ (IData)(
                                                            (0U 
                                                             != (IData)(vlSelf->tb__DOT__Result)))));
        __Vtask_tb__DOT__check__1__addcf = vlSelf->tb__DOT__Carry;
        __Vtask_tb__DOT__check__1__res = (0xfU & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k));
        __Vtask_tb__DOT__check__1__addres = vlSelf->tb__DOT__Result;
        __Vtask_tb__DOT__check__1__task_Cin = vlSelf->tb__DOT__Cin;
        __Vtask_tb__DOT__check__1__task_b = vlSelf->tb__DOT__in_b;
        __Vtask_tb__DOT__check__1__task_a = vlSelf->tb__DOT__in_a;
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__1__addres) 
                         != (IData)(__Vtask_tb__DOT__check__1__res)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b,result should be %2#, get %2#\n",
                      4,__Vtask_tb__DOT__check__1__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__1__task_b),
                      1,__Vtask_tb__DOT__check__1__task_Cin,
                      4,(IData)(__Vtask_tb__DOT__check__1__res),
                      4,__Vtask_tb__DOT__check__1__addres);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__1__addcf) 
                         != (IData)(__Vtask_tb__DOT__check__1__rescf)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Carry should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__1__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__1__task_b),
                      1,__Vtask_tb__DOT__check__1__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__1__rescf),
                      1,__Vtask_tb__DOT__check__1__addcf);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__1__addof) 
                         != (IData)(__Vtask_tb__DOT__check__1__resof)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Overflow should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__1__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__1__task_b),
                      1,__Vtask_tb__DOT__check__1__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__1__resof),
                      1,__Vtask_tb__DOT__check__1__addof);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__1__addzf) 
                         != (IData)(__Vtask_tb__DOT__check__1__reszf)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Zero should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__1__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__1__task_b),
                      1,__Vtask_tb__DOT__check__1__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__1__reszf),
                      1,__Vtask_tb__DOT__check__1__addzf);
        }
        vlSelf->tb__DOT__unnamedblk1__DOT__j = 9U;
        vlSelf->tb__DOT__in_a = (0xfU & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__i));
        vlSelf->tb__DOT__in_b = 9U;
        vlSelf->tb__DOT__Cin = 1U;
        vlSelf->tb__DOT__unnamedblk1__DOT__k = (0x1fU 
                                                & (((IData)(vlSelf->tb__DOT__in_a) 
                                                    + 
                                                    ((IData)(vlSelf->tb__DOT__in_b) 
                                                     ^ 
                                                     (0xfU 
                                                      & (- (IData)((IData)(vlSelf->tb__DOT__Cin)))))) 
                                                   + (IData)(vlSelf->tb__DOT__Cin)));
        vlSelf->tb__DOT__unnamedblk1__DOT__of = (((1U 
                                                   & ((IData)(vlSelf->tb__DOT__in_a) 
                                                      >> 3U)) 
                                                  == (IData)(
                                                             (((IData)(vlSelf->tb__DOT__in_b) 
                                                               >> 3U) 
                                                              ^ (IData)(vlSelf->tb__DOT__Cin)))) 
                                                 & ((1U 
                                                     & ((IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k) 
                                                        >> 3U)) 
                                                    != 
                                                    (1U 
                                                     & ((IData)(vlSelf->tb__DOT__in_a) 
                                                        >> 3U))));
        vlSelf->tb__DOT__unnamedblk1__DOT__c = (1U 
                                                & ((IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k) 
                                                   >> 4U));
        vlSelf->tb__DOT__unnamedblk1__DOT__z = ((0U 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k)))
                                                 ? 1U
                                                 : 0U);
        co_await vlSelf->__VdlySched.delay(0x14ULL, 
                                           "/home/lhjysyx/DigitalCircuitsExperiments/exp3_ALU/adder/vsrc/tb.v", 
                                           70);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb__DOT__check__1__resof = vlSelf->tb__DOT__unnamedblk1__DOT__of;
        __Vtask_tb__DOT__check__1__reszf = vlSelf->tb__DOT__unnamedblk1__DOT__z;
        __Vtask_tb__DOT__check__1__rescf = vlSelf->tb__DOT__unnamedblk1__DOT__c;
        __Vtask_tb__DOT__check__1__addof = vlSelf->tb__DOT__Overflow;
        __Vtask_tb__DOT__check__1__addzf = (1U & (~ (IData)(
                                                            (0U 
                                                             != (IData)(vlSelf->tb__DOT__Result)))));
        __Vtask_tb__DOT__check__1__addcf = vlSelf->tb__DOT__Carry;
        __Vtask_tb__DOT__check__1__res = (0xfU & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k));
        __Vtask_tb__DOT__check__1__addres = vlSelf->tb__DOT__Result;
        __Vtask_tb__DOT__check__1__task_Cin = vlSelf->tb__DOT__Cin;
        __Vtask_tb__DOT__check__1__task_b = vlSelf->tb__DOT__in_b;
        __Vtask_tb__DOT__check__1__task_a = vlSelf->tb__DOT__in_a;
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__1__addres) 
                         != (IData)(__Vtask_tb__DOT__check__1__res)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b,result should be %2#, get %2#\n",
                      4,__Vtask_tb__DOT__check__1__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__1__task_b),
                      1,__Vtask_tb__DOT__check__1__task_Cin,
                      4,(IData)(__Vtask_tb__DOT__check__1__res),
                      4,__Vtask_tb__DOT__check__1__addres);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__1__addcf) 
                         != (IData)(__Vtask_tb__DOT__check__1__rescf)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Carry should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__1__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__1__task_b),
                      1,__Vtask_tb__DOT__check__1__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__1__rescf),
                      1,__Vtask_tb__DOT__check__1__addcf);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__1__addof) 
                         != (IData)(__Vtask_tb__DOT__check__1__resof)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Overflow should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__1__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__1__task_b),
                      1,__Vtask_tb__DOT__check__1__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__1__resof),
                      1,__Vtask_tb__DOT__check__1__addof);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__1__addzf) 
                         != (IData)(__Vtask_tb__DOT__check__1__reszf)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Zero should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__1__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__1__task_b),
                      1,__Vtask_tb__DOT__check__1__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__1__reszf),
                      1,__Vtask_tb__DOT__check__1__addzf);
        }
        vlSelf->tb__DOT__unnamedblk1__DOT__j = 0xaU;
        vlSelf->tb__DOT__in_a = (0xfU & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__i));
        vlSelf->tb__DOT__in_b = 0xaU;
        vlSelf->tb__DOT__Cin = 1U;
        vlSelf->tb__DOT__unnamedblk1__DOT__k = (0x1fU 
                                                & (((IData)(vlSelf->tb__DOT__in_a) 
                                                    + 
                                                    ((IData)(vlSelf->tb__DOT__in_b) 
                                                     ^ 
                                                     (0xfU 
                                                      & (- (IData)((IData)(vlSelf->tb__DOT__Cin)))))) 
                                                   + (IData)(vlSelf->tb__DOT__Cin)));
        vlSelf->tb__DOT__unnamedblk1__DOT__of = (((1U 
                                                   & ((IData)(vlSelf->tb__DOT__in_a) 
                                                      >> 3U)) 
                                                  == (IData)(
                                                             (((IData)(vlSelf->tb__DOT__in_b) 
                                                               >> 3U) 
                                                              ^ (IData)(vlSelf->tb__DOT__Cin)))) 
                                                 & ((1U 
                                                     & ((IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k) 
                                                        >> 3U)) 
                                                    != 
                                                    (1U 
                                                     & ((IData)(vlSelf->tb__DOT__in_a) 
                                                        >> 3U))));
        vlSelf->tb__DOT__unnamedblk1__DOT__c = (1U 
                                                & ((IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k) 
                                                   >> 4U));
        vlSelf->tb__DOT__unnamedblk1__DOT__z = ((0U 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k)))
                                                 ? 1U
                                                 : 0U);
        co_await vlSelf->__VdlySched.delay(0x14ULL, 
                                           "/home/lhjysyx/DigitalCircuitsExperiments/exp3_ALU/adder/vsrc/tb.v", 
                                           70);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb__DOT__check__1__resof = vlSelf->tb__DOT__unnamedblk1__DOT__of;
        __Vtask_tb__DOT__check__1__reszf = vlSelf->tb__DOT__unnamedblk1__DOT__z;
        __Vtask_tb__DOT__check__1__rescf = vlSelf->tb__DOT__unnamedblk1__DOT__c;
        __Vtask_tb__DOT__check__1__addof = vlSelf->tb__DOT__Overflow;
        __Vtask_tb__DOT__check__1__addzf = (1U & (~ (IData)(
                                                            (0U 
                                                             != (IData)(vlSelf->tb__DOT__Result)))));
        __Vtask_tb__DOT__check__1__addcf = vlSelf->tb__DOT__Carry;
        __Vtask_tb__DOT__check__1__res = (0xfU & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k));
        __Vtask_tb__DOT__check__1__addres = vlSelf->tb__DOT__Result;
        __Vtask_tb__DOT__check__1__task_Cin = vlSelf->tb__DOT__Cin;
        __Vtask_tb__DOT__check__1__task_b = vlSelf->tb__DOT__in_b;
        __Vtask_tb__DOT__check__1__task_a = vlSelf->tb__DOT__in_a;
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__1__addres) 
                         != (IData)(__Vtask_tb__DOT__check__1__res)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b,result should be %2#, get %2#\n",
                      4,__Vtask_tb__DOT__check__1__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__1__task_b),
                      1,__Vtask_tb__DOT__check__1__task_Cin,
                      4,(IData)(__Vtask_tb__DOT__check__1__res),
                      4,__Vtask_tb__DOT__check__1__addres);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__1__addcf) 
                         != (IData)(__Vtask_tb__DOT__check__1__rescf)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Carry should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__1__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__1__task_b),
                      1,__Vtask_tb__DOT__check__1__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__1__rescf),
                      1,__Vtask_tb__DOT__check__1__addcf);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__1__addof) 
                         != (IData)(__Vtask_tb__DOT__check__1__resof)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Overflow should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__1__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__1__task_b),
                      1,__Vtask_tb__DOT__check__1__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__1__resof),
                      1,__Vtask_tb__DOT__check__1__addof);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__1__addzf) 
                         != (IData)(__Vtask_tb__DOT__check__1__reszf)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Zero should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__1__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__1__task_b),
                      1,__Vtask_tb__DOT__check__1__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__1__reszf),
                      1,__Vtask_tb__DOT__check__1__addzf);
        }
        vlSelf->tb__DOT__unnamedblk1__DOT__j = 0xbU;
        vlSelf->tb__DOT__in_a = (0xfU & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__i));
        vlSelf->tb__DOT__in_b = 0xbU;
        vlSelf->tb__DOT__Cin = 1U;
        vlSelf->tb__DOT__unnamedblk1__DOT__k = (0x1fU 
                                                & (((IData)(vlSelf->tb__DOT__in_a) 
                                                    + 
                                                    ((IData)(vlSelf->tb__DOT__in_b) 
                                                     ^ 
                                                     (0xfU 
                                                      & (- (IData)((IData)(vlSelf->tb__DOT__Cin)))))) 
                                                   + (IData)(vlSelf->tb__DOT__Cin)));
        vlSelf->tb__DOT__unnamedblk1__DOT__of = (((1U 
                                                   & ((IData)(vlSelf->tb__DOT__in_a) 
                                                      >> 3U)) 
                                                  == (IData)(
                                                             (((IData)(vlSelf->tb__DOT__in_b) 
                                                               >> 3U) 
                                                              ^ (IData)(vlSelf->tb__DOT__Cin)))) 
                                                 & ((1U 
                                                     & ((IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k) 
                                                        >> 3U)) 
                                                    != 
                                                    (1U 
                                                     & ((IData)(vlSelf->tb__DOT__in_a) 
                                                        >> 3U))));
        vlSelf->tb__DOT__unnamedblk1__DOT__c = (1U 
                                                & ((IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k) 
                                                   >> 4U));
        vlSelf->tb__DOT__unnamedblk1__DOT__z = ((0U 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k)))
                                                 ? 1U
                                                 : 0U);
        co_await vlSelf->__VdlySched.delay(0x14ULL, 
                                           "/home/lhjysyx/DigitalCircuitsExperiments/exp3_ALU/adder/vsrc/tb.v", 
                                           70);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb__DOT__check__1__resof = vlSelf->tb__DOT__unnamedblk1__DOT__of;
        __Vtask_tb__DOT__check__1__reszf = vlSelf->tb__DOT__unnamedblk1__DOT__z;
        __Vtask_tb__DOT__check__1__rescf = vlSelf->tb__DOT__unnamedblk1__DOT__c;
        __Vtask_tb__DOT__check__1__addof = vlSelf->tb__DOT__Overflow;
        __Vtask_tb__DOT__check__1__addzf = (1U & (~ (IData)(
                                                            (0U 
                                                             != (IData)(vlSelf->tb__DOT__Result)))));
        __Vtask_tb__DOT__check__1__addcf = vlSelf->tb__DOT__Carry;
        __Vtask_tb__DOT__check__1__res = (0xfU & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k));
        __Vtask_tb__DOT__check__1__addres = vlSelf->tb__DOT__Result;
        __Vtask_tb__DOT__check__1__task_Cin = vlSelf->tb__DOT__Cin;
        __Vtask_tb__DOT__check__1__task_b = vlSelf->tb__DOT__in_b;
        __Vtask_tb__DOT__check__1__task_a = vlSelf->tb__DOT__in_a;
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__1__addres) 
                         != (IData)(__Vtask_tb__DOT__check__1__res)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b,result should be %2#, get %2#\n",
                      4,__Vtask_tb__DOT__check__1__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__1__task_b),
                      1,__Vtask_tb__DOT__check__1__task_Cin,
                      4,(IData)(__Vtask_tb__DOT__check__1__res),
                      4,__Vtask_tb__DOT__check__1__addres);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__1__addcf) 
                         != (IData)(__Vtask_tb__DOT__check__1__rescf)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Carry should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__1__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__1__task_b),
                      1,__Vtask_tb__DOT__check__1__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__1__rescf),
                      1,__Vtask_tb__DOT__check__1__addcf);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__1__addof) 
                         != (IData)(__Vtask_tb__DOT__check__1__resof)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Overflow should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__1__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__1__task_b),
                      1,__Vtask_tb__DOT__check__1__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__1__resof),
                      1,__Vtask_tb__DOT__check__1__addof);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__1__addzf) 
                         != (IData)(__Vtask_tb__DOT__check__1__reszf)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Zero should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__1__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__1__task_b),
                      1,__Vtask_tb__DOT__check__1__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__1__reszf),
                      1,__Vtask_tb__DOT__check__1__addzf);
        }
        vlSelf->tb__DOT__unnamedblk1__DOT__j = 0xcU;
        vlSelf->tb__DOT__in_a = (0xfU & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__i));
        vlSelf->tb__DOT__in_b = 0xcU;
        vlSelf->tb__DOT__Cin = 1U;
        vlSelf->tb__DOT__unnamedblk1__DOT__k = (0x1fU 
                                                & (((IData)(vlSelf->tb__DOT__in_a) 
                                                    + 
                                                    ((IData)(vlSelf->tb__DOT__in_b) 
                                                     ^ 
                                                     (0xfU 
                                                      & (- (IData)((IData)(vlSelf->tb__DOT__Cin)))))) 
                                                   + (IData)(vlSelf->tb__DOT__Cin)));
        vlSelf->tb__DOT__unnamedblk1__DOT__of = (((1U 
                                                   & ((IData)(vlSelf->tb__DOT__in_a) 
                                                      >> 3U)) 
                                                  == (IData)(
                                                             (((IData)(vlSelf->tb__DOT__in_b) 
                                                               >> 3U) 
                                                              ^ (IData)(vlSelf->tb__DOT__Cin)))) 
                                                 & ((1U 
                                                     & ((IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k) 
                                                        >> 3U)) 
                                                    != 
                                                    (1U 
                                                     & ((IData)(vlSelf->tb__DOT__in_a) 
                                                        >> 3U))));
        vlSelf->tb__DOT__unnamedblk1__DOT__c = (1U 
                                                & ((IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k) 
                                                   >> 4U));
        vlSelf->tb__DOT__unnamedblk1__DOT__z = ((0U 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k)))
                                                 ? 1U
                                                 : 0U);
        co_await vlSelf->__VdlySched.delay(0x14ULL, 
                                           "/home/lhjysyx/DigitalCircuitsExperiments/exp3_ALU/adder/vsrc/tb.v", 
                                           70);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb__DOT__check__1__resof = vlSelf->tb__DOT__unnamedblk1__DOT__of;
        __Vtask_tb__DOT__check__1__reszf = vlSelf->tb__DOT__unnamedblk1__DOT__z;
        __Vtask_tb__DOT__check__1__rescf = vlSelf->tb__DOT__unnamedblk1__DOT__c;
        __Vtask_tb__DOT__check__1__addof = vlSelf->tb__DOT__Overflow;
        __Vtask_tb__DOT__check__1__addzf = (1U & (~ (IData)(
                                                            (0U 
                                                             != (IData)(vlSelf->tb__DOT__Result)))));
        __Vtask_tb__DOT__check__1__addcf = vlSelf->tb__DOT__Carry;
        __Vtask_tb__DOT__check__1__res = (0xfU & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k));
        __Vtask_tb__DOT__check__1__addres = vlSelf->tb__DOT__Result;
        __Vtask_tb__DOT__check__1__task_Cin = vlSelf->tb__DOT__Cin;
        __Vtask_tb__DOT__check__1__task_b = vlSelf->tb__DOT__in_b;
        __Vtask_tb__DOT__check__1__task_a = vlSelf->tb__DOT__in_a;
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__1__addres) 
                         != (IData)(__Vtask_tb__DOT__check__1__res)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b,result should be %2#, get %2#\n",
                      4,__Vtask_tb__DOT__check__1__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__1__task_b),
                      1,__Vtask_tb__DOT__check__1__task_Cin,
                      4,(IData)(__Vtask_tb__DOT__check__1__res),
                      4,__Vtask_tb__DOT__check__1__addres);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__1__addcf) 
                         != (IData)(__Vtask_tb__DOT__check__1__rescf)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Carry should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__1__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__1__task_b),
                      1,__Vtask_tb__DOT__check__1__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__1__rescf),
                      1,__Vtask_tb__DOT__check__1__addcf);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__1__addof) 
                         != (IData)(__Vtask_tb__DOT__check__1__resof)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Overflow should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__1__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__1__task_b),
                      1,__Vtask_tb__DOT__check__1__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__1__resof),
                      1,__Vtask_tb__DOT__check__1__addof);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__1__addzf) 
                         != (IData)(__Vtask_tb__DOT__check__1__reszf)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Zero should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__1__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__1__task_b),
                      1,__Vtask_tb__DOT__check__1__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__1__reszf),
                      1,__Vtask_tb__DOT__check__1__addzf);
        }
        vlSelf->tb__DOT__unnamedblk1__DOT__j = 0xdU;
        vlSelf->tb__DOT__in_a = (0xfU & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__i));
        vlSelf->tb__DOT__in_b = 0xdU;
        vlSelf->tb__DOT__Cin = 1U;
        vlSelf->tb__DOT__unnamedblk1__DOT__k = (0x1fU 
                                                & (((IData)(vlSelf->tb__DOT__in_a) 
                                                    + 
                                                    ((IData)(vlSelf->tb__DOT__in_b) 
                                                     ^ 
                                                     (0xfU 
                                                      & (- (IData)((IData)(vlSelf->tb__DOT__Cin)))))) 
                                                   + (IData)(vlSelf->tb__DOT__Cin)));
        vlSelf->tb__DOT__unnamedblk1__DOT__of = (((1U 
                                                   & ((IData)(vlSelf->tb__DOT__in_a) 
                                                      >> 3U)) 
                                                  == (IData)(
                                                             (((IData)(vlSelf->tb__DOT__in_b) 
                                                               >> 3U) 
                                                              ^ (IData)(vlSelf->tb__DOT__Cin)))) 
                                                 & ((1U 
                                                     & ((IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k) 
                                                        >> 3U)) 
                                                    != 
                                                    (1U 
                                                     & ((IData)(vlSelf->tb__DOT__in_a) 
                                                        >> 3U))));
        vlSelf->tb__DOT__unnamedblk1__DOT__c = (1U 
                                                & ((IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k) 
                                                   >> 4U));
        vlSelf->tb__DOT__unnamedblk1__DOT__z = ((0U 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k)))
                                                 ? 1U
                                                 : 0U);
        co_await vlSelf->__VdlySched.delay(0x14ULL, 
                                           "/home/lhjysyx/DigitalCircuitsExperiments/exp3_ALU/adder/vsrc/tb.v", 
                                           70);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb__DOT__check__1__resof = vlSelf->tb__DOT__unnamedblk1__DOT__of;
        __Vtask_tb__DOT__check__1__reszf = vlSelf->tb__DOT__unnamedblk1__DOT__z;
        __Vtask_tb__DOT__check__1__rescf = vlSelf->tb__DOT__unnamedblk1__DOT__c;
        __Vtask_tb__DOT__check__1__addof = vlSelf->tb__DOT__Overflow;
        __Vtask_tb__DOT__check__1__addzf = (1U & (~ (IData)(
                                                            (0U 
                                                             != (IData)(vlSelf->tb__DOT__Result)))));
        __Vtask_tb__DOT__check__1__addcf = vlSelf->tb__DOT__Carry;
        __Vtask_tb__DOT__check__1__res = (0xfU & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k));
        __Vtask_tb__DOT__check__1__addres = vlSelf->tb__DOT__Result;
        __Vtask_tb__DOT__check__1__task_Cin = vlSelf->tb__DOT__Cin;
        __Vtask_tb__DOT__check__1__task_b = vlSelf->tb__DOT__in_b;
        __Vtask_tb__DOT__check__1__task_a = vlSelf->tb__DOT__in_a;
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__1__addres) 
                         != (IData)(__Vtask_tb__DOT__check__1__res)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b,result should be %2#, get %2#\n",
                      4,__Vtask_tb__DOT__check__1__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__1__task_b),
                      1,__Vtask_tb__DOT__check__1__task_Cin,
                      4,(IData)(__Vtask_tb__DOT__check__1__res),
                      4,__Vtask_tb__DOT__check__1__addres);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__1__addcf) 
                         != (IData)(__Vtask_tb__DOT__check__1__rescf)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Carry should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__1__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__1__task_b),
                      1,__Vtask_tb__DOT__check__1__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__1__rescf),
                      1,__Vtask_tb__DOT__check__1__addcf);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__1__addof) 
                         != (IData)(__Vtask_tb__DOT__check__1__resof)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Overflow should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__1__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__1__task_b),
                      1,__Vtask_tb__DOT__check__1__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__1__resof),
                      1,__Vtask_tb__DOT__check__1__addof);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__1__addzf) 
                         != (IData)(__Vtask_tb__DOT__check__1__reszf)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Zero should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__1__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__1__task_b),
                      1,__Vtask_tb__DOT__check__1__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__1__reszf),
                      1,__Vtask_tb__DOT__check__1__addzf);
        }
        vlSelf->tb__DOT__unnamedblk1__DOT__j = 0xeU;
        vlSelf->tb__DOT__in_a = (0xfU & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__i));
        vlSelf->tb__DOT__in_b = 0xeU;
        vlSelf->tb__DOT__Cin = 1U;
        vlSelf->tb__DOT__unnamedblk1__DOT__k = (0x1fU 
                                                & (((IData)(vlSelf->tb__DOT__in_a) 
                                                    + 
                                                    ((IData)(vlSelf->tb__DOT__in_b) 
                                                     ^ 
                                                     (0xfU 
                                                      & (- (IData)((IData)(vlSelf->tb__DOT__Cin)))))) 
                                                   + (IData)(vlSelf->tb__DOT__Cin)));
        vlSelf->tb__DOT__unnamedblk1__DOT__of = (((1U 
                                                   & ((IData)(vlSelf->tb__DOT__in_a) 
                                                      >> 3U)) 
                                                  == (IData)(
                                                             (((IData)(vlSelf->tb__DOT__in_b) 
                                                               >> 3U) 
                                                              ^ (IData)(vlSelf->tb__DOT__Cin)))) 
                                                 & ((1U 
                                                     & ((IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k) 
                                                        >> 3U)) 
                                                    != 
                                                    (1U 
                                                     & ((IData)(vlSelf->tb__DOT__in_a) 
                                                        >> 3U))));
        vlSelf->tb__DOT__unnamedblk1__DOT__c = (1U 
                                                & ((IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k) 
                                                   >> 4U));
        vlSelf->tb__DOT__unnamedblk1__DOT__z = ((0U 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k)))
                                                 ? 1U
                                                 : 0U);
        co_await vlSelf->__VdlySched.delay(0x14ULL, 
                                           "/home/lhjysyx/DigitalCircuitsExperiments/exp3_ALU/adder/vsrc/tb.v", 
                                           70);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb__DOT__check__1__resof = vlSelf->tb__DOT__unnamedblk1__DOT__of;
        __Vtask_tb__DOT__check__1__reszf = vlSelf->tb__DOT__unnamedblk1__DOT__z;
        __Vtask_tb__DOT__check__1__rescf = vlSelf->tb__DOT__unnamedblk1__DOT__c;
        __Vtask_tb__DOT__check__1__addof = vlSelf->tb__DOT__Overflow;
        __Vtask_tb__DOT__check__1__addzf = (1U & (~ (IData)(
                                                            (0U 
                                                             != (IData)(vlSelf->tb__DOT__Result)))));
        __Vtask_tb__DOT__check__1__addcf = vlSelf->tb__DOT__Carry;
        __Vtask_tb__DOT__check__1__res = (0xfU & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k));
        __Vtask_tb__DOT__check__1__addres = vlSelf->tb__DOT__Result;
        __Vtask_tb__DOT__check__1__task_Cin = vlSelf->tb__DOT__Cin;
        __Vtask_tb__DOT__check__1__task_b = vlSelf->tb__DOT__in_b;
        __Vtask_tb__DOT__check__1__task_a = vlSelf->tb__DOT__in_a;
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__1__addres) 
                         != (IData)(__Vtask_tb__DOT__check__1__res)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b,result should be %2#, get %2#\n",
                      4,__Vtask_tb__DOT__check__1__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__1__task_b),
                      1,__Vtask_tb__DOT__check__1__task_Cin,
                      4,(IData)(__Vtask_tb__DOT__check__1__res),
                      4,__Vtask_tb__DOT__check__1__addres);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__1__addcf) 
                         != (IData)(__Vtask_tb__DOT__check__1__rescf)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Carry should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__1__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__1__task_b),
                      1,__Vtask_tb__DOT__check__1__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__1__rescf),
                      1,__Vtask_tb__DOT__check__1__addcf);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__1__addof) 
                         != (IData)(__Vtask_tb__DOT__check__1__resof)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Overflow should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__1__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__1__task_b),
                      1,__Vtask_tb__DOT__check__1__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__1__resof),
                      1,__Vtask_tb__DOT__check__1__addof);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__1__addzf) 
                         != (IData)(__Vtask_tb__DOT__check__1__reszf)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Zero should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__1__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__1__task_b),
                      1,__Vtask_tb__DOT__check__1__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__1__reszf),
                      1,__Vtask_tb__DOT__check__1__addzf);
        }
        vlSelf->tb__DOT__unnamedblk1__DOT__j = 0xfU;
        vlSelf->tb__DOT__in_a = (0xfU & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__i));
        vlSelf->tb__DOT__in_b = 0xfU;
        vlSelf->tb__DOT__Cin = 1U;
        vlSelf->tb__DOT__unnamedblk1__DOT__k = (0x1fU 
                                                & (((IData)(vlSelf->tb__DOT__in_a) 
                                                    + 
                                                    ((IData)(vlSelf->tb__DOT__in_b) 
                                                     ^ 
                                                     (0xfU 
                                                      & (- (IData)((IData)(vlSelf->tb__DOT__Cin)))))) 
                                                   + (IData)(vlSelf->tb__DOT__Cin)));
        vlSelf->tb__DOT__unnamedblk1__DOT__z = ((0U 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k)))
                                                 ? 1U
                                                 : 0U);
        vlSelf->tb__DOT__unnamedblk1__DOT__of = (((1U 
                                                   & ((IData)(vlSelf->tb__DOT__in_a) 
                                                      >> 3U)) 
                                                  == (IData)(
                                                             (((IData)(vlSelf->tb__DOT__in_b) 
                                                               >> 3U) 
                                                              ^ (IData)(vlSelf->tb__DOT__Cin)))) 
                                                 & ((1U 
                                                     & ((IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k) 
                                                        >> 3U)) 
                                                    != 
                                                    (1U 
                                                     & ((IData)(vlSelf->tb__DOT__in_a) 
                                                        >> 3U))));
        vlSelf->tb__DOT__unnamedblk1__DOT__c = (1U 
                                                & ((IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k) 
                                                   >> 4U));
        co_await vlSelf->__VdlySched.delay(0x14ULL, 
                                           "/home/lhjysyx/DigitalCircuitsExperiments/exp3_ALU/adder/vsrc/tb.v", 
                                           70);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb__DOT__check__1__resof = vlSelf->tb__DOT__unnamedblk1__DOT__of;
        __Vtask_tb__DOT__check__1__reszf = vlSelf->tb__DOT__unnamedblk1__DOT__z;
        __Vtask_tb__DOT__check__1__rescf = vlSelf->tb__DOT__unnamedblk1__DOT__c;
        __Vtask_tb__DOT__check__1__addof = vlSelf->tb__DOT__Overflow;
        __Vtask_tb__DOT__check__1__addzf = (1U & (~ (IData)(
                                                            (0U 
                                                             != (IData)(vlSelf->tb__DOT__Result)))));
        __Vtask_tb__DOT__check__1__addcf = vlSelf->tb__DOT__Carry;
        __Vtask_tb__DOT__check__1__res = (0xfU & (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__k));
        __Vtask_tb__DOT__check__1__addres = vlSelf->tb__DOT__Result;
        __Vtask_tb__DOT__check__1__task_Cin = vlSelf->tb__DOT__Cin;
        __Vtask_tb__DOT__check__1__task_b = vlSelf->tb__DOT__in_b;
        __Vtask_tb__DOT__check__1__task_a = vlSelf->tb__DOT__in_a;
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__1__addres) 
                         != (IData)(__Vtask_tb__DOT__check__1__res)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b,result should be %2#, get %2#\n",
                      4,__Vtask_tb__DOT__check__1__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__1__task_b),
                      1,__Vtask_tb__DOT__check__1__task_Cin,
                      4,(IData)(__Vtask_tb__DOT__check__1__res),
                      4,__Vtask_tb__DOT__check__1__addres);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__1__addcf) 
                         != (IData)(__Vtask_tb__DOT__check__1__rescf)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Carry should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__1__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__1__task_b),
                      1,__Vtask_tb__DOT__check__1__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__1__rescf),
                      1,__Vtask_tb__DOT__check__1__addcf);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__1__addof) 
                         != (IData)(__Vtask_tb__DOT__check__1__resof)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Overflow should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__1__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__1__task_b),
                      1,__Vtask_tb__DOT__check__1__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__1__resof),
                      1,__Vtask_tb__DOT__check__1__addof);
        }
        if (VL_UNLIKELY(((IData)(__Vtask_tb__DOT__check__1__addzf) 
                         != (IData)(__Vtask_tb__DOT__check__1__reszf)))) {
            VL_WRITEF("Error:in_a=%2#,in_b=%2#,Cin=%b, Zero should be %b, get %b\n",
                      4,__Vtask_tb__DOT__check__1__task_a,
                      4,(IData)(__Vtask_tb__DOT__check__1__task_b),
                      1,__Vtask_tb__DOT__check__1__task_Cin,
                      1,(IData)(__Vtask_tb__DOT__check__1__reszf),
                      1,__Vtask_tb__DOT__check__1__addzf);
        }
        vlSelf->tb__DOT__unnamedblk1__DOT__j = 0x10U;
        vlSelf->tb__DOT__unnamedblk1__DOT__i = (0x1fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->tb__DOT__unnamedblk1__DOT__i)));
    }
    VL_WRITEF("Test Finish.\n");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT void Vtb___024root___act_sequent__TOP__0(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->tb__DOT__adder0__DOT__t_no_Cin = (0xfU 
                                              & ((- (IData)((IData)(vlSelf->tb__DOT__Cin))) 
                                                 ^ (IData)(vlSelf->tb__DOT__in_b)));
    vlSelf->tb__DOT__Result = (0xfU & ((IData)(vlSelf->tb__DOT__in_a) 
                                       + ((IData)(vlSelf->tb__DOT__adder0__DOT__t_no_Cin) 
                                          + (IData)(vlSelf->tb__DOT__Cin))));
    vlSelf->tb__DOT__Carry = (1U & (((IData)(vlSelf->tb__DOT__in_a) 
                                     + ((IData)(vlSelf->tb__DOT__adder0__DOT__t_no_Cin) 
                                        + (IData)(vlSelf->tb__DOT__Cin))) 
                                    >> 4U));
    vlSelf->tb__DOT__Overflow = (((1U & ((IData)(vlSelf->tb__DOT__in_a) 
                                         >> 3U)) == 
                                  (1U & ((IData)(vlSelf->tb__DOT__adder0__DOT__t_no_Cin) 
                                         >> 3U))) & 
                                 ((1U & (((IData)(vlSelf->tb__DOT__in_a) 
                                          + ((IData)(vlSelf->tb__DOT__adder0__DOT__t_no_Cin) 
                                             + (IData)(vlSelf->tb__DOT__Cin))) 
                                         >> 3U)) != 
                                  (1U & ((IData)(vlSelf->tb__DOT__in_a) 
                                         >> 3U))));
}

void Vtb___024root___eval_act(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_act\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(0U)) {
        Vtb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vtb___024root___eval_nba(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vtb___024root___eval_triggers__act(Vtb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__act(Vtb___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb___024root___timing_resume(Vtb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__nba(Vtb___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb___024root___eval(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtb___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtb___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/lhjysyx/DigitalCircuitsExperiments/exp3_ALU/adder/vsrc/tb.v", 2, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtb___024root___timing_resume(vlSelf);
                Vtb___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtb___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/lhjysyx/DigitalCircuitsExperiments/exp3_ALU/adder/vsrc/tb.v", 2, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtb___024root___eval_nba(vlSelf);
        }
    }
}

void Vtb___024root___timing_resume(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___timing_resume\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(0U)) {
        vlSelf->__VdlySched.resume();
    }
}

#ifdef VL_DEBUG
void Vtb___024root___eval_debug_assertions(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
