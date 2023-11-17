#ifndef STM32F0X1_ADC_HPP_
#define STM32F0X1_ADC_HPP_
#pragma once

#include <cstdint>
#include "Register.hpp"

/* Analog-to-digital converter */
namespace STM32LIB { 

/* Overwritable types for each of the bitfields.
 * Defaults to uint32_t, but feel free to redefine with your
 * own custom enum class later. */
using CFGR1_AWDCH_T = uint32_t;
using CFGR1_EXTEN_T = uint32_t;
using CFGR1_EXTSEL_T = uint32_t;
using CFGR1_RES_T = uint32_t;
using SMPR_SMPR_T = uint32_t;
using TR_HT_T = uint32_t;
using TR_LT_T = uint32_t;
using DR_DATA_T = uint32_t;

namespace ADC_ISR {

    enum class isr_reg_type {};

    template<bool tf>
    using AWD = Register::Combo_Bit<isr_reg_type, 7, tf>;

    template<bool tf>
    using OVR = Register::Combo_Bit<isr_reg_type, 4, tf>;

    template<bool tf>
    using EOS = Register::Combo_Bit<isr_reg_type, 3, tf>;

    template<bool tf>
    using EOC = Register::Combo_Bit<isr_reg_type, 2, tf>;

    template<bool tf>
    using EOSMP = Register::Combo_Bit<isr_reg_type, 1, tf>;

    template<bool tf>
    using ADRDY = Register::Combo_Bit<isr_reg_type, 0, tf>;

} // ADC_ISR
namespace ADC_IER {

    enum class ier_reg_type {};

    template<bool tf>
    using AWDIE = Register::Combo_Bit<ier_reg_type, 7, tf>;

    template<bool tf>
    using OVRIE = Register::Combo_Bit<ier_reg_type, 4, tf>;

    template<bool tf>
    using EOSIE = Register::Combo_Bit<ier_reg_type, 3, tf>;

    template<bool tf>
    using EOCIE = Register::Combo_Bit<ier_reg_type, 2, tf>;

    template<bool tf>
    using EOSMPIE = Register::Combo_Bit<ier_reg_type, 1, tf>;

    template<bool tf>
    using ADRDYIE = Register::Combo_Bit<ier_reg_type, 0, tf>;

} // ADC_IER
namespace ADC_CR {

    enum class cr_reg_type {};

    template<bool tf>
    using ADCAL = Register::Combo_Bit<cr_reg_type, 31, tf>;

    template<bool tf>
    using ADSTP = Register::Combo_Bit<cr_reg_type, 4, tf>;

    template<bool tf>
    using ADSTART = Register::Combo_Bit<cr_reg_type, 2, tf>;

    template<bool tf>
    using ADDIS = Register::Combo_Bit<cr_reg_type, 1, tf>;

    template<bool tf>
    using ADEN = Register::Combo_Bit<cr_reg_type, 0, tf>;

} // ADC_CR
namespace ADC_CFGR1 {

    enum class cfgr1_reg_type {};

    template<CFGR1_AWDCH_T val>
    using AWDCH = Register::Combo_Bitfield<cfgr1_reg_type, 26, 5, CFGR1_AWDCH_T, val>;

    template<bool tf>
    using AWDEN = Register::Combo_Bit<cfgr1_reg_type, 23, tf>;

    template<bool tf>
    using AWDSGL = Register::Combo_Bit<cfgr1_reg_type, 22, tf>;

    template<bool tf>
    using DISCEN = Register::Combo_Bit<cfgr1_reg_type, 16, tf>;

    template<bool tf>
    using AUTOFF = Register::Combo_Bit<cfgr1_reg_type, 15, tf>;

    template<bool tf>
    using AUTDLY = Register::Combo_Bit<cfgr1_reg_type, 14, tf>;

    template<bool tf>
    using CONT = Register::Combo_Bit<cfgr1_reg_type, 13, tf>;

