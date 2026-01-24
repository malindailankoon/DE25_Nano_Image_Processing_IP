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
    // Body
    vlSelfRef.line_buffer__DOT__clk = vlSelfRef.clk;
    vlSelfRef.line_buffer__DOT__rst = vlSelfRef.rst;
    vlSelfRef.line_buffer__DOT__data_in = vlSelfRef.data_in;
    vlSelfRef.line_buffer__DOT__data_in_valid = vlSelfRef.data_in_valid;
    vlSelfRef.line_buffer__DOT__full = (0x000001ffU 
                                        == (IData)(vlSelfRef.line_buffer__DOT__wrtptr));
    vlSelfRef.line_buffer__DOT__done = (0x000001ffU 
                                        == (IData)(vlSelfRef.line_buffer__DOT__rdptr));
    vlSelfRef.line_buffer__DOT__rd_req = vlSelfRef.rd_req;
    vlSelfRef.line_buffer__DOT__data_out = (((IData)(vlSelfRef.line_buffer__DOT__d2) 
                                             << 0x00000010U) 
                                            | (((IData)(vlSelfRef.line_buffer__DOT__d1) 
                                                << 8U) 
                                               | (IData)(vlSelfRef.line_buffer__DOT__d0)));
    vlSelfRef.full = vlSelfRef.line_buffer__DOT__full;
    vlSelfRef.done = vlSelfRef.line_buffer__DOT__done;
    vlSelfRef.line_buffer__DOT__shift_en = 0U;
    if (((((1U == (IData)(vlSelfRef.line_buffer__DOT__wrtptr)) 
           | (2U == (IData)(vlSelfRef.line_buffer__DOT__wrtptr))) 
          | (3U == (IData)(vlSelfRef.line_buffer__DOT__wrtptr))) 
         | (IData)(vlSelfRef.line_buffer__DOT__rd_req))) {
        vlSelfRef.line_buffer__DOT__shift_en = 1U;
    }
    vlSelfRef.data_out = vlSelfRef.line_buffer__DOT__data_out;
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
                                                    ((IData)(vlSelfRef.line_buffer__DOT__clk) 
                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__line_buffer__DOT__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__line_buffer__DOT__clk__0 
        = vlSelfRef.line_buffer__DOT__clk;
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
    SData/*8:0*/ __Vdly__line_buffer__DOT__wrtptr;
    __Vdly__line_buffer__DOT__wrtptr = 0;
    SData/*8:0*/ __Vdly__line_buffer__DOT__rdptr;
    __Vdly__line_buffer__DOT__rdptr = 0;
    CData/*7:0*/ __VdlyVal__line_buffer__DOT__line__v0;
    __VdlyVal__line_buffer__DOT__line__v0 = 0;
    SData/*8:0*/ __VdlyDim0__line_buffer__DOT__line__v0;
    __VdlyDim0__line_buffer__DOT__line__v0 = 0;
    CData/*0:0*/ __VdlySet__line_buffer__DOT__line__v0;
    __VdlySet__line_buffer__DOT__line__v0 = 0;
    // Body
    __VdlySet__line_buffer__DOT__line__v0 = 0U;
    __Vdly__line_buffer__DOT__wrtptr = vlSelfRef.line_buffer__DOT__wrtptr;
    __Vdly__line_buffer__DOT__rdptr = vlSelfRef.line_buffer__DOT__rdptr;
    if (vlSelfRef.line_buffer__DOT__data_in_valid) {
        __VdlyVal__line_buffer__DOT__line__v0 = vlSelfRef.line_buffer__DOT__data_in;
        __VdlyDim0__line_buffer__DOT__line__v0 = vlSelfRef.line_buffer__DOT__wrtptr;
        __VdlySet__line_buffer__DOT__line__v0 = 1U;
    }
    if (vlSelfRef.line_buffer__DOT__rst) {
        __Vdly__line_buffer__DOT__wrtptr = 0U;
        __Vdly__line_buffer__DOT__rdptr = 0U;
    } else {
        if (vlSelfRef.line_buffer__DOT__data_in_valid) {
            __Vdly__line_buffer__DOT__wrtptr = (0x000001ffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.line_buffer__DOT__wrtptr)));
        }
        __Vdly__line_buffer__DOT__rdptr = (0x000001ffU 
                                           & ((((((1U 
                                                   == (IData)(vlSelfRef.line_buffer__DOT__wrtptr)) 
                                                  | (2U 
                                                     == (IData)(vlSelfRef.line_buffer__DOT__wrtptr))) 
                                                 | (3U 
                                                    == (IData)(vlSelfRef.line_buffer__DOT__wrtptr))) 
                                                & (IData)(vlSelfRef.line_buffer__DOT__data_in_valid)) 
                                               | (IData)(vlSelfRef.line_buffer__DOT__rd_req))
                                               ? ((IData)(1U) 
                                                  + (IData)(vlSelfRef.line_buffer__DOT__rdptr))
                                               : (IData)(vlSelfRef.line_buffer__DOT__rdptr)));
    }
    if (vlSelfRef.line_buffer__DOT__shift_en) {
        vlSelfRef.line_buffer__DOT__d2 = vlSelfRef.line_buffer__DOT__d1;
        vlSelfRef.line_buffer__DOT__d1 = vlSelfRef.line_buffer__DOT__d0;
        vlSelfRef.line_buffer__DOT__d0 = vlSelfRef.line_buffer__DOT__line
            [vlSelfRef.line_buffer__DOT__rdptr];
    }
    vlSelfRef.line_buffer__DOT__wrtptr = __Vdly__line_buffer__DOT__wrtptr;
    vlSelfRef.line_buffer__DOT__full = (0x000001ffU 
                                        == (IData)(vlSelfRef.line_buffer__DOT__wrtptr));
    vlSelfRef.full = vlSelfRef.line_buffer__DOT__full;
    if (__VdlySet__line_buffer__DOT__line__v0) {
        vlSelfRef.line_buffer__DOT__line[__VdlyDim0__line_buffer__DOT__line__v0] 
            = __VdlyVal__line_buffer__DOT__line__v0;
    }
    vlSelfRef.line_buffer__DOT__shift_en = 0U;
    if (((((1U == (IData)(vlSelfRef.line_buffer__DOT__wrtptr)) 
           | (2U == (IData)(vlSelfRef.line_buffer__DOT__wrtptr))) 
          | (3U == (IData)(vlSelfRef.line_buffer__DOT__wrtptr))) 
         | (IData)(vlSelfRef.line_buffer__DOT__rd_req))) {
        vlSelfRef.line_buffer__DOT__shift_en = 1U;
    }
    vlSelfRef.line_buffer__DOT__rdptr = __Vdly__line_buffer__DOT__rdptr;
    vlSelfRef.line_buffer__DOT__done = (0x000001ffU 
                                        == (IData)(vlSelfRef.line_buffer__DOT__rdptr));
    vlSelfRef.line_buffer__DOT__data_out = (((IData)(vlSelfRef.line_buffer__DOT__d2) 
                                             << 0x00000010U) 
                                            | (((IData)(vlSelfRef.line_buffer__DOT__d1) 
                                                << 8U) 
                                               | (IData)(vlSelfRef.line_buffer__DOT__d0)));
    vlSelfRef.done = vlSelfRef.line_buffer__DOT__done;
    vlSelfRef.data_out = vlSelfRef.line_buffer__DOT__data_out;
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
            VL_FATAL_MT("/mnt/c/Users/immkb/Desktop/FPGA_stuff/GIT_REPOS/DE25_Nano_Image_Processing_IP/rtl/line_buffer.sv", 1, "", "DIDNOTCONVERGE: Input combinational region did not converge after 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
    } while (Vtop___024root___eval_phase__ico(vlSelf));
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/mnt/c/Users/immkb/Desktop/FPGA_stuff/GIT_REPOS/DE25_Nano_Image_Processing_IP/rtl/line_buffer.sv", 1, "", "DIDNOTCONVERGE: NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/mnt/c/Users/immkb/Desktop/FPGA_stuff/GIT_REPOS/DE25_Nano_Image_Processing_IP/rtl/line_buffer.sv", 1, "", "DIDNOTCONVERGE: Active region did not converge after 100 tries");
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
    if (VL_UNLIKELY(((vlSelfRef.data_in_valid & 0xfeU)))) {
        Verilated::overWidthError("data_in_valid");
    }
    if (VL_UNLIKELY(((vlSelfRef.rd_req & 0xfeU)))) {
        Verilated::overWidthError("rd_req");
    }
}
#endif  // VL_DEBUG
