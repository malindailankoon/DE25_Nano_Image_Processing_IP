// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__multiply_block__DOT__m8__DOT__clk__0 
        = vlSelfRef.multiply_block__DOT__m8__DOT__clk;
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
            VL_FATAL_MT("/mnt/c/Users/immkb/Desktop/FPGA_stuff/GIT_REPOS/DE25_Nano_Image_Processing_IP/test_mult_block/rtl/multiply_block.sv", 1, "", "DIDNOTCONVERGE: Settle region did not converge after 100 tries");
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
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge multiply_block.m8.clk)\n");
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
    vlSelf->pixel_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 548995664368815658ull);
    vlSelf->kernel_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16308159319507046097ull);
    vlSelf->input_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4270309033785105452ull);
    vlSelf->output_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14078276386344907199ull);
    vlSelf->multiply_out = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4206560402344264270ull);
    vlSelf->multiply_block__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 941381840813354745ull);
    vlSelf->multiply_block__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1939435245603239715ull);
    vlSelf->multiply_block__DOT__pixel_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11464362570705630884ull);
    vlSelf->multiply_block__DOT__kernel_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18112615112526759219ull);
    vlSelf->multiply_block__DOT__input_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5574179055222693955ull);
    vlSelf->multiply_block__DOT__output_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7015648769778859420ull);
    vlSelf->multiply_block__DOT__multiply_out = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2726414817637787682ull);
    vlSelf->multiply_block__DOT__s2u_to_mult8 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7387501160277702750ull);
    vlSelf->multiply_block__DOT__is_neg_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12253739121295779927ull);
    vlSelf->multiply_block__DOT__is_neg_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 276511434325653649ull);
    vlSelf->multiply_block__DOT__mo = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17928498875844604761ull);
    vlSelf->multiply_block__DOT__s2u_inst__DOT__in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7086175113644826621ull);
    vlSelf->multiply_block__DOT__s2u_inst__DOT__out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8431745130349557133ull);
    vlSelf->multiply_block__DOT__s2u_inst__DOT__is_neg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16113891458780146310ull);
    vlSelf->multiply_block__DOT__m8__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6867953738394361700ull);
    vlSelf->multiply_block__DOT__m8__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9368533521079526562ull);
    vlSelf->multiply_block__DOT__m8__DOT__is_neg_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 477181252008387841ull);
    vlSelf->multiply_block__DOT__m8__DOT__is_neg_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15447350617042888541ull);
    vlSelf->multiply_block__DOT__m8__DOT__a = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11436861996876720632ull);
    vlSelf->multiply_block__DOT__m8__DOT__b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12030778078707618448ull);
    vlSelf->multiply_block__DOT__m8__DOT__in_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4453329960631468184ull);
    vlSelf->multiply_block__DOT__m8__DOT__out = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8846943555635015695ull);
    vlSelf->multiply_block__DOT__m8__DOT__output_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8599154878957760928ull);
    vlSelf->multiply_block__DOT__m8__DOT__x1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13128883732775410417ull);
    vlSelf->multiply_block__DOT__m8__DOT__x2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2270087611145080683ull);
    vlSelf->multiply_block__DOT__m8__DOT__x3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11472379122566970942ull);
    vlSelf->multiply_block__DOT__m8__DOT__x4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13565767529779012054ull);
    vlSelf->multiply_block__DOT__m8__DOT__x5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15764964299131887016ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->multiply_block__DOT__m8__DOT__partial_products[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4027105463579243508ull);
        }
    }
    vlSelf->multiply_block__DOT__m8__DOT__stage_one_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17477383611029438565ull);
    vlSelf->multiply_block__DOT__m8__DOT__r1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4893156458852330699ull);
    vlSelf->multiply_block__DOT__m8__DOT__r1_temp = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14325227913580566907ull);
    vlSelf->multiply_block__DOT__m8__DOT__r2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16970709852606376643ull);
    vlSelf->multiply_block__DOT__m8__DOT__r2_temp = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 300083119903530859ull);
    vlSelf->multiply_block__DOT__m8__DOT__r3 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 18315679311257914703ull);
    vlSelf->multiply_block__DOT__m8__DOT__r3_temp = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16119304225931595938ull);
    vlSelf->multiply_block__DOT__m8__DOT__r4 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7134971800927953080ull);
    vlSelf->multiply_block__DOT__m8__DOT__r4_temp = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9256023892866765672ull);
    vlSelf->multiply_block__DOT__m8__DOT__r5 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7601258844135406595ull);
    vlSelf->multiply_block__DOT__m8__DOT__r5_temp = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7859631633832917413ull);
    vlSelf->multiply_block__DOT__m8__DOT__r6 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8812964512176071799ull);
    vlSelf->multiply_block__DOT__m8__DOT__r6_temp = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8838328527663620351ull);
    vlSelf->multiply_block__DOT__m8__DOT__stage_two_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13312242392500553700ull);
    vlSelf->multiply_block__DOT__m8__DOT__s1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 2212593358436437720ull);
    vlSelf->multiply_block__DOT__m8__DOT__s1_temp = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 9232825114484873093ull);
    vlSelf->multiply_block__DOT__m8__DOT__s2 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2989552012119714558ull);
    vlSelf->multiply_block__DOT__m8__DOT__s2_temp = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16127472760021680266ull);
    vlSelf->multiply_block__DOT__m8__DOT__s3 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8752105093519377159ull);
    vlSelf->multiply_block__DOT__m8__DOT__s3_temp = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8931094014595136649ull);
    vlSelf->multiply_block__DOT__m8__DOT__s4 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5179363999737753043ull);
    vlSelf->multiply_block__DOT__m8__DOT__s4_temp = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14594759518836563757ull);
    vlSelf->multiply_block__DOT__m8__DOT__stage_three_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17804693792475445088ull);
    vlSelf->multiply_block__DOT__m8__DOT__t1 = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 925185755558557375ull);
    vlSelf->multiply_block__DOT__m8__DOT__t1_temp = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 17775543973341177399ull);
    vlSelf->multiply_block__DOT__m8__DOT__t2 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 8523382030453897251ull);
    vlSelf->multiply_block__DOT__m8__DOT__t2_temp = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 9111428647274776497ull);
    vlSelf->multiply_block__DOT__m8__DOT__t3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13143089704660893737ull);
    vlSelf->multiply_block__DOT__m8__DOT__t3_temp = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2805515347886907087ull);
    vlSelf->multiply_block__DOT__m8__DOT__stage_four_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14187448473568374473ull);
    vlSelf->multiply_block__DOT__m8__DOT__u1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11822744598301322949ull);
    vlSelf->multiply_block__DOT__m8__DOT__u1_temp = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6943229810323331075ull);
    vlSelf->multiply_block__DOT__m8__DOT__u2 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 18196850099693568183ull);
    vlSelf->multiply_block__DOT__m8__DOT__u2_temp = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 9259103200640401813ull);
    vlSelf->multiply_block__DOT__m8__DOT__stage_five_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1088125411536677813ull);
    vlSelf->multiply_block__DOT__m8__DOT__sum_temp = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7059527104781875302ull);
    vlSelf->multiply_block__DOT__m8__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->multiply_block__DOT__m8__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0;
    vlSelf->multiply_block__DOT__m8__DOT__ha_1__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5391429608939394631ull);
    vlSelf->multiply_block__DOT__m8__DOT__ha_1__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17211425452729740070ull);
    vlSelf->multiply_block__DOT__m8__DOT__ha_1__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6189464347995075746ull);
    vlSelf->multiply_block__DOT__m8__DOT__ha_1__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6811324897541570333ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa_1__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12409874178324795197ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa_1__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16004419056569298279ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa_1__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4675137777302900784ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa_1__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6390809647616192620ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa_1__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17533451030464218323ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa_2__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2261212430906084482ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa_2__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16218678776472841808ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa_2__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13470196710018342377ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa_2__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9409531600229321473ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa_2__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14227480913360123980ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa_3__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15374236557723452893ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa_3__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6039163183505141257ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa_3__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13578173420327841031ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa_3__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9723159497652519276ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa_3__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 732519407371777059ull);
    vlSelf->multiply_block__DOT__m8__DOT__ha_2__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9737427670960821148ull);
    vlSelf->multiply_block__DOT__m8__DOT__ha_2__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1864452005671130289ull);
    vlSelf->multiply_block__DOT__m8__DOT__ha_2__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4995083628529696083ull);
    vlSelf->multiply_block__DOT__m8__DOT__ha_2__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15014555886735135611ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa_4__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13023453112495951844ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa_4__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2452043019229181816ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa_4__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3866469126384787094ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa_4__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1700237096834897414ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa_4__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17190124257698595927ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa_5__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7972418390935520851ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa_5__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16079349273504739477ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa_5__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 581520986761178970ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa_5__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4556548870274608602ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa_5__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8951904501533726742ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa_6__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14724050962748693840ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa_6__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15041867971486093262ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa_6__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2198557171313651615ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa_6__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4272858604907580759ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa_6__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16611404095004809636ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa_7__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3454044294703476248ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa_7__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14637418734634492385ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa_7__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17418011668279374451ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa_7__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1586519388733905416ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa_7__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1881989312100112196ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa_8__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10283221247459085069ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa_8__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17097723152720018986ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa_8__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3717496382547141068ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa_8__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7084666802023508604ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa_8__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 999800701916936970ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa_9__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7751958295249329893ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa_9__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17018174453186887732ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa_9__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18296795916645060440ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa_9__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10832255224981591758ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa_9__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14635579745495293679ull);
    vlSelf->multiply_block__DOT__m8__DOT__ha_3__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10570905361939998933ull);
    vlSelf->multiply_block__DOT__m8__DOT__ha_3__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3514715968751539469ull);
    vlSelf->multiply_block__DOT__m8__DOT__ha_3__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8631433295724946062ull);
    vlSelf->multiply_block__DOT__m8__DOT__ha_3__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9948962518142383689ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa_10__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13370096715640334034ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa_10__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2052744345822765676ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa_10__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15017848341472840620ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa_10__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1846822452983549586ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa_10__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2607851101735636945ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa_11__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4332244872316915415ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa_11__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3212690462263895451ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa_11__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13326136865077279881ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa_11__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4262382393731529147ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa_11__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2411135658459066432ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa_12__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1362163082994001238ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa_12__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15045130888220560529ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa_12__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18431644937375317624ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa_12__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2130688306114504191ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa_12__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14702535746388357169ull);
    vlSelf->multiply_block__DOT__m8__DOT__ha_4__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15428255126019510844ull);
    vlSelf->multiply_block__DOT__m8__DOT__ha_4__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8668648554425663748ull);
    vlSelf->multiply_block__DOT__m8__DOT__ha_4__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18315720844007067163ull);
    vlSelf->multiply_block__DOT__m8__DOT__ha_4__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2207469556110213503ull);
    vlSelf->multiply_block__DOT__m8__DOT__ha_5__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3080124165872912893ull);
    vlSelf->multiply_block__DOT__m8__DOT__ha_5__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2880981634510137333ull);
    vlSelf->multiply_block__DOT__m8__DOT__ha_5__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9699140577530618629ull);
    vlSelf->multiply_block__DOT__m8__DOT__ha_5__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13964551956851356802ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa13__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13199389701976759894ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa13__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2419757929413950854ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa13__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8337652554394687701ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa13__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12652419461301958137ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa13__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8062581235000515584ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa14__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4839258963176163139ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa14__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6678716582152478252ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa14__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14008250294467928652ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa14__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13690643905030823712ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa14__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10444163021982618934ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa15__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9600711285522980428ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa15__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 736613573736905515ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa15__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15684579562279614822ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa15__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6288785786878363525ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa15__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17983223250335643278ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa16__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4997546128906301753ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa16__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9834897011886020384ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa16__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1675563887409805290ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa16__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4527505308243251919ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa16__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8982089796869494813ull);
    vlSelf->multiply_block__DOT__m8__DOT__ha_6__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9140385799951480292ull);
    vlSelf->multiply_block__DOT__m8__DOT__ha_6__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8513497063824939677ull);
    vlSelf->multiply_block__DOT__m8__DOT__ha_6__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6729766558238908332ull);
    vlSelf->multiply_block__DOT__m8__DOT__ha_6__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13516377908064762386ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa17__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13171607281903230123ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa17__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11174966467545052810ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa17__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10309723366649988352ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa17__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16661165248871055524ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa17__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6448182453415549975ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa18__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15550902260722852686ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa18__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6949382856531041540ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa18__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 715606522913872504ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa18__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1963806560459403843ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa18__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9305238254252680802ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa19__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11226290099709530064ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa19__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11890971234704491205ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa19__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11845814525219625123ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa19__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 129422506653122837ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa19__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4592043439333702394ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa20__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1887296338800288901ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa20__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5207825875217280713ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa20__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15038589431120815417ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa20__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6085459132174783016ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa20__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12031673200519551721ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa21__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8089256850640492010ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa21__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1577952561848142343ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa21__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12330696558193257687ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa21__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15326852121276505564ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa21__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4832923329390330204ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa22__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17731465392868933314ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa22__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 582888084067806065ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa22__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6125902375310570769ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa22__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 776635898510707186ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa22__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3914489749068260281ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa23__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16727875277584873796ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa23__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11632190232666394918ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa23__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8741314515917223330ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa23__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13565834925940071263ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa23__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7633059450546883327ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa24__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10151093342417665692ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa24__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4443501006256761943ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa24__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2016164773442810267ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa24__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10949438980272231340ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa24__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14843699847038512343ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa25__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7798841069104340580ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa25__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7945156515127449407ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa25__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4903115587820469432ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa25__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13840861086706090706ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa25__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16602266681523777899ull);
    vlSelf->multiply_block__DOT__m8__DOT__ha_7__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9850845294405334279ull);
    vlSelf->multiply_block__DOT__m8__DOT__ha_7__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10825852228638127743ull);
    vlSelf->multiply_block__DOT__m8__DOT__ha_7__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13511946946327931032ull);
    vlSelf->multiply_block__DOT__m8__DOT__ha_7__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5108750258182141208ull);
    vlSelf->multiply_block__DOT__m8__DOT__ha_8__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17209418696002427599ull);
    vlSelf->multiply_block__DOT__m8__DOT__ha_8__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 508625848996851192ull);
    vlSelf->multiply_block__DOT__m8__DOT__ha_8__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2576657355389693007ull);
    vlSelf->multiply_block__DOT__m8__DOT__ha_8__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8758350659786857190ull);
    vlSelf->multiply_block__DOT__m8__DOT__ha_9__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1778633950700968468ull);
    vlSelf->multiply_block__DOT__m8__DOT__ha_9__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7175176763966410476ull);
    vlSelf->multiply_block__DOT__m8__DOT__ha_9__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 836885275898639474ull);
    vlSelf->multiply_block__DOT__m8__DOT__ha_9__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5857694339925201313ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa26__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11489909262582621534ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa26__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8384299585917231050ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa26__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13999082480882572227ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa26__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5842250059922848491ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa26__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11493063443762534413ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa27__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1701858523199100999ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa27__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15982887488524956196ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa27__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1899147353453681746ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa27__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14904068700266511565ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa27__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4621955395045526238ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa28__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3809321240117516588ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa28__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 767499888863349078ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa28__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4611377435951884217ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa28__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9691177397091485704ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa28__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10755954568145908317ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa29__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7442893327809217385ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa29__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8779214140393583190ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa29__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9686780921316153781ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa29__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 78329636137288192ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa29__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14642948585009025048ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa30__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5434709201389374221ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa30__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14204956244221347386ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa30__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12570537556840338718ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa30__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15896559060622410337ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa30__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14819746599108521039ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa31__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15718086416740456999ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa31__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17375873558322458375ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa31__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15513979811442962148ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa31__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8372810375430716500ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa31__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15315263296253695253ull);
    vlSelf->multiply_block__DOT__m8__DOT__ha_10__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5956781369117483740ull);
    vlSelf->multiply_block__DOT__m8__DOT__ha_10__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2181849622139628825ull);
    vlSelf->multiply_block__DOT__m8__DOT__ha_10__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6563459071908736577ull);
    vlSelf->multiply_block__DOT__m8__DOT__ha_10__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3914956268344324925ull);
    vlSelf->multiply_block__DOT__m8__DOT__ha_11__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11926564412366382374ull);
    vlSelf->multiply_block__DOT__m8__DOT__ha_11__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3421461711791999784ull);
    vlSelf->multiply_block__DOT__m8__DOT__ha_11__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8696880258624634283ull);
    vlSelf->multiply_block__DOT__m8__DOT__ha_11__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8609789108920545492ull);
    vlSelf->multiply_block__DOT__m8__DOT__ha_12__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7535589961332447678ull);
    vlSelf->multiply_block__DOT__m8__DOT__ha_12__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7541352588678207791ull);
    vlSelf->multiply_block__DOT__m8__DOT__ha_12__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15299620949420546462ull);
    vlSelf->multiply_block__DOT__m8__DOT__ha_12__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14699580842899161326ull);
    vlSelf->multiply_block__DOT__m8__DOT__ha_13__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1794865444610086059ull);
    vlSelf->multiply_block__DOT__m8__DOT__ha_13__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1269713064053146584ull);
    vlSelf->multiply_block__DOT__m8__DOT__ha_13__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1906287195899220890ull);
    vlSelf->multiply_block__DOT__m8__DOT__ha_13__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11337703189449750779ull);
    vlSelf->multiply_block__DOT__m8__DOT__ha_14__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11773062393398600461ull);
    vlSelf->multiply_block__DOT__m8__DOT__ha_14__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9532643928198867922ull);
    vlSelf->multiply_block__DOT__m8__DOT__ha_14__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14723564098949354875ull);
    vlSelf->multiply_block__DOT__m8__DOT__ha_14__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17649545809353477410ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa32__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2335742233162979222ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa32__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13941878666870858885ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa32__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5544081010700662581ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa32__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16436384588720722509ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa32__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12517288203571640465ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa33__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1945702357403832246ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa33__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15389397746914713604ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa33__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14651384945569342175ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa33__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7230617709919769446ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa33__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15767152855672210153ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa34__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12069786067741235207ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa34__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16181316688239124350ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa34__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11376302074871866947ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa34__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17835101164496938410ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa34__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11698805599528747796ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa35__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14100479928467487401ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa35__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6652053670148629063ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa35__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7736072022730988641ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa35__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11050600853042236565ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa35__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3199171708918606971ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa36__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3967585897677107383ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa36__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10867034499134428318ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa36__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3352963056712580723ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa36__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8171359613617303630ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa36__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17090336293245976541ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa37__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12913081608962164371ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa37__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5213584655440241709ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa37__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17027494258859112279ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa37__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10784683378153844427ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa37__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7502085896014127729ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa38__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18265736929536133972ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa38__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5792081020579612362ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa38__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14696027102588274620ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa38__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12792918855194297949ull);
    vlSelf->multiply_block__DOT__m8__DOT__fa38__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17374575073301017027ull);
    vlSelf->multiply_block__DOT__m8__DOT__ha_15__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9072515434224110138ull);
    vlSelf->multiply_block__DOT__m8__DOT__ha_15__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7536016149076565087ull);
    vlSelf->multiply_block__DOT__m8__DOT__ha_15__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13188718242081849312ull);
    vlSelf->multiply_block__DOT__m8__DOT__ha_15__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2538933465171085539ull);
    vlSelf->multiply_block__DOT__u2s_inst__DOT__in = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1793018870535175060ull);
    vlSelf->multiply_block__DOT__u2s_inst__DOT__is_neg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14245623555984538406ull);
    vlSelf->multiply_block__DOT__u2s_inst__DOT__out = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17975692412216166297ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__multiply_block__DOT__m8__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
