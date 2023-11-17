#ifndef STM32F0X1_RTC_HPP_
#define STM32F0X1_RTC_HPP_
#pragma once

#include <cstdint>
#include "Register.hpp"

/* Real-time clock */
namespace STM32LIB { 

/* Overwritable types for each of the bitfields.
 * Defaults to uint32_t, but feel free to redefine with your
 * own custom enum class later. */
using TR_HT_T = uint32_t;
using TR_HU_T = uint32_t;
using TR_MNT_T = uint32_t;
using TR_MNU_T = uint32_t;
using TR_ST_T = uint32_t;
using TR_SU_T = uint32_t;
using DR_YT_T = uint32_t;
using DR_YU_T = uint32_t;
using DR_WDU_T = uint32_t;
using DR_MU_T = uint32_t;
using DR_DT_T = uint32_t;
using DR_DU_T = uint32_t;
using CR_OSEL_T = uint32_t;
using PRER_PREDIV_A_T = uint32_t;
using PRER_PREDIV_S_T = uint32_t;
using ALRMAR_DT_T = uint32_t;
using ALRMAR_DU_T = uint32_t;
using ALRMAR_HT_T = uint32_t;
using ALRMAR_HU_T = uint32_t;
using ALRMAR_MNT_T = uint32_t;
using ALRMAR_MNU_T = uint32_t;
using ALRMAR_ST_T = uint32_t;
using ALRMAR_SU_T = uint32_t;
using WPR_KEY_T = uint32_t;
using SSR_SS_T = uint32_t;
using SHIFTR_SUBFS_T = uint32_t;
using TSTR_HT_T = uint32_t;
using TSTR_HU_T = uint32_t;
using TSTR_MNT_T = uint32_t;
using TSTR_MNU_T = uint32_t;
using TSTR_ST_T = uint32_t;
using TSTR_SU_T = uint32_t;
using TSDR_WDU_T = uint32_t;
using TSDR_MU_T = uint32_t;
using TSDR_DT_T = uint32_t;
using TSDR_DU_T = uint32_t;
using TSSSR_SS_T = uint32_t;
using CALR_CALM_T = uint32_t;
using TAFCR_TAMP_PRCH_T = uint32_t;
using TAFCR_TAMPFLT_T = uint32_t;
using TAFCR_TAMPFREQ_T = uint32_t;
using ALRMASSR_MASKSS_T = uint32_t;
using ALRMASSR_SS_T = uint32_t;
using BKP0R_BKP_T = uint32_t;
using BKP1R_BKP_T = uint32_t;
using BKP2R_BKP_T = uint32_t;
using BKP3R_BKP_T = uint32_t;
using BKP4R_BKP_T = uint32_t;

namespace RTC_TR {

    enum class tr_reg_type {};

    template<bool tf>
    using PM = Register::Combo_Bit<tr_reg_type, 22, tf>;

    template<TR_HT_T val>
    using HT = Register::Combo_Bitfield<tr_reg_type, 20, 2, TR_HT_T, val>;

    template<TR_HU_T val>
    using HU = Register::Combo_Bitfield<tr_reg_type, 16, 4, TR_HU_T, val>;

    template<TR_MNT_T val>
    using MNT = Register::Combo_Bitfield<tr_reg_type, 12, 3, TR_MNT_T, val>;

    template<TR_MNU_T val>
    using MNU = Register::Combo_Bitfield<tr_reg_type, 8, 4, TR_MNU_T, val>;

    template<TR_ST_T val>
    using ST = Register::Combo_Bitfield<tr_reg_type, 4, 3, TR_ST_T, val>;

    template<TR_SU_T val>
    using SU = Register::Combo_Bitfield<tr_reg_type, 0, 4, TR_SU_T, val>;

} // RTC_TR
namespace RTC_DR {

    enum class dr_reg_type {};

    template<DR_YT_T val>
    using YT = Register::Combo_Bitfield<dr_reg_type, 20, 4, DR_YT_T, val>;

    template<DR_YU_T val>
    using YU = Register::Combo_Bitfield<dr_reg_type, 16, 4, DR_YU_T, val>;

    template<DR_WDU_T val>
    using WDU = Register::Combo_Bitfield<dr_reg_type, 13, 3, DR_WDU_T, val>;

    template<bool tf>
    using MT = Register::Combo_Bit<dr_reg_type, 12, tf>;

    template<DR_MU_T val>
    using MU = Register::Combo_Bitfield<dr_reg_type, 8, 4, DR_MU_T, val>;

    template<DR_DT_T val>
    using DT = Register::Combo_Bitfield<dr_reg_type, 4, 2, DR_DT_T, val>;

    template<DR_DU_T val>
    using DU = Register::Combo_Bitfield<dr_reg_type, 0, 4, DR_DU_T, val>;

} // RTC_DR
namespace RTC_CR {