    template<bool tf>
    using OVRMOD = Register::Combo_Bit<cfgr1_reg_type, 12, tf>;

    template<CFGR1_EXTEN_T val>
    using EXTEN = Register::Combo_Bitfield<cfgr1_reg_type, 10, 2, CFGR1_EXTEN_T, val>;

    template<CFGR1_EXTSEL_T val>
    using EXTSEL = Register::Combo_Bitfield<cfgr1_reg_type, 6, 3, CFGR1_EXTSEL_T, val>;

    template<bool tf>
    using ALIGN = Register::Combo_Bit<cfgr1_reg_type, 5, tf>;

    template<CFGR1_RES_T val>
    using RES = Register::Combo_Bitfield<cfgr1_reg_type, 3, 2, CFGR1_RES_T, val>;

    template<bool tf>
    using SCANDIR = Register::Combo_Bit<cfgr1_reg_type, 2, tf>;

    template<bool tf>
    using DMACFG = Register::Combo_Bit<cfgr1_reg_type, 1, tf>;

    template<bool tf>
    using DMAEN = Register::Combo_Bit<cfgr1_reg_type, 0, tf>;

} // ADC_CFGR1
namespace ADC_CFGR2 {

    enum class cfgr2_reg_type {};

    template<bool tf>
    using JITOFF_D4 = Register::Combo_Bit<cfgr2_reg_type, 31, tf>;

    template<bool tf>
    using JITOFF_D2 = Register::Combo_Bit<cfgr2_reg_type, 30, tf>;

} // ADC_CFGR2
namespace ADC_SMPR {

    enum class smpr_reg_type {};

    template<SMPR_SMPR_T val>
    using SMPR = Register::Combo_Bitfield<smpr_reg_type, 0, 3, SMPR_SMPR_T, val>;

} // ADC_SMPR
namespace ADC_TR {

    enum class tr_reg_type {};

    template<TR_HT_T val>
    using HT = Register::Combo_Bitfield<tr_reg_type, 16, 12, TR_HT_T, val>;

    template<TR_LT_T val>
    using LT = Register::Combo_Bitfield<tr_reg_type, 0, 12, TR_LT_T, val>;

} // ADC_TR
namespace ADC_CHSELR {

    enum class chselr_reg_type {};

    template<bool tf>
    using CHSEL18 = Register::Combo_Bit<chselr_reg_type, 18, tf>;

    template<bool tf>
    using CHSEL17 = Register::Combo_Bit<chselr_reg_type, 17, tf>;

    template<bool tf>
    using CHSEL16 = Register::Combo_Bit<chselr_reg_type, 16, tf>;

    template<bool tf>
    using CHSEL15 = Register::Combo_Bit<chselr_reg_type, 15, tf>;

    template<bool tf>
    using CHSEL14 = Register::Combo_Bit<chselr_reg_type, 14, tf>;

    template<bool tf>
    using CHSEL13 = Register::Combo_Bit<chselr_reg_type, 13, tf>;

    template<bool tf>
    using CHSEL12 = Register::Combo_Bit<chselr_reg_type, 12, tf>;

    template<bool tf>
    using CHSEL11 = Register::Combo_Bit<chselr_reg_type, 11, tf>;

    template<bool tf>
    using CHSEL10 = Register::Combo_Bit<chselr_reg_type, 10, tf>;

    template<bool tf>
    using CHSEL9 = Register::Combo_Bit<chselr_reg_type, 9, tf>;

    template<bool tf>
    using CHSEL8 = Register::Combo_Bit<chselr_reg_type, 8, tf>;

    template<bool tf>
    using CHSEL7 = Register::Combo_Bit<chselr_reg_type, 7, tf>;

    template<bool tf>
    using CHSEL6 = Register::Combo_Bit<chselr_reg_type, 6, tf>;

    template<bool tf>
    using CHSEL5 = Register::Combo_Bit<chselr_reg_type, 5, tf>;

