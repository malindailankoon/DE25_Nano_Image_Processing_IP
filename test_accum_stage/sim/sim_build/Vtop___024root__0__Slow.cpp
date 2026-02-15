// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__accum_block__DOT__clk__0 
        = vlSelfRef.accum_block__DOT__clk;
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("/Users/malindailankoon/Desktop/GIT_REPOS/DE25_Nano_Image_Processing_IP/test_accum_stage/rtl/accum_block.sv", 1, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtop___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vtop___024root___eval_triggers_vec__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers_vec__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__stl\n"); );
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

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtop___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge accum_block.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    VL_SCOPED_RAND_RESET_W(144, vlSelf->data_in, __VscopeHash, 10574596302020702150ull);
    vlSelf->input_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4270309033785105452ull);
    vlSelf->data_out = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11675680895196038875ull);
    vlSelf->out_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2886291494070200219ull);
    vlSelf->accum_block__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7593754743416195869ull);
    vlSelf->accum_block__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2402851164594675634ull);
    VL_SCOPED_RAND_RESET_W(144, vlSelf->accum_block__DOT__data_in, __VscopeHash, 16508821856440612322ull);
    vlSelf->accum_block__DOT__input_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16742154553425715385ull);
    vlSelf->accum_block__DOT__data_out = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18107445634663881915ull);
    vlSelf->accum_block__DOT__out_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17769852250222846656ull);
    vlSelf->accum_block__DOT__s1_a1_sum_temp = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8044809365850117138ull);
    vlSelf->accum_block__DOT__s1_a1_carry_temp = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16974228474597978116ull);
    vlSelf->accum_block__DOT__s1_a1_sum = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12805142006396518012ull);
    vlSelf->accum_block__DOT__s1_a1_carry = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17286900226486664222ull);
    vlSelf->accum_block__DOT__s1_a2_sum_temp = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13568456303318243824ull);
    vlSelf->accum_block__DOT__s1_a2_carry_temp = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7396134184695393998ull);
    vlSelf->accum_block__DOT__s1_a2_sum = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12294306784602269194ull);
    vlSelf->accum_block__DOT__s1_a2_carry = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11047004673799636306ull);
    vlSelf->accum_block__DOT__s1_a3_sum_temp = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1195957839642234644ull);
    vlSelf->accum_block__DOT__s1_a3_carry_temp = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15472583461501461038ull);
    vlSelf->accum_block__DOT__s1_a3_sum = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7486749078667731990ull);
    vlSelf->accum_block__DOT__s1_a3_carry = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3714260367390266559ull);
    vlSelf->accum_block__DOT__s1_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2350262000984248391ull);
    vlSelf->accum_block__DOT__s2_a1_sum_temp = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14863414503531857156ull);
    vlSelf->accum_block__DOT__s2_a1_carry_temp = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14799836269143766626ull);
    vlSelf->accum_block__DOT__s2_a1_sum = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5999104798123198570ull);
    vlSelf->accum_block__DOT__s2_a1_carry = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17602744406582819251ull);
    vlSelf->accum_block__DOT__s2_a2_sum_temp = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16207270295075017415ull);
    vlSelf->accum_block__DOT__s2_a2_carry_temp = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9330101466695172595ull);
    vlSelf->accum_block__DOT__s2_a2_sum = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17984405209809637430ull);
    vlSelf->accum_block__DOT__s2_a2_carry = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17015465217886620089ull);
    vlSelf->accum_block__DOT__s2_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12839367657042713103ull);
    vlSelf->accum_block__DOT__s3_a1_sum_temp = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4490162978625373319ull);
    vlSelf->accum_block__DOT__s3_a1_carry_temp = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6761943781559298286ull);
    vlSelf->accum_block__DOT__s3_a1_sum = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13801664411163957103ull);
    vlSelf->accum_block__DOT__s3_a1_carry = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15088179486594100268ull);
    vlSelf->accum_block__DOT__carry_buff = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7632921312819452476ull);
    vlSelf->accum_block__DOT__s3_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10797749093513902002ull);
    vlSelf->accum_block__DOT__s4_a1_sum_temp = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7670950751826806718ull);
    vlSelf->accum_block__DOT__s4_a1_carry_temp = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8902644554383883957ull);
    vlSelf->accum_block__DOT__s4_a1_sum = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7364037088187992405ull);
    vlSelf->accum_block__DOT__s4_a1_carry = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13202062814480071931ull);
    vlSelf->accum_block__DOT__s4_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17491609414297399918ull);
    vlSelf->accum_block__DOT__s5_temp = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14037447537530728601ull);
    vlSelf->accum_block__DOT__s5_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14403542055377543888ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17141120649245011585ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9729865564192881858ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9074990687277609349ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14527315802870653691ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6557433282302962091ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1559873466246444764ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15189461387354108322ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14998383960413567811ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7620849617911656223ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1990417643232069772ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5297772165279429795ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16758513970422893752ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6234189821929114533ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8013653130474642734ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1588179035828882644ull);
    vlSelf->accum_block__DOT__genblk1__BRA__3__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4324558879727744507ull);
    vlSelf->accum_block__DOT__genblk1__BRA__3__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12266060059766711283ull);
    vlSelf->accum_block__DOT__genblk1__BRA__3__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2319272569376419794ull);
    vlSelf->accum_block__DOT__genblk1__BRA__3__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1493388966888534569ull);
    vlSelf->accum_block__DOT__genblk1__BRA__3__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 179759547935810897ull);
    vlSelf->accum_block__DOT__genblk1__BRA__4__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5122131499202332752ull);
    vlSelf->accum_block__DOT__genblk1__BRA__4__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6713611905529992137ull);
    vlSelf->accum_block__DOT__genblk1__BRA__4__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14784581486901835325ull);
    vlSelf->accum_block__DOT__genblk1__BRA__4__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5305945906806817537ull);
    vlSelf->accum_block__DOT__genblk1__BRA__4__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9479664521932310247ull);
    vlSelf->accum_block__DOT__genblk1__BRA__5__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2983948719491531835ull);
    vlSelf->accum_block__DOT__genblk1__BRA__5__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4003129389546811641ull);
    vlSelf->accum_block__DOT__genblk1__BRA__5__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 866003515198546297ull);
    vlSelf->accum_block__DOT__genblk1__BRA__5__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1267191444841584919ull);
    vlSelf->accum_block__DOT__genblk1__BRA__5__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15231409273864278239ull);
    vlSelf->accum_block__DOT__genblk1__BRA__6__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10114766442529091588ull);
    vlSelf->accum_block__DOT__genblk1__BRA__6__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11206475794885040799ull);
    vlSelf->accum_block__DOT__genblk1__BRA__6__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11928826564459710517ull);
    vlSelf->accum_block__DOT__genblk1__BRA__6__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9690022658579935695ull);
    vlSelf->accum_block__DOT__genblk1__BRA__6__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16319473862545763276ull);
    vlSelf->accum_block__DOT__genblk1__BRA__7__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5888541303682453308ull);
    vlSelf->accum_block__DOT__genblk1__BRA__7__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1386778553665683125ull);
    vlSelf->accum_block__DOT__genblk1__BRA__7__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12575149701436803188ull);
    vlSelf->accum_block__DOT__genblk1__BRA__7__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 804714769369323927ull);
    vlSelf->accum_block__DOT__genblk1__BRA__7__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1611431793959081352ull);
    vlSelf->accum_block__DOT__genblk1__BRA__8__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8049679896573747744ull);
    vlSelf->accum_block__DOT__genblk1__BRA__8__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14237208568835863033ull);
    vlSelf->accum_block__DOT__genblk1__BRA__8__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17982730430695368431ull);
    vlSelf->accum_block__DOT__genblk1__BRA__8__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9251343741885100556ull);
    vlSelf->accum_block__DOT__genblk1__BRA__8__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16999318831709569541ull);
    vlSelf->accum_block__DOT__genblk1__BRA__9__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12035236914563097833ull);
    vlSelf->accum_block__DOT__genblk1__BRA__9__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16098647348581197277ull);
    vlSelf->accum_block__DOT__genblk1__BRA__9__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14860328726506008149ull);
    vlSelf->accum_block__DOT__genblk1__BRA__9__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11383043618307822590ull);
    vlSelf->accum_block__DOT__genblk1__BRA__9__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12150282454534629958ull);
    vlSelf->accum_block__DOT__genblk1__BRA__10__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16410775478109526889ull);
    vlSelf->accum_block__DOT__genblk1__BRA__10__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13844472625439681625ull);
    vlSelf->accum_block__DOT__genblk1__BRA__10__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16694593741828780428ull);
    vlSelf->accum_block__DOT__genblk1__BRA__10__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1714341552397890340ull);
    vlSelf->accum_block__DOT__genblk1__BRA__10__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5834271496796167637ull);
    vlSelf->accum_block__DOT__genblk1__BRA__11__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12415669928551311057ull);
    vlSelf->accum_block__DOT__genblk1__BRA__11__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15944163419318623476ull);
    vlSelf->accum_block__DOT__genblk1__BRA__11__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15459322799209854099ull);
    vlSelf->accum_block__DOT__genblk1__BRA__11__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7831572382226309662ull);
    vlSelf->accum_block__DOT__genblk1__BRA__11__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12766046407214473109ull);
    vlSelf->accum_block__DOT__genblk1__BRA__12__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2598067985955198819ull);
    vlSelf->accum_block__DOT__genblk1__BRA__12__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12123258660224353118ull);
    vlSelf->accum_block__DOT__genblk1__BRA__12__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4011854047761190233ull);
    vlSelf->accum_block__DOT__genblk1__BRA__12__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3671372757011528479ull);
    vlSelf->accum_block__DOT__genblk1__BRA__12__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10896467116053761133ull);
    vlSelf->accum_block__DOT__genblk1__BRA__13__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 398810050289927928ull);
    vlSelf->accum_block__DOT__genblk1__BRA__13__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10170739556341814135ull);
    vlSelf->accum_block__DOT__genblk1__BRA__13__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14420846000452453827ull);
    vlSelf->accum_block__DOT__genblk1__BRA__13__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 135041689182731373ull);
    vlSelf->accum_block__DOT__genblk1__BRA__13__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16030140257037710458ull);
    vlSelf->accum_block__DOT__genblk1__BRA__14__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4358919697436075232ull);
    vlSelf->accum_block__DOT__genblk1__BRA__14__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7460687369468166231ull);
    vlSelf->accum_block__DOT__genblk1__BRA__14__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7406310488535158820ull);
    vlSelf->accum_block__DOT__genblk1__BRA__14__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9214988694147914218ull);
    vlSelf->accum_block__DOT__genblk1__BRA__14__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13251928638676127589ull);
    vlSelf->accum_block__DOT__genblk1__BRA__15__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8231991946560536546ull);
    vlSelf->accum_block__DOT__genblk1__BRA__15__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16595322865294041885ull);
    vlSelf->accum_block__DOT__genblk1__BRA__15__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16282651582320852811ull);
    vlSelf->accum_block__DOT__genblk1__BRA__15__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2576010875882605152ull);
    vlSelf->accum_block__DOT__genblk1__BRA__15__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5703237553463635448ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6522269882757145733ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5756038378827478381ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12261687795467435842ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1758891029934975312ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4158393493936376580ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5580602311782278593ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4642195873812141689ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18062889940899977683ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13701696714454978625ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4855593763200084138ull);
    vlSelf->accum_block__DOT__genblk2__BRA__2__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6013834070133550002ull);
    vlSelf->accum_block__DOT__genblk2__BRA__2__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17948137759154163133ull);
    vlSelf->accum_block__DOT__genblk2__BRA__2__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10320761776343885386ull);
    vlSelf->accum_block__DOT__genblk2__BRA__2__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12104413315672620565ull);
    vlSelf->accum_block__DOT__genblk2__BRA__2__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7750834080078162321ull);
    vlSelf->accum_block__DOT__genblk2__BRA__3__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 565348429089640306ull);
    vlSelf->accum_block__DOT__genblk2__BRA__3__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2412899828726466927ull);
    vlSelf->accum_block__DOT__genblk2__BRA__3__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16304095554394606584ull);
    vlSelf->accum_block__DOT__genblk2__BRA__3__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17663274964189187324ull);
    vlSelf->accum_block__DOT__genblk2__BRA__3__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15086443118408959274ull);
    vlSelf->accum_block__DOT__genblk2__BRA__4__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14430075767192609042ull);
    vlSelf->accum_block__DOT__genblk2__BRA__4__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15460741636412312656ull);
    vlSelf->accum_block__DOT__genblk2__BRA__4__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14220043689652348236ull);
    vlSelf->accum_block__DOT__genblk2__BRA__4__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17292882937760324834ull);
    vlSelf->accum_block__DOT__genblk2__BRA__4__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11809092149680837215ull);
    vlSelf->accum_block__DOT__genblk2__BRA__5__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16131778681079808652ull);
    vlSelf->accum_block__DOT__genblk2__BRA__5__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2141279471013077145ull);
    vlSelf->accum_block__DOT__genblk2__BRA__5__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15584281003384430498ull);
    vlSelf->accum_block__DOT__genblk2__BRA__5__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12722905056305072520ull);
    vlSelf->accum_block__DOT__genblk2__BRA__5__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7488667496848513010ull);
    vlSelf->accum_block__DOT__genblk2__BRA__6__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9940419151547067451ull);
    vlSelf->accum_block__DOT__genblk2__BRA__6__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6385791941022505899ull);
    vlSelf->accum_block__DOT__genblk2__BRA__6__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10329269798550943466ull);
    vlSelf->accum_block__DOT__genblk2__BRA__6__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2918616266798238757ull);
    vlSelf->accum_block__DOT__genblk2__BRA__6__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17211172928383388267ull);
    vlSelf->accum_block__DOT__genblk2__BRA__7__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12716953249055713428ull);
    vlSelf->accum_block__DOT__genblk2__BRA__7__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16865791381149040899ull);
    vlSelf->accum_block__DOT__genblk2__BRA__7__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12804461787641891021ull);
    vlSelf->accum_block__DOT__genblk2__BRA__7__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7968710951817780980ull);
    vlSelf->accum_block__DOT__genblk2__BRA__7__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15016997070389338041ull);
    vlSelf->accum_block__DOT__genblk2__BRA__8__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10814138441277849278ull);
    vlSelf->accum_block__DOT__genblk2__BRA__8__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14562497013001736048ull);
    vlSelf->accum_block__DOT__genblk2__BRA__8__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2863607566521085795ull);
    vlSelf->accum_block__DOT__genblk2__BRA__8__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8968756506584524833ull);
    vlSelf->accum_block__DOT__genblk2__BRA__8__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6877775329696146867ull);
    vlSelf->accum_block__DOT__genblk2__BRA__9__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9067736706439199285ull);
    vlSelf->accum_block__DOT__genblk2__BRA__9__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13568321129678555661ull);
    vlSelf->accum_block__DOT__genblk2__BRA__9__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12736648808486717020ull);
    vlSelf->accum_block__DOT__genblk2__BRA__9__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12909449005819632030ull);
    vlSelf->accum_block__DOT__genblk2__BRA__9__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12516455360321383925ull);
    vlSelf->accum_block__DOT__genblk2__BRA__10__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7066880950509977407ull);
    vlSelf->accum_block__DOT__genblk2__BRA__10__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3867152216889845096ull);
    vlSelf->accum_block__DOT__genblk2__BRA__10__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4663448178321933203ull);
    vlSelf->accum_block__DOT__genblk2__BRA__10__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17624279239545620615ull);
    vlSelf->accum_block__DOT__genblk2__BRA__10__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11817494641350261511ull);
    vlSelf->accum_block__DOT__genblk2__BRA__11__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4978160099488362703ull);
    vlSelf->accum_block__DOT__genblk2__BRA__11__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5042672792474787338ull);
    vlSelf->accum_block__DOT__genblk2__BRA__11__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 420806883490752434ull);
    vlSelf->accum_block__DOT__genblk2__BRA__11__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10329457269197486821ull);
    vlSelf->accum_block__DOT__genblk2__BRA__11__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4120695012220378953ull);
    vlSelf->accum_block__DOT__genblk2__BRA__12__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3842140882662483334ull);
    vlSelf->accum_block__DOT__genblk2__BRA__12__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6481879370869045437ull);
    vlSelf->accum_block__DOT__genblk2__BRA__12__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1304057833921047283ull);
    vlSelf->accum_block__DOT__genblk2__BRA__12__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1257483756470102661ull);
    vlSelf->accum_block__DOT__genblk2__BRA__12__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3324570306518922993ull);
    vlSelf->accum_block__DOT__genblk2__BRA__13__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17467515625404815818ull);
    vlSelf->accum_block__DOT__genblk2__BRA__13__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9966645313911328705ull);
    vlSelf->accum_block__DOT__genblk2__BRA__13__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 413153438500686045ull);
    vlSelf->accum_block__DOT__genblk2__BRA__13__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 111660153667489507ull);
    vlSelf->accum_block__DOT__genblk2__BRA__13__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16499077612240277618ull);
    vlSelf->accum_block__DOT__genblk2__BRA__14__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12281563306883282023ull);
    vlSelf->accum_block__DOT__genblk2__BRA__14__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18312239111277470151ull);
    vlSelf->accum_block__DOT__genblk2__BRA__14__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4855005171426886852ull);
    vlSelf->accum_block__DOT__genblk2__BRA__14__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8618543536454991743ull);
    vlSelf->accum_block__DOT__genblk2__BRA__14__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1739608011380351417ull);
    vlSelf->accum_block__DOT__genblk2__BRA__15__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2749227341488827841ull);
    vlSelf->accum_block__DOT__genblk2__BRA__15__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2819889255562705459ull);
    vlSelf->accum_block__DOT__genblk2__BRA__15__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3608348892638696766ull);
    vlSelf->accum_block__DOT__genblk2__BRA__15__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 420769949242765525ull);
    vlSelf->accum_block__DOT__genblk2__BRA__15__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15917913977877032339ull);
    vlSelf->accum_block__DOT__genblk3__BRA__0__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12873703110415382478ull);
    vlSelf->accum_block__DOT__genblk3__BRA__0__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12257169219230357087ull);
    vlSelf->accum_block__DOT__genblk3__BRA__0__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5077255379671301047ull);
    vlSelf->accum_block__DOT__genblk3__BRA__0__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15880651812827778515ull);
    vlSelf->accum_block__DOT__genblk3__BRA__0__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11702563962098477319ull);
    vlSelf->accum_block__DOT__genblk3__BRA__1__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10391181633905001260ull);
    vlSelf->accum_block__DOT__genblk3__BRA__1__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3873392930906594441ull);
    vlSelf->accum_block__DOT__genblk3__BRA__1__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7743590638553349743ull);
    vlSelf->accum_block__DOT__genblk3__BRA__1__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10322024209521816364ull);
    vlSelf->accum_block__DOT__genblk3__BRA__1__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1316730024411712330ull);
    vlSelf->accum_block__DOT__genblk3__BRA__2__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12047993662321041294ull);
    vlSelf->accum_block__DOT__genblk3__BRA__2__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14480425662630241138ull);
    vlSelf->accum_block__DOT__genblk3__BRA__2__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11915959986944049574ull);
    vlSelf->accum_block__DOT__genblk3__BRA__2__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5304905138315131855ull);
    vlSelf->accum_block__DOT__genblk3__BRA__2__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12319012411565844349ull);
    vlSelf->accum_block__DOT__genblk3__BRA__3__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12007600831156852287ull);
    vlSelf->accum_block__DOT__genblk3__BRA__3__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6112058621085963127ull);
    vlSelf->accum_block__DOT__genblk3__BRA__3__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14229664424938451786ull);
    vlSelf->accum_block__DOT__genblk3__BRA__3__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3136577389403810380ull);
    vlSelf->accum_block__DOT__genblk3__BRA__3__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3401064199182957322ull);
    vlSelf->accum_block__DOT__genblk3__BRA__4__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8867871330389487796ull);
    vlSelf->accum_block__DOT__genblk3__BRA__4__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14295129085089320381ull);
    vlSelf->accum_block__DOT__genblk3__BRA__4__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17083297026555144329ull);
    vlSelf->accum_block__DOT__genblk3__BRA__4__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2989055063945967959ull);
    vlSelf->accum_block__DOT__genblk3__BRA__4__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7188949482303643737ull);
    vlSelf->accum_block__DOT__genblk3__BRA__5__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3631731259613173189ull);
    vlSelf->accum_block__DOT__genblk3__BRA__5__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16184547423599760826ull);
    vlSelf->accum_block__DOT__genblk3__BRA__5__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13005737891204357680ull);
    vlSelf->accum_block__DOT__genblk3__BRA__5__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10853049797441399304ull);
    vlSelf->accum_block__DOT__genblk3__BRA__5__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9164376592991003764ull);
    vlSelf->accum_block__DOT__genblk3__BRA__6__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14182923402694533458ull);
    vlSelf->accum_block__DOT__genblk3__BRA__6__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2114459469429750930ull);
    vlSelf->accum_block__DOT__genblk3__BRA__6__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14849036990510406733ull);
    vlSelf->accum_block__DOT__genblk3__BRA__6__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16009661528713495443ull);
    vlSelf->accum_block__DOT__genblk3__BRA__6__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2362921601984529286ull);
    vlSelf->accum_block__DOT__genblk3__BRA__7__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11892456528177774571ull);
    vlSelf->accum_block__DOT__genblk3__BRA__7__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8574486267279222665ull);
    vlSelf->accum_block__DOT__genblk3__BRA__7__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12785229287848396256ull);
    vlSelf->accum_block__DOT__genblk3__BRA__7__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10482218805486218117ull);
    vlSelf->accum_block__DOT__genblk3__BRA__7__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8852083514593927454ull);
    vlSelf->accum_block__DOT__genblk3__BRA__8__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5464210009232634988ull);
    vlSelf->accum_block__DOT__genblk3__BRA__8__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5508867642923659550ull);
    vlSelf->accum_block__DOT__genblk3__BRA__8__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12457114326535934605ull);
    vlSelf->accum_block__DOT__genblk3__BRA__8__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7432008110256529636ull);
    vlSelf->accum_block__DOT__genblk3__BRA__8__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17535735675773323199ull);
    vlSelf->accum_block__DOT__genblk3__BRA__9__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15664280194927512320ull);
    vlSelf->accum_block__DOT__genblk3__BRA__9__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3858412453950341913ull);
    vlSelf->accum_block__DOT__genblk3__BRA__9__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7947311075773124483ull);
    vlSelf->accum_block__DOT__genblk3__BRA__9__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17464792317733532374ull);
    vlSelf->accum_block__DOT__genblk3__BRA__9__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15896673841284448626ull);
    vlSelf->accum_block__DOT__genblk3__BRA__10__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 440191201277757463ull);
    vlSelf->accum_block__DOT__genblk3__BRA__10__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2881287824175956336ull);
    vlSelf->accum_block__DOT__genblk3__BRA__10__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11744784361995960067ull);
    vlSelf->accum_block__DOT__genblk3__BRA__10__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11197943023138600536ull);
    vlSelf->accum_block__DOT__genblk3__BRA__10__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12823122986365091593ull);
    vlSelf->accum_block__DOT__genblk3__BRA__11__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18294236771011919778ull);
    vlSelf->accum_block__DOT__genblk3__BRA__11__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10059646975395629848ull);
    vlSelf->accum_block__DOT__genblk3__BRA__11__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18162212869293004295ull);
    vlSelf->accum_block__DOT__genblk3__BRA__11__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3251636705353032800ull);
    vlSelf->accum_block__DOT__genblk3__BRA__11__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17832509006471244617ull);
    vlSelf->accum_block__DOT__genblk3__BRA__12__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17054638460867925582ull);
    vlSelf->accum_block__DOT__genblk3__BRA__12__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14362666334678957835ull);
    vlSelf->accum_block__DOT__genblk3__BRA__12__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2044643861441467531ull);
    vlSelf->accum_block__DOT__genblk3__BRA__12__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12942465109155511804ull);
    vlSelf->accum_block__DOT__genblk3__BRA__12__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2321431738096065405ull);
    vlSelf->accum_block__DOT__genblk3__BRA__13__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5517894279423415465ull);
    vlSelf->accum_block__DOT__genblk3__BRA__13__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8839157455684874146ull);
    vlSelf->accum_block__DOT__genblk3__BRA__13__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13178310740446573273ull);
    vlSelf->accum_block__DOT__genblk3__BRA__13__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7093797892231349749ull);
    vlSelf->accum_block__DOT__genblk3__BRA__13__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11029428307831674689ull);
    vlSelf->accum_block__DOT__genblk3__BRA__14__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12454196746608240710ull);
    vlSelf->accum_block__DOT__genblk3__BRA__14__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16369339080695942112ull);
    vlSelf->accum_block__DOT__genblk3__BRA__14__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15849598580679173089ull);
    vlSelf->accum_block__DOT__genblk3__BRA__14__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10366625543828926186ull);
    vlSelf->accum_block__DOT__genblk3__BRA__14__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1253175375971899932ull);
    vlSelf->accum_block__DOT__genblk3__BRA__15__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17700361565432644169ull);
    vlSelf->accum_block__DOT__genblk3__BRA__15__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13248727795920736544ull);
    vlSelf->accum_block__DOT__genblk3__BRA__15__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16258843156818697020ull);
    vlSelf->accum_block__DOT__genblk3__BRA__15__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13494185042748079739ull);
    vlSelf->accum_block__DOT__genblk3__BRA__15__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12110058948844303377ull);
    vlSelf->accum_block__DOT__genblk4__BRA__0__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3505632508967555508ull);
    vlSelf->accum_block__DOT__genblk4__BRA__0__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7093255291036947291ull);
    vlSelf->accum_block__DOT__genblk4__BRA__0__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4451071638424413440ull);
    vlSelf->accum_block__DOT__genblk4__BRA__0__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16486856230835758269ull);
    vlSelf->accum_block__DOT__genblk4__BRA__0__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10781741194453904765ull);
    vlSelf->accum_block__DOT__genblk4__BRA__1__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1662024558729733960ull);
    vlSelf->accum_block__DOT__genblk4__BRA__1__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17813159341070630333ull);
    vlSelf->accum_block__DOT__genblk4__BRA__1__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11113547170816709136ull);
    vlSelf->accum_block__DOT__genblk4__BRA__1__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3288595341910767994ull);
    vlSelf->accum_block__DOT__genblk4__BRA__1__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17911004766158536236ull);
    vlSelf->accum_block__DOT__genblk4__BRA__2__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5377084097758537240ull);
    vlSelf->accum_block__DOT__genblk4__BRA__2__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2375720726876999392ull);
    vlSelf->accum_block__DOT__genblk4__BRA__2__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4523763091013403173ull);
    vlSelf->accum_block__DOT__genblk4__BRA__2__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11885462787816069552ull);
    vlSelf->accum_block__DOT__genblk4__BRA__2__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7053547285495590405ull);
    vlSelf->accum_block__DOT__genblk4__BRA__3__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10121568186391813273ull);
    vlSelf->accum_block__DOT__genblk4__BRA__3__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2665302801394027363ull);
    vlSelf->accum_block__DOT__genblk4__BRA__3__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11041591929845094920ull);
    vlSelf->accum_block__DOT__genblk4__BRA__3__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15198892187588505847ull);
    vlSelf->accum_block__DOT__genblk4__BRA__3__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5867036704742021427ull);
    vlSelf->accum_block__DOT__genblk4__BRA__4__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7183692612274014753ull);
    vlSelf->accum_block__DOT__genblk4__BRA__4__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6297035220252655064ull);
    vlSelf->accum_block__DOT__genblk4__BRA__4__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14167567692167943207ull);
    vlSelf->accum_block__DOT__genblk4__BRA__4__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6895496548452417698ull);
    vlSelf->accum_block__DOT__genblk4__BRA__4__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1088541206495973490ull);
    vlSelf->accum_block__DOT__genblk4__BRA__5__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6246509515075049800ull);
    vlSelf->accum_block__DOT__genblk4__BRA__5__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12867301063775244911ull);
    vlSelf->accum_block__DOT__genblk4__BRA__5__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14735259467965102618ull);
    vlSelf->accum_block__DOT__genblk4__BRA__5__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11946315499032226908ull);
    vlSelf->accum_block__DOT__genblk4__BRA__5__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1034199964034228459ull);
    vlSelf->accum_block__DOT__genblk4__BRA__6__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9113897386964127105ull);
    vlSelf->accum_block__DOT__genblk4__BRA__6__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13559187458292852236ull);
    vlSelf->accum_block__DOT__genblk4__BRA__6__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7830908452266243031ull);
    vlSelf->accum_block__DOT__genblk4__BRA__6__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4959489310349684573ull);
    vlSelf->accum_block__DOT__genblk4__BRA__6__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4963978179684876925ull);
    vlSelf->accum_block__DOT__genblk4__BRA__7__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2650031839959401414ull);
    vlSelf->accum_block__DOT__genblk4__BRA__7__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4264930958419016313ull);
    vlSelf->accum_block__DOT__genblk4__BRA__7__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10870900571915220131ull);
    vlSelf->accum_block__DOT__genblk4__BRA__7__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6923098676026464778ull);
    vlSelf->accum_block__DOT__genblk4__BRA__7__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11343948277683096255ull);
    vlSelf->accum_block__DOT__genblk4__BRA__8__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1442018487868177054ull);
    vlSelf->accum_block__DOT__genblk4__BRA__8__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6429769711762640562ull);
    vlSelf->accum_block__DOT__genblk4__BRA__8__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10669574703823231033ull);
    vlSelf->accum_block__DOT__genblk4__BRA__8__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9604793600712284296ull);
    vlSelf->accum_block__DOT__genblk4__BRA__8__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14230500807592793242ull);
    vlSelf->accum_block__DOT__genblk4__BRA__9__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9323692857781456354ull);
    vlSelf->accum_block__DOT__genblk4__BRA__9__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9179377923666851726ull);
    vlSelf->accum_block__DOT__genblk4__BRA__9__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11314093250699044388ull);
    vlSelf->accum_block__DOT__genblk4__BRA__9__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2899013513086040790ull);
    vlSelf->accum_block__DOT__genblk4__BRA__9__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2112032238368862415ull);
    vlSelf->accum_block__DOT__genblk4__BRA__10__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6022228359389524820ull);
    vlSelf->accum_block__DOT__genblk4__BRA__10__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7417946113541861674ull);
    vlSelf->accum_block__DOT__genblk4__BRA__10__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4573988536874698964ull);
    vlSelf->accum_block__DOT__genblk4__BRA__10__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11939333256174103249ull);
    vlSelf->accum_block__DOT__genblk4__BRA__10__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12391128840150308153ull);
    vlSelf->accum_block__DOT__genblk4__BRA__11__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9761123097597277226ull);
    vlSelf->accum_block__DOT__genblk4__BRA__11__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16950192813354716309ull);
    vlSelf->accum_block__DOT__genblk4__BRA__11__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8003932106108645859ull);
    vlSelf->accum_block__DOT__genblk4__BRA__11__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6470383809409493723ull);
    vlSelf->accum_block__DOT__genblk4__BRA__11__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3985132846890088056ull);
    vlSelf->accum_block__DOT__genblk4__BRA__12__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2335600072295065375ull);
    vlSelf->accum_block__DOT__genblk4__BRA__12__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14032899264756783129ull);
    vlSelf->accum_block__DOT__genblk4__BRA__12__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15669573482466537068ull);
    vlSelf->accum_block__DOT__genblk4__BRA__12__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16122445102534256770ull);
    vlSelf->accum_block__DOT__genblk4__BRA__12__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3821415187424072886ull);
    vlSelf->accum_block__DOT__genblk4__BRA__13__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7028656046439693827ull);
    vlSelf->accum_block__DOT__genblk4__BRA__13__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12351584293329762202ull);
    vlSelf->accum_block__DOT__genblk4__BRA__13__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7681877245257140169ull);
    vlSelf->accum_block__DOT__genblk4__BRA__13__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8860027515272866029ull);
    vlSelf->accum_block__DOT__genblk4__BRA__13__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9710804087532610037ull);
    vlSelf->accum_block__DOT__genblk4__BRA__14__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13507740902548977921ull);
    vlSelf->accum_block__DOT__genblk4__BRA__14__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18382494071579052340ull);
    vlSelf->accum_block__DOT__genblk4__BRA__14__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6490125345723523871ull);
    vlSelf->accum_block__DOT__genblk4__BRA__14__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13617745146153337290ull);
    vlSelf->accum_block__DOT__genblk4__BRA__14__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5740986071828054228ull);
    vlSelf->accum_block__DOT__genblk4__BRA__15__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11115622546072420781ull);
    vlSelf->accum_block__DOT__genblk4__BRA__15__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10362448169796152856ull);
    vlSelf->accum_block__DOT__genblk4__BRA__15__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10656254847405093024ull);
    vlSelf->accum_block__DOT__genblk4__BRA__15__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13316278476710583046ull);
    vlSelf->accum_block__DOT__genblk4__BRA__15__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11257001194755819100ull);
    vlSelf->accum_block__DOT__genblk5__BRA__0__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17269004014692644983ull);
    vlSelf->accum_block__DOT__genblk5__BRA__0__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2588252932958816674ull);
    vlSelf->accum_block__DOT__genblk5__BRA__0__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17468243723536736810ull);
    vlSelf->accum_block__DOT__genblk5__BRA__0__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16465840345635708657ull);
    vlSelf->accum_block__DOT__genblk5__BRA__0__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8403977560890922880ull);
    vlSelf->accum_block__DOT__genblk5__BRA__1__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3251906200384949966ull);
    vlSelf->accum_block__DOT__genblk5__BRA__1__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13075319866994397722ull);
    vlSelf->accum_block__DOT__genblk5__BRA__1__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2436425810591035257ull);
    vlSelf->accum_block__DOT__genblk5__BRA__1__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2117681597813622782ull);
    vlSelf->accum_block__DOT__genblk5__BRA__1__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10005366211880021941ull);
    vlSelf->accum_block__DOT__genblk5__BRA__2__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3407443386152197134ull);
    vlSelf->accum_block__DOT__genblk5__BRA__2__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1727684105053039674ull);
    vlSelf->accum_block__DOT__genblk5__BRA__2__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3287684985086653423ull);
    vlSelf->accum_block__DOT__genblk5__BRA__2__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 890806700494983423ull);
    vlSelf->accum_block__DOT__genblk5__BRA__2__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 179066283037696762ull);
    vlSelf->accum_block__DOT__genblk5__BRA__3__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7196336231057847124ull);
    vlSelf->accum_block__DOT__genblk5__BRA__3__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10483043042955849020ull);
    vlSelf->accum_block__DOT__genblk5__BRA__3__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12066212426176382802ull);
    vlSelf->accum_block__DOT__genblk5__BRA__3__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7144126376513316281ull);
    vlSelf->accum_block__DOT__genblk5__BRA__3__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12828541010321270268ull);
    vlSelf->accum_block__DOT__genblk5__BRA__4__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2177838536438508069ull);
    vlSelf->accum_block__DOT__genblk5__BRA__4__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13221491136393074777ull);
    vlSelf->accum_block__DOT__genblk5__BRA__4__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6196291415827349793ull);
    vlSelf->accum_block__DOT__genblk5__BRA__4__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8380541739876686870ull);
    vlSelf->accum_block__DOT__genblk5__BRA__4__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 957648010377781619ull);
    vlSelf->accum_block__DOT__genblk5__BRA__5__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9169756691438551280ull);
    vlSelf->accum_block__DOT__genblk5__BRA__5__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9166175579047731336ull);
    vlSelf->accum_block__DOT__genblk5__BRA__5__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 659623391539337760ull);
    vlSelf->accum_block__DOT__genblk5__BRA__5__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6484680535811131313ull);
    vlSelf->accum_block__DOT__genblk5__BRA__5__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7555967885705122224ull);
    vlSelf->accum_block__DOT__genblk5__BRA__6__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2910405331237404418ull);
    vlSelf->accum_block__DOT__genblk5__BRA__6__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5366785572915028668ull);
    vlSelf->accum_block__DOT__genblk5__BRA__6__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2125302225102425109ull);
    vlSelf->accum_block__DOT__genblk5__BRA__6__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 272569581953056627ull);
    vlSelf->accum_block__DOT__genblk5__BRA__6__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12091882484886329306ull);
    vlSelf->accum_block__DOT__genblk5__BRA__7__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17293207170431870221ull);
    vlSelf->accum_block__DOT__genblk5__BRA__7__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 123622376784285863ull);
    vlSelf->accum_block__DOT__genblk5__BRA__7__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1803060712246241474ull);
    vlSelf->accum_block__DOT__genblk5__BRA__7__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15559966075065212352ull);
    vlSelf->accum_block__DOT__genblk5__BRA__7__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14545997872525957156ull);
    vlSelf->accum_block__DOT__genblk5__BRA__8__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15304426972806430473ull);
    vlSelf->accum_block__DOT__genblk5__BRA__8__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7470346614626444988ull);
    vlSelf->accum_block__DOT__genblk5__BRA__8__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 502469239644801ull);
    vlSelf->accum_block__DOT__genblk5__BRA__8__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9472309811731531222ull);
    vlSelf->accum_block__DOT__genblk5__BRA__8__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12522792618158553004ull);
    vlSelf->accum_block__DOT__genblk5__BRA__9__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13313567188506685755ull);
    vlSelf->accum_block__DOT__genblk5__BRA__9__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11867861664962206770ull);
    vlSelf->accum_block__DOT__genblk5__BRA__9__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13880123881504286062ull);
    vlSelf->accum_block__DOT__genblk5__BRA__9__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10865771945021495125ull);
    vlSelf->accum_block__DOT__genblk5__BRA__9__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6572864002970778221ull);
    vlSelf->accum_block__DOT__genblk5__BRA__10__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3675545145588728275ull);
    vlSelf->accum_block__DOT__genblk5__BRA__10__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15766101764945274434ull);
    vlSelf->accum_block__DOT__genblk5__BRA__10__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4946569625772380954ull);
    vlSelf->accum_block__DOT__genblk5__BRA__10__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14225732436820121335ull);
    vlSelf->accum_block__DOT__genblk5__BRA__10__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11459097161375528667ull);
    vlSelf->accum_block__DOT__genblk5__BRA__11__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17155521184089712404ull);
    vlSelf->accum_block__DOT__genblk5__BRA__11__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6992734637338234076ull);
    vlSelf->accum_block__DOT__genblk5__BRA__11__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3746716714680312052ull);
    vlSelf->accum_block__DOT__genblk5__BRA__11__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6832269115015529154ull);
    vlSelf->accum_block__DOT__genblk5__BRA__11__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8222916583848993510ull);
    vlSelf->accum_block__DOT__genblk5__BRA__12__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8150354078401059798ull);
    vlSelf->accum_block__DOT__genblk5__BRA__12__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12499114441585768277ull);
    vlSelf->accum_block__DOT__genblk5__BRA__12__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13015957759389754458ull);
    vlSelf->accum_block__DOT__genblk5__BRA__12__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8636832209011160336ull);
    vlSelf->accum_block__DOT__genblk5__BRA__12__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13375729769815593052ull);
    vlSelf->accum_block__DOT__genblk5__BRA__13__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7637525740869897210ull);
    vlSelf->accum_block__DOT__genblk5__BRA__13__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8434273780059638656ull);
    vlSelf->accum_block__DOT__genblk5__BRA__13__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7493389139851843859ull);
    vlSelf->accum_block__DOT__genblk5__BRA__13__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8621089794892943782ull);
    vlSelf->accum_block__DOT__genblk5__BRA__13__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11277317753997651199ull);
    vlSelf->accum_block__DOT__genblk5__BRA__14__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9261843646717204300ull);
    vlSelf->accum_block__DOT__genblk5__BRA__14__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9212314044956329217ull);
    vlSelf->accum_block__DOT__genblk5__BRA__14__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2081733461558741818ull);
    vlSelf->accum_block__DOT__genblk5__BRA__14__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1702426129037192662ull);
    vlSelf->accum_block__DOT__genblk5__BRA__14__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10663354579163908789ull);
    vlSelf->accum_block__DOT__genblk5__BRA__15__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1003498906927837196ull);
    vlSelf->accum_block__DOT__genblk5__BRA__15__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6395411647732570459ull);
    vlSelf->accum_block__DOT__genblk5__BRA__15__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1664828352756075703ull);
    vlSelf->accum_block__DOT__genblk5__BRA__15__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 72296113948372590ull);
    vlSelf->accum_block__DOT__genblk5__BRA__15__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10379048353327334850ull);
    vlSelf->accum_block__DOT__genblk6__BRA__0__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7775850078158894566ull);
    vlSelf->accum_block__DOT__genblk6__BRA__0__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18206103031624245506ull);
    vlSelf->accum_block__DOT__genblk6__BRA__0__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11328427916174659410ull);
    vlSelf->accum_block__DOT__genblk6__BRA__0__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9307538464374025562ull);
    vlSelf->accum_block__DOT__genblk6__BRA__0__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5429127110331845871ull);
    vlSelf->accum_block__DOT__genblk6__BRA__1__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6417048263796989855ull);
    vlSelf->accum_block__DOT__genblk6__BRA__1__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12428315395082526245ull);
    vlSelf->accum_block__DOT__genblk6__BRA__1__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5950698644063333739ull);
    vlSelf->accum_block__DOT__genblk6__BRA__1__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11983765556775050442ull);
    vlSelf->accum_block__DOT__genblk6__BRA__1__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17888884255342916499ull);
    vlSelf->accum_block__DOT__genblk6__BRA__2__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6741533735527343583ull);
    vlSelf->accum_block__DOT__genblk6__BRA__2__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11517943289941332874ull);
    vlSelf->accum_block__DOT__genblk6__BRA__2__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10196592171194635168ull);
    vlSelf->accum_block__DOT__genblk6__BRA__2__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9002579287061532539ull);
    vlSelf->accum_block__DOT__genblk6__BRA__2__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5733987700367288754ull);
    vlSelf->accum_block__DOT__genblk6__BRA__3__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12761054925672133322ull);
    vlSelf->accum_block__DOT__genblk6__BRA__3__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17905278392023190383ull);
    vlSelf->accum_block__DOT__genblk6__BRA__3__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13029075646088288765ull);
    vlSelf->accum_block__DOT__genblk6__BRA__3__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11015232965905235403ull);
    vlSelf->accum_block__DOT__genblk6__BRA__3__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8512100217008508386ull);
    vlSelf->accum_block__DOT__genblk6__BRA__4__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18018409194098990366ull);
    vlSelf->accum_block__DOT__genblk6__BRA__4__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18102965022312793401ull);
    vlSelf->accum_block__DOT__genblk6__BRA__4__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9830747095318478536ull);
    vlSelf->accum_block__DOT__genblk6__BRA__4__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7101835751760280101ull);
    vlSelf->accum_block__DOT__genblk6__BRA__4__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13403089881116666877ull);
    vlSelf->accum_block__DOT__genblk6__BRA__5__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4825312147513602674ull);
    vlSelf->accum_block__DOT__genblk6__BRA__5__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14647936528523555052ull);
    vlSelf->accum_block__DOT__genblk6__BRA__5__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18254038391519091139ull);
    vlSelf->accum_block__DOT__genblk6__BRA__5__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4464544238830136707ull);
    vlSelf->accum_block__DOT__genblk6__BRA__5__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13281295819456749387ull);
    vlSelf->accum_block__DOT__genblk6__BRA__6__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4823613497765553022ull);
    vlSelf->accum_block__DOT__genblk6__BRA__6__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8420754589676686970ull);
    vlSelf->accum_block__DOT__genblk6__BRA__6__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18284426521162001790ull);
    vlSelf->accum_block__DOT__genblk6__BRA__6__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10225849211389221958ull);
    vlSelf->accum_block__DOT__genblk6__BRA__6__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4771823572021927999ull);
    vlSelf->accum_block__DOT__genblk6__BRA__7__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17884692281604315043ull);
    vlSelf->accum_block__DOT__genblk6__BRA__7__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8899615245167252466ull);
    vlSelf->accum_block__DOT__genblk6__BRA__7__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11652150246358620720ull);
    vlSelf->accum_block__DOT__genblk6__BRA__7__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11272827994441549737ull);
    vlSelf->accum_block__DOT__genblk6__BRA__7__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6515521993136749975ull);
    vlSelf->accum_block__DOT__genblk6__BRA__8__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9026632572428833206ull);
    vlSelf->accum_block__DOT__genblk6__BRA__8__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 804641178046894890ull);
    vlSelf->accum_block__DOT__genblk6__BRA__8__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10144702207933331146ull);
    vlSelf->accum_block__DOT__genblk6__BRA__8__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15641661849336431415ull);
    vlSelf->accum_block__DOT__genblk6__BRA__8__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7148549109972234819ull);
    vlSelf->accum_block__DOT__genblk6__BRA__9__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4764808983388691148ull);
    vlSelf->accum_block__DOT__genblk6__BRA__9__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17879511960802660674ull);
    vlSelf->accum_block__DOT__genblk6__BRA__9__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18216582736926214887ull);
    vlSelf->accum_block__DOT__genblk6__BRA__9__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4218764471989524546ull);
    vlSelf->accum_block__DOT__genblk6__BRA__9__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14355728717868577008ull);
    vlSelf->accum_block__DOT__genblk6__BRA__10__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10233038570075849792ull);
    vlSelf->accum_block__DOT__genblk6__BRA__10__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9050066525465893475ull);
    vlSelf->accum_block__DOT__genblk6__BRA__10__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11609357856952460175ull);
    vlSelf->accum_block__DOT__genblk6__BRA__10__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15679434575992861016ull);
    vlSelf->accum_block__DOT__genblk6__BRA__10__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3079531736168296552ull);
    vlSelf->accum_block__DOT__genblk6__BRA__11__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5014273557695570419ull);
    vlSelf->accum_block__DOT__genblk6__BRA__11__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4909826304969474244ull);
    vlSelf->accum_block__DOT__genblk6__BRA__11__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1350716512105288935ull);
    vlSelf->accum_block__DOT__genblk6__BRA__11__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 488472551955224394ull);
    vlSelf->accum_block__DOT__genblk6__BRA__11__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8694981178731212542ull);
    vlSelf->accum_block__DOT__genblk6__BRA__12__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12172964799384045852ull);
    vlSelf->accum_block__DOT__genblk6__BRA__12__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3297597549968743961ull);
    vlSelf->accum_block__DOT__genblk6__BRA__12__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2840871714900743758ull);
    vlSelf->accum_block__DOT__genblk6__BRA__12__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11076526277788688362ull);
    vlSelf->accum_block__DOT__genblk6__BRA__12__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2461084478415392373ull);
    vlSelf->accum_block__DOT__genblk6__BRA__13__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12538425592949194401ull);
    vlSelf->accum_block__DOT__genblk6__BRA__13__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15942417001304432363ull);
    vlSelf->accum_block__DOT__genblk6__BRA__13__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5440284649067385548ull);
    vlSelf->accum_block__DOT__genblk6__BRA__13__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10247015917266941057ull);
    vlSelf->accum_block__DOT__genblk6__BRA__13__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1583364170621021180ull);
    vlSelf->accum_block__DOT__genblk6__BRA__14__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13923015577967958989ull);
    vlSelf->accum_block__DOT__genblk6__BRA__14__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6105751113441452450ull);
    vlSelf->accum_block__DOT__genblk6__BRA__14__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7731067044254942828ull);
    vlSelf->accum_block__DOT__genblk6__BRA__14__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13802572483234748903ull);
    vlSelf->accum_block__DOT__genblk6__BRA__14__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14892774080673916202ull);
    vlSelf->accum_block__DOT__genblk6__BRA__15__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3575537267034076318ull);
    vlSelf->accum_block__DOT__genblk6__BRA__15__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4184915903095949783ull);
    vlSelf->accum_block__DOT__genblk6__BRA__15__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6821418475804119923ull);
    vlSelf->accum_block__DOT__genblk6__BRA__15__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17981340546675103615ull);
    vlSelf->accum_block__DOT__genblk6__BRA__15__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15745514985376666588ull);
    vlSelf->accum_block__DOT__genblk7__BRA__0__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10430805738567426782ull);
    vlSelf->accum_block__DOT__genblk7__BRA__0__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14829800409661034517ull);
    vlSelf->accum_block__DOT__genblk7__BRA__0__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12293753447379941669ull);
    vlSelf->accum_block__DOT__genblk7__BRA__0__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4390903262657747064ull);
    vlSelf->accum_block__DOT__genblk7__BRA__0__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1320004092934574270ull);
    vlSelf->accum_block__DOT__genblk7__BRA__1__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3126793794655541689ull);
    vlSelf->accum_block__DOT__genblk7__BRA__1__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3067069772129486028ull);
    vlSelf->accum_block__DOT__genblk7__BRA__1__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16143877610185433124ull);
    vlSelf->accum_block__DOT__genblk7__BRA__1__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11697442567211592252ull);
    vlSelf->accum_block__DOT__genblk7__BRA__1__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 377728899788362540ull);
    vlSelf->accum_block__DOT__genblk7__BRA__2__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12556365504592109846ull);
    vlSelf->accum_block__DOT__genblk7__BRA__2__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 591151678599831258ull);
    vlSelf->accum_block__DOT__genblk7__BRA__2__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16624008639446415679ull);
    vlSelf->accum_block__DOT__genblk7__BRA__2__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17883178196657617896ull);
    vlSelf->accum_block__DOT__genblk7__BRA__2__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2668704277885737811ull);
    vlSelf->accum_block__DOT__genblk7__BRA__3__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18361331442498404264ull);
    vlSelf->accum_block__DOT__genblk7__BRA__3__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1970865474096577305ull);
    vlSelf->accum_block__DOT__genblk7__BRA__3__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 623728979860876322ull);
    vlSelf->accum_block__DOT__genblk7__BRA__3__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15192271755187662456ull);
    vlSelf->accum_block__DOT__genblk7__BRA__3__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12089056685958032692ull);
    vlSelf->accum_block__DOT__genblk7__BRA__4__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11875638394228695796ull);
    vlSelf->accum_block__DOT__genblk7__BRA__4__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14487583202072675361ull);
    vlSelf->accum_block__DOT__genblk7__BRA__4__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5667664155397926455ull);
    vlSelf->accum_block__DOT__genblk7__BRA__4__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7364241758616557909ull);
    vlSelf->accum_block__DOT__genblk7__BRA__4__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17832588238801826942ull);
    vlSelf->accum_block__DOT__genblk7__BRA__5__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7272635685919950321ull);
    vlSelf->accum_block__DOT__genblk7__BRA__5__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 382403716965167444ull);
    vlSelf->accum_block__DOT__genblk7__BRA__5__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5462818883967515195ull);
    vlSelf->accum_block__DOT__genblk7__BRA__5__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13240798765128386593ull);
    vlSelf->accum_block__DOT__genblk7__BRA__5__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1946585430444130738ull);
    vlSelf->accum_block__DOT__genblk7__BRA__6__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8670365742766108232ull);
    vlSelf->accum_block__DOT__genblk7__BRA__6__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10465037270563869971ull);
    vlSelf->accum_block__DOT__genblk7__BRA__6__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 79733095865648676ull);
    vlSelf->accum_block__DOT__genblk7__BRA__6__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10991574828388708088ull);
    vlSelf->accum_block__DOT__genblk7__BRA__6__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5026618503210249631ull);
    vlSelf->accum_block__DOT__genblk7__BRA__7__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12603277470008835694ull);
    vlSelf->accum_block__DOT__genblk7__BRA__7__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8437853082012157057ull);
    vlSelf->accum_block__DOT__genblk7__BRA__7__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8485345828510783436ull);
    vlSelf->accum_block__DOT__genblk7__BRA__7__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12550246215987290945ull);
    vlSelf->accum_block__DOT__genblk7__BRA__7__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3022375405265356978ull);
    vlSelf->accum_block__DOT__genblk7__BRA__8__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5026970284407367934ull);
    vlSelf->accum_block__DOT__genblk7__BRA__8__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5678843182845456738ull);
    vlSelf->accum_block__DOT__genblk7__BRA__8__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5190612310183017732ull);
    vlSelf->accum_block__DOT__genblk7__BRA__8__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4096336893167983090ull);
    vlSelf->accum_block__DOT__genblk7__BRA__8__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5345816785939437423ull);
    vlSelf->accum_block__DOT__genblk7__BRA__9__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 178056729455123900ull);
    vlSelf->accum_block__DOT__genblk7__BRA__9__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11946900841522349286ull);
    vlSelf->accum_block__DOT__genblk7__BRA__9__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7540435174241754162ull);
    vlSelf->accum_block__DOT__genblk7__BRA__9__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3439544786370392978ull);
    vlSelf->accum_block__DOT__genblk7__BRA__9__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15509714779847336672ull);
    vlSelf->accum_block__DOT__genblk7__BRA__10__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3244410452953349814ull);
    vlSelf->accum_block__DOT__genblk7__BRA__10__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12035810117228466605ull);
    vlSelf->accum_block__DOT__genblk7__BRA__10__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12992995643801690792ull);
    vlSelf->accum_block__DOT__genblk7__BRA__10__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17750839075192247143ull);
    vlSelf->accum_block__DOT__genblk7__BRA__10__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2270834216482302432ull);
    vlSelf->accum_block__DOT__genblk7__BRA__11__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2884126369801453339ull);
    vlSelf->accum_block__DOT__genblk7__BRA__11__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13539404646601276955ull);
    vlSelf->accum_block__DOT__genblk7__BRA__11__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5055251838300988541ull);
    vlSelf->accum_block__DOT__genblk7__BRA__11__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2139586991959895644ull);
    vlSelf->accum_block__DOT__genblk7__BRA__11__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 242054301252064166ull);
    vlSelf->accum_block__DOT__genblk7__BRA__12__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14379749122587526631ull);
    vlSelf->accum_block__DOT__genblk7__BRA__12__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11913668983286355463ull);
    vlSelf->accum_block__DOT__genblk7__BRA__12__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8137154231474584001ull);
    vlSelf->accum_block__DOT__genblk7__BRA__12__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17500789793116065620ull);
    vlSelf->accum_block__DOT__genblk7__BRA__12__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7614364474322346324ull);
    vlSelf->accum_block__DOT__genblk7__BRA__13__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3278640123707544753ull);
    vlSelf->accum_block__DOT__genblk7__BRA__13__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7038217891628729463ull);
    vlSelf->accum_block__DOT__genblk7__BRA__13__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16028325822187879230ull);
    vlSelf->accum_block__DOT__genblk7__BRA__13__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1191068920928103959ull);
    vlSelf->accum_block__DOT__genblk7__BRA__13__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2232193086247288786ull);
    vlSelf->accum_block__DOT__genblk7__BRA__14__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17470533381332968619ull);
    vlSelf->accum_block__DOT__genblk7__BRA__14__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1534682462884442790ull);
    vlSelf->accum_block__DOT__genblk7__BRA__14__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10391027522846536365ull);
    vlSelf->accum_block__DOT__genblk7__BRA__14__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2039461246524808444ull);
    vlSelf->accum_block__DOT__genblk7__BRA__14__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6293699714218752263ull);
    vlSelf->accum_block__DOT__genblk7__BRA__15__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6303498641159109372ull);
    vlSelf->accum_block__DOT__genblk7__BRA__15__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13358065213259517411ull);
    vlSelf->accum_block__DOT__genblk7__BRA__15__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16782969168687409419ull);
    vlSelf->accum_block__DOT__genblk7__BRA__15__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4325762740310186176ull);
    vlSelf->accum_block__DOT__genblk7__BRA__15__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10019301017948101754ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__accum_block__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