    enum class cr_reg_type {};

    template<bool tf>
    using TSEDGE = Register::Combo_Bit<cr_reg_type, 3, tf>;

    template<bool tf>
    using REFCKON = Register::Combo_Bit<cr_reg_type, 4, tf>;

    template<bool tf>
    using BYPSHAD = Register::Combo_Bit<cr_reg_type, 5, tf>;

    template<bool tf>
    using FMT = Register::Combo_Bit<cr_reg_type, 6, tf>;

    template<bool tf>
    using ALRAE = Register::Combo_Bit<cr_reg_type, 8, tf>;

    template<bool tf>
    using TSE = Register::Combo_Bit<cr_reg_type, 11, tf>;

    template<bool tf>
    using ALRAIE = Register::Combo_Bit<cr_reg_type, 12, tf>;

    template<bool tf>
    using TSIE = Register::Combo_Bit<cr_reg_type, 15, tf>;

    template<bool tf>
    using ADD1H = Register::Combo_Bit<cr_reg_type, 16, tf>;

    template<bool tf>
    using SUB1H = Register::Combo_Bit<cr_reg_type, 17, tf>;

    template<bool tf>
    using BKP = Register::Combo_Bit<cr_reg_type, 18, tf>;

    template<bool tf>
    using COSEL = Register::Combo_Bit<cr_reg_type, 19, tf>;

    template<bool tf>
    using POL = Register::Combo_Bit<cr_reg_type, 20, tf>;

    template<CR_OSEL_T val>
    using OSEL = Register::Combo_Bitfield<cr_reg_type, 21, 2, CR_OSEL_T, val>;

    template<bool tf>
    using COE = Register::Combo_Bit<cr_reg_type, 23, tf>;

} // RTC_CR
namespace RTC_ISR {

    enum class isr_reg_type {};

    template<bool tf>
    using ALRAWF = Register::Combo_Bit<isr_reg_type, 0, tf>;

    template<bool tf>
    using SHPF = Register::Combo_Bit<isr_reg_type, 3, tf>;

    template<bool tf>
    using INITS = Register::Combo_Bit<isr_reg_type, 4, tf>;

    template<bool tf>
    using RSF = Register::Combo_Bit<isr_reg_type, 5, tf>;

    template<bool tf>
    using INITF = Register::Combo_Bit<isr_reg_type, 6, tf>;

    template<bool tf>
    using INIT = Register::Combo_Bit<isr_reg_type, 7, tf>;

    template<bool tf>
    using ALRAF = Register::Combo_Bit<isr_reg_type, 8, tf>;

    template<bool tf>
    using TSF = Register::Combo_Bit<isr_reg_type, 11, tf>;

    template<bool tf>
    using TSOVF = Register::Combo_Bit<isr_reg_type, 12, tf>;

    template<bool tf>
    using TAMP1F = Register::Combo_Bit<isr_reg_type, 13, tf>;

    template<bool tf>
    using TAMP2F = Register::Combo_Bit<isr_reg_type, 14, tf>;

    template<bool tf>
    using RECALPF = Register::Combo_Bit<isr_reg_type, 16, tf>;

} // RTC_ISR
namespace RTC_PRER {

    enum class prer_reg_type {};

    template<PRER_PREDIV_A_T val>
    using PREDIV_A = Register::Combo_Bitfield<prer_reg_type, 16, 7, PRER_PREDIV_A_T, val>;

    template<PRER_PREDIV_S_T val>
    using PREDIV_S = Register::Combo_Bitfield<prer_reg_type, 0, 15, PRER_PREDIV_S_T, val>;

} // RTC_PRER
namespace RTC_ALRMAR {

    enum class alrmar_reg_type {};

    template<bool tf>
    using MSK4 = Register::Combo_Bit<alrmar_reg_type, 31, tf>;

    template<bool tf>
    using WDSEL = Register::Combo_Bit<alrmar_reg_type, 30, tf>;

    template<ALRMAR_DT_T val>
    using DT = Register::Combo_Bitfield<alrmar_reg_type, 28, 2, ALRMAR_DT_T, val>;

    template<ALRMAR_DU_T val>
    using DU = Register::Combo_Bitfield<alrmar_reg_type, 24, 4, ALRMAR_DU_T, val>;

    template<bool tf>
    using MSK3 = Register::Combo_Bit<alrmar_reg_type, 23, tf>;

    template<bool tf>
    using PM = Register::Combo_Bit<alrmar_reg_type, 22, tf>;

    template<ALRMAR_HT_T val>
    using HT = Register::Combo_Bitfield<alrmar_reg_type, 20, 2, ALRMAR_HT_T, val>;