    template<bool tf>
    using CHSEL4 = Register::Combo_Bit<chselr_reg_type, 4, tf>;

    template<bool tf>
    using CHSEL3 = Register::Combo_Bit<chselr_reg_type, 3, tf>;

    template<bool tf>
    using CHSEL2 = Register::Combo_Bit<chselr_reg_type, 2, tf>;

    template<bool tf>
    using CHSEL1 = Register::Combo_Bit<chselr_reg_type, 1, tf>;

    template<bool tf>
    using CHSEL0 = Register::Combo_Bit<chselr_reg_type, 0, tf>;

} // ADC_CHSELR
namespace ADC_DR {

    enum class dr_reg_type {};

    template<DR_DATA_T val>
    using DATA = Register::Combo_Bitfield<dr_reg_type, 0, 16, DR_DATA_T, val>;

} // ADC_DR
namespace ADC_CCR {

    enum class ccr_reg_type {};

    template<bool tf>
    using VBATEN = Register::Combo_Bit<ccr_reg_type, 24, tf>;

    template<bool tf>
    using TSEN = Register::Combo_Bit<ccr_reg_type, 23, tf>;

    template<bool tf>
    using VREFEN = Register::Combo_Bit<ccr_reg_type, 22, tf>;

} // ADC_CCR
template<uint32_t BASE_ADDRESS>
class ADC {
public:
    static const uint32_t ISR_Offset = 0x0000;
    static const uint32_t IER_Offset = 0x0004;
    static const uint32_t CR_Offset = 0x0008;
    static const uint32_t CFGR1_Offset = 0x000C;
    static const uint32_t CFGR2_Offset = 0x0010;
    static const uint32_t SMPR_Offset = 0x0014;
    static const uint32_t TR_Offset = 0x0020;
    static const uint32_t CHSELR_Offset = 0x0028;
    static const uint32_t DR_Offset = 0x0040;
    static const uint32_t CCR_Offset = 0x0308;

    ADC() = default;
    ADC( const ADC& ) = delete;
    const ADC& operator=( const ADC& ) = delete;

    class ISR_T : public Register::Register<ADC_ISR::isr_reg_type, BASE_ADDRESS + ISR_Offset> {
    // interrupt and status register
    public:
        Register::Bit<BASE_ADDRESS + ISR_Offset, 7> AWD; /* Analog watchdog flag */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 4> OVR; /* ADC overrun */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 3> EOS; /* End of sequence flag */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 2> EOC; /* End of conversion flag */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 1> EOSMP; /* End of sampling flag */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 0> ADRDY; /* ADC ready */
    };

    class IER_T : public Register::Register<ADC_IER::ier_reg_type, BASE_ADDRESS + IER_Offset> {
    // interrupt enable register
    public:
        Register::Bit<BASE_ADDRESS + IER_Offset, 7> AWDIE; /* Analog watchdog interrupt enable */
        Register::Bit<BASE_ADDRESS + IER_Offset, 4> OVRIE; /* Overrun interrupt enable */
        Register::Bit<BASE_ADDRESS + IER_Offset, 3> EOSIE; /* End of conversion sequence interrupt enable */
        Register::Bit<BASE_ADDRESS + IER_Offset, 2> EOCIE; /* End of conversion interrupt enable */
        Register::Bit<BASE_ADDRESS + IER_Offset, 1> EOSMPIE; /* End of sampling flag interrupt enable */
        Register::Bit<BASE_ADDRESS + IER_Offset, 0> ADRDYIE; /* ADC ready interrupt enable */
    };

