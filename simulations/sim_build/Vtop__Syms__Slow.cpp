// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(266);
    // Setup sub module instances
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscopep_TOP = new VerilatedScope{this, "TOP", "TOP", "<null>", 0, VerilatedScope::SCOPE_OTHER};
    __Vscopep_line_buffer = new VerilatedScope{this, "line_buffer", "line_buffer", "line_buffer", -12, VerilatedScope::SCOPE_MODULE};
    // Set up scope hierarchy
    __Vhier.add(0, __Vscopep_line_buffer);
    // Setup export functions - final: 0
    // Setup export functions - final: 1
    // Setup public variables
    __Vscopep_TOP->varInsert("clk", &(TOP.clk), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("data_in", &(TOP.data_in), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_TOP->varInsert("data_in_valid", &(TOP.data_in_valid), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("data_out", &(TOP.data_out), false, VLVT_UINT32, VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,23,0);
    __Vscopep_TOP->varInsert("done", &(TOP.done), false, VLVT_UINT8, VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_TOP->varInsert("full", &(TOP.full), false, VLVT_UINT8, VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_TOP->varInsert("rd_req", &(TOP.rd_req), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("rst", &(TOP.rst), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_line_buffer->varInsert("clk", &(TOP.line_buffer__DOT__clk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_line_buffer->varInsert("d0", &(TOP.line_buffer__DOT__d0), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_line_buffer->varInsert("d1", &(TOP.line_buffer__DOT__d1), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_line_buffer->varInsert("d2", &(TOP.line_buffer__DOT__d2), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_line_buffer->varInsert("data_in", &(TOP.line_buffer__DOT__data_in), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_line_buffer->varInsert("data_in_valid", &(TOP.line_buffer__DOT__data_in_valid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_line_buffer->varInsert("data_out", &(TOP.line_buffer__DOT__data_out), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,23,0);
    __Vscopep_line_buffer->varInsert("done", &(TOP.line_buffer__DOT__done), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_line_buffer->varInsert("full", &(TOP.line_buffer__DOT__full), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_line_buffer->varInsert("line", &(TOP.line_buffer__DOT__line), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 1, 1 ,0,511 ,7,0);
    __Vscopep_line_buffer->varInsert("rd_req", &(TOP.line_buffer__DOT__rd_req), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_line_buffer->varInsert("rdptr", &(TOP.line_buffer__DOT__rdptr), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,8,0);
    __Vscopep_line_buffer->varInsert("rst", &(TOP.line_buffer__DOT__rst), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_line_buffer->varInsert("shift_en", &(TOP.line_buffer__DOT__shift_en), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_line_buffer->varInsert("wrtptr", &(TOP.line_buffer__DOT__wrtptr), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,8,0);
}

Vtop__Syms::~Vtop__Syms() {
    // Tear down scope hierarchy
    __Vhier.remove(0, __Vscopep_line_buffer);
    // Clear keys from hierarchy map after values have been removed
    __Vhier.clear();
    // Tear down scopes
    VL_DO_CLEAR(delete __Vscopep_TOP, __Vscopep_TOP = nullptr);
    VL_DO_CLEAR(delete __Vscopep_line_buffer, __Vscopep_line_buffer = nullptr);
    // Tear down sub module instances
}
