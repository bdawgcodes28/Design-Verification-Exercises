// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest.h for the primary calling header

#include "Vtest__pch.h"
#include "Vtest__Syms.h"
#include "Vtest___024root.h"

VL_INLINE_OPT VlCoroutine Vtest___024root___eval_initial__TOP__Vtiming__0(Vtest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"dump.vcd"});
    vlSymsp->_traceDumpOpen();
    co_await vlSelf->__VtrigSched_hd5ec8698__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge test.clk)", 
                                                       "testbench/counter_sram_tb.sv", 
                                                       42);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hd5ec8698__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge test.clk)", 
                                                       "testbench/counter_sram_tb.sv", 
                                                       42);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hd5ec8749__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge test.clk)", 
                                                       "testbench/counter_sram_tb.sv", 
                                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->test__DOT__rst_n = 1U;
    vlSelf->test__DOT__en = 1U;
    vlSelf->test__DOT__write_en = 1U;
    vlSelf->test__DOT__write_data = 0U;
    co_await vlSelf->__VtrigSched_hd5ec8698__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge test.clk)", 
                                                       "testbench/counter_sram_tb.sv", 
                                                       53);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hd5ec8749__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge test.clk)", 
                                                       "testbench/counter_sram_tb.sv", 
                                                       54);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->test__DOT__unnamedblk1__DOT__i = 1U;
    vlSelf->test__DOT__write_data = 1U;
    co_await vlSelf->__VtrigSched_hd5ec8698__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge test.clk)", 
                                                       "testbench/counter_sram_tb.sv", 
                                                       53);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hd5ec8749__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge test.clk)", 
                                                       "testbench/counter_sram_tb.sv", 
                                                       54);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->test__DOT__unnamedblk1__DOT__i = 2U;
    vlSelf->test__DOT__write_data = 2U;
    co_await vlSelf->__VtrigSched_hd5ec8698__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge test.clk)", 
                                                       "testbench/counter_sram_tb.sv", 
                                                       53);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hd5ec8749__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge test.clk)", 
                                                       "testbench/counter_sram_tb.sv", 
                                                       54);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->test__DOT__unnamedblk1__DOT__i = 3U;
    vlSelf->test__DOT__write_data = 3U;
    co_await vlSelf->__VtrigSched_hd5ec8698__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge test.clk)", 
                                                       "testbench/counter_sram_tb.sv", 
                                                       53);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hd5ec8749__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge test.clk)", 
                                                       "testbench/counter_sram_tb.sv", 
                                                       54);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->test__DOT__unnamedblk1__DOT__i = 4U;
    vlSelf->test__DOT__write_data = 4U;
    co_await vlSelf->__VtrigSched_hd5ec8698__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge test.clk)", 
                                                       "testbench/counter_sram_tb.sv", 
                                                       53);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hd5ec8749__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge test.clk)", 
                                                       "testbench/counter_sram_tb.sv", 
                                                       54);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->test__DOT__unnamedblk1__DOT__i = 5U;
    vlSelf->test__DOT__write_data = 5U;
    co_await vlSelf->__VtrigSched_hd5ec8698__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge test.clk)", 
                                                       "testbench/counter_sram_tb.sv", 
                                                       53);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hd5ec8749__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge test.clk)", 
                                                       "testbench/counter_sram_tb.sv", 
                                                       54);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->test__DOT__unnamedblk1__DOT__i = 6U;
    vlSelf->test__DOT__write_data = 6U;
    co_await vlSelf->__VtrigSched_hd5ec8698__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge test.clk)", 
                                                       "testbench/counter_sram_tb.sv", 
                                                       53);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hd5ec8749__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge test.clk)", 
                                                       "testbench/counter_sram_tb.sv", 
                                                       54);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->test__DOT__unnamedblk1__DOT__i = 7U;
    vlSelf->test__DOT__write_data = 7U;
    co_await vlSelf->__VtrigSched_hd5ec8698__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge test.clk)", 
                                                       "testbench/counter_sram_tb.sv", 
                                                       53);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hd5ec8749__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge test.clk)", 
                                                       "testbench/counter_sram_tb.sv", 
                                                       54);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->test__DOT__unnamedblk1__DOT__i = 8U;
    vlSelf->test__DOT__write_data = 8U;
    co_await vlSelf->__VtrigSched_hd5ec8698__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge test.clk)", 
                                                       "testbench/counter_sram_tb.sv", 
                                                       53);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hd5ec8749__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge test.clk)", 
                                                       "testbench/counter_sram_tb.sv", 
                                                       54);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->test__DOT__unnamedblk1__DOT__i = 9U;
    vlSelf->test__DOT__write_data = 9U;
    co_await vlSelf->__VtrigSched_hd5ec8698__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge test.clk)", 
                                                       "testbench/counter_sram_tb.sv", 
                                                       53);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hd5ec8749__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge test.clk)", 
                                                       "testbench/counter_sram_tb.sv", 
                                                       54);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->test__DOT__unnamedblk1__DOT__i = 0xaU;
    vlSelf->test__DOT__write_data = 0xaU;
    co_await vlSelf->__VtrigSched_hd5ec8698__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge test.clk)", 
                                                       "testbench/counter_sram_tb.sv", 
                                                       53);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hd5ec8749__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge test.clk)", 
                                                       "testbench/counter_sram_tb.sv", 
                                                       54);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->test__DOT__unnamedblk1__DOT__i = 0xbU;
    vlSelf->test__DOT__write_data = 0xbU;
    co_await vlSelf->__VtrigSched_hd5ec8698__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge test.clk)", 
                                                       "testbench/counter_sram_tb.sv", 
                                                       53);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hd5ec8749__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge test.clk)", 
                                                       "testbench/counter_sram_tb.sv", 
                                                       54);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->test__DOT__unnamedblk1__DOT__i = 0xcU;
    vlSelf->test__DOT__write_data = 0xcU;
    co_await vlSelf->__VtrigSched_hd5ec8698__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge test.clk)", 
                                                       "testbench/counter_sram_tb.sv", 
                                                       53);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hd5ec8749__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge test.clk)", 
                                                       "testbench/counter_sram_tb.sv", 
                                                       54);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->test__DOT__unnamedblk1__DOT__i = 0xdU;
    vlSelf->test__DOT__write_data = 0xdU;
    co_await vlSelf->__VtrigSched_hd5ec8698__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge test.clk)", 
                                                       "testbench/counter_sram_tb.sv", 
                                                       53);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hd5ec8749__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge test.clk)", 
                                                       "testbench/counter_sram_tb.sv", 
                                                       54);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->test__DOT__unnamedblk1__DOT__i = 0xeU;
    vlSelf->test__DOT__write_data = 0xeU;
    co_await vlSelf->__VtrigSched_hd5ec8698__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge test.clk)", 
                                                       "testbench/counter_sram_tb.sv", 
                                                       53);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hd5ec8749__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge test.clk)", 
                                                       "testbench/counter_sram_tb.sv", 
                                                       54);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->test__DOT__unnamedblk1__DOT__i = 0xfU;
    vlSelf->test__DOT__write_data = 0xfU;
    co_await vlSelf->__VtrigSched_hd5ec8698__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge test.clk)", 
                                                       "testbench/counter_sram_tb.sv", 
                                                       53);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hd5ec8749__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge test.clk)", 
                                                       "testbench/counter_sram_tb.sv", 
                                                       54);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->test__DOT__unnamedblk1__DOT__i = 0x10U;
    vlSelf->test__DOT__write_en = 0U;
    co_await vlSelf->__VtrigSched_hd5ec8698__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge test.clk)", 
                                                       "testbench/counter_sram_tb.sv", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hd5ec8698__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge test.clk)", 
                                                       "testbench/counter_sram_tb.sv", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hd5ec8698__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge test.clk)", 
                                                       "testbench/counter_sram_tb.sv", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hd5ec8698__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge test.clk)", 
                                                       "testbench/counter_sram_tb.sv", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hd5ec8698__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge test.clk)", 
                                                       "testbench/counter_sram_tb.sv", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hd5ec8698__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge test.clk)", 
                                                       "testbench/counter_sram_tb.sv", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hd5ec8698__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge test.clk)", 
                                                       "testbench/counter_sram_tb.sv", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hd5ec8698__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge test.clk)", 
                                                       "testbench/counter_sram_tb.sv", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hd5ec8698__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge test.clk)", 
                                                       "testbench/counter_sram_tb.sv", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hd5ec8698__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge test.clk)", 
                                                       "testbench/counter_sram_tb.sv", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hd5ec8698__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge test.clk)", 
                                                       "testbench/counter_sram_tb.sv", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hd5ec8698__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge test.clk)", 
                                                       "testbench/counter_sram_tb.sv", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hd5ec8698__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge test.clk)", 
                                                       "testbench/counter_sram_tb.sv", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hd5ec8698__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge test.clk)", 
                                                       "testbench/counter_sram_tb.sv", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hd5ec8698__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge test.clk)", 
                                                       "testbench/counter_sram_tb.sv", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hd5ec8698__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge test.clk)", 
                                                       "testbench/counter_sram_tb.sv", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("testbench/counter_sram_tb.sv", 60, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest___024root___dump_triggers__act(Vtest___024root* vlSelf);
#endif  // VL_DEBUG

void Vtest___024root___eval_triggers__act(Vtest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->test__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__test__DOT__clk__0))));
    vlSelf->__VactTriggered.set(1U, ((~ (IData)(vlSelf->test__DOT__clk)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__test__DOT__clk__0)));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__test__DOT__clk__0 
        = vlSelf->test__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtest___024root___dump_triggers__act(vlSelf);
    }
#endif
}
