// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(data_in,7,0);
    VL_IN8(data_in_valid,0,0);
    VL_IN8(rd_req,0,0);
    VL_OUT8(full,0,0);
    VL_OUT8(done,0,0);
    CData/*0:0*/ line_buffer__DOT__clk;
    CData/*0:0*/ line_buffer__DOT__rst;
    CData/*7:0*/ line_buffer__DOT__data_in;
    CData/*0:0*/ line_buffer__DOT__data_in_valid;
    CData/*0:0*/ line_buffer__DOT__rd_req;
    CData/*0:0*/ line_buffer__DOT__full;
    CData/*0:0*/ line_buffer__DOT__done;
    CData/*7:0*/ line_buffer__DOT__d0;
    CData/*7:0*/ line_buffer__DOT__d1;
    CData/*7:0*/ line_buffer__DOT__d2;
    CData/*0:0*/ line_buffer__DOT__shift_en;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__line_buffer__DOT__clk__0;
    SData/*8:0*/ line_buffer__DOT__wrtptr;
    SData/*8:0*/ line_buffer__DOT__rdptr;
    VL_OUT(data_out,23,0);
    IData/*23:0*/ line_buffer__DOT__data_out;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 512> line_buffer__DOT__line;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* namep);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
