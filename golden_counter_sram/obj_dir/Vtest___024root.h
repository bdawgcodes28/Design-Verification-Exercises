// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest.h for the primary calling header

#ifndef VERILATED_VTEST___024ROOT_H_
#define VERILATED_VTEST___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtest__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtest___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ test__DOT__clk;
    CData/*0:0*/ test__DOT__rst_n;
    CData/*0:0*/ test__DOT__en;
    CData/*0:0*/ test__DOT__write_en;
    CData/*7:0*/ test__DOT__write_data;
    CData/*3:0*/ test__DOT__address;
    CData/*7:0*/ test__DOT__read_data;
    CData/*0:0*/ __Vtrigprevexpr___TOP__test__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ test__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 16> test__DOT__dut__DOT__SRAM_instance__DOT__memory;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hd5ec8698__0;
    VlTriggerScheduler __VtrigSched_hd5ec8749__0;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtest__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtest___024root(Vtest__Syms* symsp, const char* v__name);
    ~Vtest___024root();
    VL_UNCOPYABLE(Vtest___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
