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
            VL_FATAL_MT("/mnt/c/Users/immkb/Desktop/FPGA_stuff/GIT_REPOS/DE25_Nano_Image_Processing_IP/test_accum_stage/rtl/accum_block.sv", 1, "", "DIDNOTCONVERGE: Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vtop___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
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
    Vtop___024root___eval_triggers__stl(vlSelf);
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
    VL_SCOPED_RAND_RESET_W(96, vlSelf->accum_block__DOT__s1_temp, __VscopeHash, 11474457885643263371ull);
    VL_SCOPED_RAND_RESET_W(96, vlSelf->accum_block__DOT__s1, __VscopeHash, 12752032417973947285ull);
    vlSelf->accum_block__DOT__s1_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2350262000984248391ull);
    vlSelf->accum_block__DOT__s2_temp = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 18155566497475210653ull);
    vlSelf->accum_block__DOT__s2 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8680478710888454422ull);
    vlSelf->accum_block__DOT__s2_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12839367657042713103ull);
    vlSelf->accum_block__DOT__s3_temp = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 4217837021683334865ull);
    vlSelf->accum_block__DOT__s3 = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 11523384501882467281ull);
    vlSelf->accum_block__DOT__s3_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10797749093513902002ull);
    vlSelf->accum_block__DOT__s4_temp = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8392542940225757621ull);
    vlSelf->accum_block__DOT__s4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12172097516355485138ull);
    vlSelf->accum_block__DOT__s4_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17491609414297399918ull);
    vlSelf->accum_block__DOT__s5_temp = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14037447537530728601ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2884795726688599882ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10966827194026929770ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4531924856412684271ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16687876428774251249ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10454988865765133029ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5651494491912409482ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11539960034870489388ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13310804836876841019ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6725941376820682107ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17451117494837999730ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14252616002014886962ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10003263444781748526ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3814660500051431002ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7410823507723589540ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3742738784334676370ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17564516855075676880ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8486302930944831880ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7892844672104164582ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1266821929438931394ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17940870686670469868ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15404200516212156963ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5187629327795362421ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4807976879975522053ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9413606002922288405ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13345348047424558721ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14893877329745434196ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11934105341535457644ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1887614915775256615ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11507771282834832289ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2573005135412560602ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16597376176301009435ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16790062346558380947ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12113697691537974956ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14087787107569784514ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16014704614330801471ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8286300392980527462ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9996683769644719679ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15770760368740325042ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9346084913718247544ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2617251300880242915ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11606779924868288698ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5634907743912790262ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 841036106529196979ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3743392203170369156ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9997871431279309380ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2811624377902350759ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6682170457054044926ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11000635495303422122ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12336847836749156913ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10713966328391455278ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 83363381599068898ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13885215744035718864ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8643873353302678402ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17694726118770274006ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8860512332168250901ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3965974829185006874ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14931334518552259550ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11276392317197093259ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7629740633079547585ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7376703540140646407ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16113947808626421030ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1813587454852622826ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12179620528413928861ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6640169753432878583ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1899696076735165942ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17665810640994666761ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12462978235172334170ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6751359010558772273ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14536963919951879213ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1457546990385273820ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10021821930543473489ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5055835186346965105ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7169900523941560416ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16002730709823417358ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2921794948936625400ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17295509428731823591ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12791693079473463964ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6626523010928615036ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15058279299562335571ull);
    vlSelf->accum_block__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7078029109898368214ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2569095059602153790ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15476842677737894904ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12439647912005355969ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1174432925846810476ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13188910539076005524ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15960147059835222270ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14296168191053205776ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15908019253138648742ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6067466781323187931ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8651135797960097149ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17280780307546157595ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10617707471165179798ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4106753892375700574ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5261183831020422723ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6007031539819478982ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13865485392906995196ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17645846870711452599ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5658196993512266985ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1453705168568234ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17675534888171856502ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9352574187887206697ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1225631801193559561ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7779000605072301032ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12705824093129351715ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3250355363951099957ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2848730790182422784ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5493839388781628152ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17205389340959529705ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13364276531153064330ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12536134113322039225ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11124896854891595327ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6732207283863321060ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1054007524648989664ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 915146543632612345ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10092217134434929276ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9715624363688413793ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10364337378161424493ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7815310961336730979ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 935821469287756045ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10324901625570979549ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8802693816283423383ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15734350677759007019ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5054375477186637584ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8670186980848784747ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2026674080207191025ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6996838145583186095ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5698660688650006562ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11401588577109073512ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11923863792871846691ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10105834564829610482ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6036929454861184094ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10611893218004784504ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1112284949971083850ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10701844485404580413ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15362166161538653542ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3467141968604276527ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2285224326340181995ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7429434252262825883ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6036917169207371774ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12865123875438471257ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15537509320976945419ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17492965161299180911ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10678200204835888210ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17493295350175200198ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5343019440759653718ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2250335568457191001ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14102629016467022295ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17357433098837999980ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13624744578530495905ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4285601095036634283ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11969634031747206982ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16850426109801162728ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6066050309859792577ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17782448025334907636ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13685346880464826889ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18192889105338193909ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12140334942313331797ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1465099310270991094ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10166457329660393272ull);
    vlSelf->accum_block__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 290365581275346223ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14136627502492814839ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12157631932071278713ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18378795965080535878ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16189453044166407461ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9937582051951349071ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10481187592402354008ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8615239649571612077ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6332389852537982199ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5533706515834794563ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15290248770116079981ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12214259185173997611ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6215316935666548029ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17555749457592118982ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15527813160867689135ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8908084272454837939ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5871849688901226248ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7850845259322970996ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5080992934477959416ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14382654192316661795ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5262412076795093688ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14365618396342155459ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15912695907253757204ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2422135606632543466ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11599114433934494119ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7681718331287336383ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2791773889202471389ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5857499280400748643ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16060925403213233902ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12389308213394284714ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11081652125517377948ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18227805432034554316ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7367344158692181707ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13931530188468577848ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8798063226380328317ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7195290204679698187ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9028376562492660892ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 841462968982157981ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13803818768708623055ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7373271901975756515ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12082433400924969099ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7760505975052222682ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6943264159199265291ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13898806921101200373ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9758413865760403770ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7165406455339341845ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14458470672116182835ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16954554288441370714ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3457143773206134991ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5039619147725359277ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14529604403449580593ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5569755689059229263ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3254684708751738011ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15748463823350642820ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8167467111941212877ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17598055999095740710ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4814441446632610164ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14145091142229535128ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 373292628446362730ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1910776321416748728ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1990891510966870199ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14195540709037864490ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4518466470733925588ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12224900846101787578ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17166932274224620181ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12131206081478096793ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 940384530463678293ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12126289228733006252ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2355428040592258695ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15026697035360841723ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 717557844909893530ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5237166235720506049ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8740750156931139665ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14940048616515296233ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15287279508984229175ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4425073392104728942ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10785330105199297376ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15716702061702875489ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3770487009874231624ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6230389661326074515ull);
    vlSelf->accum_block__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 422783374579210306ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3893814526451102754ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1681685813570303449ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11876044597516306339ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11565479221460830741ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17348098670556513837ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7422494906382828115ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17965359674930501361ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2055203454754406517ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8350739708165518272ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17246448921998985462ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2565259454822174978ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13822051795796695157ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11633317245713596730ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 845017925479802464ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14747484449526403699ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14685014590654130844ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16439142900128944371ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10699256144586559796ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9845672577181877201ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6987776254373400283ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13429536820659522003ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4757195662919200277ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12640183107979198451ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8563478050664093233ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3199386282674880479ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5772818148327599746ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2792266523765726671ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1390637693433108447ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11542302916433642680ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10483061397441000026ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10784308980115444818ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6233303769868859905ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12520018645305965191ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 843672946241658039ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14998670929382440360ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17412311922322044387ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9540556241563694116ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11717654941771281708ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1040156585716539351ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10490782452298456862ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17768527806956305920ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16462929091932591155ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9025275229185502738ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5144702014398789315ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12766361340496998571ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15126885327209472903ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3659502828523539196ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1081320311241629690ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15177192342210606094ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12770033010582243867ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8847861413729445455ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2607044487911165146ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11056554338020005243ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8416390988367322442ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15948173102356100112ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15239549234984711051ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4931999641506742265ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5080666532048298971ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17699489133657238062ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16882241430575861761ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9397209968771067772ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8702438919199899023ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6223971604830691323ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6069028401951697344ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13578905685270519548ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6847817972560727960ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 717260550505420910ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13560677548526140322ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9949947937080277534ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14803388760253879459ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 166164801629729631ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7925529918469118343ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15348780348725749258ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9470595710562979491ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7651207162996386664ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15248622350005273390ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9802591780362029484ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12060815955793902510ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7843035590877706985ull);
    vlSelf->accum_block__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12839230872123708455ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14951003501097841685ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1120856703370322363ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 292170306264070199ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10690870285969414259ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6475018777061909963ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1686980306171905439ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17496208309269807656ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10249291852943185395ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13032157041988732769ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5579504201349817358ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4007979960612224383ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5619161619096799838ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2542201949948843509ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7544243705808869240ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6066914480676154270ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2192498031024109617ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 240786520192112707ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13266292989714069671ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11903678280951119226ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16831799734505562595ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7919342781879365510ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12871063042328105611ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13375696735181216012ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1949983487185368778ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 42666040266317391ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7260668147742716846ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6791552492467663795ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11100818615259472242ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1195497337084170557ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4499985216836372418ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12090641426504333691ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16705754564567219460ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10180582665590380577ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1423102812755465220ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 960037899645066956ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9674430664810034915ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13326612016130990333ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 93764384108870303ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18270468098602008200ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6990268801848042333ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9123860017925664678ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7312868666957948170ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13742153939038684682ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6225263035015148471ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1839854383287970024ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15847093099022877970ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16206334511469586280ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3585444498769697130ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10136342661385368161ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1221402914778223787ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5160357834218049061ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18161071338284420827ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3757959492585837625ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13013254722040904987ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15748430079331091418ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10491718220088493773ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10538653325675353122ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17514675225837535185ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2601628328321173688ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9467770680104685426ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18326098261370212957ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10378028429842945117ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15497064625273840270ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4335131854251948869ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__12__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5112144847861316756ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5825057056965093532ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5551250441657279891ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12324261779805301077ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10882596342589831416ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15417538709804509231ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3781241399595562435ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16487576627261556805ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12805423496115663452ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17641930356771309917ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__14__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14571136344981660546ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1778552160340975274ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8491513633002332174ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5373900290357046556ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 979269749414658653ull);
    vlSelf->accum_block__DOT__genblk2__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__fa__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10382771692358836390ull);
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