    template<ALRMAR_HU_T val>
    using HU = Register::Combo_Bitfield<alrmar_reg_type, 16, 4, ALRMAR_HU_T, val>;

    template<bool tf>
    using MSK2 = Register::Combo_Bit<alrmar_reg_type, 15, tf>;

    template<ALRMAR_MNT_T val>
    using MNT = Register::Combo_Bitfield<alrmar_reg_type, 12, 3, ALRMAR_MNT_T, val>;

    template<ALRMAR_MNU_T val>
    using MNU = Register::Combo_Bitfield<alrmar_reg_type, 8, 4, ALRMAR_MNU_T, val>;

    template<bool tf>
    using MSK1 = Register::Combo_Bit<alrmar_reg_type, 7, tf>;

    template<ALRMAR_ST_T val>
    using ST = Register::Combo_Bitfield<alrmar_reg_type, 4, 3, ALRMAR_ST_T, val>;

    template<ALRMAR_SU_T val>
    using SU = Register::Combo_Bitfield<alrmar_reg_type, 0, 4, ALRMAR_SU_T, val>;

} // RTC_ALRMAR
namespace RTC_WPR {

    enum class wpr_reg_type {};

    template<WPR_KEY_T val>
    using KEY = Register::Combo_Bitfield<wpr_reg_type, 0, 8, WPR_KEY_T, val>;

} // RTC_WPR
namespace RTC_SSR {

    enum class ssr_reg_type {};

    template<SSR_SS_T val>
    using SS = Register::Combo_Bitfield<ssr_reg_type, 0, 16, SSR_SS_T, val>;

} // RTC_SSR
namespace RTC_SHIFTR {

    enum class shiftr_reg_type {};

    template<bool tf>
    using ADD1S = Register::Combo_Bit<shiftr_reg_type, 31, tf>;

    template<SHIFTR_SUBFS_T val>
    using SUBFS = Register::Combo_Bitfield<shiftr_reg_type, 0, 15, SHIFTR_SUBFS_T, val>;

} // RTC_SHIFTR
namespace RTC_TSTR {

    enum class tstr_reg_type {};

    template<bool tf>
    using PM = Register::Combo_Bit<tstr_reg_type, 22, tf>;

    template<TSTR_HT_T val>
    using HT = Register::Combo_Bitfield<tstr_reg_type, 20, 2, TSTR_HT_T, val>;

    template<TSTR_HU_T val>
    using HU = Register::Combo_Bitfield<tstr_reg_type, 16, 4, TSTR_HU_T, val>;

    template<TSTR_MNT_T val>
    using MNT = Register::Combo_Bitfield<tstr_reg_type, 12, 3, TSTR_MNT_T, val>;

    template<TSTR_MNU_T val>
    using MNU = Register::Combo_Bitfield<tstr_reg_type, 8, 4, TSTR_MNU_T, val>;

    template<TSTR_ST_T val>
    using ST = Register::Combo_Bitfield<tstr_reg_type, 4, 3, TSTR_ST_T, val>;

    template<TSTR_SU_T val>
    using SU = Register::Combo_Bitfield<tstr_reg_type, 0, 4, TSTR_SU_T, val>;

} // RTC_TSTR
namespace RTC_TSDR {

    enum class tsdr_reg_type {};

    template<TSDR_WDU_T val>
    using WDU = Register::Combo_Bitfield<tsdr_reg_type, 13, 3, TSDR_WDU_T, val>;

    template<bool tf>
    using MT = Register::Combo_Bit<tsdr_reg_type, 12, tf>;

    template<TSDR_MU_T val>
    using MU = Register::Combo_Bitfield<tsdr_reg_type, 8, 4, TSDR_MU_T, val>;

    template<TSDR_DT_T val>
    using DT = Register::Combo_Bitfield<tsdr_reg_type, 4, 2, TSDR_DT_T, val>;

    template<TSDR_DU_T val>
    using DU = Register::Combo_Bitfield<tsdr_reg_type, 0, 4, TSDR_DU_T, val>;

} // RTC_TSDR
namespace RTC_TSSSR {

    enum class tsssr_reg_type {};

    template<TSSSR_SS_T val>
    using SS = Register::Combo_Bitfield<tsssr_reg_type, 0, 16, TSSSR_SS_T, val>;

} // RTC_TSSSR
namespace RTC_CALR {

    enum class calr_reg_type {};

    template<bool tf>
    using CALP = Register::Combo_Bit<calr_reg_type, 15, tf>;

    template<bool tf>
    using CALW8 = Register::Combo_Bit<calr_reg_type, 14, tf>;

    template<bool tf>
    using CALW16 = Register::Combo_Bit<calr_reg_type, 13, tf>;

