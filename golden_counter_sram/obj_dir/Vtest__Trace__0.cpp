// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtest__Syms.h"


void Vtest___024root__trace_chg_0_sub_0(Vtest___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtest___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root__trace_chg_0\n"); );
    // Init
    Vtest___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest___024root*>(voidSelf);
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtest___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtest___024root__trace_chg_0_sub_0(Vtest___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->test__DOT__rst_n));
        bufp->chgBit(oldp+1,(vlSelf->test__DOT__en));
        bufp->chgBit(oldp+2,(vlSelf->test__DOT__write_en));
        bufp->chgCData(oldp+3,(vlSelf->test__DOT__write_data),8);
        bufp->chgIData(oldp+4,(vlSelf->test__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgCData(oldp+5,(vlSelf->test__DOT__address),4);
        bufp->chgCData(oldp+6,(vlSelf->test__DOT__read_data),8);
        bufp->chgCData(oldp+7,(vlSelf->test__DOT__dut__DOT__SRAM_instance__DOT__memory[0]),8);
        bufp->chgCData(oldp+8,(vlSelf->test__DOT__dut__DOT__SRAM_instance__DOT__memory[1]),8);
        bufp->chgCData(oldp+9,(vlSelf->test__DOT__dut__DOT__SRAM_instance__DOT__memory[2]),8);
        bufp->chgCData(oldp+10,(vlSelf->test__DOT__dut__DOT__SRAM_instance__DOT__memory[3]),8);
        bufp->chgCData(oldp+11,(vlSelf->test__DOT__dut__DOT__SRAM_instance__DOT__memory[4]),8);
        bufp->chgCData(oldp+12,(vlSelf->test__DOT__dut__DOT__SRAM_instance__DOT__memory[5]),8);
        bufp->chgCData(oldp+13,(vlSelf->test__DOT__dut__DOT__SRAM_instance__DOT__memory[6]),8);
        bufp->chgCData(oldp+14,(vlSelf->test__DOT__dut__DOT__SRAM_instance__DOT__memory[7]),8);
        bufp->chgCData(oldp+15,(vlSelf->test__DOT__dut__DOT__SRAM_instance__DOT__memory[8]),8);
        bufp->chgCData(oldp+16,(vlSelf->test__DOT__dut__DOT__SRAM_instance__DOT__memory[9]),8);
        bufp->chgCData(oldp+17,(vlSelf->test__DOT__dut__DOT__SRAM_instance__DOT__memory[10]),8);
        bufp->chgCData(oldp+18,(vlSelf->test__DOT__dut__DOT__SRAM_instance__DOT__memory[11]),8);
        bufp->chgCData(oldp+19,(vlSelf->test__DOT__dut__DOT__SRAM_instance__DOT__memory[12]),8);
        bufp->chgCData(oldp+20,(vlSelf->test__DOT__dut__DOT__SRAM_instance__DOT__memory[13]),8);
        bufp->chgCData(oldp+21,(vlSelf->test__DOT__dut__DOT__SRAM_instance__DOT__memory[14]),8);
        bufp->chgCData(oldp+22,(vlSelf->test__DOT__dut__DOT__SRAM_instance__DOT__memory[15]),8);
    }
    bufp->chgBit(oldp+23,(vlSelf->test__DOT__clk));
}

void Vtest___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root__trace_cleanup\n"); );
    // Init
    Vtest___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest___024root*>(voidSelf);
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
