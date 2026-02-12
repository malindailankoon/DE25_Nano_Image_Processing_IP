// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
    vlSelfRef.__VicoFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
}

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk3__BRA__0__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk3__BRA__0__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk3__BRA__1__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk3__BRA__1__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk3__BRA__2__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk3__BRA__2__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk3__BRA__3__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk3__BRA__3__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk3__BRA__4__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk3__BRA__4__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk3__BRA__5__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk3__BRA__5__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk3__BRA__6__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk3__BRA__6__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk3__BRA__7__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk3__BRA__7__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk3__BRA__8__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk3__BRA__8__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk3__BRA__9__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk3__BRA__9__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk3__BRA__10__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk3__BRA__10__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk3__BRA__11__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk3__BRA__11__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk3__BRA__12__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk3__BRA__12__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk3__BRA__13__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk3__BRA__13__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk3__BRA__14__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk3__BRA__14__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk3__BRA__15__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk3__BRA__15__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk4__BRA__0__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk4__BRA__0__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk4__BRA__1__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk4__BRA__1__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk4__BRA__2__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk4__BRA__2__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk4__BRA__3__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk4__BRA__3__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk4__BRA__4__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk4__BRA__4__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk4__BRA__5__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk4__BRA__5__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk4__BRA__6__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk4__BRA__6__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk4__BRA__7__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk4__BRA__7__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk4__BRA__8__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk4__BRA__8__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk4__BRA__9__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk4__BRA__9__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk4__BRA__10__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk4__BRA__10__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk4__BRA__11__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk4__BRA__11__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk4__BRA__12__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk4__BRA__12__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk4__BRA__13__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk4__BRA__13__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk4__BRA__14__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk4__BRA__14__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk4__BRA__15__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk4__BRA__15__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    // Body
    vlSelfRef.accum_block__DOT__clk = vlSelfRef.clk;
    vlSelfRef.accum_block__DOT__rst = vlSelfRef.rst;
    vlSelfRef.accum_block__DOT__input_valid = vlSelfRef.input_valid;
    vlSelfRef.data_out = vlSelfRef.accum_block__DOT__data_out;
    vlSelfRef.out_valid = vlSelfRef.accum_block__DOT__out_valid;
    vlSelfRef.accum_block__DOT__s5_temp = (0x0000ffffU 
                                           & (vlSelfRef.accum_block__DOT__s4 
                                              + (vlSelfRef.accum_block__DOT__s4 
                                                 >> 0x00000010U)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__0__KET____DOT__fa__DOT__cin 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x00000020U)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__1__KET____DOT__fa__DOT__cin 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x00000021U)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__2__KET____DOT__fa__DOT__cin 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x00000022U)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__3__KET____DOT__fa__DOT__cin 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x00000023U)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__4__KET____DOT__fa__DOT__cin 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x00000024U)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__5__KET____DOT__fa__DOT__cin 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x00000025U)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__6__KET____DOT__fa__DOT__cin 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x00000026U)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__7__KET____DOT__fa__DOT__cin 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x00000027U)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__8__KET____DOT__fa__DOT__cin 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x00000028U)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__9__KET____DOT__fa__DOT__cin 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x00000029U)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__10__KET____DOT__fa__DOT__cin 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x0000002aU)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__11__KET____DOT__fa__DOT__cin 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x0000002bU)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__12__KET____DOT__fa__DOT__cin 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x0000002cU)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__13__KET____DOT__fa__DOT__cin 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x0000002dU)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__14__KET____DOT__fa__DOT__cin 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x0000002eU)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__15__KET____DOT__fa__DOT__cin 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x0000002fU)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__0__KET____DOT__fa__DOT__cin 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x00000020U)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__1__KET____DOT__fa__DOT__cin 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x00000021U)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__2__KET____DOT__fa__DOT__cin 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x00000022U)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__3__KET____DOT__fa__DOT__cin 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x00000023U)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__4__KET____DOT__fa__DOT__cin 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x00000024U)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__5__KET____DOT__fa__DOT__cin 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x00000025U)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__6__KET____DOT__fa__DOT__cin 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x00000026U)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__7__KET____DOT__fa__DOT__cin 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x00000027U)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__8__KET____DOT__fa__DOT__cin 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x00000028U)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__9__KET____DOT__fa__DOT__cin 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x00000029U)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__10__KET____DOT__fa__DOT__cin 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x0000002aU)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__11__KET____DOT__fa__DOT__cin 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x0000002bU)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__12__KET____DOT__fa__DOT__cin 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x0000002cU)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__13__KET____DOT__fa__DOT__cin 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x0000002dU)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__14__KET____DOT__fa__DOT__cin 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x0000002eU)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__15__KET____DOT__fa__DOT__cin 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x0000002fU)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__0__KET____DOT__fa__DOT__a 
        = (1U & (IData)(vlSelfRef.accum_block__DOT__s3));
    vlSelfRef.accum_block__DOT__genblk4__BRA__0__KET____DOT__fa__DOT__b 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x00000010U)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__1__KET____DOT__fa__DOT__a 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 1U)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__1__KET____DOT__fa__DOT__b 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x00000011U)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__2__KET____DOT__fa__DOT__a 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 2U)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__2__KET____DOT__fa__DOT__b 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x00000012U)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__3__KET____DOT__fa__DOT__a 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 3U)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__3__KET____DOT__fa__DOT__b 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x00000013U)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__4__KET____DOT__fa__DOT__a 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 4U)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__4__KET____DOT__fa__DOT__b 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x00000014U)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__5__KET____DOT__fa__DOT__a 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 5U)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__5__KET____DOT__fa__DOT__b 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x00000015U)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__6__KET____DOT__fa__DOT__a 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 6U)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__6__KET____DOT__fa__DOT__b 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x00000016U)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__7__KET____DOT__fa__DOT__a 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 7U)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__7__KET____DOT__fa__DOT__b 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x00000017U)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__8__KET____DOT__fa__DOT__a 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 8U)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__8__KET____DOT__fa__DOT__b 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x00000018U)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__9__KET____DOT__fa__DOT__a 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 9U)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__9__KET____DOT__fa__DOT__b 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x00000019U)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__10__KET____DOT__fa__DOT__a 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x0000000aU)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__10__KET____DOT__fa__DOT__b 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x0000001aU)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__11__KET____DOT__fa__DOT__a 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x0000000bU)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__11__KET____DOT__fa__DOT__b 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x0000001bU)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__12__KET____DOT__fa__DOT__a 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x0000000cU)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__12__KET____DOT__fa__DOT__b 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x0000001cU)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__13__KET____DOT__fa__DOT__a 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x0000000dU)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__13__KET____DOT__fa__DOT__b 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x0000001dU)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__14__KET____DOT__fa__DOT__a 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x0000000eU)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__14__KET____DOT__fa__DOT__b 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x0000001eU)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__15__KET____DOT__fa__DOT__a 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x0000000fU)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__15__KET____DOT__fa__DOT__b 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x0000001fU)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__0__KET____DOT__fa__DOT__a 
        = (1U & (IData)(vlSelfRef.accum_block__DOT__s2));
    vlSelfRef.accum_block__DOT__genblk3__BRA__0__KET____DOT__fa__DOT__b 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x00000010U)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__1__KET____DOT__fa__DOT__a 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 1U)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__1__KET____DOT__fa__DOT__b 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x00000011U)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__2__KET____DOT__fa__DOT__a 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 2U)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__2__KET____DOT__fa__DOT__b 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x00000012U)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__3__KET____DOT__fa__DOT__a 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 3U)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__3__KET____DOT__fa__DOT__b 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x00000013U)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__4__KET____DOT__fa__DOT__a 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 4U)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__4__KET____DOT__fa__DOT__b 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x00000014U)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__5__KET____DOT__fa__DOT__a 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 5U)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__5__KET____DOT__fa__DOT__b 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x00000015U)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__6__KET____DOT__fa__DOT__a 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 6U)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__6__KET____DOT__fa__DOT__b 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x00000016U)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__7__KET____DOT__fa__DOT__a 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 7U)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__7__KET____DOT__fa__DOT__b 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x00000017U)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__8__KET____DOT__fa__DOT__a 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 8U)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__8__KET____DOT__fa__DOT__b 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x00000018U)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__9__KET____DOT__fa__DOT__a 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 9U)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__9__KET____DOT__fa__DOT__b 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x00000019U)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__10__KET____DOT__fa__DOT__a 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x0000000aU)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__10__KET____DOT__fa__DOT__b 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x0000001aU)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__11__KET____DOT__fa__DOT__a 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x0000000bU)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__11__KET____DOT__fa__DOT__b 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x0000001bU)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__12__KET____DOT__fa__DOT__a 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x0000000cU)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__12__KET____DOT__fa__DOT__b 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x0000001cU)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__13__KET____DOT__fa__DOT__a 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x0000000dU)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__13__KET____DOT__fa__DOT__b 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x0000001dU)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__14__KET____DOT__fa__DOT__a 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x0000000eU)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__14__KET____DOT__fa__DOT__b 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x0000001eU)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__15__KET____DOT__fa__DOT__a 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x0000000fU)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__15__KET____DOT__fa__DOT__b 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x0000001fU)));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__cin 
        = (1U & vlSelfRef.accum_block__DOT__s1[1U]);
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__s1[1U] 
                 >> 1U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__s1[1U] 
                 >> 2U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__s1[1U] 
                 >> 3U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__s1[1U] 
                 >> 4U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__s1[1U] 
                 >> 5U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__s1[1U] 
                 >> 6U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__s1[1U] 
                 >> 7U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__s1[1U] 
                 >> 8U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__s1[1U] 
                 >> 9U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__s1[1U] 
                 >> 0x0000000aU));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__s1[1U] 
                 >> 0x0000000bU));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__s1[1U] 
                 >> 0x0000000cU));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__s1[1U] 
                 >> 0x0000000dU));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__s1[1U] 
                 >> 0x0000000eU));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__s1[1U] 
                 >> 0x0000000fU));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__s1[2U] 
                 >> 0x00000010U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__s1[2U] 
                 >> 0x00000011U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__s1[2U] 
                 >> 0x00000012U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__s1[2U] 
                 >> 0x00000013U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__s1[2U] 
                 >> 0x00000014U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__s1[2U] 
                 >> 0x00000015U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__s1[2U] 
                 >> 0x00000016U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__s1[2U] 
                 >> 0x00000017U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__s1[2U] 
                 >> 0x00000018U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__s1[2U] 
                 >> 0x00000019U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__s1[2U] 
                 >> 0x0000001aU));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__s1[2U] 
                 >> 0x0000001bU));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__s1[2U] 
                 >> 0x0000001cU));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__s1[2U] 
                 >> 0x0000001dU));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__s1[2U] 
                 >> 0x0000001eU));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__cin 
        = (vlSelfRef.accum_block__DOT__s1[2U] >> 0x0000001fU);
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__a 
        = (1U & vlSelfRef.accum_block__DOT__s1[0U]);
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__s1[0U] 
                 >> 0x00000010U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__s1[0U] 
                 >> 1U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__s1[0U] 
                 >> 0x00000011U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__s1[0U] 
                 >> 2U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__s1[0U] 
                 >> 0x00000012U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__s1[0U] 
                 >> 3U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__s1[0U] 
                 >> 0x00000013U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__s1[0U] 
                 >> 4U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__s1[0U] 
                 >> 0x00000014U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__s1[0U] 
                 >> 5U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__s1[0U] 
                 >> 0x00000015U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__s1[0U] 
                 >> 6U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__s1[0U] 
                 >> 0x00000016U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__s1[0U] 
                 >> 7U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__s1[0U] 
                 >> 0x00000017U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__s1[0U] 
                 >> 8U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__s1[0U] 
                 >> 0x00000018U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__s1[0U] 
                 >> 9U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__s1[0U] 
                 >> 0x00000019U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__s1[0U] 
                 >> 0x0000000aU));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__s1[0U] 
                 >> 0x0000001aU));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__s1[0U] 
                 >> 0x0000000bU));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__s1[0U] 
                 >> 0x0000001bU));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__s1[0U] 
                 >> 0x0000000cU));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__s1[0U] 
                 >> 0x0000001cU));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__s1[0U] 
                 >> 0x0000000dU));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__s1[0U] 
                 >> 0x0000001dU));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__s1[0U] 
                 >> 0x0000000eU));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__s1[0U] 
                 >> 0x0000001eU));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__s1[0U] 
                 >> 0x0000000fU));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__b 
        = (vlSelfRef.accum_block__DOT__s1[0U] >> 0x0000001fU);
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__s1[1U] 
                 >> 0x00000010U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__b 
        = (1U & vlSelfRef.accum_block__DOT__s1[2U]);
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__s1[1U] 
                 >> 0x00000011U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__s1[2U] 
                 >> 1U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__s1[1U] 
                 >> 0x00000012U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__s1[2U] 
                 >> 2U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__s1[1U] 
                 >> 0x00000013U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__s1[2U] 
                 >> 3U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__s1[1U] 
                 >> 0x00000014U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__s1[2U] 
                 >> 4U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__s1[1U] 
                 >> 0x00000015U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__s1[2U] 
                 >> 5U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__s1[1U] 
                 >> 0x00000016U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__s1[2U] 
                 >> 6U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__s1[1U] 
                 >> 0x00000017U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__s1[2U] 
                 >> 7U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__s1[1U] 
                 >> 0x00000018U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__s1[2U] 
                 >> 8U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__s1[1U] 
                 >> 0x00000019U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__s1[2U] 
                 >> 9U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__s1[1U] 
                 >> 0x0000001aU));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__s1[2U] 
                 >> 0x0000000aU));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__s1[1U] 
                 >> 0x0000001bU));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__s1[2U] 
                 >> 0x0000000bU));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__s1[1U] 
                 >> 0x0000001cU));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__s1[2U] 
                 >> 0x0000000cU));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__s1[1U] 
                 >> 0x0000001dU));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__s1[2U] 
                 >> 0x0000000dU));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__s1[1U] 
                 >> 0x0000001eU));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__s1[2U] 
                 >> 0x0000000eU));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__a 
        = (vlSelfRef.accum_block__DOT__s1[1U] >> 0x0000001fU);
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__s1[2U] 
                 >> 0x0000000fU));
    vlSelfRef.accum_block__DOT__data_in[0U] = vlSelfRef.data_in[0U];
    vlSelfRef.accum_block__DOT__data_in[1U] = vlSelfRef.data_in[1U];
    vlSelfRef.accum_block__DOT__data_in[2U] = vlSelfRef.data_in[2U];
    vlSelfRef.accum_block__DOT__data_in[3U] = vlSelfRef.data_in[3U];
    vlSelfRef.accum_block__DOT__data_in[4U] = vlSelfRef.data_in[4U];
    accum_block__DOT__genblk4__BRA__0__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__0__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__0__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk4__BRA__1__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__1__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__1__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk4__BRA__2__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__2__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__2__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk4__BRA__3__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__3__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__3__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk4__BRA__4__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__4__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__4__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk4__BRA__5__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__5__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__5__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk4__BRA__6__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__6__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__6__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk4__BRA__7__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__7__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__7__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk4__BRA__8__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__8__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__8__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk4__BRA__9__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__9__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__9__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk4__BRA__10__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__10__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__10__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk4__BRA__11__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__11__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__11__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk4__BRA__12__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__12__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__12__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk4__BRA__13__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__13__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__13__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk4__BRA__14__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__14__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__14__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk4__BRA__15__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__15__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__15__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk3__BRA__0__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__0__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__0__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk3__BRA__1__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__1__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__1__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk3__BRA__2__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__2__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__2__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk3__BRA__3__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__3__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__3__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk3__BRA__4__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__4__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__4__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk3__BRA__5__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__5__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__5__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk3__BRA__6__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__6__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__6__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk3__BRA__7__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__7__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__7__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk3__BRA__8__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__8__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__8__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk3__BRA__9__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__9__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__9__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk3__BRA__10__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__10__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__10__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk3__BRA__11__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__11__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__11__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk3__BRA__12__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__12__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__12__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk3__BRA__13__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__13__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__13__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk3__BRA__14__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__14__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__14__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk3__BRA__15__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__15__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__15__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__b));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__cin 
        = (1U & vlSelfRef.accum_block__DOT__data_in[1U]);
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[1U] 
                 >> 1U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[1U] 
                 >> 2U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[1U] 
                 >> 3U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[1U] 
                 >> 4U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[1U] 
                 >> 5U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[1U] 
                 >> 6U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[1U] 
                 >> 7U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[1U] 
                 >> 8U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[1U] 
                 >> 9U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[1U] 
                 >> 0x0000000aU));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[1U] 
                 >> 0x0000000bU));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[1U] 
                 >> 0x0000000cU));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[1U] 
                 >> 0x0000000dU));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[1U] 
                 >> 0x0000000eU));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[1U] 
                 >> 0x0000000fU));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[2U] 
                 >> 0x00000010U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[2U] 
                 >> 0x00000011U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[2U] 
                 >> 0x00000012U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[2U] 
                 >> 0x00000013U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[2U] 
                 >> 0x00000014U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[2U] 
                 >> 0x00000015U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[2U] 
                 >> 0x00000016U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[2U] 
                 >> 0x00000017U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[2U] 
                 >> 0x00000018U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[2U] 
                 >> 0x00000019U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[2U] 
                 >> 0x0000001aU));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[2U] 
                 >> 0x0000001bU));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[2U] 
                 >> 0x0000001cU));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[2U] 
                 >> 0x0000001dU));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[2U] 
                 >> 0x0000001eU));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__cin 
        = (vlSelfRef.accum_block__DOT__data_in[2U] 
           >> 0x0000001fU);
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__cin 
        = (1U & vlSelfRef.accum_block__DOT__data_in[4U]);
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[4U] 
                 >> 1U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[4U] 
                 >> 2U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[4U] 
                 >> 3U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[4U] 
                 >> 4U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[4U] 
                 >> 5U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[4U] 
                 >> 6U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[4U] 
                 >> 7U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[4U] 
                 >> 8U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[4U] 
                 >> 9U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[4U] 
                 >> 0x0000000aU));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[4U] 
                 >> 0x0000000bU));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[4U] 
                 >> 0x0000000cU));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[4U] 
                 >> 0x0000000dU));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[4U] 
                 >> 0x0000000eU));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[4U] 
                 >> 0x0000000fU));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__a 
        = (1U & vlSelfRef.accum_block__DOT__data_in[0U]);
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[0U] 
                 >> 0x00000010U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[0U] 
                 >> 1U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[0U] 
                 >> 0x00000011U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[0U] 
                 >> 2U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[0U] 
                 >> 0x00000012U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[0U] 
                 >> 3U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[0U] 
                 >> 0x00000013U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[0U] 
                 >> 4U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[0U] 
                 >> 0x00000014U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[0U] 
                 >> 5U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[0U] 
                 >> 0x00000015U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[0U] 
                 >> 6U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[0U] 
                 >> 0x00000016U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[0U] 
                 >> 7U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[0U] 
                 >> 0x00000017U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[0U] 
                 >> 8U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[0U] 
                 >> 0x00000018U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[0U] 
                 >> 9U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[0U] 
                 >> 0x00000019U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[0U] 
                 >> 0x0000000aU));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[0U] 
                 >> 0x0000001aU));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[0U] 
                 >> 0x0000000bU));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[0U] 
                 >> 0x0000001bU));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[0U] 
                 >> 0x0000000cU));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[0U] 
                 >> 0x0000001cU));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[0U] 
                 >> 0x0000000dU));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[0U] 
                 >> 0x0000001dU));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[0U] 
                 >> 0x0000000eU));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[0U] 
                 >> 0x0000001eU));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[0U] 
                 >> 0x0000000fU));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__b 
        = (vlSelfRef.accum_block__DOT__data_in[0U] 
           >> 0x0000001fU);
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[1U] 
                 >> 0x00000010U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__b 
        = (1U & vlSelfRef.accum_block__DOT__data_in[2U]);
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[1U] 
                 >> 0x00000011U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[2U] 
                 >> 1U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[1U] 
                 >> 0x00000012U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[2U] 
                 >> 2U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[1U] 
                 >> 0x00000013U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[2U] 
                 >> 3U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[1U] 
                 >> 0x00000014U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[2U] 
                 >> 4U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[1U] 
                 >> 0x00000015U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[2U] 
                 >> 5U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[1U] 
                 >> 0x00000016U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[2U] 
                 >> 6U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[1U] 
                 >> 0x00000017U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[2U] 
                 >> 7U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[1U] 
                 >> 0x00000018U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[2U] 
                 >> 8U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[1U] 
                 >> 0x00000019U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[2U] 
                 >> 9U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[1U] 
                 >> 0x0000001aU));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[2U] 
                 >> 0x0000000aU));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[1U] 
                 >> 0x0000001bU));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[2U] 
                 >> 0x0000000bU));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[1U] 
                 >> 0x0000001cU));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[2U] 
                 >> 0x0000000cU));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[1U] 
                 >> 0x0000001dU));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[2U] 
                 >> 0x0000000dU));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[1U] 
                 >> 0x0000001eU));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[2U] 
                 >> 0x0000000eU));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__a 
        = (vlSelfRef.accum_block__DOT__data_in[1U] 
           >> 0x0000001fU);
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[2U] 
                 >> 0x0000000fU));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__a 
        = (1U & vlSelfRef.accum_block__DOT__data_in[3U]);
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[3U] 
                 >> 0x00000010U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[3U] 
                 >> 1U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[3U] 
                 >> 0x00000011U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[3U] 
                 >> 2U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[3U] 
                 >> 0x00000012U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[3U] 
                 >> 3U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[3U] 
                 >> 0x00000013U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[3U] 
                 >> 4U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[3U] 
                 >> 0x00000014U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[3U] 
                 >> 5U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[3U] 
                 >> 0x00000015U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[3U] 
                 >> 6U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[3U] 
                 >> 0x00000016U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[3U] 
                 >> 7U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[3U] 
                 >> 0x00000017U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[3U] 
                 >> 8U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[3U] 
                 >> 0x00000018U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[3U] 
                 >> 9U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[3U] 
                 >> 0x00000019U));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[3U] 
                 >> 0x0000000aU));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[3U] 
                 >> 0x0000001aU));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[3U] 
                 >> 0x0000000bU));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[3U] 
                 >> 0x0000001bU));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[3U] 
                 >> 0x0000000cU));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[3U] 
                 >> 0x0000001cU));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[3U] 
                 >> 0x0000000dU));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[3U] 
                 >> 0x0000001dU));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[3U] 
                 >> 0x0000000eU));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[3U] 
                 >> 0x0000001eU));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__data_in[3U] 
                 >> 0x0000000fU));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__b 
        = (vlSelfRef.accum_block__DOT__data_in[3U] 
           >> 0x0000001fU);
    vlSelfRef.accum_block__DOT__genblk4__BRA__0__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk4__BRA__0__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__0__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk4__BRA__0__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__0__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__0__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__0__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk4__BRA__0__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__1__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk4__BRA__1__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__1__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk4__BRA__1__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__1__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__1__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__1__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk4__BRA__1__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__2__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk4__BRA__2__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__2__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk4__BRA__2__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__2__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__2__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__2__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk4__BRA__2__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__3__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk4__BRA__3__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__3__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk4__BRA__3__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__3__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__3__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__3__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk4__BRA__3__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__4__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk4__BRA__4__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__4__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk4__BRA__4__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__4__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__4__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__4__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk4__BRA__4__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__5__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk4__BRA__5__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__5__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk4__BRA__5__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__5__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__5__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__5__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk4__BRA__5__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__6__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk4__BRA__6__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__6__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk4__BRA__6__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__6__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__6__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__6__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk4__BRA__6__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__7__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk4__BRA__7__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__7__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk4__BRA__7__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__7__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__7__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__7__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk4__BRA__7__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__8__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk4__BRA__8__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__8__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk4__BRA__8__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__8__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__8__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__8__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk4__BRA__8__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__9__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk4__BRA__9__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__9__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk4__BRA__9__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__9__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__9__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__9__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk4__BRA__9__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__10__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk4__BRA__10__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__10__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk4__BRA__10__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__10__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__10__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__10__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk4__BRA__10__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__11__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk4__BRA__11__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__11__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk4__BRA__11__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__11__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__11__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__11__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk4__BRA__11__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__12__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk4__BRA__12__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__12__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk4__BRA__12__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__12__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__12__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__12__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk4__BRA__12__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__13__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk4__BRA__13__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__13__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk4__BRA__13__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__13__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__13__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__13__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk4__BRA__13__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__14__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk4__BRA__14__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__14__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk4__BRA__14__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__14__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__14__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__14__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk4__BRA__14__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__15__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk4__BRA__15__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__15__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk4__BRA__15__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__15__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__15__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__15__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk4__BRA__15__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__0__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk3__BRA__0__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__0__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk3__BRA__0__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__0__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__0__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__0__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk3__BRA__0__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__1__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk3__BRA__1__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__1__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk3__BRA__1__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__1__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__1__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__1__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk3__BRA__1__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__2__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk3__BRA__2__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__2__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk3__BRA__2__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__2__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__2__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__2__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk3__BRA__2__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__3__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk3__BRA__3__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__3__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk3__BRA__3__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__3__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__3__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__3__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk3__BRA__3__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__4__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk3__BRA__4__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__4__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk3__BRA__4__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__4__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__4__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__4__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk3__BRA__4__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__5__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk3__BRA__5__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__5__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk3__BRA__5__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__5__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__5__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__5__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk3__BRA__5__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__6__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk3__BRA__6__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__6__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk3__BRA__6__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__6__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__6__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__6__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk3__BRA__6__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__7__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk3__BRA__7__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__7__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk3__BRA__7__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__7__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__7__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__7__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk3__BRA__7__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__8__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk3__BRA__8__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__8__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk3__BRA__8__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__8__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__8__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__8__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk3__BRA__8__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__9__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk3__BRA__9__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__9__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk3__BRA__9__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__9__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__9__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__9__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk3__BRA__9__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__10__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk3__BRA__10__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__10__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk3__BRA__10__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__10__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__10__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__10__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk3__BRA__10__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__11__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk3__BRA__11__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__11__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk3__BRA__11__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__11__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__11__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__11__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk3__BRA__11__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__12__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk3__BRA__12__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__12__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk3__BRA__12__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__12__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__12__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__12__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk3__BRA__12__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__13__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk3__BRA__13__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__13__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk3__BRA__13__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__13__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__13__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__13__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk3__BRA__13__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__14__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk3__BRA__14__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__14__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk3__BRA__14__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__14__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__14__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__14__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk3__BRA__14__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__15__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk3__BRA__15__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__15__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk3__BRA__15__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__15__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__15__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__15__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk3__BRA__15__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__b));
    vlSelfRef.accum_block__DOT__s4_temp = (((((((((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__15__KET____DOT__fa__DOT__cout) 
                                                  << 3U) 
                                                 | ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__14__KET____DOT__fa__DOT__cout) 
                                                    << 2U)) 
                                                | (((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__13__KET____DOT__fa__DOT__cout) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__12__KET____DOT__fa__DOT__cout))) 
                                               << 0x0000000cU) 
                                              | (((((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__11__KET____DOT__fa__DOT__cout) 
                                                    << 3U) 
                                                   | ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__10__KET____DOT__fa__DOT__cout) 
                                                      << 2U)) 
                                                  | (((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__9__KET____DOT__fa__DOT__cout) 
                                                      << 1U) 
                                                     | (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__8__KET____DOT__fa__DOT__cout))) 
                                                 << 8U)) 
                                             | ((((((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__7__KET____DOT__fa__DOT__cout) 
                                                    << 3U) 
                                                   | ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__6__KET____DOT__fa__DOT__cout) 
                                                      << 2U)) 
                                                  | (((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__5__KET____DOT__fa__DOT__cout) 
                                                      << 1U) 
                                                     | (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__4__KET____DOT__fa__DOT__cout))) 
                                                 << 4U) 
                                                | ((((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__3__KET____DOT__fa__DOT__cout) 
                                                     << 3U) 
                                                    | ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__2__KET____DOT__fa__DOT__cout) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__1__KET____DOT__fa__DOT__cout) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__0__KET____DOT__fa__DOT__cout))))) 
                                            << 0x00000010U) 
                                           | (((((((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__15__KET____DOT__fa__DOT__s) 
                                                   << 3U) 
                                                  | ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__14__KET____DOT__fa__DOT__s) 
                                                     << 2U)) 
                                                 | (((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__13__KET____DOT__fa__DOT__s) 
                                                     << 1U) 
                                                    | (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__12__KET____DOT__fa__DOT__s))) 
                                                << 0x0000000cU) 
                                               | (((((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__11__KET____DOT__fa__DOT__s) 
                                                     << 3U) 
                                                    | ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__10__KET____DOT__fa__DOT__s) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__9__KET____DOT__fa__DOT__s) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__8__KET____DOT__fa__DOT__s))) 
                                                  << 8U)) 
                                              | ((((((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__7__KET____DOT__fa__DOT__s) 
                                                     << 3U) 
                                                    | ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__6__KET____DOT__fa__DOT__s) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__5__KET____DOT__fa__DOT__s) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__4__KET____DOT__fa__DOT__s))) 
                                                  << 4U) 
                                                 | ((((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__3__KET____DOT__fa__DOT__s) 
                                                      << 3U) 
                                                     | ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__2__KET____DOT__fa__DOT__s) 
                                                        << 2U)) 
                                                    | (((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__1__KET____DOT__fa__DOT__s) 
                                                        << 1U) 
                                                       | (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__0__KET____DOT__fa__DOT__s))))));
    vlSelfRef.accum_block__DOT__s3_temp = (((QData)((IData)(
                                                            (((IData)(
                                                                      (vlSelfRef.accum_block__DOT__s2 
                                                                       >> 0x00000030U)) 
                                                              << 0x00000010U) 
                                                             | (((((((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__15__KET____DOT__fa__DOT__cout) 
                                                                     << 3U) 
                                                                    | ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__14__KET____DOT__fa__DOT__cout) 
                                                                       << 2U)) 
                                                                   | (((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__13__KET____DOT__fa__DOT__cout) 
                                                                       << 1U) 
                                                                      | (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__12__KET____DOT__fa__DOT__cout))) 
                                                                  << 0x0000000cU) 
                                                                 | (((((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__11__KET____DOT__fa__DOT__cout) 
                                                                       << 3U) 
                                                                      | ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__10__KET____DOT__fa__DOT__cout) 
                                                                         << 2U)) 
                                                                     | (((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__9__KET____DOT__fa__DOT__cout) 
                                                                         << 1U) 
                                                                        | (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__8__KET____DOT__fa__DOT__cout))) 
                                                                    << 8U)) 
                                                                | ((((((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__7__KET____DOT__fa__DOT__cout) 
                                                                       << 3U) 
                                                                      | ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__6__KET____DOT__fa__DOT__cout) 
                                                                         << 2U)) 
                                                                     | (((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__5__KET____DOT__fa__DOT__cout) 
                                                                         << 1U) 
                                                                        | (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__4__KET____DOT__fa__DOT__cout))) 
                                                                    << 4U) 
                                                                   | ((((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__3__KET____DOT__fa__DOT__cout) 
                                                                        << 3U) 
                                                                       | ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__2__KET____DOT__fa__DOT__cout) 
                                                                          << 2U)) 
                                                                      | (((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__1__KET____DOT__fa__DOT__cout) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__0__KET____DOT__fa__DOT__cout)))))))) 
                                            << 0x00000010U) 
                                           | (QData)((IData)(
                                                             (((((((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__15__KET____DOT__fa__DOT__s) 
                                                                   << 3U) 
                                                                  | ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__14__KET____DOT__fa__DOT__s) 
                                                                     << 2U)) 
                                                                 | (((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__13__KET____DOT__fa__DOT__s) 
                                                                     << 1U) 
                                                                    | (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__12__KET____DOT__fa__DOT__s))) 
                                                                << 0x0000000cU) 
                                                               | (((((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__11__KET____DOT__fa__DOT__s) 
                                                                     << 3U) 
                                                                    | ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__10__KET____DOT__fa__DOT__s) 
                                                                       << 2U)) 
                                                                   | (((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__9__KET____DOT__fa__DOT__s) 
                                                                       << 1U) 
                                                                      | (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__8__KET____DOT__fa__DOT__s))) 
                                                                  << 8U)) 
                                                              | ((((((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__7__KET____DOT__fa__DOT__s) 
                                                                     << 3U) 
                                                                    | ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__6__KET____DOT__fa__DOT__s) 
                                                                       << 2U)) 
                                                                   | (((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__5__KET____DOT__fa__DOT__s) 
                                                                       << 1U) 
                                                                      | (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__4__KET____DOT__fa__DOT__s))) 
                                                                  << 4U) 
                                                                 | ((((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__3__KET____DOT__fa__DOT__s) 
                                                                      << 3U) 
                                                                     | ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__2__KET____DOT__fa__DOT__s) 
                                                                        << 2U)) 
                                                                    | (((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__1__KET____DOT__fa__DOT__s) 
                                                                        << 1U) 
                                                                       | (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__0__KET____DOT__fa__DOT__s))))))));
    vlSelfRef.accum_block__DOT__s2_temp = (((QData)((IData)(
                                                            (((((((((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__cout) 
                                                                    << 3U) 
                                                                   | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__cout) 
                                                                      << 2U)) 
                                                                  | (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__cout) 
                                                                      << 1U) 
                                                                     | (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__cout))) 
                                                                 << 0x0000000cU) 
                                                                | (((((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__cout) 
                                                                      << 3U) 
                                                                     | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__cout) 
                                                                        << 2U)) 
                                                                    | (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__cout) 
                                                                        << 1U) 
                                                                       | (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__cout))) 
                                                                   << 8U)) 
                                                               | ((((((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__cout) 
                                                                      << 3U) 
                                                                     | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__cout) 
                                                                        << 2U)) 
                                                                    | (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__cout) 
                                                                        << 1U) 
                                                                       | (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__cout))) 
                                                                   << 4U) 
                                                                  | ((((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__cout) 
                                                                       << 3U) 
                                                                      | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__cout) 
                                                                         << 2U)) 
                                                                     | (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__cout) 
                                                                         << 1U) 
                                                                        | (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__cout))))) 
                                                              << 0x00000010U) 
                                                             | (((((((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__s) 
                                                                     << 3U) 
                                                                    | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__s) 
                                                                       << 2U)) 
                                                                   | (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__s) 
                                                                       << 1U) 
                                                                      | (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__s))) 
                                                                  << 0x0000000cU) 
                                                                 | (((((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__s) 
                                                                       << 3U) 
                                                                      | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__s) 
                                                                         << 2U)) 
                                                                     | (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__s) 
                                                                         << 1U) 
                                                                        | (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__s))) 
                                                                    << 8U)) 
                                                                | ((((((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__s) 
                                                                       << 3U) 
                                                                      | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__s) 
                                                                         << 2U)) 
                                                                     | (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__s) 
                                                                         << 1U) 
                                                                        | (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__s))) 
                                                                    << 4U) 
                                                                   | ((((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__s) 
                                                                        << 3U) 
                                                                       | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__s) 
                                                                          << 2U)) 
                                                                      | (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__s) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__s)))))))) 
                                            << 0x00000020U) 
                                           | (QData)((IData)(
                                                             (((((((((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__cout) 
                                                                     << 3U) 
                                                                    | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__cout) 
                                                                       << 2U)) 
                                                                   | (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__cout) 
                                                                       << 1U) 
                                                                      | (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__cout))) 
                                                                  << 0x0000000cU) 
                                                                 | (((((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__cout) 
                                                                       << 3U) 
                                                                      | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__cout) 
                                                                         << 2U)) 
                                                                     | (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__cout) 
                                                                         << 1U) 
                                                                        | (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__cout))) 
                                                                    << 8U)) 
                                                                | ((((((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__cout) 
                                                                       << 3U) 
                                                                      | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__cout) 
                                                                         << 2U)) 
                                                                     | (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__cout) 
                                                                         << 1U) 
                                                                        | (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__cout))) 
                                                                    << 4U) 
                                                                   | ((((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__cout) 
                                                                        << 3U) 
                                                                       | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__cout) 
                                                                          << 2U)) 
                                                                      | (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__cout) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__cout))))) 
                                                               << 0x00000010U) 
                                                              | (((((((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__s) 
                                                                      << 3U) 
                                                                     | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__s) 
                                                                        << 2U)) 
                                                                    | (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__s) 
                                                                        << 1U) 
                                                                       | (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__s))) 
                                                                   << 0x0000000cU) 
                                                                  | (((((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__s) 
                                                                        << 3U) 
                                                                       | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__s) 
                                                                          << 2U)) 
                                                                      | (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__s) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__s))) 
                                                                     << 8U)) 
                                                                 | ((((((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__s) 
                                                                        << 3U) 
                                                                       | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__s) 
                                                                          << 2U)) 
                                                                      | (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__s) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__s))) 
                                                                     << 4U) 
                                                                    | ((((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__s) 
                                                                         << 3U) 
                                                                        | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__s) 
                                                                           << 2U)) 
                                                                       | (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__s) 
                                                                           << 1U) 
                                                                          | (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__s)))))))));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__s1_temp[0U] = (((((
                                                   ((((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__cout) 
                                                      << 3U) 
                                                     | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__cout) 
                                                        << 2U)) 
                                                    | (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__cout) 
                                                        << 1U) 
                                                       | (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__cout))) 
                                                   << 0x0000000cU) 
                                                  | (((((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__cout) 
                                                        << 3U) 
                                                       | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__cout) 
                                                          << 2U)) 
                                                      | (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__cout) 
                                                          << 1U) 
                                                         | (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__cout))) 
                                                     << 8U)) 
                                                 | ((((((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__cout) 
                                                        << 3U) 
                                                       | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__cout) 
                                                          << 2U)) 
                                                      | (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__cout) 
                                                          << 1U) 
                                                         | (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__cout))) 
                                                     << 4U) 
                                                    | ((((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__cout) 
                                                         << 3U) 
                                                        | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__cout) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__cout) 
                                                           << 1U) 
                                                          | (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__cout))))) 
                                                << 0x00000010U) 
                                               | (((((((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__s) 
                                                       << 3U) 
                                                      | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__s) 
                                                         << 2U)) 
                                                     | (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__s) 
                                                         << 1U) 
                                                        | (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__s))) 
                                                    << 0x0000000cU) 
                                                   | (((((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__s) 
                                                         << 3U) 
                                                        | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__s) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__s) 
                                                           << 1U) 
                                                          | (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__s))) 
                                                      << 8U)) 
                                                  | ((((((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__s) 
                                                         << 3U) 
                                                        | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__s) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__s) 
                                                           << 1U) 
                                                          | (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__s))) 
                                                      << 4U) 
                                                     | ((((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__s) 
                                                          << 3U) 
                                                         | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__s) 
                                                            << 2U)) 
                                                        | (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__s) 
                                                            << 1U) 
                                                           | (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__s))))));
    vlSelfRef.accum_block__DOT__s1_temp[1U] = (((((
                                                   ((((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__cout) 
                                                      << 3U) 
                                                     | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__cout) 
                                                        << 2U)) 
                                                    | (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__cout) 
                                                        << 1U) 
                                                       | (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__cout))) 
                                                   << 0x0000000cU) 
                                                  | (((((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__cout) 
                                                        << 3U) 
                                                       | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__cout) 
                                                          << 2U)) 
                                                      | (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__cout) 
                                                          << 1U) 
                                                         | (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__cout))) 
                                                     << 8U)) 
                                                 | ((((((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__cout) 
                                                        << 3U) 
                                                       | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__cout) 
                                                          << 2U)) 
                                                      | (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__cout) 
                                                          << 1U) 
                                                         | (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__cout))) 
                                                     << 4U) 
                                                    | ((((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__cout) 
                                                         << 3U) 
                                                        | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__cout) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__cout) 
                                                           << 1U) 
                                                          | (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__cout))))) 
                                                << 0x00000010U) 
                                               | (((((((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__s) 
                                                       << 3U) 
                                                      | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__s) 
                                                         << 2U)) 
                                                     | (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__s) 
                                                         << 1U) 
                                                        | (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__s))) 
                                                    << 0x0000000cU) 
                                                   | (((((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__s) 
                                                         << 3U) 
                                                        | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__s) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__s) 
                                                           << 1U) 
                                                          | (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__s))) 
                                                      << 8U)) 
                                                  | ((((((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__s) 
                                                         << 3U) 
                                                        | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__s) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__s) 
                                                           << 1U) 
                                                          | (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__s))) 
                                                      << 4U) 
                                                     | ((((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__s) 
                                                          << 3U) 
                                                         | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__s) 
                                                            << 2U)) 
                                                        | (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__s) 
                                                            << 1U) 
                                                           | (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__s))))));
    vlSelfRef.accum_block__DOT__s1_temp[2U] = (((((
                                                   ((((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__cout) 
                                                      << 3U) 
                                                     | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__cout) 
                                                        << 2U)) 
                                                    | (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__cout) 
                                                        << 1U) 
                                                       | (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__cout))) 
                                                   << 0x0000000cU) 
                                                  | (((((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__cout) 
                                                        << 3U) 
                                                       | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__cout) 
                                                          << 2U)) 
                                                      | (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__cout) 
                                                          << 1U) 
                                                         | (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__cout))) 
                                                     << 8U)) 
                                                 | ((((((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__cout) 
                                                        << 3U) 
                                                       | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__cout) 
                                                          << 2U)) 
                                                      | (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__cout) 
                                                          << 1U) 
                                                         | (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__cout))) 
                                                     << 4U) 
                                                    | ((((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__cout) 
                                                         << 3U) 
                                                        | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__cout) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__cout) 
                                                           << 1U) 
                                                          | (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__cout))))) 
                                                << 0x00000010U) 
                                               | (((((((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__s) 
                                                       << 3U) 
                                                      | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__s) 
                                                         << 2U)) 
                                                     | (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__s) 
                                                         << 1U) 
                                                        | (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__s))) 
                                                    << 0x0000000cU) 
                                                   | (((((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__s) 
                                                         << 3U) 
                                                        | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__s) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__s) 
                                                           << 1U) 
                                                          | (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__s))) 
                                                      << 8U)) 
                                                  | ((((((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__s) 
                                                         << 3U) 
                                                        | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__s) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__s) 
                                                           << 1U) 
                                                          | (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__s))) 
                                                      << 4U) 
                                                     | ((((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__s) 
                                                          << 3U) 
                                                         | ((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__s) 
                                                            << 2U)) 
                                                        | (((IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__s) 
                                                            << 1U) 
                                                           | (IData)(vlSelfRef.accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__s))))));
}

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = Vtop___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((IData)(vlSelfRef.accum_block__DOT__clk) 
                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__accum_block__DOT__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__accum_block__DOT__clk__0 
        = vlSelfRef.accum_block__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk3__BRA__0__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk3__BRA__0__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk3__BRA__1__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk3__BRA__1__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk3__BRA__2__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk3__BRA__2__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk3__BRA__3__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk3__BRA__3__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk3__BRA__4__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk3__BRA__4__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk3__BRA__5__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk3__BRA__5__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk3__BRA__6__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk3__BRA__6__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk3__BRA__7__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk3__BRA__7__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk3__BRA__8__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk3__BRA__8__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk3__BRA__9__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk3__BRA__9__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk3__BRA__10__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk3__BRA__10__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk3__BRA__11__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk3__BRA__11__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk3__BRA__12__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk3__BRA__12__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk3__BRA__13__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk3__BRA__13__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk3__BRA__14__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk3__BRA__14__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk3__BRA__15__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk3__BRA__15__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk4__BRA__0__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk4__BRA__0__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk4__BRA__1__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk4__BRA__1__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk4__BRA__2__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk4__BRA__2__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk4__BRA__3__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk4__BRA__3__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk4__BRA__4__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk4__BRA__4__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk4__BRA__5__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk4__BRA__5__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk4__BRA__6__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk4__BRA__6__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk4__BRA__7__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk4__BRA__7__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk4__BRA__8__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk4__BRA__8__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk4__BRA__9__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk4__BRA__9__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk4__BRA__10__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk4__BRA__10__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk4__BRA__11__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk4__BRA__11__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk4__BRA__12__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk4__BRA__12__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk4__BRA__13__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk4__BRA__13__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk4__BRA__14__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk4__BRA__14__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ accum_block__DOT__genblk4__BRA__15__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0;
    accum_block__DOT__genblk4__BRA__15__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    // Body
    if (vlSelfRef.accum_block__DOT__s3_valid) {
        vlSelfRef.accum_block__DOT__s4 = vlSelfRef.accum_block__DOT__s4_temp;
    }
    if (vlSelfRef.accum_block__DOT__s4_valid) {
        vlSelfRef.accum_block__DOT__data_out = vlSelfRef.accum_block__DOT__s5_temp;
    }
    vlSelfRef.accum_block__DOT__out_valid = ((1U & 
                                              (~ (IData)(vlSelfRef.accum_block__DOT__rst))) 
                                             && (IData)(vlSelfRef.accum_block__DOT__s4_valid));
    if (vlSelfRef.accum_block__DOT__s2_valid) {
        vlSelfRef.accum_block__DOT__s3 = vlSelfRef.accum_block__DOT__s3_temp;
    }
    if (vlSelfRef.accum_block__DOT__s1_valid) {
        vlSelfRef.accum_block__DOT__s2 = vlSelfRef.accum_block__DOT__s2_temp;
    }
    if (vlSelfRef.accum_block__DOT__input_valid) {
        vlSelfRef.accum_block__DOT__s1[0U] = vlSelfRef.accum_block__DOT__s1_temp[0U];
        vlSelfRef.accum_block__DOT__s1[1U] = vlSelfRef.accum_block__DOT__s1_temp[1U];
        vlSelfRef.accum_block__DOT__s1[2U] = vlSelfRef.accum_block__DOT__s1_temp[2U];
    }
    vlSelfRef.accum_block__DOT__s5_temp = (0x0000ffffU 
                                           & (vlSelfRef.accum_block__DOT__s4 
                                              + (vlSelfRef.accum_block__DOT__s4 
                                                 >> 0x00000010U)));
    vlSelfRef.data_out = vlSelfRef.accum_block__DOT__data_out;
    vlSelfRef.out_valid = vlSelfRef.accum_block__DOT__out_valid;
    vlSelfRef.accum_block__DOT__s4_valid = ((1U & (~ (IData)(vlSelfRef.accum_block__DOT__rst))) 
                                            && (IData)(vlSelfRef.accum_block__DOT__s3_valid));
    vlSelfRef.accum_block__DOT__genblk4__BRA__0__KET____DOT__fa__DOT__cin 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x00000020U)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__1__KET____DOT__fa__DOT__cin 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x00000021U)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__2__KET____DOT__fa__DOT__cin 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x00000022U)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__3__KET____DOT__fa__DOT__cin 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x00000023U)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__4__KET____DOT__fa__DOT__cin 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x00000024U)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__5__KET____DOT__fa__DOT__cin 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x00000025U)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__6__KET____DOT__fa__DOT__cin 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x00000026U)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__7__KET____DOT__fa__DOT__cin 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x00000027U)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__8__KET____DOT__fa__DOT__cin 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x00000028U)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__9__KET____DOT__fa__DOT__cin 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x00000029U)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__10__KET____DOT__fa__DOT__cin 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x0000002aU)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__11__KET____DOT__fa__DOT__cin 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x0000002bU)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__12__KET____DOT__fa__DOT__cin 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x0000002cU)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__13__KET____DOT__fa__DOT__cin 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x0000002dU)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__14__KET____DOT__fa__DOT__cin 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x0000002eU)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__15__KET____DOT__fa__DOT__cin 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x0000002fU)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__0__KET____DOT__fa__DOT__a 
        = (1U & (IData)(vlSelfRef.accum_block__DOT__s3));
    vlSelfRef.accum_block__DOT__genblk4__BRA__0__KET____DOT__fa__DOT__b 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x00000010U)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__1__KET____DOT__fa__DOT__a 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 1U)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__1__KET____DOT__fa__DOT__b 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x00000011U)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__2__KET____DOT__fa__DOT__a 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 2U)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__2__KET____DOT__fa__DOT__b 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x00000012U)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__3__KET____DOT__fa__DOT__a 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 3U)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__3__KET____DOT__fa__DOT__b 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x00000013U)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__4__KET____DOT__fa__DOT__a 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 4U)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__4__KET____DOT__fa__DOT__b 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x00000014U)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__5__KET____DOT__fa__DOT__a 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 5U)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__5__KET____DOT__fa__DOT__b 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x00000015U)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__6__KET____DOT__fa__DOT__a 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 6U)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__6__KET____DOT__fa__DOT__b 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x00000016U)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__7__KET____DOT__fa__DOT__a 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 7U)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__7__KET____DOT__fa__DOT__b 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x00000017U)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__8__KET____DOT__fa__DOT__a 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 8U)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__8__KET____DOT__fa__DOT__b 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x00000018U)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__9__KET____DOT__fa__DOT__a 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 9U)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__9__KET____DOT__fa__DOT__b 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x00000019U)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__10__KET____DOT__fa__DOT__a 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x0000000aU)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__10__KET____DOT__fa__DOT__b 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x0000001aU)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__11__KET____DOT__fa__DOT__a 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x0000000bU)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__11__KET____DOT__fa__DOT__b 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x0000001bU)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__12__KET____DOT__fa__DOT__a 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x0000000cU)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__12__KET____DOT__fa__DOT__b 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x0000001cU)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__13__KET____DOT__fa__DOT__a 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x0000000dU)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__13__KET____DOT__fa__DOT__b 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x0000001dU)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__14__KET____DOT__fa__DOT__a 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x0000000eU)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__14__KET____DOT__fa__DOT__b 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x0000001eU)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__15__KET____DOT__fa__DOT__a 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x0000000fU)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__15__KET____DOT__fa__DOT__b 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s3 
                         >> 0x0000001fU)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__0__KET____DOT__fa__DOT__cin 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x00000020U)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__1__KET____DOT__fa__DOT__cin 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x00000021U)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__2__KET____DOT__fa__DOT__cin 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x00000022U)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__3__KET____DOT__fa__DOT__cin 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x00000023U)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__4__KET____DOT__fa__DOT__cin 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x00000024U)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__5__KET____DOT__fa__DOT__cin 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x00000025U)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__6__KET____DOT__fa__DOT__cin 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x00000026U)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__7__KET____DOT__fa__DOT__cin 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x00000027U)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__8__KET____DOT__fa__DOT__cin 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x00000028U)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__9__KET____DOT__fa__DOT__cin 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x00000029U)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__10__KET____DOT__fa__DOT__cin 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x0000002aU)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__11__KET____DOT__fa__DOT__cin 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x0000002bU)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__12__KET____DOT__fa__DOT__cin 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x0000002cU)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__13__KET____DOT__fa__DOT__cin 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x0000002dU)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__14__KET____DOT__fa__DOT__cin 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x0000002eU)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__15__KET____DOT__fa__DOT__cin 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x0000002fU)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__0__KET____DOT__fa__DOT__a 
        = (1U & (IData)(vlSelfRef.accum_block__DOT__s2));
    vlSelfRef.accum_block__DOT__genblk3__BRA__0__KET____DOT__fa__DOT__b 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x00000010U)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__1__KET____DOT__fa__DOT__a 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 1U)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__1__KET____DOT__fa__DOT__b 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x00000011U)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__2__KET____DOT__fa__DOT__a 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 2U)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__2__KET____DOT__fa__DOT__b 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x00000012U)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__3__KET____DOT__fa__DOT__a 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 3U)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__3__KET____DOT__fa__DOT__b 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x00000013U)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__4__KET____DOT__fa__DOT__a 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 4U)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__4__KET____DOT__fa__DOT__b 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x00000014U)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__5__KET____DOT__fa__DOT__a 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 5U)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__5__KET____DOT__fa__DOT__b 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x00000015U)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__6__KET____DOT__fa__DOT__a 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 6U)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__6__KET____DOT__fa__DOT__b 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x00000016U)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__7__KET____DOT__fa__DOT__a 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 7U)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__7__KET____DOT__fa__DOT__b 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x00000017U)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__8__KET____DOT__fa__DOT__a 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 8U)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__8__KET____DOT__fa__DOT__b 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x00000018U)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__9__KET____DOT__fa__DOT__a 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 9U)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__9__KET____DOT__fa__DOT__b 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x00000019U)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__10__KET____DOT__fa__DOT__a 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x0000000aU)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__10__KET____DOT__fa__DOT__b 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x0000001aU)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__11__KET____DOT__fa__DOT__a 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x0000000bU)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__11__KET____DOT__fa__DOT__b 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x0000001bU)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__12__KET____DOT__fa__DOT__a 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x0000000cU)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__12__KET____DOT__fa__DOT__b 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x0000001cU)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__13__KET____DOT__fa__DOT__a 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x0000000dU)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__13__KET____DOT__fa__DOT__b 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x0000001dU)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__14__KET____DOT__fa__DOT__a 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x0000000eU)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__14__KET____DOT__fa__DOT__b 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x0000001eU)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__15__KET____DOT__fa__DOT__a 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x0000000fU)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__15__KET____DOT__fa__DOT__b 
        = (1U & (IData)((vlSelfRef.accum_block__DOT__s2 
                         >> 0x0000001fU)));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__cin 
        = (1U & vlSelfRef.accum_block__DOT__s1[1U]);
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__s1[1U] 
                 >> 1U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__s1[1U] 
                 >> 2U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__s1[1U] 
                 >> 3U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__s1[1U] 
                 >> 4U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__s1[1U] 
                 >> 5U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__s1[1U] 
                 >> 6U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__s1[1U] 
                 >> 7U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__s1[1U] 
                 >> 8U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__s1[1U] 
                 >> 9U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__s1[1U] 
                 >> 0x0000000aU));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__s1[1U] 
                 >> 0x0000000bU));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__s1[1U] 
                 >> 0x0000000cU));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__s1[1U] 
                 >> 0x0000000dU));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__s1[1U] 
                 >> 0x0000000eU));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__s1[1U] 
                 >> 0x0000000fU));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__s1[2U] 
                 >> 0x00000010U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__s1[2U] 
                 >> 0x00000011U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__s1[2U] 
                 >> 0x00000012U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__s1[2U] 
                 >> 0x00000013U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__s1[2U] 
                 >> 0x00000014U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__s1[2U] 
                 >> 0x00000015U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__s1[2U] 
                 >> 0x00000016U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__s1[2U] 
                 >> 0x00000017U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__s1[2U] 
                 >> 0x00000018U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__s1[2U] 
                 >> 0x00000019U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__s1[2U] 
                 >> 0x0000001aU));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__s1[2U] 
                 >> 0x0000001bU));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__s1[2U] 
                 >> 0x0000001cU));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__s1[2U] 
                 >> 0x0000001dU));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__cin 
        = (1U & (vlSelfRef.accum_block__DOT__s1[2U] 
                 >> 0x0000001eU));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__cin 
        = (vlSelfRef.accum_block__DOT__s1[2U] >> 0x0000001fU);
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__a 
        = (1U & vlSelfRef.accum_block__DOT__s1[0U]);
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__s1[0U] 
                 >> 0x00000010U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__s1[0U] 
                 >> 1U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__s1[0U] 
                 >> 0x00000011U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__s1[0U] 
                 >> 2U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__s1[0U] 
                 >> 0x00000012U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__s1[0U] 
                 >> 3U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__s1[0U] 
                 >> 0x00000013U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__s1[0U] 
                 >> 4U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__s1[0U] 
                 >> 0x00000014U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__s1[0U] 
                 >> 5U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__s1[0U] 
                 >> 0x00000015U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__s1[0U] 
                 >> 6U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__s1[0U] 
                 >> 0x00000016U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__s1[0U] 
                 >> 7U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__s1[0U] 
                 >> 0x00000017U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__s1[0U] 
                 >> 8U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__s1[0U] 
                 >> 0x00000018U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__s1[0U] 
                 >> 9U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__s1[0U] 
                 >> 0x00000019U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__s1[0U] 
                 >> 0x0000000aU));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__s1[0U] 
                 >> 0x0000001aU));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__s1[0U] 
                 >> 0x0000000bU));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__s1[0U] 
                 >> 0x0000001bU));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__s1[0U] 
                 >> 0x0000000cU));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__s1[0U] 
                 >> 0x0000001cU));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__s1[0U] 
                 >> 0x0000000dU));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__s1[0U] 
                 >> 0x0000001dU));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__s1[0U] 
                 >> 0x0000000eU));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__s1[0U] 
                 >> 0x0000001eU));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__s1[0U] 
                 >> 0x0000000fU));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__b 
        = (vlSelfRef.accum_block__DOT__s1[0U] >> 0x0000001fU);
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__s1[1U] 
                 >> 0x00000010U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__b 
        = (1U & vlSelfRef.accum_block__DOT__s1[2U]);
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__s1[1U] 
                 >> 0x00000011U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__s1[2U] 
                 >> 1U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__s1[1U] 
                 >> 0x00000012U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__s1[2U] 
                 >> 2U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__s1[1U] 
                 >> 0x00000013U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__s1[2U] 
                 >> 3U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__s1[1U] 
                 >> 0x00000014U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__s1[2U] 
                 >> 4U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__s1[1U] 
                 >> 0x00000015U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__s1[2U] 
                 >> 5U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__s1[1U] 
                 >> 0x00000016U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__s1[2U] 
                 >> 6U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__s1[1U] 
                 >> 0x00000017U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__s1[2U] 
                 >> 7U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__s1[1U] 
                 >> 0x00000018U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__s1[2U] 
                 >> 8U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__s1[1U] 
                 >> 0x00000019U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__s1[2U] 
                 >> 9U));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__s1[1U] 
                 >> 0x0000001aU));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__s1[2U] 
                 >> 0x0000000aU));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__s1[1U] 
                 >> 0x0000001bU));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__s1[2U] 
                 >> 0x0000000bU));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__s1[1U] 
                 >> 0x0000001cU));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__s1[2U] 
                 >> 0x0000000cU));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__s1[1U] 
                 >> 0x0000001dU));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__s1[2U] 
                 >> 0x0000000dU));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__a 
        = (1U & (vlSelfRef.accum_block__DOT__s1[1U] 
                 >> 0x0000001eU));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__s1[2U] 
                 >> 0x0000000eU));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__a 
        = (vlSelfRef.accum_block__DOT__s1[1U] >> 0x0000001fU);
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__b 
        = (1U & (vlSelfRef.accum_block__DOT__s1[2U] 
                 >> 0x0000000fU));
    accum_block__DOT__genblk4__BRA__0__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__0__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__0__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk4__BRA__1__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__1__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__1__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk4__BRA__2__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__2__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__2__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk4__BRA__3__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__3__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__3__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk4__BRA__4__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__4__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__4__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk4__BRA__5__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__5__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__5__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk4__BRA__6__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__6__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__6__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk4__BRA__7__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__7__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__7__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk4__BRA__8__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__8__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__8__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk4__BRA__9__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__9__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__9__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk4__BRA__10__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__10__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__10__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk4__BRA__11__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__11__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__11__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk4__BRA__12__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__12__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__12__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk4__BRA__13__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__13__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__13__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk4__BRA__14__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__14__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__14__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk4__BRA__15__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__15__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__15__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk3__BRA__0__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__0__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__0__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk3__BRA__1__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__1__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__1__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk3__BRA__2__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__2__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__2__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk3__BRA__3__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__3__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__3__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk3__BRA__4__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__4__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__4__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk3__BRA__5__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__5__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__5__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk3__BRA__6__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__6__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__6__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk3__BRA__7__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__7__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__7__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk3__BRA__8__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__8__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__8__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk3__BRA__9__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__9__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__9__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk3__BRA__10__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__10__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__10__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk3__BRA__11__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__11__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__11__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk3__BRA__12__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__12__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__12__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk3__BRA__13__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__13__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__13__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk3__BRA__14__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__14__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__14__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk3__BRA__15__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__15__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__15__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__b));
    accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__a) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__b));
    vlSelfRef.accum_block__DOT__s3_valid = ((1U & (~ (IData)(vlSelfRef.accum_block__DOT__rst))) 
                                            && (IData)(vlSelfRef.accum_block__DOT__s2_valid));
    vlSelfRef.accum_block__DOT__genblk4__BRA__0__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk4__BRA__0__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__0__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk4__BRA__0__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__0__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__0__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__0__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk4__BRA__0__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__1__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk4__BRA__1__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__1__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk4__BRA__1__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__1__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__1__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__1__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk4__BRA__1__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__2__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk4__BRA__2__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__2__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk4__BRA__2__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__2__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__2__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__2__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk4__BRA__2__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__3__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk4__BRA__3__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__3__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk4__BRA__3__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__3__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__3__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__3__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk4__BRA__3__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__4__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk4__BRA__4__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__4__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk4__BRA__4__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__4__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__4__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__4__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk4__BRA__4__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__5__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk4__BRA__5__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__5__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk4__BRA__5__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__5__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__5__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__5__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk4__BRA__5__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__6__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk4__BRA__6__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__6__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk4__BRA__6__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__6__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__6__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__6__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk4__BRA__6__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__7__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk4__BRA__7__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__7__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk4__BRA__7__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__7__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__7__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__7__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk4__BRA__7__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__8__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk4__BRA__8__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__8__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk4__BRA__8__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__8__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__8__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__8__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk4__BRA__8__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__9__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk4__BRA__9__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__9__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk4__BRA__9__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__9__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__9__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__9__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk4__BRA__9__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__10__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk4__BRA__10__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__10__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk4__BRA__10__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__10__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__10__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__10__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk4__BRA__10__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__11__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk4__BRA__11__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__11__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk4__BRA__11__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__11__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__11__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__11__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk4__BRA__11__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__12__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk4__BRA__12__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__12__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk4__BRA__12__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__12__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__12__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__12__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk4__BRA__12__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__13__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk4__BRA__13__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__13__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk4__BRA__13__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__13__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__13__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__13__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk4__BRA__13__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__14__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk4__BRA__14__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__14__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk4__BRA__14__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__14__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__14__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__14__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk4__BRA__14__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk4__BRA__15__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk4__BRA__15__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__15__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk4__BRA__15__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__15__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__15__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__15__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk4__BRA__15__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__0__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk3__BRA__0__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__0__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk3__BRA__0__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__0__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__0__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__0__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk3__BRA__0__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__1__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk3__BRA__1__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__1__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk3__BRA__1__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__1__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__1__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__1__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk3__BRA__1__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__2__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk3__BRA__2__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__2__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk3__BRA__2__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__2__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__2__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__2__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk3__BRA__2__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__3__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk3__BRA__3__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__3__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk3__BRA__3__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__3__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__3__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__3__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk3__BRA__3__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__4__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk3__BRA__4__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__4__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk3__BRA__4__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__4__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__4__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__4__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk3__BRA__4__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__5__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk3__BRA__5__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__5__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk3__BRA__5__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__5__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__5__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__5__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk3__BRA__5__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__6__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk3__BRA__6__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__6__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk3__BRA__6__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__6__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__6__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__6__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk3__BRA__6__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__7__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk3__BRA__7__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__7__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk3__BRA__7__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__7__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__7__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__7__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk3__BRA__7__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__8__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk3__BRA__8__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__8__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk3__BRA__8__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__8__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__8__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__8__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk3__BRA__8__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__9__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk3__BRA__9__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__9__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk3__BRA__9__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__9__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__9__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__9__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk3__BRA__9__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__10__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk3__BRA__10__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__10__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk3__BRA__10__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__10__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__10__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__10__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk3__BRA__10__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__11__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk3__BRA__11__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__11__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk3__BRA__11__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__11__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__11__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__11__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk3__BRA__11__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__12__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk3__BRA__12__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__12__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk3__BRA__12__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__12__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__12__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__12__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk3__BRA__12__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__13__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk3__BRA__13__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__13__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk3__BRA__13__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__13__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__13__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__13__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk3__BRA__13__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__14__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk3__BRA__14__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__14__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk3__BRA__14__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__14__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__14__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__14__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk3__BRA__14__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk3__BRA__15__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk3__BRA__15__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__15__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk3__BRA__15__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__15__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__15__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__15__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk3__BRA__15__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__s 
        = ((IData)(accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__cin));
    vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__cout 
        = (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__a) 
            & (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__b)) 
           | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__cin) 
              & (IData)(accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.accum_block__DOT__s4_temp = (((((((((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__15__KET____DOT__fa__DOT__cout) 
                                                  << 3U) 
                                                 | ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__14__KET____DOT__fa__DOT__cout) 
                                                    << 2U)) 
                                                | (((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__13__KET____DOT__fa__DOT__cout) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__12__KET____DOT__fa__DOT__cout))) 
                                               << 0x0000000cU) 
                                              | (((((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__11__KET____DOT__fa__DOT__cout) 
                                                    << 3U) 
                                                   | ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__10__KET____DOT__fa__DOT__cout) 
                                                      << 2U)) 
                                                  | (((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__9__KET____DOT__fa__DOT__cout) 
                                                      << 1U) 
                                                     | (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__8__KET____DOT__fa__DOT__cout))) 
                                                 << 8U)) 
                                             | ((((((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__7__KET____DOT__fa__DOT__cout) 
                                                    << 3U) 
                                                   | ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__6__KET____DOT__fa__DOT__cout) 
                                                      << 2U)) 
                                                  | (((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__5__KET____DOT__fa__DOT__cout) 
                                                      << 1U) 
                                                     | (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__4__KET____DOT__fa__DOT__cout))) 
                                                 << 4U) 
                                                | ((((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__3__KET____DOT__fa__DOT__cout) 
                                                     << 3U) 
                                                    | ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__2__KET____DOT__fa__DOT__cout) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__1__KET____DOT__fa__DOT__cout) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__0__KET____DOT__fa__DOT__cout))))) 
                                            << 0x00000010U) 
                                           | (((((((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__15__KET____DOT__fa__DOT__s) 
                                                   << 3U) 
                                                  | ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__14__KET____DOT__fa__DOT__s) 
                                                     << 2U)) 
                                                 | (((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__13__KET____DOT__fa__DOT__s) 
                                                     << 1U) 
                                                    | (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__12__KET____DOT__fa__DOT__s))) 
                                                << 0x0000000cU) 
                                               | (((((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__11__KET____DOT__fa__DOT__s) 
                                                     << 3U) 
                                                    | ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__10__KET____DOT__fa__DOT__s) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__9__KET____DOT__fa__DOT__s) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__8__KET____DOT__fa__DOT__s))) 
                                                  << 8U)) 
                                              | ((((((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__7__KET____DOT__fa__DOT__s) 
                                                     << 3U) 
                                                    | ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__6__KET____DOT__fa__DOT__s) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__5__KET____DOT__fa__DOT__s) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__4__KET____DOT__fa__DOT__s))) 
                                                  << 4U) 
                                                 | ((((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__3__KET____DOT__fa__DOT__s) 
                                                      << 3U) 
                                                     | ((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__2__KET____DOT__fa__DOT__s) 
                                                        << 2U)) 
                                                    | (((IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__1__KET____DOT__fa__DOT__s) 
                                                        << 1U) 
                                                       | (IData)(vlSelfRef.accum_block__DOT__genblk4__BRA__0__KET____DOT__fa__DOT__s))))));
    vlSelfRef.accum_block__DOT__s3_temp = (((QData)((IData)(
                                                            (((IData)(
                                                                      (vlSelfRef.accum_block__DOT__s2 
                                                                       >> 0x00000030U)) 
                                                              << 0x00000010U) 
                                                             | (((((((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__15__KET____DOT__fa__DOT__cout) 
                                                                     << 3U) 
                                                                    | ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__14__KET____DOT__fa__DOT__cout) 
                                                                       << 2U)) 
                                                                   | (((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__13__KET____DOT__fa__DOT__cout) 
                                                                       << 1U) 
                                                                      | (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__12__KET____DOT__fa__DOT__cout))) 
                                                                  << 0x0000000cU) 
                                                                 | (((((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__11__KET____DOT__fa__DOT__cout) 
                                                                       << 3U) 
                                                                      | ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__10__KET____DOT__fa__DOT__cout) 
                                                                         << 2U)) 
                                                                     | (((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__9__KET____DOT__fa__DOT__cout) 
                                                                         << 1U) 
                                                                        | (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__8__KET____DOT__fa__DOT__cout))) 
                                                                    << 8U)) 
                                                                | ((((((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__7__KET____DOT__fa__DOT__cout) 
                                                                       << 3U) 
                                                                      | ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__6__KET____DOT__fa__DOT__cout) 
                                                                         << 2U)) 
                                                                     | (((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__5__KET____DOT__fa__DOT__cout) 
                                                                         << 1U) 
                                                                        | (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__4__KET____DOT__fa__DOT__cout))) 
                                                                    << 4U) 
                                                                   | ((((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__3__KET____DOT__fa__DOT__cout) 
                                                                        << 3U) 
                                                                       | ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__2__KET____DOT__fa__DOT__cout) 
                                                                          << 2U)) 
                                                                      | (((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__1__KET____DOT__fa__DOT__cout) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__0__KET____DOT__fa__DOT__cout)))))))) 
                                            << 0x00000010U) 
                                           | (QData)((IData)(
                                                             (((((((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__15__KET____DOT__fa__DOT__s) 
                                                                   << 3U) 
                                                                  | ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__14__KET____DOT__fa__DOT__s) 
                                                                     << 2U)) 
                                                                 | (((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__13__KET____DOT__fa__DOT__s) 
                                                                     << 1U) 
                                                                    | (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__12__KET____DOT__fa__DOT__s))) 
                                                                << 0x0000000cU) 
                                                               | (((((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__11__KET____DOT__fa__DOT__s) 
                                                                     << 3U) 
                                                                    | ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__10__KET____DOT__fa__DOT__s) 
                                                                       << 2U)) 
                                                                   | (((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__9__KET____DOT__fa__DOT__s) 
                                                                       << 1U) 
                                                                      | (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__8__KET____DOT__fa__DOT__s))) 
                                                                  << 8U)) 
                                                              | ((((((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__7__KET____DOT__fa__DOT__s) 
                                                                     << 3U) 
                                                                    | ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__6__KET____DOT__fa__DOT__s) 
                                                                       << 2U)) 
                                                                   | (((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__5__KET____DOT__fa__DOT__s) 
                                                                       << 1U) 
                                                                      | (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__4__KET____DOT__fa__DOT__s))) 
                                                                  << 4U) 
                                                                 | ((((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__3__KET____DOT__fa__DOT__s) 
                                                                      << 3U) 
                                                                     | ((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__2__KET____DOT__fa__DOT__s) 
                                                                        << 2U)) 
                                                                    | (((IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__1__KET____DOT__fa__DOT__s) 
                                                                        << 1U) 
                                                                       | (IData)(vlSelfRef.accum_block__DOT__genblk3__BRA__0__KET____DOT__fa__DOT__s))))))));
    vlSelfRef.accum_block__DOT__s2_temp = (((QData)((IData)(
                                                            (((((((((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__cout) 
                                                                    << 3U) 
                                                                   | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__cout) 
                                                                      << 2U)) 
                                                                  | (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__cout) 
                                                                      << 1U) 
                                                                     | (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__cout))) 
                                                                 << 0x0000000cU) 
                                                                | (((((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__cout) 
                                                                      << 3U) 
                                                                     | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__cout) 
                                                                        << 2U)) 
                                                                    | (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__cout) 
                                                                        << 1U) 
                                                                       | (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__cout))) 
                                                                   << 8U)) 
                                                               | ((((((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__cout) 
                                                                      << 3U) 
                                                                     | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__cout) 
                                                                        << 2U)) 
                                                                    | (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__cout) 
                                                                        << 1U) 
                                                                       | (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__cout))) 
                                                                   << 4U) 
                                                                  | ((((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__cout) 
                                                                       << 3U) 
                                                                      | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__cout) 
                                                                         << 2U)) 
                                                                     | (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__cout) 
                                                                         << 1U) 
                                                                        | (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__cout))))) 
                                                              << 0x00000010U) 
                                                             | (((((((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__s) 
                                                                     << 3U) 
                                                                    | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__s) 
                                                                       << 2U)) 
                                                                   | (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__s) 
                                                                       << 1U) 
                                                                      | (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__s))) 
                                                                  << 0x0000000cU) 
                                                                 | (((((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__s) 
                                                                       << 3U) 
                                                                      | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__s) 
                                                                         << 2U)) 
                                                                     | (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__s) 
                                                                         << 1U) 
                                                                        | (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__s))) 
                                                                    << 8U)) 
                                                                | ((((((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__s) 
                                                                       << 3U) 
                                                                      | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__s) 
                                                                         << 2U)) 
                                                                     | (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__s) 
                                                                         << 1U) 
                                                                        | (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__s))) 
                                                                    << 4U) 
                                                                   | ((((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__s) 
                                                                        << 3U) 
                                                                       | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__s) 
                                                                          << 2U)) 
                                                                      | (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__s) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__s)))))))) 
                                            << 0x00000020U) 
                                           | (QData)((IData)(
                                                             (((((((((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__cout) 
                                                                     << 3U) 
                                                                    | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__cout) 
                                                                       << 2U)) 
                                                                   | (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__cout) 
                                                                       << 1U) 
                                                                      | (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__cout))) 
                                                                  << 0x0000000cU) 
                                                                 | (((((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__cout) 
                                                                       << 3U) 
                                                                      | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__cout) 
                                                                         << 2U)) 
                                                                     | (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__cout) 
                                                                         << 1U) 
                                                                        | (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__cout))) 
                                                                    << 8U)) 
                                                                | ((((((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__cout) 
                                                                       << 3U) 
                                                                      | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__cout) 
                                                                         << 2U)) 
                                                                     | (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__cout) 
                                                                         << 1U) 
                                                                        | (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__cout))) 
                                                                    << 4U) 
                                                                   | ((((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__cout) 
                                                                        << 3U) 
                                                                       | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__cout) 
                                                                          << 2U)) 
                                                                      | (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__cout) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__cout))))) 
                                                               << 0x00000010U) 
                                                              | (((((((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__s) 
                                                                      << 3U) 
                                                                     | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__s) 
                                                                        << 2U)) 
                                                                    | (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__s) 
                                                                        << 1U) 
                                                                       | (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__s))) 
                                                                   << 0x0000000cU) 
                                                                  | (((((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__s) 
                                                                        << 3U) 
                                                                       | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__s) 
                                                                          << 2U)) 
                                                                      | (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__s) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__s))) 
                                                                     << 8U)) 
                                                                 | ((((((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__s) 
                                                                        << 3U) 
                                                                       | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__s) 
                                                                          << 2U)) 
                                                                      | (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__s) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__s))) 
                                                                     << 4U) 
                                                                    | ((((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__s) 
                                                                         << 3U) 
                                                                        | ((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__s) 
                                                                           << 2U)) 
                                                                       | (((IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__s) 
                                                                           << 1U) 
                                                                          | (IData)(vlSelfRef.accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__s)))))))));
    vlSelfRef.accum_block__DOT__s2_valid = ((1U & (~ (IData)(vlSelfRef.accum_block__DOT__rst))) 
                                            && (IData)(vlSelfRef.accum_block__DOT__s1_valid));
    vlSelfRef.accum_block__DOT__s1_valid = ((1U & (~ (IData)(vlSelfRef.accum_block__DOT__rst))) 
                                            && (IData)(vlSelfRef.accum_block__DOT__input_valid));
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    Vtop___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vtop___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtop___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        Vtop___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("/mnt/c/Users/immkb/Desktop/FPGA_stuff/GIT_REPOS/DE25_Nano_Image_Processing_IP/test_accum_stage/rtl/accum_block.sv", 1, "", "DIDNOTCONVERGE: Input combinational region did not converge after 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
    } while (Vtop___024root___eval_phase__ico(vlSelf));
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/mnt/c/Users/immkb/Desktop/FPGA_stuff/GIT_REPOS/DE25_Nano_Image_Processing_IP/test_accum_stage/rtl/accum_block.sv", 1, "", "DIDNOTCONVERGE: NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/mnt/c/Users/immkb/Desktop/FPGA_stuff/GIT_REPOS/DE25_Nano_Image_Processing_IP/test_accum_stage/rtl/accum_block.sv", 1, "", "DIDNOTCONVERGE: Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vtop___024root___eval_phase__act(vlSelf));
    } while (Vtop___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");
    }
    if (VL_UNLIKELY(((vlSelfRef.data_in[4U] & 0xffff0000U)))) {
        Verilated::overWidthError("data_in");
    }
    if (VL_UNLIKELY(((vlSelfRef.input_valid & 0xfeU)))) {
        Verilated::overWidthError("input_valid");
    }
}
#endif  // VL_DEBUG