    template<CALR_CALM_T val>
    using CALM = Register::Combo_Bitfield<calr_reg_type, 0, 9, CALR_CALM_T, val>;

} // RTC_CALR
namespace RTC_TAFCR {

    enum class tafcr_reg_type {};

    template<bool tf>
    using PC15MODE = Register::Combo_Bit<tafcr_reg_type, 23, tf>;

    template<bool tf>
    using PC15VALUE = Register::Combo_Bit<tafcr_reg_type, 22, tf>;

    template<bool tf>
    using PC14MODE = Register::Combo_Bit<tafcr_reg_type, 21, tf>;

    template<bool tf>
    using PC14VALUE = Register::Combo_Bit<tafcr_reg_type, 20, tf>;

    template<bool tf>
    using PC13MODE = Register::Combo_Bit<tafcr_reg_type, 19, tf>;

    template<bool tf>
    using PC13VALUE = Register::Combo_Bit<tafcr_reg_type, 18, tf>;

    template<bool tf>
    using TAMP_PUDIS = Register::Combo_Bit<tafcr_reg_type, 15, tf>;

    template<TAFCR_TAMP_PRCH_T val>
    using TAMP_PRCH = Register::Combo_Bitfield<tafcr_reg_type, 13, 2, TAFCR_TAMP_PRCH_T, val>;

    template<TAFCR_TAMPFLT_T val>
    using TAMPFLT = Register::Combo_Bitfield<tafcr_reg_type, 11, 2, TAFCR_TAMPFLT_T, val>;

    template<TAFCR_TAMPFREQ_T val>
    using TAMPFREQ = Register::Combo_Bitfield<tafcr_reg_type, 8, 3, TAFCR_TAMPFREQ_T, val>;

    template<bool tf>
    using TAMPTS = Register::Combo_Bit<tafcr_reg_type, 7, tf>;

    template<bool tf>
    using TAMP2_TRG = Register::Combo_Bit<tafcr_reg_type, 4, tf>;

    template<bool tf>
    using TAMP2E = Register::Combo_Bit<tafcr_reg_type, 3, tf>;

    template<bool tf>
    using TAMPIE = Register::Combo_Bit<tafcr_reg_type, 2, tf>;

    template<bool tf>
    using TAMP1TRG = Register::Combo_Bit<tafcr_reg_type, 1, tf>;

    template<bool tf>
    using TAMP1E = Register::Combo_Bit<tafcr_reg_type, 0, tf>;

} // RTC_TAFCR
namespace RTC_ALRMASSR {

    enum class alrmassr_reg_type {};

    template<ALRMASSR_MASKSS_T val>
    using MASKSS = Register::Combo_Bitfield<alrmassr_reg_type, 24, 4, ALRMASSR_MASKSS_T, val>;

    template<ALRMASSR_SS_T val>
    using SS = Register::Combo_Bitfield<alrmassr_reg_type, 0, 15, ALRMASSR_SS_T, val>;

} // RTC_ALRMASSR
namespace RTC_BKP0R {

    enum class bkp0r_reg_type {};

    template<BKP0R_BKP_T val>
    using BKP = Register::Combo_Bitfield<bkp0r_reg_type, 0, 32, BKP0R_BKP_T, val>;

} // RTC_BKP0R
namespace RTC_BKP1R {

    enum class bkp1r_reg_type {};

    template<BKP1R_BKP_T val>
    using BKP = Register::Combo_Bitfield<bkp1r_reg_type, 0, 32, BKP1R_BKP_T, val>;

} // RTC_BKP1R
namespace RTC_BKP2R {

    enum class bkp2r_reg_type {};

    template<BKP2R_BKP_T val>
    using BKP = Register::Combo_Bitfield<bkp2r_reg_type, 0, 32, BKP2R_BKP_T, val>;

} // RTC_BKP2R
namespace RTC_BKP3R {

    enum class bkp3r_reg_type {};

    template<BKP3R_BKP_T val>
    using BKP = Register::Combo_Bitfield<bkp3r_reg_type, 0, 32, BKP3R_BKP_T, val>;

} // RTC_BKP3R
namespace RTC_BKP4R {

    enum class bkp4r_reg_type {};

