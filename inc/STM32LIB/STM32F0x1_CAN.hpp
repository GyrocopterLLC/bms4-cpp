#ifndef STM32F0X1_CAN_HPP_
#define STM32F0X1_CAN_HPP_
#pragma once

#include <cstdint>
#include "Register.hpp"

/* Controller area network */
namespace STM32LIB { 

/* Overwritable types for each of the bitfields.
 * Defaults to uint32_t, but feel free to redefine with your
 * own custom enum class later. */
using TSR_CODE_T = uint32_t;
using RF0R_FMP0_T = uint32_t;
using RF1R_FMP1_T = uint32_t;
using ESR_REC_T = uint32_t;
using ESR_TEC_T = uint32_t;
using ESR_LEC_T = uint32_t;
using BTR_SJW_T = uint32_t;
using BTR_TS2_T = uint32_t;
using BTR_TS1_T = uint32_t;
using BTR_BRP_T = uint32_t;
using TI0R_STID_T = uint32_t;
using TI0R_EXID_T = uint32_t;
using TDT0R_TIME_T = uint32_t;
using TDT0R_DLC_T = uint32_t;
using TDL0R_DATA3_T = uint32_t;
using TDL0R_DATA2_T = uint32_t;
using TDL0R_DATA1_T = uint32_t;
using TDL0R_DATA0_T = uint32_t;
using TDH0R_DATA7_T = uint32_t;
using TDH0R_DATA6_T = uint32_t;
using TDH0R_DATA5_T = uint32_t;
using TDH0R_DATA4_T = uint32_t;
using TI1R_STID_T = uint32_t;
using TI1R_EXID_T = uint32_t;
using TDT1R_TIME_T = uint32_t;
using TDT1R_DLC_T = uint32_t;
using TDL1R_DATA3_T = uint32_t;
using TDL1R_DATA2_T = uint32_t;
using TDL1R_DATA1_T = uint32_t;
using TDL1R_DATA0_T = uint32_t;
using TDH1R_DATA7_T = uint32_t;
using TDH1R_DATA6_T = uint32_t;
using TDH1R_DATA5_T = uint32_t;
using TDH1R_DATA4_T = uint32_t;
using TI2R_STID_T = uint32_t;
using TI2R_EXID_T = uint32_t;
using TDT2R_TIME_T = uint32_t;
using TDT2R_DLC_T = uint32_t;
using TDL2R_DATA3_T = uint32_t;
using TDL2R_DATA2_T = uint32_t;
using TDL2R_DATA1_T = uint32_t;
using TDL2R_DATA0_T = uint32_t;
using TDH2R_DATA7_T = uint32_t;
using TDH2R_DATA6_T = uint32_t;
using TDH2R_DATA5_T = uint32_t;
using TDH2R_DATA4_T = uint32_t;
using RI0R_STID_T = uint32_t;
using RI0R_EXID_T = uint32_t;
using RDT0R_TIME_T = uint32_t;
using RDT0R_FMI_T = uint32_t;
using RDT0R_DLC_T = uint32_t;
using RDL0R_DATA3_T = uint32_t;
using RDL0R_DATA2_T = uint32_t;
using RDL0R_DATA1_T = uint32_t;
using RDL0R_DATA0_T = uint32_t;
using RDH0R_DATA7_T = uint32_t;
using RDH0R_DATA6_T = uint32_t;
using RDH0R_DATA5_T = uint32_t;
using RDH0R_DATA4_T = uint32_t;
using RI1R_STID_T = uint32_t;
using RI1R_EXID_T = uint32_t;
using RDT1R_TIME_T = uint32_t;
using RDT1R_FMI_T = uint32_t;
using RDT1R_DLC_T = uint32_t;
using RDL1R_DATA3_T = uint32_t;
using RDL1R_DATA2_T = uint32_t;
using RDL1R_DATA1_T = uint32_t;
using RDL1R_DATA0_T = uint32_t;
using RDH1R_DATA7_T = uint32_t;
using RDH1R_DATA6_T = uint32_t;
using RDH1R_DATA5_T = uint32_t;
using RDH1R_DATA4_T = uint32_t;
using FMR_CAN2SB_T = uint32_t;

namespace CAN_MCR {

    enum class mcr_reg_type {};

    template<bool tf>
    using DBF = Register::Combo_Bit<mcr_reg_type, 16, tf>;

    template<bool tf>
    using RESET = Register::Combo_Bit<mcr_reg_type, 15, tf>;

    template<bool tf>
    using TTCM = Register::Combo_Bit<mcr_reg_type, 7, tf>;

    template<bool tf>
    using ABOM = Register::Combo_Bit<mcr_reg_type, 6, tf>;

    template<bool tf>
    using AWUM = Register::Combo_Bit<mcr_reg_type, 5, tf>;

    template<bool tf>
    using NART = Register::Combo_Bit<mcr_reg_type, 4, tf>;

    template<bool tf>
    using RFLM = Register::Combo_Bit<mcr_reg_type, 3, tf>;

    template<bool tf>
    using TXFP = Register::Combo_Bit<mcr_reg_type, 2, tf>;

    template<bool tf>
    using SLEEP = Register::Combo_Bit<mcr_reg_type, 1, tf>;

    template<bool tf>
    using INRQ = Register::Combo_Bit<mcr_reg_type, 0, tf>;

} // CAN_MCR
namespace CAN_MSR {

    enum class msr_reg_type {};

    template<bool tf>
    using RX = Register::Combo_Bit<msr_reg_type, 11, tf>;

    template<bool tf>
    using SAMP = Register::Combo_Bit<msr_reg_type, 10, tf>;

    template<bool tf>
    using RXM = Register::Combo_Bit<msr_reg_type, 9, tf>;

    template<bool tf>
    using TXM = Register::Combo_Bit<msr_reg_type, 8, tf>;

    template<bool tf>
    using SLAKI = Register::Combo_Bit<msr_reg_type, 4, tf>;

    template<bool tf>
    using WKUI = Register::Combo_Bit<msr_reg_type, 3, tf>;

    template<bool tf>
    using ERRI = Register::Combo_Bit<msr_reg_type, 2, tf>;

    template<bool tf>
    using SLAK = Register::Combo_Bit<msr_reg_type, 1, tf>;

    template<bool tf>
    using INAK = Register::Combo_Bit<msr_reg_type, 0, tf>;

} // CAN_MSR
namespace CAN_TSR {

    enum class tsr_reg_type {};

    template<bool tf>
    using LOW2 = Register::Combo_Bit<tsr_reg_type, 31, tf>;

    template<bool tf>
    using LOW1 = Register::Combo_Bit<tsr_reg_type, 30, tf>;

    template<bool tf>
    using LOW0 = Register::Combo_Bit<tsr_reg_type, 29, tf>;

    template<bool tf>
    using TME2 = Register::Combo_Bit<tsr_reg_type, 28, tf>;

    template<bool tf>
    using TME1 = Register::Combo_Bit<tsr_reg_type, 27, tf>;

    template<bool tf>
    using TME0 = Register::Combo_Bit<tsr_reg_type, 26, tf>;

    template<TSR_CODE_T val>
    using CODE = Register::Combo_Bitfield<tsr_reg_type, 24, 2, TSR_CODE_T, val>;

    template<bool tf>
    using ABRQ2 = Register::Combo_Bit<tsr_reg_type, 23, tf>;

    template<bool tf>
    using TERR2 = Register::Combo_Bit<tsr_reg_type, 19, tf>;

    template<bool tf>
    using ALST2 = Register::Combo_Bit<tsr_reg_type, 18, tf>;

    template<bool tf>
    using TXOK2 = Register::Combo_Bit<tsr_reg_type, 17, tf>;

    template<bool tf>
    using RQCP2 = Register::Combo_Bit<tsr_reg_type, 16, tf>;

    template<bool tf>
    using ABRQ1 = Register::Combo_Bit<tsr_reg_type, 15, tf>;

    template<bool tf>
    using TERR1 = Register::Combo_Bit<tsr_reg_type, 11, tf>;

    template<bool tf>
    using ALST1 = Register::Combo_Bit<tsr_reg_type, 10, tf>;

    template<bool tf>
    using TXOK1 = Register::Combo_Bit<tsr_reg_type, 9, tf>;

    template<bool tf>
    using RQCP1 = Register::Combo_Bit<tsr_reg_type, 8, tf>;

    template<bool tf>
    using ABRQ0 = Register::Combo_Bit<tsr_reg_type, 7, tf>;

    template<bool tf>
    using TERR0 = Register::Combo_Bit<tsr_reg_type, 3, tf>;

    template<bool tf>
    using ALST0 = Register::Combo_Bit<tsr_reg_type, 2, tf>;

    template<bool tf>
    using TXOK0 = Register::Combo_Bit<tsr_reg_type, 1, tf>;

    template<bool tf>
    using RQCP0 = Register::Combo_Bit<tsr_reg_type, 0, tf>;

} // CAN_TSR
namespace CAN_RF0R {

    enum class rf0r_reg_type {};

    template<bool tf>
    using RFOM0 = Register::Combo_Bit<rf0r_reg_type, 5, tf>;

    template<bool tf>
    using FOVR0 = Register::Combo_Bit<rf0r_reg_type, 4, tf>;

    template<bool tf>
    using FULL0 = Register::Combo_Bit<rf0r_reg_type, 3, tf>;

    template<RF0R_FMP0_T val>
    using FMP0 = Register::Combo_Bitfield<rf0r_reg_type, 0, 2, RF0R_FMP0_T, val>;

} // CAN_RF0R
namespace CAN_RF1R {

    enum class rf1r_reg_type {};

    template<bool tf>
    using RFOM1 = Register::Combo_Bit<rf1r_reg_type, 5, tf>;

    template<bool tf>
    using FOVR1 = Register::Combo_Bit<rf1r_reg_type, 4, tf>;

    template<bool tf>
    using FULL1 = Register::Combo_Bit<rf1r_reg_type, 3, tf>;

    template<RF1R_FMP1_T val>
    using FMP1 = Register::Combo_Bitfield<rf1r_reg_type, 0, 2, RF1R_FMP1_T, val>;

} // CAN_RF1R
namespace CAN_IER {

    enum class ier_reg_type {};

    template<bool tf>
    using SLKIE = Register::Combo_Bit<ier_reg_type, 17, tf>;

    template<bool tf>
    using WKUIE = Register::Combo_Bit<ier_reg_type, 16, tf>;

    template<bool tf>
    using ERRIE = Register::Combo_Bit<ier_reg_type, 15, tf>;

    template<bool tf>
    using LECIE = Register::Combo_Bit<ier_reg_type, 11, tf>;

    template<bool tf>
    using BOFIE = Register::Combo_Bit<ier_reg_type, 10, tf>;

    template<bool tf>
    using EPVIE = Register::Combo_Bit<ier_reg_type, 9, tf>;

    template<bool tf>
    using EWGIE = Register::Combo_Bit<ier_reg_type, 8, tf>;

    template<bool tf>
    using FOVIE1 = Register::Combo_Bit<ier_reg_type, 6, tf>;

    template<bool tf>
    using FFIE1 = Register::Combo_Bit<ier_reg_type, 5, tf>;

    template<bool tf>
    using FMPIE1 = Register::Combo_Bit<ier_reg_type, 4, tf>;

    template<bool tf>
    using FOVIE0 = Register::Combo_Bit<ier_reg_type, 3, tf>;

    template<bool tf>
    using FFIE0 = Register::Combo_Bit<ier_reg_type, 2, tf>;

    template<bool tf>
    using FMPIE0 = Register::Combo_Bit<ier_reg_type, 1, tf>;

    template<bool tf>
    using TMEIE = Register::Combo_Bit<ier_reg_type, 0, tf>;

} // CAN_IER
namespace CAN_ESR {

    enum class esr_reg_type {};

    template<ESR_REC_T val>
    using REC = Register::Combo_Bitfield<esr_reg_type, 24, 8, ESR_REC_T, val>;

    template<ESR_TEC_T val>
    using TEC = Register::Combo_Bitfield<esr_reg_type, 16, 8, ESR_TEC_T, val>;

    template<ESR_LEC_T val>
    using LEC = Register::Combo_Bitfield<esr_reg_type, 4, 3, ESR_LEC_T, val>;

    template<bool tf>
    using BOFF = Register::Combo_Bit<esr_reg_type, 2, tf>;

    template<bool tf>
    using EPVF = Register::Combo_Bit<esr_reg_type, 1, tf>;

    template<bool tf>
    using EWGF = Register::Combo_Bit<esr_reg_type, 0, tf>;

} // CAN_ESR
namespace CAN_BTR {

    enum class btr_reg_type {};

    template<bool tf>
    using SILM = Register::Combo_Bit<btr_reg_type, 31, tf>;

    template<bool tf>
    using LBKM = Register::Combo_Bit<btr_reg_type, 30, tf>;

    template<BTR_SJW_T val>
    using SJW = Register::Combo_Bitfield<btr_reg_type, 24, 2, BTR_SJW_T, val>;

    template<BTR_TS2_T val>
    using TS2 = Register::Combo_Bitfield<btr_reg_type, 20, 3, BTR_TS2_T, val>;

    template<BTR_TS1_T val>
    using TS1 = Register::Combo_Bitfield<btr_reg_type, 16, 4, BTR_TS1_T, val>;

    template<BTR_BRP_T val>
    using BRP = Register::Combo_Bitfield<btr_reg_type, 0, 10, BTR_BRP_T, val>;

} // CAN_BTR
namespace CAN_TI0R {

    enum class ti0r_reg_type {};

    template<TI0R_STID_T val>
    using STID = Register::Combo_Bitfield<ti0r_reg_type, 21, 11, TI0R_STID_T, val>;

    template<TI0R_EXID_T val>
    using EXID = Register::Combo_Bitfield<ti0r_reg_type, 3, 18, TI0R_EXID_T, val>;

    template<bool tf>
    using IDE = Register::Combo_Bit<ti0r_reg_type, 2, tf>;

    template<bool tf>
    using RTR = Register::Combo_Bit<ti0r_reg_type, 1, tf>;

    template<bool tf>
    using TXRQ = Register::Combo_Bit<ti0r_reg_type, 0, tf>;

} // CAN_TI0R
namespace CAN_TDT0R {

    enum class tdt0r_reg_type {};

    template<TDT0R_TIME_T val>
    using TIME = Register::Combo_Bitfield<tdt0r_reg_type, 16, 16, TDT0R_TIME_T, val>;

    template<bool tf>
    using TGT = Register::Combo_Bit<tdt0r_reg_type, 8, tf>;

    template<TDT0R_DLC_T val>
    using DLC = Register::Combo_Bitfield<tdt0r_reg_type, 0, 4, TDT0R_DLC_T, val>;

} // CAN_TDT0R
namespace CAN_TDL0R {

    enum class tdl0r_reg_type {};

    template<TDL0R_DATA3_T val>
    using DATA3 = Register::Combo_Bitfield<tdl0r_reg_type, 24, 8, TDL0R_DATA3_T, val>;

    template<TDL0R_DATA2_T val>
    using DATA2 = Register::Combo_Bitfield<tdl0r_reg_type, 16, 8, TDL0R_DATA2_T, val>;

    template<TDL0R_DATA1_T val>
    using DATA1 = Register::Combo_Bitfield<tdl0r_reg_type, 8, 8, TDL0R_DATA1_T, val>;

    template<TDL0R_DATA0_T val>
    using DATA0 = Register::Combo_Bitfield<tdl0r_reg_type, 0, 8, TDL0R_DATA0_T, val>;

} // CAN_TDL0R
namespace CAN_TDH0R {

    enum class tdh0r_reg_type {};

    template<TDH0R_DATA7_T val>
    using DATA7 = Register::Combo_Bitfield<tdh0r_reg_type, 24, 8, TDH0R_DATA7_T, val>;

    template<TDH0R_DATA6_T val>
    using DATA6 = Register::Combo_Bitfield<tdh0r_reg_type, 16, 8, TDH0R_DATA6_T, val>;

    template<TDH0R_DATA5_T val>
    using DATA5 = Register::Combo_Bitfield<tdh0r_reg_type, 8, 8, TDH0R_DATA5_T, val>;

    template<TDH0R_DATA4_T val>
    using DATA4 = Register::Combo_Bitfield<tdh0r_reg_type, 0, 8, TDH0R_DATA4_T, val>;

} // CAN_TDH0R
namespace CAN_TI1R {

    enum class ti1r_reg_type {};

    template<TI1R_STID_T val>
    using STID = Register::Combo_Bitfield<ti1r_reg_type, 21, 11, TI1R_STID_T, val>;

    template<TI1R_EXID_T val>
    using EXID = Register::Combo_Bitfield<ti1r_reg_type, 3, 18, TI1R_EXID_T, val>;

    template<bool tf>
    using IDE = Register::Combo_Bit<ti1r_reg_type, 2, tf>;

    template<bool tf>
    using RTR = Register::Combo_Bit<ti1r_reg_type, 1, tf>;

    template<bool tf>
    using TXRQ = Register::Combo_Bit<ti1r_reg_type, 0, tf>;

} // CAN_TI1R
namespace CAN_TDT1R {

    enum class tdt1r_reg_type {};

    template<TDT1R_TIME_T val>
    using TIME = Register::Combo_Bitfield<tdt1r_reg_type, 16, 16, TDT1R_TIME_T, val>;

    template<bool tf>
    using TGT = Register::Combo_Bit<tdt1r_reg_type, 8, tf>;

    template<TDT1R_DLC_T val>
    using DLC = Register::Combo_Bitfield<tdt1r_reg_type, 0, 4, TDT1R_DLC_T, val>;

} // CAN_TDT1R
namespace CAN_TDL1R {

    enum class tdl1r_reg_type {};

    template<TDL1R_DATA3_T val>
    using DATA3 = Register::Combo_Bitfield<tdl1r_reg_type, 24, 8, TDL1R_DATA3_T, val>;

    template<TDL1R_DATA2_T val>
    using DATA2 = Register::Combo_Bitfield<tdl1r_reg_type, 16, 8, TDL1R_DATA2_T, val>;

    template<TDL1R_DATA1_T val>
    using DATA1 = Register::Combo_Bitfield<tdl1r_reg_type, 8, 8, TDL1R_DATA1_T, val>;

    template<TDL1R_DATA0_T val>
    using DATA0 = Register::Combo_Bitfield<tdl1r_reg_type, 0, 8, TDL1R_DATA0_T, val>;

} // CAN_TDL1R
namespace CAN_TDH1R {

    enum class tdh1r_reg_type {};

    template<TDH1R_DATA7_T val>
    using DATA7 = Register::Combo_Bitfield<tdh1r_reg_type, 24, 8, TDH1R_DATA7_T, val>;

    template<TDH1R_DATA6_T val>
    using DATA6 = Register::Combo_Bitfield<tdh1r_reg_type, 16, 8, TDH1R_DATA6_T, val>;

    template<TDH1R_DATA5_T val>
    using DATA5 = Register::Combo_Bitfield<tdh1r_reg_type, 8, 8, TDH1R_DATA5_T, val>;

    template<TDH1R_DATA4_T val>
    using DATA4 = Register::Combo_Bitfield<tdh1r_reg_type, 0, 8, TDH1R_DATA4_T, val>;

} // CAN_TDH1R
namespace CAN_TI2R {

    enum class ti2r_reg_type {};

    template<TI2R_STID_T val>
    using STID = Register::Combo_Bitfield<ti2r_reg_type, 21, 11, TI2R_STID_T, val>;

    template<TI2R_EXID_T val>
    using EXID = Register::Combo_Bitfield<ti2r_reg_type, 3, 18, TI2R_EXID_T, val>;

    template<bool tf>
    using IDE = Register::Combo_Bit<ti2r_reg_type, 2, tf>;

    template<bool tf>
    using RTR = Register::Combo_Bit<ti2r_reg_type, 1, tf>;

    template<bool tf>
    using TXRQ = Register::Combo_Bit<ti2r_reg_type, 0, tf>;

} // CAN_TI2R
namespace CAN_TDT2R {

    enum class tdt2r_reg_type {};

    template<TDT2R_TIME_T val>
    using TIME = Register::Combo_Bitfield<tdt2r_reg_type, 16, 16, TDT2R_TIME_T, val>;

    template<bool tf>
    using TGT = Register::Combo_Bit<tdt2r_reg_type, 8, tf>;

    template<TDT2R_DLC_T val>
    using DLC = Register::Combo_Bitfield<tdt2r_reg_type, 0, 4, TDT2R_DLC_T, val>;

} // CAN_TDT2R
namespace CAN_TDL2R {

    enum class tdl2r_reg_type {};

    template<TDL2R_DATA3_T val>
    using DATA3 = Register::Combo_Bitfield<tdl2r_reg_type, 24, 8, TDL2R_DATA3_T, val>;

    template<TDL2R_DATA2_T val>
    using DATA2 = Register::Combo_Bitfield<tdl2r_reg_type, 16, 8, TDL2R_DATA2_T, val>;

    template<TDL2R_DATA1_T val>
    using DATA1 = Register::Combo_Bitfield<tdl2r_reg_type, 8, 8, TDL2R_DATA1_T, val>;

    template<TDL2R_DATA0_T val>
    using DATA0 = Register::Combo_Bitfield<tdl2r_reg_type, 0, 8, TDL2R_DATA0_T, val>;

} // CAN_TDL2R
namespace CAN_TDH2R {

    enum class tdh2r_reg_type {};

    template<TDH2R_DATA7_T val>
    using DATA7 = Register::Combo_Bitfield<tdh2r_reg_type, 24, 8, TDH2R_DATA7_T, val>;

    template<TDH2R_DATA6_T val>
    using DATA6 = Register::Combo_Bitfield<tdh2r_reg_type, 16, 8, TDH2R_DATA6_T, val>;

    template<TDH2R_DATA5_T val>
    using DATA5 = Register::Combo_Bitfield<tdh2r_reg_type, 8, 8, TDH2R_DATA5_T, val>;

    template<TDH2R_DATA4_T val>
    using DATA4 = Register::Combo_Bitfield<tdh2r_reg_type, 0, 8, TDH2R_DATA4_T, val>;

} // CAN_TDH2R
namespace CAN_RI0R {

    enum class ri0r_reg_type {};

    template<RI0R_STID_T val>
    using STID = Register::Combo_Bitfield<ri0r_reg_type, 21, 11, RI0R_STID_T, val>;

    template<RI0R_EXID_T val>
    using EXID = Register::Combo_Bitfield<ri0r_reg_type, 3, 18, RI0R_EXID_T, val>;

    template<bool tf>
    using IDE = Register::Combo_Bit<ri0r_reg_type, 2, tf>;

    template<bool tf>
    using RTR = Register::Combo_Bit<ri0r_reg_type, 1, tf>;

} // CAN_RI0R
namespace CAN_RDT0R {

    enum class rdt0r_reg_type {};

    template<RDT0R_TIME_T val>
    using TIME = Register::Combo_Bitfield<rdt0r_reg_type, 16, 16, RDT0R_TIME_T, val>;

    template<RDT0R_FMI_T val>
    using FMI = Register::Combo_Bitfield<rdt0r_reg_type, 8, 8, RDT0R_FMI_T, val>;

    template<RDT0R_DLC_T val>
    using DLC = Register::Combo_Bitfield<rdt0r_reg_type, 0, 4, RDT0R_DLC_T, val>;

} // CAN_RDT0R
namespace CAN_RDL0R {

    enum class rdl0r_reg_type {};

    template<RDL0R_DATA3_T val>
    using DATA3 = Register::Combo_Bitfield<rdl0r_reg_type, 24, 8, RDL0R_DATA3_T, val>;

    template<RDL0R_DATA2_T val>
    using DATA2 = Register::Combo_Bitfield<rdl0r_reg_type, 16, 8, RDL0R_DATA2_T, val>;

    template<RDL0R_DATA1_T val>
    using DATA1 = Register::Combo_Bitfield<rdl0r_reg_type, 8, 8, RDL0R_DATA1_T, val>;

    template<RDL0R_DATA0_T val>
    using DATA0 = Register::Combo_Bitfield<rdl0r_reg_type, 0, 8, RDL0R_DATA0_T, val>;

} // CAN_RDL0R
namespace CAN_RDH0R {

    enum class rdh0r_reg_type {};

    template<RDH0R_DATA7_T val>
    using DATA7 = Register::Combo_Bitfield<rdh0r_reg_type, 24, 8, RDH0R_DATA7_T, val>;

    template<RDH0R_DATA6_T val>
    using DATA6 = Register::Combo_Bitfield<rdh0r_reg_type, 16, 8, RDH0R_DATA6_T, val>;

    template<RDH0R_DATA5_T val>
    using DATA5 = Register::Combo_Bitfield<rdh0r_reg_type, 8, 8, RDH0R_DATA5_T, val>;

    template<RDH0R_DATA4_T val>
    using DATA4 = Register::Combo_Bitfield<rdh0r_reg_type, 0, 8, RDH0R_DATA4_T, val>;

} // CAN_RDH0R
namespace CAN_RI1R {

    enum class ri1r_reg_type {};

    template<RI1R_STID_T val>
    using STID = Register::Combo_Bitfield<ri1r_reg_type, 21, 11, RI1R_STID_T, val>;

    template<RI1R_EXID_T val>
    using EXID = Register::Combo_Bitfield<ri1r_reg_type, 3, 18, RI1R_EXID_T, val>;

    template<bool tf>
    using IDE = Register::Combo_Bit<ri1r_reg_type, 2, tf>;

    template<bool tf>
    using RTR = Register::Combo_Bit<ri1r_reg_type, 1, tf>;

} // CAN_RI1R
namespace CAN_RDT1R {

    enum class rdt1r_reg_type {};

    template<RDT1R_TIME_T val>
    using TIME = Register::Combo_Bitfield<rdt1r_reg_type, 16, 16, RDT1R_TIME_T, val>;

    template<RDT1R_FMI_T val>
    using FMI = Register::Combo_Bitfield<rdt1r_reg_type, 8, 8, RDT1R_FMI_T, val>;

    template<RDT1R_DLC_T val>
    using DLC = Register::Combo_Bitfield<rdt1r_reg_type, 0, 4, RDT1R_DLC_T, val>;

} // CAN_RDT1R
namespace CAN_RDL1R {

    enum class rdl1r_reg_type {};

    template<RDL1R_DATA3_T val>
    using DATA3 = Register::Combo_Bitfield<rdl1r_reg_type, 24, 8, RDL1R_DATA3_T, val>;

    template<RDL1R_DATA2_T val>
    using DATA2 = Register::Combo_Bitfield<rdl1r_reg_type, 16, 8, RDL1R_DATA2_T, val>;

    template<RDL1R_DATA1_T val>
    using DATA1 = Register::Combo_Bitfield<rdl1r_reg_type, 8, 8, RDL1R_DATA1_T, val>;

    template<RDL1R_DATA0_T val>
    using DATA0 = Register::Combo_Bitfield<rdl1r_reg_type, 0, 8, RDL1R_DATA0_T, val>;

} // CAN_RDL1R
namespace CAN_RDH1R {

    enum class rdh1r_reg_type {};

    template<RDH1R_DATA7_T val>
    using DATA7 = Register::Combo_Bitfield<rdh1r_reg_type, 24, 8, RDH1R_DATA7_T, val>;

    template<RDH1R_DATA6_T val>
    using DATA6 = Register::Combo_Bitfield<rdh1r_reg_type, 16, 8, RDH1R_DATA6_T, val>;

    template<RDH1R_DATA5_T val>
    using DATA5 = Register::Combo_Bitfield<rdh1r_reg_type, 8, 8, RDH1R_DATA5_T, val>;

    template<RDH1R_DATA4_T val>
    using DATA4 = Register::Combo_Bitfield<rdh1r_reg_type, 0, 8, RDH1R_DATA4_T, val>;

} // CAN_RDH1R
namespace CAN_FMR {

    enum class fmr_reg_type {};

    template<FMR_CAN2SB_T val>
    using CAN2SB = Register::Combo_Bitfield<fmr_reg_type, 8, 6, FMR_CAN2SB_T, val>;

    template<bool tf>
    using FINIT = Register::Combo_Bit<fmr_reg_type, 0, tf>;

} // CAN_FMR
namespace CAN_FM1R {

    enum class fm1r_reg_type {};

    template<bool tf>
    using FBM0 = Register::Combo_Bit<fm1r_reg_type, 0, tf>;

    template<bool tf>
    using FBM1 = Register::Combo_Bit<fm1r_reg_type, 1, tf>;

    template<bool tf>
    using FBM2 = Register::Combo_Bit<fm1r_reg_type, 2, tf>;

    template<bool tf>
    using FBM3 = Register::Combo_Bit<fm1r_reg_type, 3, tf>;

    template<bool tf>
    using FBM4 = Register::Combo_Bit<fm1r_reg_type, 4, tf>;

    template<bool tf>
    using FBM5 = Register::Combo_Bit<fm1r_reg_type, 5, tf>;

    template<bool tf>
    using FBM6 = Register::Combo_Bit<fm1r_reg_type, 6, tf>;

    template<bool tf>
    using FBM7 = Register::Combo_Bit<fm1r_reg_type, 7, tf>;

    template<bool tf>
    using FBM8 = Register::Combo_Bit<fm1r_reg_type, 8, tf>;

    template<bool tf>
    using FBM9 = Register::Combo_Bit<fm1r_reg_type, 9, tf>;

    template<bool tf>
    using FBM10 = Register::Combo_Bit<fm1r_reg_type, 10, tf>;

    template<bool tf>
    using FBM11 = Register::Combo_Bit<fm1r_reg_type, 11, tf>;

    template<bool tf>
    using FBM12 = Register::Combo_Bit<fm1r_reg_type, 12, tf>;

    template<bool tf>
    using FBM13 = Register::Combo_Bit<fm1r_reg_type, 13, tf>;

    template<bool tf>
    using FBM14 = Register::Combo_Bit<fm1r_reg_type, 14, tf>;

    template<bool tf>
    using FBM15 = Register::Combo_Bit<fm1r_reg_type, 15, tf>;

    template<bool tf>
    using FBM16 = Register::Combo_Bit<fm1r_reg_type, 16, tf>;

    template<bool tf>
    using FBM17 = Register::Combo_Bit<fm1r_reg_type, 17, tf>;

    template<bool tf>
    using FBM18 = Register::Combo_Bit<fm1r_reg_type, 18, tf>;

    template<bool tf>
    using FBM19 = Register::Combo_Bit<fm1r_reg_type, 19, tf>;

    template<bool tf>
    using FBM20 = Register::Combo_Bit<fm1r_reg_type, 20, tf>;

    template<bool tf>
    using FBM21 = Register::Combo_Bit<fm1r_reg_type, 21, tf>;

    template<bool tf>
    using FBM22 = Register::Combo_Bit<fm1r_reg_type, 22, tf>;

    template<bool tf>
    using FBM23 = Register::Combo_Bit<fm1r_reg_type, 23, tf>;

    template<bool tf>
    using FBM24 = Register::Combo_Bit<fm1r_reg_type, 24, tf>;

    template<bool tf>
    using FBM25 = Register::Combo_Bit<fm1r_reg_type, 25, tf>;

    template<bool tf>
    using FBM26 = Register::Combo_Bit<fm1r_reg_type, 26, tf>;

    template<bool tf>
    using FBM27 = Register::Combo_Bit<fm1r_reg_type, 27, tf>;

} // CAN_FM1R
namespace CAN_FS1R {

    enum class fs1r_reg_type {};

    template<bool tf>
    using FSC0 = Register::Combo_Bit<fs1r_reg_type, 0, tf>;

    template<bool tf>
    using FSC1 = Register::Combo_Bit<fs1r_reg_type, 1, tf>;

    template<bool tf>
    using FSC2 = Register::Combo_Bit<fs1r_reg_type, 2, tf>;

    template<bool tf>
    using FSC3 = Register::Combo_Bit<fs1r_reg_type, 3, tf>;

    template<bool tf>
    using FSC4 = Register::Combo_Bit<fs1r_reg_type, 4, tf>;

    template<bool tf>
    using FSC5 = Register::Combo_Bit<fs1r_reg_type, 5, tf>;

    template<bool tf>
    using FSC6 = Register::Combo_Bit<fs1r_reg_type, 6, tf>;

    template<bool tf>
    using FSC7 = Register::Combo_Bit<fs1r_reg_type, 7, tf>;

    template<bool tf>
    using FSC8 = Register::Combo_Bit<fs1r_reg_type, 8, tf>;

    template<bool tf>
    using FSC9 = Register::Combo_Bit<fs1r_reg_type, 9, tf>;

    template<bool tf>
    using FSC10 = Register::Combo_Bit<fs1r_reg_type, 10, tf>;

    template<bool tf>
    using FSC11 = Register::Combo_Bit<fs1r_reg_type, 11, tf>;

    template<bool tf>
    using FSC12 = Register::Combo_Bit<fs1r_reg_type, 12, tf>;

    template<bool tf>
    using FSC13 = Register::Combo_Bit<fs1r_reg_type, 13, tf>;

    template<bool tf>
    using FSC14 = Register::Combo_Bit<fs1r_reg_type, 14, tf>;

    template<bool tf>
    using FSC15 = Register::Combo_Bit<fs1r_reg_type, 15, tf>;

    template<bool tf>
    using FSC16 = Register::Combo_Bit<fs1r_reg_type, 16, tf>;

    template<bool tf>
    using FSC17 = Register::Combo_Bit<fs1r_reg_type, 17, tf>;

    template<bool tf>
    using FSC18 = Register::Combo_Bit<fs1r_reg_type, 18, tf>;

    template<bool tf>
    using FSC19 = Register::Combo_Bit<fs1r_reg_type, 19, tf>;

    template<bool tf>
    using FSC20 = Register::Combo_Bit<fs1r_reg_type, 20, tf>;

    template<bool tf>
    using FSC21 = Register::Combo_Bit<fs1r_reg_type, 21, tf>;

    template<bool tf>
    using FSC22 = Register::Combo_Bit<fs1r_reg_type, 22, tf>;

    template<bool tf>
    using FSC23 = Register::Combo_Bit<fs1r_reg_type, 23, tf>;

    template<bool tf>
    using FSC24 = Register::Combo_Bit<fs1r_reg_type, 24, tf>;

    template<bool tf>
    using FSC25 = Register::Combo_Bit<fs1r_reg_type, 25, tf>;

    template<bool tf>
    using FSC26 = Register::Combo_Bit<fs1r_reg_type, 26, tf>;

    template<bool tf>
    using FSC27 = Register::Combo_Bit<fs1r_reg_type, 27, tf>;

} // CAN_FS1R
namespace CAN_FFA1R {

    enum class ffa1r_reg_type {};

    template<bool tf>
    using FFA0 = Register::Combo_Bit<ffa1r_reg_type, 0, tf>;

    template<bool tf>
    using FFA1 = Register::Combo_Bit<ffa1r_reg_type, 1, tf>;

    template<bool tf>
    using FFA2 = Register::Combo_Bit<ffa1r_reg_type, 2, tf>;

    template<bool tf>
    using FFA3 = Register::Combo_Bit<ffa1r_reg_type, 3, tf>;

    template<bool tf>
    using FFA4 = Register::Combo_Bit<ffa1r_reg_type, 4, tf>;

    template<bool tf>
    using FFA5 = Register::Combo_Bit<ffa1r_reg_type, 5, tf>;

    template<bool tf>
    using FFA6 = Register::Combo_Bit<ffa1r_reg_type, 6, tf>;

    template<bool tf>
    using FFA7 = Register::Combo_Bit<ffa1r_reg_type, 7, tf>;

    template<bool tf>
    using FFA8 = Register::Combo_Bit<ffa1r_reg_type, 8, tf>;

    template<bool tf>
    using FFA9 = Register::Combo_Bit<ffa1r_reg_type, 9, tf>;

    template<bool tf>
    using FFA10 = Register::Combo_Bit<ffa1r_reg_type, 10, tf>;

    template<bool tf>
    using FFA11 = Register::Combo_Bit<ffa1r_reg_type, 11, tf>;

    template<bool tf>
    using FFA12 = Register::Combo_Bit<ffa1r_reg_type, 12, tf>;

    template<bool tf>
    using FFA13 = Register::Combo_Bit<ffa1r_reg_type, 13, tf>;

    template<bool tf>
    using FFA14 = Register::Combo_Bit<ffa1r_reg_type, 14, tf>;

    template<bool tf>
    using FFA15 = Register::Combo_Bit<ffa1r_reg_type, 15, tf>;

    template<bool tf>
    using FFA16 = Register::Combo_Bit<ffa1r_reg_type, 16, tf>;

    template<bool tf>
    using FFA17 = Register::Combo_Bit<ffa1r_reg_type, 17, tf>;

    template<bool tf>
    using FFA18 = Register::Combo_Bit<ffa1r_reg_type, 18, tf>;

    template<bool tf>
    using FFA19 = Register::Combo_Bit<ffa1r_reg_type, 19, tf>;

    template<bool tf>
    using FFA20 = Register::Combo_Bit<ffa1r_reg_type, 20, tf>;

    template<bool tf>
    using FFA21 = Register::Combo_Bit<ffa1r_reg_type, 21, tf>;

    template<bool tf>
    using FFA22 = Register::Combo_Bit<ffa1r_reg_type, 22, tf>;

    template<bool tf>
    using FFA23 = Register::Combo_Bit<ffa1r_reg_type, 23, tf>;

    template<bool tf>
    using FFA24 = Register::Combo_Bit<ffa1r_reg_type, 24, tf>;

    template<bool tf>
    using FFA25 = Register::Combo_Bit<ffa1r_reg_type, 25, tf>;

    template<bool tf>
    using FFA26 = Register::Combo_Bit<ffa1r_reg_type, 26, tf>;

    template<bool tf>
    using FFA27 = Register::Combo_Bit<ffa1r_reg_type, 27, tf>;

} // CAN_FFA1R
namespace CAN_FA1R {

    enum class fa1r_reg_type {};

    template<bool tf>
    using FACT0 = Register::Combo_Bit<fa1r_reg_type, 0, tf>;

    template<bool tf>
    using FACT1 = Register::Combo_Bit<fa1r_reg_type, 1, tf>;

    template<bool tf>
    using FACT2 = Register::Combo_Bit<fa1r_reg_type, 2, tf>;

    template<bool tf>
    using FACT3 = Register::Combo_Bit<fa1r_reg_type, 3, tf>;

    template<bool tf>
    using FACT4 = Register::Combo_Bit<fa1r_reg_type, 4, tf>;

    template<bool tf>
    using FACT5 = Register::Combo_Bit<fa1r_reg_type, 5, tf>;

    template<bool tf>
    using FACT6 = Register::Combo_Bit<fa1r_reg_type, 6, tf>;

    template<bool tf>
    using FACT7 = Register::Combo_Bit<fa1r_reg_type, 7, tf>;

    template<bool tf>
    using FACT8 = Register::Combo_Bit<fa1r_reg_type, 8, tf>;

    template<bool tf>
    using FACT9 = Register::Combo_Bit<fa1r_reg_type, 9, tf>;

    template<bool tf>
    using FACT10 = Register::Combo_Bit<fa1r_reg_type, 10, tf>;

    template<bool tf>
    using FACT11 = Register::Combo_Bit<fa1r_reg_type, 11, tf>;

    template<bool tf>
    using FACT12 = Register::Combo_Bit<fa1r_reg_type, 12, tf>;

    template<bool tf>
    using FACT13 = Register::Combo_Bit<fa1r_reg_type, 13, tf>;

    template<bool tf>
    using FACT14 = Register::Combo_Bit<fa1r_reg_type, 14, tf>;

    template<bool tf>
    using FACT15 = Register::Combo_Bit<fa1r_reg_type, 15, tf>;

    template<bool tf>
    using FACT16 = Register::Combo_Bit<fa1r_reg_type, 16, tf>;

    template<bool tf>
    using FACT17 = Register::Combo_Bit<fa1r_reg_type, 17, tf>;

    template<bool tf>
    using FACT18 = Register::Combo_Bit<fa1r_reg_type, 18, tf>;

    template<bool tf>
    using FACT19 = Register::Combo_Bit<fa1r_reg_type, 19, tf>;

    template<bool tf>
    using FACT20 = Register::Combo_Bit<fa1r_reg_type, 20, tf>;

    template<bool tf>
    using FACT21 = Register::Combo_Bit<fa1r_reg_type, 21, tf>;

    template<bool tf>
    using FACT22 = Register::Combo_Bit<fa1r_reg_type, 22, tf>;

    template<bool tf>
    using FACT23 = Register::Combo_Bit<fa1r_reg_type, 23, tf>;

    template<bool tf>
    using FACT24 = Register::Combo_Bit<fa1r_reg_type, 24, tf>;

    template<bool tf>
    using FACT25 = Register::Combo_Bit<fa1r_reg_type, 25, tf>;

    template<bool tf>
    using FACT26 = Register::Combo_Bit<fa1r_reg_type, 26, tf>;

    template<bool tf>
    using FACT27 = Register::Combo_Bit<fa1r_reg_type, 27, tf>;

} // CAN_FA1R
namespace CAN_F0R1 {

    enum class f0r1_reg_type {};

    template<bool tf>
    using FB0 = Register::Combo_Bit<f0r1_reg_type, 0, tf>;

    template<bool tf>
    using FB1 = Register::Combo_Bit<f0r1_reg_type, 1, tf>;

    template<bool tf>
    using FB2 = Register::Combo_Bit<f0r1_reg_type, 2, tf>;

    template<bool tf>
    using FB3 = Register::Combo_Bit<f0r1_reg_type, 3, tf>;

    template<bool tf>
    using FB4 = Register::Combo_Bit<f0r1_reg_type, 4, tf>;

    template<bool tf>
    using FB5 = Register::Combo_Bit<f0r1_reg_type, 5, tf>;

    template<bool tf>
    using FB6 = Register::Combo_Bit<f0r1_reg_type, 6, tf>;

    template<bool tf>
    using FB7 = Register::Combo_Bit<f0r1_reg_type, 7, tf>;

    template<bool tf>
    using FB8 = Register::Combo_Bit<f0r1_reg_type, 8, tf>;

    template<bool tf>
    using FB9 = Register::Combo_Bit<f0r1_reg_type, 9, tf>;

    template<bool tf>
    using FB10 = Register::Combo_Bit<f0r1_reg_type, 10, tf>;

    template<bool tf>
    using FB11 = Register::Combo_Bit<f0r1_reg_type, 11, tf>;

    template<bool tf>
    using FB12 = Register::Combo_Bit<f0r1_reg_type, 12, tf>;

    template<bool tf>
    using FB13 = Register::Combo_Bit<f0r1_reg_type, 13, tf>;

    template<bool tf>
    using FB14 = Register::Combo_Bit<f0r1_reg_type, 14, tf>;

    template<bool tf>
    using FB15 = Register::Combo_Bit<f0r1_reg_type, 15, tf>;

    template<bool tf>
    using FB16 = Register::Combo_Bit<f0r1_reg_type, 16, tf>;

    template<bool tf>
    using FB17 = Register::Combo_Bit<f0r1_reg_type, 17, tf>;

    template<bool tf>
    using FB18 = Register::Combo_Bit<f0r1_reg_type, 18, tf>;

    template<bool tf>
    using FB19 = Register::Combo_Bit<f0r1_reg_type, 19, tf>;

    template<bool tf>
    using FB20 = Register::Combo_Bit<f0r1_reg_type, 20, tf>;

    template<bool tf>
    using FB21 = Register::Combo_Bit<f0r1_reg_type, 21, tf>;

    template<bool tf>
    using FB22 = Register::Combo_Bit<f0r1_reg_type, 22, tf>;

    template<bool tf>
    using FB23 = Register::Combo_Bit<f0r1_reg_type, 23, tf>;

    template<bool tf>
    using FB24 = Register::Combo_Bit<f0r1_reg_type, 24, tf>;

    template<bool tf>
    using FB25 = Register::Combo_Bit<f0r1_reg_type, 25, tf>;

    template<bool tf>
    using FB26 = Register::Combo_Bit<f0r1_reg_type, 26, tf>;

    template<bool tf>
    using FB27 = Register::Combo_Bit<f0r1_reg_type, 27, tf>;

    template<bool tf>
    using FB28 = Register::Combo_Bit<f0r1_reg_type, 28, tf>;

    template<bool tf>
    using FB29 = Register::Combo_Bit<f0r1_reg_type, 29, tf>;

    template<bool tf>
    using FB30 = Register::Combo_Bit<f0r1_reg_type, 30, tf>;

    template<bool tf>
    using FB31 = Register::Combo_Bit<f0r1_reg_type, 31, tf>;

} // CAN_F0R1
namespace CAN_F0R2 {

    enum class f0r2_reg_type {};

    template<bool tf>
    using FB0 = Register::Combo_Bit<f0r2_reg_type, 0, tf>;

    template<bool tf>
    using FB1 = Register::Combo_Bit<f0r2_reg_type, 1, tf>;

    template<bool tf>
    using FB2 = Register::Combo_Bit<f0r2_reg_type, 2, tf>;

    template<bool tf>
    using FB3 = Register::Combo_Bit<f0r2_reg_type, 3, tf>;

    template<bool tf>
    using FB4 = Register::Combo_Bit<f0r2_reg_type, 4, tf>;

    template<bool tf>
    using FB5 = Register::Combo_Bit<f0r2_reg_type, 5, tf>;

    template<bool tf>
    using FB6 = Register::Combo_Bit<f0r2_reg_type, 6, tf>;

    template<bool tf>
    using FB7 = Register::Combo_Bit<f0r2_reg_type, 7, tf>;

    template<bool tf>
    using FB8 = Register::Combo_Bit<f0r2_reg_type, 8, tf>;

    template<bool tf>
    using FB9 = Register::Combo_Bit<f0r2_reg_type, 9, tf>;

    template<bool tf>
    using FB10 = Register::Combo_Bit<f0r2_reg_type, 10, tf>;

    template<bool tf>
    using FB11 = Register::Combo_Bit<f0r2_reg_type, 11, tf>;

    template<bool tf>
    using FB12 = Register::Combo_Bit<f0r2_reg_type, 12, tf>;

    template<bool tf>
    using FB13 = Register::Combo_Bit<f0r2_reg_type, 13, tf>;

    template<bool tf>
    using FB14 = Register::Combo_Bit<f0r2_reg_type, 14, tf>;

    template<bool tf>
    using FB15 = Register::Combo_Bit<f0r2_reg_type, 15, tf>;

    template<bool tf>
    using FB16 = Register::Combo_Bit<f0r2_reg_type, 16, tf>;

    template<bool tf>
    using FB17 = Register::Combo_Bit<f0r2_reg_type, 17, tf>;

    template<bool tf>
    using FB18 = Register::Combo_Bit<f0r2_reg_type, 18, tf>;

    template<bool tf>
    using FB19 = Register::Combo_Bit<f0r2_reg_type, 19, tf>;

    template<bool tf>
    using FB20 = Register::Combo_Bit<f0r2_reg_type, 20, tf>;

    template<bool tf>
    using FB21 = Register::Combo_Bit<f0r2_reg_type, 21, tf>;

    template<bool tf>
    using FB22 = Register::Combo_Bit<f0r2_reg_type, 22, tf>;

    template<bool tf>
    using FB23 = Register::Combo_Bit<f0r2_reg_type, 23, tf>;

    template<bool tf>
    using FB24 = Register::Combo_Bit<f0r2_reg_type, 24, tf>;

    template<bool tf>
    using FB25 = Register::Combo_Bit<f0r2_reg_type, 25, tf>;

    template<bool tf>
    using FB26 = Register::Combo_Bit<f0r2_reg_type, 26, tf>;

    template<bool tf>
    using FB27 = Register::Combo_Bit<f0r2_reg_type, 27, tf>;

    template<bool tf>
    using FB28 = Register::Combo_Bit<f0r2_reg_type, 28, tf>;

    template<bool tf>
    using FB29 = Register::Combo_Bit<f0r2_reg_type, 29, tf>;

    template<bool tf>
    using FB30 = Register::Combo_Bit<f0r2_reg_type, 30, tf>;

    template<bool tf>
    using FB31 = Register::Combo_Bit<f0r2_reg_type, 31, tf>;

} // CAN_F0R2
namespace CAN_F1R1 {

    enum class f1r1_reg_type {};

    template<bool tf>
    using FB0 = Register::Combo_Bit<f1r1_reg_type, 0, tf>;

    template<bool tf>
    using FB1 = Register::Combo_Bit<f1r1_reg_type, 1, tf>;

    template<bool tf>
    using FB2 = Register::Combo_Bit<f1r1_reg_type, 2, tf>;

    template<bool tf>
    using FB3 = Register::Combo_Bit<f1r1_reg_type, 3, tf>;

    template<bool tf>
    using FB4 = Register::Combo_Bit<f1r1_reg_type, 4, tf>;

    template<bool tf>
    using FB5 = Register::Combo_Bit<f1r1_reg_type, 5, tf>;

    template<bool tf>
    using FB6 = Register::Combo_Bit<f1r1_reg_type, 6, tf>;

    template<bool tf>
    using FB7 = Register::Combo_Bit<f1r1_reg_type, 7, tf>;

    template<bool tf>
    using FB8 = Register::Combo_Bit<f1r1_reg_type, 8, tf>;

    template<bool tf>
    using FB9 = Register::Combo_Bit<f1r1_reg_type, 9, tf>;

    template<bool tf>
    using FB10 = Register::Combo_Bit<f1r1_reg_type, 10, tf>;

    template<bool tf>
    using FB11 = Register::Combo_Bit<f1r1_reg_type, 11, tf>;

    template<bool tf>
    using FB12 = Register::Combo_Bit<f1r1_reg_type, 12, tf>;

    template<bool tf>
    using FB13 = Register::Combo_Bit<f1r1_reg_type, 13, tf>;

    template<bool tf>
    using FB14 = Register::Combo_Bit<f1r1_reg_type, 14, tf>;

    template<bool tf>
    using FB15 = Register::Combo_Bit<f1r1_reg_type, 15, tf>;

    template<bool tf>
    using FB16 = Register::Combo_Bit<f1r1_reg_type, 16, tf>;

    template<bool tf>
    using FB17 = Register::Combo_Bit<f1r1_reg_type, 17, tf>;

    template<bool tf>
    using FB18 = Register::Combo_Bit<f1r1_reg_type, 18, tf>;

    template<bool tf>
    using FB19 = Register::Combo_Bit<f1r1_reg_type, 19, tf>;

    template<bool tf>
    using FB20 = Register::Combo_Bit<f1r1_reg_type, 20, tf>;

    template<bool tf>
    using FB21 = Register::Combo_Bit<f1r1_reg_type, 21, tf>;

    template<bool tf>
    using FB22 = Register::Combo_Bit<f1r1_reg_type, 22, tf>;

    template<bool tf>
    using FB23 = Register::Combo_Bit<f1r1_reg_type, 23, tf>;

    template<bool tf>
    using FB24 = Register::Combo_Bit<f1r1_reg_type, 24, tf>;

    template<bool tf>
    using FB25 = Register::Combo_Bit<f1r1_reg_type, 25, tf>;

    template<bool tf>
    using FB26 = Register::Combo_Bit<f1r1_reg_type, 26, tf>;

    template<bool tf>
    using FB27 = Register::Combo_Bit<f1r1_reg_type, 27, tf>;

    template<bool tf>
    using FB28 = Register::Combo_Bit<f1r1_reg_type, 28, tf>;

    template<bool tf>
    using FB29 = Register::Combo_Bit<f1r1_reg_type, 29, tf>;

    template<bool tf>
    using FB30 = Register::Combo_Bit<f1r1_reg_type, 30, tf>;

    template<bool tf>
    using FB31 = Register::Combo_Bit<f1r1_reg_type, 31, tf>;

} // CAN_F1R1
namespace CAN_F1R2 {

    enum class f1r2_reg_type {};

    template<bool tf>
    using FB0 = Register::Combo_Bit<f1r2_reg_type, 0, tf>;

    template<bool tf>
    using FB1 = Register::Combo_Bit<f1r2_reg_type, 1, tf>;

    template<bool tf>
    using FB2 = Register::Combo_Bit<f1r2_reg_type, 2, tf>;

    template<bool tf>
    using FB3 = Register::Combo_Bit<f1r2_reg_type, 3, tf>;

    template<bool tf>
    using FB4 = Register::Combo_Bit<f1r2_reg_type, 4, tf>;

    template<bool tf>
    using FB5 = Register::Combo_Bit<f1r2_reg_type, 5, tf>;

    template<bool tf>
    using FB6 = Register::Combo_Bit<f1r2_reg_type, 6, tf>;

    template<bool tf>
    using FB7 = Register::Combo_Bit<f1r2_reg_type, 7, tf>;

    template<bool tf>
    using FB8 = Register::Combo_Bit<f1r2_reg_type, 8, tf>;

    template<bool tf>
    using FB9 = Register::Combo_Bit<f1r2_reg_type, 9, tf>;

    template<bool tf>
    using FB10 = Register::Combo_Bit<f1r2_reg_type, 10, tf>;

    template<bool tf>
    using FB11 = Register::Combo_Bit<f1r2_reg_type, 11, tf>;

    template<bool tf>
    using FB12 = Register::Combo_Bit<f1r2_reg_type, 12, tf>;

    template<bool tf>
    using FB13 = Register::Combo_Bit<f1r2_reg_type, 13, tf>;

    template<bool tf>
    using FB14 = Register::Combo_Bit<f1r2_reg_type, 14, tf>;

    template<bool tf>
    using FB15 = Register::Combo_Bit<f1r2_reg_type, 15, tf>;

    template<bool tf>
    using FB16 = Register::Combo_Bit<f1r2_reg_type, 16, tf>;

    template<bool tf>
    using FB17 = Register::Combo_Bit<f1r2_reg_type, 17, tf>;

    template<bool tf>
    using FB18 = Register::Combo_Bit<f1r2_reg_type, 18, tf>;

    template<bool tf>
    using FB19 = Register::Combo_Bit<f1r2_reg_type, 19, tf>;

    template<bool tf>
    using FB20 = Register::Combo_Bit<f1r2_reg_type, 20, tf>;

    template<bool tf>
    using FB21 = Register::Combo_Bit<f1r2_reg_type, 21, tf>;

    template<bool tf>
    using FB22 = Register::Combo_Bit<f1r2_reg_type, 22, tf>;

    template<bool tf>
    using FB23 = Register::Combo_Bit<f1r2_reg_type, 23, tf>;

    template<bool tf>
    using FB24 = Register::Combo_Bit<f1r2_reg_type, 24, tf>;

    template<bool tf>
    using FB25 = Register::Combo_Bit<f1r2_reg_type, 25, tf>;

    template<bool tf>
    using FB26 = Register::Combo_Bit<f1r2_reg_type, 26, tf>;

    template<bool tf>
    using FB27 = Register::Combo_Bit<f1r2_reg_type, 27, tf>;

    template<bool tf>
    using FB28 = Register::Combo_Bit<f1r2_reg_type, 28, tf>;

    template<bool tf>
    using FB29 = Register::Combo_Bit<f1r2_reg_type, 29, tf>;

    template<bool tf>
    using FB30 = Register::Combo_Bit<f1r2_reg_type, 30, tf>;

    template<bool tf>
    using FB31 = Register::Combo_Bit<f1r2_reg_type, 31, tf>;

} // CAN_F1R2
namespace CAN_F2R1 {

    enum class f2r1_reg_type {};

    template<bool tf>
    using FB0 = Register::Combo_Bit<f2r1_reg_type, 0, tf>;

    template<bool tf>
    using FB1 = Register::Combo_Bit<f2r1_reg_type, 1, tf>;

    template<bool tf>
    using FB2 = Register::Combo_Bit<f2r1_reg_type, 2, tf>;

    template<bool tf>
    using FB3 = Register::Combo_Bit<f2r1_reg_type, 3, tf>;

    template<bool tf>
    using FB4 = Register::Combo_Bit<f2r1_reg_type, 4, tf>;

    template<bool tf>
    using FB5 = Register::Combo_Bit<f2r1_reg_type, 5, tf>;

    template<bool tf>
    using FB6 = Register::Combo_Bit<f2r1_reg_type, 6, tf>;

    template<bool tf>
    using FB7 = Register::Combo_Bit<f2r1_reg_type, 7, tf>;

    template<bool tf>
    using FB8 = Register::Combo_Bit<f2r1_reg_type, 8, tf>;

    template<bool tf>
    using FB9 = Register::Combo_Bit<f2r1_reg_type, 9, tf>;

    template<bool tf>
    using FB10 = Register::Combo_Bit<f2r1_reg_type, 10, tf>;

    template<bool tf>
    using FB11 = Register::Combo_Bit<f2r1_reg_type, 11, tf>;

    template<bool tf>
    using FB12 = Register::Combo_Bit<f2r1_reg_type, 12, tf>;

    template<bool tf>
    using FB13 = Register::Combo_Bit<f2r1_reg_type, 13, tf>;

    template<bool tf>
    using FB14 = Register::Combo_Bit<f2r1_reg_type, 14, tf>;

    template<bool tf>
    using FB15 = Register::Combo_Bit<f2r1_reg_type, 15, tf>;

    template<bool tf>
    using FB16 = Register::Combo_Bit<f2r1_reg_type, 16, tf>;

    template<bool tf>
    using FB17 = Register::Combo_Bit<f2r1_reg_type, 17, tf>;

    template<bool tf>
    using FB18 = Register::Combo_Bit<f2r1_reg_type, 18, tf>;

    template<bool tf>
    using FB19 = Register::Combo_Bit<f2r1_reg_type, 19, tf>;

    template<bool tf>
    using FB20 = Register::Combo_Bit<f2r1_reg_type, 20, tf>;

    template<bool tf>
    using FB21 = Register::Combo_Bit<f2r1_reg_type, 21, tf>;

    template<bool tf>
    using FB22 = Register::Combo_Bit<f2r1_reg_type, 22, tf>;

    template<bool tf>
    using FB23 = Register::Combo_Bit<f2r1_reg_type, 23, tf>;

    template<bool tf>
    using FB24 = Register::Combo_Bit<f2r1_reg_type, 24, tf>;

    template<bool tf>
    using FB25 = Register::Combo_Bit<f2r1_reg_type, 25, tf>;

    template<bool tf>
    using FB26 = Register::Combo_Bit<f2r1_reg_type, 26, tf>;

    template<bool tf>
    using FB27 = Register::Combo_Bit<f2r1_reg_type, 27, tf>;

    template<bool tf>
    using FB28 = Register::Combo_Bit<f2r1_reg_type, 28, tf>;

    template<bool tf>
    using FB29 = Register::Combo_Bit<f2r1_reg_type, 29, tf>;

    template<bool tf>
    using FB30 = Register::Combo_Bit<f2r1_reg_type, 30, tf>;

    template<bool tf>
    using FB31 = Register::Combo_Bit<f2r1_reg_type, 31, tf>;

} // CAN_F2R1
namespace CAN_F2R2 {

    enum class f2r2_reg_type {};

    template<bool tf>
    using FB0 = Register::Combo_Bit<f2r2_reg_type, 0, tf>;

    template<bool tf>
    using FB1 = Register::Combo_Bit<f2r2_reg_type, 1, tf>;

    template<bool tf>
    using FB2 = Register::Combo_Bit<f2r2_reg_type, 2, tf>;

    template<bool tf>
    using FB3 = Register::Combo_Bit<f2r2_reg_type, 3, tf>;

    template<bool tf>
    using FB4 = Register::Combo_Bit<f2r2_reg_type, 4, tf>;

    template<bool tf>
    using FB5 = Register::Combo_Bit<f2r2_reg_type, 5, tf>;

    template<bool tf>
    using FB6 = Register::Combo_Bit<f2r2_reg_type, 6, tf>;

    template<bool tf>
    using FB7 = Register::Combo_Bit<f2r2_reg_type, 7, tf>;

    template<bool tf>
    using FB8 = Register::Combo_Bit<f2r2_reg_type, 8, tf>;

    template<bool tf>
    using FB9 = Register::Combo_Bit<f2r2_reg_type, 9, tf>;

    template<bool tf>
    using FB10 = Register::Combo_Bit<f2r2_reg_type, 10, tf>;

    template<bool tf>
    using FB11 = Register::Combo_Bit<f2r2_reg_type, 11, tf>;

    template<bool tf>
    using FB12 = Register::Combo_Bit<f2r2_reg_type, 12, tf>;

    template<bool tf>
    using FB13 = Register::Combo_Bit<f2r2_reg_type, 13, tf>;

    template<bool tf>
    using FB14 = Register::Combo_Bit<f2r2_reg_type, 14, tf>;

    template<bool tf>
    using FB15 = Register::Combo_Bit<f2r2_reg_type, 15, tf>;

    template<bool tf>
    using FB16 = Register::Combo_Bit<f2r2_reg_type, 16, tf>;

    template<bool tf>
    using FB17 = Register::Combo_Bit<f2r2_reg_type, 17, tf>;

    template<bool tf>
    using FB18 = Register::Combo_Bit<f2r2_reg_type, 18, tf>;

    template<bool tf>
    using FB19 = Register::Combo_Bit<f2r2_reg_type, 19, tf>;

    template<bool tf>
    using FB20 = Register::Combo_Bit<f2r2_reg_type, 20, tf>;

    template<bool tf>
    using FB21 = Register::Combo_Bit<f2r2_reg_type, 21, tf>;

    template<bool tf>
    using FB22 = Register::Combo_Bit<f2r2_reg_type, 22, tf>;

    template<bool tf>
    using FB23 = Register::Combo_Bit<f2r2_reg_type, 23, tf>;

    template<bool tf>
    using FB24 = Register::Combo_Bit<f2r2_reg_type, 24, tf>;

    template<bool tf>
    using FB25 = Register::Combo_Bit<f2r2_reg_type, 25, tf>;

    template<bool tf>
    using FB26 = Register::Combo_Bit<f2r2_reg_type, 26, tf>;

    template<bool tf>
    using FB27 = Register::Combo_Bit<f2r2_reg_type, 27, tf>;

    template<bool tf>
    using FB28 = Register::Combo_Bit<f2r2_reg_type, 28, tf>;

    template<bool tf>
    using FB29 = Register::Combo_Bit<f2r2_reg_type, 29, tf>;

    template<bool tf>
    using FB30 = Register::Combo_Bit<f2r2_reg_type, 30, tf>;

    template<bool tf>
    using FB31 = Register::Combo_Bit<f2r2_reg_type, 31, tf>;

} // CAN_F2R2
namespace CAN_F3R1 {

    enum class f3r1_reg_type {};

    template<bool tf>
    using FB0 = Register::Combo_Bit<f3r1_reg_type, 0, tf>;

    template<bool tf>
    using FB1 = Register::Combo_Bit<f3r1_reg_type, 1, tf>;

    template<bool tf>
    using FB2 = Register::Combo_Bit<f3r1_reg_type, 2, tf>;

    template<bool tf>
    using FB3 = Register::Combo_Bit<f3r1_reg_type, 3, tf>;

    template<bool tf>
    using FB4 = Register::Combo_Bit<f3r1_reg_type, 4, tf>;

    template<bool tf>
    using FB5 = Register::Combo_Bit<f3r1_reg_type, 5, tf>;

    template<bool tf>
    using FB6 = Register::Combo_Bit<f3r1_reg_type, 6, tf>;

    template<bool tf>
    using FB7 = Register::Combo_Bit<f3r1_reg_type, 7, tf>;

    template<bool tf>
    using FB8 = Register::Combo_Bit<f3r1_reg_type, 8, tf>;

    template<bool tf>
    using FB9 = Register::Combo_Bit<f3r1_reg_type, 9, tf>;

    template<bool tf>
    using FB10 = Register::Combo_Bit<f3r1_reg_type, 10, tf>;

    template<bool tf>
    using FB11 = Register::Combo_Bit<f3r1_reg_type, 11, tf>;

    template<bool tf>
    using FB12 = Register::Combo_Bit<f3r1_reg_type, 12, tf>;

    template<bool tf>
    using FB13 = Register::Combo_Bit<f3r1_reg_type, 13, tf>;

    template<bool tf>
    using FB14 = Register::Combo_Bit<f3r1_reg_type, 14, tf>;

    template<bool tf>
    using FB15 = Register::Combo_Bit<f3r1_reg_type, 15, tf>;

    template<bool tf>
    using FB16 = Register::Combo_Bit<f3r1_reg_type, 16, tf>;

    template<bool tf>
    using FB17 = Register::Combo_Bit<f3r1_reg_type, 17, tf>;

    template<bool tf>
    using FB18 = Register::Combo_Bit<f3r1_reg_type, 18, tf>;

    template<bool tf>
    using FB19 = Register::Combo_Bit<f3r1_reg_type, 19, tf>;

    template<bool tf>
    using FB20 = Register::Combo_Bit<f3r1_reg_type, 20, tf>;

    template<bool tf>
    using FB21 = Register::Combo_Bit<f3r1_reg_type, 21, tf>;

    template<bool tf>
    using FB22 = Register::Combo_Bit<f3r1_reg_type, 22, tf>;

    template<bool tf>
    using FB23 = Register::Combo_Bit<f3r1_reg_type, 23, tf>;

    template<bool tf>
    using FB24 = Register::Combo_Bit<f3r1_reg_type, 24, tf>;

    template<bool tf>
    using FB25 = Register::Combo_Bit<f3r1_reg_type, 25, tf>;

    template<bool tf>
    using FB26 = Register::Combo_Bit<f3r1_reg_type, 26, tf>;

    template<bool tf>
    using FB27 = Register::Combo_Bit<f3r1_reg_type, 27, tf>;

    template<bool tf>
    using FB28 = Register::Combo_Bit<f3r1_reg_type, 28, tf>;

    template<bool tf>
    using FB29 = Register::Combo_Bit<f3r1_reg_type, 29, tf>;

    template<bool tf>
    using FB30 = Register::Combo_Bit<f3r1_reg_type, 30, tf>;

    template<bool tf>
    using FB31 = Register::Combo_Bit<f3r1_reg_type, 31, tf>;

} // CAN_F3R1
namespace CAN_F3R2 {

    enum class f3r2_reg_type {};

    template<bool tf>
    using FB0 = Register::Combo_Bit<f3r2_reg_type, 0, tf>;

    template<bool tf>
    using FB1 = Register::Combo_Bit<f3r2_reg_type, 1, tf>;

    template<bool tf>
    using FB2 = Register::Combo_Bit<f3r2_reg_type, 2, tf>;

    template<bool tf>
    using FB3 = Register::Combo_Bit<f3r2_reg_type, 3, tf>;

    template<bool tf>
    using FB4 = Register::Combo_Bit<f3r2_reg_type, 4, tf>;

    template<bool tf>
    using FB5 = Register::Combo_Bit<f3r2_reg_type, 5, tf>;

    template<bool tf>
    using FB6 = Register::Combo_Bit<f3r2_reg_type, 6, tf>;

    template<bool tf>
    using FB7 = Register::Combo_Bit<f3r2_reg_type, 7, tf>;

    template<bool tf>
    using FB8 = Register::Combo_Bit<f3r2_reg_type, 8, tf>;

    template<bool tf>
    using FB9 = Register::Combo_Bit<f3r2_reg_type, 9, tf>;

    template<bool tf>
    using FB10 = Register::Combo_Bit<f3r2_reg_type, 10, tf>;

    template<bool tf>
    using FB11 = Register::Combo_Bit<f3r2_reg_type, 11, tf>;

    template<bool tf>
    using FB12 = Register::Combo_Bit<f3r2_reg_type, 12, tf>;

    template<bool tf>
    using FB13 = Register::Combo_Bit<f3r2_reg_type, 13, tf>;

    template<bool tf>
    using FB14 = Register::Combo_Bit<f3r2_reg_type, 14, tf>;

    template<bool tf>
    using FB15 = Register::Combo_Bit<f3r2_reg_type, 15, tf>;

    template<bool tf>
    using FB16 = Register::Combo_Bit<f3r2_reg_type, 16, tf>;

    template<bool tf>
    using FB17 = Register::Combo_Bit<f3r2_reg_type, 17, tf>;

    template<bool tf>
    using FB18 = Register::Combo_Bit<f3r2_reg_type, 18, tf>;

    template<bool tf>
    using FB19 = Register::Combo_Bit<f3r2_reg_type, 19, tf>;

    template<bool tf>
    using FB20 = Register::Combo_Bit<f3r2_reg_type, 20, tf>;

    template<bool tf>
    using FB21 = Register::Combo_Bit<f3r2_reg_type, 21, tf>;

    template<bool tf>
    using FB22 = Register::Combo_Bit<f3r2_reg_type, 22, tf>;

    template<bool tf>
    using FB23 = Register::Combo_Bit<f3r2_reg_type, 23, tf>;

    template<bool tf>
    using FB24 = Register::Combo_Bit<f3r2_reg_type, 24, tf>;

    template<bool tf>
    using FB25 = Register::Combo_Bit<f3r2_reg_type, 25, tf>;

    template<bool tf>
    using FB26 = Register::Combo_Bit<f3r2_reg_type, 26, tf>;

    template<bool tf>
    using FB27 = Register::Combo_Bit<f3r2_reg_type, 27, tf>;

    template<bool tf>
    using FB28 = Register::Combo_Bit<f3r2_reg_type, 28, tf>;

    template<bool tf>
    using FB29 = Register::Combo_Bit<f3r2_reg_type, 29, tf>;

    template<bool tf>
    using FB30 = Register::Combo_Bit<f3r2_reg_type, 30, tf>;

    template<bool tf>
    using FB31 = Register::Combo_Bit<f3r2_reg_type, 31, tf>;

} // CAN_F3R2
namespace CAN_F4R1 {

    enum class f4r1_reg_type {};

    template<bool tf>
    using FB0 = Register::Combo_Bit<f4r1_reg_type, 0, tf>;

    template<bool tf>
    using FB1 = Register::Combo_Bit<f4r1_reg_type, 1, tf>;

    template<bool tf>
    using FB2 = Register::Combo_Bit<f4r1_reg_type, 2, tf>;

    template<bool tf>
    using FB3 = Register::Combo_Bit<f4r1_reg_type, 3, tf>;

    template<bool tf>
    using FB4 = Register::Combo_Bit<f4r1_reg_type, 4, tf>;

    template<bool tf>
    using FB5 = Register::Combo_Bit<f4r1_reg_type, 5, tf>;

    template<bool tf>
    using FB6 = Register::Combo_Bit<f4r1_reg_type, 6, tf>;

    template<bool tf>
    using FB7 = Register::Combo_Bit<f4r1_reg_type, 7, tf>;

    template<bool tf>
    using FB8 = Register::Combo_Bit<f4r1_reg_type, 8, tf>;

    template<bool tf>
    using FB9 = Register::Combo_Bit<f4r1_reg_type, 9, tf>;

    template<bool tf>
    using FB10 = Register::Combo_Bit<f4r1_reg_type, 10, tf>;

    template<bool tf>
    using FB11 = Register::Combo_Bit<f4r1_reg_type, 11, tf>;

    template<bool tf>
    using FB12 = Register::Combo_Bit<f4r1_reg_type, 12, tf>;

    template<bool tf>
    using FB13 = Register::Combo_Bit<f4r1_reg_type, 13, tf>;

    template<bool tf>
    using FB14 = Register::Combo_Bit<f4r1_reg_type, 14, tf>;

    template<bool tf>
    using FB15 = Register::Combo_Bit<f4r1_reg_type, 15, tf>;

    template<bool tf>
    using FB16 = Register::Combo_Bit<f4r1_reg_type, 16, tf>;

    template<bool tf>
    using FB17 = Register::Combo_Bit<f4r1_reg_type, 17, tf>;

    template<bool tf>
    using FB18 = Register::Combo_Bit<f4r1_reg_type, 18, tf>;

    template<bool tf>
    using FB19 = Register::Combo_Bit<f4r1_reg_type, 19, tf>;

    template<bool tf>
    using FB20 = Register::Combo_Bit<f4r1_reg_type, 20, tf>;

    template<bool tf>
    using FB21 = Register::Combo_Bit<f4r1_reg_type, 21, tf>;

    template<bool tf>
    using FB22 = Register::Combo_Bit<f4r1_reg_type, 22, tf>;

    template<bool tf>
    using FB23 = Register::Combo_Bit<f4r1_reg_type, 23, tf>;

    template<bool tf>
    using FB24 = Register::Combo_Bit<f4r1_reg_type, 24, tf>;

    template<bool tf>
    using FB25 = Register::Combo_Bit<f4r1_reg_type, 25, tf>;

    template<bool tf>
    using FB26 = Register::Combo_Bit<f4r1_reg_type, 26, tf>;

    template<bool tf>
    using FB27 = Register::Combo_Bit<f4r1_reg_type, 27, tf>;

    template<bool tf>
    using FB28 = Register::Combo_Bit<f4r1_reg_type, 28, tf>;

    template<bool tf>
    using FB29 = Register::Combo_Bit<f4r1_reg_type, 29, tf>;

    template<bool tf>
    using FB30 = Register::Combo_Bit<f4r1_reg_type, 30, tf>;

    template<bool tf>
    using FB31 = Register::Combo_Bit<f4r1_reg_type, 31, tf>;

} // CAN_F4R1
namespace CAN_F4R2 {

    enum class f4r2_reg_type {};

    template<bool tf>
    using FB0 = Register::Combo_Bit<f4r2_reg_type, 0, tf>;

    template<bool tf>
    using FB1 = Register::Combo_Bit<f4r2_reg_type, 1, tf>;

    template<bool tf>
    using FB2 = Register::Combo_Bit<f4r2_reg_type, 2, tf>;

    template<bool tf>
    using FB3 = Register::Combo_Bit<f4r2_reg_type, 3, tf>;

    template<bool tf>
    using FB4 = Register::Combo_Bit<f4r2_reg_type, 4, tf>;

    template<bool tf>
    using FB5 = Register::Combo_Bit<f4r2_reg_type, 5, tf>;

    template<bool tf>
    using FB6 = Register::Combo_Bit<f4r2_reg_type, 6, tf>;

    template<bool tf>
    using FB7 = Register::Combo_Bit<f4r2_reg_type, 7, tf>;

    template<bool tf>
    using FB8 = Register::Combo_Bit<f4r2_reg_type, 8, tf>;

    template<bool tf>
    using FB9 = Register::Combo_Bit<f4r2_reg_type, 9, tf>;

    template<bool tf>
    using FB10 = Register::Combo_Bit<f4r2_reg_type, 10, tf>;

    template<bool tf>
    using FB11 = Register::Combo_Bit<f4r2_reg_type, 11, tf>;

    template<bool tf>
    using FB12 = Register::Combo_Bit<f4r2_reg_type, 12, tf>;

    template<bool tf>
    using FB13 = Register::Combo_Bit<f4r2_reg_type, 13, tf>;

    template<bool tf>
    using FB14 = Register::Combo_Bit<f4r2_reg_type, 14, tf>;

    template<bool tf>
    using FB15 = Register::Combo_Bit<f4r2_reg_type, 15, tf>;

    template<bool tf>
    using FB16 = Register::Combo_Bit<f4r2_reg_type, 16, tf>;

    template<bool tf>
    using FB17 = Register::Combo_Bit<f4r2_reg_type, 17, tf>;

    template<bool tf>
    using FB18 = Register::Combo_Bit<f4r2_reg_type, 18, tf>;

    template<bool tf>
    using FB19 = Register::Combo_Bit<f4r2_reg_type, 19, tf>;

    template<bool tf>
    using FB20 = Register::Combo_Bit<f4r2_reg_type, 20, tf>;

    template<bool tf>
    using FB21 = Register::Combo_Bit<f4r2_reg_type, 21, tf>;

    template<bool tf>
    using FB22 = Register::Combo_Bit<f4r2_reg_type, 22, tf>;

    template<bool tf>
    using FB23 = Register::Combo_Bit<f4r2_reg_type, 23, tf>;

    template<bool tf>
    using FB24 = Register::Combo_Bit<f4r2_reg_type, 24, tf>;

    template<bool tf>
    using FB25 = Register::Combo_Bit<f4r2_reg_type, 25, tf>;

    template<bool tf>
    using FB26 = Register::Combo_Bit<f4r2_reg_type, 26, tf>;

    template<bool tf>
    using FB27 = Register::Combo_Bit<f4r2_reg_type, 27, tf>;

    template<bool tf>
    using FB28 = Register::Combo_Bit<f4r2_reg_type, 28, tf>;

    template<bool tf>
    using FB29 = Register::Combo_Bit<f4r2_reg_type, 29, tf>;

    template<bool tf>
    using FB30 = Register::Combo_Bit<f4r2_reg_type, 30, tf>;

    template<bool tf>
    using FB31 = Register::Combo_Bit<f4r2_reg_type, 31, tf>;

} // CAN_F4R2
namespace CAN_F5R1 {

    enum class f5r1_reg_type {};

    template<bool tf>
    using FB0 = Register::Combo_Bit<f5r1_reg_type, 0, tf>;

    template<bool tf>
    using FB1 = Register::Combo_Bit<f5r1_reg_type, 1, tf>;

    template<bool tf>
    using FB2 = Register::Combo_Bit<f5r1_reg_type, 2, tf>;

    template<bool tf>
    using FB3 = Register::Combo_Bit<f5r1_reg_type, 3, tf>;

    template<bool tf>
    using FB4 = Register::Combo_Bit<f5r1_reg_type, 4, tf>;

    template<bool tf>
    using FB5 = Register::Combo_Bit<f5r1_reg_type, 5, tf>;

    template<bool tf>
    using FB6 = Register::Combo_Bit<f5r1_reg_type, 6, tf>;

    template<bool tf>
    using FB7 = Register::Combo_Bit<f5r1_reg_type, 7, tf>;

    template<bool tf>
    using FB8 = Register::Combo_Bit<f5r1_reg_type, 8, tf>;

    template<bool tf>
    using FB9 = Register::Combo_Bit<f5r1_reg_type, 9, tf>;

    template<bool tf>
    using FB10 = Register::Combo_Bit<f5r1_reg_type, 10, tf>;

    template<bool tf>
    using FB11 = Register::Combo_Bit<f5r1_reg_type, 11, tf>;

    template<bool tf>
    using FB12 = Register::Combo_Bit<f5r1_reg_type, 12, tf>;

    template<bool tf>
    using FB13 = Register::Combo_Bit<f5r1_reg_type, 13, tf>;

    template<bool tf>
    using FB14 = Register::Combo_Bit<f5r1_reg_type, 14, tf>;

    template<bool tf>
    using FB15 = Register::Combo_Bit<f5r1_reg_type, 15, tf>;

    template<bool tf>
    using FB16 = Register::Combo_Bit<f5r1_reg_type, 16, tf>;

    template<bool tf>
    using FB17 = Register::Combo_Bit<f5r1_reg_type, 17, tf>;

    template<bool tf>
    using FB18 = Register::Combo_Bit<f5r1_reg_type, 18, tf>;

    template<bool tf>
    using FB19 = Register::Combo_Bit<f5r1_reg_type, 19, tf>;

    template<bool tf>
    using FB20 = Register::Combo_Bit<f5r1_reg_type, 20, tf>;

    template<bool tf>
    using FB21 = Register::Combo_Bit<f5r1_reg_type, 21, tf>;

    template<bool tf>
    using FB22 = Register::Combo_Bit<f5r1_reg_type, 22, tf>;

    template<bool tf>
    using FB23 = Register::Combo_Bit<f5r1_reg_type, 23, tf>;

    template<bool tf>
    using FB24 = Register::Combo_Bit<f5r1_reg_type, 24, tf>;

    template<bool tf>
    using FB25 = Register::Combo_Bit<f5r1_reg_type, 25, tf>;

    template<bool tf>
    using FB26 = Register::Combo_Bit<f5r1_reg_type, 26, tf>;

    template<bool tf>
    using FB27 = Register::Combo_Bit<f5r1_reg_type, 27, tf>;

    template<bool tf>
    using FB28 = Register::Combo_Bit<f5r1_reg_type, 28, tf>;

    template<bool tf>
    using FB29 = Register::Combo_Bit<f5r1_reg_type, 29, tf>;

    template<bool tf>
    using FB30 = Register::Combo_Bit<f5r1_reg_type, 30, tf>;

    template<bool tf>
    using FB31 = Register::Combo_Bit<f5r1_reg_type, 31, tf>;

} // CAN_F5R1
namespace CAN_F5R2 {

    enum class f5r2_reg_type {};

    template<bool tf>
    using FB0 = Register::Combo_Bit<f5r2_reg_type, 0, tf>;

    template<bool tf>
    using FB1 = Register::Combo_Bit<f5r2_reg_type, 1, tf>;

    template<bool tf>
    using FB2 = Register::Combo_Bit<f5r2_reg_type, 2, tf>;

    template<bool tf>
    using FB3 = Register::Combo_Bit<f5r2_reg_type, 3, tf>;

    template<bool tf>
    using FB4 = Register::Combo_Bit<f5r2_reg_type, 4, tf>;

    template<bool tf>
    using FB5 = Register::Combo_Bit<f5r2_reg_type, 5, tf>;

    template<bool tf>
    using FB6 = Register::Combo_Bit<f5r2_reg_type, 6, tf>;

    template<bool tf>
    using FB7 = Register::Combo_Bit<f5r2_reg_type, 7, tf>;

    template<bool tf>
    using FB8 = Register::Combo_Bit<f5r2_reg_type, 8, tf>;

    template<bool tf>
    using FB9 = Register::Combo_Bit<f5r2_reg_type, 9, tf>;

    template<bool tf>
    using FB10 = Register::Combo_Bit<f5r2_reg_type, 10, tf>;

    template<bool tf>
    using FB11 = Register::Combo_Bit<f5r2_reg_type, 11, tf>;

    template<bool tf>
    using FB12 = Register::Combo_Bit<f5r2_reg_type, 12, tf>;

    template<bool tf>
    using FB13 = Register::Combo_Bit<f5r2_reg_type, 13, tf>;

    template<bool tf>
    using FB14 = Register::Combo_Bit<f5r2_reg_type, 14, tf>;

    template<bool tf>
    using FB15 = Register::Combo_Bit<f5r2_reg_type, 15, tf>;

    template<bool tf>
    using FB16 = Register::Combo_Bit<f5r2_reg_type, 16, tf>;

    template<bool tf>
    using FB17 = Register::Combo_Bit<f5r2_reg_type, 17, tf>;

    template<bool tf>
    using FB18 = Register::Combo_Bit<f5r2_reg_type, 18, tf>;

    template<bool tf>
    using FB19 = Register::Combo_Bit<f5r2_reg_type, 19, tf>;

    template<bool tf>
    using FB20 = Register::Combo_Bit<f5r2_reg_type, 20, tf>;

    template<bool tf>
    using FB21 = Register::Combo_Bit<f5r2_reg_type, 21, tf>;

    template<bool tf>
    using FB22 = Register::Combo_Bit<f5r2_reg_type, 22, tf>;

    template<bool tf>
    using FB23 = Register::Combo_Bit<f5r2_reg_type, 23, tf>;

    template<bool tf>
    using FB24 = Register::Combo_Bit<f5r2_reg_type, 24, tf>;

    template<bool tf>
    using FB25 = Register::Combo_Bit<f5r2_reg_type, 25, tf>;

    template<bool tf>
    using FB26 = Register::Combo_Bit<f5r2_reg_type, 26, tf>;

    template<bool tf>
    using FB27 = Register::Combo_Bit<f5r2_reg_type, 27, tf>;

    template<bool tf>
    using FB28 = Register::Combo_Bit<f5r2_reg_type, 28, tf>;

    template<bool tf>
    using FB29 = Register::Combo_Bit<f5r2_reg_type, 29, tf>;

    template<bool tf>
    using FB30 = Register::Combo_Bit<f5r2_reg_type, 30, tf>;

    template<bool tf>
    using FB31 = Register::Combo_Bit<f5r2_reg_type, 31, tf>;

} // CAN_F5R2
namespace CAN_F6R1 {

    enum class f6r1_reg_type {};

    template<bool tf>
    using FB0 = Register::Combo_Bit<f6r1_reg_type, 0, tf>;

    template<bool tf>
    using FB1 = Register::Combo_Bit<f6r1_reg_type, 1, tf>;

    template<bool tf>
    using FB2 = Register::Combo_Bit<f6r1_reg_type, 2, tf>;

    template<bool tf>
    using FB3 = Register::Combo_Bit<f6r1_reg_type, 3, tf>;

    template<bool tf>
    using FB4 = Register::Combo_Bit<f6r1_reg_type, 4, tf>;

    template<bool tf>
    using FB5 = Register::Combo_Bit<f6r1_reg_type, 5, tf>;

    template<bool tf>
    using FB6 = Register::Combo_Bit<f6r1_reg_type, 6, tf>;

    template<bool tf>
    using FB7 = Register::Combo_Bit<f6r1_reg_type, 7, tf>;

    template<bool tf>
    using FB8 = Register::Combo_Bit<f6r1_reg_type, 8, tf>;

    template<bool tf>
    using FB9 = Register::Combo_Bit<f6r1_reg_type, 9, tf>;

    template<bool tf>
    using FB10 = Register::Combo_Bit<f6r1_reg_type, 10, tf>;

    template<bool tf>
    using FB11 = Register::Combo_Bit<f6r1_reg_type, 11, tf>;

    template<bool tf>
    using FB12 = Register::Combo_Bit<f6r1_reg_type, 12, tf>;

    template<bool tf>
    using FB13 = Register::Combo_Bit<f6r1_reg_type, 13, tf>;

    template<bool tf>
    using FB14 = Register::Combo_Bit<f6r1_reg_type, 14, tf>;

    template<bool tf>
    using FB15 = Register::Combo_Bit<f6r1_reg_type, 15, tf>;

    template<bool tf>
    using FB16 = Register::Combo_Bit<f6r1_reg_type, 16, tf>;

    template<bool tf>
    using FB17 = Register::Combo_Bit<f6r1_reg_type, 17, tf>;

    template<bool tf>
    using FB18 = Register::Combo_Bit<f6r1_reg_type, 18, tf>;

    template<bool tf>
    using FB19 = Register::Combo_Bit<f6r1_reg_type, 19, tf>;

    template<bool tf>
    using FB20 = Register::Combo_Bit<f6r1_reg_type, 20, tf>;

    template<bool tf>
    using FB21 = Register::Combo_Bit<f6r1_reg_type, 21, tf>;

    template<bool tf>
    using FB22 = Register::Combo_Bit<f6r1_reg_type, 22, tf>;

    template<bool tf>
    using FB23 = Register::Combo_Bit<f6r1_reg_type, 23, tf>;

    template<bool tf>
    using FB24 = Register::Combo_Bit<f6r1_reg_type, 24, tf>;

    template<bool tf>
    using FB25 = Register::Combo_Bit<f6r1_reg_type, 25, tf>;

    template<bool tf>
    using FB26 = Register::Combo_Bit<f6r1_reg_type, 26, tf>;

    template<bool tf>
    using FB27 = Register::Combo_Bit<f6r1_reg_type, 27, tf>;

    template<bool tf>
    using FB28 = Register::Combo_Bit<f6r1_reg_type, 28, tf>;

    template<bool tf>
    using FB29 = Register::Combo_Bit<f6r1_reg_type, 29, tf>;

    template<bool tf>
    using FB30 = Register::Combo_Bit<f6r1_reg_type, 30, tf>;

    template<bool tf>
    using FB31 = Register::Combo_Bit<f6r1_reg_type, 31, tf>;

} // CAN_F6R1
namespace CAN_F6R2 {

    enum class f6r2_reg_type {};

    template<bool tf>
    using FB0 = Register::Combo_Bit<f6r2_reg_type, 0, tf>;

    template<bool tf>
    using FB1 = Register::Combo_Bit<f6r2_reg_type, 1, tf>;

    template<bool tf>
    using FB2 = Register::Combo_Bit<f6r2_reg_type, 2, tf>;

    template<bool tf>
    using FB3 = Register::Combo_Bit<f6r2_reg_type, 3, tf>;

    template<bool tf>
    using FB4 = Register::Combo_Bit<f6r2_reg_type, 4, tf>;

    template<bool tf>
    using FB5 = Register::Combo_Bit<f6r2_reg_type, 5, tf>;

    template<bool tf>
    using FB6 = Register::Combo_Bit<f6r2_reg_type, 6, tf>;

    template<bool tf>
    using FB7 = Register::Combo_Bit<f6r2_reg_type, 7, tf>;

    template<bool tf>
    using FB8 = Register::Combo_Bit<f6r2_reg_type, 8, tf>;

    template<bool tf>
    using FB9 = Register::Combo_Bit<f6r2_reg_type, 9, tf>;

    template<bool tf>
    using FB10 = Register::Combo_Bit<f6r2_reg_type, 10, tf>;

    template<bool tf>
    using FB11 = Register::Combo_Bit<f6r2_reg_type, 11, tf>;

    template<bool tf>
    using FB12 = Register::Combo_Bit<f6r2_reg_type, 12, tf>;

    template<bool tf>
    using FB13 = Register::Combo_Bit<f6r2_reg_type, 13, tf>;

    template<bool tf>
    using FB14 = Register::Combo_Bit<f6r2_reg_type, 14, tf>;

    template<bool tf>
    using FB15 = Register::Combo_Bit<f6r2_reg_type, 15, tf>;

    template<bool tf>
    using FB16 = Register::Combo_Bit<f6r2_reg_type, 16, tf>;

    template<bool tf>
    using FB17 = Register::Combo_Bit<f6r2_reg_type, 17, tf>;

    template<bool tf>
    using FB18 = Register::Combo_Bit<f6r2_reg_type, 18, tf>;

    template<bool tf>
    using FB19 = Register::Combo_Bit<f6r2_reg_type, 19, tf>;

    template<bool tf>
    using FB20 = Register::Combo_Bit<f6r2_reg_type, 20, tf>;

    template<bool tf>
    using FB21 = Register::Combo_Bit<f6r2_reg_type, 21, tf>;

    template<bool tf>
    using FB22 = Register::Combo_Bit<f6r2_reg_type, 22, tf>;

    template<bool tf>
    using FB23 = Register::Combo_Bit<f6r2_reg_type, 23, tf>;

    template<bool tf>
    using FB24 = Register::Combo_Bit<f6r2_reg_type, 24, tf>;

    template<bool tf>
    using FB25 = Register::Combo_Bit<f6r2_reg_type, 25, tf>;

    template<bool tf>
    using FB26 = Register::Combo_Bit<f6r2_reg_type, 26, tf>;

    template<bool tf>
    using FB27 = Register::Combo_Bit<f6r2_reg_type, 27, tf>;

    template<bool tf>
    using FB28 = Register::Combo_Bit<f6r2_reg_type, 28, tf>;

    template<bool tf>
    using FB29 = Register::Combo_Bit<f6r2_reg_type, 29, tf>;

    template<bool tf>
    using FB30 = Register::Combo_Bit<f6r2_reg_type, 30, tf>;

    template<bool tf>
    using FB31 = Register::Combo_Bit<f6r2_reg_type, 31, tf>;

} // CAN_F6R2
namespace CAN_F7R1 {

    enum class f7r1_reg_type {};

    template<bool tf>
    using FB0 = Register::Combo_Bit<f7r1_reg_type, 0, tf>;

    template<bool tf>
    using FB1 = Register::Combo_Bit<f7r1_reg_type, 1, tf>;

    template<bool tf>
    using FB2 = Register::Combo_Bit<f7r1_reg_type, 2, tf>;

    template<bool tf>
    using FB3 = Register::Combo_Bit<f7r1_reg_type, 3, tf>;

    template<bool tf>
    using FB4 = Register::Combo_Bit<f7r1_reg_type, 4, tf>;

    template<bool tf>
    using FB5 = Register::Combo_Bit<f7r1_reg_type, 5, tf>;

    template<bool tf>
    using FB6 = Register::Combo_Bit<f7r1_reg_type, 6, tf>;

    template<bool tf>
    using FB7 = Register::Combo_Bit<f7r1_reg_type, 7, tf>;

    template<bool tf>
    using FB8 = Register::Combo_Bit<f7r1_reg_type, 8, tf>;

    template<bool tf>
    using FB9 = Register::Combo_Bit<f7r1_reg_type, 9, tf>;

    template<bool tf>
    using FB10 = Register::Combo_Bit<f7r1_reg_type, 10, tf>;

    template<bool tf>
    using FB11 = Register::Combo_Bit<f7r1_reg_type, 11, tf>;

    template<bool tf>
    using FB12 = Register::Combo_Bit<f7r1_reg_type, 12, tf>;

    template<bool tf>
    using FB13 = Register::Combo_Bit<f7r1_reg_type, 13, tf>;

    template<bool tf>
    using FB14 = Register::Combo_Bit<f7r1_reg_type, 14, tf>;

    template<bool tf>
    using FB15 = Register::Combo_Bit<f7r1_reg_type, 15, tf>;

    template<bool tf>
    using FB16 = Register::Combo_Bit<f7r1_reg_type, 16, tf>;

    template<bool tf>
    using FB17 = Register::Combo_Bit<f7r1_reg_type, 17, tf>;

    template<bool tf>
    using FB18 = Register::Combo_Bit<f7r1_reg_type, 18, tf>;

    template<bool tf>
    using FB19 = Register::Combo_Bit<f7r1_reg_type, 19, tf>;

    template<bool tf>
    using FB20 = Register::Combo_Bit<f7r1_reg_type, 20, tf>;

    template<bool tf>
    using FB21 = Register::Combo_Bit<f7r1_reg_type, 21, tf>;

    template<bool tf>
    using FB22 = Register::Combo_Bit<f7r1_reg_type, 22, tf>;

    template<bool tf>
    using FB23 = Register::Combo_Bit<f7r1_reg_type, 23, tf>;

    template<bool tf>
    using FB24 = Register::Combo_Bit<f7r1_reg_type, 24, tf>;

    template<bool tf>
    using FB25 = Register::Combo_Bit<f7r1_reg_type, 25, tf>;

    template<bool tf>
    using FB26 = Register::Combo_Bit<f7r1_reg_type, 26, tf>;

    template<bool tf>
    using FB27 = Register::Combo_Bit<f7r1_reg_type, 27, tf>;

    template<bool tf>
    using FB28 = Register::Combo_Bit<f7r1_reg_type, 28, tf>;

    template<bool tf>
    using FB29 = Register::Combo_Bit<f7r1_reg_type, 29, tf>;

    template<bool tf>
    using FB30 = Register::Combo_Bit<f7r1_reg_type, 30, tf>;

    template<bool tf>
    using FB31 = Register::Combo_Bit<f7r1_reg_type, 31, tf>;

} // CAN_F7R1
namespace CAN_F7R2 {

    enum class f7r2_reg_type {};

    template<bool tf>
    using FB0 = Register::Combo_Bit<f7r2_reg_type, 0, tf>;

    template<bool tf>
    using FB1 = Register::Combo_Bit<f7r2_reg_type, 1, tf>;

    template<bool tf>
    using FB2 = Register::Combo_Bit<f7r2_reg_type, 2, tf>;

    template<bool tf>
    using FB3 = Register::Combo_Bit<f7r2_reg_type, 3, tf>;

    template<bool tf>
    using FB4 = Register::Combo_Bit<f7r2_reg_type, 4, tf>;

    template<bool tf>
    using FB5 = Register::Combo_Bit<f7r2_reg_type, 5, tf>;

    template<bool tf>
    using FB6 = Register::Combo_Bit<f7r2_reg_type, 6, tf>;

    template<bool tf>
    using FB7 = Register::Combo_Bit<f7r2_reg_type, 7, tf>;

    template<bool tf>
    using FB8 = Register::Combo_Bit<f7r2_reg_type, 8, tf>;

    template<bool tf>
    using FB9 = Register::Combo_Bit<f7r2_reg_type, 9, tf>;

    template<bool tf>
    using FB10 = Register::Combo_Bit<f7r2_reg_type, 10, tf>;

    template<bool tf>
    using FB11 = Register::Combo_Bit<f7r2_reg_type, 11, tf>;

    template<bool tf>
    using FB12 = Register::Combo_Bit<f7r2_reg_type, 12, tf>;

    template<bool tf>
    using FB13 = Register::Combo_Bit<f7r2_reg_type, 13, tf>;

    template<bool tf>
    using FB14 = Register::Combo_Bit<f7r2_reg_type, 14, tf>;

    template<bool tf>
    using FB15 = Register::Combo_Bit<f7r2_reg_type, 15, tf>;

    template<bool tf>
    using FB16 = Register::Combo_Bit<f7r2_reg_type, 16, tf>;

    template<bool tf>
    using FB17 = Register::Combo_Bit<f7r2_reg_type, 17, tf>;

    template<bool tf>
    using FB18 = Register::Combo_Bit<f7r2_reg_type, 18, tf>;

    template<bool tf>
    using FB19 = Register::Combo_Bit<f7r2_reg_type, 19, tf>;

    template<bool tf>
    using FB20 = Register::Combo_Bit<f7r2_reg_type, 20, tf>;

    template<bool tf>
    using FB21 = Register::Combo_Bit<f7r2_reg_type, 21, tf>;

    template<bool tf>
    using FB22 = Register::Combo_Bit<f7r2_reg_type, 22, tf>;

    template<bool tf>
    using FB23 = Register::Combo_Bit<f7r2_reg_type, 23, tf>;

    template<bool tf>
    using FB24 = Register::Combo_Bit<f7r2_reg_type, 24, tf>;

    template<bool tf>
    using FB25 = Register::Combo_Bit<f7r2_reg_type, 25, tf>;

    template<bool tf>
    using FB26 = Register::Combo_Bit<f7r2_reg_type, 26, tf>;

    template<bool tf>
    using FB27 = Register::Combo_Bit<f7r2_reg_type, 27, tf>;

    template<bool tf>
    using FB28 = Register::Combo_Bit<f7r2_reg_type, 28, tf>;

    template<bool tf>
    using FB29 = Register::Combo_Bit<f7r2_reg_type, 29, tf>;

    template<bool tf>
    using FB30 = Register::Combo_Bit<f7r2_reg_type, 30, tf>;

    template<bool tf>
    using FB31 = Register::Combo_Bit<f7r2_reg_type, 31, tf>;

} // CAN_F7R2
namespace CAN_F8R1 {

    enum class f8r1_reg_type {};

    template<bool tf>
    using FB0 = Register::Combo_Bit<f8r1_reg_type, 0, tf>;

    template<bool tf>
    using FB1 = Register::Combo_Bit<f8r1_reg_type, 1, tf>;

    template<bool tf>
    using FB2 = Register::Combo_Bit<f8r1_reg_type, 2, tf>;

    template<bool tf>
    using FB3 = Register::Combo_Bit<f8r1_reg_type, 3, tf>;

    template<bool tf>
    using FB4 = Register::Combo_Bit<f8r1_reg_type, 4, tf>;

    template<bool tf>
    using FB5 = Register::Combo_Bit<f8r1_reg_type, 5, tf>;

    template<bool tf>
    using FB6 = Register::Combo_Bit<f8r1_reg_type, 6, tf>;

    template<bool tf>
    using FB7 = Register::Combo_Bit<f8r1_reg_type, 7, tf>;

    template<bool tf>
    using FB8 = Register::Combo_Bit<f8r1_reg_type, 8, tf>;

    template<bool tf>
    using FB9 = Register::Combo_Bit<f8r1_reg_type, 9, tf>;

    template<bool tf>
    using FB10 = Register::Combo_Bit<f8r1_reg_type, 10, tf>;

    template<bool tf>
    using FB11 = Register::Combo_Bit<f8r1_reg_type, 11, tf>;

    template<bool tf>
    using FB12 = Register::Combo_Bit<f8r1_reg_type, 12, tf>;

    template<bool tf>
    using FB13 = Register::Combo_Bit<f8r1_reg_type, 13, tf>;

    template<bool tf>
    using FB14 = Register::Combo_Bit<f8r1_reg_type, 14, tf>;

    template<bool tf>
    using FB15 = Register::Combo_Bit<f8r1_reg_type, 15, tf>;

    template<bool tf>
    using FB16 = Register::Combo_Bit<f8r1_reg_type, 16, tf>;

    template<bool tf>
    using FB17 = Register::Combo_Bit<f8r1_reg_type, 17, tf>;

    template<bool tf>
    using FB18 = Register::Combo_Bit<f8r1_reg_type, 18, tf>;

    template<bool tf>
    using FB19 = Register::Combo_Bit<f8r1_reg_type, 19, tf>;

    template<bool tf>
    using FB20 = Register::Combo_Bit<f8r1_reg_type, 20, tf>;

    template<bool tf>
    using FB21 = Register::Combo_Bit<f8r1_reg_type, 21, tf>;

    template<bool tf>
    using FB22 = Register::Combo_Bit<f8r1_reg_type, 22, tf>;

    template<bool tf>
    using FB23 = Register::Combo_Bit<f8r1_reg_type, 23, tf>;

    template<bool tf>
    using FB24 = Register::Combo_Bit<f8r1_reg_type, 24, tf>;

    template<bool tf>
    using FB25 = Register::Combo_Bit<f8r1_reg_type, 25, tf>;

    template<bool tf>
    using FB26 = Register::Combo_Bit<f8r1_reg_type, 26, tf>;

    template<bool tf>
    using FB27 = Register::Combo_Bit<f8r1_reg_type, 27, tf>;

    template<bool tf>
    using FB28 = Register::Combo_Bit<f8r1_reg_type, 28, tf>;

    template<bool tf>
    using FB29 = Register::Combo_Bit<f8r1_reg_type, 29, tf>;

    template<bool tf>
    using FB30 = Register::Combo_Bit<f8r1_reg_type, 30, tf>;

    template<bool tf>
    using FB31 = Register::Combo_Bit<f8r1_reg_type, 31, tf>;

} // CAN_F8R1
namespace CAN_F8R2 {

    enum class f8r2_reg_type {};

    template<bool tf>
    using FB0 = Register::Combo_Bit<f8r2_reg_type, 0, tf>;

    template<bool tf>
    using FB1 = Register::Combo_Bit<f8r2_reg_type, 1, tf>;

    template<bool tf>
    using FB2 = Register::Combo_Bit<f8r2_reg_type, 2, tf>;

    template<bool tf>
    using FB3 = Register::Combo_Bit<f8r2_reg_type, 3, tf>;

    template<bool tf>
    using FB4 = Register::Combo_Bit<f8r2_reg_type, 4, tf>;

    template<bool tf>
    using FB5 = Register::Combo_Bit<f8r2_reg_type, 5, tf>;

    template<bool tf>
    using FB6 = Register::Combo_Bit<f8r2_reg_type, 6, tf>;

    template<bool tf>
    using FB7 = Register::Combo_Bit<f8r2_reg_type, 7, tf>;

    template<bool tf>
    using FB8 = Register::Combo_Bit<f8r2_reg_type, 8, tf>;

    template<bool tf>
    using FB9 = Register::Combo_Bit<f8r2_reg_type, 9, tf>;

    template<bool tf>
    using FB10 = Register::Combo_Bit<f8r2_reg_type, 10, tf>;

    template<bool tf>
    using FB11 = Register::Combo_Bit<f8r2_reg_type, 11, tf>;

    template<bool tf>
    using FB12 = Register::Combo_Bit<f8r2_reg_type, 12, tf>;

    template<bool tf>
    using FB13 = Register::Combo_Bit<f8r2_reg_type, 13, tf>;

    template<bool tf>
    using FB14 = Register::Combo_Bit<f8r2_reg_type, 14, tf>;

    template<bool tf>
    using FB15 = Register::Combo_Bit<f8r2_reg_type, 15, tf>;

    template<bool tf>
    using FB16 = Register::Combo_Bit<f8r2_reg_type, 16, tf>;

    template<bool tf>
    using FB17 = Register::Combo_Bit<f8r2_reg_type, 17, tf>;

    template<bool tf>
    using FB18 = Register::Combo_Bit<f8r2_reg_type, 18, tf>;

    template<bool tf>
    using FB19 = Register::Combo_Bit<f8r2_reg_type, 19, tf>;

    template<bool tf>
    using FB20 = Register::Combo_Bit<f8r2_reg_type, 20, tf>;

    template<bool tf>
    using FB21 = Register::Combo_Bit<f8r2_reg_type, 21, tf>;

    template<bool tf>
    using FB22 = Register::Combo_Bit<f8r2_reg_type, 22, tf>;

    template<bool tf>
    using FB23 = Register::Combo_Bit<f8r2_reg_type, 23, tf>;

    template<bool tf>
    using FB24 = Register::Combo_Bit<f8r2_reg_type, 24, tf>;

    template<bool tf>
    using FB25 = Register::Combo_Bit<f8r2_reg_type, 25, tf>;

    template<bool tf>
    using FB26 = Register::Combo_Bit<f8r2_reg_type, 26, tf>;

    template<bool tf>
    using FB27 = Register::Combo_Bit<f8r2_reg_type, 27, tf>;

    template<bool tf>
    using FB28 = Register::Combo_Bit<f8r2_reg_type, 28, tf>;

    template<bool tf>
    using FB29 = Register::Combo_Bit<f8r2_reg_type, 29, tf>;

    template<bool tf>
    using FB30 = Register::Combo_Bit<f8r2_reg_type, 30, tf>;

    template<bool tf>
    using FB31 = Register::Combo_Bit<f8r2_reg_type, 31, tf>;

} // CAN_F8R2
namespace CAN_F9R1 {

    enum class f9r1_reg_type {};

    template<bool tf>
    using FB0 = Register::Combo_Bit<f9r1_reg_type, 0, tf>;

    template<bool tf>
    using FB1 = Register::Combo_Bit<f9r1_reg_type, 1, tf>;

    template<bool tf>
    using FB2 = Register::Combo_Bit<f9r1_reg_type, 2, tf>;

    template<bool tf>
    using FB3 = Register::Combo_Bit<f9r1_reg_type, 3, tf>;

    template<bool tf>
    using FB4 = Register::Combo_Bit<f9r1_reg_type, 4, tf>;

    template<bool tf>
    using FB5 = Register::Combo_Bit<f9r1_reg_type, 5, tf>;

    template<bool tf>
    using FB6 = Register::Combo_Bit<f9r1_reg_type, 6, tf>;

    template<bool tf>
    using FB7 = Register::Combo_Bit<f9r1_reg_type, 7, tf>;

    template<bool tf>
    using FB8 = Register::Combo_Bit<f9r1_reg_type, 8, tf>;

    template<bool tf>
    using FB9 = Register::Combo_Bit<f9r1_reg_type, 9, tf>;

    template<bool tf>
    using FB10 = Register::Combo_Bit<f9r1_reg_type, 10, tf>;

    template<bool tf>
    using FB11 = Register::Combo_Bit<f9r1_reg_type, 11, tf>;

    template<bool tf>
    using FB12 = Register::Combo_Bit<f9r1_reg_type, 12, tf>;

    template<bool tf>
    using FB13 = Register::Combo_Bit<f9r1_reg_type, 13, tf>;

    template<bool tf>
    using FB14 = Register::Combo_Bit<f9r1_reg_type, 14, tf>;

    template<bool tf>
    using FB15 = Register::Combo_Bit<f9r1_reg_type, 15, tf>;

    template<bool tf>
    using FB16 = Register::Combo_Bit<f9r1_reg_type, 16, tf>;

    template<bool tf>
    using FB17 = Register::Combo_Bit<f9r1_reg_type, 17, tf>;

    template<bool tf>
    using FB18 = Register::Combo_Bit<f9r1_reg_type, 18, tf>;

    template<bool tf>
    using FB19 = Register::Combo_Bit<f9r1_reg_type, 19, tf>;

    template<bool tf>
    using FB20 = Register::Combo_Bit<f9r1_reg_type, 20, tf>;

    template<bool tf>
    using FB21 = Register::Combo_Bit<f9r1_reg_type, 21, tf>;

    template<bool tf>
    using FB22 = Register::Combo_Bit<f9r1_reg_type, 22, tf>;

    template<bool tf>
    using FB23 = Register::Combo_Bit<f9r1_reg_type, 23, tf>;

    template<bool tf>
    using FB24 = Register::Combo_Bit<f9r1_reg_type, 24, tf>;

    template<bool tf>
    using FB25 = Register::Combo_Bit<f9r1_reg_type, 25, tf>;

    template<bool tf>
    using FB26 = Register::Combo_Bit<f9r1_reg_type, 26, tf>;

    template<bool tf>
    using FB27 = Register::Combo_Bit<f9r1_reg_type, 27, tf>;

    template<bool tf>
    using FB28 = Register::Combo_Bit<f9r1_reg_type, 28, tf>;

    template<bool tf>
    using FB29 = Register::Combo_Bit<f9r1_reg_type, 29, tf>;

    template<bool tf>
    using FB30 = Register::Combo_Bit<f9r1_reg_type, 30, tf>;

    template<bool tf>
    using FB31 = Register::Combo_Bit<f9r1_reg_type, 31, tf>;

} // CAN_F9R1
namespace CAN_F9R2 {

    enum class f9r2_reg_type {};

    template<bool tf>
    using FB0 = Register::Combo_Bit<f9r2_reg_type, 0, tf>;

    template<bool tf>
    using FB1 = Register::Combo_Bit<f9r2_reg_type, 1, tf>;

    template<bool tf>
    using FB2 = Register::Combo_Bit<f9r2_reg_type, 2, tf>;

    template<bool tf>
    using FB3 = Register::Combo_Bit<f9r2_reg_type, 3, tf>;

    template<bool tf>
    using FB4 = Register::Combo_Bit<f9r2_reg_type, 4, tf>;

    template<bool tf>
    using FB5 = Register::Combo_Bit<f9r2_reg_type, 5, tf>;

    template<bool tf>
    using FB6 = Register::Combo_Bit<f9r2_reg_type, 6, tf>;

    template<bool tf>
    using FB7 = Register::Combo_Bit<f9r2_reg_type, 7, tf>;

    template<bool tf>
    using FB8 = Register::Combo_Bit<f9r2_reg_type, 8, tf>;

    template<bool tf>
    using FB9 = Register::Combo_Bit<f9r2_reg_type, 9, tf>;

    template<bool tf>
    using FB10 = Register::Combo_Bit<f9r2_reg_type, 10, tf>;

    template<bool tf>
    using FB11 = Register::Combo_Bit<f9r2_reg_type, 11, tf>;

    template<bool tf>
    using FB12 = Register::Combo_Bit<f9r2_reg_type, 12, tf>;

    template<bool tf>
    using FB13 = Register::Combo_Bit<f9r2_reg_type, 13, tf>;

    template<bool tf>
    using FB14 = Register::Combo_Bit<f9r2_reg_type, 14, tf>;

    template<bool tf>
    using FB15 = Register::Combo_Bit<f9r2_reg_type, 15, tf>;

    template<bool tf>
    using FB16 = Register::Combo_Bit<f9r2_reg_type, 16, tf>;

    template<bool tf>
    using FB17 = Register::Combo_Bit<f9r2_reg_type, 17, tf>;

    template<bool tf>
    using FB18 = Register::Combo_Bit<f9r2_reg_type, 18, tf>;

    template<bool tf>
    using FB19 = Register::Combo_Bit<f9r2_reg_type, 19, tf>;

    template<bool tf>
    using FB20 = Register::Combo_Bit<f9r2_reg_type, 20, tf>;

    template<bool tf>
    using FB21 = Register::Combo_Bit<f9r2_reg_type, 21, tf>;

    template<bool tf>
    using FB22 = Register::Combo_Bit<f9r2_reg_type, 22, tf>;

    template<bool tf>
    using FB23 = Register::Combo_Bit<f9r2_reg_type, 23, tf>;

    template<bool tf>
    using FB24 = Register::Combo_Bit<f9r2_reg_type, 24, tf>;

    template<bool tf>
    using FB25 = Register::Combo_Bit<f9r2_reg_type, 25, tf>;

    template<bool tf>
    using FB26 = Register::Combo_Bit<f9r2_reg_type, 26, tf>;

    template<bool tf>
    using FB27 = Register::Combo_Bit<f9r2_reg_type, 27, tf>;

    template<bool tf>
    using FB28 = Register::Combo_Bit<f9r2_reg_type, 28, tf>;

    template<bool tf>
    using FB29 = Register::Combo_Bit<f9r2_reg_type, 29, tf>;

    template<bool tf>
    using FB30 = Register::Combo_Bit<f9r2_reg_type, 30, tf>;

    template<bool tf>
    using FB31 = Register::Combo_Bit<f9r2_reg_type, 31, tf>;

} // CAN_F9R2
namespace CAN_F10R1 {

    enum class f10r1_reg_type {};

    template<bool tf>
    using FB0 = Register::Combo_Bit<f10r1_reg_type, 0, tf>;

    template<bool tf>
    using FB1 = Register::Combo_Bit<f10r1_reg_type, 1, tf>;

    template<bool tf>
    using FB2 = Register::Combo_Bit<f10r1_reg_type, 2, tf>;

    template<bool tf>
    using FB3 = Register::Combo_Bit<f10r1_reg_type, 3, tf>;

    template<bool tf>
    using FB4 = Register::Combo_Bit<f10r1_reg_type, 4, tf>;

    template<bool tf>
    using FB5 = Register::Combo_Bit<f10r1_reg_type, 5, tf>;

    template<bool tf>
    using FB6 = Register::Combo_Bit<f10r1_reg_type, 6, tf>;

    template<bool tf>
    using FB7 = Register::Combo_Bit<f10r1_reg_type, 7, tf>;

    template<bool tf>
    using FB8 = Register::Combo_Bit<f10r1_reg_type, 8, tf>;

    template<bool tf>
    using FB9 = Register::Combo_Bit<f10r1_reg_type, 9, tf>;

    template<bool tf>
    using FB10 = Register::Combo_Bit<f10r1_reg_type, 10, tf>;

    template<bool tf>
    using FB11 = Register::Combo_Bit<f10r1_reg_type, 11, tf>;

    template<bool tf>
    using FB12 = Register::Combo_Bit<f10r1_reg_type, 12, tf>;

    template<bool tf>
    using FB13 = Register::Combo_Bit<f10r1_reg_type, 13, tf>;

    template<bool tf>
    using FB14 = Register::Combo_Bit<f10r1_reg_type, 14, tf>;

    template<bool tf>
    using FB15 = Register::Combo_Bit<f10r1_reg_type, 15, tf>;

    template<bool tf>
    using FB16 = Register::Combo_Bit<f10r1_reg_type, 16, tf>;

    template<bool tf>
    using FB17 = Register::Combo_Bit<f10r1_reg_type, 17, tf>;

    template<bool tf>
    using FB18 = Register::Combo_Bit<f10r1_reg_type, 18, tf>;

    template<bool tf>
    using FB19 = Register::Combo_Bit<f10r1_reg_type, 19, tf>;

    template<bool tf>
    using FB20 = Register::Combo_Bit<f10r1_reg_type, 20, tf>;

    template<bool tf>
    using FB21 = Register::Combo_Bit<f10r1_reg_type, 21, tf>;

    template<bool tf>
    using FB22 = Register::Combo_Bit<f10r1_reg_type, 22, tf>;

    template<bool tf>
    using FB23 = Register::Combo_Bit<f10r1_reg_type, 23, tf>;

    template<bool tf>
    using FB24 = Register::Combo_Bit<f10r1_reg_type, 24, tf>;

    template<bool tf>
    using FB25 = Register::Combo_Bit<f10r1_reg_type, 25, tf>;

    template<bool tf>
    using FB26 = Register::Combo_Bit<f10r1_reg_type, 26, tf>;

    template<bool tf>
    using FB27 = Register::Combo_Bit<f10r1_reg_type, 27, tf>;

    template<bool tf>
    using FB28 = Register::Combo_Bit<f10r1_reg_type, 28, tf>;

    template<bool tf>
    using FB29 = Register::Combo_Bit<f10r1_reg_type, 29, tf>;

    template<bool tf>
    using FB30 = Register::Combo_Bit<f10r1_reg_type, 30, tf>;

    template<bool tf>
    using FB31 = Register::Combo_Bit<f10r1_reg_type, 31, tf>;

} // CAN_F10R1
namespace CAN_F10R2 {

    enum class f10r2_reg_type {};

    template<bool tf>
    using FB0 = Register::Combo_Bit<f10r2_reg_type, 0, tf>;

    template<bool tf>
    using FB1 = Register::Combo_Bit<f10r2_reg_type, 1, tf>;

    template<bool tf>
    using FB2 = Register::Combo_Bit<f10r2_reg_type, 2, tf>;

    template<bool tf>
    using FB3 = Register::Combo_Bit<f10r2_reg_type, 3, tf>;

    template<bool tf>
    using FB4 = Register::Combo_Bit<f10r2_reg_type, 4, tf>;

    template<bool tf>
    using FB5 = Register::Combo_Bit<f10r2_reg_type, 5, tf>;

    template<bool tf>
    using FB6 = Register::Combo_Bit<f10r2_reg_type, 6, tf>;

    template<bool tf>
    using FB7 = Register::Combo_Bit<f10r2_reg_type, 7, tf>;

    template<bool tf>
    using FB8 = Register::Combo_Bit<f10r2_reg_type, 8, tf>;

    template<bool tf>
    using FB9 = Register::Combo_Bit<f10r2_reg_type, 9, tf>;

    template<bool tf>
    using FB10 = Register::Combo_Bit<f10r2_reg_type, 10, tf>;

    template<bool tf>
    using FB11 = Register::Combo_Bit<f10r2_reg_type, 11, tf>;

    template<bool tf>
    using FB12 = Register::Combo_Bit<f10r2_reg_type, 12, tf>;

    template<bool tf>
    using FB13 = Register::Combo_Bit<f10r2_reg_type, 13, tf>;

    template<bool tf>
    using FB14 = Register::Combo_Bit<f10r2_reg_type, 14, tf>;

    template<bool tf>
    using FB15 = Register::Combo_Bit<f10r2_reg_type, 15, tf>;

    template<bool tf>
    using FB16 = Register::Combo_Bit<f10r2_reg_type, 16, tf>;

    template<bool tf>
    using FB17 = Register::Combo_Bit<f10r2_reg_type, 17, tf>;

    template<bool tf>
    using FB18 = Register::Combo_Bit<f10r2_reg_type, 18, tf>;

    template<bool tf>
    using FB19 = Register::Combo_Bit<f10r2_reg_type, 19, tf>;

    template<bool tf>
    using FB20 = Register::Combo_Bit<f10r2_reg_type, 20, tf>;

    template<bool tf>
    using FB21 = Register::Combo_Bit<f10r2_reg_type, 21, tf>;

    template<bool tf>
    using FB22 = Register::Combo_Bit<f10r2_reg_type, 22, tf>;

    template<bool tf>
    using FB23 = Register::Combo_Bit<f10r2_reg_type, 23, tf>;

    template<bool tf>
    using FB24 = Register::Combo_Bit<f10r2_reg_type, 24, tf>;

    template<bool tf>
    using FB25 = Register::Combo_Bit<f10r2_reg_type, 25, tf>;

    template<bool tf>
    using FB26 = Register::Combo_Bit<f10r2_reg_type, 26, tf>;

    template<bool tf>
    using FB27 = Register::Combo_Bit<f10r2_reg_type, 27, tf>;

    template<bool tf>
    using FB28 = Register::Combo_Bit<f10r2_reg_type, 28, tf>;

    template<bool tf>
    using FB29 = Register::Combo_Bit<f10r2_reg_type, 29, tf>;

    template<bool tf>
    using FB30 = Register::Combo_Bit<f10r2_reg_type, 30, tf>;

    template<bool tf>
    using FB31 = Register::Combo_Bit<f10r2_reg_type, 31, tf>;

} // CAN_F10R2
namespace CAN_F11R1 {

    enum class f11r1_reg_type {};

    template<bool tf>
    using FB0 = Register::Combo_Bit<f11r1_reg_type, 0, tf>;

    template<bool tf>
    using FB1 = Register::Combo_Bit<f11r1_reg_type, 1, tf>;

    template<bool tf>
    using FB2 = Register::Combo_Bit<f11r1_reg_type, 2, tf>;

    template<bool tf>
    using FB3 = Register::Combo_Bit<f11r1_reg_type, 3, tf>;

    template<bool tf>
    using FB4 = Register::Combo_Bit<f11r1_reg_type, 4, tf>;

    template<bool tf>
    using FB5 = Register::Combo_Bit<f11r1_reg_type, 5, tf>;

    template<bool tf>
    using FB6 = Register::Combo_Bit<f11r1_reg_type, 6, tf>;

    template<bool tf>
    using FB7 = Register::Combo_Bit<f11r1_reg_type, 7, tf>;

    template<bool tf>
    using FB8 = Register::Combo_Bit<f11r1_reg_type, 8, tf>;

    template<bool tf>
    using FB9 = Register::Combo_Bit<f11r1_reg_type, 9, tf>;

    template<bool tf>
    using FB10 = Register::Combo_Bit<f11r1_reg_type, 10, tf>;

    template<bool tf>
    using FB11 = Register::Combo_Bit<f11r1_reg_type, 11, tf>;

    template<bool tf>
    using FB12 = Register::Combo_Bit<f11r1_reg_type, 12, tf>;

    template<bool tf>
    using FB13 = Register::Combo_Bit<f11r1_reg_type, 13, tf>;

    template<bool tf>
    using FB14 = Register::Combo_Bit<f11r1_reg_type, 14, tf>;

    template<bool tf>
    using FB15 = Register::Combo_Bit<f11r1_reg_type, 15, tf>;

    template<bool tf>
    using FB16 = Register::Combo_Bit<f11r1_reg_type, 16, tf>;

    template<bool tf>
    using FB17 = Register::Combo_Bit<f11r1_reg_type, 17, tf>;

    template<bool tf>
    using FB18 = Register::Combo_Bit<f11r1_reg_type, 18, tf>;

    template<bool tf>
    using FB19 = Register::Combo_Bit<f11r1_reg_type, 19, tf>;

    template<bool tf>
    using FB20 = Register::Combo_Bit<f11r1_reg_type, 20, tf>;

    template<bool tf>
    using FB21 = Register::Combo_Bit<f11r1_reg_type, 21, tf>;

    template<bool tf>
    using FB22 = Register::Combo_Bit<f11r1_reg_type, 22, tf>;

    template<bool tf>
    using FB23 = Register::Combo_Bit<f11r1_reg_type, 23, tf>;

    template<bool tf>
    using FB24 = Register::Combo_Bit<f11r1_reg_type, 24, tf>;

    template<bool tf>
    using FB25 = Register::Combo_Bit<f11r1_reg_type, 25, tf>;

    template<bool tf>
    using FB26 = Register::Combo_Bit<f11r1_reg_type, 26, tf>;

    template<bool tf>
    using FB27 = Register::Combo_Bit<f11r1_reg_type, 27, tf>;

    template<bool tf>
    using FB28 = Register::Combo_Bit<f11r1_reg_type, 28, tf>;

    template<bool tf>
    using FB29 = Register::Combo_Bit<f11r1_reg_type, 29, tf>;

    template<bool tf>
    using FB30 = Register::Combo_Bit<f11r1_reg_type, 30, tf>;

    template<bool tf>
    using FB31 = Register::Combo_Bit<f11r1_reg_type, 31, tf>;

} // CAN_F11R1
namespace CAN_F11R2 {

    enum class f11r2_reg_type {};

    template<bool tf>
    using FB0 = Register::Combo_Bit<f11r2_reg_type, 0, tf>;

    template<bool tf>
    using FB1 = Register::Combo_Bit<f11r2_reg_type, 1, tf>;

    template<bool tf>
    using FB2 = Register::Combo_Bit<f11r2_reg_type, 2, tf>;

    template<bool tf>
    using FB3 = Register::Combo_Bit<f11r2_reg_type, 3, tf>;

    template<bool tf>
    using FB4 = Register::Combo_Bit<f11r2_reg_type, 4, tf>;

    template<bool tf>
    using FB5 = Register::Combo_Bit<f11r2_reg_type, 5, tf>;

    template<bool tf>
    using FB6 = Register::Combo_Bit<f11r2_reg_type, 6, tf>;

    template<bool tf>
    using FB7 = Register::Combo_Bit<f11r2_reg_type, 7, tf>;

    template<bool tf>
    using FB8 = Register::Combo_Bit<f11r2_reg_type, 8, tf>;

    template<bool tf>
    using FB9 = Register::Combo_Bit<f11r2_reg_type, 9, tf>;

    template<bool tf>
    using FB10 = Register::Combo_Bit<f11r2_reg_type, 10, tf>;

    template<bool tf>
    using FB11 = Register::Combo_Bit<f11r2_reg_type, 11, tf>;

    template<bool tf>
    using FB12 = Register::Combo_Bit<f11r2_reg_type, 12, tf>;

    template<bool tf>
    using FB13 = Register::Combo_Bit<f11r2_reg_type, 13, tf>;

    template<bool tf>
    using FB14 = Register::Combo_Bit<f11r2_reg_type, 14, tf>;

    template<bool tf>
    using FB15 = Register::Combo_Bit<f11r2_reg_type, 15, tf>;

    template<bool tf>
    using FB16 = Register::Combo_Bit<f11r2_reg_type, 16, tf>;

    template<bool tf>
    using FB17 = Register::Combo_Bit<f11r2_reg_type, 17, tf>;

    template<bool tf>
    using FB18 = Register::Combo_Bit<f11r2_reg_type, 18, tf>;

    template<bool tf>
    using FB19 = Register::Combo_Bit<f11r2_reg_type, 19, tf>;

    template<bool tf>
    using FB20 = Register::Combo_Bit<f11r2_reg_type, 20, tf>;

    template<bool tf>
    using FB21 = Register::Combo_Bit<f11r2_reg_type, 21, tf>;

    template<bool tf>
    using FB22 = Register::Combo_Bit<f11r2_reg_type, 22, tf>;

    template<bool tf>
    using FB23 = Register::Combo_Bit<f11r2_reg_type, 23, tf>;

    template<bool tf>
    using FB24 = Register::Combo_Bit<f11r2_reg_type, 24, tf>;

    template<bool tf>
    using FB25 = Register::Combo_Bit<f11r2_reg_type, 25, tf>;

    template<bool tf>
    using FB26 = Register::Combo_Bit<f11r2_reg_type, 26, tf>;

    template<bool tf>
    using FB27 = Register::Combo_Bit<f11r2_reg_type, 27, tf>;

    template<bool tf>
    using FB28 = Register::Combo_Bit<f11r2_reg_type, 28, tf>;

    template<bool tf>
    using FB29 = Register::Combo_Bit<f11r2_reg_type, 29, tf>;

    template<bool tf>
    using FB30 = Register::Combo_Bit<f11r2_reg_type, 30, tf>;

    template<bool tf>
    using FB31 = Register::Combo_Bit<f11r2_reg_type, 31, tf>;

} // CAN_F11R2
namespace CAN_F12R1 {

    enum class f12r1_reg_type {};

    template<bool tf>
    using FB0 = Register::Combo_Bit<f12r1_reg_type, 0, tf>;

    template<bool tf>
    using FB1 = Register::Combo_Bit<f12r1_reg_type, 1, tf>;

    template<bool tf>
    using FB2 = Register::Combo_Bit<f12r1_reg_type, 2, tf>;

    template<bool tf>
    using FB3 = Register::Combo_Bit<f12r1_reg_type, 3, tf>;

    template<bool tf>
    using FB4 = Register::Combo_Bit<f12r1_reg_type, 4, tf>;

    template<bool tf>
    using FB5 = Register::Combo_Bit<f12r1_reg_type, 5, tf>;

    template<bool tf>
    using FB6 = Register::Combo_Bit<f12r1_reg_type, 6, tf>;

    template<bool tf>
    using FB7 = Register::Combo_Bit<f12r1_reg_type, 7, tf>;

    template<bool tf>
    using FB8 = Register::Combo_Bit<f12r1_reg_type, 8, tf>;

    template<bool tf>
    using FB9 = Register::Combo_Bit<f12r1_reg_type, 9, tf>;

    template<bool tf>
    using FB10 = Register::Combo_Bit<f12r1_reg_type, 10, tf>;

    template<bool tf>
    using FB11 = Register::Combo_Bit<f12r1_reg_type, 11, tf>;

    template<bool tf>
    using FB12 = Register::Combo_Bit<f12r1_reg_type, 12, tf>;

    template<bool tf>
    using FB13 = Register::Combo_Bit<f12r1_reg_type, 13, tf>;

    template<bool tf>
    using FB14 = Register::Combo_Bit<f12r1_reg_type, 14, tf>;

    template<bool tf>
    using FB15 = Register::Combo_Bit<f12r1_reg_type, 15, tf>;

    template<bool tf>
    using FB16 = Register::Combo_Bit<f12r1_reg_type, 16, tf>;

    template<bool tf>
    using FB17 = Register::Combo_Bit<f12r1_reg_type, 17, tf>;

    template<bool tf>
    using FB18 = Register::Combo_Bit<f12r1_reg_type, 18, tf>;

    template<bool tf>
    using FB19 = Register::Combo_Bit<f12r1_reg_type, 19, tf>;

    template<bool tf>
    using FB20 = Register::Combo_Bit<f12r1_reg_type, 20, tf>;

    template<bool tf>
    using FB21 = Register::Combo_Bit<f12r1_reg_type, 21, tf>;

    template<bool tf>
    using FB22 = Register::Combo_Bit<f12r1_reg_type, 22, tf>;

    template<bool tf>
    using FB23 = Register::Combo_Bit<f12r1_reg_type, 23, tf>;

    template<bool tf>
    using FB24 = Register::Combo_Bit<f12r1_reg_type, 24, tf>;

    template<bool tf>
    using FB25 = Register::Combo_Bit<f12r1_reg_type, 25, tf>;

    template<bool tf>
    using FB26 = Register::Combo_Bit<f12r1_reg_type, 26, tf>;

    template<bool tf>
    using FB27 = Register::Combo_Bit<f12r1_reg_type, 27, tf>;

    template<bool tf>
    using FB28 = Register::Combo_Bit<f12r1_reg_type, 28, tf>;

    template<bool tf>
    using FB29 = Register::Combo_Bit<f12r1_reg_type, 29, tf>;

    template<bool tf>
    using FB30 = Register::Combo_Bit<f12r1_reg_type, 30, tf>;

    template<bool tf>
    using FB31 = Register::Combo_Bit<f12r1_reg_type, 31, tf>;

} // CAN_F12R1
namespace CAN_F12R2 {

    enum class f12r2_reg_type {};

    template<bool tf>
    using FB0 = Register::Combo_Bit<f12r2_reg_type, 0, tf>;

    template<bool tf>
    using FB1 = Register::Combo_Bit<f12r2_reg_type, 1, tf>;

    template<bool tf>
    using FB2 = Register::Combo_Bit<f12r2_reg_type, 2, tf>;

    template<bool tf>
    using FB3 = Register::Combo_Bit<f12r2_reg_type, 3, tf>;

    template<bool tf>
    using FB4 = Register::Combo_Bit<f12r2_reg_type, 4, tf>;

    template<bool tf>
    using FB5 = Register::Combo_Bit<f12r2_reg_type, 5, tf>;

    template<bool tf>
    using FB6 = Register::Combo_Bit<f12r2_reg_type, 6, tf>;

    template<bool tf>
    using FB7 = Register::Combo_Bit<f12r2_reg_type, 7, tf>;

    template<bool tf>
    using FB8 = Register::Combo_Bit<f12r2_reg_type, 8, tf>;

    template<bool tf>
    using FB9 = Register::Combo_Bit<f12r2_reg_type, 9, tf>;

    template<bool tf>
    using FB10 = Register::Combo_Bit<f12r2_reg_type, 10, tf>;

    template<bool tf>
    using FB11 = Register::Combo_Bit<f12r2_reg_type, 11, tf>;

    template<bool tf>
    using FB12 = Register::Combo_Bit<f12r2_reg_type, 12, tf>;

    template<bool tf>
    using FB13 = Register::Combo_Bit<f12r2_reg_type, 13, tf>;

    template<bool tf>
    using FB14 = Register::Combo_Bit<f12r2_reg_type, 14, tf>;

    template<bool tf>
    using FB15 = Register::Combo_Bit<f12r2_reg_type, 15, tf>;

    template<bool tf>
    using FB16 = Register::Combo_Bit<f12r2_reg_type, 16, tf>;

    template<bool tf>
    using FB17 = Register::Combo_Bit<f12r2_reg_type, 17, tf>;

    template<bool tf>
    using FB18 = Register::Combo_Bit<f12r2_reg_type, 18, tf>;

    template<bool tf>
    using FB19 = Register::Combo_Bit<f12r2_reg_type, 19, tf>;

    template<bool tf>
    using FB20 = Register::Combo_Bit<f12r2_reg_type, 20, tf>;

    template<bool tf>
    using FB21 = Register::Combo_Bit<f12r2_reg_type, 21, tf>;

    template<bool tf>
    using FB22 = Register::Combo_Bit<f12r2_reg_type, 22, tf>;

    template<bool tf>
    using FB23 = Register::Combo_Bit<f12r2_reg_type, 23, tf>;

    template<bool tf>
    using FB24 = Register::Combo_Bit<f12r2_reg_type, 24, tf>;

    template<bool tf>
    using FB25 = Register::Combo_Bit<f12r2_reg_type, 25, tf>;

    template<bool tf>
    using FB26 = Register::Combo_Bit<f12r2_reg_type, 26, tf>;

    template<bool tf>
    using FB27 = Register::Combo_Bit<f12r2_reg_type, 27, tf>;

    template<bool tf>
    using FB28 = Register::Combo_Bit<f12r2_reg_type, 28, tf>;

    template<bool tf>
    using FB29 = Register::Combo_Bit<f12r2_reg_type, 29, tf>;

    template<bool tf>
    using FB30 = Register::Combo_Bit<f12r2_reg_type, 30, tf>;

    template<bool tf>
    using FB31 = Register::Combo_Bit<f12r2_reg_type, 31, tf>;

} // CAN_F12R2
namespace CAN_F13R1 {

    enum class f13r1_reg_type {};

    template<bool tf>
    using FB0 = Register::Combo_Bit<f13r1_reg_type, 0, tf>;

    template<bool tf>
    using FB1 = Register::Combo_Bit<f13r1_reg_type, 1, tf>;

    template<bool tf>
    using FB2 = Register::Combo_Bit<f13r1_reg_type, 2, tf>;

    template<bool tf>
    using FB3 = Register::Combo_Bit<f13r1_reg_type, 3, tf>;

    template<bool tf>
    using FB4 = Register::Combo_Bit<f13r1_reg_type, 4, tf>;

    template<bool tf>
    using FB5 = Register::Combo_Bit<f13r1_reg_type, 5, tf>;

    template<bool tf>
    using FB6 = Register::Combo_Bit<f13r1_reg_type, 6, tf>;

    template<bool tf>
    using FB7 = Register::Combo_Bit<f13r1_reg_type, 7, tf>;

    template<bool tf>
    using FB8 = Register::Combo_Bit<f13r1_reg_type, 8, tf>;

    template<bool tf>
    using FB9 = Register::Combo_Bit<f13r1_reg_type, 9, tf>;

    template<bool tf>
    using FB10 = Register::Combo_Bit<f13r1_reg_type, 10, tf>;

    template<bool tf>
    using FB11 = Register::Combo_Bit<f13r1_reg_type, 11, tf>;

    template<bool tf>
    using FB12 = Register::Combo_Bit<f13r1_reg_type, 12, tf>;

    template<bool tf>
    using FB13 = Register::Combo_Bit<f13r1_reg_type, 13, tf>;

    template<bool tf>
    using FB14 = Register::Combo_Bit<f13r1_reg_type, 14, tf>;

    template<bool tf>
    using FB15 = Register::Combo_Bit<f13r1_reg_type, 15, tf>;

    template<bool tf>
    using FB16 = Register::Combo_Bit<f13r1_reg_type, 16, tf>;

    template<bool tf>
    using FB17 = Register::Combo_Bit<f13r1_reg_type, 17, tf>;

    template<bool tf>
    using FB18 = Register::Combo_Bit<f13r1_reg_type, 18, tf>;

    template<bool tf>
    using FB19 = Register::Combo_Bit<f13r1_reg_type, 19, tf>;

    template<bool tf>
    using FB20 = Register::Combo_Bit<f13r1_reg_type, 20, tf>;

    template<bool tf>
    using FB21 = Register::Combo_Bit<f13r1_reg_type, 21, tf>;

    template<bool tf>
    using FB22 = Register::Combo_Bit<f13r1_reg_type, 22, tf>;

    template<bool tf>
    using FB23 = Register::Combo_Bit<f13r1_reg_type, 23, tf>;

    template<bool tf>
    using FB24 = Register::Combo_Bit<f13r1_reg_type, 24, tf>;

    template<bool tf>
    using FB25 = Register::Combo_Bit<f13r1_reg_type, 25, tf>;

    template<bool tf>
    using FB26 = Register::Combo_Bit<f13r1_reg_type, 26, tf>;

    template<bool tf>
    using FB27 = Register::Combo_Bit<f13r1_reg_type, 27, tf>;

    template<bool tf>
    using FB28 = Register::Combo_Bit<f13r1_reg_type, 28, tf>;

    template<bool tf>
    using FB29 = Register::Combo_Bit<f13r1_reg_type, 29, tf>;

    template<bool tf>
    using FB30 = Register::Combo_Bit<f13r1_reg_type, 30, tf>;

    template<bool tf>
    using FB31 = Register::Combo_Bit<f13r1_reg_type, 31, tf>;

} // CAN_F13R1
namespace CAN_F13R2 {

    enum class f13r2_reg_type {};

    template<bool tf>
    using FB0 = Register::Combo_Bit<f13r2_reg_type, 0, tf>;

    template<bool tf>
    using FB1 = Register::Combo_Bit<f13r2_reg_type, 1, tf>;

    template<bool tf>
    using FB2 = Register::Combo_Bit<f13r2_reg_type, 2, tf>;

    template<bool tf>
    using FB3 = Register::Combo_Bit<f13r2_reg_type, 3, tf>;

    template<bool tf>
    using FB4 = Register::Combo_Bit<f13r2_reg_type, 4, tf>;

    template<bool tf>
    using FB5 = Register::Combo_Bit<f13r2_reg_type, 5, tf>;

    template<bool tf>
    using FB6 = Register::Combo_Bit<f13r2_reg_type, 6, tf>;

    template<bool tf>
    using FB7 = Register::Combo_Bit<f13r2_reg_type, 7, tf>;

    template<bool tf>
    using FB8 = Register::Combo_Bit<f13r2_reg_type, 8, tf>;

    template<bool tf>
    using FB9 = Register::Combo_Bit<f13r2_reg_type, 9, tf>;

    template<bool tf>
    using FB10 = Register::Combo_Bit<f13r2_reg_type, 10, tf>;

    template<bool tf>
    using FB11 = Register::Combo_Bit<f13r2_reg_type, 11, tf>;

    template<bool tf>
    using FB12 = Register::Combo_Bit<f13r2_reg_type, 12, tf>;

    template<bool tf>
    using FB13 = Register::Combo_Bit<f13r2_reg_type, 13, tf>;

    template<bool tf>
    using FB14 = Register::Combo_Bit<f13r2_reg_type, 14, tf>;

    template<bool tf>
    using FB15 = Register::Combo_Bit<f13r2_reg_type, 15, tf>;

    template<bool tf>
    using FB16 = Register::Combo_Bit<f13r2_reg_type, 16, tf>;

    template<bool tf>
    using FB17 = Register::Combo_Bit<f13r2_reg_type, 17, tf>;

    template<bool tf>
    using FB18 = Register::Combo_Bit<f13r2_reg_type, 18, tf>;

    template<bool tf>
    using FB19 = Register::Combo_Bit<f13r2_reg_type, 19, tf>;

    template<bool tf>
    using FB20 = Register::Combo_Bit<f13r2_reg_type, 20, tf>;

    template<bool tf>
    using FB21 = Register::Combo_Bit<f13r2_reg_type, 21, tf>;

    template<bool tf>
    using FB22 = Register::Combo_Bit<f13r2_reg_type, 22, tf>;

    template<bool tf>
    using FB23 = Register::Combo_Bit<f13r2_reg_type, 23, tf>;

    template<bool tf>
    using FB24 = Register::Combo_Bit<f13r2_reg_type, 24, tf>;

    template<bool tf>
    using FB25 = Register::Combo_Bit<f13r2_reg_type, 25, tf>;

    template<bool tf>
    using FB26 = Register::Combo_Bit<f13r2_reg_type, 26, tf>;

    template<bool tf>
    using FB27 = Register::Combo_Bit<f13r2_reg_type, 27, tf>;

    template<bool tf>
    using FB28 = Register::Combo_Bit<f13r2_reg_type, 28, tf>;

    template<bool tf>
    using FB29 = Register::Combo_Bit<f13r2_reg_type, 29, tf>;

    template<bool tf>
    using FB30 = Register::Combo_Bit<f13r2_reg_type, 30, tf>;

    template<bool tf>
    using FB31 = Register::Combo_Bit<f13r2_reg_type, 31, tf>;

} // CAN_F13R2
namespace CAN_F14R1 {

    enum class f14r1_reg_type {};

    template<bool tf>
    using FB0 = Register::Combo_Bit<f14r1_reg_type, 0, tf>;

    template<bool tf>
    using FB1 = Register::Combo_Bit<f14r1_reg_type, 1, tf>;

    template<bool tf>
    using FB2 = Register::Combo_Bit<f14r1_reg_type, 2, tf>;

    template<bool tf>
    using FB3 = Register::Combo_Bit<f14r1_reg_type, 3, tf>;

    template<bool tf>
    using FB4 = Register::Combo_Bit<f14r1_reg_type, 4, tf>;

    template<bool tf>
    using FB5 = Register::Combo_Bit<f14r1_reg_type, 5, tf>;

    template<bool tf>
    using FB6 = Register::Combo_Bit<f14r1_reg_type, 6, tf>;

    template<bool tf>
    using FB7 = Register::Combo_Bit<f14r1_reg_type, 7, tf>;

    template<bool tf>
    using FB8 = Register::Combo_Bit<f14r1_reg_type, 8, tf>;

    template<bool tf>
    using FB9 = Register::Combo_Bit<f14r1_reg_type, 9, tf>;

    template<bool tf>
    using FB10 = Register::Combo_Bit<f14r1_reg_type, 10, tf>;

    template<bool tf>
    using FB11 = Register::Combo_Bit<f14r1_reg_type, 11, tf>;

    template<bool tf>
    using FB12 = Register::Combo_Bit<f14r1_reg_type, 12, tf>;

    template<bool tf>
    using FB13 = Register::Combo_Bit<f14r1_reg_type, 13, tf>;

    template<bool tf>
    using FB14 = Register::Combo_Bit<f14r1_reg_type, 14, tf>;

    template<bool tf>
    using FB15 = Register::Combo_Bit<f14r1_reg_type, 15, tf>;

    template<bool tf>
    using FB16 = Register::Combo_Bit<f14r1_reg_type, 16, tf>;

    template<bool tf>
    using FB17 = Register::Combo_Bit<f14r1_reg_type, 17, tf>;

    template<bool tf>
    using FB18 = Register::Combo_Bit<f14r1_reg_type, 18, tf>;

    template<bool tf>
    using FB19 = Register::Combo_Bit<f14r1_reg_type, 19, tf>;

    template<bool tf>
    using FB20 = Register::Combo_Bit<f14r1_reg_type, 20, tf>;

    template<bool tf>
    using FB21 = Register::Combo_Bit<f14r1_reg_type, 21, tf>;

    template<bool tf>
    using FB22 = Register::Combo_Bit<f14r1_reg_type, 22, tf>;

    template<bool tf>
    using FB23 = Register::Combo_Bit<f14r1_reg_type, 23, tf>;

    template<bool tf>
    using FB24 = Register::Combo_Bit<f14r1_reg_type, 24, tf>;

    template<bool tf>
    using FB25 = Register::Combo_Bit<f14r1_reg_type, 25, tf>;

    template<bool tf>
    using FB26 = Register::Combo_Bit<f14r1_reg_type, 26, tf>;

    template<bool tf>
    using FB27 = Register::Combo_Bit<f14r1_reg_type, 27, tf>;

    template<bool tf>
    using FB28 = Register::Combo_Bit<f14r1_reg_type, 28, tf>;

    template<bool tf>
    using FB29 = Register::Combo_Bit<f14r1_reg_type, 29, tf>;

    template<bool tf>
    using FB30 = Register::Combo_Bit<f14r1_reg_type, 30, tf>;

    template<bool tf>
    using FB31 = Register::Combo_Bit<f14r1_reg_type, 31, tf>;

} // CAN_F14R1
namespace CAN_F14R2 {

    enum class f14r2_reg_type {};

    template<bool tf>
    using FB0 = Register::Combo_Bit<f14r2_reg_type, 0, tf>;

    template<bool tf>
    using FB1 = Register::Combo_Bit<f14r2_reg_type, 1, tf>;

    template<bool tf>
    using FB2 = Register::Combo_Bit<f14r2_reg_type, 2, tf>;

    template<bool tf>
    using FB3 = Register::Combo_Bit<f14r2_reg_type, 3, tf>;

    template<bool tf>
    using FB4 = Register::Combo_Bit<f14r2_reg_type, 4, tf>;

    template<bool tf>
    using FB5 = Register::Combo_Bit<f14r2_reg_type, 5, tf>;

    template<bool tf>
    using FB6 = Register::Combo_Bit<f14r2_reg_type, 6, tf>;

    template<bool tf>
    using FB7 = Register::Combo_Bit<f14r2_reg_type, 7, tf>;

    template<bool tf>
    using FB8 = Register::Combo_Bit<f14r2_reg_type, 8, tf>;

    template<bool tf>
    using FB9 = Register::Combo_Bit<f14r2_reg_type, 9, tf>;

    template<bool tf>
    using FB10 = Register::Combo_Bit<f14r2_reg_type, 10, tf>;

    template<bool tf>
    using FB11 = Register::Combo_Bit<f14r2_reg_type, 11, tf>;

    template<bool tf>
    using FB12 = Register::Combo_Bit<f14r2_reg_type, 12, tf>;

    template<bool tf>
    using FB13 = Register::Combo_Bit<f14r2_reg_type, 13, tf>;

    template<bool tf>
    using FB14 = Register::Combo_Bit<f14r2_reg_type, 14, tf>;

    template<bool tf>
    using FB15 = Register::Combo_Bit<f14r2_reg_type, 15, tf>;

    template<bool tf>
    using FB16 = Register::Combo_Bit<f14r2_reg_type, 16, tf>;

    template<bool tf>
    using FB17 = Register::Combo_Bit<f14r2_reg_type, 17, tf>;

    template<bool tf>
    using FB18 = Register::Combo_Bit<f14r2_reg_type, 18, tf>;

    template<bool tf>
    using FB19 = Register::Combo_Bit<f14r2_reg_type, 19, tf>;

    template<bool tf>
    using FB20 = Register::Combo_Bit<f14r2_reg_type, 20, tf>;

    template<bool tf>
    using FB21 = Register::Combo_Bit<f14r2_reg_type, 21, tf>;

    template<bool tf>
    using FB22 = Register::Combo_Bit<f14r2_reg_type, 22, tf>;

    template<bool tf>
    using FB23 = Register::Combo_Bit<f14r2_reg_type, 23, tf>;

    template<bool tf>
    using FB24 = Register::Combo_Bit<f14r2_reg_type, 24, tf>;

    template<bool tf>
    using FB25 = Register::Combo_Bit<f14r2_reg_type, 25, tf>;

    template<bool tf>
    using FB26 = Register::Combo_Bit<f14r2_reg_type, 26, tf>;

    template<bool tf>
    using FB27 = Register::Combo_Bit<f14r2_reg_type, 27, tf>;

    template<bool tf>
    using FB28 = Register::Combo_Bit<f14r2_reg_type, 28, tf>;

    template<bool tf>
    using FB29 = Register::Combo_Bit<f14r2_reg_type, 29, tf>;

    template<bool tf>
    using FB30 = Register::Combo_Bit<f14r2_reg_type, 30, tf>;

    template<bool tf>
    using FB31 = Register::Combo_Bit<f14r2_reg_type, 31, tf>;

} // CAN_F14R2
namespace CAN_F15R1 {

    enum class f15r1_reg_type {};

    template<bool tf>
    using FB0 = Register::Combo_Bit<f15r1_reg_type, 0, tf>;

    template<bool tf>
    using FB1 = Register::Combo_Bit<f15r1_reg_type, 1, tf>;

    template<bool tf>
    using FB2 = Register::Combo_Bit<f15r1_reg_type, 2, tf>;

    template<bool tf>
    using FB3 = Register::Combo_Bit<f15r1_reg_type, 3, tf>;

    template<bool tf>
    using FB4 = Register::Combo_Bit<f15r1_reg_type, 4, tf>;

    template<bool tf>
    using FB5 = Register::Combo_Bit<f15r1_reg_type, 5, tf>;

    template<bool tf>
    using FB6 = Register::Combo_Bit<f15r1_reg_type, 6, tf>;

    template<bool tf>
    using FB7 = Register::Combo_Bit<f15r1_reg_type, 7, tf>;

    template<bool tf>
    using FB8 = Register::Combo_Bit<f15r1_reg_type, 8, tf>;

    template<bool tf>
    using FB9 = Register::Combo_Bit<f15r1_reg_type, 9, tf>;

    template<bool tf>
    using FB10 = Register::Combo_Bit<f15r1_reg_type, 10, tf>;

    template<bool tf>
    using FB11 = Register::Combo_Bit<f15r1_reg_type, 11, tf>;

    template<bool tf>
    using FB12 = Register::Combo_Bit<f15r1_reg_type, 12, tf>;

    template<bool tf>
    using FB13 = Register::Combo_Bit<f15r1_reg_type, 13, tf>;

    template<bool tf>
    using FB14 = Register::Combo_Bit<f15r1_reg_type, 14, tf>;

    template<bool tf>
    using FB15 = Register::Combo_Bit<f15r1_reg_type, 15, tf>;

    template<bool tf>
    using FB16 = Register::Combo_Bit<f15r1_reg_type, 16, tf>;

    template<bool tf>
    using FB17 = Register::Combo_Bit<f15r1_reg_type, 17, tf>;

    template<bool tf>
    using FB18 = Register::Combo_Bit<f15r1_reg_type, 18, tf>;

    template<bool tf>
    using FB19 = Register::Combo_Bit<f15r1_reg_type, 19, tf>;

    template<bool tf>
    using FB20 = Register::Combo_Bit<f15r1_reg_type, 20, tf>;

    template<bool tf>
    using FB21 = Register::Combo_Bit<f15r1_reg_type, 21, tf>;

    template<bool tf>
    using FB22 = Register::Combo_Bit<f15r1_reg_type, 22, tf>;

    template<bool tf>
    using FB23 = Register::Combo_Bit<f15r1_reg_type, 23, tf>;

    template<bool tf>
    using FB24 = Register::Combo_Bit<f15r1_reg_type, 24, tf>;

    template<bool tf>
    using FB25 = Register::Combo_Bit<f15r1_reg_type, 25, tf>;

    template<bool tf>
    using FB26 = Register::Combo_Bit<f15r1_reg_type, 26, tf>;

    template<bool tf>
    using FB27 = Register::Combo_Bit<f15r1_reg_type, 27, tf>;

    template<bool tf>
    using FB28 = Register::Combo_Bit<f15r1_reg_type, 28, tf>;

    template<bool tf>
    using FB29 = Register::Combo_Bit<f15r1_reg_type, 29, tf>;

    template<bool tf>
    using FB30 = Register::Combo_Bit<f15r1_reg_type, 30, tf>;

    template<bool tf>
    using FB31 = Register::Combo_Bit<f15r1_reg_type, 31, tf>;

} // CAN_F15R1
namespace CAN_F15R2 {

    enum class f15r2_reg_type {};

    template<bool tf>
    using FB0 = Register::Combo_Bit<f15r2_reg_type, 0, tf>;

    template<bool tf>
    using FB1 = Register::Combo_Bit<f15r2_reg_type, 1, tf>;

    template<bool tf>
    using FB2 = Register::Combo_Bit<f15r2_reg_type, 2, tf>;

    template<bool tf>
    using FB3 = Register::Combo_Bit<f15r2_reg_type, 3, tf>;

    template<bool tf>
    using FB4 = Register::Combo_Bit<f15r2_reg_type, 4, tf>;

    template<bool tf>
    using FB5 = Register::Combo_Bit<f15r2_reg_type, 5, tf>;

    template<bool tf>
    using FB6 = Register::Combo_Bit<f15r2_reg_type, 6, tf>;

    template<bool tf>
    using FB7 = Register::Combo_Bit<f15r2_reg_type, 7, tf>;

    template<bool tf>
    using FB8 = Register::Combo_Bit<f15r2_reg_type, 8, tf>;

    template<bool tf>
    using FB9 = Register::Combo_Bit<f15r2_reg_type, 9, tf>;

    template<bool tf>
    using FB10 = Register::Combo_Bit<f15r2_reg_type, 10, tf>;

    template<bool tf>
    using FB11 = Register::Combo_Bit<f15r2_reg_type, 11, tf>;

    template<bool tf>
    using FB12 = Register::Combo_Bit<f15r2_reg_type, 12, tf>;

    template<bool tf>
    using FB13 = Register::Combo_Bit<f15r2_reg_type, 13, tf>;

    template<bool tf>
    using FB14 = Register::Combo_Bit<f15r2_reg_type, 14, tf>;

    template<bool tf>
    using FB15 = Register::Combo_Bit<f15r2_reg_type, 15, tf>;

    template<bool tf>
    using FB16 = Register::Combo_Bit<f15r2_reg_type, 16, tf>;

    template<bool tf>
    using FB17 = Register::Combo_Bit<f15r2_reg_type, 17, tf>;

    template<bool tf>
    using FB18 = Register::Combo_Bit<f15r2_reg_type, 18, tf>;

    template<bool tf>
    using FB19 = Register::Combo_Bit<f15r2_reg_type, 19, tf>;

    template<bool tf>
    using FB20 = Register::Combo_Bit<f15r2_reg_type, 20, tf>;

    template<bool tf>
    using FB21 = Register::Combo_Bit<f15r2_reg_type, 21, tf>;

    template<bool tf>
    using FB22 = Register::Combo_Bit<f15r2_reg_type, 22, tf>;

    template<bool tf>
    using FB23 = Register::Combo_Bit<f15r2_reg_type, 23, tf>;

    template<bool tf>
    using FB24 = Register::Combo_Bit<f15r2_reg_type, 24, tf>;

    template<bool tf>
    using FB25 = Register::Combo_Bit<f15r2_reg_type, 25, tf>;

    template<bool tf>
    using FB26 = Register::Combo_Bit<f15r2_reg_type, 26, tf>;

    template<bool tf>
    using FB27 = Register::Combo_Bit<f15r2_reg_type, 27, tf>;

    template<bool tf>
    using FB28 = Register::Combo_Bit<f15r2_reg_type, 28, tf>;

    template<bool tf>
    using FB29 = Register::Combo_Bit<f15r2_reg_type, 29, tf>;

    template<bool tf>
    using FB30 = Register::Combo_Bit<f15r2_reg_type, 30, tf>;

    template<bool tf>
    using FB31 = Register::Combo_Bit<f15r2_reg_type, 31, tf>;

} // CAN_F15R2
namespace CAN_F16R1 {

    enum class f16r1_reg_type {};

    template<bool tf>
    using FB0 = Register::Combo_Bit<f16r1_reg_type, 0, tf>;

    template<bool tf>
    using FB1 = Register::Combo_Bit<f16r1_reg_type, 1, tf>;

    template<bool tf>
    using FB2 = Register::Combo_Bit<f16r1_reg_type, 2, tf>;

    template<bool tf>
    using FB3 = Register::Combo_Bit<f16r1_reg_type, 3, tf>;

    template<bool tf>
    using FB4 = Register::Combo_Bit<f16r1_reg_type, 4, tf>;

    template<bool tf>
    using FB5 = Register::Combo_Bit<f16r1_reg_type, 5, tf>;

    template<bool tf>
    using FB6 = Register::Combo_Bit<f16r1_reg_type, 6, tf>;

    template<bool tf>
    using FB7 = Register::Combo_Bit<f16r1_reg_type, 7, tf>;

    template<bool tf>
    using FB8 = Register::Combo_Bit<f16r1_reg_type, 8, tf>;

    template<bool tf>
    using FB9 = Register::Combo_Bit<f16r1_reg_type, 9, tf>;

    template<bool tf>
    using FB10 = Register::Combo_Bit<f16r1_reg_type, 10, tf>;

    template<bool tf>
    using FB11 = Register::Combo_Bit<f16r1_reg_type, 11, tf>;

    template<bool tf>
    using FB12 = Register::Combo_Bit<f16r1_reg_type, 12, tf>;

    template<bool tf>
    using FB13 = Register::Combo_Bit<f16r1_reg_type, 13, tf>;

    template<bool tf>
    using FB14 = Register::Combo_Bit<f16r1_reg_type, 14, tf>;

    template<bool tf>
    using FB15 = Register::Combo_Bit<f16r1_reg_type, 15, tf>;

    template<bool tf>
    using FB16 = Register::Combo_Bit<f16r1_reg_type, 16, tf>;

    template<bool tf>
    using FB17 = Register::Combo_Bit<f16r1_reg_type, 17, tf>;

    template<bool tf>
    using FB18 = Register::Combo_Bit<f16r1_reg_type, 18, tf>;

    template<bool tf>
    using FB19 = Register::Combo_Bit<f16r1_reg_type, 19, tf>;

    template<bool tf>
    using FB20 = Register::Combo_Bit<f16r1_reg_type, 20, tf>;

    template<bool tf>
    using FB21 = Register::Combo_Bit<f16r1_reg_type, 21, tf>;

    template<bool tf>
    using FB22 = Register::Combo_Bit<f16r1_reg_type, 22, tf>;

    template<bool tf>
    using FB23 = Register::Combo_Bit<f16r1_reg_type, 23, tf>;

    template<bool tf>
    using FB24 = Register::Combo_Bit<f16r1_reg_type, 24, tf>;

    template<bool tf>
    using FB25 = Register::Combo_Bit<f16r1_reg_type, 25, tf>;

    template<bool tf>
    using FB26 = Register::Combo_Bit<f16r1_reg_type, 26, tf>;

    template<bool tf>
    using FB27 = Register::Combo_Bit<f16r1_reg_type, 27, tf>;

    template<bool tf>
    using FB28 = Register::Combo_Bit<f16r1_reg_type, 28, tf>;

    template<bool tf>
    using FB29 = Register::Combo_Bit<f16r1_reg_type, 29, tf>;

    template<bool tf>
    using FB30 = Register::Combo_Bit<f16r1_reg_type, 30, tf>;

    template<bool tf>
    using FB31 = Register::Combo_Bit<f16r1_reg_type, 31, tf>;

} // CAN_F16R1
namespace CAN_F16R2 {

    enum class f16r2_reg_type {};

    template<bool tf>
    using FB0 = Register::Combo_Bit<f16r2_reg_type, 0, tf>;

    template<bool tf>
    using FB1 = Register::Combo_Bit<f16r2_reg_type, 1, tf>;

    template<bool tf>
    using FB2 = Register::Combo_Bit<f16r2_reg_type, 2, tf>;

    template<bool tf>
    using FB3 = Register::Combo_Bit<f16r2_reg_type, 3, tf>;

    template<bool tf>
    using FB4 = Register::Combo_Bit<f16r2_reg_type, 4, tf>;

    template<bool tf>
    using FB5 = Register::Combo_Bit<f16r2_reg_type, 5, tf>;

    template<bool tf>
    using FB6 = Register::Combo_Bit<f16r2_reg_type, 6, tf>;

    template<bool tf>
    using FB7 = Register::Combo_Bit<f16r2_reg_type, 7, tf>;

    template<bool tf>
    using FB8 = Register::Combo_Bit<f16r2_reg_type, 8, tf>;

    template<bool tf>
    using FB9 = Register::Combo_Bit<f16r2_reg_type, 9, tf>;

    template<bool tf>
    using FB10 = Register::Combo_Bit<f16r2_reg_type, 10, tf>;

    template<bool tf>
    using FB11 = Register::Combo_Bit<f16r2_reg_type, 11, tf>;

    template<bool tf>
    using FB12 = Register::Combo_Bit<f16r2_reg_type, 12, tf>;

    template<bool tf>
    using FB13 = Register::Combo_Bit<f16r2_reg_type, 13, tf>;

    template<bool tf>
    using FB14 = Register::Combo_Bit<f16r2_reg_type, 14, tf>;

    template<bool tf>
    using FB15 = Register::Combo_Bit<f16r2_reg_type, 15, tf>;

    template<bool tf>
    using FB16 = Register::Combo_Bit<f16r2_reg_type, 16, tf>;

    template<bool tf>
    using FB17 = Register::Combo_Bit<f16r2_reg_type, 17, tf>;

    template<bool tf>
    using FB18 = Register::Combo_Bit<f16r2_reg_type, 18, tf>;

    template<bool tf>
    using FB19 = Register::Combo_Bit<f16r2_reg_type, 19, tf>;

    template<bool tf>
    using FB20 = Register::Combo_Bit<f16r2_reg_type, 20, tf>;

    template<bool tf>
    using FB21 = Register::Combo_Bit<f16r2_reg_type, 21, tf>;

    template<bool tf>
    using FB22 = Register::Combo_Bit<f16r2_reg_type, 22, tf>;

    template<bool tf>
    using FB23 = Register::Combo_Bit<f16r2_reg_type, 23, tf>;

    template<bool tf>
    using FB24 = Register::Combo_Bit<f16r2_reg_type, 24, tf>;

    template<bool tf>
    using FB25 = Register::Combo_Bit<f16r2_reg_type, 25, tf>;

    template<bool tf>
    using FB26 = Register::Combo_Bit<f16r2_reg_type, 26, tf>;

    template<bool tf>
    using FB27 = Register::Combo_Bit<f16r2_reg_type, 27, tf>;

    template<bool tf>
    using FB28 = Register::Combo_Bit<f16r2_reg_type, 28, tf>;

    template<bool tf>
    using FB29 = Register::Combo_Bit<f16r2_reg_type, 29, tf>;

    template<bool tf>
    using FB30 = Register::Combo_Bit<f16r2_reg_type, 30, tf>;

    template<bool tf>
    using FB31 = Register::Combo_Bit<f16r2_reg_type, 31, tf>;

} // CAN_F16R2
namespace CAN_F17R1 {

    enum class f17r1_reg_type {};

    template<bool tf>
    using FB0 = Register::Combo_Bit<f17r1_reg_type, 0, tf>;

    template<bool tf>
    using FB1 = Register::Combo_Bit<f17r1_reg_type, 1, tf>;

    template<bool tf>
    using FB2 = Register::Combo_Bit<f17r1_reg_type, 2, tf>;

    template<bool tf>
    using FB3 = Register::Combo_Bit<f17r1_reg_type, 3, tf>;

    template<bool tf>
    using FB4 = Register::Combo_Bit<f17r1_reg_type, 4, tf>;

    template<bool tf>
    using FB5 = Register::Combo_Bit<f17r1_reg_type, 5, tf>;

    template<bool tf>
    using FB6 = Register::Combo_Bit<f17r1_reg_type, 6, tf>;

    template<bool tf>
    using FB7 = Register::Combo_Bit<f17r1_reg_type, 7, tf>;

    template<bool tf>
    using FB8 = Register::Combo_Bit<f17r1_reg_type, 8, tf>;

    template<bool tf>
    using FB9 = Register::Combo_Bit<f17r1_reg_type, 9, tf>;

    template<bool tf>
    using FB10 = Register::Combo_Bit<f17r1_reg_type, 10, tf>;

    template<bool tf>
    using FB11 = Register::Combo_Bit<f17r1_reg_type, 11, tf>;

    template<bool tf>
    using FB12 = Register::Combo_Bit<f17r1_reg_type, 12, tf>;

    template<bool tf>
    using FB13 = Register::Combo_Bit<f17r1_reg_type, 13, tf>;

    template<bool tf>
    using FB14 = Register::Combo_Bit<f17r1_reg_type, 14, tf>;

    template<bool tf>
    using FB15 = Register::Combo_Bit<f17r1_reg_type, 15, tf>;

    template<bool tf>
    using FB16 = Register::Combo_Bit<f17r1_reg_type, 16, tf>;

    template<bool tf>
    using FB17 = Register::Combo_Bit<f17r1_reg_type, 17, tf>;

    template<bool tf>
    using FB18 = Register::Combo_Bit<f17r1_reg_type, 18, tf>;

    template<bool tf>
    using FB19 = Register::Combo_Bit<f17r1_reg_type, 19, tf>;

    template<bool tf>
    using FB20 = Register::Combo_Bit<f17r1_reg_type, 20, tf>;

    template<bool tf>
    using FB21 = Register::Combo_Bit<f17r1_reg_type, 21, tf>;

    template<bool tf>
    using FB22 = Register::Combo_Bit<f17r1_reg_type, 22, tf>;

    template<bool tf>
    using FB23 = Register::Combo_Bit<f17r1_reg_type, 23, tf>;

    template<bool tf>
    using FB24 = Register::Combo_Bit<f17r1_reg_type, 24, tf>;

    template<bool tf>
    using FB25 = Register::Combo_Bit<f17r1_reg_type, 25, tf>;

    template<bool tf>
    using FB26 = Register::Combo_Bit<f17r1_reg_type, 26, tf>;

    template<bool tf>
    using FB27 = Register::Combo_Bit<f17r1_reg_type, 27, tf>;

    template<bool tf>
    using FB28 = Register::Combo_Bit<f17r1_reg_type, 28, tf>;

    template<bool tf>
    using FB29 = Register::Combo_Bit<f17r1_reg_type, 29, tf>;

    template<bool tf>
    using FB30 = Register::Combo_Bit<f17r1_reg_type, 30, tf>;

    template<bool tf>
    using FB31 = Register::Combo_Bit<f17r1_reg_type, 31, tf>;

} // CAN_F17R1
namespace CAN_F17R2 {

    enum class f17r2_reg_type {};

    template<bool tf>
    using FB0 = Register::Combo_Bit<f17r2_reg_type, 0, tf>;

    template<bool tf>
    using FB1 = Register::Combo_Bit<f17r2_reg_type, 1, tf>;

    template<bool tf>
    using FB2 = Register::Combo_Bit<f17r2_reg_type, 2, tf>;

    template<bool tf>
    using FB3 = Register::Combo_Bit<f17r2_reg_type, 3, tf>;

    template<bool tf>
    using FB4 = Register::Combo_Bit<f17r2_reg_type, 4, tf>;

    template<bool tf>
    using FB5 = Register::Combo_Bit<f17r2_reg_type, 5, tf>;

    template<bool tf>
    using FB6 = Register::Combo_Bit<f17r2_reg_type, 6, tf>;

    template<bool tf>
    using FB7 = Register::Combo_Bit<f17r2_reg_type, 7, tf>;

    template<bool tf>
    using FB8 = Register::Combo_Bit<f17r2_reg_type, 8, tf>;

    template<bool tf>
    using FB9 = Register::Combo_Bit<f17r2_reg_type, 9, tf>;

    template<bool tf>
    using FB10 = Register::Combo_Bit<f17r2_reg_type, 10, tf>;

    template<bool tf>
    using FB11 = Register::Combo_Bit<f17r2_reg_type, 11, tf>;

    template<bool tf>
    using FB12 = Register::Combo_Bit<f17r2_reg_type, 12, tf>;

    template<bool tf>
    using FB13 = Register::Combo_Bit<f17r2_reg_type, 13, tf>;

    template<bool tf>
    using FB14 = Register::Combo_Bit<f17r2_reg_type, 14, tf>;

    template<bool tf>
    using FB15 = Register::Combo_Bit<f17r2_reg_type, 15, tf>;

    template<bool tf>
    using FB16 = Register::Combo_Bit<f17r2_reg_type, 16, tf>;

    template<bool tf>
    using FB17 = Register::Combo_Bit<f17r2_reg_type, 17, tf>;

    template<bool tf>
    using FB18 = Register::Combo_Bit<f17r2_reg_type, 18, tf>;

    template<bool tf>
    using FB19 = Register::Combo_Bit<f17r2_reg_type, 19, tf>;

    template<bool tf>
    using FB20 = Register::Combo_Bit<f17r2_reg_type, 20, tf>;

    template<bool tf>
    using FB21 = Register::Combo_Bit<f17r2_reg_type, 21, tf>;

    template<bool tf>
    using FB22 = Register::Combo_Bit<f17r2_reg_type, 22, tf>;

    template<bool tf>
    using FB23 = Register::Combo_Bit<f17r2_reg_type, 23, tf>;

    template<bool tf>
    using FB24 = Register::Combo_Bit<f17r2_reg_type, 24, tf>;

    template<bool tf>
    using FB25 = Register::Combo_Bit<f17r2_reg_type, 25, tf>;

    template<bool tf>
    using FB26 = Register::Combo_Bit<f17r2_reg_type, 26, tf>;

    template<bool tf>
    using FB27 = Register::Combo_Bit<f17r2_reg_type, 27, tf>;

    template<bool tf>
    using FB28 = Register::Combo_Bit<f17r2_reg_type, 28, tf>;

    template<bool tf>
    using FB29 = Register::Combo_Bit<f17r2_reg_type, 29, tf>;

    template<bool tf>
    using FB30 = Register::Combo_Bit<f17r2_reg_type, 30, tf>;

    template<bool tf>
    using FB31 = Register::Combo_Bit<f17r2_reg_type, 31, tf>;

} // CAN_F17R2
namespace CAN_F18R1 {

    enum class f18r1_reg_type {};

    template<bool tf>
    using FB0 = Register::Combo_Bit<f18r1_reg_type, 0, tf>;

    template<bool tf>
    using FB1 = Register::Combo_Bit<f18r1_reg_type, 1, tf>;

    template<bool tf>
    using FB2 = Register::Combo_Bit<f18r1_reg_type, 2, tf>;

    template<bool tf>
    using FB3 = Register::Combo_Bit<f18r1_reg_type, 3, tf>;

    template<bool tf>
    using FB4 = Register::Combo_Bit<f18r1_reg_type, 4, tf>;

    template<bool tf>
    using FB5 = Register::Combo_Bit<f18r1_reg_type, 5, tf>;

    template<bool tf>
    using FB6 = Register::Combo_Bit<f18r1_reg_type, 6, tf>;

    template<bool tf>
    using FB7 = Register::Combo_Bit<f18r1_reg_type, 7, tf>;

    template<bool tf>
    using FB8 = Register::Combo_Bit<f18r1_reg_type, 8, tf>;

    template<bool tf>
    using FB9 = Register::Combo_Bit<f18r1_reg_type, 9, tf>;

    template<bool tf>
    using FB10 = Register::Combo_Bit<f18r1_reg_type, 10, tf>;

    template<bool tf>
    using FB11 = Register::Combo_Bit<f18r1_reg_type, 11, tf>;

    template<bool tf>
    using FB12 = Register::Combo_Bit<f18r1_reg_type, 12, tf>;

    template<bool tf>
    using FB13 = Register::Combo_Bit<f18r1_reg_type, 13, tf>;

    template<bool tf>
    using FB14 = Register::Combo_Bit<f18r1_reg_type, 14, tf>;

    template<bool tf>
    using FB15 = Register::Combo_Bit<f18r1_reg_type, 15, tf>;

    template<bool tf>
    using FB16 = Register::Combo_Bit<f18r1_reg_type, 16, tf>;

    template<bool tf>
    using FB17 = Register::Combo_Bit<f18r1_reg_type, 17, tf>;

    template<bool tf>
    using FB18 = Register::Combo_Bit<f18r1_reg_type, 18, tf>;

    template<bool tf>
    using FB19 = Register::Combo_Bit<f18r1_reg_type, 19, tf>;

    template<bool tf>
    using FB20 = Register::Combo_Bit<f18r1_reg_type, 20, tf>;

    template<bool tf>
    using FB21 = Register::Combo_Bit<f18r1_reg_type, 21, tf>;

    template<bool tf>
    using FB22 = Register::Combo_Bit<f18r1_reg_type, 22, tf>;

    template<bool tf>
    using FB23 = Register::Combo_Bit<f18r1_reg_type, 23, tf>;

    template<bool tf>
    using FB24 = Register::Combo_Bit<f18r1_reg_type, 24, tf>;

    template<bool tf>
    using FB25 = Register::Combo_Bit<f18r1_reg_type, 25, tf>;

    template<bool tf>
    using FB26 = Register::Combo_Bit<f18r1_reg_type, 26, tf>;

    template<bool tf>
    using FB27 = Register::Combo_Bit<f18r1_reg_type, 27, tf>;

    template<bool tf>
    using FB28 = Register::Combo_Bit<f18r1_reg_type, 28, tf>;

    template<bool tf>
    using FB29 = Register::Combo_Bit<f18r1_reg_type, 29, tf>;

    template<bool tf>
    using FB30 = Register::Combo_Bit<f18r1_reg_type, 30, tf>;

    template<bool tf>
    using FB31 = Register::Combo_Bit<f18r1_reg_type, 31, tf>;

} // CAN_F18R1
namespace CAN_F18R2 {

    enum class f18r2_reg_type {};

    template<bool tf>
    using FB0 = Register::Combo_Bit<f18r2_reg_type, 0, tf>;

    template<bool tf>
    using FB1 = Register::Combo_Bit<f18r2_reg_type, 1, tf>;

    template<bool tf>
    using FB2 = Register::Combo_Bit<f18r2_reg_type, 2, tf>;

    template<bool tf>
    using FB3 = Register::Combo_Bit<f18r2_reg_type, 3, tf>;

    template<bool tf>
    using FB4 = Register::Combo_Bit<f18r2_reg_type, 4, tf>;

    template<bool tf>
    using FB5 = Register::Combo_Bit<f18r2_reg_type, 5, tf>;

    template<bool tf>
    using FB6 = Register::Combo_Bit<f18r2_reg_type, 6, tf>;

    template<bool tf>
    using FB7 = Register::Combo_Bit<f18r2_reg_type, 7, tf>;

    template<bool tf>
    using FB8 = Register::Combo_Bit<f18r2_reg_type, 8, tf>;

    template<bool tf>
    using FB9 = Register::Combo_Bit<f18r2_reg_type, 9, tf>;

    template<bool tf>
    using FB10 = Register::Combo_Bit<f18r2_reg_type, 10, tf>;

    template<bool tf>
    using FB11 = Register::Combo_Bit<f18r2_reg_type, 11, tf>;

    template<bool tf>
    using FB12 = Register::Combo_Bit<f18r2_reg_type, 12, tf>;

    template<bool tf>
    using FB13 = Register::Combo_Bit<f18r2_reg_type, 13, tf>;

    template<bool tf>
    using FB14 = Register::Combo_Bit<f18r2_reg_type, 14, tf>;

    template<bool tf>
    using FB15 = Register::Combo_Bit<f18r2_reg_type, 15, tf>;

    template<bool tf>
    using FB16 = Register::Combo_Bit<f18r2_reg_type, 16, tf>;

    template<bool tf>
    using FB17 = Register::Combo_Bit<f18r2_reg_type, 17, tf>;

    template<bool tf>
    using FB18 = Register::Combo_Bit<f18r2_reg_type, 18, tf>;

    template<bool tf>
    using FB19 = Register::Combo_Bit<f18r2_reg_type, 19, tf>;

    template<bool tf>
    using FB20 = Register::Combo_Bit<f18r2_reg_type, 20, tf>;

    template<bool tf>
    using FB21 = Register::Combo_Bit<f18r2_reg_type, 21, tf>;

    template<bool tf>
    using FB22 = Register::Combo_Bit<f18r2_reg_type, 22, tf>;

    template<bool tf>
    using FB23 = Register::Combo_Bit<f18r2_reg_type, 23, tf>;

    template<bool tf>
    using FB24 = Register::Combo_Bit<f18r2_reg_type, 24, tf>;

    template<bool tf>
    using FB25 = Register::Combo_Bit<f18r2_reg_type, 25, tf>;

    template<bool tf>
    using FB26 = Register::Combo_Bit<f18r2_reg_type, 26, tf>;

    template<bool tf>
    using FB27 = Register::Combo_Bit<f18r2_reg_type, 27, tf>;

    template<bool tf>
    using FB28 = Register::Combo_Bit<f18r2_reg_type, 28, tf>;

    template<bool tf>
    using FB29 = Register::Combo_Bit<f18r2_reg_type, 29, tf>;

    template<bool tf>
    using FB30 = Register::Combo_Bit<f18r2_reg_type, 30, tf>;

    template<bool tf>
    using FB31 = Register::Combo_Bit<f18r2_reg_type, 31, tf>;

} // CAN_F18R2
namespace CAN_F19R1 {

    enum class f19r1_reg_type {};

    template<bool tf>
    using FB0 = Register::Combo_Bit<f19r1_reg_type, 0, tf>;

    template<bool tf>
    using FB1 = Register::Combo_Bit<f19r1_reg_type, 1, tf>;

    template<bool tf>
    using FB2 = Register::Combo_Bit<f19r1_reg_type, 2, tf>;

    template<bool tf>
    using FB3 = Register::Combo_Bit<f19r1_reg_type, 3, tf>;

    template<bool tf>
    using FB4 = Register::Combo_Bit<f19r1_reg_type, 4, tf>;

    template<bool tf>
    using FB5 = Register::Combo_Bit<f19r1_reg_type, 5, tf>;

    template<bool tf>
    using FB6 = Register::Combo_Bit<f19r1_reg_type, 6, tf>;

    template<bool tf>
    using FB7 = Register::Combo_Bit<f19r1_reg_type, 7, tf>;

    template<bool tf>
    using FB8 = Register::Combo_Bit<f19r1_reg_type, 8, tf>;

    template<bool tf>
    using FB9 = Register::Combo_Bit<f19r1_reg_type, 9, tf>;

    template<bool tf>
    using FB10 = Register::Combo_Bit<f19r1_reg_type, 10, tf>;

    template<bool tf>
    using FB11 = Register::Combo_Bit<f19r1_reg_type, 11, tf>;

    template<bool tf>
    using FB12 = Register::Combo_Bit<f19r1_reg_type, 12, tf>;

    template<bool tf>
    using FB13 = Register::Combo_Bit<f19r1_reg_type, 13, tf>;

    template<bool tf>
    using FB14 = Register::Combo_Bit<f19r1_reg_type, 14, tf>;

    template<bool tf>
    using FB15 = Register::Combo_Bit<f19r1_reg_type, 15, tf>;

    template<bool tf>
    using FB16 = Register::Combo_Bit<f19r1_reg_type, 16, tf>;

    template<bool tf>
    using FB17 = Register::Combo_Bit<f19r1_reg_type, 17, tf>;

    template<bool tf>
    using FB18 = Register::Combo_Bit<f19r1_reg_type, 18, tf>;

    template<bool tf>
    using FB19 = Register::Combo_Bit<f19r1_reg_type, 19, tf>;

    template<bool tf>
    using FB20 = Register::Combo_Bit<f19r1_reg_type, 20, tf>;

    template<bool tf>
    using FB21 = Register::Combo_Bit<f19r1_reg_type, 21, tf>;

    template<bool tf>
    using FB22 = Register::Combo_Bit<f19r1_reg_type, 22, tf>;

    template<bool tf>
    using FB23 = Register::Combo_Bit<f19r1_reg_type, 23, tf>;

    template<bool tf>
    using FB24 = Register::Combo_Bit<f19r1_reg_type, 24, tf>;

    template<bool tf>
    using FB25 = Register::Combo_Bit<f19r1_reg_type, 25, tf>;

    template<bool tf>
    using FB26 = Register::Combo_Bit<f19r1_reg_type, 26, tf>;

    template<bool tf>
    using FB27 = Register::Combo_Bit<f19r1_reg_type, 27, tf>;

    template<bool tf>
    using FB28 = Register::Combo_Bit<f19r1_reg_type, 28, tf>;

    template<bool tf>
    using FB29 = Register::Combo_Bit<f19r1_reg_type, 29, tf>;

    template<bool tf>
    using FB30 = Register::Combo_Bit<f19r1_reg_type, 30, tf>;

    template<bool tf>
    using FB31 = Register::Combo_Bit<f19r1_reg_type, 31, tf>;

} // CAN_F19R1
namespace CAN_F19R2 {

    enum class f19r2_reg_type {};

    template<bool tf>
    using FB0 = Register::Combo_Bit<f19r2_reg_type, 0, tf>;

    template<bool tf>
    using FB1 = Register::Combo_Bit<f19r2_reg_type, 1, tf>;

    template<bool tf>
    using FB2 = Register::Combo_Bit<f19r2_reg_type, 2, tf>;

    template<bool tf>
    using FB3 = Register::Combo_Bit<f19r2_reg_type, 3, tf>;

    template<bool tf>
    using FB4 = Register::Combo_Bit<f19r2_reg_type, 4, tf>;

    template<bool tf>
    using FB5 = Register::Combo_Bit<f19r2_reg_type, 5, tf>;

    template<bool tf>
    using FB6 = Register::Combo_Bit<f19r2_reg_type, 6, tf>;

    template<bool tf>
    using FB7 = Register::Combo_Bit<f19r2_reg_type, 7, tf>;

    template<bool tf>
    using FB8 = Register::Combo_Bit<f19r2_reg_type, 8, tf>;

    template<bool tf>
    using FB9 = Register::Combo_Bit<f19r2_reg_type, 9, tf>;

    template<bool tf>
    using FB10 = Register::Combo_Bit<f19r2_reg_type, 10, tf>;

    template<bool tf>
    using FB11 = Register::Combo_Bit<f19r2_reg_type, 11, tf>;

    template<bool tf>
    using FB12 = Register::Combo_Bit<f19r2_reg_type, 12, tf>;

    template<bool tf>
    using FB13 = Register::Combo_Bit<f19r2_reg_type, 13, tf>;

    template<bool tf>
    using FB14 = Register::Combo_Bit<f19r2_reg_type, 14, tf>;

    template<bool tf>
    using FB15 = Register::Combo_Bit<f19r2_reg_type, 15, tf>;

    template<bool tf>
    using FB16 = Register::Combo_Bit<f19r2_reg_type, 16, tf>;

    template<bool tf>
    using FB17 = Register::Combo_Bit<f19r2_reg_type, 17, tf>;

    template<bool tf>
    using FB18 = Register::Combo_Bit<f19r2_reg_type, 18, tf>;

    template<bool tf>
    using FB19 = Register::Combo_Bit<f19r2_reg_type, 19, tf>;

    template<bool tf>
    using FB20 = Register::Combo_Bit<f19r2_reg_type, 20, tf>;

    template<bool tf>
    using FB21 = Register::Combo_Bit<f19r2_reg_type, 21, tf>;

    template<bool tf>
    using FB22 = Register::Combo_Bit<f19r2_reg_type, 22, tf>;

    template<bool tf>
    using FB23 = Register::Combo_Bit<f19r2_reg_type, 23, tf>;

    template<bool tf>
    using FB24 = Register::Combo_Bit<f19r2_reg_type, 24, tf>;

    template<bool tf>
    using FB25 = Register::Combo_Bit<f19r2_reg_type, 25, tf>;

    template<bool tf>
    using FB26 = Register::Combo_Bit<f19r2_reg_type, 26, tf>;

    template<bool tf>
    using FB27 = Register::Combo_Bit<f19r2_reg_type, 27, tf>;

    template<bool tf>
    using FB28 = Register::Combo_Bit<f19r2_reg_type, 28, tf>;

    template<bool tf>
    using FB29 = Register::Combo_Bit<f19r2_reg_type, 29, tf>;

    template<bool tf>
    using FB30 = Register::Combo_Bit<f19r2_reg_type, 30, tf>;

    template<bool tf>
    using FB31 = Register::Combo_Bit<f19r2_reg_type, 31, tf>;

} // CAN_F19R2
namespace CAN_F20R1 {

    enum class f20r1_reg_type {};

    template<bool tf>
    using FB0 = Register::Combo_Bit<f20r1_reg_type, 0, tf>;

    template<bool tf>
    using FB1 = Register::Combo_Bit<f20r1_reg_type, 1, tf>;

    template<bool tf>
    using FB2 = Register::Combo_Bit<f20r1_reg_type, 2, tf>;

    template<bool tf>
    using FB3 = Register::Combo_Bit<f20r1_reg_type, 3, tf>;

    template<bool tf>
    using FB4 = Register::Combo_Bit<f20r1_reg_type, 4, tf>;

    template<bool tf>
    using FB5 = Register::Combo_Bit<f20r1_reg_type, 5, tf>;

    template<bool tf>
    using FB6 = Register::Combo_Bit<f20r1_reg_type, 6, tf>;

    template<bool tf>
    using FB7 = Register::Combo_Bit<f20r1_reg_type, 7, tf>;

    template<bool tf>
    using FB8 = Register::Combo_Bit<f20r1_reg_type, 8, tf>;

    template<bool tf>
    using FB9 = Register::Combo_Bit<f20r1_reg_type, 9, tf>;

    template<bool tf>
    using FB10 = Register::Combo_Bit<f20r1_reg_type, 10, tf>;

    template<bool tf>
    using FB11 = Register::Combo_Bit<f20r1_reg_type, 11, tf>;

    template<bool tf>
    using FB12 = Register::Combo_Bit<f20r1_reg_type, 12, tf>;

    template<bool tf>
    using FB13 = Register::Combo_Bit<f20r1_reg_type, 13, tf>;

    template<bool tf>
    using FB14 = Register::Combo_Bit<f20r1_reg_type, 14, tf>;

    template<bool tf>
    using FB15 = Register::Combo_Bit<f20r1_reg_type, 15, tf>;

    template<bool tf>
    using FB16 = Register::Combo_Bit<f20r1_reg_type, 16, tf>;

    template<bool tf>
    using FB17 = Register::Combo_Bit<f20r1_reg_type, 17, tf>;

    template<bool tf>
    using FB18 = Register::Combo_Bit<f20r1_reg_type, 18, tf>;

    template<bool tf>
    using FB19 = Register::Combo_Bit<f20r1_reg_type, 19, tf>;

    template<bool tf>
    using FB20 = Register::Combo_Bit<f20r1_reg_type, 20, tf>;

    template<bool tf>
    using FB21 = Register::Combo_Bit<f20r1_reg_type, 21, tf>;

    template<bool tf>
    using FB22 = Register::Combo_Bit<f20r1_reg_type, 22, tf>;

    template<bool tf>
    using FB23 = Register::Combo_Bit<f20r1_reg_type, 23, tf>;

    template<bool tf>
    using FB24 = Register::Combo_Bit<f20r1_reg_type, 24, tf>;

    template<bool tf>
    using FB25 = Register::Combo_Bit<f20r1_reg_type, 25, tf>;

    template<bool tf>
    using FB26 = Register::Combo_Bit<f20r1_reg_type, 26, tf>;

    template<bool tf>
    using FB27 = Register::Combo_Bit<f20r1_reg_type, 27, tf>;

    template<bool tf>
    using FB28 = Register::Combo_Bit<f20r1_reg_type, 28, tf>;

    template<bool tf>
    using FB29 = Register::Combo_Bit<f20r1_reg_type, 29, tf>;

    template<bool tf>
    using FB30 = Register::Combo_Bit<f20r1_reg_type, 30, tf>;

    template<bool tf>
    using FB31 = Register::Combo_Bit<f20r1_reg_type, 31, tf>;

} // CAN_F20R1
namespace CAN_F20R2 {

    enum class f20r2_reg_type {};

    template<bool tf>
    using FB0 = Register::Combo_Bit<f20r2_reg_type, 0, tf>;

    template<bool tf>
    using FB1 = Register::Combo_Bit<f20r2_reg_type, 1, tf>;

    template<bool tf>
    using FB2 = Register::Combo_Bit<f20r2_reg_type, 2, tf>;

    template<bool tf>
    using FB3 = Register::Combo_Bit<f20r2_reg_type, 3, tf>;

    template<bool tf>
    using FB4 = Register::Combo_Bit<f20r2_reg_type, 4, tf>;

    template<bool tf>
    using FB5 = Register::Combo_Bit<f20r2_reg_type, 5, tf>;

    template<bool tf>
    using FB6 = Register::Combo_Bit<f20r2_reg_type, 6, tf>;

    template<bool tf>
    using FB7 = Register::Combo_Bit<f20r2_reg_type, 7, tf>;

    template<bool tf>
    using FB8 = Register::Combo_Bit<f20r2_reg_type, 8, tf>;

    template<bool tf>
    using FB9 = Register::Combo_Bit<f20r2_reg_type, 9, tf>;

    template<bool tf>
    using FB10 = Register::Combo_Bit<f20r2_reg_type, 10, tf>;

    template<bool tf>
    using FB11 = Register::Combo_Bit<f20r2_reg_type, 11, tf>;

    template<bool tf>
    using FB12 = Register::Combo_Bit<f20r2_reg_type, 12, tf>;

    template<bool tf>
    using FB13 = Register::Combo_Bit<f20r2_reg_type, 13, tf>;

    template<bool tf>
    using FB14 = Register::Combo_Bit<f20r2_reg_type, 14, tf>;

    template<bool tf>
    using FB15 = Register::Combo_Bit<f20r2_reg_type, 15, tf>;

    template<bool tf>
    using FB16 = Register::Combo_Bit<f20r2_reg_type, 16, tf>;

    template<bool tf>
    using FB17 = Register::Combo_Bit<f20r2_reg_type, 17, tf>;

    template<bool tf>
    using FB18 = Register::Combo_Bit<f20r2_reg_type, 18, tf>;

    template<bool tf>
    using FB19 = Register::Combo_Bit<f20r2_reg_type, 19, tf>;

    template<bool tf>
    using FB20 = Register::Combo_Bit<f20r2_reg_type, 20, tf>;

    template<bool tf>
    using FB21 = Register::Combo_Bit<f20r2_reg_type, 21, tf>;

    template<bool tf>
    using FB22 = Register::Combo_Bit<f20r2_reg_type, 22, tf>;

    template<bool tf>
    using FB23 = Register::Combo_Bit<f20r2_reg_type, 23, tf>;

    template<bool tf>
    using FB24 = Register::Combo_Bit<f20r2_reg_type, 24, tf>;

    template<bool tf>
    using FB25 = Register::Combo_Bit<f20r2_reg_type, 25, tf>;

    template<bool tf>
    using FB26 = Register::Combo_Bit<f20r2_reg_type, 26, tf>;

    template<bool tf>
    using FB27 = Register::Combo_Bit<f20r2_reg_type, 27, tf>;

    template<bool tf>
    using FB28 = Register::Combo_Bit<f20r2_reg_type, 28, tf>;

    template<bool tf>
    using FB29 = Register::Combo_Bit<f20r2_reg_type, 29, tf>;

    template<bool tf>
    using FB30 = Register::Combo_Bit<f20r2_reg_type, 30, tf>;

    template<bool tf>
    using FB31 = Register::Combo_Bit<f20r2_reg_type, 31, tf>;

} // CAN_F20R2
namespace CAN_F21R1 {

    enum class f21r1_reg_type {};

    template<bool tf>
    using FB0 = Register::Combo_Bit<f21r1_reg_type, 0, tf>;

    template<bool tf>
    using FB1 = Register::Combo_Bit<f21r1_reg_type, 1, tf>;

    template<bool tf>
    using FB2 = Register::Combo_Bit<f21r1_reg_type, 2, tf>;

    template<bool tf>
    using FB3 = Register::Combo_Bit<f21r1_reg_type, 3, tf>;

    template<bool tf>
    using FB4 = Register::Combo_Bit<f21r1_reg_type, 4, tf>;

    template<bool tf>
    using FB5 = Register::Combo_Bit<f21r1_reg_type, 5, tf>;

    template<bool tf>
    using FB6 = Register::Combo_Bit<f21r1_reg_type, 6, tf>;

    template<bool tf>
    using FB7 = Register::Combo_Bit<f21r1_reg_type, 7, tf>;

    template<bool tf>
    using FB8 = Register::Combo_Bit<f21r1_reg_type, 8, tf>;

    template<bool tf>
    using FB9 = Register::Combo_Bit<f21r1_reg_type, 9, tf>;

    template<bool tf>
    using FB10 = Register::Combo_Bit<f21r1_reg_type, 10, tf>;

    template<bool tf>
    using FB11 = Register::Combo_Bit<f21r1_reg_type, 11, tf>;

    template<bool tf>
    using FB12 = Register::Combo_Bit<f21r1_reg_type, 12, tf>;

    template<bool tf>
    using FB13 = Register::Combo_Bit<f21r1_reg_type, 13, tf>;

    template<bool tf>
    using FB14 = Register::Combo_Bit<f21r1_reg_type, 14, tf>;

    template<bool tf>
    using FB15 = Register::Combo_Bit<f21r1_reg_type, 15, tf>;

    template<bool tf>
    using FB16 = Register::Combo_Bit<f21r1_reg_type, 16, tf>;

    template<bool tf>
    using FB17 = Register::Combo_Bit<f21r1_reg_type, 17, tf>;

    template<bool tf>
    using FB18 = Register::Combo_Bit<f21r1_reg_type, 18, tf>;

    template<bool tf>
    using FB19 = Register::Combo_Bit<f21r1_reg_type, 19, tf>;

    template<bool tf>
    using FB20 = Register::Combo_Bit<f21r1_reg_type, 20, tf>;

    template<bool tf>
    using FB21 = Register::Combo_Bit<f21r1_reg_type, 21, tf>;

    template<bool tf>
    using FB22 = Register::Combo_Bit<f21r1_reg_type, 22, tf>;

    template<bool tf>
    using FB23 = Register::Combo_Bit<f21r1_reg_type, 23, tf>;

    template<bool tf>
    using FB24 = Register::Combo_Bit<f21r1_reg_type, 24, tf>;

    template<bool tf>
    using FB25 = Register::Combo_Bit<f21r1_reg_type, 25, tf>;

    template<bool tf>
    using FB26 = Register::Combo_Bit<f21r1_reg_type, 26, tf>;

    template<bool tf>
    using FB27 = Register::Combo_Bit<f21r1_reg_type, 27, tf>;

    template<bool tf>
    using FB28 = Register::Combo_Bit<f21r1_reg_type, 28, tf>;

    template<bool tf>
    using FB29 = Register::Combo_Bit<f21r1_reg_type, 29, tf>;

    template<bool tf>
    using FB30 = Register::Combo_Bit<f21r1_reg_type, 30, tf>;

    template<bool tf>
    using FB31 = Register::Combo_Bit<f21r1_reg_type, 31, tf>;

} // CAN_F21R1
namespace CAN_F21R2 {

    enum class f21r2_reg_type {};

    template<bool tf>
    using FB0 = Register::Combo_Bit<f21r2_reg_type, 0, tf>;

    template<bool tf>
    using FB1 = Register::Combo_Bit<f21r2_reg_type, 1, tf>;

    template<bool tf>
    using FB2 = Register::Combo_Bit<f21r2_reg_type, 2, tf>;

    template<bool tf>
    using FB3 = Register::Combo_Bit<f21r2_reg_type, 3, tf>;

    template<bool tf>
    using FB4 = Register::Combo_Bit<f21r2_reg_type, 4, tf>;

    template<bool tf>
    using FB5 = Register::Combo_Bit<f21r2_reg_type, 5, tf>;

    template<bool tf>
    using FB6 = Register::Combo_Bit<f21r2_reg_type, 6, tf>;

    template<bool tf>
    using FB7 = Register::Combo_Bit<f21r2_reg_type, 7, tf>;

    template<bool tf>
    using FB8 = Register::Combo_Bit<f21r2_reg_type, 8, tf>;

    template<bool tf>
    using FB9 = Register::Combo_Bit<f21r2_reg_type, 9, tf>;

    template<bool tf>
    using FB10 = Register::Combo_Bit<f21r2_reg_type, 10, tf>;

    template<bool tf>
    using FB11 = Register::Combo_Bit<f21r2_reg_type, 11, tf>;

    template<bool tf>
    using FB12 = Register::Combo_Bit<f21r2_reg_type, 12, tf>;

    template<bool tf>
    using FB13 = Register::Combo_Bit<f21r2_reg_type, 13, tf>;

    template<bool tf>
    using FB14 = Register::Combo_Bit<f21r2_reg_type, 14, tf>;

    template<bool tf>
    using FB15 = Register::Combo_Bit<f21r2_reg_type, 15, tf>;

    template<bool tf>
    using FB16 = Register::Combo_Bit<f21r2_reg_type, 16, tf>;

    template<bool tf>
    using FB17 = Register::Combo_Bit<f21r2_reg_type, 17, tf>;

    template<bool tf>
    using FB18 = Register::Combo_Bit<f21r2_reg_type, 18, tf>;

    template<bool tf>
    using FB19 = Register::Combo_Bit<f21r2_reg_type, 19, tf>;

    template<bool tf>
    using FB20 = Register::Combo_Bit<f21r2_reg_type, 20, tf>;

    template<bool tf>
    using FB21 = Register::Combo_Bit<f21r2_reg_type, 21, tf>;

    template<bool tf>
    using FB22 = Register::Combo_Bit<f21r2_reg_type, 22, tf>;

    template<bool tf>
    using FB23 = Register::Combo_Bit<f21r2_reg_type, 23, tf>;

    template<bool tf>
    using FB24 = Register::Combo_Bit<f21r2_reg_type, 24, tf>;

    template<bool tf>
    using FB25 = Register::Combo_Bit<f21r2_reg_type, 25, tf>;

    template<bool tf>
    using FB26 = Register::Combo_Bit<f21r2_reg_type, 26, tf>;

    template<bool tf>
    using FB27 = Register::Combo_Bit<f21r2_reg_type, 27, tf>;

    template<bool tf>
    using FB28 = Register::Combo_Bit<f21r2_reg_type, 28, tf>;

    template<bool tf>
    using FB29 = Register::Combo_Bit<f21r2_reg_type, 29, tf>;

    template<bool tf>
    using FB30 = Register::Combo_Bit<f21r2_reg_type, 30, tf>;

    template<bool tf>
    using FB31 = Register::Combo_Bit<f21r2_reg_type, 31, tf>;

} // CAN_F21R2
namespace CAN_F22R1 {

    enum class f22r1_reg_type {};

    template<bool tf>
    using FB0 = Register::Combo_Bit<f22r1_reg_type, 0, tf>;

    template<bool tf>
    using FB1 = Register::Combo_Bit<f22r1_reg_type, 1, tf>;

    template<bool tf>
    using FB2 = Register::Combo_Bit<f22r1_reg_type, 2, tf>;

    template<bool tf>
    using FB3 = Register::Combo_Bit<f22r1_reg_type, 3, tf>;

    template<bool tf>
    using FB4 = Register::Combo_Bit<f22r1_reg_type, 4, tf>;

    template<bool tf>
    using FB5 = Register::Combo_Bit<f22r1_reg_type, 5, tf>;

    template<bool tf>
    using FB6 = Register::Combo_Bit<f22r1_reg_type, 6, tf>;

    template<bool tf>
    using FB7 = Register::Combo_Bit<f22r1_reg_type, 7, tf>;

    template<bool tf>
    using FB8 = Register::Combo_Bit<f22r1_reg_type, 8, tf>;

    template<bool tf>
    using FB9 = Register::Combo_Bit<f22r1_reg_type, 9, tf>;

    template<bool tf>
    using FB10 = Register::Combo_Bit<f22r1_reg_type, 10, tf>;

    template<bool tf>
    using FB11 = Register::Combo_Bit<f22r1_reg_type, 11, tf>;

    template<bool tf>
    using FB12 = Register::Combo_Bit<f22r1_reg_type, 12, tf>;

    template<bool tf>
    using FB13 = Register::Combo_Bit<f22r1_reg_type, 13, tf>;

    template<bool tf>
    using FB14 = Register::Combo_Bit<f22r1_reg_type, 14, tf>;

    template<bool tf>
    using FB15 = Register::Combo_Bit<f22r1_reg_type, 15, tf>;

    template<bool tf>
    using FB16 = Register::Combo_Bit<f22r1_reg_type, 16, tf>;

    template<bool tf>
    using FB17 = Register::Combo_Bit<f22r1_reg_type, 17, tf>;

    template<bool tf>
    using FB18 = Register::Combo_Bit<f22r1_reg_type, 18, tf>;

    template<bool tf>
    using FB19 = Register::Combo_Bit<f22r1_reg_type, 19, tf>;

    template<bool tf>
    using FB20 = Register::Combo_Bit<f22r1_reg_type, 20, tf>;

    template<bool tf>
    using FB21 = Register::Combo_Bit<f22r1_reg_type, 21, tf>;

    template<bool tf>
    using FB22 = Register::Combo_Bit<f22r1_reg_type, 22, tf>;

    template<bool tf>
    using FB23 = Register::Combo_Bit<f22r1_reg_type, 23, tf>;

    template<bool tf>
    using FB24 = Register::Combo_Bit<f22r1_reg_type, 24, tf>;

    template<bool tf>
    using FB25 = Register::Combo_Bit<f22r1_reg_type, 25, tf>;

    template<bool tf>
    using FB26 = Register::Combo_Bit<f22r1_reg_type, 26, tf>;

    template<bool tf>
    using FB27 = Register::Combo_Bit<f22r1_reg_type, 27, tf>;

    template<bool tf>
    using FB28 = Register::Combo_Bit<f22r1_reg_type, 28, tf>;

    template<bool tf>
    using FB29 = Register::Combo_Bit<f22r1_reg_type, 29, tf>;

    template<bool tf>
    using FB30 = Register::Combo_Bit<f22r1_reg_type, 30, tf>;

    template<bool tf>
    using FB31 = Register::Combo_Bit<f22r1_reg_type, 31, tf>;

} // CAN_F22R1
namespace CAN_F22R2 {

    enum class f22r2_reg_type {};

    template<bool tf>
    using FB0 = Register::Combo_Bit<f22r2_reg_type, 0, tf>;

    template<bool tf>
    using FB1 = Register::Combo_Bit<f22r2_reg_type, 1, tf>;

    template<bool tf>
    using FB2 = Register::Combo_Bit<f22r2_reg_type, 2, tf>;

    template<bool tf>
    using FB3 = Register::Combo_Bit<f22r2_reg_type, 3, tf>;

    template<bool tf>
    using FB4 = Register::Combo_Bit<f22r2_reg_type, 4, tf>;

    template<bool tf>
    using FB5 = Register::Combo_Bit<f22r2_reg_type, 5, tf>;

    template<bool tf>
    using FB6 = Register::Combo_Bit<f22r2_reg_type, 6, tf>;

    template<bool tf>
    using FB7 = Register::Combo_Bit<f22r2_reg_type, 7, tf>;

    template<bool tf>
    using FB8 = Register::Combo_Bit<f22r2_reg_type, 8, tf>;

    template<bool tf>
    using FB9 = Register::Combo_Bit<f22r2_reg_type, 9, tf>;

    template<bool tf>
    using FB10 = Register::Combo_Bit<f22r2_reg_type, 10, tf>;

    template<bool tf>
    using FB11 = Register::Combo_Bit<f22r2_reg_type, 11, tf>;

    template<bool tf>
    using FB12 = Register::Combo_Bit<f22r2_reg_type, 12, tf>;

    template<bool tf>
    using FB13 = Register::Combo_Bit<f22r2_reg_type, 13, tf>;

    template<bool tf>
    using FB14 = Register::Combo_Bit<f22r2_reg_type, 14, tf>;

    template<bool tf>
    using FB15 = Register::Combo_Bit<f22r2_reg_type, 15, tf>;

    template<bool tf>
    using FB16 = Register::Combo_Bit<f22r2_reg_type, 16, tf>;

    template<bool tf>
    using FB17 = Register::Combo_Bit<f22r2_reg_type, 17, tf>;

    template<bool tf>
    using FB18 = Register::Combo_Bit<f22r2_reg_type, 18, tf>;

    template<bool tf>
    using FB19 = Register::Combo_Bit<f22r2_reg_type, 19, tf>;

    template<bool tf>
    using FB20 = Register::Combo_Bit<f22r2_reg_type, 20, tf>;

    template<bool tf>
    using FB21 = Register::Combo_Bit<f22r2_reg_type, 21, tf>;

    template<bool tf>
    using FB22 = Register::Combo_Bit<f22r2_reg_type, 22, tf>;

    template<bool tf>
    using FB23 = Register::Combo_Bit<f22r2_reg_type, 23, tf>;

    template<bool tf>
    using FB24 = Register::Combo_Bit<f22r2_reg_type, 24, tf>;

    template<bool tf>
    using FB25 = Register::Combo_Bit<f22r2_reg_type, 25, tf>;

    template<bool tf>
    using FB26 = Register::Combo_Bit<f22r2_reg_type, 26, tf>;

    template<bool tf>
    using FB27 = Register::Combo_Bit<f22r2_reg_type, 27, tf>;

    template<bool tf>
    using FB28 = Register::Combo_Bit<f22r2_reg_type, 28, tf>;

    template<bool tf>
    using FB29 = Register::Combo_Bit<f22r2_reg_type, 29, tf>;

    template<bool tf>
    using FB30 = Register::Combo_Bit<f22r2_reg_type, 30, tf>;

    template<bool tf>
    using FB31 = Register::Combo_Bit<f22r2_reg_type, 31, tf>;

} // CAN_F22R2
namespace CAN_F23R1 {

    enum class f23r1_reg_type {};

    template<bool tf>
    using FB0 = Register::Combo_Bit<f23r1_reg_type, 0, tf>;

    template<bool tf>
    using FB1 = Register::Combo_Bit<f23r1_reg_type, 1, tf>;

    template<bool tf>
    using FB2 = Register::Combo_Bit<f23r1_reg_type, 2, tf>;

    template<bool tf>
    using FB3 = Register::Combo_Bit<f23r1_reg_type, 3, tf>;

    template<bool tf>
    using FB4 = Register::Combo_Bit<f23r1_reg_type, 4, tf>;

    template<bool tf>
    using FB5 = Register::Combo_Bit<f23r1_reg_type, 5, tf>;

    template<bool tf>
    using FB6 = Register::Combo_Bit<f23r1_reg_type, 6, tf>;

    template<bool tf>
    using FB7 = Register::Combo_Bit<f23r1_reg_type, 7, tf>;

    template<bool tf>
    using FB8 = Register::Combo_Bit<f23r1_reg_type, 8, tf>;

    template<bool tf>
    using FB9 = Register::Combo_Bit<f23r1_reg_type, 9, tf>;

    template<bool tf>
    using FB10 = Register::Combo_Bit<f23r1_reg_type, 10, tf>;

    template<bool tf>
    using FB11 = Register::Combo_Bit<f23r1_reg_type, 11, tf>;

    template<bool tf>
    using FB12 = Register::Combo_Bit<f23r1_reg_type, 12, tf>;

    template<bool tf>
    using FB13 = Register::Combo_Bit<f23r1_reg_type, 13, tf>;

    template<bool tf>
    using FB14 = Register::Combo_Bit<f23r1_reg_type, 14, tf>;

    template<bool tf>
    using FB15 = Register::Combo_Bit<f23r1_reg_type, 15, tf>;

    template<bool tf>
    using FB16 = Register::Combo_Bit<f23r1_reg_type, 16, tf>;

    template<bool tf>
    using FB17 = Register::Combo_Bit<f23r1_reg_type, 17, tf>;

    template<bool tf>
    using FB18 = Register::Combo_Bit<f23r1_reg_type, 18, tf>;

    template<bool tf>
    using FB19 = Register::Combo_Bit<f23r1_reg_type, 19, tf>;

    template<bool tf>
    using FB20 = Register::Combo_Bit<f23r1_reg_type, 20, tf>;

    template<bool tf>
    using FB21 = Register::Combo_Bit<f23r1_reg_type, 21, tf>;

    template<bool tf>
    using FB22 = Register::Combo_Bit<f23r1_reg_type, 22, tf>;

    template<bool tf>
    using FB23 = Register::Combo_Bit<f23r1_reg_type, 23, tf>;

    template<bool tf>
    using FB24 = Register::Combo_Bit<f23r1_reg_type, 24, tf>;

    template<bool tf>
    using FB25 = Register::Combo_Bit<f23r1_reg_type, 25, tf>;

    template<bool tf>
    using FB26 = Register::Combo_Bit<f23r1_reg_type, 26, tf>;

    template<bool tf>
    using FB27 = Register::Combo_Bit<f23r1_reg_type, 27, tf>;

    template<bool tf>
    using FB28 = Register::Combo_Bit<f23r1_reg_type, 28, tf>;

    template<bool tf>
    using FB29 = Register::Combo_Bit<f23r1_reg_type, 29, tf>;

    template<bool tf>
    using FB30 = Register::Combo_Bit<f23r1_reg_type, 30, tf>;

    template<bool tf>
    using FB31 = Register::Combo_Bit<f23r1_reg_type, 31, tf>;

} // CAN_F23R1
namespace CAN_F23R2 {

    enum class f23r2_reg_type {};

    template<bool tf>
    using FB0 = Register::Combo_Bit<f23r2_reg_type, 0, tf>;

    template<bool tf>
    using FB1 = Register::Combo_Bit<f23r2_reg_type, 1, tf>;

    template<bool tf>
    using FB2 = Register::Combo_Bit<f23r2_reg_type, 2, tf>;

    template<bool tf>
    using FB3 = Register::Combo_Bit<f23r2_reg_type, 3, tf>;

    template<bool tf>
    using FB4 = Register::Combo_Bit<f23r2_reg_type, 4, tf>;

    template<bool tf>
    using FB5 = Register::Combo_Bit<f23r2_reg_type, 5, tf>;

    template<bool tf>
    using FB6 = Register::Combo_Bit<f23r2_reg_type, 6, tf>;

    template<bool tf>
    using FB7 = Register::Combo_Bit<f23r2_reg_type, 7, tf>;

    template<bool tf>
    using FB8 = Register::Combo_Bit<f23r2_reg_type, 8, tf>;

    template<bool tf>
    using FB9 = Register::Combo_Bit<f23r2_reg_type, 9, tf>;

    template<bool tf>
    using FB10 = Register::Combo_Bit<f23r2_reg_type, 10, tf>;

    template<bool tf>
    using FB11 = Register::Combo_Bit<f23r2_reg_type, 11, tf>;

    template<bool tf>
    using FB12 = Register::Combo_Bit<f23r2_reg_type, 12, tf>;

    template<bool tf>
    using FB13 = Register::Combo_Bit<f23r2_reg_type, 13, tf>;

    template<bool tf>
    using FB14 = Register::Combo_Bit<f23r2_reg_type, 14, tf>;

    template<bool tf>
    using FB15 = Register::Combo_Bit<f23r2_reg_type, 15, tf>;

    template<bool tf>
    using FB16 = Register::Combo_Bit<f23r2_reg_type, 16, tf>;

    template<bool tf>
    using FB17 = Register::Combo_Bit<f23r2_reg_type, 17, tf>;

    template<bool tf>
    using FB18 = Register::Combo_Bit<f23r2_reg_type, 18, tf>;

    template<bool tf>
    using FB19 = Register::Combo_Bit<f23r2_reg_type, 19, tf>;

    template<bool tf>
    using FB20 = Register::Combo_Bit<f23r2_reg_type, 20, tf>;

    template<bool tf>
    using FB21 = Register::Combo_Bit<f23r2_reg_type, 21, tf>;

    template<bool tf>
    using FB22 = Register::Combo_Bit<f23r2_reg_type, 22, tf>;

    template<bool tf>
    using FB23 = Register::Combo_Bit<f23r2_reg_type, 23, tf>;

    template<bool tf>
    using FB24 = Register::Combo_Bit<f23r2_reg_type, 24, tf>;

    template<bool tf>
    using FB25 = Register::Combo_Bit<f23r2_reg_type, 25, tf>;

    template<bool tf>
    using FB26 = Register::Combo_Bit<f23r2_reg_type, 26, tf>;

    template<bool tf>
    using FB27 = Register::Combo_Bit<f23r2_reg_type, 27, tf>;

    template<bool tf>
    using FB28 = Register::Combo_Bit<f23r2_reg_type, 28, tf>;

    template<bool tf>
    using FB29 = Register::Combo_Bit<f23r2_reg_type, 29, tf>;

    template<bool tf>
    using FB30 = Register::Combo_Bit<f23r2_reg_type, 30, tf>;

    template<bool tf>
    using FB31 = Register::Combo_Bit<f23r2_reg_type, 31, tf>;

} // CAN_F23R2
namespace CAN_F24R1 {

    enum class f24r1_reg_type {};

    template<bool tf>
    using FB0 = Register::Combo_Bit<f24r1_reg_type, 0, tf>;

    template<bool tf>
    using FB1 = Register::Combo_Bit<f24r1_reg_type, 1, tf>;

    template<bool tf>
    using FB2 = Register::Combo_Bit<f24r1_reg_type, 2, tf>;

    template<bool tf>
    using FB3 = Register::Combo_Bit<f24r1_reg_type, 3, tf>;

    template<bool tf>
    using FB4 = Register::Combo_Bit<f24r1_reg_type, 4, tf>;

    template<bool tf>
    using FB5 = Register::Combo_Bit<f24r1_reg_type, 5, tf>;

    template<bool tf>
    using FB6 = Register::Combo_Bit<f24r1_reg_type, 6, tf>;

    template<bool tf>
    using FB7 = Register::Combo_Bit<f24r1_reg_type, 7, tf>;

    template<bool tf>
    using FB8 = Register::Combo_Bit<f24r1_reg_type, 8, tf>;

    template<bool tf>
    using FB9 = Register::Combo_Bit<f24r1_reg_type, 9, tf>;

    template<bool tf>
    using FB10 = Register::Combo_Bit<f24r1_reg_type, 10, tf>;

    template<bool tf>
    using FB11 = Register::Combo_Bit<f24r1_reg_type, 11, tf>;

    template<bool tf>
    using FB12 = Register::Combo_Bit<f24r1_reg_type, 12, tf>;

    template<bool tf>
    using FB13 = Register::Combo_Bit<f24r1_reg_type, 13, tf>;

    template<bool tf>
    using FB14 = Register::Combo_Bit<f24r1_reg_type, 14, tf>;

    template<bool tf>
    using FB15 = Register::Combo_Bit<f24r1_reg_type, 15, tf>;

    template<bool tf>
    using FB16 = Register::Combo_Bit<f24r1_reg_type, 16, tf>;

    template<bool tf>
    using FB17 = Register::Combo_Bit<f24r1_reg_type, 17, tf>;

    template<bool tf>
    using FB18 = Register::Combo_Bit<f24r1_reg_type, 18, tf>;

    template<bool tf>
    using FB19 = Register::Combo_Bit<f24r1_reg_type, 19, tf>;

    template<bool tf>
    using FB20 = Register::Combo_Bit<f24r1_reg_type, 20, tf>;

    template<bool tf>
    using FB21 = Register::Combo_Bit<f24r1_reg_type, 21, tf>;

    template<bool tf>
    using FB22 = Register::Combo_Bit<f24r1_reg_type, 22, tf>;

    template<bool tf>
    using FB23 = Register::Combo_Bit<f24r1_reg_type, 23, tf>;

    template<bool tf>
    using FB24 = Register::Combo_Bit<f24r1_reg_type, 24, tf>;

    template<bool tf>
    using FB25 = Register::Combo_Bit<f24r1_reg_type, 25, tf>;

    template<bool tf>
    using FB26 = Register::Combo_Bit<f24r1_reg_type, 26, tf>;

    template<bool tf>
    using FB27 = Register::Combo_Bit<f24r1_reg_type, 27, tf>;

    template<bool tf>
    using FB28 = Register::Combo_Bit<f24r1_reg_type, 28, tf>;

    template<bool tf>
    using FB29 = Register::Combo_Bit<f24r1_reg_type, 29, tf>;

    template<bool tf>
    using FB30 = Register::Combo_Bit<f24r1_reg_type, 30, tf>;

    template<bool tf>
    using FB31 = Register::Combo_Bit<f24r1_reg_type, 31, tf>;

} // CAN_F24R1
namespace CAN_F24R2 {

    enum class f24r2_reg_type {};

    template<bool tf>
    using FB0 = Register::Combo_Bit<f24r2_reg_type, 0, tf>;

    template<bool tf>
    using FB1 = Register::Combo_Bit<f24r2_reg_type, 1, tf>;

    template<bool tf>
    using FB2 = Register::Combo_Bit<f24r2_reg_type, 2, tf>;

    template<bool tf>
    using FB3 = Register::Combo_Bit<f24r2_reg_type, 3, tf>;

    template<bool tf>
    using FB4 = Register::Combo_Bit<f24r2_reg_type, 4, tf>;

    template<bool tf>
    using FB5 = Register::Combo_Bit<f24r2_reg_type, 5, tf>;

    template<bool tf>
    using FB6 = Register::Combo_Bit<f24r2_reg_type, 6, tf>;

    template<bool tf>
    using FB7 = Register::Combo_Bit<f24r2_reg_type, 7, tf>;

    template<bool tf>
    using FB8 = Register::Combo_Bit<f24r2_reg_type, 8, tf>;

    template<bool tf>
    using FB9 = Register::Combo_Bit<f24r2_reg_type, 9, tf>;

    template<bool tf>
    using FB10 = Register::Combo_Bit<f24r2_reg_type, 10, tf>;

    template<bool tf>
    using FB11 = Register::Combo_Bit<f24r2_reg_type, 11, tf>;

    template<bool tf>
    using FB12 = Register::Combo_Bit<f24r2_reg_type, 12, tf>;

    template<bool tf>
    using FB13 = Register::Combo_Bit<f24r2_reg_type, 13, tf>;

    template<bool tf>
    using FB14 = Register::Combo_Bit<f24r2_reg_type, 14, tf>;

    template<bool tf>
    using FB15 = Register::Combo_Bit<f24r2_reg_type, 15, tf>;

    template<bool tf>
    using FB16 = Register::Combo_Bit<f24r2_reg_type, 16, tf>;

    template<bool tf>
    using FB17 = Register::Combo_Bit<f24r2_reg_type, 17, tf>;

    template<bool tf>
    using FB18 = Register::Combo_Bit<f24r2_reg_type, 18, tf>;

    template<bool tf>
    using FB19 = Register::Combo_Bit<f24r2_reg_type, 19, tf>;

    template<bool tf>
    using FB20 = Register::Combo_Bit<f24r2_reg_type, 20, tf>;

    template<bool tf>
    using FB21 = Register::Combo_Bit<f24r2_reg_type, 21, tf>;

    template<bool tf>
    using FB22 = Register::Combo_Bit<f24r2_reg_type, 22, tf>;

    template<bool tf>
    using FB23 = Register::Combo_Bit<f24r2_reg_type, 23, tf>;

    template<bool tf>
    using FB24 = Register::Combo_Bit<f24r2_reg_type, 24, tf>;

    template<bool tf>
    using FB25 = Register::Combo_Bit<f24r2_reg_type, 25, tf>;

    template<bool tf>
    using FB26 = Register::Combo_Bit<f24r2_reg_type, 26, tf>;

    template<bool tf>
    using FB27 = Register::Combo_Bit<f24r2_reg_type, 27, tf>;

    template<bool tf>
    using FB28 = Register::Combo_Bit<f24r2_reg_type, 28, tf>;

    template<bool tf>
    using FB29 = Register::Combo_Bit<f24r2_reg_type, 29, tf>;

    template<bool tf>
    using FB30 = Register::Combo_Bit<f24r2_reg_type, 30, tf>;

    template<bool tf>
    using FB31 = Register::Combo_Bit<f24r2_reg_type, 31, tf>;

} // CAN_F24R2
namespace CAN_F25R1 {

    enum class f25r1_reg_type {};

    template<bool tf>
    using FB0 = Register::Combo_Bit<f25r1_reg_type, 0, tf>;

    template<bool tf>
    using FB1 = Register::Combo_Bit<f25r1_reg_type, 1, tf>;

    template<bool tf>
    using FB2 = Register::Combo_Bit<f25r1_reg_type, 2, tf>;

    template<bool tf>
    using FB3 = Register::Combo_Bit<f25r1_reg_type, 3, tf>;

    template<bool tf>
    using FB4 = Register::Combo_Bit<f25r1_reg_type, 4, tf>;

    template<bool tf>
    using FB5 = Register::Combo_Bit<f25r1_reg_type, 5, tf>;

    template<bool tf>
    using FB6 = Register::Combo_Bit<f25r1_reg_type, 6, tf>;

    template<bool tf>
    using FB7 = Register::Combo_Bit<f25r1_reg_type, 7, tf>;

    template<bool tf>
    using FB8 = Register::Combo_Bit<f25r1_reg_type, 8, tf>;

    template<bool tf>
    using FB9 = Register::Combo_Bit<f25r1_reg_type, 9, tf>;

    template<bool tf>
    using FB10 = Register::Combo_Bit<f25r1_reg_type, 10, tf>;

    template<bool tf>
    using FB11 = Register::Combo_Bit<f25r1_reg_type, 11, tf>;

    template<bool tf>
    using FB12 = Register::Combo_Bit<f25r1_reg_type, 12, tf>;

    template<bool tf>
    using FB13 = Register::Combo_Bit<f25r1_reg_type, 13, tf>;

    template<bool tf>
    using FB14 = Register::Combo_Bit<f25r1_reg_type, 14, tf>;

    template<bool tf>
    using FB15 = Register::Combo_Bit<f25r1_reg_type, 15, tf>;

    template<bool tf>
    using FB16 = Register::Combo_Bit<f25r1_reg_type, 16, tf>;

    template<bool tf>
    using FB17 = Register::Combo_Bit<f25r1_reg_type, 17, tf>;

    template<bool tf>
    using FB18 = Register::Combo_Bit<f25r1_reg_type, 18, tf>;

    template<bool tf>
    using FB19 = Register::Combo_Bit<f25r1_reg_type, 19, tf>;

    template<bool tf>
    using FB20 = Register::Combo_Bit<f25r1_reg_type, 20, tf>;

    template<bool tf>
    using FB21 = Register::Combo_Bit<f25r1_reg_type, 21, tf>;

    template<bool tf>
    using FB22 = Register::Combo_Bit<f25r1_reg_type, 22, tf>;

    template<bool tf>
    using FB23 = Register::Combo_Bit<f25r1_reg_type, 23, tf>;

    template<bool tf>
    using FB24 = Register::Combo_Bit<f25r1_reg_type, 24, tf>;

    template<bool tf>
    using FB25 = Register::Combo_Bit<f25r1_reg_type, 25, tf>;

    template<bool tf>
    using FB26 = Register::Combo_Bit<f25r1_reg_type, 26, tf>;

    template<bool tf>
    using FB27 = Register::Combo_Bit<f25r1_reg_type, 27, tf>;

    template<bool tf>
    using FB28 = Register::Combo_Bit<f25r1_reg_type, 28, tf>;

    template<bool tf>
    using FB29 = Register::Combo_Bit<f25r1_reg_type, 29, tf>;

    template<bool tf>
    using FB30 = Register::Combo_Bit<f25r1_reg_type, 30, tf>;

    template<bool tf>
    using FB31 = Register::Combo_Bit<f25r1_reg_type, 31, tf>;

} // CAN_F25R1
namespace CAN_F25R2 {

    enum class f25r2_reg_type {};

    template<bool tf>
    using FB0 = Register::Combo_Bit<f25r2_reg_type, 0, tf>;

    template<bool tf>
    using FB1 = Register::Combo_Bit<f25r2_reg_type, 1, tf>;

    template<bool tf>
    using FB2 = Register::Combo_Bit<f25r2_reg_type, 2, tf>;

    template<bool tf>
    using FB3 = Register::Combo_Bit<f25r2_reg_type, 3, tf>;

    template<bool tf>
    using FB4 = Register::Combo_Bit<f25r2_reg_type, 4, tf>;

    template<bool tf>
    using FB5 = Register::Combo_Bit<f25r2_reg_type, 5, tf>;

    template<bool tf>
    using FB6 = Register::Combo_Bit<f25r2_reg_type, 6, tf>;

    template<bool tf>
    using FB7 = Register::Combo_Bit<f25r2_reg_type, 7, tf>;

    template<bool tf>
    using FB8 = Register::Combo_Bit<f25r2_reg_type, 8, tf>;

    template<bool tf>
    using FB9 = Register::Combo_Bit<f25r2_reg_type, 9, tf>;

    template<bool tf>
    using FB10 = Register::Combo_Bit<f25r2_reg_type, 10, tf>;

    template<bool tf>
    using FB11 = Register::Combo_Bit<f25r2_reg_type, 11, tf>;

    template<bool tf>
    using FB12 = Register::Combo_Bit<f25r2_reg_type, 12, tf>;

    template<bool tf>
    using FB13 = Register::Combo_Bit<f25r2_reg_type, 13, tf>;

    template<bool tf>
    using FB14 = Register::Combo_Bit<f25r2_reg_type, 14, tf>;

    template<bool tf>
    using FB15 = Register::Combo_Bit<f25r2_reg_type, 15, tf>;

    template<bool tf>
    using FB16 = Register::Combo_Bit<f25r2_reg_type, 16, tf>;

    template<bool tf>
    using FB17 = Register::Combo_Bit<f25r2_reg_type, 17, tf>;

    template<bool tf>
    using FB18 = Register::Combo_Bit<f25r2_reg_type, 18, tf>;

    template<bool tf>
    using FB19 = Register::Combo_Bit<f25r2_reg_type, 19, tf>;

    template<bool tf>
    using FB20 = Register::Combo_Bit<f25r2_reg_type, 20, tf>;

    template<bool tf>
    using FB21 = Register::Combo_Bit<f25r2_reg_type, 21, tf>;

    template<bool tf>
    using FB22 = Register::Combo_Bit<f25r2_reg_type, 22, tf>;

    template<bool tf>
    using FB23 = Register::Combo_Bit<f25r2_reg_type, 23, tf>;

    template<bool tf>
    using FB24 = Register::Combo_Bit<f25r2_reg_type, 24, tf>;

    template<bool tf>
    using FB25 = Register::Combo_Bit<f25r2_reg_type, 25, tf>;

    template<bool tf>
    using FB26 = Register::Combo_Bit<f25r2_reg_type, 26, tf>;

    template<bool tf>
    using FB27 = Register::Combo_Bit<f25r2_reg_type, 27, tf>;

    template<bool tf>
    using FB28 = Register::Combo_Bit<f25r2_reg_type, 28, tf>;

    template<bool tf>
    using FB29 = Register::Combo_Bit<f25r2_reg_type, 29, tf>;

    template<bool tf>
    using FB30 = Register::Combo_Bit<f25r2_reg_type, 30, tf>;

    template<bool tf>
    using FB31 = Register::Combo_Bit<f25r2_reg_type, 31, tf>;

} // CAN_F25R2
namespace CAN_F26R1 {

    enum class f26r1_reg_type {};

    template<bool tf>
    using FB0 = Register::Combo_Bit<f26r1_reg_type, 0, tf>;

    template<bool tf>
    using FB1 = Register::Combo_Bit<f26r1_reg_type, 1, tf>;

    template<bool tf>
    using FB2 = Register::Combo_Bit<f26r1_reg_type, 2, tf>;

    template<bool tf>
    using FB3 = Register::Combo_Bit<f26r1_reg_type, 3, tf>;

    template<bool tf>
    using FB4 = Register::Combo_Bit<f26r1_reg_type, 4, tf>;

    template<bool tf>
    using FB5 = Register::Combo_Bit<f26r1_reg_type, 5, tf>;

    template<bool tf>
    using FB6 = Register::Combo_Bit<f26r1_reg_type, 6, tf>;

    template<bool tf>
    using FB7 = Register::Combo_Bit<f26r1_reg_type, 7, tf>;

    template<bool tf>
    using FB8 = Register::Combo_Bit<f26r1_reg_type, 8, tf>;

    template<bool tf>
    using FB9 = Register::Combo_Bit<f26r1_reg_type, 9, tf>;

    template<bool tf>
    using FB10 = Register::Combo_Bit<f26r1_reg_type, 10, tf>;

    template<bool tf>
    using FB11 = Register::Combo_Bit<f26r1_reg_type, 11, tf>;

    template<bool tf>
    using FB12 = Register::Combo_Bit<f26r1_reg_type, 12, tf>;

    template<bool tf>
    using FB13 = Register::Combo_Bit<f26r1_reg_type, 13, tf>;

    template<bool tf>
    using FB14 = Register::Combo_Bit<f26r1_reg_type, 14, tf>;

    template<bool tf>
    using FB15 = Register::Combo_Bit<f26r1_reg_type, 15, tf>;

    template<bool tf>
    using FB16 = Register::Combo_Bit<f26r1_reg_type, 16, tf>;

    template<bool tf>
    using FB17 = Register::Combo_Bit<f26r1_reg_type, 17, tf>;

    template<bool tf>
    using FB18 = Register::Combo_Bit<f26r1_reg_type, 18, tf>;

    template<bool tf>
    using FB19 = Register::Combo_Bit<f26r1_reg_type, 19, tf>;

    template<bool tf>
    using FB20 = Register::Combo_Bit<f26r1_reg_type, 20, tf>;

    template<bool tf>
    using FB21 = Register::Combo_Bit<f26r1_reg_type, 21, tf>;

    template<bool tf>
    using FB22 = Register::Combo_Bit<f26r1_reg_type, 22, tf>;

    template<bool tf>
    using FB23 = Register::Combo_Bit<f26r1_reg_type, 23, tf>;

    template<bool tf>
    using FB24 = Register::Combo_Bit<f26r1_reg_type, 24, tf>;

    template<bool tf>
    using FB25 = Register::Combo_Bit<f26r1_reg_type, 25, tf>;

    template<bool tf>
    using FB26 = Register::Combo_Bit<f26r1_reg_type, 26, tf>;

    template<bool tf>
    using FB27 = Register::Combo_Bit<f26r1_reg_type, 27, tf>;

    template<bool tf>
    using FB28 = Register::Combo_Bit<f26r1_reg_type, 28, tf>;

    template<bool tf>
    using FB29 = Register::Combo_Bit<f26r1_reg_type, 29, tf>;

    template<bool tf>
    using FB30 = Register::Combo_Bit<f26r1_reg_type, 30, tf>;

    template<bool tf>
    using FB31 = Register::Combo_Bit<f26r1_reg_type, 31, tf>;

} // CAN_F26R1
namespace CAN_F26R2 {

    enum class f26r2_reg_type {};

    template<bool tf>
    using FB0 = Register::Combo_Bit<f26r2_reg_type, 0, tf>;

    template<bool tf>
    using FB1 = Register::Combo_Bit<f26r2_reg_type, 1, tf>;

    template<bool tf>
    using FB2 = Register::Combo_Bit<f26r2_reg_type, 2, tf>;

    template<bool tf>
    using FB3 = Register::Combo_Bit<f26r2_reg_type, 3, tf>;

    template<bool tf>
    using FB4 = Register::Combo_Bit<f26r2_reg_type, 4, tf>;

    template<bool tf>
    using FB5 = Register::Combo_Bit<f26r2_reg_type, 5, tf>;

    template<bool tf>
    using FB6 = Register::Combo_Bit<f26r2_reg_type, 6, tf>;

    template<bool tf>
    using FB7 = Register::Combo_Bit<f26r2_reg_type, 7, tf>;

    template<bool tf>
    using FB8 = Register::Combo_Bit<f26r2_reg_type, 8, tf>;

    template<bool tf>
    using FB9 = Register::Combo_Bit<f26r2_reg_type, 9, tf>;

    template<bool tf>
    using FB10 = Register::Combo_Bit<f26r2_reg_type, 10, tf>;

    template<bool tf>
    using FB11 = Register::Combo_Bit<f26r2_reg_type, 11, tf>;

    template<bool tf>
    using FB12 = Register::Combo_Bit<f26r2_reg_type, 12, tf>;

    template<bool tf>
    using FB13 = Register::Combo_Bit<f26r2_reg_type, 13, tf>;

    template<bool tf>
    using FB14 = Register::Combo_Bit<f26r2_reg_type, 14, tf>;

    template<bool tf>
    using FB15 = Register::Combo_Bit<f26r2_reg_type, 15, tf>;

    template<bool tf>
    using FB16 = Register::Combo_Bit<f26r2_reg_type, 16, tf>;

    template<bool tf>
    using FB17 = Register::Combo_Bit<f26r2_reg_type, 17, tf>;

    template<bool tf>
    using FB18 = Register::Combo_Bit<f26r2_reg_type, 18, tf>;

    template<bool tf>
    using FB19 = Register::Combo_Bit<f26r2_reg_type, 19, tf>;

    template<bool tf>
    using FB20 = Register::Combo_Bit<f26r2_reg_type, 20, tf>;

    template<bool tf>
    using FB21 = Register::Combo_Bit<f26r2_reg_type, 21, tf>;

    template<bool tf>
    using FB22 = Register::Combo_Bit<f26r2_reg_type, 22, tf>;

    template<bool tf>
    using FB23 = Register::Combo_Bit<f26r2_reg_type, 23, tf>;

    template<bool tf>
    using FB24 = Register::Combo_Bit<f26r2_reg_type, 24, tf>;

    template<bool tf>
    using FB25 = Register::Combo_Bit<f26r2_reg_type, 25, tf>;

    template<bool tf>
    using FB26 = Register::Combo_Bit<f26r2_reg_type, 26, tf>;

    template<bool tf>
    using FB27 = Register::Combo_Bit<f26r2_reg_type, 27, tf>;

    template<bool tf>
    using FB28 = Register::Combo_Bit<f26r2_reg_type, 28, tf>;

    template<bool tf>
    using FB29 = Register::Combo_Bit<f26r2_reg_type, 29, tf>;

    template<bool tf>
    using FB30 = Register::Combo_Bit<f26r2_reg_type, 30, tf>;

    template<bool tf>
    using FB31 = Register::Combo_Bit<f26r2_reg_type, 31, tf>;

} // CAN_F26R2
namespace CAN_F27R1 {

    enum class f27r1_reg_type {};

    template<bool tf>
    using FB0 = Register::Combo_Bit<f27r1_reg_type, 0, tf>;

    template<bool tf>
    using FB1 = Register::Combo_Bit<f27r1_reg_type, 1, tf>;

    template<bool tf>
    using FB2 = Register::Combo_Bit<f27r1_reg_type, 2, tf>;

    template<bool tf>
    using FB3 = Register::Combo_Bit<f27r1_reg_type, 3, tf>;

    template<bool tf>
    using FB4 = Register::Combo_Bit<f27r1_reg_type, 4, tf>;

    template<bool tf>
    using FB5 = Register::Combo_Bit<f27r1_reg_type, 5, tf>;

    template<bool tf>
    using FB6 = Register::Combo_Bit<f27r1_reg_type, 6, tf>;

    template<bool tf>
    using FB7 = Register::Combo_Bit<f27r1_reg_type, 7, tf>;

    template<bool tf>
    using FB8 = Register::Combo_Bit<f27r1_reg_type, 8, tf>;

    template<bool tf>
    using FB9 = Register::Combo_Bit<f27r1_reg_type, 9, tf>;

    template<bool tf>
    using FB10 = Register::Combo_Bit<f27r1_reg_type, 10, tf>;

    template<bool tf>
    using FB11 = Register::Combo_Bit<f27r1_reg_type, 11, tf>;

    template<bool tf>
    using FB12 = Register::Combo_Bit<f27r1_reg_type, 12, tf>;

    template<bool tf>
    using FB13 = Register::Combo_Bit<f27r1_reg_type, 13, tf>;

    template<bool tf>
    using FB14 = Register::Combo_Bit<f27r1_reg_type, 14, tf>;

    template<bool tf>
    using FB15 = Register::Combo_Bit<f27r1_reg_type, 15, tf>;

    template<bool tf>
    using FB16 = Register::Combo_Bit<f27r1_reg_type, 16, tf>;

    template<bool tf>
    using FB17 = Register::Combo_Bit<f27r1_reg_type, 17, tf>;

    template<bool tf>
    using FB18 = Register::Combo_Bit<f27r1_reg_type, 18, tf>;

    template<bool tf>
    using FB19 = Register::Combo_Bit<f27r1_reg_type, 19, tf>;

    template<bool tf>
    using FB20 = Register::Combo_Bit<f27r1_reg_type, 20, tf>;

    template<bool tf>
    using FB21 = Register::Combo_Bit<f27r1_reg_type, 21, tf>;

    template<bool tf>
    using FB22 = Register::Combo_Bit<f27r1_reg_type, 22, tf>;

    template<bool tf>
    using FB23 = Register::Combo_Bit<f27r1_reg_type, 23, tf>;

    template<bool tf>
    using FB24 = Register::Combo_Bit<f27r1_reg_type, 24, tf>;

    template<bool tf>
    using FB25 = Register::Combo_Bit<f27r1_reg_type, 25, tf>;

    template<bool tf>
    using FB26 = Register::Combo_Bit<f27r1_reg_type, 26, tf>;

    template<bool tf>
    using FB27 = Register::Combo_Bit<f27r1_reg_type, 27, tf>;

    template<bool tf>
    using FB28 = Register::Combo_Bit<f27r1_reg_type, 28, tf>;

    template<bool tf>
    using FB29 = Register::Combo_Bit<f27r1_reg_type, 29, tf>;

    template<bool tf>
    using FB30 = Register::Combo_Bit<f27r1_reg_type, 30, tf>;

    template<bool tf>
    using FB31 = Register::Combo_Bit<f27r1_reg_type, 31, tf>;

} // CAN_F27R1
namespace CAN_F27R2 {

    enum class f27r2_reg_type {};

    template<bool tf>
    using FB0 = Register::Combo_Bit<f27r2_reg_type, 0, tf>;

    template<bool tf>
    using FB1 = Register::Combo_Bit<f27r2_reg_type, 1, tf>;

    template<bool tf>
    using FB2 = Register::Combo_Bit<f27r2_reg_type, 2, tf>;

    template<bool tf>
    using FB3 = Register::Combo_Bit<f27r2_reg_type, 3, tf>;

    template<bool tf>
    using FB4 = Register::Combo_Bit<f27r2_reg_type, 4, tf>;

    template<bool tf>
    using FB5 = Register::Combo_Bit<f27r2_reg_type, 5, tf>;

    template<bool tf>
    using FB6 = Register::Combo_Bit<f27r2_reg_type, 6, tf>;

    template<bool tf>
    using FB7 = Register::Combo_Bit<f27r2_reg_type, 7, tf>;

    template<bool tf>
    using FB8 = Register::Combo_Bit<f27r2_reg_type, 8, tf>;

    template<bool tf>
    using FB9 = Register::Combo_Bit<f27r2_reg_type, 9, tf>;

    template<bool tf>
    using FB10 = Register::Combo_Bit<f27r2_reg_type, 10, tf>;

    template<bool tf>
    using FB11 = Register::Combo_Bit<f27r2_reg_type, 11, tf>;

    template<bool tf>
    using FB12 = Register::Combo_Bit<f27r2_reg_type, 12, tf>;

    template<bool tf>
    using FB13 = Register::Combo_Bit<f27r2_reg_type, 13, tf>;

    template<bool tf>
    using FB14 = Register::Combo_Bit<f27r2_reg_type, 14, tf>;

    template<bool tf>
    using FB15 = Register::Combo_Bit<f27r2_reg_type, 15, tf>;

    template<bool tf>
    using FB16 = Register::Combo_Bit<f27r2_reg_type, 16, tf>;

    template<bool tf>
    using FB17 = Register::Combo_Bit<f27r2_reg_type, 17, tf>;

    template<bool tf>
    using FB18 = Register::Combo_Bit<f27r2_reg_type, 18, tf>;

    template<bool tf>
    using FB19 = Register::Combo_Bit<f27r2_reg_type, 19, tf>;

    template<bool tf>
    using FB20 = Register::Combo_Bit<f27r2_reg_type, 20, tf>;

    template<bool tf>
    using FB21 = Register::Combo_Bit<f27r2_reg_type, 21, tf>;

    template<bool tf>
    using FB22 = Register::Combo_Bit<f27r2_reg_type, 22, tf>;

    template<bool tf>
    using FB23 = Register::Combo_Bit<f27r2_reg_type, 23, tf>;

    template<bool tf>
    using FB24 = Register::Combo_Bit<f27r2_reg_type, 24, tf>;

    template<bool tf>
    using FB25 = Register::Combo_Bit<f27r2_reg_type, 25, tf>;

    template<bool tf>
    using FB26 = Register::Combo_Bit<f27r2_reg_type, 26, tf>;

    template<bool tf>
    using FB27 = Register::Combo_Bit<f27r2_reg_type, 27, tf>;

    template<bool tf>
    using FB28 = Register::Combo_Bit<f27r2_reg_type, 28, tf>;

    template<bool tf>
    using FB29 = Register::Combo_Bit<f27r2_reg_type, 29, tf>;

    template<bool tf>
    using FB30 = Register::Combo_Bit<f27r2_reg_type, 30, tf>;

    template<bool tf>
    using FB31 = Register::Combo_Bit<f27r2_reg_type, 31, tf>;

} // CAN_F27R2
template<uint32_t BASE_ADDRESS>
class CAN {
public:
    static const uint32_t MCR_Offset = 0x0000;
    static const uint32_t MSR_Offset = 0x0004;
    static const uint32_t TSR_Offset = 0x0008;
    static const uint32_t RF0R_Offset = 0x000C;
    static const uint32_t RF1R_Offset = 0x0010;
    static const uint32_t IER_Offset = 0x0014;
    static const uint32_t ESR_Offset = 0x0018;
    static const uint32_t BTR_Offset = 0x001C;
    static const uint32_t TI0R_Offset = 0x0180;
    static const uint32_t TDT0R_Offset = 0x0184;
    static const uint32_t TDL0R_Offset = 0x0188;
    static const uint32_t TDH0R_Offset = 0x018C;
    static const uint32_t TI1R_Offset = 0x0190;
    static const uint32_t TDT1R_Offset = 0x0194;
    static const uint32_t TDL1R_Offset = 0x0198;
    static const uint32_t TDH1R_Offset = 0x019C;
    static const uint32_t TI2R_Offset = 0x01A0;
    static const uint32_t TDT2R_Offset = 0x01A4;
    static const uint32_t TDL2R_Offset = 0x01A8;
    static const uint32_t TDH2R_Offset = 0x01AC;
    static const uint32_t RI0R_Offset = 0x01B0;
    static const uint32_t RDT0R_Offset = 0x01B4;
    static const uint32_t RDL0R_Offset = 0x01B8;
    static const uint32_t RDH0R_Offset = 0x01BC;
    static const uint32_t RI1R_Offset = 0x01C0;
    static const uint32_t RDT1R_Offset = 0x01C4;
    static const uint32_t RDL1R_Offset = 0x01C8;
    static const uint32_t RDH1R_Offset = 0x01CC;
    static const uint32_t FMR_Offset = 0x0200;
    static const uint32_t FM1R_Offset = 0x0204;
    static const uint32_t FS1R_Offset = 0x020C;
    static const uint32_t FFA1R_Offset = 0x0214;
    static const uint32_t FA1R_Offset = 0x021C;
    static const uint32_t F0R1_Offset = 0x0240;
    static const uint32_t F0R2_Offset = 0x0244;
    static const uint32_t F1R1_Offset = 0x0248;
    static const uint32_t F1R2_Offset = 0x024C;
    static const uint32_t F2R1_Offset = 0x0250;
    static const uint32_t F2R2_Offset = 0x0254;
    static const uint32_t F3R1_Offset = 0x0258;
    static const uint32_t F3R2_Offset = 0x025C;
    static const uint32_t F4R1_Offset = 0x0260;
    static const uint32_t F4R2_Offset = 0x0264;
    static const uint32_t F5R1_Offset = 0x0268;
    static const uint32_t F5R2_Offset = 0x026C;
    static const uint32_t F6R1_Offset = 0x0270;
    static const uint32_t F6R2_Offset = 0x0274;
    static const uint32_t F7R1_Offset = 0x0278;
    static const uint32_t F7R2_Offset = 0x027C;
    static const uint32_t F8R1_Offset = 0x0280;
    static const uint32_t F8R2_Offset = 0x0284;
    static const uint32_t F9R1_Offset = 0x0288;
    static const uint32_t F9R2_Offset = 0x028C;
    static const uint32_t F10R1_Offset = 0x0290;
    static const uint32_t F10R2_Offset = 0x0294;
    static const uint32_t F11R1_Offset = 0x0298;
    static const uint32_t F11R2_Offset = 0x029C;
    static const uint32_t F12R1_Offset = 0x02A0;
    static const uint32_t F12R2_Offset = 0x02A4;
    static const uint32_t F13R1_Offset = 0x02A8;
    static const uint32_t F13R2_Offset = 0x02AC;
    static const uint32_t F14R1_Offset = 0x02B0;
    static const uint32_t F14R2_Offset = 0x02B4;
    static const uint32_t F15R1_Offset = 0x02B8;
    static const uint32_t F15R2_Offset = 0x02BC;
    static const uint32_t F16R1_Offset = 0x02C0;
    static const uint32_t F16R2_Offset = 0x02C4;
    static const uint32_t F17R1_Offset = 0x02C8;
    static const uint32_t F17R2_Offset = 0x02CC;
    static const uint32_t F18R1_Offset = 0x02D0;
    static const uint32_t F18R2_Offset = 0x02D4;
    static const uint32_t F19R1_Offset = 0x02D8;
    static const uint32_t F19R2_Offset = 0x02DC;
    static const uint32_t F20R1_Offset = 0x02E0;
    static const uint32_t F20R2_Offset = 0x02E4;
    static const uint32_t F21R1_Offset = 0x02E8;
    static const uint32_t F21R2_Offset = 0x02EC;
    static const uint32_t F22R1_Offset = 0x02F0;
    static const uint32_t F22R2_Offset = 0x02F4;
    static const uint32_t F23R1_Offset = 0x02F8;
    static const uint32_t F23R2_Offset = 0x02FC;
    static const uint32_t F24R1_Offset = 0x0300;
    static const uint32_t F24R2_Offset = 0x0304;
    static const uint32_t F25R1_Offset = 0x0308;
    static const uint32_t F25R2_Offset = 0x030C;
    static const uint32_t F26R1_Offset = 0x0310;
    static const uint32_t F26R2_Offset = 0x0314;
    static const uint32_t F27R1_Offset = 0x0318;
    static const uint32_t F27R2_Offset = 0x031C;

    CAN() = default;
    CAN( const CAN& ) = delete;
    const CAN& operator=( const CAN& ) = delete;

    class MCR_T : public Register::Register<CAN_MCR::mcr_reg_type, BASE_ADDRESS + MCR_Offset> {
    // CAN_MCR
    public:
        Register::Bit<BASE_ADDRESS + MCR_Offset, 16> DBF; /* DBF */
        Register::Bit<BASE_ADDRESS + MCR_Offset, 15> RESET; /* RESET */
        Register::Bit<BASE_ADDRESS + MCR_Offset, 7> TTCM; /* TTCM */
        Register::Bit<BASE_ADDRESS + MCR_Offset, 6> ABOM; /* ABOM */
        Register::Bit<BASE_ADDRESS + MCR_Offset, 5> AWUM; /* AWUM */
        Register::Bit<BASE_ADDRESS + MCR_Offset, 4> NART; /* NART */
        Register::Bit<BASE_ADDRESS + MCR_Offset, 3> RFLM; /* RFLM */
        Register::Bit<BASE_ADDRESS + MCR_Offset, 2> TXFP; /* TXFP */
        Register::Bit<BASE_ADDRESS + MCR_Offset, 1> SLEEP; /* SLEEP */
        Register::Bit<BASE_ADDRESS + MCR_Offset, 0> INRQ; /* INRQ */
    };

    class MSR_T : public Register::Register<CAN_MSR::msr_reg_type, BASE_ADDRESS + MSR_Offset> {
    // CAN_MSR
    public:
        Register::Bit<BASE_ADDRESS + MSR_Offset, 11> RX; /* RX */
        Register::Bit<BASE_ADDRESS + MSR_Offset, 10> SAMP; /* SAMP */
        Register::Bit<BASE_ADDRESS + MSR_Offset, 9> RXM; /* RXM */
        Register::Bit<BASE_ADDRESS + MSR_Offset, 8> TXM; /* TXM */
        Register::Bit<BASE_ADDRESS + MSR_Offset, 4> SLAKI; /* SLAKI */
        Register::Bit<BASE_ADDRESS + MSR_Offset, 3> WKUI; /* WKUI */
        Register::Bit<BASE_ADDRESS + MSR_Offset, 2> ERRI; /* ERRI */
        Register::Bit<BASE_ADDRESS + MSR_Offset, 1> SLAK; /* SLAK */
        Register::Bit<BASE_ADDRESS + MSR_Offset, 0> INAK; /* INAK */
    };

    class TSR_T : public Register::Register<CAN_TSR::tsr_reg_type, BASE_ADDRESS + TSR_Offset> {
    // CAN_TSR
    public:
        Register::Bit<BASE_ADDRESS + TSR_Offset, 31> LOW2; /* Lowest priority flag for mailbox 2 */
        Register::Bit<BASE_ADDRESS + TSR_Offset, 30> LOW1; /* Lowest priority flag for mailbox 1 */
        Register::Bit<BASE_ADDRESS + TSR_Offset, 29> LOW0; /* Lowest priority flag for mailbox 0 */
        Register::Bit<BASE_ADDRESS + TSR_Offset, 28> TME2; /* Lowest priority flag for mailbox 2 */
        Register::Bit<BASE_ADDRESS + TSR_Offset, 27> TME1; /* Lowest priority flag for mailbox 1 */
        Register::Bit<BASE_ADDRESS + TSR_Offset, 26> TME0; /* Lowest priority flag for mailbox 0 */
        Register::Bitfield<BASE_ADDRESS + TSR_Offset, 24, 2, TSR_CODE_T> CODE; /* CODE */
        Register::Bit<BASE_ADDRESS + TSR_Offset, 23> ABRQ2; /* ABRQ2 */
        Register::Bit<BASE_ADDRESS + TSR_Offset, 19> TERR2; /* TERR2 */
        Register::Bit<BASE_ADDRESS + TSR_Offset, 18> ALST2; /* ALST2 */
        Register::Bit<BASE_ADDRESS + TSR_Offset, 17> TXOK2; /* TXOK2 */
        Register::Bit<BASE_ADDRESS + TSR_Offset, 16> RQCP2; /* RQCP2 */
        Register::Bit<BASE_ADDRESS + TSR_Offset, 15> ABRQ1; /* ABRQ1 */
        Register::Bit<BASE_ADDRESS + TSR_Offset, 11> TERR1; /* TERR1 */
        Register::Bit<BASE_ADDRESS + TSR_Offset, 10> ALST1; /* ALST1 */
        Register::Bit<BASE_ADDRESS + TSR_Offset, 9> TXOK1; /* TXOK1 */
        Register::Bit<BASE_ADDRESS + TSR_Offset, 8> RQCP1; /* RQCP1 */
        Register::Bit<BASE_ADDRESS + TSR_Offset, 7> ABRQ0; /* ABRQ0 */
        Register::Bit<BASE_ADDRESS + TSR_Offset, 3> TERR0; /* TERR0 */
        Register::Bit<BASE_ADDRESS + TSR_Offset, 2> ALST0; /* ALST0 */
        Register::Bit<BASE_ADDRESS + TSR_Offset, 1> TXOK0; /* TXOK0 */
        Register::Bit<BASE_ADDRESS + TSR_Offset, 0> RQCP0; /* RQCP0 */
    };

    class RF0R_T : public Register::Register<CAN_RF0R::rf0r_reg_type, BASE_ADDRESS + RF0R_Offset> {
    // CAN_RF0R
    public:
        Register::Bit<BASE_ADDRESS + RF0R_Offset, 5> RFOM0; /* RFOM0 */
        Register::Bit<BASE_ADDRESS + RF0R_Offset, 4> FOVR0; /* FOVR0 */
        Register::Bit<BASE_ADDRESS + RF0R_Offset, 3> FULL0; /* FULL0 */
        Register::Bitfield<BASE_ADDRESS + RF0R_Offset, 0, 2, RF0R_FMP0_T> FMP0; /* FMP0 */
    };

    class RF1R_T : public Register::Register<CAN_RF1R::rf1r_reg_type, BASE_ADDRESS + RF1R_Offset> {
    // CAN_RF1R
    public:
        Register::Bit<BASE_ADDRESS + RF1R_Offset, 5> RFOM1; /* RFOM1 */
        Register::Bit<BASE_ADDRESS + RF1R_Offset, 4> FOVR1; /* FOVR1 */
        Register::Bit<BASE_ADDRESS + RF1R_Offset, 3> FULL1; /* FULL1 */
        Register::Bitfield<BASE_ADDRESS + RF1R_Offset, 0, 2, RF1R_FMP1_T> FMP1; /* FMP1 */
    };

    class IER_T : public Register::Register<CAN_IER::ier_reg_type, BASE_ADDRESS + IER_Offset> {
    // CAN_IER
    public:
        Register::Bit<BASE_ADDRESS + IER_Offset, 17> SLKIE; /* SLKIE */
        Register::Bit<BASE_ADDRESS + IER_Offset, 16> WKUIE; /* WKUIE */
        Register::Bit<BASE_ADDRESS + IER_Offset, 15> ERRIE; /* ERRIE */
        Register::Bit<BASE_ADDRESS + IER_Offset, 11> LECIE; /* LECIE */
        Register::Bit<BASE_ADDRESS + IER_Offset, 10> BOFIE; /* BOFIE */
        Register::Bit<BASE_ADDRESS + IER_Offset, 9> EPVIE; /* EPVIE */
        Register::Bit<BASE_ADDRESS + IER_Offset, 8> EWGIE; /* EWGIE */
        Register::Bit<BASE_ADDRESS + IER_Offset, 6> FOVIE1; /* FOVIE1 */
        Register::Bit<BASE_ADDRESS + IER_Offset, 5> FFIE1; /* FFIE1 */
        Register::Bit<BASE_ADDRESS + IER_Offset, 4> FMPIE1; /* FMPIE1 */
        Register::Bit<BASE_ADDRESS + IER_Offset, 3> FOVIE0; /* FOVIE0 */
        Register::Bit<BASE_ADDRESS + IER_Offset, 2> FFIE0; /* FFIE0 */
        Register::Bit<BASE_ADDRESS + IER_Offset, 1> FMPIE0; /* FMPIE0 */
        Register::Bit<BASE_ADDRESS + IER_Offset, 0> TMEIE; /* TMEIE */
    };

    class ESR_T : public Register::Register<CAN_ESR::esr_reg_type, BASE_ADDRESS + ESR_Offset> {
    // CAN_ESR
    public:
        Register::Bitfield<BASE_ADDRESS + ESR_Offset, 24, 8, ESR_REC_T> REC; /* REC */
        Register::Bitfield<BASE_ADDRESS + ESR_Offset, 16, 8, ESR_TEC_T> TEC; /* TEC */
        Register::Bitfield<BASE_ADDRESS + ESR_Offset, 4, 3, ESR_LEC_T> LEC; /* LEC */
        Register::Bit<BASE_ADDRESS + ESR_Offset, 2> BOFF; /* BOFF */
        Register::Bit<BASE_ADDRESS + ESR_Offset, 1> EPVF; /* EPVF */
        Register::Bit<BASE_ADDRESS + ESR_Offset, 0> EWGF; /* EWGF */
    };

    class BTR_T : public Register::Register<CAN_BTR::btr_reg_type, BASE_ADDRESS + BTR_Offset> {
    // CAN BTR
    public:
        Register::Bit<BASE_ADDRESS + BTR_Offset, 31> SILM; /* SILM */
        Register::Bit<BASE_ADDRESS + BTR_Offset, 30> LBKM; /* LBKM */
        Register::Bitfield<BASE_ADDRESS + BTR_Offset, 24, 2, BTR_SJW_T> SJW; /* SJW */
        Register::Bitfield<BASE_ADDRESS + BTR_Offset, 20, 3, BTR_TS2_T> TS2; /* TS2 */
        Register::Bitfield<BASE_ADDRESS + BTR_Offset, 16, 4, BTR_TS1_T> TS1; /* TS1 */
        Register::Bitfield<BASE_ADDRESS + BTR_Offset, 0, 10, BTR_BRP_T> BRP; /* BRP */
    };

    class TI0R_T : public Register::Register<CAN_TI0R::ti0r_reg_type, BASE_ADDRESS + TI0R_Offset> {
    // CAN_TI0R
    public:
        Register::Bitfield<BASE_ADDRESS + TI0R_Offset, 21, 11, TI0R_STID_T> STID; /* STID */
        Register::Bitfield<BASE_ADDRESS + TI0R_Offset, 3, 18, TI0R_EXID_T> EXID; /* EXID */
        Register::Bit<BASE_ADDRESS + TI0R_Offset, 2> IDE; /* IDE */
        Register::Bit<BASE_ADDRESS + TI0R_Offset, 1> RTR; /* RTR */
        Register::Bit<BASE_ADDRESS + TI0R_Offset, 0> TXRQ; /* TXRQ */
    };

    class TDT0R_T : public Register::Register<CAN_TDT0R::tdt0r_reg_type, BASE_ADDRESS + TDT0R_Offset> {
    // CAN_TDT0R
    public:
        Register::Bitfield<BASE_ADDRESS + TDT0R_Offset, 16, 16, TDT0R_TIME_T> TIME; /* TIME */
        Register::Bit<BASE_ADDRESS + TDT0R_Offset, 8> TGT; /* TGT */
        Register::Bitfield<BASE_ADDRESS + TDT0R_Offset, 0, 4, TDT0R_DLC_T> DLC; /* DLC */
    };

    class TDL0R_T : public Register::Register<CAN_TDL0R::tdl0r_reg_type, BASE_ADDRESS + TDL0R_Offset> {
    // CAN_TDL0R
    public:
        Register::Bitfield<BASE_ADDRESS + TDL0R_Offset, 24, 8, TDL0R_DATA3_T> DATA3; /* DATA3 */
        Register::Bitfield<BASE_ADDRESS + TDL0R_Offset, 16, 8, TDL0R_DATA2_T> DATA2; /* DATA2 */
        Register::Bitfield<BASE_ADDRESS + TDL0R_Offset, 8, 8, TDL0R_DATA1_T> DATA1; /* DATA1 */
        Register::Bitfield<BASE_ADDRESS + TDL0R_Offset, 0, 8, TDL0R_DATA0_T> DATA0; /* DATA0 */
    };

    class TDH0R_T : public Register::Register<CAN_TDH0R::tdh0r_reg_type, BASE_ADDRESS + TDH0R_Offset> {
    // CAN_TDH0R
    public:
        Register::Bitfield<BASE_ADDRESS + TDH0R_Offset, 24, 8, TDH0R_DATA7_T> DATA7; /* DATA7 */
        Register::Bitfield<BASE_ADDRESS + TDH0R_Offset, 16, 8, TDH0R_DATA6_T> DATA6; /* DATA6 */
        Register::Bitfield<BASE_ADDRESS + TDH0R_Offset, 8, 8, TDH0R_DATA5_T> DATA5; /* DATA5 */
        Register::Bitfield<BASE_ADDRESS + TDH0R_Offset, 0, 8, TDH0R_DATA4_T> DATA4; /* DATA4 */
    };

    class TI1R_T : public Register::Register<CAN_TI1R::ti1r_reg_type, BASE_ADDRESS + TI1R_Offset> {
    // CAN_TI1R
    public:
        Register::Bitfield<BASE_ADDRESS + TI1R_Offset, 21, 11, TI1R_STID_T> STID; /* STID */
        Register::Bitfield<BASE_ADDRESS + TI1R_Offset, 3, 18, TI1R_EXID_T> EXID; /* EXID */
        Register::Bit<BASE_ADDRESS + TI1R_Offset, 2> IDE; /* IDE */
        Register::Bit<BASE_ADDRESS + TI1R_Offset, 1> RTR; /* RTR */
        Register::Bit<BASE_ADDRESS + TI1R_Offset, 0> TXRQ; /* TXRQ */
    };

    class TDT1R_T : public Register::Register<CAN_TDT1R::tdt1r_reg_type, BASE_ADDRESS + TDT1R_Offset> {
    // CAN_TDT1R
    public:
        Register::Bitfield<BASE_ADDRESS + TDT1R_Offset, 16, 16, TDT1R_TIME_T> TIME; /* TIME */
        Register::Bit<BASE_ADDRESS + TDT1R_Offset, 8> TGT; /* TGT */
        Register::Bitfield<BASE_ADDRESS + TDT1R_Offset, 0, 4, TDT1R_DLC_T> DLC; /* DLC */
    };

    class TDL1R_T : public Register::Register<CAN_TDL1R::tdl1r_reg_type, BASE_ADDRESS + TDL1R_Offset> {
    // CAN_TDL1R
    public:
        Register::Bitfield<BASE_ADDRESS + TDL1R_Offset, 24, 8, TDL1R_DATA3_T> DATA3; /* DATA3 */
        Register::Bitfield<BASE_ADDRESS + TDL1R_Offset, 16, 8, TDL1R_DATA2_T> DATA2; /* DATA2 */
        Register::Bitfield<BASE_ADDRESS + TDL1R_Offset, 8, 8, TDL1R_DATA1_T> DATA1; /* DATA1 */
        Register::Bitfield<BASE_ADDRESS + TDL1R_Offset, 0, 8, TDL1R_DATA0_T> DATA0; /* DATA0 */
    };

    class TDH1R_T : public Register::Register<CAN_TDH1R::tdh1r_reg_type, BASE_ADDRESS + TDH1R_Offset> {
    // CAN_TDH1R
    public:
        Register::Bitfield<BASE_ADDRESS + TDH1R_Offset, 24, 8, TDH1R_DATA7_T> DATA7; /* DATA7 */
        Register::Bitfield<BASE_ADDRESS + TDH1R_Offset, 16, 8, TDH1R_DATA6_T> DATA6; /* DATA6 */
        Register::Bitfield<BASE_ADDRESS + TDH1R_Offset, 8, 8, TDH1R_DATA5_T> DATA5; /* DATA5 */
        Register::Bitfield<BASE_ADDRESS + TDH1R_Offset, 0, 8, TDH1R_DATA4_T> DATA4; /* DATA4 */
    };

    class TI2R_T : public Register::Register<CAN_TI2R::ti2r_reg_type, BASE_ADDRESS + TI2R_Offset> {
    // CAN_TI2R
    public:
        Register::Bitfield<BASE_ADDRESS + TI2R_Offset, 21, 11, TI2R_STID_T> STID; /* STID */
        Register::Bitfield<BASE_ADDRESS + TI2R_Offset, 3, 18, TI2R_EXID_T> EXID; /* EXID */
        Register::Bit<BASE_ADDRESS + TI2R_Offset, 2> IDE; /* IDE */
        Register::Bit<BASE_ADDRESS + TI2R_Offset, 1> RTR; /* RTR */
        Register::Bit<BASE_ADDRESS + TI2R_Offset, 0> TXRQ; /* TXRQ */
    };

    class TDT2R_T : public Register::Register<CAN_TDT2R::tdt2r_reg_type, BASE_ADDRESS + TDT2R_Offset> {
    // CAN_TDT2R
    public:
        Register::Bitfield<BASE_ADDRESS + TDT2R_Offset, 16, 16, TDT2R_TIME_T> TIME; /* TIME */
        Register::Bit<BASE_ADDRESS + TDT2R_Offset, 8> TGT; /* TGT */
        Register::Bitfield<BASE_ADDRESS + TDT2R_Offset, 0, 4, TDT2R_DLC_T> DLC; /* DLC */
    };

    class TDL2R_T : public Register::Register<CAN_TDL2R::tdl2r_reg_type, BASE_ADDRESS + TDL2R_Offset> {
    // CAN_TDL2R
    public:
        Register::Bitfield<BASE_ADDRESS + TDL2R_Offset, 24, 8, TDL2R_DATA3_T> DATA3; /* DATA3 */
        Register::Bitfield<BASE_ADDRESS + TDL2R_Offset, 16, 8, TDL2R_DATA2_T> DATA2; /* DATA2 */
        Register::Bitfield<BASE_ADDRESS + TDL2R_Offset, 8, 8, TDL2R_DATA1_T> DATA1; /* DATA1 */
        Register::Bitfield<BASE_ADDRESS + TDL2R_Offset, 0, 8, TDL2R_DATA0_T> DATA0; /* DATA0 */
    };

    class TDH2R_T : public Register::Register<CAN_TDH2R::tdh2r_reg_type, BASE_ADDRESS + TDH2R_Offset> {
    // CAN_TDH2R
    public:
        Register::Bitfield<BASE_ADDRESS + TDH2R_Offset, 24, 8, TDH2R_DATA7_T> DATA7; /* DATA7 */
        Register::Bitfield<BASE_ADDRESS + TDH2R_Offset, 16, 8, TDH2R_DATA6_T> DATA6; /* DATA6 */
        Register::Bitfield<BASE_ADDRESS + TDH2R_Offset, 8, 8, TDH2R_DATA5_T> DATA5; /* DATA5 */
        Register::Bitfield<BASE_ADDRESS + TDH2R_Offset, 0, 8, TDH2R_DATA4_T> DATA4; /* DATA4 */
    };

    class RI0R_T : public Register::Register<CAN_RI0R::ri0r_reg_type, BASE_ADDRESS + RI0R_Offset> {
    // CAN_RI0R
    public:
        Register::Bitfield<BASE_ADDRESS + RI0R_Offset, 21, 11, RI0R_STID_T> STID; /* STID */
        Register::Bitfield<BASE_ADDRESS + RI0R_Offset, 3, 18, RI0R_EXID_T> EXID; /* EXID */
        Register::Bit<BASE_ADDRESS + RI0R_Offset, 2> IDE; /* IDE */
        Register::Bit<BASE_ADDRESS + RI0R_Offset, 1> RTR; /* RTR */
    };

    class RDT0R_T : public Register::Register<CAN_RDT0R::rdt0r_reg_type, BASE_ADDRESS + RDT0R_Offset> {
    // CAN_RDT0R
    public:
        Register::Bitfield<BASE_ADDRESS + RDT0R_Offset, 16, 16, RDT0R_TIME_T> TIME; /* TIME */
        Register::Bitfield<BASE_ADDRESS + RDT0R_Offset, 8, 8, RDT0R_FMI_T> FMI; /* FMI */
        Register::Bitfield<BASE_ADDRESS + RDT0R_Offset, 0, 4, RDT0R_DLC_T> DLC; /* DLC */
    };

    class RDL0R_T : public Register::Register<CAN_RDL0R::rdl0r_reg_type, BASE_ADDRESS + RDL0R_Offset> {
    // CAN_RDL0R
    public:
        Register::Bitfield<BASE_ADDRESS + RDL0R_Offset, 24, 8, RDL0R_DATA3_T> DATA3; /* DATA3 */
        Register::Bitfield<BASE_ADDRESS + RDL0R_Offset, 16, 8, RDL0R_DATA2_T> DATA2; /* DATA2 */
        Register::Bitfield<BASE_ADDRESS + RDL0R_Offset, 8, 8, RDL0R_DATA1_T> DATA1; /* DATA1 */
        Register::Bitfield<BASE_ADDRESS + RDL0R_Offset, 0, 8, RDL0R_DATA0_T> DATA0; /* DATA0 */
    };

    class RDH0R_T : public Register::Register<CAN_RDH0R::rdh0r_reg_type, BASE_ADDRESS + RDH0R_Offset> {
    // CAN_RDH0R
    public:
        Register::Bitfield<BASE_ADDRESS + RDH0R_Offset, 24, 8, RDH0R_DATA7_T> DATA7; /* DATA7 */
        Register::Bitfield<BASE_ADDRESS + RDH0R_Offset, 16, 8, RDH0R_DATA6_T> DATA6; /* DATA6 */
        Register::Bitfield<BASE_ADDRESS + RDH0R_Offset, 8, 8, RDH0R_DATA5_T> DATA5; /* DATA5 */
        Register::Bitfield<BASE_ADDRESS + RDH0R_Offset, 0, 8, RDH0R_DATA4_T> DATA4; /* DATA4 */
    };

    class RI1R_T : public Register::Register<CAN_RI1R::ri1r_reg_type, BASE_ADDRESS + RI1R_Offset> {
    // CAN_RI1R
    public:
        Register::Bitfield<BASE_ADDRESS + RI1R_Offset, 21, 11, RI1R_STID_T> STID; /* STID */
        Register::Bitfield<BASE_ADDRESS + RI1R_Offset, 3, 18, RI1R_EXID_T> EXID; /* EXID */
        Register::Bit<BASE_ADDRESS + RI1R_Offset, 2> IDE; /* IDE */
        Register::Bit<BASE_ADDRESS + RI1R_Offset, 1> RTR; /* RTR */
    };

    class RDT1R_T : public Register::Register<CAN_RDT1R::rdt1r_reg_type, BASE_ADDRESS + RDT1R_Offset> {
    // CAN_RDT1R
    public:
        Register::Bitfield<BASE_ADDRESS + RDT1R_Offset, 16, 16, RDT1R_TIME_T> TIME; /* TIME */
        Register::Bitfield<BASE_ADDRESS + RDT1R_Offset, 8, 8, RDT1R_FMI_T> FMI; /* FMI */
        Register::Bitfield<BASE_ADDRESS + RDT1R_Offset, 0, 4, RDT1R_DLC_T> DLC; /* DLC */
    };

    class RDL1R_T : public Register::Register<CAN_RDL1R::rdl1r_reg_type, BASE_ADDRESS + RDL1R_Offset> {
    // CAN_RDL1R
    public:
        Register::Bitfield<BASE_ADDRESS + RDL1R_Offset, 24, 8, RDL1R_DATA3_T> DATA3; /* DATA3 */
        Register::Bitfield<BASE_ADDRESS + RDL1R_Offset, 16, 8, RDL1R_DATA2_T> DATA2; /* DATA2 */
        Register::Bitfield<BASE_ADDRESS + RDL1R_Offset, 8, 8, RDL1R_DATA1_T> DATA1; /* DATA1 */
        Register::Bitfield<BASE_ADDRESS + RDL1R_Offset, 0, 8, RDL1R_DATA0_T> DATA0; /* DATA0 */
    };

    class RDH1R_T : public Register::Register<CAN_RDH1R::rdh1r_reg_type, BASE_ADDRESS + RDH1R_Offset> {
    // CAN_RDH1R
    public:
        Register::Bitfield<BASE_ADDRESS + RDH1R_Offset, 24, 8, RDH1R_DATA7_T> DATA7; /* DATA7 */
        Register::Bitfield<BASE_ADDRESS + RDH1R_Offset, 16, 8, RDH1R_DATA6_T> DATA6; /* DATA6 */
        Register::Bitfield<BASE_ADDRESS + RDH1R_Offset, 8, 8, RDH1R_DATA5_T> DATA5; /* DATA5 */
        Register::Bitfield<BASE_ADDRESS + RDH1R_Offset, 0, 8, RDH1R_DATA4_T> DATA4; /* DATA4 */
    };

    class FMR_T : public Register::Register<CAN_FMR::fmr_reg_type, BASE_ADDRESS + FMR_Offset> {
    // CAN_FMR
    public:
        Register::Bitfield<BASE_ADDRESS + FMR_Offset, 8, 6, FMR_CAN2SB_T> CAN2SB; /* CAN2SB */
        Register::Bit<BASE_ADDRESS + FMR_Offset, 0> FINIT; /* FINIT */
    };

    class FM1R_T : public Register::Register<CAN_FM1R::fm1r_reg_type, BASE_ADDRESS + FM1R_Offset> {
    // CAN_FM1R
    public:
        Register::Bit<BASE_ADDRESS + FM1R_Offset, 0> FBM0; /* Filter mode */
        Register::Bit<BASE_ADDRESS + FM1R_Offset, 1> FBM1; /* Filter mode */
        Register::Bit<BASE_ADDRESS + FM1R_Offset, 2> FBM2; /* Filter mode */
        Register::Bit<BASE_ADDRESS + FM1R_Offset, 3> FBM3; /* Filter mode */
        Register::Bit<BASE_ADDRESS + FM1R_Offset, 4> FBM4; /* Filter mode */
        Register::Bit<BASE_ADDRESS + FM1R_Offset, 5> FBM5; /* Filter mode */
        Register::Bit<BASE_ADDRESS + FM1R_Offset, 6> FBM6; /* Filter mode */
        Register::Bit<BASE_ADDRESS + FM1R_Offset, 7> FBM7; /* Filter mode */
        Register::Bit<BASE_ADDRESS + FM1R_Offset, 8> FBM8; /* Filter mode */
        Register::Bit<BASE_ADDRESS + FM1R_Offset, 9> FBM9; /* Filter mode */
        Register::Bit<BASE_ADDRESS + FM1R_Offset, 10> FBM10; /* Filter mode */
        Register::Bit<BASE_ADDRESS + FM1R_Offset, 11> FBM11; /* Filter mode */
        Register::Bit<BASE_ADDRESS + FM1R_Offset, 12> FBM12; /* Filter mode */
        Register::Bit<BASE_ADDRESS + FM1R_Offset, 13> FBM13; /* Filter mode */
        Register::Bit<BASE_ADDRESS + FM1R_Offset, 14> FBM14; /* Filter mode */
        Register::Bit<BASE_ADDRESS + FM1R_Offset, 15> FBM15; /* Filter mode */
        Register::Bit<BASE_ADDRESS + FM1R_Offset, 16> FBM16; /* Filter mode */
        Register::Bit<BASE_ADDRESS + FM1R_Offset, 17> FBM17; /* Filter mode */
        Register::Bit<BASE_ADDRESS + FM1R_Offset, 18> FBM18; /* Filter mode */
        Register::Bit<BASE_ADDRESS + FM1R_Offset, 19> FBM19; /* Filter mode */
        Register::Bit<BASE_ADDRESS + FM1R_Offset, 20> FBM20; /* Filter mode */
        Register::Bit<BASE_ADDRESS + FM1R_Offset, 21> FBM21; /* Filter mode */
        Register::Bit<BASE_ADDRESS + FM1R_Offset, 22> FBM22; /* Filter mode */
        Register::Bit<BASE_ADDRESS + FM1R_Offset, 23> FBM23; /* Filter mode */
        Register::Bit<BASE_ADDRESS + FM1R_Offset, 24> FBM24; /* Filter mode */
        Register::Bit<BASE_ADDRESS + FM1R_Offset, 25> FBM25; /* Filter mode */
        Register::Bit<BASE_ADDRESS + FM1R_Offset, 26> FBM26; /* Filter mode */
        Register::Bit<BASE_ADDRESS + FM1R_Offset, 27> FBM27; /* Filter mode */
    };

    class FS1R_T : public Register::Register<CAN_FS1R::fs1r_reg_type, BASE_ADDRESS + FS1R_Offset> {
    // CAN_FS1R
    public:
        Register::Bit<BASE_ADDRESS + FS1R_Offset, 0> FSC0; /* Filter scale configuration */
        Register::Bit<BASE_ADDRESS + FS1R_Offset, 1> FSC1; /* Filter scale configuration */
        Register::Bit<BASE_ADDRESS + FS1R_Offset, 2> FSC2; /* Filter scale configuration */
        Register::Bit<BASE_ADDRESS + FS1R_Offset, 3> FSC3; /* Filter scale configuration */
        Register::Bit<BASE_ADDRESS + FS1R_Offset, 4> FSC4; /* Filter scale configuration */
        Register::Bit<BASE_ADDRESS + FS1R_Offset, 5> FSC5; /* Filter scale configuration */
        Register::Bit<BASE_ADDRESS + FS1R_Offset, 6> FSC6; /* Filter scale configuration */
        Register::Bit<BASE_ADDRESS + FS1R_Offset, 7> FSC7; /* Filter scale configuration */
        Register::Bit<BASE_ADDRESS + FS1R_Offset, 8> FSC8; /* Filter scale configuration */
        Register::Bit<BASE_ADDRESS + FS1R_Offset, 9> FSC9; /* Filter scale configuration */
        Register::Bit<BASE_ADDRESS + FS1R_Offset, 10> FSC10; /* Filter scale configuration */
        Register::Bit<BASE_ADDRESS + FS1R_Offset, 11> FSC11; /* Filter scale configuration */
        Register::Bit<BASE_ADDRESS + FS1R_Offset, 12> FSC12; /* Filter scale configuration */
        Register::Bit<BASE_ADDRESS + FS1R_Offset, 13> FSC13; /* Filter scale configuration */
        Register::Bit<BASE_ADDRESS + FS1R_Offset, 14> FSC14; /* Filter scale configuration */
        Register::Bit<BASE_ADDRESS + FS1R_Offset, 15> FSC15; /* Filter scale configuration */
        Register::Bit<BASE_ADDRESS + FS1R_Offset, 16> FSC16; /* Filter scale configuration */
        Register::Bit<BASE_ADDRESS + FS1R_Offset, 17> FSC17; /* Filter scale configuration */
        Register::Bit<BASE_ADDRESS + FS1R_Offset, 18> FSC18; /* Filter scale configuration */
        Register::Bit<BASE_ADDRESS + FS1R_Offset, 19> FSC19; /* Filter scale configuration */
        Register::Bit<BASE_ADDRESS + FS1R_Offset, 20> FSC20; /* Filter scale configuration */
        Register::Bit<BASE_ADDRESS + FS1R_Offset, 21> FSC21; /* Filter scale configuration */
        Register::Bit<BASE_ADDRESS + FS1R_Offset, 22> FSC22; /* Filter scale configuration */
        Register::Bit<BASE_ADDRESS + FS1R_Offset, 23> FSC23; /* Filter scale configuration */
        Register::Bit<BASE_ADDRESS + FS1R_Offset, 24> FSC24; /* Filter scale configuration */
        Register::Bit<BASE_ADDRESS + FS1R_Offset, 25> FSC25; /* Filter scale configuration */
        Register::Bit<BASE_ADDRESS + FS1R_Offset, 26> FSC26; /* Filter scale configuration */
        Register::Bit<BASE_ADDRESS + FS1R_Offset, 27> FSC27; /* Filter scale configuration */
    };

    class FFA1R_T : public Register::Register<CAN_FFA1R::ffa1r_reg_type, BASE_ADDRESS + FFA1R_Offset> {
    // CAN_FFA1R
    public:
        Register::Bit<BASE_ADDRESS + FFA1R_Offset, 0> FFA0; /* Filter FIFO assignment for filter 0 */
        Register::Bit<BASE_ADDRESS + FFA1R_Offset, 1> FFA1; /* Filter FIFO assignment for filter 1 */
        Register::Bit<BASE_ADDRESS + FFA1R_Offset, 2> FFA2; /* Filter FIFO assignment for filter 2 */
        Register::Bit<BASE_ADDRESS + FFA1R_Offset, 3> FFA3; /* Filter FIFO assignment for filter 3 */
        Register::Bit<BASE_ADDRESS + FFA1R_Offset, 4> FFA4; /* Filter FIFO assignment for filter 4 */
        Register::Bit<BASE_ADDRESS + FFA1R_Offset, 5> FFA5; /* Filter FIFO assignment for filter 5 */
        Register::Bit<BASE_ADDRESS + FFA1R_Offset, 6> FFA6; /* Filter FIFO assignment for filter 6 */
        Register::Bit<BASE_ADDRESS + FFA1R_Offset, 7> FFA7; /* Filter FIFO assignment for filter 7 */
        Register::Bit<BASE_ADDRESS + FFA1R_Offset, 8> FFA8; /* Filter FIFO assignment for filter 8 */
        Register::Bit<BASE_ADDRESS + FFA1R_Offset, 9> FFA9; /* Filter FIFO assignment for filter 9 */
        Register::Bit<BASE_ADDRESS + FFA1R_Offset, 10> FFA10; /* Filter FIFO assignment for filter 10 */
        Register::Bit<BASE_ADDRESS + FFA1R_Offset, 11> FFA11; /* Filter FIFO assignment for filter 11 */
        Register::Bit<BASE_ADDRESS + FFA1R_Offset, 12> FFA12; /* Filter FIFO assignment for filter 12 */
        Register::Bit<BASE_ADDRESS + FFA1R_Offset, 13> FFA13; /* Filter FIFO assignment for filter 13 */
        Register::Bit<BASE_ADDRESS + FFA1R_Offset, 14> FFA14; /* Filter FIFO assignment for filter 14 */
        Register::Bit<BASE_ADDRESS + FFA1R_Offset, 15> FFA15; /* Filter FIFO assignment for filter 15 */
        Register::Bit<BASE_ADDRESS + FFA1R_Offset, 16> FFA16; /* Filter FIFO assignment for filter 16 */
        Register::Bit<BASE_ADDRESS + FFA1R_Offset, 17> FFA17; /* Filter FIFO assignment for filter 17 */
        Register::Bit<BASE_ADDRESS + FFA1R_Offset, 18> FFA18; /* Filter FIFO assignment for filter 18 */
        Register::Bit<BASE_ADDRESS + FFA1R_Offset, 19> FFA19; /* Filter FIFO assignment for filter 19 */
        Register::Bit<BASE_ADDRESS + FFA1R_Offset, 20> FFA20; /* Filter FIFO assignment for filter 20 */
        Register::Bit<BASE_ADDRESS + FFA1R_Offset, 21> FFA21; /* Filter FIFO assignment for filter 21 */
        Register::Bit<BASE_ADDRESS + FFA1R_Offset, 22> FFA22; /* Filter FIFO assignment for filter 22 */
        Register::Bit<BASE_ADDRESS + FFA1R_Offset, 23> FFA23; /* Filter FIFO assignment for filter 23 */
        Register::Bit<BASE_ADDRESS + FFA1R_Offset, 24> FFA24; /* Filter FIFO assignment for filter 24 */
        Register::Bit<BASE_ADDRESS + FFA1R_Offset, 25> FFA25; /* Filter FIFO assignment for filter 25 */
        Register::Bit<BASE_ADDRESS + FFA1R_Offset, 26> FFA26; /* Filter FIFO assignment for filter 26 */
        Register::Bit<BASE_ADDRESS + FFA1R_Offset, 27> FFA27; /* Filter FIFO assignment for filter 27 */
    };

    class FA1R_T : public Register::Register<CAN_FA1R::fa1r_reg_type, BASE_ADDRESS + FA1R_Offset> {
    // CAN_FA1R
    public:
        Register::Bit<BASE_ADDRESS + FA1R_Offset, 0> FACT0; /* Filter active */
        Register::Bit<BASE_ADDRESS + FA1R_Offset, 1> FACT1; /* Filter active */
        Register::Bit<BASE_ADDRESS + FA1R_Offset, 2> FACT2; /* Filter active */
        Register::Bit<BASE_ADDRESS + FA1R_Offset, 3> FACT3; /* Filter active */
        Register::Bit<BASE_ADDRESS + FA1R_Offset, 4> FACT4; /* Filter active */
        Register::Bit<BASE_ADDRESS + FA1R_Offset, 5> FACT5; /* Filter active */
        Register::Bit<BASE_ADDRESS + FA1R_Offset, 6> FACT6; /* Filter active */
        Register::Bit<BASE_ADDRESS + FA1R_Offset, 7> FACT7; /* Filter active */
        Register::Bit<BASE_ADDRESS + FA1R_Offset, 8> FACT8; /* Filter active */
        Register::Bit<BASE_ADDRESS + FA1R_Offset, 9> FACT9; /* Filter active */
        Register::Bit<BASE_ADDRESS + FA1R_Offset, 10> FACT10; /* Filter active */
        Register::Bit<BASE_ADDRESS + FA1R_Offset, 11> FACT11; /* Filter active */
        Register::Bit<BASE_ADDRESS + FA1R_Offset, 12> FACT12; /* Filter active */
        Register::Bit<BASE_ADDRESS + FA1R_Offset, 13> FACT13; /* Filter active */
        Register::Bit<BASE_ADDRESS + FA1R_Offset, 14> FACT14; /* Filter active */
        Register::Bit<BASE_ADDRESS + FA1R_Offset, 15> FACT15; /* Filter active */
        Register::Bit<BASE_ADDRESS + FA1R_Offset, 16> FACT16; /* Filter active */
        Register::Bit<BASE_ADDRESS + FA1R_Offset, 17> FACT17; /* Filter active */
        Register::Bit<BASE_ADDRESS + FA1R_Offset, 18> FACT18; /* Filter active */
        Register::Bit<BASE_ADDRESS + FA1R_Offset, 19> FACT19; /* Filter active */
        Register::Bit<BASE_ADDRESS + FA1R_Offset, 20> FACT20; /* Filter active */
        Register::Bit<BASE_ADDRESS + FA1R_Offset, 21> FACT21; /* Filter active */
        Register::Bit<BASE_ADDRESS + FA1R_Offset, 22> FACT22; /* Filter active */
        Register::Bit<BASE_ADDRESS + FA1R_Offset, 23> FACT23; /* Filter active */
        Register::Bit<BASE_ADDRESS + FA1R_Offset, 24> FACT24; /* Filter active */
        Register::Bit<BASE_ADDRESS + FA1R_Offset, 25> FACT25; /* Filter active */
        Register::Bit<BASE_ADDRESS + FA1R_Offset, 26> FACT26; /* Filter active */
        Register::Bit<BASE_ADDRESS + FA1R_Offset, 27> FACT27; /* Filter active */
    };

    class F0R1_T : public Register::Register<CAN_F0R1::f0r1_reg_type, BASE_ADDRESS + F0R1_Offset> {
    // Filter bank 0 register 1
    public:
        Register::Bit<BASE_ADDRESS + F0R1_Offset, 0> FB0; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F0R1_Offset, 1> FB1; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F0R1_Offset, 2> FB2; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F0R1_Offset, 3> FB3; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F0R1_Offset, 4> FB4; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F0R1_Offset, 5> FB5; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F0R1_Offset, 6> FB6; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F0R1_Offset, 7> FB7; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F0R1_Offset, 8> FB8; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F0R1_Offset, 9> FB9; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F0R1_Offset, 10> FB10; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F0R1_Offset, 11> FB11; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F0R1_Offset, 12> FB12; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F0R1_Offset, 13> FB13; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F0R1_Offset, 14> FB14; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F0R1_Offset, 15> FB15; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F0R1_Offset, 16> FB16; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F0R1_Offset, 17> FB17; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F0R1_Offset, 18> FB18; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F0R1_Offset, 19> FB19; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F0R1_Offset, 20> FB20; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F0R1_Offset, 21> FB21; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F0R1_Offset, 22> FB22; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F0R1_Offset, 23> FB23; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F0R1_Offset, 24> FB24; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F0R1_Offset, 25> FB25; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F0R1_Offset, 26> FB26; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F0R1_Offset, 27> FB27; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F0R1_Offset, 28> FB28; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F0R1_Offset, 29> FB29; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F0R1_Offset, 30> FB30; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F0R1_Offset, 31> FB31; /* Filter bits */
    };

    class F0R2_T : public Register::Register<CAN_F0R2::f0r2_reg_type, BASE_ADDRESS + F0R2_Offset> {
    // Filter bank 0 register 2
    public:
        Register::Bit<BASE_ADDRESS + F0R2_Offset, 0> FB0; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F0R2_Offset, 1> FB1; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F0R2_Offset, 2> FB2; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F0R2_Offset, 3> FB3; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F0R2_Offset, 4> FB4; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F0R2_Offset, 5> FB5; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F0R2_Offset, 6> FB6; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F0R2_Offset, 7> FB7; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F0R2_Offset, 8> FB8; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F0R2_Offset, 9> FB9; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F0R2_Offset, 10> FB10; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F0R2_Offset, 11> FB11; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F0R2_Offset, 12> FB12; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F0R2_Offset, 13> FB13; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F0R2_Offset, 14> FB14; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F0R2_Offset, 15> FB15; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F0R2_Offset, 16> FB16; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F0R2_Offset, 17> FB17; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F0R2_Offset, 18> FB18; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F0R2_Offset, 19> FB19; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F0R2_Offset, 20> FB20; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F0R2_Offset, 21> FB21; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F0R2_Offset, 22> FB22; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F0R2_Offset, 23> FB23; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F0R2_Offset, 24> FB24; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F0R2_Offset, 25> FB25; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F0R2_Offset, 26> FB26; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F0R2_Offset, 27> FB27; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F0R2_Offset, 28> FB28; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F0R2_Offset, 29> FB29; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F0R2_Offset, 30> FB30; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F0R2_Offset, 31> FB31; /* Filter bits */
    };

    class F1R1_T : public Register::Register<CAN_F1R1::f1r1_reg_type, BASE_ADDRESS + F1R1_Offset> {
    // Filter bank 1 register 1
    public:
        Register::Bit<BASE_ADDRESS + F1R1_Offset, 0> FB0; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F1R1_Offset, 1> FB1; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F1R1_Offset, 2> FB2; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F1R1_Offset, 3> FB3; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F1R1_Offset, 4> FB4; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F1R1_Offset, 5> FB5; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F1R1_Offset, 6> FB6; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F1R1_Offset, 7> FB7; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F1R1_Offset, 8> FB8; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F1R1_Offset, 9> FB9; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F1R1_Offset, 10> FB10; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F1R1_Offset, 11> FB11; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F1R1_Offset, 12> FB12; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F1R1_Offset, 13> FB13; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F1R1_Offset, 14> FB14; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F1R1_Offset, 15> FB15; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F1R1_Offset, 16> FB16; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F1R1_Offset, 17> FB17; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F1R1_Offset, 18> FB18; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F1R1_Offset, 19> FB19; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F1R1_Offset, 20> FB20; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F1R1_Offset, 21> FB21; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F1R1_Offset, 22> FB22; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F1R1_Offset, 23> FB23; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F1R1_Offset, 24> FB24; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F1R1_Offset, 25> FB25; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F1R1_Offset, 26> FB26; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F1R1_Offset, 27> FB27; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F1R1_Offset, 28> FB28; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F1R1_Offset, 29> FB29; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F1R1_Offset, 30> FB30; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F1R1_Offset, 31> FB31; /* Filter bits */
    };

    class F1R2_T : public Register::Register<CAN_F1R2::f1r2_reg_type, BASE_ADDRESS + F1R2_Offset> {
    // Filter bank 1 register 2
    public:
        Register::Bit<BASE_ADDRESS + F1R2_Offset, 0> FB0; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F1R2_Offset, 1> FB1; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F1R2_Offset, 2> FB2; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F1R2_Offset, 3> FB3; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F1R2_Offset, 4> FB4; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F1R2_Offset, 5> FB5; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F1R2_Offset, 6> FB6; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F1R2_Offset, 7> FB7; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F1R2_Offset, 8> FB8; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F1R2_Offset, 9> FB9; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F1R2_Offset, 10> FB10; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F1R2_Offset, 11> FB11; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F1R2_Offset, 12> FB12; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F1R2_Offset, 13> FB13; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F1R2_Offset, 14> FB14; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F1R2_Offset, 15> FB15; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F1R2_Offset, 16> FB16; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F1R2_Offset, 17> FB17; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F1R2_Offset, 18> FB18; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F1R2_Offset, 19> FB19; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F1R2_Offset, 20> FB20; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F1R2_Offset, 21> FB21; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F1R2_Offset, 22> FB22; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F1R2_Offset, 23> FB23; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F1R2_Offset, 24> FB24; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F1R2_Offset, 25> FB25; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F1R2_Offset, 26> FB26; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F1R2_Offset, 27> FB27; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F1R2_Offset, 28> FB28; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F1R2_Offset, 29> FB29; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F1R2_Offset, 30> FB30; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F1R2_Offset, 31> FB31; /* Filter bits */
    };

    class F2R1_T : public Register::Register<CAN_F2R1::f2r1_reg_type, BASE_ADDRESS + F2R1_Offset> {
    // Filter bank 2 register 1
    public:
        Register::Bit<BASE_ADDRESS + F2R1_Offset, 0> FB0; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F2R1_Offset, 1> FB1; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F2R1_Offset, 2> FB2; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F2R1_Offset, 3> FB3; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F2R1_Offset, 4> FB4; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F2R1_Offset, 5> FB5; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F2R1_Offset, 6> FB6; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F2R1_Offset, 7> FB7; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F2R1_Offset, 8> FB8; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F2R1_Offset, 9> FB9; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F2R1_Offset, 10> FB10; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F2R1_Offset, 11> FB11; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F2R1_Offset, 12> FB12; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F2R1_Offset, 13> FB13; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F2R1_Offset, 14> FB14; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F2R1_Offset, 15> FB15; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F2R1_Offset, 16> FB16; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F2R1_Offset, 17> FB17; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F2R1_Offset, 18> FB18; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F2R1_Offset, 19> FB19; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F2R1_Offset, 20> FB20; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F2R1_Offset, 21> FB21; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F2R1_Offset, 22> FB22; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F2R1_Offset, 23> FB23; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F2R1_Offset, 24> FB24; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F2R1_Offset, 25> FB25; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F2R1_Offset, 26> FB26; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F2R1_Offset, 27> FB27; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F2R1_Offset, 28> FB28; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F2R1_Offset, 29> FB29; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F2R1_Offset, 30> FB30; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F2R1_Offset, 31> FB31; /* Filter bits */
    };

    class F2R2_T : public Register::Register<CAN_F2R2::f2r2_reg_type, BASE_ADDRESS + F2R2_Offset> {
    // Filter bank 2 register 2
    public:
        Register::Bit<BASE_ADDRESS + F2R2_Offset, 0> FB0; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F2R2_Offset, 1> FB1; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F2R2_Offset, 2> FB2; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F2R2_Offset, 3> FB3; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F2R2_Offset, 4> FB4; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F2R2_Offset, 5> FB5; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F2R2_Offset, 6> FB6; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F2R2_Offset, 7> FB7; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F2R2_Offset, 8> FB8; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F2R2_Offset, 9> FB9; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F2R2_Offset, 10> FB10; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F2R2_Offset, 11> FB11; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F2R2_Offset, 12> FB12; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F2R2_Offset, 13> FB13; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F2R2_Offset, 14> FB14; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F2R2_Offset, 15> FB15; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F2R2_Offset, 16> FB16; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F2R2_Offset, 17> FB17; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F2R2_Offset, 18> FB18; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F2R2_Offset, 19> FB19; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F2R2_Offset, 20> FB20; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F2R2_Offset, 21> FB21; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F2R2_Offset, 22> FB22; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F2R2_Offset, 23> FB23; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F2R2_Offset, 24> FB24; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F2R2_Offset, 25> FB25; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F2R2_Offset, 26> FB26; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F2R2_Offset, 27> FB27; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F2R2_Offset, 28> FB28; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F2R2_Offset, 29> FB29; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F2R2_Offset, 30> FB30; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F2R2_Offset, 31> FB31; /* Filter bits */
    };

    class F3R1_T : public Register::Register<CAN_F3R1::f3r1_reg_type, BASE_ADDRESS + F3R1_Offset> {
    // Filter bank 3 register 1
    public:
        Register::Bit<BASE_ADDRESS + F3R1_Offset, 0> FB0; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F3R1_Offset, 1> FB1; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F3R1_Offset, 2> FB2; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F3R1_Offset, 3> FB3; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F3R1_Offset, 4> FB4; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F3R1_Offset, 5> FB5; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F3R1_Offset, 6> FB6; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F3R1_Offset, 7> FB7; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F3R1_Offset, 8> FB8; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F3R1_Offset, 9> FB9; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F3R1_Offset, 10> FB10; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F3R1_Offset, 11> FB11; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F3R1_Offset, 12> FB12; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F3R1_Offset, 13> FB13; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F3R1_Offset, 14> FB14; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F3R1_Offset, 15> FB15; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F3R1_Offset, 16> FB16; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F3R1_Offset, 17> FB17; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F3R1_Offset, 18> FB18; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F3R1_Offset, 19> FB19; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F3R1_Offset, 20> FB20; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F3R1_Offset, 21> FB21; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F3R1_Offset, 22> FB22; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F3R1_Offset, 23> FB23; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F3R1_Offset, 24> FB24; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F3R1_Offset, 25> FB25; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F3R1_Offset, 26> FB26; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F3R1_Offset, 27> FB27; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F3R1_Offset, 28> FB28; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F3R1_Offset, 29> FB29; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F3R1_Offset, 30> FB30; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F3R1_Offset, 31> FB31; /* Filter bits */
    };

    class F3R2_T : public Register::Register<CAN_F3R2::f3r2_reg_type, BASE_ADDRESS + F3R2_Offset> {
    // Filter bank 3 register 2
    public:
        Register::Bit<BASE_ADDRESS + F3R2_Offset, 0> FB0; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F3R2_Offset, 1> FB1; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F3R2_Offset, 2> FB2; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F3R2_Offset, 3> FB3; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F3R2_Offset, 4> FB4; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F3R2_Offset, 5> FB5; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F3R2_Offset, 6> FB6; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F3R2_Offset, 7> FB7; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F3R2_Offset, 8> FB8; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F3R2_Offset, 9> FB9; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F3R2_Offset, 10> FB10; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F3R2_Offset, 11> FB11; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F3R2_Offset, 12> FB12; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F3R2_Offset, 13> FB13; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F3R2_Offset, 14> FB14; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F3R2_Offset, 15> FB15; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F3R2_Offset, 16> FB16; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F3R2_Offset, 17> FB17; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F3R2_Offset, 18> FB18; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F3R2_Offset, 19> FB19; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F3R2_Offset, 20> FB20; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F3R2_Offset, 21> FB21; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F3R2_Offset, 22> FB22; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F3R2_Offset, 23> FB23; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F3R2_Offset, 24> FB24; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F3R2_Offset, 25> FB25; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F3R2_Offset, 26> FB26; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F3R2_Offset, 27> FB27; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F3R2_Offset, 28> FB28; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F3R2_Offset, 29> FB29; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F3R2_Offset, 30> FB30; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F3R2_Offset, 31> FB31; /* Filter bits */
    };

    class F4R1_T : public Register::Register<CAN_F4R1::f4r1_reg_type, BASE_ADDRESS + F4R1_Offset> {
    // Filter bank 4 register 1
    public:
        Register::Bit<BASE_ADDRESS + F4R1_Offset, 0> FB0; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F4R1_Offset, 1> FB1; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F4R1_Offset, 2> FB2; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F4R1_Offset, 3> FB3; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F4R1_Offset, 4> FB4; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F4R1_Offset, 5> FB5; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F4R1_Offset, 6> FB6; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F4R1_Offset, 7> FB7; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F4R1_Offset, 8> FB8; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F4R1_Offset, 9> FB9; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F4R1_Offset, 10> FB10; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F4R1_Offset, 11> FB11; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F4R1_Offset, 12> FB12; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F4R1_Offset, 13> FB13; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F4R1_Offset, 14> FB14; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F4R1_Offset, 15> FB15; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F4R1_Offset, 16> FB16; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F4R1_Offset, 17> FB17; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F4R1_Offset, 18> FB18; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F4R1_Offset, 19> FB19; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F4R1_Offset, 20> FB20; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F4R1_Offset, 21> FB21; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F4R1_Offset, 22> FB22; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F4R1_Offset, 23> FB23; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F4R1_Offset, 24> FB24; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F4R1_Offset, 25> FB25; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F4R1_Offset, 26> FB26; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F4R1_Offset, 27> FB27; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F4R1_Offset, 28> FB28; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F4R1_Offset, 29> FB29; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F4R1_Offset, 30> FB30; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F4R1_Offset, 31> FB31; /* Filter bits */
    };

    class F4R2_T : public Register::Register<CAN_F4R2::f4r2_reg_type, BASE_ADDRESS + F4R2_Offset> {
    // Filter bank 4 register 2
    public:
        Register::Bit<BASE_ADDRESS + F4R2_Offset, 0> FB0; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F4R2_Offset, 1> FB1; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F4R2_Offset, 2> FB2; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F4R2_Offset, 3> FB3; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F4R2_Offset, 4> FB4; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F4R2_Offset, 5> FB5; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F4R2_Offset, 6> FB6; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F4R2_Offset, 7> FB7; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F4R2_Offset, 8> FB8; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F4R2_Offset, 9> FB9; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F4R2_Offset, 10> FB10; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F4R2_Offset, 11> FB11; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F4R2_Offset, 12> FB12; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F4R2_Offset, 13> FB13; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F4R2_Offset, 14> FB14; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F4R2_Offset, 15> FB15; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F4R2_Offset, 16> FB16; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F4R2_Offset, 17> FB17; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F4R2_Offset, 18> FB18; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F4R2_Offset, 19> FB19; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F4R2_Offset, 20> FB20; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F4R2_Offset, 21> FB21; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F4R2_Offset, 22> FB22; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F4R2_Offset, 23> FB23; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F4R2_Offset, 24> FB24; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F4R2_Offset, 25> FB25; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F4R2_Offset, 26> FB26; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F4R2_Offset, 27> FB27; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F4R2_Offset, 28> FB28; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F4R2_Offset, 29> FB29; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F4R2_Offset, 30> FB30; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F4R2_Offset, 31> FB31; /* Filter bits */
    };

    class F5R1_T : public Register::Register<CAN_F5R1::f5r1_reg_type, BASE_ADDRESS + F5R1_Offset> {
    // Filter bank 5 register 1
    public:
        Register::Bit<BASE_ADDRESS + F5R1_Offset, 0> FB0; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F5R1_Offset, 1> FB1; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F5R1_Offset, 2> FB2; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F5R1_Offset, 3> FB3; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F5R1_Offset, 4> FB4; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F5R1_Offset, 5> FB5; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F5R1_Offset, 6> FB6; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F5R1_Offset, 7> FB7; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F5R1_Offset, 8> FB8; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F5R1_Offset, 9> FB9; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F5R1_Offset, 10> FB10; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F5R1_Offset, 11> FB11; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F5R1_Offset, 12> FB12; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F5R1_Offset, 13> FB13; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F5R1_Offset, 14> FB14; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F5R1_Offset, 15> FB15; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F5R1_Offset, 16> FB16; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F5R1_Offset, 17> FB17; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F5R1_Offset, 18> FB18; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F5R1_Offset, 19> FB19; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F5R1_Offset, 20> FB20; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F5R1_Offset, 21> FB21; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F5R1_Offset, 22> FB22; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F5R1_Offset, 23> FB23; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F5R1_Offset, 24> FB24; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F5R1_Offset, 25> FB25; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F5R1_Offset, 26> FB26; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F5R1_Offset, 27> FB27; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F5R1_Offset, 28> FB28; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F5R1_Offset, 29> FB29; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F5R1_Offset, 30> FB30; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F5R1_Offset, 31> FB31; /* Filter bits */
    };

    class F5R2_T : public Register::Register<CAN_F5R2::f5r2_reg_type, BASE_ADDRESS + F5R2_Offset> {
    // Filter bank 5 register 2
    public:
        Register::Bit<BASE_ADDRESS + F5R2_Offset, 0> FB0; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F5R2_Offset, 1> FB1; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F5R2_Offset, 2> FB2; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F5R2_Offset, 3> FB3; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F5R2_Offset, 4> FB4; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F5R2_Offset, 5> FB5; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F5R2_Offset, 6> FB6; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F5R2_Offset, 7> FB7; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F5R2_Offset, 8> FB8; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F5R2_Offset, 9> FB9; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F5R2_Offset, 10> FB10; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F5R2_Offset, 11> FB11; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F5R2_Offset, 12> FB12; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F5R2_Offset, 13> FB13; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F5R2_Offset, 14> FB14; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F5R2_Offset, 15> FB15; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F5R2_Offset, 16> FB16; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F5R2_Offset, 17> FB17; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F5R2_Offset, 18> FB18; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F5R2_Offset, 19> FB19; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F5R2_Offset, 20> FB20; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F5R2_Offset, 21> FB21; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F5R2_Offset, 22> FB22; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F5R2_Offset, 23> FB23; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F5R2_Offset, 24> FB24; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F5R2_Offset, 25> FB25; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F5R2_Offset, 26> FB26; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F5R2_Offset, 27> FB27; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F5R2_Offset, 28> FB28; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F5R2_Offset, 29> FB29; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F5R2_Offset, 30> FB30; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F5R2_Offset, 31> FB31; /* Filter bits */
    };

    class F6R1_T : public Register::Register<CAN_F6R1::f6r1_reg_type, BASE_ADDRESS + F6R1_Offset> {
    // Filter bank 6 register 1
    public:
        Register::Bit<BASE_ADDRESS + F6R1_Offset, 0> FB0; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F6R1_Offset, 1> FB1; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F6R1_Offset, 2> FB2; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F6R1_Offset, 3> FB3; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F6R1_Offset, 4> FB4; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F6R1_Offset, 5> FB5; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F6R1_Offset, 6> FB6; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F6R1_Offset, 7> FB7; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F6R1_Offset, 8> FB8; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F6R1_Offset, 9> FB9; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F6R1_Offset, 10> FB10; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F6R1_Offset, 11> FB11; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F6R1_Offset, 12> FB12; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F6R1_Offset, 13> FB13; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F6R1_Offset, 14> FB14; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F6R1_Offset, 15> FB15; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F6R1_Offset, 16> FB16; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F6R1_Offset, 17> FB17; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F6R1_Offset, 18> FB18; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F6R1_Offset, 19> FB19; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F6R1_Offset, 20> FB20; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F6R1_Offset, 21> FB21; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F6R1_Offset, 22> FB22; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F6R1_Offset, 23> FB23; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F6R1_Offset, 24> FB24; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F6R1_Offset, 25> FB25; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F6R1_Offset, 26> FB26; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F6R1_Offset, 27> FB27; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F6R1_Offset, 28> FB28; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F6R1_Offset, 29> FB29; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F6R1_Offset, 30> FB30; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F6R1_Offset, 31> FB31; /* Filter bits */
    };

    class F6R2_T : public Register::Register<CAN_F6R2::f6r2_reg_type, BASE_ADDRESS + F6R2_Offset> {
    // Filter bank 6 register 2
    public:
        Register::Bit<BASE_ADDRESS + F6R2_Offset, 0> FB0; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F6R2_Offset, 1> FB1; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F6R2_Offset, 2> FB2; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F6R2_Offset, 3> FB3; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F6R2_Offset, 4> FB4; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F6R2_Offset, 5> FB5; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F6R2_Offset, 6> FB6; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F6R2_Offset, 7> FB7; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F6R2_Offset, 8> FB8; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F6R2_Offset, 9> FB9; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F6R2_Offset, 10> FB10; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F6R2_Offset, 11> FB11; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F6R2_Offset, 12> FB12; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F6R2_Offset, 13> FB13; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F6R2_Offset, 14> FB14; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F6R2_Offset, 15> FB15; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F6R2_Offset, 16> FB16; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F6R2_Offset, 17> FB17; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F6R2_Offset, 18> FB18; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F6R2_Offset, 19> FB19; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F6R2_Offset, 20> FB20; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F6R2_Offset, 21> FB21; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F6R2_Offset, 22> FB22; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F6R2_Offset, 23> FB23; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F6R2_Offset, 24> FB24; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F6R2_Offset, 25> FB25; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F6R2_Offset, 26> FB26; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F6R2_Offset, 27> FB27; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F6R2_Offset, 28> FB28; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F6R2_Offset, 29> FB29; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F6R2_Offset, 30> FB30; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F6R2_Offset, 31> FB31; /* Filter bits */
    };

    class F7R1_T : public Register::Register<CAN_F7R1::f7r1_reg_type, BASE_ADDRESS + F7R1_Offset> {
    // Filter bank 7 register 1
    public:
        Register::Bit<BASE_ADDRESS + F7R1_Offset, 0> FB0; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F7R1_Offset, 1> FB1; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F7R1_Offset, 2> FB2; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F7R1_Offset, 3> FB3; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F7R1_Offset, 4> FB4; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F7R1_Offset, 5> FB5; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F7R1_Offset, 6> FB6; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F7R1_Offset, 7> FB7; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F7R1_Offset, 8> FB8; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F7R1_Offset, 9> FB9; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F7R1_Offset, 10> FB10; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F7R1_Offset, 11> FB11; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F7R1_Offset, 12> FB12; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F7R1_Offset, 13> FB13; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F7R1_Offset, 14> FB14; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F7R1_Offset, 15> FB15; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F7R1_Offset, 16> FB16; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F7R1_Offset, 17> FB17; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F7R1_Offset, 18> FB18; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F7R1_Offset, 19> FB19; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F7R1_Offset, 20> FB20; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F7R1_Offset, 21> FB21; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F7R1_Offset, 22> FB22; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F7R1_Offset, 23> FB23; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F7R1_Offset, 24> FB24; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F7R1_Offset, 25> FB25; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F7R1_Offset, 26> FB26; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F7R1_Offset, 27> FB27; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F7R1_Offset, 28> FB28; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F7R1_Offset, 29> FB29; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F7R1_Offset, 30> FB30; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F7R1_Offset, 31> FB31; /* Filter bits */
    };

    class F7R2_T : public Register::Register<CAN_F7R2::f7r2_reg_type, BASE_ADDRESS + F7R2_Offset> {
    // Filter bank 7 register 2
    public:
        Register::Bit<BASE_ADDRESS + F7R2_Offset, 0> FB0; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F7R2_Offset, 1> FB1; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F7R2_Offset, 2> FB2; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F7R2_Offset, 3> FB3; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F7R2_Offset, 4> FB4; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F7R2_Offset, 5> FB5; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F7R2_Offset, 6> FB6; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F7R2_Offset, 7> FB7; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F7R2_Offset, 8> FB8; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F7R2_Offset, 9> FB9; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F7R2_Offset, 10> FB10; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F7R2_Offset, 11> FB11; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F7R2_Offset, 12> FB12; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F7R2_Offset, 13> FB13; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F7R2_Offset, 14> FB14; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F7R2_Offset, 15> FB15; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F7R2_Offset, 16> FB16; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F7R2_Offset, 17> FB17; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F7R2_Offset, 18> FB18; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F7R2_Offset, 19> FB19; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F7R2_Offset, 20> FB20; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F7R2_Offset, 21> FB21; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F7R2_Offset, 22> FB22; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F7R2_Offset, 23> FB23; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F7R2_Offset, 24> FB24; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F7R2_Offset, 25> FB25; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F7R2_Offset, 26> FB26; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F7R2_Offset, 27> FB27; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F7R2_Offset, 28> FB28; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F7R2_Offset, 29> FB29; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F7R2_Offset, 30> FB30; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F7R2_Offset, 31> FB31; /* Filter bits */
    };

    class F8R1_T : public Register::Register<CAN_F8R1::f8r1_reg_type, BASE_ADDRESS + F8R1_Offset> {
    // Filter bank 8 register 1
    public:
        Register::Bit<BASE_ADDRESS + F8R1_Offset, 0> FB0; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F8R1_Offset, 1> FB1; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F8R1_Offset, 2> FB2; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F8R1_Offset, 3> FB3; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F8R1_Offset, 4> FB4; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F8R1_Offset, 5> FB5; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F8R1_Offset, 6> FB6; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F8R1_Offset, 7> FB7; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F8R1_Offset, 8> FB8; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F8R1_Offset, 9> FB9; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F8R1_Offset, 10> FB10; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F8R1_Offset, 11> FB11; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F8R1_Offset, 12> FB12; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F8R1_Offset, 13> FB13; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F8R1_Offset, 14> FB14; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F8R1_Offset, 15> FB15; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F8R1_Offset, 16> FB16; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F8R1_Offset, 17> FB17; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F8R1_Offset, 18> FB18; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F8R1_Offset, 19> FB19; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F8R1_Offset, 20> FB20; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F8R1_Offset, 21> FB21; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F8R1_Offset, 22> FB22; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F8R1_Offset, 23> FB23; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F8R1_Offset, 24> FB24; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F8R1_Offset, 25> FB25; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F8R1_Offset, 26> FB26; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F8R1_Offset, 27> FB27; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F8R1_Offset, 28> FB28; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F8R1_Offset, 29> FB29; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F8R1_Offset, 30> FB30; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F8R1_Offset, 31> FB31; /* Filter bits */
    };

    class F8R2_T : public Register::Register<CAN_F8R2::f8r2_reg_type, BASE_ADDRESS + F8R2_Offset> {
    // Filter bank 8 register 2
    public:
        Register::Bit<BASE_ADDRESS + F8R2_Offset, 0> FB0; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F8R2_Offset, 1> FB1; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F8R2_Offset, 2> FB2; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F8R2_Offset, 3> FB3; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F8R2_Offset, 4> FB4; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F8R2_Offset, 5> FB5; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F8R2_Offset, 6> FB6; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F8R2_Offset, 7> FB7; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F8R2_Offset, 8> FB8; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F8R2_Offset, 9> FB9; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F8R2_Offset, 10> FB10; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F8R2_Offset, 11> FB11; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F8R2_Offset, 12> FB12; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F8R2_Offset, 13> FB13; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F8R2_Offset, 14> FB14; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F8R2_Offset, 15> FB15; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F8R2_Offset, 16> FB16; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F8R2_Offset, 17> FB17; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F8R2_Offset, 18> FB18; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F8R2_Offset, 19> FB19; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F8R2_Offset, 20> FB20; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F8R2_Offset, 21> FB21; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F8R2_Offset, 22> FB22; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F8R2_Offset, 23> FB23; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F8R2_Offset, 24> FB24; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F8R2_Offset, 25> FB25; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F8R2_Offset, 26> FB26; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F8R2_Offset, 27> FB27; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F8R2_Offset, 28> FB28; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F8R2_Offset, 29> FB29; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F8R2_Offset, 30> FB30; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F8R2_Offset, 31> FB31; /* Filter bits */
    };

    class F9R1_T : public Register::Register<CAN_F9R1::f9r1_reg_type, BASE_ADDRESS + F9R1_Offset> {
    // Filter bank 9 register 1
    public:
        Register::Bit<BASE_ADDRESS + F9R1_Offset, 0> FB0; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F9R1_Offset, 1> FB1; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F9R1_Offset, 2> FB2; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F9R1_Offset, 3> FB3; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F9R1_Offset, 4> FB4; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F9R1_Offset, 5> FB5; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F9R1_Offset, 6> FB6; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F9R1_Offset, 7> FB7; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F9R1_Offset, 8> FB8; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F9R1_Offset, 9> FB9; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F9R1_Offset, 10> FB10; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F9R1_Offset, 11> FB11; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F9R1_Offset, 12> FB12; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F9R1_Offset, 13> FB13; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F9R1_Offset, 14> FB14; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F9R1_Offset, 15> FB15; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F9R1_Offset, 16> FB16; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F9R1_Offset, 17> FB17; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F9R1_Offset, 18> FB18; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F9R1_Offset, 19> FB19; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F9R1_Offset, 20> FB20; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F9R1_Offset, 21> FB21; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F9R1_Offset, 22> FB22; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F9R1_Offset, 23> FB23; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F9R1_Offset, 24> FB24; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F9R1_Offset, 25> FB25; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F9R1_Offset, 26> FB26; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F9R1_Offset, 27> FB27; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F9R1_Offset, 28> FB28; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F9R1_Offset, 29> FB29; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F9R1_Offset, 30> FB30; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F9R1_Offset, 31> FB31; /* Filter bits */
    };

    class F9R2_T : public Register::Register<CAN_F9R2::f9r2_reg_type, BASE_ADDRESS + F9R2_Offset> {
    // Filter bank 9 register 2
    public:
        Register::Bit<BASE_ADDRESS + F9R2_Offset, 0> FB0; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F9R2_Offset, 1> FB1; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F9R2_Offset, 2> FB2; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F9R2_Offset, 3> FB3; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F9R2_Offset, 4> FB4; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F9R2_Offset, 5> FB5; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F9R2_Offset, 6> FB6; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F9R2_Offset, 7> FB7; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F9R2_Offset, 8> FB8; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F9R2_Offset, 9> FB9; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F9R2_Offset, 10> FB10; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F9R2_Offset, 11> FB11; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F9R2_Offset, 12> FB12; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F9R2_Offset, 13> FB13; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F9R2_Offset, 14> FB14; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F9R2_Offset, 15> FB15; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F9R2_Offset, 16> FB16; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F9R2_Offset, 17> FB17; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F9R2_Offset, 18> FB18; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F9R2_Offset, 19> FB19; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F9R2_Offset, 20> FB20; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F9R2_Offset, 21> FB21; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F9R2_Offset, 22> FB22; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F9R2_Offset, 23> FB23; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F9R2_Offset, 24> FB24; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F9R2_Offset, 25> FB25; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F9R2_Offset, 26> FB26; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F9R2_Offset, 27> FB27; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F9R2_Offset, 28> FB28; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F9R2_Offset, 29> FB29; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F9R2_Offset, 30> FB30; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F9R2_Offset, 31> FB31; /* Filter bits */
    };

    class F10R1_T : public Register::Register<CAN_F10R1::f10r1_reg_type, BASE_ADDRESS + F10R1_Offset> {
    // Filter bank 10 register 1
    public:
        Register::Bit<BASE_ADDRESS + F10R1_Offset, 0> FB0; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F10R1_Offset, 1> FB1; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F10R1_Offset, 2> FB2; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F10R1_Offset, 3> FB3; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F10R1_Offset, 4> FB4; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F10R1_Offset, 5> FB5; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F10R1_Offset, 6> FB6; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F10R1_Offset, 7> FB7; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F10R1_Offset, 8> FB8; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F10R1_Offset, 9> FB9; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F10R1_Offset, 10> FB10; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F10R1_Offset, 11> FB11; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F10R1_Offset, 12> FB12; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F10R1_Offset, 13> FB13; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F10R1_Offset, 14> FB14; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F10R1_Offset, 15> FB15; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F10R1_Offset, 16> FB16; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F10R1_Offset, 17> FB17; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F10R1_Offset, 18> FB18; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F10R1_Offset, 19> FB19; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F10R1_Offset, 20> FB20; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F10R1_Offset, 21> FB21; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F10R1_Offset, 22> FB22; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F10R1_Offset, 23> FB23; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F10R1_Offset, 24> FB24; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F10R1_Offset, 25> FB25; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F10R1_Offset, 26> FB26; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F10R1_Offset, 27> FB27; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F10R1_Offset, 28> FB28; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F10R1_Offset, 29> FB29; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F10R1_Offset, 30> FB30; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F10R1_Offset, 31> FB31; /* Filter bits */
    };

    class F10R2_T : public Register::Register<CAN_F10R2::f10r2_reg_type, BASE_ADDRESS + F10R2_Offset> {
    // Filter bank 10 register 2
    public:
        Register::Bit<BASE_ADDRESS + F10R2_Offset, 0> FB0; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F10R2_Offset, 1> FB1; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F10R2_Offset, 2> FB2; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F10R2_Offset, 3> FB3; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F10R2_Offset, 4> FB4; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F10R2_Offset, 5> FB5; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F10R2_Offset, 6> FB6; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F10R2_Offset, 7> FB7; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F10R2_Offset, 8> FB8; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F10R2_Offset, 9> FB9; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F10R2_Offset, 10> FB10; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F10R2_Offset, 11> FB11; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F10R2_Offset, 12> FB12; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F10R2_Offset, 13> FB13; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F10R2_Offset, 14> FB14; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F10R2_Offset, 15> FB15; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F10R2_Offset, 16> FB16; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F10R2_Offset, 17> FB17; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F10R2_Offset, 18> FB18; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F10R2_Offset, 19> FB19; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F10R2_Offset, 20> FB20; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F10R2_Offset, 21> FB21; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F10R2_Offset, 22> FB22; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F10R2_Offset, 23> FB23; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F10R2_Offset, 24> FB24; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F10R2_Offset, 25> FB25; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F10R2_Offset, 26> FB26; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F10R2_Offset, 27> FB27; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F10R2_Offset, 28> FB28; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F10R2_Offset, 29> FB29; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F10R2_Offset, 30> FB30; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F10R2_Offset, 31> FB31; /* Filter bits */
    };

    class F11R1_T : public Register::Register<CAN_F11R1::f11r1_reg_type, BASE_ADDRESS + F11R1_Offset> {
    // Filter bank 11 register 1
    public:
        Register::Bit<BASE_ADDRESS + F11R1_Offset, 0> FB0; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F11R1_Offset, 1> FB1; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F11R1_Offset, 2> FB2; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F11R1_Offset, 3> FB3; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F11R1_Offset, 4> FB4; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F11R1_Offset, 5> FB5; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F11R1_Offset, 6> FB6; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F11R1_Offset, 7> FB7; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F11R1_Offset, 8> FB8; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F11R1_Offset, 9> FB9; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F11R1_Offset, 10> FB10; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F11R1_Offset, 11> FB11; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F11R1_Offset, 12> FB12; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F11R1_Offset, 13> FB13; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F11R1_Offset, 14> FB14; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F11R1_Offset, 15> FB15; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F11R1_Offset, 16> FB16; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F11R1_Offset, 17> FB17; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F11R1_Offset, 18> FB18; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F11R1_Offset, 19> FB19; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F11R1_Offset, 20> FB20; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F11R1_Offset, 21> FB21; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F11R1_Offset, 22> FB22; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F11R1_Offset, 23> FB23; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F11R1_Offset, 24> FB24; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F11R1_Offset, 25> FB25; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F11R1_Offset, 26> FB26; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F11R1_Offset, 27> FB27; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F11R1_Offset, 28> FB28; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F11R1_Offset, 29> FB29; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F11R1_Offset, 30> FB30; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F11R1_Offset, 31> FB31; /* Filter bits */
    };

    class F11R2_T : public Register::Register<CAN_F11R2::f11r2_reg_type, BASE_ADDRESS + F11R2_Offset> {
    // Filter bank 11 register 2
    public:
        Register::Bit<BASE_ADDRESS + F11R2_Offset, 0> FB0; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F11R2_Offset, 1> FB1; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F11R2_Offset, 2> FB2; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F11R2_Offset, 3> FB3; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F11R2_Offset, 4> FB4; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F11R2_Offset, 5> FB5; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F11R2_Offset, 6> FB6; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F11R2_Offset, 7> FB7; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F11R2_Offset, 8> FB8; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F11R2_Offset, 9> FB9; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F11R2_Offset, 10> FB10; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F11R2_Offset, 11> FB11; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F11R2_Offset, 12> FB12; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F11R2_Offset, 13> FB13; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F11R2_Offset, 14> FB14; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F11R2_Offset, 15> FB15; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F11R2_Offset, 16> FB16; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F11R2_Offset, 17> FB17; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F11R2_Offset, 18> FB18; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F11R2_Offset, 19> FB19; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F11R2_Offset, 20> FB20; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F11R2_Offset, 21> FB21; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F11R2_Offset, 22> FB22; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F11R2_Offset, 23> FB23; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F11R2_Offset, 24> FB24; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F11R2_Offset, 25> FB25; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F11R2_Offset, 26> FB26; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F11R2_Offset, 27> FB27; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F11R2_Offset, 28> FB28; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F11R2_Offset, 29> FB29; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F11R2_Offset, 30> FB30; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F11R2_Offset, 31> FB31; /* Filter bits */
    };

    class F12R1_T : public Register::Register<CAN_F12R1::f12r1_reg_type, BASE_ADDRESS + F12R1_Offset> {
    // Filter bank 4 register 1
    public:
        Register::Bit<BASE_ADDRESS + F12R1_Offset, 0> FB0; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F12R1_Offset, 1> FB1; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F12R1_Offset, 2> FB2; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F12R1_Offset, 3> FB3; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F12R1_Offset, 4> FB4; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F12R1_Offset, 5> FB5; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F12R1_Offset, 6> FB6; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F12R1_Offset, 7> FB7; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F12R1_Offset, 8> FB8; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F12R1_Offset, 9> FB9; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F12R1_Offset, 10> FB10; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F12R1_Offset, 11> FB11; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F12R1_Offset, 12> FB12; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F12R1_Offset, 13> FB13; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F12R1_Offset, 14> FB14; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F12R1_Offset, 15> FB15; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F12R1_Offset, 16> FB16; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F12R1_Offset, 17> FB17; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F12R1_Offset, 18> FB18; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F12R1_Offset, 19> FB19; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F12R1_Offset, 20> FB20; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F12R1_Offset, 21> FB21; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F12R1_Offset, 22> FB22; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F12R1_Offset, 23> FB23; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F12R1_Offset, 24> FB24; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F12R1_Offset, 25> FB25; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F12R1_Offset, 26> FB26; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F12R1_Offset, 27> FB27; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F12R1_Offset, 28> FB28; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F12R1_Offset, 29> FB29; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F12R1_Offset, 30> FB30; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F12R1_Offset, 31> FB31; /* Filter bits */
    };

    class F12R2_T : public Register::Register<CAN_F12R2::f12r2_reg_type, BASE_ADDRESS + F12R2_Offset> {
    // Filter bank 12 register 2
    public:
        Register::Bit<BASE_ADDRESS + F12R2_Offset, 0> FB0; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F12R2_Offset, 1> FB1; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F12R2_Offset, 2> FB2; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F12R2_Offset, 3> FB3; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F12R2_Offset, 4> FB4; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F12R2_Offset, 5> FB5; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F12R2_Offset, 6> FB6; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F12R2_Offset, 7> FB7; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F12R2_Offset, 8> FB8; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F12R2_Offset, 9> FB9; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F12R2_Offset, 10> FB10; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F12R2_Offset, 11> FB11; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F12R2_Offset, 12> FB12; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F12R2_Offset, 13> FB13; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F12R2_Offset, 14> FB14; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F12R2_Offset, 15> FB15; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F12R2_Offset, 16> FB16; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F12R2_Offset, 17> FB17; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F12R2_Offset, 18> FB18; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F12R2_Offset, 19> FB19; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F12R2_Offset, 20> FB20; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F12R2_Offset, 21> FB21; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F12R2_Offset, 22> FB22; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F12R2_Offset, 23> FB23; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F12R2_Offset, 24> FB24; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F12R2_Offset, 25> FB25; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F12R2_Offset, 26> FB26; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F12R2_Offset, 27> FB27; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F12R2_Offset, 28> FB28; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F12R2_Offset, 29> FB29; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F12R2_Offset, 30> FB30; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F12R2_Offset, 31> FB31; /* Filter bits */
    };

    class F13R1_T : public Register::Register<CAN_F13R1::f13r1_reg_type, BASE_ADDRESS + F13R1_Offset> {
    // Filter bank 13 register 1
    public:
        Register::Bit<BASE_ADDRESS + F13R1_Offset, 0> FB0; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F13R1_Offset, 1> FB1; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F13R1_Offset, 2> FB2; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F13R1_Offset, 3> FB3; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F13R1_Offset, 4> FB4; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F13R1_Offset, 5> FB5; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F13R1_Offset, 6> FB6; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F13R1_Offset, 7> FB7; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F13R1_Offset, 8> FB8; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F13R1_Offset, 9> FB9; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F13R1_Offset, 10> FB10; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F13R1_Offset, 11> FB11; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F13R1_Offset, 12> FB12; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F13R1_Offset, 13> FB13; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F13R1_Offset, 14> FB14; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F13R1_Offset, 15> FB15; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F13R1_Offset, 16> FB16; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F13R1_Offset, 17> FB17; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F13R1_Offset, 18> FB18; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F13R1_Offset, 19> FB19; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F13R1_Offset, 20> FB20; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F13R1_Offset, 21> FB21; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F13R1_Offset, 22> FB22; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F13R1_Offset, 23> FB23; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F13R1_Offset, 24> FB24; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F13R1_Offset, 25> FB25; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F13R1_Offset, 26> FB26; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F13R1_Offset, 27> FB27; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F13R1_Offset, 28> FB28; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F13R1_Offset, 29> FB29; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F13R1_Offset, 30> FB30; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F13R1_Offset, 31> FB31; /* Filter bits */
    };

    class F13R2_T : public Register::Register<CAN_F13R2::f13r2_reg_type, BASE_ADDRESS + F13R2_Offset> {
    // Filter bank 13 register 2
    public:
        Register::Bit<BASE_ADDRESS + F13R2_Offset, 0> FB0; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F13R2_Offset, 1> FB1; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F13R2_Offset, 2> FB2; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F13R2_Offset, 3> FB3; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F13R2_Offset, 4> FB4; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F13R2_Offset, 5> FB5; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F13R2_Offset, 6> FB6; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F13R2_Offset, 7> FB7; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F13R2_Offset, 8> FB8; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F13R2_Offset, 9> FB9; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F13R2_Offset, 10> FB10; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F13R2_Offset, 11> FB11; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F13R2_Offset, 12> FB12; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F13R2_Offset, 13> FB13; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F13R2_Offset, 14> FB14; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F13R2_Offset, 15> FB15; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F13R2_Offset, 16> FB16; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F13R2_Offset, 17> FB17; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F13R2_Offset, 18> FB18; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F13R2_Offset, 19> FB19; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F13R2_Offset, 20> FB20; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F13R2_Offset, 21> FB21; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F13R2_Offset, 22> FB22; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F13R2_Offset, 23> FB23; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F13R2_Offset, 24> FB24; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F13R2_Offset, 25> FB25; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F13R2_Offset, 26> FB26; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F13R2_Offset, 27> FB27; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F13R2_Offset, 28> FB28; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F13R2_Offset, 29> FB29; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F13R2_Offset, 30> FB30; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F13R2_Offset, 31> FB31; /* Filter bits */
    };

    class F14R1_T : public Register::Register<CAN_F14R1::f14r1_reg_type, BASE_ADDRESS + F14R1_Offset> {
    // Filter bank 14 register 1
    public:
        Register::Bit<BASE_ADDRESS + F14R1_Offset, 0> FB0; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F14R1_Offset, 1> FB1; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F14R1_Offset, 2> FB2; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F14R1_Offset, 3> FB3; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F14R1_Offset, 4> FB4; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F14R1_Offset, 5> FB5; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F14R1_Offset, 6> FB6; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F14R1_Offset, 7> FB7; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F14R1_Offset, 8> FB8; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F14R1_Offset, 9> FB9; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F14R1_Offset, 10> FB10; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F14R1_Offset, 11> FB11; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F14R1_Offset, 12> FB12; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F14R1_Offset, 13> FB13; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F14R1_Offset, 14> FB14; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F14R1_Offset, 15> FB15; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F14R1_Offset, 16> FB16; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F14R1_Offset, 17> FB17; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F14R1_Offset, 18> FB18; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F14R1_Offset, 19> FB19; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F14R1_Offset, 20> FB20; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F14R1_Offset, 21> FB21; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F14R1_Offset, 22> FB22; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F14R1_Offset, 23> FB23; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F14R1_Offset, 24> FB24; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F14R1_Offset, 25> FB25; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F14R1_Offset, 26> FB26; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F14R1_Offset, 27> FB27; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F14R1_Offset, 28> FB28; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F14R1_Offset, 29> FB29; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F14R1_Offset, 30> FB30; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F14R1_Offset, 31> FB31; /* Filter bits */
    };

    class F14R2_T : public Register::Register<CAN_F14R2::f14r2_reg_type, BASE_ADDRESS + F14R2_Offset> {
    // Filter bank 14 register 2
    public:
        Register::Bit<BASE_ADDRESS + F14R2_Offset, 0> FB0; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F14R2_Offset, 1> FB1; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F14R2_Offset, 2> FB2; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F14R2_Offset, 3> FB3; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F14R2_Offset, 4> FB4; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F14R2_Offset, 5> FB5; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F14R2_Offset, 6> FB6; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F14R2_Offset, 7> FB7; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F14R2_Offset, 8> FB8; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F14R2_Offset, 9> FB9; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F14R2_Offset, 10> FB10; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F14R2_Offset, 11> FB11; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F14R2_Offset, 12> FB12; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F14R2_Offset, 13> FB13; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F14R2_Offset, 14> FB14; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F14R2_Offset, 15> FB15; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F14R2_Offset, 16> FB16; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F14R2_Offset, 17> FB17; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F14R2_Offset, 18> FB18; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F14R2_Offset, 19> FB19; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F14R2_Offset, 20> FB20; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F14R2_Offset, 21> FB21; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F14R2_Offset, 22> FB22; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F14R2_Offset, 23> FB23; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F14R2_Offset, 24> FB24; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F14R2_Offset, 25> FB25; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F14R2_Offset, 26> FB26; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F14R2_Offset, 27> FB27; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F14R2_Offset, 28> FB28; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F14R2_Offset, 29> FB29; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F14R2_Offset, 30> FB30; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F14R2_Offset, 31> FB31; /* Filter bits */
    };

    class F15R1_T : public Register::Register<CAN_F15R1::f15r1_reg_type, BASE_ADDRESS + F15R1_Offset> {
    // Filter bank 15 register 1
    public:
        Register::Bit<BASE_ADDRESS + F15R1_Offset, 0> FB0; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F15R1_Offset, 1> FB1; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F15R1_Offset, 2> FB2; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F15R1_Offset, 3> FB3; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F15R1_Offset, 4> FB4; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F15R1_Offset, 5> FB5; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F15R1_Offset, 6> FB6; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F15R1_Offset, 7> FB7; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F15R1_Offset, 8> FB8; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F15R1_Offset, 9> FB9; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F15R1_Offset, 10> FB10; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F15R1_Offset, 11> FB11; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F15R1_Offset, 12> FB12; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F15R1_Offset, 13> FB13; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F15R1_Offset, 14> FB14; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F15R1_Offset, 15> FB15; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F15R1_Offset, 16> FB16; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F15R1_Offset, 17> FB17; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F15R1_Offset, 18> FB18; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F15R1_Offset, 19> FB19; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F15R1_Offset, 20> FB20; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F15R1_Offset, 21> FB21; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F15R1_Offset, 22> FB22; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F15R1_Offset, 23> FB23; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F15R1_Offset, 24> FB24; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F15R1_Offset, 25> FB25; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F15R1_Offset, 26> FB26; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F15R1_Offset, 27> FB27; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F15R1_Offset, 28> FB28; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F15R1_Offset, 29> FB29; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F15R1_Offset, 30> FB30; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F15R1_Offset, 31> FB31; /* Filter bits */
    };

    class F15R2_T : public Register::Register<CAN_F15R2::f15r2_reg_type, BASE_ADDRESS + F15R2_Offset> {
    // Filter bank 15 register 2
    public:
        Register::Bit<BASE_ADDRESS + F15R2_Offset, 0> FB0; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F15R2_Offset, 1> FB1; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F15R2_Offset, 2> FB2; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F15R2_Offset, 3> FB3; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F15R2_Offset, 4> FB4; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F15R2_Offset, 5> FB5; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F15R2_Offset, 6> FB6; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F15R2_Offset, 7> FB7; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F15R2_Offset, 8> FB8; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F15R2_Offset, 9> FB9; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F15R2_Offset, 10> FB10; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F15R2_Offset, 11> FB11; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F15R2_Offset, 12> FB12; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F15R2_Offset, 13> FB13; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F15R2_Offset, 14> FB14; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F15R2_Offset, 15> FB15; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F15R2_Offset, 16> FB16; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F15R2_Offset, 17> FB17; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F15R2_Offset, 18> FB18; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F15R2_Offset, 19> FB19; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F15R2_Offset, 20> FB20; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F15R2_Offset, 21> FB21; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F15R2_Offset, 22> FB22; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F15R2_Offset, 23> FB23; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F15R2_Offset, 24> FB24; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F15R2_Offset, 25> FB25; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F15R2_Offset, 26> FB26; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F15R2_Offset, 27> FB27; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F15R2_Offset, 28> FB28; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F15R2_Offset, 29> FB29; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F15R2_Offset, 30> FB30; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F15R2_Offset, 31> FB31; /* Filter bits */
    };

    class F16R1_T : public Register::Register<CAN_F16R1::f16r1_reg_type, BASE_ADDRESS + F16R1_Offset> {
    // Filter bank 16 register 1
    public:
        Register::Bit<BASE_ADDRESS + F16R1_Offset, 0> FB0; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F16R1_Offset, 1> FB1; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F16R1_Offset, 2> FB2; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F16R1_Offset, 3> FB3; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F16R1_Offset, 4> FB4; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F16R1_Offset, 5> FB5; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F16R1_Offset, 6> FB6; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F16R1_Offset, 7> FB7; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F16R1_Offset, 8> FB8; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F16R1_Offset, 9> FB9; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F16R1_Offset, 10> FB10; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F16R1_Offset, 11> FB11; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F16R1_Offset, 12> FB12; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F16R1_Offset, 13> FB13; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F16R1_Offset, 14> FB14; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F16R1_Offset, 15> FB15; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F16R1_Offset, 16> FB16; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F16R1_Offset, 17> FB17; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F16R1_Offset, 18> FB18; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F16R1_Offset, 19> FB19; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F16R1_Offset, 20> FB20; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F16R1_Offset, 21> FB21; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F16R1_Offset, 22> FB22; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F16R1_Offset, 23> FB23; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F16R1_Offset, 24> FB24; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F16R1_Offset, 25> FB25; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F16R1_Offset, 26> FB26; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F16R1_Offset, 27> FB27; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F16R1_Offset, 28> FB28; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F16R1_Offset, 29> FB29; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F16R1_Offset, 30> FB30; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F16R1_Offset, 31> FB31; /* Filter bits */
    };

    class F16R2_T : public Register::Register<CAN_F16R2::f16r2_reg_type, BASE_ADDRESS + F16R2_Offset> {
    // Filter bank 16 register 2
    public:
        Register::Bit<BASE_ADDRESS + F16R2_Offset, 0> FB0; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F16R2_Offset, 1> FB1; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F16R2_Offset, 2> FB2; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F16R2_Offset, 3> FB3; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F16R2_Offset, 4> FB4; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F16R2_Offset, 5> FB5; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F16R2_Offset, 6> FB6; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F16R2_Offset, 7> FB7; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F16R2_Offset, 8> FB8; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F16R2_Offset, 9> FB9; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F16R2_Offset, 10> FB10; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F16R2_Offset, 11> FB11; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F16R2_Offset, 12> FB12; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F16R2_Offset, 13> FB13; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F16R2_Offset, 14> FB14; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F16R2_Offset, 15> FB15; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F16R2_Offset, 16> FB16; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F16R2_Offset, 17> FB17; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F16R2_Offset, 18> FB18; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F16R2_Offset, 19> FB19; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F16R2_Offset, 20> FB20; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F16R2_Offset, 21> FB21; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F16R2_Offset, 22> FB22; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F16R2_Offset, 23> FB23; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F16R2_Offset, 24> FB24; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F16R2_Offset, 25> FB25; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F16R2_Offset, 26> FB26; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F16R2_Offset, 27> FB27; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F16R2_Offset, 28> FB28; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F16R2_Offset, 29> FB29; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F16R2_Offset, 30> FB30; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F16R2_Offset, 31> FB31; /* Filter bits */
    };

    class F17R1_T : public Register::Register<CAN_F17R1::f17r1_reg_type, BASE_ADDRESS + F17R1_Offset> {
    // Filter bank 17 register 1
    public:
        Register::Bit<BASE_ADDRESS + F17R1_Offset, 0> FB0; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F17R1_Offset, 1> FB1; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F17R1_Offset, 2> FB2; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F17R1_Offset, 3> FB3; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F17R1_Offset, 4> FB4; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F17R1_Offset, 5> FB5; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F17R1_Offset, 6> FB6; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F17R1_Offset, 7> FB7; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F17R1_Offset, 8> FB8; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F17R1_Offset, 9> FB9; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F17R1_Offset, 10> FB10; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F17R1_Offset, 11> FB11; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F17R1_Offset, 12> FB12; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F17R1_Offset, 13> FB13; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F17R1_Offset, 14> FB14; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F17R1_Offset, 15> FB15; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F17R1_Offset, 16> FB16; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F17R1_Offset, 17> FB17; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F17R1_Offset, 18> FB18; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F17R1_Offset, 19> FB19; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F17R1_Offset, 20> FB20; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F17R1_Offset, 21> FB21; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F17R1_Offset, 22> FB22; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F17R1_Offset, 23> FB23; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F17R1_Offset, 24> FB24; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F17R1_Offset, 25> FB25; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F17R1_Offset, 26> FB26; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F17R1_Offset, 27> FB27; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F17R1_Offset, 28> FB28; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F17R1_Offset, 29> FB29; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F17R1_Offset, 30> FB30; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F17R1_Offset, 31> FB31; /* Filter bits */
    };

    class F17R2_T : public Register::Register<CAN_F17R2::f17r2_reg_type, BASE_ADDRESS + F17R2_Offset> {
    // Filter bank 17 register 2
    public:
        Register::Bit<BASE_ADDRESS + F17R2_Offset, 0> FB0; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F17R2_Offset, 1> FB1; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F17R2_Offset, 2> FB2; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F17R2_Offset, 3> FB3; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F17R2_Offset, 4> FB4; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F17R2_Offset, 5> FB5; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F17R2_Offset, 6> FB6; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F17R2_Offset, 7> FB7; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F17R2_Offset, 8> FB8; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F17R2_Offset, 9> FB9; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F17R2_Offset, 10> FB10; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F17R2_Offset, 11> FB11; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F17R2_Offset, 12> FB12; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F17R2_Offset, 13> FB13; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F17R2_Offset, 14> FB14; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F17R2_Offset, 15> FB15; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F17R2_Offset, 16> FB16; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F17R2_Offset, 17> FB17; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F17R2_Offset, 18> FB18; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F17R2_Offset, 19> FB19; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F17R2_Offset, 20> FB20; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F17R2_Offset, 21> FB21; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F17R2_Offset, 22> FB22; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F17R2_Offset, 23> FB23; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F17R2_Offset, 24> FB24; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F17R2_Offset, 25> FB25; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F17R2_Offset, 26> FB26; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F17R2_Offset, 27> FB27; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F17R2_Offset, 28> FB28; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F17R2_Offset, 29> FB29; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F17R2_Offset, 30> FB30; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F17R2_Offset, 31> FB31; /* Filter bits */
    };

    class F18R1_T : public Register::Register<CAN_F18R1::f18r1_reg_type, BASE_ADDRESS + F18R1_Offset> {
    // Filter bank 18 register 1
    public:
        Register::Bit<BASE_ADDRESS + F18R1_Offset, 0> FB0; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F18R1_Offset, 1> FB1; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F18R1_Offset, 2> FB2; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F18R1_Offset, 3> FB3; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F18R1_Offset, 4> FB4; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F18R1_Offset, 5> FB5; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F18R1_Offset, 6> FB6; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F18R1_Offset, 7> FB7; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F18R1_Offset, 8> FB8; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F18R1_Offset, 9> FB9; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F18R1_Offset, 10> FB10; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F18R1_Offset, 11> FB11; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F18R1_Offset, 12> FB12; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F18R1_Offset, 13> FB13; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F18R1_Offset, 14> FB14; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F18R1_Offset, 15> FB15; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F18R1_Offset, 16> FB16; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F18R1_Offset, 17> FB17; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F18R1_Offset, 18> FB18; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F18R1_Offset, 19> FB19; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F18R1_Offset, 20> FB20; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F18R1_Offset, 21> FB21; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F18R1_Offset, 22> FB22; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F18R1_Offset, 23> FB23; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F18R1_Offset, 24> FB24; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F18R1_Offset, 25> FB25; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F18R1_Offset, 26> FB26; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F18R1_Offset, 27> FB27; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F18R1_Offset, 28> FB28; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F18R1_Offset, 29> FB29; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F18R1_Offset, 30> FB30; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F18R1_Offset, 31> FB31; /* Filter bits */
    };

    class F18R2_T : public Register::Register<CAN_F18R2::f18r2_reg_type, BASE_ADDRESS + F18R2_Offset> {
    // Filter bank 18 register 2
    public:
        Register::Bit<BASE_ADDRESS + F18R2_Offset, 0> FB0; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F18R2_Offset, 1> FB1; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F18R2_Offset, 2> FB2; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F18R2_Offset, 3> FB3; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F18R2_Offset, 4> FB4; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F18R2_Offset, 5> FB5; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F18R2_Offset, 6> FB6; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F18R2_Offset, 7> FB7; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F18R2_Offset, 8> FB8; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F18R2_Offset, 9> FB9; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F18R2_Offset, 10> FB10; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F18R2_Offset, 11> FB11; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F18R2_Offset, 12> FB12; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F18R2_Offset, 13> FB13; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F18R2_Offset, 14> FB14; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F18R2_Offset, 15> FB15; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F18R2_Offset, 16> FB16; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F18R2_Offset, 17> FB17; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F18R2_Offset, 18> FB18; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F18R2_Offset, 19> FB19; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F18R2_Offset, 20> FB20; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F18R2_Offset, 21> FB21; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F18R2_Offset, 22> FB22; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F18R2_Offset, 23> FB23; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F18R2_Offset, 24> FB24; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F18R2_Offset, 25> FB25; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F18R2_Offset, 26> FB26; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F18R2_Offset, 27> FB27; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F18R2_Offset, 28> FB28; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F18R2_Offset, 29> FB29; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F18R2_Offset, 30> FB30; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F18R2_Offset, 31> FB31; /* Filter bits */
    };

    class F19R1_T : public Register::Register<CAN_F19R1::f19r1_reg_type, BASE_ADDRESS + F19R1_Offset> {
    // Filter bank 19 register 1
    public:
        Register::Bit<BASE_ADDRESS + F19R1_Offset, 0> FB0; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F19R1_Offset, 1> FB1; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F19R1_Offset, 2> FB2; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F19R1_Offset, 3> FB3; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F19R1_Offset, 4> FB4; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F19R1_Offset, 5> FB5; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F19R1_Offset, 6> FB6; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F19R1_Offset, 7> FB7; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F19R1_Offset, 8> FB8; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F19R1_Offset, 9> FB9; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F19R1_Offset, 10> FB10; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F19R1_Offset, 11> FB11; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F19R1_Offset, 12> FB12; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F19R1_Offset, 13> FB13; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F19R1_Offset, 14> FB14; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F19R1_Offset, 15> FB15; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F19R1_Offset, 16> FB16; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F19R1_Offset, 17> FB17; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F19R1_Offset, 18> FB18; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F19R1_Offset, 19> FB19; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F19R1_Offset, 20> FB20; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F19R1_Offset, 21> FB21; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F19R1_Offset, 22> FB22; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F19R1_Offset, 23> FB23; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F19R1_Offset, 24> FB24; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F19R1_Offset, 25> FB25; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F19R1_Offset, 26> FB26; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F19R1_Offset, 27> FB27; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F19R1_Offset, 28> FB28; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F19R1_Offset, 29> FB29; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F19R1_Offset, 30> FB30; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F19R1_Offset, 31> FB31; /* Filter bits */
    };

    class F19R2_T : public Register::Register<CAN_F19R2::f19r2_reg_type, BASE_ADDRESS + F19R2_Offset> {
    // Filter bank 19 register 2
    public:
        Register::Bit<BASE_ADDRESS + F19R2_Offset, 0> FB0; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F19R2_Offset, 1> FB1; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F19R2_Offset, 2> FB2; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F19R2_Offset, 3> FB3; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F19R2_Offset, 4> FB4; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F19R2_Offset, 5> FB5; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F19R2_Offset, 6> FB6; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F19R2_Offset, 7> FB7; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F19R2_Offset, 8> FB8; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F19R2_Offset, 9> FB9; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F19R2_Offset, 10> FB10; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F19R2_Offset, 11> FB11; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F19R2_Offset, 12> FB12; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F19R2_Offset, 13> FB13; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F19R2_Offset, 14> FB14; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F19R2_Offset, 15> FB15; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F19R2_Offset, 16> FB16; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F19R2_Offset, 17> FB17; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F19R2_Offset, 18> FB18; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F19R2_Offset, 19> FB19; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F19R2_Offset, 20> FB20; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F19R2_Offset, 21> FB21; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F19R2_Offset, 22> FB22; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F19R2_Offset, 23> FB23; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F19R2_Offset, 24> FB24; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F19R2_Offset, 25> FB25; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F19R2_Offset, 26> FB26; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F19R2_Offset, 27> FB27; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F19R2_Offset, 28> FB28; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F19R2_Offset, 29> FB29; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F19R2_Offset, 30> FB30; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F19R2_Offset, 31> FB31; /* Filter bits */
    };

    class F20R1_T : public Register::Register<CAN_F20R1::f20r1_reg_type, BASE_ADDRESS + F20R1_Offset> {
    // Filter bank 20 register 1
    public:
        Register::Bit<BASE_ADDRESS + F20R1_Offset, 0> FB0; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F20R1_Offset, 1> FB1; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F20R1_Offset, 2> FB2; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F20R1_Offset, 3> FB3; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F20R1_Offset, 4> FB4; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F20R1_Offset, 5> FB5; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F20R1_Offset, 6> FB6; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F20R1_Offset, 7> FB7; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F20R1_Offset, 8> FB8; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F20R1_Offset, 9> FB9; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F20R1_Offset, 10> FB10; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F20R1_Offset, 11> FB11; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F20R1_Offset, 12> FB12; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F20R1_Offset, 13> FB13; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F20R1_Offset, 14> FB14; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F20R1_Offset, 15> FB15; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F20R1_Offset, 16> FB16; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F20R1_Offset, 17> FB17; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F20R1_Offset, 18> FB18; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F20R1_Offset, 19> FB19; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F20R1_Offset, 20> FB20; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F20R1_Offset, 21> FB21; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F20R1_Offset, 22> FB22; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F20R1_Offset, 23> FB23; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F20R1_Offset, 24> FB24; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F20R1_Offset, 25> FB25; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F20R1_Offset, 26> FB26; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F20R1_Offset, 27> FB27; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F20R1_Offset, 28> FB28; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F20R1_Offset, 29> FB29; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F20R1_Offset, 30> FB30; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F20R1_Offset, 31> FB31; /* Filter bits */
    };

    class F20R2_T : public Register::Register<CAN_F20R2::f20r2_reg_type, BASE_ADDRESS + F20R2_Offset> {
    // Filter bank 20 register 2
    public:
        Register::Bit<BASE_ADDRESS + F20R2_Offset, 0> FB0; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F20R2_Offset, 1> FB1; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F20R2_Offset, 2> FB2; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F20R2_Offset, 3> FB3; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F20R2_Offset, 4> FB4; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F20R2_Offset, 5> FB5; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F20R2_Offset, 6> FB6; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F20R2_Offset, 7> FB7; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F20R2_Offset, 8> FB8; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F20R2_Offset, 9> FB9; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F20R2_Offset, 10> FB10; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F20R2_Offset, 11> FB11; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F20R2_Offset, 12> FB12; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F20R2_Offset, 13> FB13; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F20R2_Offset, 14> FB14; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F20R2_Offset, 15> FB15; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F20R2_Offset, 16> FB16; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F20R2_Offset, 17> FB17; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F20R2_Offset, 18> FB18; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F20R2_Offset, 19> FB19; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F20R2_Offset, 20> FB20; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F20R2_Offset, 21> FB21; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F20R2_Offset, 22> FB22; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F20R2_Offset, 23> FB23; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F20R2_Offset, 24> FB24; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F20R2_Offset, 25> FB25; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F20R2_Offset, 26> FB26; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F20R2_Offset, 27> FB27; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F20R2_Offset, 28> FB28; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F20R2_Offset, 29> FB29; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F20R2_Offset, 30> FB30; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F20R2_Offset, 31> FB31; /* Filter bits */
    };

    class F21R1_T : public Register::Register<CAN_F21R1::f21r1_reg_type, BASE_ADDRESS + F21R1_Offset> {
    // Filter bank 21 register 1
    public:
        Register::Bit<BASE_ADDRESS + F21R1_Offset, 0> FB0; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F21R1_Offset, 1> FB1; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F21R1_Offset, 2> FB2; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F21R1_Offset, 3> FB3; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F21R1_Offset, 4> FB4; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F21R1_Offset, 5> FB5; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F21R1_Offset, 6> FB6; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F21R1_Offset, 7> FB7; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F21R1_Offset, 8> FB8; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F21R1_Offset, 9> FB9; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F21R1_Offset, 10> FB10; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F21R1_Offset, 11> FB11; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F21R1_Offset, 12> FB12; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F21R1_Offset, 13> FB13; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F21R1_Offset, 14> FB14; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F21R1_Offset, 15> FB15; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F21R1_Offset, 16> FB16; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F21R1_Offset, 17> FB17; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F21R1_Offset, 18> FB18; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F21R1_Offset, 19> FB19; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F21R1_Offset, 20> FB20; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F21R1_Offset, 21> FB21; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F21R1_Offset, 22> FB22; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F21R1_Offset, 23> FB23; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F21R1_Offset, 24> FB24; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F21R1_Offset, 25> FB25; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F21R1_Offset, 26> FB26; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F21R1_Offset, 27> FB27; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F21R1_Offset, 28> FB28; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F21R1_Offset, 29> FB29; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F21R1_Offset, 30> FB30; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F21R1_Offset, 31> FB31; /* Filter bits */
    };

    class F21R2_T : public Register::Register<CAN_F21R2::f21r2_reg_type, BASE_ADDRESS + F21R2_Offset> {
    // Filter bank 21 register 2
    public:
        Register::Bit<BASE_ADDRESS + F21R2_Offset, 0> FB0; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F21R2_Offset, 1> FB1; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F21R2_Offset, 2> FB2; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F21R2_Offset, 3> FB3; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F21R2_Offset, 4> FB4; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F21R2_Offset, 5> FB5; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F21R2_Offset, 6> FB6; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F21R2_Offset, 7> FB7; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F21R2_Offset, 8> FB8; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F21R2_Offset, 9> FB9; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F21R2_Offset, 10> FB10; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F21R2_Offset, 11> FB11; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F21R2_Offset, 12> FB12; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F21R2_Offset, 13> FB13; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F21R2_Offset, 14> FB14; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F21R2_Offset, 15> FB15; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F21R2_Offset, 16> FB16; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F21R2_Offset, 17> FB17; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F21R2_Offset, 18> FB18; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F21R2_Offset, 19> FB19; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F21R2_Offset, 20> FB20; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F21R2_Offset, 21> FB21; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F21R2_Offset, 22> FB22; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F21R2_Offset, 23> FB23; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F21R2_Offset, 24> FB24; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F21R2_Offset, 25> FB25; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F21R2_Offset, 26> FB26; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F21R2_Offset, 27> FB27; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F21R2_Offset, 28> FB28; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F21R2_Offset, 29> FB29; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F21R2_Offset, 30> FB30; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F21R2_Offset, 31> FB31; /* Filter bits */
    };

    class F22R1_T : public Register::Register<CAN_F22R1::f22r1_reg_type, BASE_ADDRESS + F22R1_Offset> {
    // Filter bank 22 register 1
    public:
        Register::Bit<BASE_ADDRESS + F22R1_Offset, 0> FB0; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F22R1_Offset, 1> FB1; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F22R1_Offset, 2> FB2; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F22R1_Offset, 3> FB3; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F22R1_Offset, 4> FB4; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F22R1_Offset, 5> FB5; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F22R1_Offset, 6> FB6; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F22R1_Offset, 7> FB7; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F22R1_Offset, 8> FB8; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F22R1_Offset, 9> FB9; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F22R1_Offset, 10> FB10; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F22R1_Offset, 11> FB11; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F22R1_Offset, 12> FB12; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F22R1_Offset, 13> FB13; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F22R1_Offset, 14> FB14; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F22R1_Offset, 15> FB15; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F22R1_Offset, 16> FB16; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F22R1_Offset, 17> FB17; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F22R1_Offset, 18> FB18; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F22R1_Offset, 19> FB19; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F22R1_Offset, 20> FB20; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F22R1_Offset, 21> FB21; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F22R1_Offset, 22> FB22; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F22R1_Offset, 23> FB23; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F22R1_Offset, 24> FB24; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F22R1_Offset, 25> FB25; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F22R1_Offset, 26> FB26; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F22R1_Offset, 27> FB27; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F22R1_Offset, 28> FB28; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F22R1_Offset, 29> FB29; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F22R1_Offset, 30> FB30; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F22R1_Offset, 31> FB31; /* Filter bits */
    };

    class F22R2_T : public Register::Register<CAN_F22R2::f22r2_reg_type, BASE_ADDRESS + F22R2_Offset> {
    // Filter bank 22 register 2
    public:
        Register::Bit<BASE_ADDRESS + F22R2_Offset, 0> FB0; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F22R2_Offset, 1> FB1; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F22R2_Offset, 2> FB2; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F22R2_Offset, 3> FB3; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F22R2_Offset, 4> FB4; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F22R2_Offset, 5> FB5; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F22R2_Offset, 6> FB6; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F22R2_Offset, 7> FB7; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F22R2_Offset, 8> FB8; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F22R2_Offset, 9> FB9; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F22R2_Offset, 10> FB10; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F22R2_Offset, 11> FB11; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F22R2_Offset, 12> FB12; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F22R2_Offset, 13> FB13; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F22R2_Offset, 14> FB14; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F22R2_Offset, 15> FB15; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F22R2_Offset, 16> FB16; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F22R2_Offset, 17> FB17; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F22R2_Offset, 18> FB18; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F22R2_Offset, 19> FB19; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F22R2_Offset, 20> FB20; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F22R2_Offset, 21> FB21; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F22R2_Offset, 22> FB22; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F22R2_Offset, 23> FB23; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F22R2_Offset, 24> FB24; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F22R2_Offset, 25> FB25; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F22R2_Offset, 26> FB26; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F22R2_Offset, 27> FB27; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F22R2_Offset, 28> FB28; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F22R2_Offset, 29> FB29; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F22R2_Offset, 30> FB30; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F22R2_Offset, 31> FB31; /* Filter bits */
    };

    class F23R1_T : public Register::Register<CAN_F23R1::f23r1_reg_type, BASE_ADDRESS + F23R1_Offset> {
    // Filter bank 23 register 1
    public:
        Register::Bit<BASE_ADDRESS + F23R1_Offset, 0> FB0; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F23R1_Offset, 1> FB1; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F23R1_Offset, 2> FB2; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F23R1_Offset, 3> FB3; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F23R1_Offset, 4> FB4; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F23R1_Offset, 5> FB5; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F23R1_Offset, 6> FB6; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F23R1_Offset, 7> FB7; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F23R1_Offset, 8> FB8; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F23R1_Offset, 9> FB9; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F23R1_Offset, 10> FB10; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F23R1_Offset, 11> FB11; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F23R1_Offset, 12> FB12; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F23R1_Offset, 13> FB13; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F23R1_Offset, 14> FB14; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F23R1_Offset, 15> FB15; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F23R1_Offset, 16> FB16; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F23R1_Offset, 17> FB17; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F23R1_Offset, 18> FB18; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F23R1_Offset, 19> FB19; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F23R1_Offset, 20> FB20; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F23R1_Offset, 21> FB21; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F23R1_Offset, 22> FB22; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F23R1_Offset, 23> FB23; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F23R1_Offset, 24> FB24; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F23R1_Offset, 25> FB25; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F23R1_Offset, 26> FB26; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F23R1_Offset, 27> FB27; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F23R1_Offset, 28> FB28; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F23R1_Offset, 29> FB29; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F23R1_Offset, 30> FB30; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F23R1_Offset, 31> FB31; /* Filter bits */
    };

    class F23R2_T : public Register::Register<CAN_F23R2::f23r2_reg_type, BASE_ADDRESS + F23R2_Offset> {
    // Filter bank 23 register 2
    public:
        Register::Bit<BASE_ADDRESS + F23R2_Offset, 0> FB0; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F23R2_Offset, 1> FB1; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F23R2_Offset, 2> FB2; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F23R2_Offset, 3> FB3; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F23R2_Offset, 4> FB4; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F23R2_Offset, 5> FB5; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F23R2_Offset, 6> FB6; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F23R2_Offset, 7> FB7; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F23R2_Offset, 8> FB8; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F23R2_Offset, 9> FB9; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F23R2_Offset, 10> FB10; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F23R2_Offset, 11> FB11; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F23R2_Offset, 12> FB12; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F23R2_Offset, 13> FB13; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F23R2_Offset, 14> FB14; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F23R2_Offset, 15> FB15; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F23R2_Offset, 16> FB16; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F23R2_Offset, 17> FB17; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F23R2_Offset, 18> FB18; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F23R2_Offset, 19> FB19; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F23R2_Offset, 20> FB20; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F23R2_Offset, 21> FB21; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F23R2_Offset, 22> FB22; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F23R2_Offset, 23> FB23; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F23R2_Offset, 24> FB24; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F23R2_Offset, 25> FB25; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F23R2_Offset, 26> FB26; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F23R2_Offset, 27> FB27; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F23R2_Offset, 28> FB28; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F23R2_Offset, 29> FB29; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F23R2_Offset, 30> FB30; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F23R2_Offset, 31> FB31; /* Filter bits */
    };

    class F24R1_T : public Register::Register<CAN_F24R1::f24r1_reg_type, BASE_ADDRESS + F24R1_Offset> {
    // Filter bank 24 register 1
    public:
        Register::Bit<BASE_ADDRESS + F24R1_Offset, 0> FB0; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F24R1_Offset, 1> FB1; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F24R1_Offset, 2> FB2; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F24R1_Offset, 3> FB3; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F24R1_Offset, 4> FB4; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F24R1_Offset, 5> FB5; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F24R1_Offset, 6> FB6; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F24R1_Offset, 7> FB7; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F24R1_Offset, 8> FB8; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F24R1_Offset, 9> FB9; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F24R1_Offset, 10> FB10; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F24R1_Offset, 11> FB11; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F24R1_Offset, 12> FB12; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F24R1_Offset, 13> FB13; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F24R1_Offset, 14> FB14; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F24R1_Offset, 15> FB15; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F24R1_Offset, 16> FB16; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F24R1_Offset, 17> FB17; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F24R1_Offset, 18> FB18; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F24R1_Offset, 19> FB19; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F24R1_Offset, 20> FB20; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F24R1_Offset, 21> FB21; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F24R1_Offset, 22> FB22; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F24R1_Offset, 23> FB23; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F24R1_Offset, 24> FB24; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F24R1_Offset, 25> FB25; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F24R1_Offset, 26> FB26; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F24R1_Offset, 27> FB27; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F24R1_Offset, 28> FB28; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F24R1_Offset, 29> FB29; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F24R1_Offset, 30> FB30; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F24R1_Offset, 31> FB31; /* Filter bits */
    };

    class F24R2_T : public Register::Register<CAN_F24R2::f24r2_reg_type, BASE_ADDRESS + F24R2_Offset> {
    // Filter bank 24 register 2
    public:
        Register::Bit<BASE_ADDRESS + F24R2_Offset, 0> FB0; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F24R2_Offset, 1> FB1; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F24R2_Offset, 2> FB2; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F24R2_Offset, 3> FB3; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F24R2_Offset, 4> FB4; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F24R2_Offset, 5> FB5; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F24R2_Offset, 6> FB6; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F24R2_Offset, 7> FB7; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F24R2_Offset, 8> FB8; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F24R2_Offset, 9> FB9; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F24R2_Offset, 10> FB10; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F24R2_Offset, 11> FB11; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F24R2_Offset, 12> FB12; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F24R2_Offset, 13> FB13; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F24R2_Offset, 14> FB14; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F24R2_Offset, 15> FB15; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F24R2_Offset, 16> FB16; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F24R2_Offset, 17> FB17; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F24R2_Offset, 18> FB18; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F24R2_Offset, 19> FB19; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F24R2_Offset, 20> FB20; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F24R2_Offset, 21> FB21; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F24R2_Offset, 22> FB22; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F24R2_Offset, 23> FB23; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F24R2_Offset, 24> FB24; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F24R2_Offset, 25> FB25; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F24R2_Offset, 26> FB26; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F24R2_Offset, 27> FB27; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F24R2_Offset, 28> FB28; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F24R2_Offset, 29> FB29; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F24R2_Offset, 30> FB30; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F24R2_Offset, 31> FB31; /* Filter bits */
    };

    class F25R1_T : public Register::Register<CAN_F25R1::f25r1_reg_type, BASE_ADDRESS + F25R1_Offset> {
    // Filter bank 25 register 1
    public:
        Register::Bit<BASE_ADDRESS + F25R1_Offset, 0> FB0; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F25R1_Offset, 1> FB1; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F25R1_Offset, 2> FB2; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F25R1_Offset, 3> FB3; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F25R1_Offset, 4> FB4; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F25R1_Offset, 5> FB5; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F25R1_Offset, 6> FB6; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F25R1_Offset, 7> FB7; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F25R1_Offset, 8> FB8; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F25R1_Offset, 9> FB9; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F25R1_Offset, 10> FB10; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F25R1_Offset, 11> FB11; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F25R1_Offset, 12> FB12; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F25R1_Offset, 13> FB13; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F25R1_Offset, 14> FB14; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F25R1_Offset, 15> FB15; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F25R1_Offset, 16> FB16; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F25R1_Offset, 17> FB17; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F25R1_Offset, 18> FB18; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F25R1_Offset, 19> FB19; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F25R1_Offset, 20> FB20; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F25R1_Offset, 21> FB21; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F25R1_Offset, 22> FB22; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F25R1_Offset, 23> FB23; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F25R1_Offset, 24> FB24; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F25R1_Offset, 25> FB25; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F25R1_Offset, 26> FB26; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F25R1_Offset, 27> FB27; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F25R1_Offset, 28> FB28; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F25R1_Offset, 29> FB29; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F25R1_Offset, 30> FB30; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F25R1_Offset, 31> FB31; /* Filter bits */
    };

    class F25R2_T : public Register::Register<CAN_F25R2::f25r2_reg_type, BASE_ADDRESS + F25R2_Offset> {
    // Filter bank 25 register 2
    public:
        Register::Bit<BASE_ADDRESS + F25R2_Offset, 0> FB0; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F25R2_Offset, 1> FB1; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F25R2_Offset, 2> FB2; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F25R2_Offset, 3> FB3; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F25R2_Offset, 4> FB4; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F25R2_Offset, 5> FB5; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F25R2_Offset, 6> FB6; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F25R2_Offset, 7> FB7; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F25R2_Offset, 8> FB8; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F25R2_Offset, 9> FB9; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F25R2_Offset, 10> FB10; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F25R2_Offset, 11> FB11; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F25R2_Offset, 12> FB12; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F25R2_Offset, 13> FB13; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F25R2_Offset, 14> FB14; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F25R2_Offset, 15> FB15; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F25R2_Offset, 16> FB16; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F25R2_Offset, 17> FB17; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F25R2_Offset, 18> FB18; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F25R2_Offset, 19> FB19; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F25R2_Offset, 20> FB20; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F25R2_Offset, 21> FB21; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F25R2_Offset, 22> FB22; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F25R2_Offset, 23> FB23; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F25R2_Offset, 24> FB24; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F25R2_Offset, 25> FB25; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F25R2_Offset, 26> FB26; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F25R2_Offset, 27> FB27; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F25R2_Offset, 28> FB28; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F25R2_Offset, 29> FB29; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F25R2_Offset, 30> FB30; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F25R2_Offset, 31> FB31; /* Filter bits */
    };

    class F26R1_T : public Register::Register<CAN_F26R1::f26r1_reg_type, BASE_ADDRESS + F26R1_Offset> {
    // Filter bank 26 register 1
    public:
        Register::Bit<BASE_ADDRESS + F26R1_Offset, 0> FB0; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F26R1_Offset, 1> FB1; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F26R1_Offset, 2> FB2; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F26R1_Offset, 3> FB3; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F26R1_Offset, 4> FB4; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F26R1_Offset, 5> FB5; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F26R1_Offset, 6> FB6; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F26R1_Offset, 7> FB7; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F26R1_Offset, 8> FB8; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F26R1_Offset, 9> FB9; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F26R1_Offset, 10> FB10; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F26R1_Offset, 11> FB11; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F26R1_Offset, 12> FB12; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F26R1_Offset, 13> FB13; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F26R1_Offset, 14> FB14; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F26R1_Offset, 15> FB15; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F26R1_Offset, 16> FB16; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F26R1_Offset, 17> FB17; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F26R1_Offset, 18> FB18; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F26R1_Offset, 19> FB19; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F26R1_Offset, 20> FB20; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F26R1_Offset, 21> FB21; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F26R1_Offset, 22> FB22; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F26R1_Offset, 23> FB23; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F26R1_Offset, 24> FB24; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F26R1_Offset, 25> FB25; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F26R1_Offset, 26> FB26; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F26R1_Offset, 27> FB27; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F26R1_Offset, 28> FB28; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F26R1_Offset, 29> FB29; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F26R1_Offset, 30> FB30; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F26R1_Offset, 31> FB31; /* Filter bits */
    };

    class F26R2_T : public Register::Register<CAN_F26R2::f26r2_reg_type, BASE_ADDRESS + F26R2_Offset> {
    // Filter bank 26 register 2
    public:
        Register::Bit<BASE_ADDRESS + F26R2_Offset, 0> FB0; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F26R2_Offset, 1> FB1; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F26R2_Offset, 2> FB2; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F26R2_Offset, 3> FB3; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F26R2_Offset, 4> FB4; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F26R2_Offset, 5> FB5; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F26R2_Offset, 6> FB6; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F26R2_Offset, 7> FB7; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F26R2_Offset, 8> FB8; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F26R2_Offset, 9> FB9; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F26R2_Offset, 10> FB10; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F26R2_Offset, 11> FB11; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F26R2_Offset, 12> FB12; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F26R2_Offset, 13> FB13; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F26R2_Offset, 14> FB14; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F26R2_Offset, 15> FB15; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F26R2_Offset, 16> FB16; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F26R2_Offset, 17> FB17; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F26R2_Offset, 18> FB18; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F26R2_Offset, 19> FB19; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F26R2_Offset, 20> FB20; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F26R2_Offset, 21> FB21; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F26R2_Offset, 22> FB22; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F26R2_Offset, 23> FB23; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F26R2_Offset, 24> FB24; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F26R2_Offset, 25> FB25; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F26R2_Offset, 26> FB26; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F26R2_Offset, 27> FB27; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F26R2_Offset, 28> FB28; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F26R2_Offset, 29> FB29; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F26R2_Offset, 30> FB30; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F26R2_Offset, 31> FB31; /* Filter bits */
    };

    class F27R1_T : public Register::Register<CAN_F27R1::f27r1_reg_type, BASE_ADDRESS + F27R1_Offset> {
    // Filter bank 27 register 1
    public:
        Register::Bit<BASE_ADDRESS + F27R1_Offset, 0> FB0; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F27R1_Offset, 1> FB1; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F27R1_Offset, 2> FB2; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F27R1_Offset, 3> FB3; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F27R1_Offset, 4> FB4; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F27R1_Offset, 5> FB5; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F27R1_Offset, 6> FB6; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F27R1_Offset, 7> FB7; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F27R1_Offset, 8> FB8; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F27R1_Offset, 9> FB9; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F27R1_Offset, 10> FB10; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F27R1_Offset, 11> FB11; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F27R1_Offset, 12> FB12; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F27R1_Offset, 13> FB13; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F27R1_Offset, 14> FB14; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F27R1_Offset, 15> FB15; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F27R1_Offset, 16> FB16; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F27R1_Offset, 17> FB17; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F27R1_Offset, 18> FB18; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F27R1_Offset, 19> FB19; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F27R1_Offset, 20> FB20; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F27R1_Offset, 21> FB21; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F27R1_Offset, 22> FB22; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F27R1_Offset, 23> FB23; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F27R1_Offset, 24> FB24; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F27R1_Offset, 25> FB25; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F27R1_Offset, 26> FB26; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F27R1_Offset, 27> FB27; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F27R1_Offset, 28> FB28; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F27R1_Offset, 29> FB29; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F27R1_Offset, 30> FB30; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F27R1_Offset, 31> FB31; /* Filter bits */
    };

    class F27R2_T : public Register::Register<CAN_F27R2::f27r2_reg_type, BASE_ADDRESS + F27R2_Offset> {
    // Filter bank 27 register 2
    public:
        Register::Bit<BASE_ADDRESS + F27R2_Offset, 0> FB0; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F27R2_Offset, 1> FB1; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F27R2_Offset, 2> FB2; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F27R2_Offset, 3> FB3; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F27R2_Offset, 4> FB4; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F27R2_Offset, 5> FB5; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F27R2_Offset, 6> FB6; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F27R2_Offset, 7> FB7; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F27R2_Offset, 8> FB8; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F27R2_Offset, 9> FB9; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F27R2_Offset, 10> FB10; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F27R2_Offset, 11> FB11; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F27R2_Offset, 12> FB12; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F27R2_Offset, 13> FB13; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F27R2_Offset, 14> FB14; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F27R2_Offset, 15> FB15; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F27R2_Offset, 16> FB16; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F27R2_Offset, 17> FB17; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F27R2_Offset, 18> FB18; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F27R2_Offset, 19> FB19; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F27R2_Offset, 20> FB20; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F27R2_Offset, 21> FB21; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F27R2_Offset, 22> FB22; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F27R2_Offset, 23> FB23; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F27R2_Offset, 24> FB24; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F27R2_Offset, 25> FB25; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F27R2_Offset, 26> FB26; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F27R2_Offset, 27> FB27; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F27R2_Offset, 28> FB28; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F27R2_Offset, 29> FB29; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F27R2_Offset, 30> FB30; /* Filter bits */
        Register::Bit<BASE_ADDRESS + F27R2_Offset, 31> FB31; /* Filter bits */
    };

    MCR_T MCR;
    MSR_T MSR;
    TSR_T TSR;
    RF0R_T RF0R;
    RF1R_T RF1R;
    IER_T IER;
    ESR_T ESR;
    BTR_T BTR;
    TI0R_T TI0R;
    TDT0R_T TDT0R;
    TDL0R_T TDL0R;
    TDH0R_T TDH0R;
    TI1R_T TI1R;
    TDT1R_T TDT1R;
    TDL1R_T TDL1R;
    TDH1R_T TDH1R;
    TI2R_T TI2R;
    TDT2R_T TDT2R;
    TDL2R_T TDL2R;
    TDH2R_T TDH2R;
    RI0R_T RI0R;
    RDT0R_T RDT0R;
    RDL0R_T RDL0R;
    RDH0R_T RDH0R;
    RI1R_T RI1R;
    RDT1R_T RDT1R;
    RDL1R_T RDL1R;
    RDH1R_T RDH1R;
    FMR_T FMR;
    FM1R_T FM1R;
    FS1R_T FS1R;
    FFA1R_T FFA1R;
    FA1R_T FA1R;
    F0R1_T F0R1;
    F0R2_T F0R2;
    F1R1_T F1R1;
    F1R2_T F1R2;
    F2R1_T F2R1;
    F2R2_T F2R2;
    F3R1_T F3R1;
    F3R2_T F3R2;
    F4R1_T F4R1;
    F4R2_T F4R2;
    F5R1_T F5R1;
    F5R2_T F5R2;
    F6R1_T F6R1;
    F6R2_T F6R2;
    F7R1_T F7R1;
    F7R2_T F7R2;
    F8R1_T F8R1;
    F8R2_T F8R2;
    F9R1_T F9R1;
    F9R2_T F9R2;
    F10R1_T F10R1;
    F10R2_T F10R2;
    F11R1_T F11R1;
    F11R2_T F11R2;
    F12R1_T F12R1;
    F12R2_T F12R2;
    F13R1_T F13R1;
    F13R2_T F13R2;
    F14R1_T F14R1;
    F14R2_T F14R2;
    F15R1_T F15R1;
    F15R2_T F15R2;
    F16R1_T F16R1;
    F16R2_T F16R2;
    F17R1_T F17R1;
    F17R2_T F17R2;
    F18R1_T F18R1;
    F18R2_T F18R2;
    F19R1_T F19R1;
    F19R2_T F19R2;
    F20R1_T F20R1;
    F20R2_T F20R2;
    F21R1_T F21R1;
    F21R2_T F21R2;
    F22R1_T F22R1;
    F22R2_T F22R2;
    F23R1_T F23R1;
    F23R2_T F23R2;
    F24R1_T F24R1;
    F24R2_T F24R2;
    F25R1_T F25R1;
    F25R2_T F25R2;
    F26R1_T F26R1;
    F26R2_T F26R2;
    F27R1_T F27R1;
    F27R2_T F27R2;
};

} // namespace STM32LIB

#endif // STM32F0X1_CAN_HPP_

