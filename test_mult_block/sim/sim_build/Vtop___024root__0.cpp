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
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa_1__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa_1__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa_2__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa_2__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa_3__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa_3__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa_4__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa_4__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa_5__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa_5__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa_6__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa_6__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa_7__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa_7__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa_8__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa_8__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa_9__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa_9__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa_10__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa_10__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa_11__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa_11__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa_12__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa_12__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa13__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa13__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa14__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa14__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa15__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa15__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa16__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa16__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa17__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa17__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa18__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa18__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa19__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa19__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa20__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa20__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa21__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa21__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa22__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa22__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa23__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa23__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa24__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa24__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa25__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa25__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa26__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa26__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa27__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa27__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa28__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa28__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa29__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa29__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa30__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa30__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa31__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa31__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa32__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa32__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa33__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa33__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa34__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa34__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa35__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa35__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa36__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa36__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa37__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa37__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa38__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa38__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    // Body
    vlSelfRef.multiply_block__DOT__m8__DOT__t3_temp 
        = vlSelfRef.multiply_block__DOT__m8__DOT__s4;
    vlSelfRef.multiply_block__DOT__m8__DOT__r1_temp 
        = ((0x03feU & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r1_temp)) 
           | vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
           [0U][0U]);
    vlSelfRef.multiply_block__DOT__m8__DOT__sum_temp 
        = (0x0000ffffU & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__u1) 
                          + ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__u2) 
                             << 5U)));
    vlSelfRef.multiply_block__DOT__m8__DOT__r3_temp 
        = ((0x03feU & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r3_temp)) 
           | vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
           [3U][0U]);
    vlSelfRef.multiply_block__DOT__clk = vlSelfRef.clk;
    vlSelfRef.multiply_block__DOT__rst = vlSelfRef.rst;
    vlSelfRef.multiply_block__DOT__pixel_data = vlSelfRef.pixel_data;
    vlSelfRef.multiply_block__DOT__input_valid = vlSelfRef.input_valid;
    vlSelfRef.multiply_block__DOT__output_valid = vlSelfRef.multiply_block__DOT__m8__DOT__output_valid;
    vlSelfRef.multiply_block__DOT__m8__DOT__r5_temp 
        = ((0xfcU & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r5_temp)) 
           | ((vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
               [6U][1U] << 1U) | vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
              [6U][0U]));
    vlSelfRef.multiply_block__DOT__m8__DOT__r6_temp 
        = ((0xfeU & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r6_temp)) 
           | vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
           [7U][0U]);
    vlSelfRef.multiply_block__DOT__m8__DOT__r5_temp 
        = ((0xfbU & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r5_temp)) 
           | (vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
              [6U][2U] << 2U));
    vlSelfRef.multiply_block__DOT__m8__DOT__r6_temp 
        = ((0xfdU & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r6_temp)) 
           | (vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
              [7U][1U] << 1U));
    vlSelfRef.multiply_block__DOT__m8__DOT__r5_temp 
        = ((0xf7U & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r5_temp)) 
           | (vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
              [6U][3U] << 3U));
    vlSelfRef.multiply_block__DOT__m8__DOT__r6_temp 
        = ((0xfbU & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r6_temp)) 
           | (vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
              [7U][2U] << 2U));
    vlSelfRef.multiply_block__DOT__m8__DOT__r5_temp 
        = ((0xefU & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r5_temp)) 
           | (vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
              [6U][4U] << 4U));
    vlSelfRef.multiply_block__DOT__m8__DOT__r6_temp 
        = ((0xf7U & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r6_temp)) 
           | (vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
              [7U][3U] << 3U));
    vlSelfRef.multiply_block__DOT__m8__DOT__r5_temp 
        = ((0xdfU & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r5_temp)) 
           | (vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
              [6U][5U] << 5U));
    vlSelfRef.multiply_block__DOT__m8__DOT__r6_temp 
        = ((0xefU & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r6_temp)) 
           | (vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
              [7U][4U] << 4U));
    vlSelfRef.multiply_block__DOT__m8__DOT__r5_temp 
        = ((0xbfU & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r5_temp)) 
           | (vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
              [6U][6U] << 6U));
    vlSelfRef.multiply_block__DOT__m8__DOT__r6_temp 
        = ((0xdfU & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r6_temp)) 
           | (vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
              [7U][5U] << 5U));
    vlSelfRef.multiply_block__DOT__m8__DOT__r5_temp 
        = ((0x7fU & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r5_temp)) 
           | (vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
              [6U][7U] << 7U));
    vlSelfRef.multiply_block__DOT__m8__DOT__r6_temp 
        = ((0x3fU & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r6_temp)) 
           | ((vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
               [7U][7U] << 7U) | (vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
                                  [7U][6U] << 6U)));
    vlSelfRef.multiply_block__DOT__is_neg_2 = vlSelfRef.multiply_block__DOT__m8__DOT__is_neg_out;
    vlSelfRef.multiply_block__DOT__mo = vlSelfRef.multiply_block__DOT__m8__DOT__out;
    vlSelfRef.multiply_block__DOT__kernel_data = vlSelfRef.kernel_data;
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_4__DOT__a 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [4U][7U];
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_4__DOT__b 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [5U][6U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_11__DOT__cin 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [5U][4U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_12__DOT__cin 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [5U][5U];
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_2__DOT__a 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [3U][1U];
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_2__DOT__b 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [4U][0U];
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_7__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r5) 
                 >> 7U));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_7__DOT__b 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r6) 
                 >> 6U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_5__DOT__cin 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [5U][0U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_7__DOT__cin 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [5U][1U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_9__DOT__cin 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [5U][2U];
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_3__DOT__a 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [1U][7U];
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_3__DOT__b 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [2U][6U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_10__DOT__cin 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [5U][3U];
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_6__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r4) 
                 >> 1U));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_6__DOT__b 
        = (1U & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r5));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa25__DOT__cin 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r6) 
                 >> 5U));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_1__DOT__a 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [0U][1U];
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_1__DOT__b 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [1U][0U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_1__DOT__cin 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [2U][0U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_2__DOT__cin 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [2U][1U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_3__DOT__cin 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [2U][2U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_4__DOT__cin 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [2U][3U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_6__DOT__cin 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [2U][4U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_8__DOT__cin 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [2U][5U];
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_5__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r1) 
                 >> 2U));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_5__DOT__b 
        = (1U & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r2));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa17__DOT__cin 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r3) 
                 >> 4U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa18__DOT__cin 
        = (1U & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r6));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa19__DOT__cin 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r3) 
                 >> 5U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa20__DOT__cin 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r6) 
                 >> 1U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa21__DOT__cin 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r3) 
                 >> 6U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa22__DOT__cin 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r6) 
                 >> 2U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa23__DOT__cin 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r6) 
                 >> 3U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa24__DOT__cin 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r6) 
                 >> 4U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa13__DOT__cin 
        = (1U & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r3));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa14__DOT__cin 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r3) 
                 >> 1U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa15__DOT__cin 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r3) 
                 >> 2U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa16__DOT__cin 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r3) 
                 >> 3U));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_9__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__s1) 
                 >> 4U));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_9__DOT__b 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__s2) 
                 >> 1U));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_10__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__s2) 
                 >> 8U));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_10__DOT__b 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__s3) 
                 >> 6U));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_11__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__s2) 
                 >> 9U));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_11__DOT__b 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__s3) 
                 >> 7U));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_13__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__t1) 
                 >> 5U));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_13__DOT__b 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__t2) 
                 >> 1U));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_14__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__t1) 
                 >> 6U));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_14__DOT__b 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__t2) 
                 >> 2U));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_15__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__t2) 
                 >> 0x0000000aU));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_15__DOT__b 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__t3) 
                 >> 7U));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_8__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__s1) 
                 >> 3U));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_8__DOT__b 
        = (1U & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__s2));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa26__DOT__cin 
        = (1U & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__s3));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa27__DOT__cin 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__s3) 
                 >> 1U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa28__DOT__cin 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__s3) 
                 >> 2U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa29__DOT__cin 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__s3) 
                 >> 3U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa30__DOT__cin 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__s3) 
                 >> 4U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa31__DOT__cin 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__s3) 
                 >> 5U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa32__DOT__cin 
        = (1U & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__t3));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa33__DOT__cin 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__t3) 
                 >> 1U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa34__DOT__cin 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__t3) 
                 >> 2U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa35__DOT__cin 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__t3) 
                 >> 3U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa36__DOT__cin 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__t3) 
                 >> 4U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa37__DOT__cin 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__t3) 
                 >> 5U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa38__DOT__cin 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__t3) 
                 >> 6U));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_12__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__t1) 
                 >> 4U));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_12__DOT__b 
        = (1U & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__t2));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_11__DOT__a 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [3U][6U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_11__DOT__b 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [4U][5U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_12__DOT__a 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [3U][7U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_12__DOT__b 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [4U][6U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_5__DOT__a 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [3U][2U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_5__DOT__b 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [4U][1U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_7__DOT__a 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [3U][3U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_7__DOT__b 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [4U][2U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_9__DOT__a 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [3U][4U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_9__DOT__b 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [4U][3U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_10__DOT__a 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [3U][5U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_10__DOT__b 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [4U][4U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa25__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r4) 
                 >> 7U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa25__DOT__b 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r5) 
                 >> 6U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_1__DOT__a 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [0U][2U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_1__DOT__b 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [1U][1U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_2__DOT__a 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [0U][3U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_2__DOT__b 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [1U][2U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_3__DOT__a 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [0U][4U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_3__DOT__b 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [1U][3U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_4__DOT__a 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [0U][5U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_4__DOT__b 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [1U][4U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_6__DOT__a 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [0U][6U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_6__DOT__b 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [1U][5U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_8__DOT__a 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [0U][7U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_8__DOT__b 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [1U][6U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa17__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r1) 
                 >> 7U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa17__DOT__b 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r2) 
                 >> 5U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa18__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r4) 
                 >> 2U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa18__DOT__b 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r5) 
                 >> 1U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa19__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r1) 
                 >> 8U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa19__DOT__b 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r2) 
                 >> 6U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa20__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r4) 
                 >> 3U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa20__DOT__b 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r5) 
                 >> 2U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa21__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r1) 
                 >> 9U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa21__DOT__b 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r2) 
                 >> 7U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa22__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r4) 
                 >> 4U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa22__DOT__b 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r5) 
                 >> 3U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa23__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r4) 
                 >> 5U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa23__DOT__b 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r5) 
                 >> 4U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa24__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r4) 
                 >> 6U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa24__DOT__b 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r5) 
                 >> 5U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa13__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r1) 
                 >> 3U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa13__DOT__b 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r2) 
                 >> 1U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa14__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r1) 
                 >> 4U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa14__DOT__b 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r2) 
                 >> 2U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa15__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r1) 
                 >> 5U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa15__DOT__b 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r2) 
                 >> 3U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa16__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r1) 
                 >> 6U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa16__DOT__b 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r2) 
                 >> 4U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa26__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__s1) 
                 >> 5U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa26__DOT__b 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__s2) 
                 >> 2U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa27__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__s1) 
                 >> 6U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa27__DOT__b 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__s2) 
                 >> 3U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa28__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__s1) 
                 >> 7U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa28__DOT__b 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__s2) 
                 >> 4U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa29__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__s1) 
                 >> 8U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa29__DOT__b 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__s2) 
                 >> 5U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa30__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__s1) 
                 >> 9U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa30__DOT__b 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__s2) 
                 >> 6U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa31__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__s1) 
                 >> 0x0000000aU));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa31__DOT__b 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__s2) 
                 >> 7U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa32__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__t1) 
                 >> 7U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa32__DOT__b 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__t2) 
                 >> 3U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa33__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__t1) 
                 >> 8U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa33__DOT__b 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__t2) 
                 >> 4U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa34__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__t1) 
                 >> 9U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa34__DOT__b 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__t2) 
                 >> 5U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa35__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__t1) 
                 >> 0x0000000aU));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa35__DOT__b 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__t2) 
                 >> 6U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa36__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__t1) 
                 >> 0x0000000bU));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa36__DOT__b 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__t2) 
                 >> 7U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa37__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__t1) 
                 >> 0x0000000cU));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa37__DOT__b 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__t2) 
                 >> 8U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa38__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__t1) 
                 >> 0x0000000dU));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa38__DOT__b 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__t2) 
                 >> 9U));
    vlSelfRef.multiply_block__DOT__m8__DOT__clk = vlSelfRef.multiply_block__DOT__clk;
    vlSelfRef.multiply_block__DOT__m8__DOT__rst = vlSelfRef.multiply_block__DOT__rst;
    vlSelfRef.multiply_block__DOT__m8__DOT__a = vlSelfRef.multiply_block__DOT__pixel_data;
    vlSelfRef.multiply_block__DOT__m8__DOT__in_valid 
        = vlSelfRef.multiply_block__DOT__input_valid;
    vlSelfRef.output_valid = vlSelfRef.multiply_block__DOT__output_valid;
    vlSelfRef.multiply_block__DOT__u2s_inst__DOT__is_neg 
        = vlSelfRef.multiply_block__DOT__is_neg_2;
    vlSelfRef.multiply_block__DOT__u2s_inst__DOT__in 
        = vlSelfRef.multiply_block__DOT__mo;
    vlSelfRef.multiply_block__DOT__s2u_inst__DOT__in 
        = vlSelfRef.multiply_block__DOT__kernel_data;
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_4__DOT__cout 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_4__DOT__a) 
           & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_4__DOT__b));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_4__DOT__s 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_4__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_4__DOT__b));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_2__DOT__s 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_2__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_2__DOT__b));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_2__DOT__cout 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_2__DOT__a) 
           & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_2__DOT__b));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_7__DOT__cout 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_7__DOT__a) 
           & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_7__DOT__b));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_7__DOT__s 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_7__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_7__DOT__b));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_3__DOT__s 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_3__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_3__DOT__b));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_3__DOT__cout 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_3__DOT__a) 
           & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_3__DOT__b));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_6__DOT__s 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_6__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_6__DOT__b));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_6__DOT__cout 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_6__DOT__a) 
           & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_6__DOT__b));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_1__DOT__cout 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_1__DOT__a) 
           & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_1__DOT__b));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_1__DOT__s 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_1__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_1__DOT__b));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_5__DOT__cout 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_5__DOT__a) 
           & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_5__DOT__b));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_5__DOT__s 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_5__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_5__DOT__b));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_9__DOT__s 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_9__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_9__DOT__b));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_9__DOT__cout 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_9__DOT__a) 
           & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_9__DOT__b));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_10__DOT__s 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_10__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_10__DOT__b));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_10__DOT__cout 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_10__DOT__a) 
           & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_10__DOT__b));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_11__DOT__s 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_11__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_11__DOT__b));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_11__DOT__cout 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_11__DOT__a) 
           & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_11__DOT__b));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_13__DOT__s 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_13__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_13__DOT__b));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_13__DOT__cout 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_13__DOT__a) 
           & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_13__DOT__b));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_14__DOT__s 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_14__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_14__DOT__b));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_14__DOT__cout 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_14__DOT__a) 
           & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_14__DOT__b));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_15__DOT__s 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_15__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_15__DOT__b));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_15__DOT__cout 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_15__DOT__a) 
           & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_15__DOT__b));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_8__DOT__cout 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_8__DOT__a) 
           & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_8__DOT__b));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_8__DOT__s 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_8__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_8__DOT__b));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_12__DOT__cout 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_12__DOT__a) 
           & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_12__DOT__b));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_12__DOT__s 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_12__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_12__DOT__b));
    multiply_block__DOT__m8__DOT__fa_11__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_11__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_11__DOT__b));
    multiply_block__DOT__m8__DOT__fa_12__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_12__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_12__DOT__b));
    multiply_block__DOT__m8__DOT__fa_5__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_5__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_5__DOT__b));
    multiply_block__DOT__m8__DOT__fa_7__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_7__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_7__DOT__b));
    multiply_block__DOT__m8__DOT__fa_9__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_9__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_9__DOT__b));
    multiply_block__DOT__m8__DOT__fa_10__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_10__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_10__DOT__b));
    multiply_block__DOT__m8__DOT__fa25__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa25__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa25__DOT__b));
    multiply_block__DOT__m8__DOT__fa_1__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_1__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_1__DOT__b));
    multiply_block__DOT__m8__DOT__fa_2__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_2__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_2__DOT__b));
    multiply_block__DOT__m8__DOT__fa_3__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_3__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_3__DOT__b));
    multiply_block__DOT__m8__DOT__fa_4__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_4__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_4__DOT__b));
    multiply_block__DOT__m8__DOT__fa_6__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_6__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_6__DOT__b));
    multiply_block__DOT__m8__DOT__fa_8__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_8__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_8__DOT__b));
    multiply_block__DOT__m8__DOT__fa17__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa17__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa17__DOT__b));
    multiply_block__DOT__m8__DOT__fa18__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa18__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa18__DOT__b));
    multiply_block__DOT__m8__DOT__fa19__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa19__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa19__DOT__b));
    multiply_block__DOT__m8__DOT__fa20__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa20__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa20__DOT__b));
    multiply_block__DOT__m8__DOT__fa21__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa21__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa21__DOT__b));
    multiply_block__DOT__m8__DOT__fa22__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa22__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa22__DOT__b));
    multiply_block__DOT__m8__DOT__fa23__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa23__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa23__DOT__b));
    multiply_block__DOT__m8__DOT__fa24__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa24__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa24__DOT__b));
    multiply_block__DOT__m8__DOT__fa13__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa13__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa13__DOT__b));
    multiply_block__DOT__m8__DOT__fa14__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa14__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa14__DOT__b));
    multiply_block__DOT__m8__DOT__fa15__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa15__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa15__DOT__b));
    multiply_block__DOT__m8__DOT__fa16__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa16__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa16__DOT__b));
    multiply_block__DOT__m8__DOT__fa26__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa26__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa26__DOT__b));
    multiply_block__DOT__m8__DOT__fa27__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa27__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa27__DOT__b));
    multiply_block__DOT__m8__DOT__fa28__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa28__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa28__DOT__b));
    multiply_block__DOT__m8__DOT__fa29__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa29__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa29__DOT__b));
    multiply_block__DOT__m8__DOT__fa30__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa30__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa30__DOT__b));
    multiply_block__DOT__m8__DOT__fa31__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa31__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa31__DOT__b));
    multiply_block__DOT__m8__DOT__fa32__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa32__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa32__DOT__b));
    multiply_block__DOT__m8__DOT__fa33__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa33__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa33__DOT__b));
    multiply_block__DOT__m8__DOT__fa34__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa34__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa34__DOT__b));
    multiply_block__DOT__m8__DOT__fa35__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa35__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa35__DOT__b));
    multiply_block__DOT__m8__DOT__fa36__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa36__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa36__DOT__b));
    multiply_block__DOT__m8__DOT__fa37__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa37__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa37__DOT__b));
    multiply_block__DOT__m8__DOT__fa38__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa38__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa38__DOT__b));
    vlSelfRef.multiply_block__DOT__u2s_inst__DOT__out 
        = (0x0000ffffU & ((IData)(vlSelfRef.multiply_block__DOT__u2s_inst__DOT__is_neg)
                           ? ((IData)(1U) + (~ (IData)(vlSelfRef.multiply_block__DOT__u2s_inst__DOT__in)))
                           : (IData)(vlSelfRef.multiply_block__DOT__u2s_inst__DOT__in)));
    vlSelfRef.multiply_block__DOT__s2u_inst__DOT__out 
        = (0x000000ffU & ((0x00000080U & (IData)(vlSelfRef.multiply_block__DOT__s2u_inst__DOT__in))
                           ? ((IData)(1U) + (~ (IData)(vlSelfRef.multiply_block__DOT__s2u_inst__DOT__in)))
                           : (IData)(vlSelfRef.multiply_block__DOT__s2u_inst__DOT__in)));
    vlSelfRef.multiply_block__DOT__s2u_inst__DOT__is_neg 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__s2u_inst__DOT__in) 
                 >> 7U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_11__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_11__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_11__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_11__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa_11__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_11__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa_11__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_11__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_12__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_12__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_12__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_12__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa_12__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_12__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa_12__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_12__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_5__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa_5__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_5__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_5__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_5__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_5__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_5__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa_5__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_7__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa_7__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_7__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_7__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_7__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_7__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_7__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa_7__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_9__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa_9__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_9__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_9__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_9__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_9__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_9__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa_9__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_10__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa_10__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_10__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_10__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_10__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_10__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_10__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa_10__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa25__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa25__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa25__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa25__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa25__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa25__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa25__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa25__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_1__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa_1__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_1__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_1__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_1__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_1__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_1__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa_1__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_2__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa_2__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_2__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_2__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_2__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_2__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_2__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa_2__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_3__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa_3__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_3__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_3__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_3__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_3__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_3__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa_3__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_4__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa_4__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_4__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_4__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_4__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_4__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_4__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa_4__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_6__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa_6__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_6__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_6__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_6__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_6__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_6__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa_6__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_8__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa_8__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_8__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_8__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_8__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_8__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_8__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa_8__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa17__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa17__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa17__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa17__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa17__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa17__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa17__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa17__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa18__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa18__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa18__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa18__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa18__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa18__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa18__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa18__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa19__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa19__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa19__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa19__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa19__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa19__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa19__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa19__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa20__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa20__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa20__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa20__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa20__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa20__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa20__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa20__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa21__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa21__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa21__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa21__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa21__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa21__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa21__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa21__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa22__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa22__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa22__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa22__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa22__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa22__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa22__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa22__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa23__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa23__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa23__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa23__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa23__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa23__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa23__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa23__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa24__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa24__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa24__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa24__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa24__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa24__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa24__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa24__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa13__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa13__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa13__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa13__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa13__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa13__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa13__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa13__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa14__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa14__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa14__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa14__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa14__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa14__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa14__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa14__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa15__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa15__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa15__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa15__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa15__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa15__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa15__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa15__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa16__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa16__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa16__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa16__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa16__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa16__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa16__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa16__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa26__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa26__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa26__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa26__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa26__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa26__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa26__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa26__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa27__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa27__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa27__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa27__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa27__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa27__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa27__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa27__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa28__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa28__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa28__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa28__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa28__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa28__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa28__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa28__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa29__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa29__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa29__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa29__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa29__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa29__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa29__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa29__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa30__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa30__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa30__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa30__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa30__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa30__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa30__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa30__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa31__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa31__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa31__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa31__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa31__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa31__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa31__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa31__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa32__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa32__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa32__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa32__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa32__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa32__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa32__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa32__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa33__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa33__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa33__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa33__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa33__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa33__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa33__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa33__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa34__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa34__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa34__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa34__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa34__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa34__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa34__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa34__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa35__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa35__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa35__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa35__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa35__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa35__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa35__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa35__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa36__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa36__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa36__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa36__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa36__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa36__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa36__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa36__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa37__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa37__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa37__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa37__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa37__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa37__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa37__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa37__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa38__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa38__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa38__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa38__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa38__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa38__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa38__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa38__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__multiply_out = vlSelfRef.multiply_block__DOT__u2s_inst__DOT__out;
    vlSelfRef.multiply_block__DOT__s2u_to_mult8 = vlSelfRef.multiply_block__DOT__s2u_inst__DOT__out;
    vlSelfRef.multiply_block__DOT__is_neg_1 = vlSelfRef.multiply_block__DOT__s2u_inst__DOT__is_neg;
    vlSelfRef.multiply_block__DOT__m8__DOT__r3_temp 
        = ((0x007fU & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r3_temp)) 
           | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_4__DOT__cout) 
               << 9U) | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_12__DOT__cout) 
                          << 8U) | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_11__DOT__cout) 
                                    << 7U))));
    vlSelfRef.multiply_block__DOT__m8__DOT__r4_temp 
        = (((((vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
               [5U][7U] << 3U) | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_4__DOT__s) 
                                  << 2U)) | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_12__DOT__s) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_11__DOT__s))) 
            << 4U) | ((((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_10__DOT__s) 
                        << 3U) | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_9__DOT__s) 
                                  << 2U)) | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_7__DOT__s) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_5__DOT__s))));
    vlSelfRef.multiply_block__DOT__m8__DOT__r2_temp 
        = ((((((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_10__DOT__cout) 
               << 3U) | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_9__DOT__cout) 
                         << 2U)) | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_7__DOT__cout) 
                                     << 1U) | (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_5__DOT__cout))) 
            << 4U) | ((((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_2__DOT__cout) 
                        << 3U) | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_3__DOT__s) 
                                  << 2U)) | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_2__DOT__s) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_1__DOT__s))));
    vlSelfRef.multiply_block__DOT__m8__DOT__r3_temp 
        = ((0x0381U & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r3_temp)) 
           | ((((vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
                 [2U][7U] << 5U) | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_3__DOT__s) 
                                     << 4U) | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_8__DOT__s) 
                                               << 3U))) 
               | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_6__DOT__s) 
                   << 2U) | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_4__DOT__s) 
                              << 1U) | (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_2__DOT__s)))) 
              << 1U));
    vlSelfRef.multiply_block__DOT__m8__DOT__r1_temp 
        = ((1U & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r1_temp)) 
           | ((((((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_3__DOT__cout) 
                  << 4U) | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_8__DOT__cout) 
                             << 3U) | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_6__DOT__cout) 
                                       << 2U))) | (
                                                   ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_4__DOT__cout) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_3__DOT__cout))) 
               << 5U) | (((((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_2__DOT__cout) 
                            << 3U) | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_1__DOT__cout) 
                                      << 2U)) | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_1__DOT__cout) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_1__DOT__s))) 
                         << 1U)));
    vlSelfRef.multiply_block__DOT__m8__DOT__s3_temp 
        = ((((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_7__DOT__cout) 
             << 9U) | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa25__DOT__cout) 
                        << 8U) | (0x000000e0U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r3) 
                                                 >> 2U)))) 
           | ((((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa21__DOT__s) 
                << 4U) | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa19__DOT__s) 
                           << 3U) | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa17__DOT__s) 
                                     << 2U))) | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_6__DOT__s) 
                                                  << 1U) 
                                                 | (1U 
                                                    & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r4)))));
    vlSelfRef.multiply_block__DOT__m8__DOT__s4_temp 
        = (((((2U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r6) 
                     >> 6U)) | (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_7__DOT__s)) 
             << 6U) | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa25__DOT__s) 
                        << 5U) | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa24__DOT__s) 
                                  << 4U))) | ((((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa23__DOT__s) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa22__DOT__s) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa20__DOT__s) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa18__DOT__s))));
    vlSelfRef.multiply_block__DOT__m8__DOT__s2_temp 
        = ((((((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa24__DOT__cout) 
               << 4U) | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa23__DOT__cout) 
                          << 3U) | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa22__DOT__cout) 
                                    << 2U))) | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa20__DOT__cout) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa18__DOT__cout))) 
            << 5U) | ((((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_6__DOT__cout) 
                        << 4U) | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa16__DOT__s) 
                                   << 3U) | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa15__DOT__s) 
                                             << 2U))) 
                      | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa14__DOT__s) 
                          << 1U) | (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa13__DOT__s))));
    vlSelfRef.multiply_block__DOT__m8__DOT__s1_temp 
        = ((((((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa21__DOT__cout) 
               << 5U) | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa19__DOT__cout) 
                          << 4U) | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa17__DOT__cout) 
                                    << 3U))) | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa16__DOT__cout) 
                                                 << 2U) 
                                                | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa15__DOT__cout) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa14__DOT__cout)))) 
            << 5U) | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa13__DOT__cout) 
                       << 4U) | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_5__DOT__cout) 
                                  << 3U) | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_5__DOT__s) 
                                             << 2U) 
                                            | (3U & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r1))))));
    vlSelfRef.multiply_block__DOT__m8__DOT__t2_temp 
        = (((((6U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__s3) 
                     >> 7U)) | (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_11__DOT__s)) 
             << 8U) | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_10__DOT__s) 
                        << 7U) | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa31__DOT__s) 
                                   << 6U) | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa30__DOT__s) 
                                             << 5U)))) 
           | ((((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa29__DOT__s) 
                << 4U) | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa28__DOT__s) 
                           << 3U) | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa27__DOT__s) 
                                     << 2U))) | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa26__DOT__s) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_9__DOT__s))));
    vlSelfRef.multiply_block__DOT__m8__DOT__t1_temp 
        = (((((((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_11__DOT__cout) 
                << 3U) | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_10__DOT__cout) 
                          << 2U)) | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa31__DOT__cout) 
                                      << 1U) | (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa30__DOT__cout))) 
             << 0x0000000aU) | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa29__DOT__cout) 
                                 << 9U) | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa28__DOT__cout) 
                                            << 8U) 
                                           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa27__DOT__cout) 
                                              << 7U)))) 
           | ((((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa26__DOT__cout) 
                << 6U) | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_9__DOT__cout) 
                          << 5U)) | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_8__DOT__cout) 
                                      << 4U) | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_8__DOT__s) 
                                                 << 3U) 
                                                | (7U 
                                                   & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__s1))))));
    vlSelfRef.multiply_block__DOT__m8__DOT__u2_temp 
        = ((((((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_15__DOT__s) 
               << 4U) | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa38__DOT__s) 
                          << 3U) | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa37__DOT__s) 
                                    << 2U))) | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa36__DOT__s) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa35__DOT__s))) 
            << 5U) | ((((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa34__DOT__s) 
                        << 4U) | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa33__DOT__s) 
                                   << 3U) | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa32__DOT__s) 
                                             << 2U))) 
                      | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_14__DOT__s) 
                          << 1U) | (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_13__DOT__s))));
    vlSelfRef.multiply_block__DOT__m8__DOT__u1_temp 
        = (((((((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_15__DOT__cout) 
                << 3U) | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa38__DOT__cout) 
                          << 2U)) | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa37__DOT__cout) 
                                      << 1U) | (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa36__DOT__cout))) 
             << 0x0000000cU) | (((((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa35__DOT__cout) 
                                   << 3U) | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa34__DOT__cout) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa33__DOT__cout) 
                                     << 1U) | (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa32__DOT__cout))) 
                                << 8U)) | ((((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_14__DOT__cout) 
                                             << 7U) 
                                            | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_13__DOT__cout) 
                                               << 6U)) 
                                           | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_12__DOT__cout) 
                                               << 5U) 
                                              | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_12__DOT__s) 
                                                  << 4U) 
                                                 | (0x0000000fU 
                                                    & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__t1))))));
    vlSelfRef.multiply_out = vlSelfRef.multiply_block__DOT__multiply_out;
    vlSelfRef.multiply_block__DOT__m8__DOT__b = vlSelfRef.multiply_block__DOT__s2u_to_mult8;
    vlSelfRef.multiply_block__DOT__m8__DOT__is_neg_in 
        = vlSelfRef.multiply_block__DOT__is_neg_1;
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
                                                    ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__clk) 
                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__multiply_block__DOT__m8__DOT__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__multiply_block__DOT__m8__DOT__clk__0 
        = vlSelfRef.multiply_block__DOT__m8__DOT__clk;
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
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa_1__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa_1__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa_2__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa_2__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa_3__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa_3__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa_4__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa_4__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa_5__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa_5__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa_6__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa_6__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa_7__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa_7__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa_8__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa_8__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa_9__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa_9__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa_10__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa_10__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa_11__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa_11__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa_12__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa_12__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa13__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa13__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa14__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa14__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa15__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa15__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa16__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa16__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa17__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa17__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa18__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa18__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa19__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa19__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa20__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa20__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa21__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa21__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa22__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa22__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa23__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa23__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa24__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa24__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa25__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa25__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa26__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa26__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa27__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa27__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa28__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa28__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa29__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa29__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa30__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa30__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa31__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa31__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa32__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa32__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa33__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa33__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa34__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa34__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa35__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa35__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa36__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa36__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa37__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa37__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ multiply_block__DOT__m8__DOT__fa38__DOT____VdfgRegularize_h693e9ae5_0_0;
    multiply_block__DOT__m8__DOT__fa38__DOT____VdfgRegularize_h693e9ae5_0_0 = 0;
    CData/*0:0*/ __VdlyVal__multiply_block__DOT__m8__DOT__partial_products__v0;
    __VdlyVal__multiply_block__DOT__m8__DOT__partial_products__v0 = 0;
    CData/*2:0*/ __VdlyDim0__multiply_block__DOT__m8__DOT__partial_products__v0;
    __VdlyDim0__multiply_block__DOT__m8__DOT__partial_products__v0 = 0;
    CData/*2:0*/ __VdlyDim1__multiply_block__DOT__m8__DOT__partial_products__v0;
    __VdlyDim1__multiply_block__DOT__m8__DOT__partial_products__v0 = 0;
    // Body
    if (vlSelfRef.multiply_block__DOT__m8__DOT__in_valid) {
        vlSelfRef.multiply_block__DOT__m8__DOT__unnamedblk1__DOT__i = 0U;
        while (VL_GTS_III(32, 8U, vlSelfRef.multiply_block__DOT__m8__DOT__unnamedblk1__DOT__i)) {
            vlSelfRef.multiply_block__DOT__m8__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0U;
            while (VL_GTS_III(32, 8U, vlSelfRef.multiply_block__DOT__m8__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j)) {
                __VdlyVal__multiply_block__DOT__m8__DOT__partial_products__v0 
                    = (1U & (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__a) 
                              >> (7U & vlSelfRef.multiply_block__DOT__m8__DOT__unnamedblk1__DOT__i)) 
                             & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__b) 
                                >> (7U & vlSelfRef.multiply_block__DOT__m8__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j))));
                __VdlyDim0__multiply_block__DOT__m8__DOT__partial_products__v0 
                    = (7U & vlSelfRef.multiply_block__DOT__m8__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j);
                __VdlyDim1__multiply_block__DOT__m8__DOT__partial_products__v0 
                    = (7U & vlSelfRef.multiply_block__DOT__m8__DOT__unnamedblk1__DOT__i);
                vlSelfRef.__VdlyCommitQueuemultiply_block__DOT__m8__DOT__partial_products.enqueue(__VdlyVal__multiply_block__DOT__m8__DOT__partial_products__v0, (IData)(__VdlyDim1__multiply_block__DOT__m8__DOT__partial_products__v0), __VdlyDim0__multiply_block__DOT__m8__DOT__partial_products__v0);
                vlSelfRef.multiply_block__DOT__m8__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j 
                    = ((IData)(1U) + vlSelfRef.multiply_block__DOT__m8__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j);
            }
            vlSelfRef.multiply_block__DOT__m8__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlSelfRef.multiply_block__DOT__m8__DOT__unnamedblk1__DOT__i);
        }
    }
    if (vlSelfRef.multiply_block__DOT__m8__DOT__stage_two_valid) {
        vlSelfRef.multiply_block__DOT__m8__DOT__s4 
            = vlSelfRef.multiply_block__DOT__m8__DOT__s4_temp;
        vlSelfRef.multiply_block__DOT__m8__DOT__s3 
            = vlSelfRef.multiply_block__DOT__m8__DOT__s3_temp;
        vlSelfRef.multiply_block__DOT__m8__DOT__s1 
            = vlSelfRef.multiply_block__DOT__m8__DOT__s1_temp;
        vlSelfRef.multiply_block__DOT__m8__DOT__s2 
            = vlSelfRef.multiply_block__DOT__m8__DOT__s2_temp;
    }
    if (vlSelfRef.multiply_block__DOT__m8__DOT__stage_four_valid) {
        vlSelfRef.multiply_block__DOT__m8__DOT__u2 
            = vlSelfRef.multiply_block__DOT__m8__DOT__u2_temp;
        vlSelfRef.multiply_block__DOT__m8__DOT__u1 
            = vlSelfRef.multiply_block__DOT__m8__DOT__u1_temp;
    }
    vlSelfRef.multiply_block__DOT__m8__DOT__is_neg_out 
        = ((1U & (~ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__rst))) 
           && (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__x5));
    if (vlSelfRef.multiply_block__DOT__m8__DOT__stage_five_valid) {
        vlSelfRef.multiply_block__DOT__m8__DOT__out 
            = vlSelfRef.multiply_block__DOT__m8__DOT__sum_temp;
    }
    vlSelfRef.multiply_block__DOT__m8__DOT__output_valid 
        = ((1U & (~ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__rst))) 
           && (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__stage_five_valid));
    if (vlSelfRef.multiply_block__DOT__m8__DOT__stage_one_valid) {
        vlSelfRef.multiply_block__DOT__m8__DOT__r3 
            = vlSelfRef.multiply_block__DOT__m8__DOT__r3_temp;
        vlSelfRef.multiply_block__DOT__m8__DOT__r6 
            = vlSelfRef.multiply_block__DOT__m8__DOT__r6_temp;
        vlSelfRef.multiply_block__DOT__m8__DOT__r4 
            = vlSelfRef.multiply_block__DOT__m8__DOT__r4_temp;
        vlSelfRef.multiply_block__DOT__m8__DOT__r5 
            = vlSelfRef.multiply_block__DOT__m8__DOT__r5_temp;
        vlSelfRef.multiply_block__DOT__m8__DOT__r2 
            = vlSelfRef.multiply_block__DOT__m8__DOT__r2_temp;
        vlSelfRef.multiply_block__DOT__m8__DOT__r1 
            = vlSelfRef.multiply_block__DOT__m8__DOT__r1_temp;
    }
    if (vlSelfRef.multiply_block__DOT__m8__DOT__stage_three_valid) {
        vlSelfRef.multiply_block__DOT__m8__DOT__t3 
            = vlSelfRef.multiply_block__DOT__m8__DOT__t3_temp;
        vlSelfRef.multiply_block__DOT__m8__DOT__t1 
            = vlSelfRef.multiply_block__DOT__m8__DOT__t1_temp;
        vlSelfRef.multiply_block__DOT__m8__DOT__t2 
            = vlSelfRef.multiply_block__DOT__m8__DOT__t2_temp;
    }
    vlSelfRef.__VdlyCommitQueuemultiply_block__DOT__m8__DOT__partial_products.commit(vlSelfRef.multiply_block__DOT__m8__DOT__partial_products);
    vlSelfRef.multiply_block__DOT__m8__DOT__r1_temp 
        = ((0x03feU & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r1_temp)) 
           | vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
           [0U][0U]);
    vlSelfRef.multiply_block__DOT__m8__DOT__r3_temp 
        = ((0x03feU & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r3_temp)) 
           | vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
           [3U][0U]);
    vlSelfRef.multiply_block__DOT__m8__DOT__r5_temp 
        = ((0xfcU & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r5_temp)) 
           | ((vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
               [6U][1U] << 1U) | vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
              [6U][0U]));
    vlSelfRef.multiply_block__DOT__m8__DOT__r6_temp 
        = ((0xfeU & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r6_temp)) 
           | vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
           [7U][0U]);
    vlSelfRef.multiply_block__DOT__m8__DOT__r5_temp 
        = ((0xfbU & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r5_temp)) 
           | (vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
              [6U][2U] << 2U));
    vlSelfRef.multiply_block__DOT__m8__DOT__r6_temp 
        = ((0xfdU & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r6_temp)) 
           | (vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
              [7U][1U] << 1U));
    vlSelfRef.multiply_block__DOT__m8__DOT__r5_temp 
        = ((0xf7U & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r5_temp)) 
           | (vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
              [6U][3U] << 3U));
    vlSelfRef.multiply_block__DOT__m8__DOT__r6_temp 
        = ((0xfbU & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r6_temp)) 
           | (vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
              [7U][2U] << 2U));
    vlSelfRef.multiply_block__DOT__m8__DOT__r5_temp 
        = ((0xefU & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r5_temp)) 
           | (vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
              [6U][4U] << 4U));
    vlSelfRef.multiply_block__DOT__m8__DOT__r6_temp 
        = ((0xf7U & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r6_temp)) 
           | (vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
              [7U][3U] << 3U));
    vlSelfRef.multiply_block__DOT__m8__DOT__r5_temp 
        = ((0xdfU & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r5_temp)) 
           | (vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
              [6U][5U] << 5U));
    vlSelfRef.multiply_block__DOT__m8__DOT__r6_temp 
        = ((0xefU & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r6_temp)) 
           | (vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
              [7U][4U] << 4U));
    vlSelfRef.multiply_block__DOT__m8__DOT__r5_temp 
        = ((0xbfU & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r5_temp)) 
           | (vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
              [6U][6U] << 6U));
    vlSelfRef.multiply_block__DOT__m8__DOT__r6_temp 
        = ((0xdfU & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r6_temp)) 
           | (vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
              [7U][5U] << 5U));
    vlSelfRef.multiply_block__DOT__m8__DOT__r5_temp 
        = ((0x7fU & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r5_temp)) 
           | (vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
              [6U][7U] << 7U));
    vlSelfRef.multiply_block__DOT__m8__DOT__r6_temp 
        = ((0x3fU & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r6_temp)) 
           | ((vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
               [7U][7U] << 7U) | (vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
                                  [7U][6U] << 6U)));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_4__DOT__a 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [4U][7U];
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_4__DOT__b 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [5U][6U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_11__DOT__cin 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [5U][4U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_12__DOT__cin 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [5U][5U];
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_2__DOT__a 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [3U][1U];
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_2__DOT__b 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [4U][0U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_5__DOT__cin 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [5U][0U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_7__DOT__cin 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [5U][1U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_9__DOT__cin 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [5U][2U];
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_3__DOT__a 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [1U][7U];
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_3__DOT__b 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [2U][6U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_10__DOT__cin 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [5U][3U];
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_1__DOT__a 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [0U][1U];
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_1__DOT__b 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [1U][0U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_1__DOT__cin 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [2U][0U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_2__DOT__cin 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [2U][1U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_3__DOT__cin 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [2U][2U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_4__DOT__cin 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [2U][3U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_6__DOT__cin 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [2U][4U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_8__DOT__cin 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [2U][5U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_11__DOT__a 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [3U][6U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_11__DOT__b 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [4U][5U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_12__DOT__a 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [3U][7U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_12__DOT__b 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [4U][6U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_5__DOT__a 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [3U][2U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_5__DOT__b 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [4U][1U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_7__DOT__a 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [3U][3U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_7__DOT__b 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [4U][2U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_9__DOT__a 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [3U][4U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_9__DOT__b 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [4U][3U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_10__DOT__a 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [3U][5U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_10__DOT__b 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [4U][4U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_1__DOT__a 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [0U][2U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_1__DOT__b 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [1U][1U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_2__DOT__a 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [0U][3U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_2__DOT__b 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [1U][2U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_3__DOT__a 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [0U][4U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_3__DOT__b 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [1U][3U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_4__DOT__a 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [0U][5U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_4__DOT__b 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [1U][4U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_6__DOT__a 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [0U][6U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_6__DOT__b 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [1U][5U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_8__DOT__a 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [0U][7U];
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_8__DOT__b 
        = vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
        [1U][6U];
    vlSelfRef.multiply_block__DOT__m8__DOT__t3_temp 
        = vlSelfRef.multiply_block__DOT__m8__DOT__s4;
    vlSelfRef.multiply_block__DOT__m8__DOT__sum_temp 
        = (0x0000ffffU & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__u1) 
                          + ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__u2) 
                             << 5U)));
    vlSelfRef.multiply_block__DOT__is_neg_2 = vlSelfRef.multiply_block__DOT__m8__DOT__is_neg_out;
    vlSelfRef.multiply_block__DOT__m8__DOT__x5 = ((1U 
                                                   & (~ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__rst))) 
                                                  && (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__x4));
    vlSelfRef.multiply_block__DOT__mo = vlSelfRef.multiply_block__DOT__m8__DOT__out;
    vlSelfRef.multiply_block__DOT__output_valid = vlSelfRef.multiply_block__DOT__m8__DOT__output_valid;
    vlSelfRef.multiply_block__DOT__m8__DOT__stage_five_valid 
        = ((1U & (~ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__rst))) 
           && (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__stage_four_valid));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa17__DOT__cin 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r3) 
                 >> 4U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa19__DOT__cin 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r3) 
                 >> 5U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa21__DOT__cin 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r3) 
                 >> 6U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa13__DOT__cin 
        = (1U & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r3));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa14__DOT__cin 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r3) 
                 >> 1U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa15__DOT__cin 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r3) 
                 >> 2U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa16__DOT__cin 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r3) 
                 >> 3U));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_7__DOT__b 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r6) 
                 >> 6U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa25__DOT__cin 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r6) 
                 >> 5U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa18__DOT__cin 
        = (1U & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r6));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa20__DOT__cin 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r6) 
                 >> 1U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa22__DOT__cin 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r6) 
                 >> 2U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa23__DOT__cin 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r6) 
                 >> 3U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa24__DOT__cin 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r6) 
                 >> 4U));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_10__DOT__b 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__s3) 
                 >> 6U));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_11__DOT__b 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__s3) 
                 >> 7U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa26__DOT__cin 
        = (1U & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__s3));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa27__DOT__cin 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__s3) 
                 >> 1U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa28__DOT__cin 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__s3) 
                 >> 2U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa29__DOT__cin 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__s3) 
                 >> 3U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa30__DOT__cin 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__s3) 
                 >> 4U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa31__DOT__cin 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__s3) 
                 >> 5U));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_15__DOT__b 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__t3) 
                 >> 7U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa32__DOT__cin 
        = (1U & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__t3));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa33__DOT__cin 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__t3) 
                 >> 1U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa34__DOT__cin 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__t3) 
                 >> 2U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa35__DOT__cin 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__t3) 
                 >> 3U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa36__DOT__cin 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__t3) 
                 >> 4U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa37__DOT__cin 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__t3) 
                 >> 5U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa38__DOT__cin 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__t3) 
                 >> 6U));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_6__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r4) 
                 >> 1U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa25__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r4) 
                 >> 7U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa18__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r4) 
                 >> 2U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa20__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r4) 
                 >> 3U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa22__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r4) 
                 >> 4U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa23__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r4) 
                 >> 5U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa24__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r4) 
                 >> 6U));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_7__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r5) 
                 >> 7U));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_6__DOT__b 
        = (1U & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r5));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa25__DOT__b 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r5) 
                 >> 6U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa18__DOT__b 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r5) 
                 >> 1U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa20__DOT__b 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r5) 
                 >> 2U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa22__DOT__b 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r5) 
                 >> 3U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa23__DOT__b 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r5) 
                 >> 4U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa24__DOT__b 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r5) 
                 >> 5U));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_5__DOT__b 
        = (1U & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r2));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa17__DOT__b 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r2) 
                 >> 5U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa19__DOT__b 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r2) 
                 >> 6U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa21__DOT__b 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r2) 
                 >> 7U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa13__DOT__b 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r2) 
                 >> 1U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa14__DOT__b 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r2) 
                 >> 2U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa15__DOT__b 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r2) 
                 >> 3U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa16__DOT__b 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r2) 
                 >> 4U));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_5__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r1) 
                 >> 2U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa17__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r1) 
                 >> 7U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa19__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r1) 
                 >> 8U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa21__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r1) 
                 >> 9U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa13__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r1) 
                 >> 3U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa14__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r1) 
                 >> 4U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa15__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r1) 
                 >> 5U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa16__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r1) 
                 >> 6U));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_9__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__s1) 
                 >> 4U));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_8__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__s1) 
                 >> 3U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa26__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__s1) 
                 >> 5U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa27__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__s1) 
                 >> 6U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa28__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__s1) 
                 >> 7U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa29__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__s1) 
                 >> 8U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa30__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__s1) 
                 >> 9U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa31__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__s1) 
                 >> 0x0000000aU));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_9__DOT__b 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__s2) 
                 >> 1U));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_10__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__s2) 
                 >> 8U));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_11__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__s2) 
                 >> 9U));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_8__DOT__b 
        = (1U & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__s2));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa26__DOT__b 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__s2) 
                 >> 2U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa27__DOT__b 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__s2) 
                 >> 3U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa28__DOT__b 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__s2) 
                 >> 4U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa29__DOT__b 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__s2) 
                 >> 5U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa30__DOT__b 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__s2) 
                 >> 6U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa31__DOT__b 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__s2) 
                 >> 7U));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_13__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__t1) 
                 >> 5U));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_14__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__t1) 
                 >> 6U));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_12__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__t1) 
                 >> 4U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa32__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__t1) 
                 >> 7U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa33__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__t1) 
                 >> 8U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa34__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__t1) 
                 >> 9U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa35__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__t1) 
                 >> 0x0000000aU));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa36__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__t1) 
                 >> 0x0000000bU));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa37__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__t1) 
                 >> 0x0000000cU));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa38__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__t1) 
                 >> 0x0000000dU));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_13__DOT__b 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__t2) 
                 >> 1U));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_14__DOT__b 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__t2) 
                 >> 2U));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_15__DOT__a 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__t2) 
                 >> 0x0000000aU));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_12__DOT__b 
        = (1U & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__t2));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa32__DOT__b 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__t2) 
                 >> 3U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa33__DOT__b 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__t2) 
                 >> 4U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa34__DOT__b 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__t2) 
                 >> 5U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa35__DOT__b 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__t2) 
                 >> 6U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa36__DOT__b 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__t2) 
                 >> 7U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa37__DOT__b 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__t2) 
                 >> 8U));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa38__DOT__b 
        = (1U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__t2) 
                 >> 9U));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_4__DOT__cout 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_4__DOT__a) 
           & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_4__DOT__b));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_4__DOT__s 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_4__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_4__DOT__b));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_2__DOT__s 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_2__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_2__DOT__b));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_2__DOT__cout 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_2__DOT__a) 
           & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_2__DOT__b));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_3__DOT__s 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_3__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_3__DOT__b));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_3__DOT__cout 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_3__DOT__a) 
           & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_3__DOT__b));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_1__DOT__cout 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_1__DOT__a) 
           & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_1__DOT__b));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_1__DOT__s 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_1__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_1__DOT__b));
    multiply_block__DOT__m8__DOT__fa_11__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_11__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_11__DOT__b));
    multiply_block__DOT__m8__DOT__fa_12__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_12__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_12__DOT__b));
    multiply_block__DOT__m8__DOT__fa_5__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_5__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_5__DOT__b));
    multiply_block__DOT__m8__DOT__fa_7__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_7__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_7__DOT__b));
    multiply_block__DOT__m8__DOT__fa_9__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_9__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_9__DOT__b));
    multiply_block__DOT__m8__DOT__fa_10__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_10__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_10__DOT__b));
    multiply_block__DOT__m8__DOT__fa_1__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_1__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_1__DOT__b));
    multiply_block__DOT__m8__DOT__fa_2__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_2__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_2__DOT__b));
    multiply_block__DOT__m8__DOT__fa_3__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_3__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_3__DOT__b));
    multiply_block__DOT__m8__DOT__fa_4__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_4__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_4__DOT__b));
    multiply_block__DOT__m8__DOT__fa_6__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_6__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_6__DOT__b));
    multiply_block__DOT__m8__DOT__fa_8__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_8__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_8__DOT__b));
    vlSelfRef.multiply_block__DOT__u2s_inst__DOT__is_neg 
        = vlSelfRef.multiply_block__DOT__is_neg_2;
    vlSelfRef.multiply_block__DOT__u2s_inst__DOT__in 
        = vlSelfRef.multiply_block__DOT__mo;
    vlSelfRef.output_valid = vlSelfRef.multiply_block__DOT__output_valid;
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_7__DOT__cout 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_7__DOT__a) 
           & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_7__DOT__b));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_7__DOT__s 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_7__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_7__DOT__b));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_6__DOT__s 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_6__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_6__DOT__b));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_6__DOT__cout 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_6__DOT__a) 
           & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_6__DOT__b));
    multiply_block__DOT__m8__DOT__fa25__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa25__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa25__DOT__b));
    multiply_block__DOT__m8__DOT__fa18__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa18__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa18__DOT__b));
    multiply_block__DOT__m8__DOT__fa20__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa20__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa20__DOT__b));
    multiply_block__DOT__m8__DOT__fa22__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa22__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa22__DOT__b));
    multiply_block__DOT__m8__DOT__fa23__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa23__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa23__DOT__b));
    multiply_block__DOT__m8__DOT__fa24__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa24__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa24__DOT__b));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_5__DOT__cout 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_5__DOT__a) 
           & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_5__DOT__b));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_5__DOT__s 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_5__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_5__DOT__b));
    multiply_block__DOT__m8__DOT__fa17__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa17__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa17__DOT__b));
    multiply_block__DOT__m8__DOT__fa19__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa19__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa19__DOT__b));
    multiply_block__DOT__m8__DOT__fa21__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa21__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa21__DOT__b));
    multiply_block__DOT__m8__DOT__fa13__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa13__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa13__DOT__b));
    multiply_block__DOT__m8__DOT__fa14__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa14__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa14__DOT__b));
    multiply_block__DOT__m8__DOT__fa15__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa15__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa15__DOT__b));
    multiply_block__DOT__m8__DOT__fa16__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa16__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa16__DOT__b));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_9__DOT__s 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_9__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_9__DOT__b));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_9__DOT__cout 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_9__DOT__a) 
           & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_9__DOT__b));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_10__DOT__s 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_10__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_10__DOT__b));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_10__DOT__cout 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_10__DOT__a) 
           & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_10__DOT__b));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_11__DOT__s 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_11__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_11__DOT__b));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_11__DOT__cout 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_11__DOT__a) 
           & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_11__DOT__b));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_8__DOT__cout 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_8__DOT__a) 
           & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_8__DOT__b));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_8__DOT__s 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_8__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_8__DOT__b));
    multiply_block__DOT__m8__DOT__fa26__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa26__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa26__DOT__b));
    multiply_block__DOT__m8__DOT__fa27__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa27__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa27__DOT__b));
    multiply_block__DOT__m8__DOT__fa28__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa28__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa28__DOT__b));
    multiply_block__DOT__m8__DOT__fa29__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa29__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa29__DOT__b));
    multiply_block__DOT__m8__DOT__fa30__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa30__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa30__DOT__b));
    multiply_block__DOT__m8__DOT__fa31__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa31__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa31__DOT__b));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_13__DOT__s 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_13__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_13__DOT__b));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_13__DOT__cout 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_13__DOT__a) 
           & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_13__DOT__b));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_14__DOT__s 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_14__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_14__DOT__b));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_14__DOT__cout 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_14__DOT__a) 
           & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_14__DOT__b));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_15__DOT__s 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_15__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_15__DOT__b));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_15__DOT__cout 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_15__DOT__a) 
           & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_15__DOT__b));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_12__DOT__cout 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_12__DOT__a) 
           & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_12__DOT__b));
    vlSelfRef.multiply_block__DOT__m8__DOT__ha_12__DOT__s 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_12__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_12__DOT__b));
    multiply_block__DOT__m8__DOT__fa32__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa32__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa32__DOT__b));
    multiply_block__DOT__m8__DOT__fa33__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa33__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa33__DOT__b));
    multiply_block__DOT__m8__DOT__fa34__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa34__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa34__DOT__b));
    multiply_block__DOT__m8__DOT__fa35__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa35__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa35__DOT__b));
    multiply_block__DOT__m8__DOT__fa36__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa36__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa36__DOT__b));
    multiply_block__DOT__m8__DOT__fa37__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa37__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa37__DOT__b));
    multiply_block__DOT__m8__DOT__fa38__DOT____VdfgRegularize_h693e9ae5_0_0 
        = ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa38__DOT__a) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa38__DOT__b));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_11__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_11__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_11__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_11__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa_11__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_11__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa_11__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_11__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_12__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_12__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_12__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_12__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa_12__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_12__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa_12__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_12__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_5__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa_5__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_5__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_5__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_5__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_5__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_5__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa_5__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_7__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa_7__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_7__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_7__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_7__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_7__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_7__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa_7__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_9__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa_9__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_9__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_9__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_9__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_9__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_9__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa_9__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_10__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa_10__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_10__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_10__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_10__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_10__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_10__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa_10__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_1__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa_1__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_1__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_1__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_1__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_1__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_1__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa_1__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_2__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa_2__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_2__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_2__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_2__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_2__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_2__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa_2__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_3__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa_3__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_3__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_3__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_3__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_3__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_3__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa_3__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_4__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa_4__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_4__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_4__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_4__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_4__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_4__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa_4__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_6__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa_6__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_6__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_6__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_6__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_6__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_6__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa_6__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_8__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa_8__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_8__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa_8__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_8__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_8__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_8__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa_8__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__x4 = ((1U 
                                                   & (~ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__rst))) 
                                                  && (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__x3));
    vlSelfRef.multiply_block__DOT__u2s_inst__DOT__out 
        = (0x0000ffffU & ((IData)(vlSelfRef.multiply_block__DOT__u2s_inst__DOT__is_neg)
                           ? ((IData)(1U) + (~ (IData)(vlSelfRef.multiply_block__DOT__u2s_inst__DOT__in)))
                           : (IData)(vlSelfRef.multiply_block__DOT__u2s_inst__DOT__in)));
    vlSelfRef.multiply_block__DOT__m8__DOT__stage_four_valid 
        = ((1U & (~ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__rst))) 
           && (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__stage_three_valid));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa25__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa25__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa25__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa25__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa25__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa25__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa25__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa25__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa18__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa18__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa18__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa18__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa18__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa18__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa18__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa18__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa20__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa20__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa20__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa20__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa20__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa20__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa20__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa20__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa22__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa22__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa22__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa22__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa22__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa22__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa22__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa22__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa23__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa23__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa23__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa23__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa23__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa23__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa23__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa23__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa24__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa24__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa24__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa24__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa24__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa24__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa24__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa24__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa17__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa17__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa17__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa17__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa17__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa17__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa17__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa17__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa19__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa19__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa19__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa19__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa19__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa19__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa19__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa19__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa21__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa21__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa21__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa21__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa21__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa21__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa21__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa21__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa13__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa13__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa13__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa13__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa13__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa13__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa13__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa13__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa14__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa14__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa14__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa14__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa14__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa14__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa14__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa14__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa15__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa15__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa15__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa15__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa15__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa15__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa15__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa15__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa16__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa16__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa16__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa16__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa16__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa16__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa16__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa16__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa26__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa26__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa26__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa26__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa26__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa26__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa26__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa26__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa27__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa27__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa27__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa27__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa27__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa27__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa27__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa27__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa28__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa28__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa28__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa28__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa28__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa28__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa28__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa28__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa29__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa29__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa29__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa29__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa29__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa29__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa29__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa29__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa30__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa30__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa30__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa30__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa30__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa30__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa30__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa30__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa31__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa31__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa31__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa31__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa31__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa31__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa31__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa31__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa32__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa32__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa32__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa32__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa32__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa32__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa32__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa32__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa33__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa33__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa33__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa33__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa33__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa33__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa33__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa33__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa34__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa34__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa34__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa34__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa34__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa34__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa34__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa34__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa35__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa35__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa35__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa35__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa35__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa35__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa35__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa35__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa36__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa36__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa36__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa36__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa36__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa36__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa36__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa36__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa37__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa37__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa37__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa37__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa37__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa37__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa37__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa37__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa38__DOT__s 
        = ((IData)(multiply_block__DOT__m8__DOT__fa38__DOT____VdfgRegularize_h693e9ae5_0_0) 
           ^ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa38__DOT__cin));
    vlSelfRef.multiply_block__DOT__m8__DOT__fa38__DOT__cout 
        = (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa38__DOT__a) 
            & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa38__DOT__b)) 
           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa38__DOT__cin) 
              & (IData)(multiply_block__DOT__m8__DOT__fa38__DOT____VdfgRegularize_h693e9ae5_0_0)));
    vlSelfRef.multiply_block__DOT__m8__DOT__r3_temp 
        = ((0x007fU & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r3_temp)) 
           | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_4__DOT__cout) 
               << 9U) | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_12__DOT__cout) 
                          << 8U) | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_11__DOT__cout) 
                                    << 7U))));
    vlSelfRef.multiply_block__DOT__m8__DOT__r4_temp 
        = (((((vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
               [5U][7U] << 3U) | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_4__DOT__s) 
                                  << 2U)) | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_12__DOT__s) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_11__DOT__s))) 
            << 4U) | ((((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_10__DOT__s) 
                        << 3U) | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_9__DOT__s) 
                                  << 2U)) | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_7__DOT__s) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_5__DOT__s))));
    vlSelfRef.multiply_block__DOT__m8__DOT__r2_temp 
        = ((((((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_10__DOT__cout) 
               << 3U) | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_9__DOT__cout) 
                         << 2U)) | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_7__DOT__cout) 
                                     << 1U) | (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_5__DOT__cout))) 
            << 4U) | ((((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_2__DOT__cout) 
                        << 3U) | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_3__DOT__s) 
                                  << 2U)) | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_2__DOT__s) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_1__DOT__s))));
    vlSelfRef.multiply_block__DOT__m8__DOT__r3_temp 
        = ((0x0381U & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r3_temp)) 
           | ((((vlSelfRef.multiply_block__DOT__m8__DOT__partial_products
                 [2U][7U] << 5U) | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_3__DOT__s) 
                                     << 4U) | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_8__DOT__s) 
                                               << 3U))) 
               | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_6__DOT__s) 
                   << 2U) | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_4__DOT__s) 
                              << 1U) | (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_2__DOT__s)))) 
              << 1U));
    vlSelfRef.multiply_block__DOT__m8__DOT__r1_temp 
        = ((1U & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r1_temp)) 
           | ((((((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_3__DOT__cout) 
                  << 4U) | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_8__DOT__cout) 
                             << 3U) | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_6__DOT__cout) 
                                       << 2U))) | (
                                                   ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_4__DOT__cout) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_3__DOT__cout))) 
               << 5U) | (((((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_2__DOT__cout) 
                            << 3U) | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa_1__DOT__cout) 
                                      << 2U)) | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_1__DOT__cout) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_1__DOT__s))) 
                         << 1U)));
    vlSelfRef.multiply_block__DOT__multiply_out = vlSelfRef.multiply_block__DOT__u2s_inst__DOT__out;
    vlSelfRef.multiply_block__DOT__m8__DOT__s4_temp 
        = (((((2U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r6) 
                     >> 6U)) | (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_7__DOT__s)) 
             << 6U) | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa25__DOT__s) 
                        << 5U) | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa24__DOT__s) 
                                  << 4U))) | ((((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa23__DOT__s) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa22__DOT__s) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa20__DOT__s) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa18__DOT__s))));
    vlSelfRef.multiply_block__DOT__m8__DOT__s3_temp 
        = ((((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_7__DOT__cout) 
             << 9U) | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa25__DOT__cout) 
                        << 8U) | (0x000000e0U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r3) 
                                                 >> 2U)))) 
           | ((((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa21__DOT__s) 
                << 4U) | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa19__DOT__s) 
                           << 3U) | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa17__DOT__s) 
                                     << 2U))) | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_6__DOT__s) 
                                                  << 1U) 
                                                 | (1U 
                                                    & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r4)))));
    vlSelfRef.multiply_block__DOT__m8__DOT__s2_temp 
        = ((((((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa24__DOT__cout) 
               << 4U) | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa23__DOT__cout) 
                          << 3U) | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa22__DOT__cout) 
                                    << 2U))) | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa20__DOT__cout) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa18__DOT__cout))) 
            << 5U) | ((((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_6__DOT__cout) 
                        << 4U) | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa16__DOT__s) 
                                   << 3U) | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa15__DOT__s) 
                                             << 2U))) 
                      | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa14__DOT__s) 
                          << 1U) | (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa13__DOT__s))));
    vlSelfRef.multiply_block__DOT__m8__DOT__s1_temp 
        = ((((((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa21__DOT__cout) 
               << 5U) | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa19__DOT__cout) 
                          << 4U) | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa17__DOT__cout) 
                                    << 3U))) | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa16__DOT__cout) 
                                                 << 2U) 
                                                | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa15__DOT__cout) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa14__DOT__cout)))) 
            << 5U) | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa13__DOT__cout) 
                       << 4U) | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_5__DOT__cout) 
                                  << 3U) | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_5__DOT__s) 
                                             << 2U) 
                                            | (3U & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__r1))))));
    vlSelfRef.multiply_block__DOT__m8__DOT__t2_temp 
        = (((((6U & ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__s3) 
                     >> 7U)) | (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_11__DOT__s)) 
             << 8U) | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_10__DOT__s) 
                        << 7U) | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa31__DOT__s) 
                                   << 6U) | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa30__DOT__s) 
                                             << 5U)))) 
           | ((((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa29__DOT__s) 
                << 4U) | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa28__DOT__s) 
                           << 3U) | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa27__DOT__s) 
                                     << 2U))) | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa26__DOT__s) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_9__DOT__s))));
    vlSelfRef.multiply_block__DOT__m8__DOT__t1_temp 
        = (((((((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_11__DOT__cout) 
                << 3U) | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_10__DOT__cout) 
                          << 2U)) | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa31__DOT__cout) 
                                      << 1U) | (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa30__DOT__cout))) 
             << 0x0000000aU) | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa29__DOT__cout) 
                                 << 9U) | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa28__DOT__cout) 
                                            << 8U) 
                                           | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa27__DOT__cout) 
                                              << 7U)))) 
           | ((((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa26__DOT__cout) 
                << 6U) | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_9__DOT__cout) 
                          << 5U)) | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_8__DOT__cout) 
                                      << 4U) | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_8__DOT__s) 
                                                 << 3U) 
                                                | (7U 
                                                   & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__s1))))));
    vlSelfRef.multiply_block__DOT__m8__DOT__u2_temp 
        = ((((((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_15__DOT__s) 
               << 4U) | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa38__DOT__s) 
                          << 3U) | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa37__DOT__s) 
                                    << 2U))) | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa36__DOT__s) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa35__DOT__s))) 
            << 5U) | ((((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa34__DOT__s) 
                        << 4U) | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa33__DOT__s) 
                                   << 3U) | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa32__DOT__s) 
                                             << 2U))) 
                      | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_14__DOT__s) 
                          << 1U) | (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_13__DOT__s))));
    vlSelfRef.multiply_block__DOT__m8__DOT__u1_temp 
        = (((((((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_15__DOT__cout) 
                << 3U) | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa38__DOT__cout) 
                          << 2U)) | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa37__DOT__cout) 
                                      << 1U) | (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa36__DOT__cout))) 
             << 0x0000000cU) | (((((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa35__DOT__cout) 
                                   << 3U) | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa34__DOT__cout) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa33__DOT__cout) 
                                     << 1U) | (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__fa32__DOT__cout))) 
                                << 8U)) | ((((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_14__DOT__cout) 
                                             << 7U) 
                                            | ((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_13__DOT__cout) 
                                               << 6U)) 
                                           | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_12__DOT__cout) 
                                               << 5U) 
                                              | (((IData)(vlSelfRef.multiply_block__DOT__m8__DOT__ha_12__DOT__s) 
                                                  << 4U) 
                                                 | (0x0000000fU 
                                                    & (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__t1))))));
    vlSelfRef.multiply_block__DOT__m8__DOT__x3 = ((1U 
                                                   & (~ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__rst))) 
                                                  && (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__x2));
    vlSelfRef.multiply_out = vlSelfRef.multiply_block__DOT__multiply_out;
    vlSelfRef.multiply_block__DOT__m8__DOT__stage_three_valid 
        = ((1U & (~ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__rst))) 
           && (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__stage_two_valid));
    vlSelfRef.multiply_block__DOT__m8__DOT__x2 = ((1U 
                                                   & (~ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__rst))) 
                                                  && (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__x1));
    vlSelfRef.multiply_block__DOT__m8__DOT__stage_two_valid 
        = ((1U & (~ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__rst))) 
           && (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__stage_one_valid));
    vlSelfRef.multiply_block__DOT__m8__DOT__x1 = ((1U 
                                                   & (~ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__rst))) 
                                                  && (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__is_neg_in));
    vlSelfRef.multiply_block__DOT__m8__DOT__stage_one_valid 
        = ((1U & (~ (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__rst))) 
           && (IData)(vlSelfRef.multiply_block__DOT__m8__DOT__in_valid));
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
            VL_FATAL_MT("/mnt/c/Users/immkb/Desktop/FPGA_stuff/GIT_REPOS/DE25_Nano_Image_Processing_IP/multiplier_test/rtl/multiply_block.sv", 1, "", "DIDNOTCONVERGE: Input combinational region did not converge after 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
    } while (Vtop___024root___eval_phase__ico(vlSelf));
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/mnt/c/Users/immkb/Desktop/FPGA_stuff/GIT_REPOS/DE25_Nano_Image_Processing_IP/multiplier_test/rtl/multiply_block.sv", 1, "", "DIDNOTCONVERGE: NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/mnt/c/Users/immkb/Desktop/FPGA_stuff/GIT_REPOS/DE25_Nano_Image_Processing_IP/multiplier_test/rtl/multiply_block.sv", 1, "", "DIDNOTCONVERGE: Active region did not converge after 100 tries");
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
    if (VL_UNLIKELY(((vlSelfRef.input_valid & 0xfeU)))) {
        Verilated::overWidthError("input_valid");
    }
}
#endif  // VL_DEBUG