    template<BKP4R_BKP_T val>
    using BKP = Register::Combo_Bitfield<bkp4r_reg_type, 0, 32, BKP4R_BKP_T, val>;

} // RTC_BKP4R
template<uint32_t BASE_ADDRESS>
class RTC {
public:
    static const uint32_t TR_Offset = 0x0000;
    static const uint32_t DR_Offset = 0x0004;
    static const uint32_t CR_Offset = 0x0008;
    static const uint32_t ISR_Offset = 0x000C;
    static const uint32_t PRER_Offset = 0x0010;
    static const uint32_t ALRMAR_Offset = 0x001C;
    static const uint32_t WPR_Offset = 0x0024;
    static const uint32_t SSR_Offset = 0x0028;
    static const uint32_t SHIFTR_Offset = 0x002C;
    static const uint32_t TSTR_Offset = 0x0030;
    static const uint32_t TSDR_Offset = 0x0034;
    static const uint32_t TSSSR_Offset = 0x0038;
    static const uint32_t CALR_Offset = 0x003C;
    static const uint32_t TAFCR_Offset = 0x0040;
    static const uint32_t ALRMASSR_Offset = 0x0044;
    static const uint32_t BKP0R_Offset = 0x0050;
    static const uint32_t BKP1R_Offset = 0x0054;
    static const uint32_t BKP2R_Offset = 0x0058;
    static const uint32_t BKP3R_Offset = 0x005C;
    static const uint32_t BKP4R_Offset = 0x0060;

    RTC() = default;
    RTC( const RTC& ) = delete;
    const RTC& operator=( const RTC& ) = delete;

    class TR_T : public Register::Register<RTC_TR::tr_reg_type, BASE_ADDRESS + TR_Offset> {
    // time register
    public:
        Register::Bit<BASE_ADDRESS + TR_Offset, 22> PM; /* AM/PM notation */
        Register::Bitfield<BASE_ADDRESS + TR_Offset, 20, 2, TR_HT_T> HT; /* Hour tens in BCD format */
        Register::Bitfield<BASE_ADDRESS + TR_Offset, 16, 4, TR_HU_T> HU; /* Hour units in BCD format */
        Register::Bitfield<BASE_ADDRESS + TR_Offset, 12, 3, TR_MNT_T> MNT; /* Minute tens in BCD format */
        Register::Bitfield<BASE_ADDRESS + TR_Offset, 8, 4, TR_MNU_T> MNU; /* Minute units in BCD format */
        Register::Bitfield<BASE_ADDRESS + TR_Offset, 4, 3, TR_ST_T> ST; /* Second tens in BCD format */
        Register::Bitfield<BASE_ADDRESS + TR_Offset, 0, 4, TR_SU_T> SU; /* Second units in BCD format */
    };

    class DR_T : public Register::Register<RTC_DR::dr_reg_type, BASE_ADDRESS + DR_Offset> {
    // date register
    public:
        Register::Bitfield<BASE_ADDRESS + DR_Offset, 20, 4, DR_YT_T> YT; /* Year tens in BCD format */
        Register::Bitfield<BASE_ADDRESS + DR_Offset, 16, 4, DR_YU_T> YU; /* Year units in BCD format */
        Register::Bitfield<BASE_ADDRESS + DR_Offset, 13, 3, DR_WDU_T> WDU; /* Week day units */
        Register::Bit<BASE_ADDRESS + DR_Offset, 12> MT; /* Month tens in BCD format */
        Register::Bitfield<BASE_ADDRESS + DR_Offset, 8, 4, DR_MU_T> MU; /* Month units in BCD format */
        Register::Bitfield<BASE_ADDRESS + DR_Offset, 4, 2, DR_DT_T> DT; /* Date tens in BCD format */
        Register::Bitfield<BASE_ADDRESS + DR_Offset, 0, 4, DR_DU_T> DU; /* Date units in BCD format */
    };

    class CR_T : public Register::Register<RTC_CR::cr_reg_type, BASE_ADDRESS + CR_Offset> {
    // control register
    public:
        Register::Bit<BASE_ADDRESS + CR_Offset, 3> TSEDGE; /* Time-stamp event active edge */
        Register::Bit<BASE_ADDRESS + CR_Offset, 4> REFCKON; /* RTC_REFIN reference clock detection enable (50 or 60 Hz) */
        Register::Bit<BASE_ADDRESS + CR_Offset, 5> BYPSHAD; /* Bypass the shadow registers */
        Register::Bit<BASE_ADDRESS + CR_Offset, 6> FMT; /* Hour format */
        Register::Bit<BASE_ADDRESS + CR_Offset, 8> ALRAE; /* Alarm A enable */
        Register::Bit<BASE_ADDRESS + CR_Offset, 11> TSE; /* timestamp enable */
        Register::Bit<BASE_ADDRESS + CR_Offset, 12> ALRAIE; /* Alarm A interrupt enable */
        Register::Bit<BASE_ADDRESS + CR_Offset, 15> TSIE; /* Time-stamp interrupt enable */
        Register::Bit<BASE_ADDRESS + CR_Offset, 16> ADD1H; /* Add 1 hour (summer time change) */
        Register::Bit<BASE_ADDRESS + CR_Offset, 17> SUB1H; /* Subtract 1 hour (winter time change) */
        Register::Bit<BASE_ADDRESS + CR_Offset, 18> BKP; /* Backup */
        Register::Bit<BASE_ADDRESS + CR_Offset, 19> COSEL; /* Calibration output selection */
        Register::Bit<BASE_ADDRESS + CR_Offset, 20> POL; /* Output polarity */
        Register::Bitfield<BASE_ADDRESS + CR_Offset, 21, 2, CR_OSEL_T> OSEL; /* Output selection */
        Register::Bit<BASE_ADDRESS + CR_Offset, 23> COE; /* Calibration output enable */
    };