    class CR_T : public Register::Register<ADC_CR::cr_reg_type, BASE_ADDRESS + CR_Offset> {
    // control register
    public:
        Register::Bit<BASE_ADDRESS + CR_Offset, 31> ADCAL; /* ADC calibration */
        Register::Bit<BASE_ADDRESS + CR_Offset, 4> ADSTP; /* ADC stop conversion command */
        Register::Bit<BASE_ADDRESS + CR_Offset, 2> ADSTART; /* ADC start conversion command */
        Register::Bit<BASE_ADDRESS + CR_Offset, 1> ADDIS; /* ADC disable command */
        Register::Bit<BASE_ADDRESS + CR_Offset, 0> ADEN; /* ADC enable command */
    };

    class CFGR1_T : public Register::Register<ADC_CFGR1::cfgr1_reg_type, BASE_ADDRESS + CFGR1_Offset> {
    // configuration register 1
    public:
        Register::Bitfield<BASE_ADDRESS + CFGR1_Offset, 26, 5, CFGR1_AWDCH_T> AWDCH; /* Analog watchdog channel selection */
        Register::Bit<BASE_ADDRESS + CFGR1_Offset, 23> AWDEN; /* Analog watchdog enable */
        Register::Bit<BASE_ADDRESS + CFGR1_Offset, 22> AWDSGL; /* Enable the watchdog on a single channel or on all channels */
        Register::Bit<BASE_ADDRESS + CFGR1_Offset, 16> DISCEN; /* Discontinuous mode */
        Register::Bit<BASE_ADDRESS + CFGR1_Offset, 15> AUTOFF; /* Auto-off mode */
        Register::Bit<BASE_ADDRESS + CFGR1_Offset, 14> AUTDLY; /* Auto-delayed conversion mode */
        Register::Bit<BASE_ADDRESS + CFGR1_Offset, 13> CONT; /* Single / continuous conversion mode */
        Register::Bit<BASE_ADDRESS + CFGR1_Offset, 12> OVRMOD; /* Overrun management mode */
        Register::Bitfield<BASE_ADDRESS + CFGR1_Offset, 10, 2, CFGR1_EXTEN_T> EXTEN; /* External trigger enable and polarity selection */
        Register::Bitfield<BASE_ADDRESS + CFGR1_Offset, 6, 3, CFGR1_EXTSEL_T> EXTSEL; /* External trigger selection */
        Register::Bit<BASE_ADDRESS + CFGR1_Offset, 5> ALIGN; /* Data alignment */
        Register::Bitfield<BASE_ADDRESS + CFGR1_Offset, 3, 2, CFGR1_RES_T> RES; /* Data resolution */
        Register::Bit<BASE_ADDRESS + CFGR1_Offset, 2> SCANDIR; /* Scan sequence direction */
        Register::Bit<BASE_ADDRESS + CFGR1_Offset, 1> DMACFG; /* Direct memery access configuration */
        Register::Bit<BASE_ADDRESS + CFGR1_Offset, 0> DMAEN; /* Direct memory access enable */
    };

    class CFGR2_T : public Register::Register<ADC_CFGR2::cfgr2_reg_type, BASE_ADDRESS + CFGR2_Offset> {
    // configuration register 2
    public:
        Register::Bit<BASE_ADDRESS + CFGR2_Offset, 31> JITOFF_D4; /* JITOFF_D4 */
        Register::Bit<BASE_ADDRESS + CFGR2_Offset, 30> JITOFF_D2; /* JITOFF_D2 */
    };

    class SMPR_T : public Register::Register<ADC_SMPR::smpr_reg_type, BASE_ADDRESS + SMPR_Offset> {
    // sampling time register
    public:
        Register::Bitfield<BASE_ADDRESS + SMPR_Offset, 0, 3, SMPR_SMPR_T> SMPR; /* Sampling time selection */
    };

    class TR_T : public Register::Register<ADC_TR::tr_reg_type, BASE_ADDRESS + TR_Offset> {
    // watchdog threshold register
    public:
        Register::Bitfield<BASE_ADDRESS + TR_Offset, 16, 12, TR_HT_T> HT; /* Analog watchdog higher threshold */
        Register::Bitfield<BASE_ADDRESS + TR_Offset, 0, 12, TR_LT_T> LT; /* Analog watchdog lower threshold */
    };

