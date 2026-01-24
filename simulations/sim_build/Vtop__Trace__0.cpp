// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    bufp->chgBit(oldp+0,(vlSelfRef.clk));
    bufp->chgBit(oldp+1,(vlSelfRef.rst));
    bufp->chgCData(oldp+2,(vlSelfRef.data_in),8);
    bufp->chgBit(oldp+3,(vlSelfRef.data_in_valid));
    bufp->chgBit(oldp+4,(vlSelfRef.rd_req));
    bufp->chgIData(oldp+5,(vlSelfRef.data_out),24);
    bufp->chgBit(oldp+6,(vlSelfRef.full));
    bufp->chgBit(oldp+7,(vlSelfRef.done));
    bufp->chgBit(oldp+8,(vlSelfRef.line_buffer__DOT__clk));
    bufp->chgBit(oldp+9,(vlSelfRef.line_buffer__DOT__rst));
    bufp->chgCData(oldp+10,(vlSelfRef.line_buffer__DOT__data_in),8);
    bufp->chgBit(oldp+11,(vlSelfRef.line_buffer__DOT__data_in_valid));
    bufp->chgBit(oldp+12,(vlSelfRef.line_buffer__DOT__rd_req));
    bufp->chgIData(oldp+13,(vlSelfRef.line_buffer__DOT__data_out),24);
    bufp->chgBit(oldp+14,(vlSelfRef.line_buffer__DOT__full));
    bufp->chgBit(oldp+15,(vlSelfRef.line_buffer__DOT__done));
    bufp->chgSData(oldp+16,(vlSelfRef.line_buffer__DOT__wrtptr),9);
    bufp->chgSData(oldp+17,(vlSelfRef.line_buffer__DOT__rdptr),9);
    bufp->chgCData(oldp+18,(vlSelfRef.line_buffer__DOT__d0),8);
    bufp->chgCData(oldp+19,(vlSelfRef.line_buffer__DOT__d1),8);
    bufp->chgCData(oldp+20,(vlSelfRef.line_buffer__DOT__d2),8);
    bufp->chgBit(oldp+21,(vlSelfRef.line_buffer__DOT__shift_en));
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Locals
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