    class ISR_T : public Register::Register<RTC_ISR::isr_reg_type, BASE_ADDRESS + ISR_Offset> {
    // initialization and status register
    public:
        Register::Bit<BASE_ADDRESS + ISR_Offset, 0> ALRAWF; /* Alarm A write flag */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 3> SHPF; /* Shift operation pending */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 4> INITS; /* Initialization status flag */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 5> RSF; /* Registers synchronization flag */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 6> INITF; /* Initialization flag */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 7> INIT; /* Initialization mode */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 8> ALRAF; /* Alarm A flag */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 11> TSF; /* Time-stamp flag */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 12> TSOVF; /* Time-stamp overflow flag */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 13> TAMP1F; /* RTC_TAMP1 detection flag */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 14> TAMP2F; /* RTC_TAMP2 detection flag */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 16> RECALPF; /* Recalibration pending Flag */
    };

    class PRER_T : public Register::Register<RTC_PRER::prer_reg_type, BASE_ADDRESS + PRER_Offset> {
    // prescaler register
    public:
        Register::Bitfield<BASE_ADDRESS + PRER_Offset, 16, 7, PRER_PREDIV_A_T> PREDIV_A; /* Asynchronous prescaler factor */
        Register::Bitfield<BASE_ADDRESS + PRER_Offset, 0, 15, PRER_PREDIV_S_T> PREDIV_S; /* Synchronous prescaler factor */
    };

    class ALRMAR_T : public Register::Register<RTC_ALRMAR::alrmar_reg_type, BASE_ADDRESS + ALRMAR_Offset> {
    // alarm A register
    public:
        Register::Bit<BASE_ADDRESS + ALRMAR_Offset, 31> MSK4; /* Alarm A date mask */
        Register::Bit<BASE_ADDRESS + ALRMAR_Offset, 30> WDSEL; /* Week day selection */
        Register::Bitfield<BASE_ADDRESS + ALRMAR_Offset, 28, 2, ALRMAR_DT_T> DT; /* Date tens in BCD format. */
        Register::Bitfield<BASE_ADDRESS + ALRMAR_Offset, 24, 4, ALRMAR_DU_T> DU; /* Date units or day in BCD format. */
        Register::Bit<BASE_ADDRESS + ALRMAR_Offset, 23> MSK3; /* Alarm A hours mask */
        Register::Bit<BASE_ADDRESS + ALRMAR_Offset, 22> PM; /* AM/PM notation */
        Register::Bitfield<BASE_ADDRESS + ALRMAR_Offset, 20, 2, ALRMAR_HT_T> HT; /* Hour tens in BCD format. */
        Register::Bitfield<BASE_ADDRESS + ALRMAR_Offset, 16, 4, ALRMAR_HU_T> HU; /* Hour units in BCD format. */
        Register::Bit<BASE_ADDRESS + ALRMAR_Offset, 15> MSK2; /* Alarm A minutes mask */
        Register::Bitfield<BASE_ADDRESS + ALRMAR_Offset, 12, 3, ALRMAR_MNT_T> MNT; /* Minute tens in BCD format. */
        Register::Bitfield<BASE_ADDRESS + ALRMAR_Offset, 8, 4, ALRMAR_MNU_T> MNU; /* Minute units in BCD format. */
        Register::Bit<BASE_ADDRESS + ALRMAR_Offset, 7> MSK1; /* Alarm A seconds mask */
        Register::Bitfield<BASE_ADDRESS + ALRMAR_Offset, 4, 3, ALRMAR_ST_T> ST; /* Second tens in BCD format. */
        Register::Bitfield<BASE_ADDRESS + ALRMAR_Offset, 0, 4, ALRMAR_SU_T> SU; /* Second units in BCD format. */
    };

    class WPR_T : public Register::Register<RTC_WPR::wpr_reg_type, BASE_ADDRESS + WPR_Offset> {
    // write protection register
    public:
        Register::Bitfield<BASE_ADDRESS + WPR_Offset, 0, 8, WPR_KEY_T> KEY; /* Write protection key */
    };

    class SSR_T : public Register::Register<RTC_SSR::ssr_reg_type, BASE_ADDRESS + SSR_Offset> {
    // sub second register
    public:
        Register::Bitfield<BASE_ADDRESS + SSR_Offset, 0, 16, SSR_SS_T> SS; /* Sub second value */
    };