    class CHSELR_T : public Register::Register<ADC_CHSELR::chselr_reg_type, BASE_ADDRESS + CHSELR_Offset> {
    // channel selection register
    public:
        Register::Bit<BASE_ADDRESS + CHSELR_Offset, 18> CHSEL18; /* Channel-x selection */
        Register::Bit<BASE_ADDRESS + CHSELR_Offset, 17> CHSEL17; /* Channel-x selection */
        Register::Bit<BASE_ADDRESS + CHSELR_Offset, 16> CHSEL16; /* Channel-x selection */
        Register::Bit<BASE_ADDRESS + CHSELR_Offset, 15> CHSEL15; /* Channel-x selection */
        Register::Bit<BASE_ADDRESS + CHSELR_Offset, 14> CHSEL14; /* Channel-x selection */
        Register::Bit<BASE_ADDRESS + CHSELR_Offset, 13> CHSEL13; /* Channel-x selection */
        Register::Bit<BASE_ADDRESS + CHSELR_Offset, 12> CHSEL12; /* Channel-x selection */
        Register::Bit<BASE_ADDRESS + CHSELR_Offset, 11> CHSEL11; /* Channel-x selection */
        Register::Bit<BASE_ADDRESS + CHSELR_Offset, 10> CHSEL10; /* Channel-x selection */
        Register::Bit<BASE_ADDRESS + CHSELR_Offset, 9> CHSEL9; /* Channel-x selection */
        Register::Bit<BASE_ADDRESS + CHSELR_Offset, 8> CHSEL8; /* Channel-x selection */
        Register::Bit<BASE_ADDRESS + CHSELR_Offset, 7> CHSEL7; /* Channel-x selection */
        Register::Bit<BASE_ADDRESS + CHSELR_Offset, 6> CHSEL6; /* Channel-x selection */
        Register::Bit<BASE_ADDRESS + CHSELR_Offset, 5> CHSEL5; /* Channel-x selection */
        Register::Bit<BASE_ADDRESS + CHSELR_Offset, 4> CHSEL4; /* Channel-x selection */
        Register::Bit<BASE_ADDRESS + CHSELR_Offset, 3> CHSEL3; /* Channel-x selection */
        Register::Bit<BASE_ADDRESS + CHSELR_Offset, 2> CHSEL2; /* Channel-x selection */
        Register::Bit<BASE_ADDRESS + CHSELR_Offset, 1> CHSEL1; /* Channel-x selection */
        Register::Bit<BASE_ADDRESS + CHSELR_Offset, 0> CHSEL0; /* Channel-x selection */
    };

    class DR_T : public Register::Register<ADC_DR::dr_reg_type, BASE_ADDRESS + DR_Offset> {
    // data register
    public:
        Register::Bitfield<BASE_ADDRESS + DR_Offset, 0, 16, DR_DATA_T> DATA; /* Converted data */
    };

    class CCR_T : public Register::Register<ADC_CCR::ccr_reg_type, BASE_ADDRESS + CCR_Offset> {
    // common configuration register
    public:
        Register::Bit<BASE_ADDRESS + CCR_Offset, 24> VBATEN; /* VBAT enable */
        Register::Bit<BASE_ADDRESS + CCR_Offset, 23> TSEN; /* Temperature sensor enable */
        Register::Bit<BASE_ADDRESS + CCR_Offset, 22> VREFEN; /* Temperature sensor and VREFINT enable */
    };

    ISR_T ISR;
    IER_T IER;
    CR_T CR;
    CFGR1_T CFGR1;
    CFGR2_T CFGR2;
    SMPR_T SMPR;
    TR_T TR;
    CHSELR_T CHSELR;
    DR_T DR;
    CCR_T CCR;
};

} // namespace STM32LIB

#endif // STM32F0X1_ADC_HPP_

