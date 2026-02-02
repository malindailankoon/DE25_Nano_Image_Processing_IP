// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP__SYMS_H_
#define VERILATED_VTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtop.h"

// INCLUDE MODULE CLASSES
#include "Vtop___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop___024root                 TOP;

    // SCOPE NAMES
    VerilatedScope* __Vscopep_TOP;
    VerilatedScope* __Vscopep_multiply_block;
    VerilatedScope* __Vscopep_multiply_block__m8;
    VerilatedScope* __Vscopep_multiply_block__m8__fa13;
    VerilatedScope* __Vscopep_multiply_block__m8__fa14;
    VerilatedScope* __Vscopep_multiply_block__m8__fa15;
    VerilatedScope* __Vscopep_multiply_block__m8__fa16;
    VerilatedScope* __Vscopep_multiply_block__m8__fa17;
    VerilatedScope* __Vscopep_multiply_block__m8__fa18;
    VerilatedScope* __Vscopep_multiply_block__m8__fa19;
    VerilatedScope* __Vscopep_multiply_block__m8__fa20;
    VerilatedScope* __Vscopep_multiply_block__m8__fa21;
    VerilatedScope* __Vscopep_multiply_block__m8__fa22;
    VerilatedScope* __Vscopep_multiply_block__m8__fa23;
    VerilatedScope* __Vscopep_multiply_block__m8__fa24;
    VerilatedScope* __Vscopep_multiply_block__m8__fa25;
    VerilatedScope* __Vscopep_multiply_block__m8__fa26;
    VerilatedScope* __Vscopep_multiply_block__m8__fa27;
    VerilatedScope* __Vscopep_multiply_block__m8__fa28;
    VerilatedScope* __Vscopep_multiply_block__m8__fa29;
    VerilatedScope* __Vscopep_multiply_block__m8__fa30;
    VerilatedScope* __Vscopep_multiply_block__m8__fa31;
    VerilatedScope* __Vscopep_multiply_block__m8__fa32;
    VerilatedScope* __Vscopep_multiply_block__m8__fa33;
    VerilatedScope* __Vscopep_multiply_block__m8__fa34;
    VerilatedScope* __Vscopep_multiply_block__m8__fa35;
    VerilatedScope* __Vscopep_multiply_block__m8__fa36;
    VerilatedScope* __Vscopep_multiply_block__m8__fa37;
    VerilatedScope* __Vscopep_multiply_block__m8__fa38;
    VerilatedScope* __Vscopep_multiply_block__m8__fa_1;
    VerilatedScope* __Vscopep_multiply_block__m8__fa_10;
    VerilatedScope* __Vscopep_multiply_block__m8__fa_11;
    VerilatedScope* __Vscopep_multiply_block__m8__fa_12;
    VerilatedScope* __Vscopep_multiply_block__m8__fa_2;
    VerilatedScope* __Vscopep_multiply_block__m8__fa_3;
    VerilatedScope* __Vscopep_multiply_block__m8__fa_4;
    VerilatedScope* __Vscopep_multiply_block__m8__fa_5;
    VerilatedScope* __Vscopep_multiply_block__m8__fa_6;
    VerilatedScope* __Vscopep_multiply_block__m8__fa_7;
    VerilatedScope* __Vscopep_multiply_block__m8__fa_8;
    VerilatedScope* __Vscopep_multiply_block__m8__fa_9;
    VerilatedScope* __Vscopep_multiply_block__m8__ha_1;
    VerilatedScope* __Vscopep_multiply_block__m8__ha_10;
    VerilatedScope* __Vscopep_multiply_block__m8__ha_11;
    VerilatedScope* __Vscopep_multiply_block__m8__ha_12;
    VerilatedScope* __Vscopep_multiply_block__m8__ha_13;
    VerilatedScope* __Vscopep_multiply_block__m8__ha_14;
    VerilatedScope* __Vscopep_multiply_block__m8__ha_15;
    VerilatedScope* __Vscopep_multiply_block__m8__ha_2;
    VerilatedScope* __Vscopep_multiply_block__m8__ha_3;
    VerilatedScope* __Vscopep_multiply_block__m8__ha_4;
    VerilatedScope* __Vscopep_multiply_block__m8__ha_5;
    VerilatedScope* __Vscopep_multiply_block__m8__ha_6;
    VerilatedScope* __Vscopep_multiply_block__m8__ha_7;
    VerilatedScope* __Vscopep_multiply_block__m8__ha_8;
    VerilatedScope* __Vscopep_multiply_block__m8__ha_9;
    VerilatedScope* __Vscopep_multiply_block__m8__unnamedblk1;
    VerilatedScope* __Vscopep_multiply_block__m8__unnamedblk1__unnamedblk2;
    VerilatedScope* __Vscopep_multiply_block__s2u_inst;
    VerilatedScope* __Vscopep_multiply_block__u2s_inst;

    // SCOPE HIERARCHY
    VerilatedHierarchy __Vhier;

    // CONSTRUCTORS
    Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp);
    ~Vtop__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