    class SHIFTR_T : public Register::Register<RTC_SHIFTR::shiftr_reg_type, BASE_ADDRESS + SHIFTR_Offset> {
    // shift control register
    public:
        Register::Bit<BASE_ADDRESS + SHIFTR_Offset, 31> ADD1S; /* Add one second */
        Register::Bitfield<BASE_ADDRESS + SHIFTR_Offset, 0, 15, SHIFTR_SUBFS_T> SUBFS; /* Subtract a fraction of a second */
    };

    class TSTR_T : public Register::Register<RTC_TSTR::tstr_reg_type, BASE_ADDRESS + TSTR_Offset> {
    // timestamp time register
    public:
        Register::Bit<BASE_ADDRESS + TSTR_Offset, 22> PM; /* AM/PM notation */
        Register::Bitfield<BASE_ADDRESS + TSTR_Offset, 20, 2, TSTR_HT_T> HT; /* Hour tens in BCD format. */
        Register::Bitfield<BASE_ADDRESS + TSTR_Offset, 16, 4, TSTR_HU_T> HU; /* Hour units in BCD format. */
        Register::Bitfield<BASE_ADDRESS + TSTR_Offset, 12, 3, TSTR_MNT_T> MNT; /* Minute tens in BCD format. */
        Register::Bitfield<BASE_ADDRESS + TSTR_Offset, 8, 4, TSTR_MNU_T> MNU; /* Minute units in BCD format. */
        Register::Bitfield<BASE_ADDRESS + TSTR_Offset, 4, 3, TSTR_ST_T> ST; /* Second tens in BCD format. */
        Register::Bitfield<BASE_ADDRESS + TSTR_Offset, 0, 4, TSTR_SU_T> SU; /* Second units in BCD format. */
    };

    class TSDR_T : public Register::Register<RTC_TSDR::tsdr_reg_type, BASE_ADDRESS + TSDR_Offset> {
    // timestamp date register
    public:
        Register::Bitfield<BASE_ADDRESS + TSDR_Offset, 13, 3, TSDR_WDU_T> WDU; /* Week day units */
        Register::Bit<BASE_ADDRESS + TSDR_Offset, 12> MT; /* Month tens in BCD format */
        Register::Bitfield<BASE_ADDRESS + TSDR_Offset, 8, 4, TSDR_MU_T> MU; /* Month units in BCD format */
        Register::Bitfield<BASE_ADDRESS + TSDR_Offset, 4, 2, TSDR_DT_T> DT; /* Date tens in BCD format */
        Register::Bitfield<BASE_ADDRESS + TSDR_Offset, 0, 4, TSDR_DU_T> DU; /* Date units in BCD format */
    };

    class TSSSR_T : public Register::Register<RTC_TSSSR::tsssr_reg_type, BASE_ADDRESS + TSSSR_Offset> {
    // time-stamp sub second register
    public:
        Register::Bitfield<BASE_ADDRESS + TSSSR_Offset, 0, 16, TSSSR_SS_T> SS; /* Sub second value */
    };

    class CALR_T : public Register::Register<RTC_CALR::calr_reg_type, BASE_ADDRESS + CALR_Offset> {
    // calibration register
    public:
        Register::Bit<BASE_ADDRESS + CALR_Offset, 15> CALP; /* Increase frequency of RTC by 488.5 ppm */
        Register::Bit<BASE_ADDRESS + CALR_Offset, 14> CALW8; /* Use an 8-second calibration cycle period */
        Register::Bit<BASE_ADDRESS + CALR_Offset, 13> CALW16; /* Use a 16-second calibration cycle period */
        Register::Bitfield<BASE_ADDRESS + CALR_Offset, 0, 9, CALR_CALM_T> CALM; /* Calibration minus */
    };

    class TAFCR_T : public Register::Register<RTC_TAFCR::tafcr_reg_type, BASE_ADDRESS + TAFCR_Offset> {
    // tamper and alternate function configuration register
    public:
        Register::Bit<BASE_ADDRESS + TAFCR_Offset, 23> PC15MODE; /* PC15 mode */
        Register::Bit<BASE_ADDRESS + TAFCR_Offset, 22> PC15VALUE; /* PC15 value */
        Register::Bit<BASE_ADDRESS + TAFCR_Offset, 21> PC14MODE; /* PC14 mode */
        Register::Bit<BASE_ADDRESS + TAFCR_Offset, 20> PC14VALUE; /* PC14 value */
        Register::Bit<BASE_ADDRESS + TAFCR_Offset, 19> PC13MODE; /* PC13 mode */
        Register::Bit<BASE_ADDRESS + TAFCR_Offset, 18> PC13VALUE; /* RTC_ALARM output type/PC13 value */
        Register::Bit<BASE_ADDRESS + TAFCR_Offset, 15> TAMP_PUDIS; /* RTC_TAMPx pull-up disable */
        Register::Bitfield<BASE_ADDRESS + TAFCR_Offset, 13, 2, TAFCR_TAMP_PRCH_T> TAMP_PRCH; /* RTC_TAMPx precharge duration */
        Register::Bitfield<BASE_ADDRESS + TAFCR_Offset, 11, 2, TAFCR_TAMPFLT_T> TAMPFLT; /* RTC_TAMPx filter count */
        Register::Bitfield<BASE_ADDRESS + TAFCR_Offset, 8, 3, TAFCR_TAMPFREQ_T> TAMPFREQ; /* Tamper sampling frequency */
        Register::Bit<BASE_ADDRESS + TAFCR_Offset, 7> TAMPTS; /* Activate timestamp on tamper detection event */
        Register::Bit<BASE_ADDRESS + TAFCR_Offset, 4> TAMP2_TRG; /* Active level for RTC_TAMP2 input */
        Register::Bit<BASE_ADDRESS + TAFCR_Offset, 3> TAMP2E; /* RTC_TAMP2 input detection enable */
        Register::Bit<BASE_ADDRESS + TAFCR_Offset, 2> TAMPIE; /* Tamper interrupt enable */
        Register::Bit<BASE_ADDRESS + TAFCR_Offset, 1> TAMP1TRG; /* Active level for RTC_TAMP1 input */
        Register::Bit<BASE_ADDRESS + TAFCR_Offset, 0> TAMP1E; /* RTC_TAMP1 input detection enable */
    };

    class ALRMASSR_T : public Register::Register<RTC_ALRMASSR::alrmassr_reg_type, BASE_ADDRESS + ALRMASSR_Offset> {
    // alarm A sub second register
    public:
        Register::Bitfield<BASE_ADDRESS + ALRMASSR_Offset, 24, 4, ALRMASSR_MASKSS_T> MASKSS; /* Mask the most-significant bits starting at this bit */
        Register::Bitfield<BASE_ADDRESS + ALRMASSR_Offset, 0, 15, ALRMASSR_SS_T> SS; /* Sub seconds value */
    };

    class BKP0R_T : public Register::Register<RTC_BKP0R::bkp0r_reg_type, BASE_ADDRESS + BKP0R_Offset> {
    // backup register
    public:
        Register::Bitfield<BASE_ADDRESS + BKP0R_Offset, 0, 32, BKP0R_BKP_T> BKP; /* BKP */
    };

    class BKP1R_T : public Register::Register<RTC_BKP1R::bkp1r_reg_type, BASE_ADDRESS + BKP1R_Offset> {
    // backup register
    public:
        Register::Bitfield<BASE_ADDRESS + BKP1R_Offset, 0, 32, BKP1R_BKP_T> BKP; /* BKP */
    };

    class BKP2R_T : public Register::Register<RTC_BKP2R::bkp2r_reg_type, BASE_ADDRESS + BKP2R_Offset> {
    // backup register
    public:
        Register::Bitfield<BASE_ADDRESS + BKP2R_Offset, 0, 32, BKP2R_BKP_T> BKP; /* BKP */
    };

    class BKP3R_T : public Register::Register<RTC_BKP3R::bkp3r_reg_type, BASE_ADDRESS + BKP3R_Offset> {
    // backup register
    public:
        Register::Bitfield<BASE_ADDRESS + BKP3R_Offset, 0, 32, BKP3R_BKP_T> BKP; /* BKP */
    };

    class BKP4R_T : public Register::Register<RTC_BKP4R::bkp4r_reg_type, BASE_ADDRESS + BKP4R_Offset> {
    // backup register
    public:
        Register::Bitfield<BASE_ADDRESS + BKP4R_Offset, 0, 32, BKP4R_BKP_T> BKP; /* BKP */
    };

    TR_T TR;
    DR_T DR;
    CR_T CR;
    ISR_T ISR;
    PRER_T PRER;
    ALRMAR_T ALRMAR;
    WPR_T WPR;
    SSR_T SSR;
    SHIFTR_T SHIFTR;
    TSTR_T TSTR;
    TSDR_T TSDR;
    TSSSR_T TSSSR;
    CALR_T CALR;
    TAFCR_T TAFCR;
    ALRMASSR_T ALRMASSR;
    BKP0R_T BKP0R;
    BKP1R_T BKP1R;
    BKP2R_T BKP2R;
    BKP3R_T BKP3R;
    BKP4R_T BKP4R;
};

} // namespace STM32LIB

#endif // STM32F0X1_RTC_HPP_

