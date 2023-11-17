#ifndef STM32F0X1_CRS_HPP_
#define STM32F0X1_CRS_HPP_
#pragma once

#include <cstdint>
#include "Register.hpp"

/* Clock recovery system */
namespace STM32LIB { 

/* Overwritable types for each of the bitfields.
 * Defaults to uint32_t, but feel free to redefine with your
 * own custom enum class later. */
using CR_TRIM_T = uint32_t;
using CFGR_SYNCSRC_T = uint32_t;
using CFGR_SYNCDIV_T = uint32_t;
using CFGR_FELIM_T = uint32_t;
using CFGR_RELOAD_T = uint32_t;
using ISR_FECAP_T = uint32_t;

namespace CRS_CR {

    enum class cr_reg_type {};

    template<CR_TRIM_T val>
    using TRIM = Register::Combo_Bitfield<cr_reg_type, 8, 6, CR_TRIM_T, val>;

    template<bool tf>
    using SWSYNC = Register::Combo_Bit<cr_reg_type, 7, tf>;

    template<bool tf>
    using AUTOTRIMEN = Register::Combo_Bit<cr_reg_type, 6, tf>;

    template<bool tf>
    using CEN = Register::Combo_Bit<cr_reg_type, 5, tf>;

    template<bool tf>
    using ESYNCIE = Register::Combo_Bit<cr_reg_type, 3, tf>;

    template<bool tf>
    using ERRIE = Register::Combo_Bit<cr_reg_type, 2, tf>;

    template<bool tf>
    using SYNCWARNIE = Register::Combo_Bit<cr_reg_type, 1, tf>;

    template<bool tf>
    using SYNCOKIE = Register::Combo_Bit<cr_reg_type, 0, tf>;

} // CRS_CR
namespace CRS_CFGR {

    enum class cfgr_reg_type {};

    template<bool tf>
    using SYNCPOL = Register::Combo_Bit<cfgr_reg_type, 31, tf>;

    template<CFGR_SYNCSRC_T val>
    using SYNCSRC = Register::Combo_Bitfield<cfgr_reg_type, 28, 2, CFGR_SYNCSRC_T, val>;

    template<CFGR_SYNCDIV_T val>
    using SYNCDIV = Register::Combo_Bitfield<cfgr_reg_type, 24, 3, CFGR_SYNCDIV_T, val>;

    template<CFGR_FELIM_T val>
    using FELIM = Register::Combo_Bitfield<cfgr_reg_type, 16, 8, CFGR_FELIM_T, val>;

    template<CFGR_RELOAD_T val>
    using RELOAD = Register::Combo_Bitfield<cfgr_reg_type, 0, 16, CFGR_RELOAD_T, val>;

} // CRS_CFGR
namespace CRS_ISR {

    enum class isr_reg_type {};

    template<ISR_FECAP_T val>
    using FECAP = Register::Combo_Bitfield<isr_reg_type, 16, 16, ISR_FECAP_T, val>;

    template<bool tf>
    using FEDIR = Register::Combo_Bit<isr_reg_type, 15, tf>;

    template<bool tf>
    using TRIMOVF = Register::Combo_Bit<isr_reg_type, 10, tf>;

    template<bool tf>
    using SYNCMISS = Register::Combo_Bit<isr_reg_type, 9, tf>;

    template<bool tf>
    using SYNCERR = Register::Combo_Bit<isr_reg_type, 8, tf>;

    template<bool tf>
    using ESYNCF = Register::Combo_Bit<isr_reg_type, 3, tf>;

    template<bool tf>
    using ERRF = Register::Combo_Bit<isr_reg_type, 2, tf>;

    template<bool tf>
    using SYNCWARNF = Register::Combo_Bit<isr_reg_type, 1, tf>;

    template<bool tf>
    using SYNCOKF = Register::Combo_Bit<isr_reg_type, 0, tf>;

} // CRS_ISR
namespace CRS_ICR {

    enum class icr_reg_type {};

    template<bool tf>
    using ESYNCC = Register::Combo_Bit<icr_reg_type, 3, tf>;

    template<bool tf>
    using ERRC = Register::Combo_Bit<icr_reg_type, 2, tf>;

    template<bool tf>
    using SYNCWARNC = Register::Combo_Bit<icr_reg_type, 1, tf>;

    template<bool tf>
    using SYNCOKC = Register::Combo_Bit<icr_reg_type, 0, tf>;

} // CRS_ICR
template<uint32_t BASE_ADDRESS>
class CRS {
public:
    static const uint32_t CR_Offset = 0x0000;
    static const uint32_t CFGR_Offset = 0x0004;
    static const uint32_t ISR_Offset = 0x0008;
    static const uint32_t ICR_Offset = 0x000C;

    CRS() = default;
    CRS( const CRS& ) = delete;
    const CRS& operator=( const CRS& ) = delete;

    class CR_T : public Register::Register<CRS_CR::cr_reg_type, BASE_ADDRESS + CR_Offset> {
    // control register
    public:
        Register::Bitfield<BASE_ADDRESS + CR_Offset, 8, 6, CR_TRIM_T> TRIM; /* HSI48 oscillator smooth trimming */
        Register::Bit<BASE_ADDRESS + CR_Offset, 7> SWSYNC; /* Generate software SYNC event */
        Register::Bit<BASE_ADDRESS + CR_Offset, 6> AUTOTRIMEN; /* Automatic trimming enable */
        Register::Bit<BASE_ADDRESS + CR_Offset, 5> CEN; /* Frequency error counter enable */
        Register::Bit<BASE_ADDRESS + CR_Offset, 3> ESYNCIE; /* Expected SYNC interrupt enable */
        Register::Bit<BASE_ADDRESS + CR_Offset, 2> ERRIE; /* Synchronization or trimming error interrupt enable */
        Register::Bit<BASE_ADDRESS + CR_Offset, 1> SYNCWARNIE; /* SYNC warning interrupt enable */
        Register::Bit<BASE_ADDRESS + CR_Offset, 0> SYNCOKIE; /* SYNC event OK interrupt enable */
    };

    class CFGR_T : public Register::Register<CRS_CFGR::cfgr_reg_type, BASE_ADDRESS + CFGR_Offset> {
    // configuration register
    public:
        Register::Bit<BASE_ADDRESS + CFGR_Offset, 31> SYNCPOL; /* SYNC polarity selection */
        Register::Bitfield<BASE_ADDRESS + CFGR_Offset, 28, 2, CFGR_SYNCSRC_T> SYNCSRC; /* SYNC signal source selection */
        Register::Bitfield<BASE_ADDRESS + CFGR_Offset, 24, 3, CFGR_SYNCDIV_T> SYNCDIV; /* SYNC divider */
        Register::Bitfield<BASE_ADDRESS + CFGR_Offset, 16, 8, CFGR_FELIM_T> FELIM; /* Frequency error limit */
        Register::Bitfield<BASE_ADDRESS + CFGR_Offset, 0, 16, CFGR_RELOAD_T> RELOAD; /* Counter reload value */
    };

    class ISR_T : public Register::Register<CRS_ISR::isr_reg_type, BASE_ADDRESS + ISR_Offset> {
    // interrupt and status register
    public:
        Register::Bitfield<BASE_ADDRESS + ISR_Offset, 16, 16, ISR_FECAP_T> FECAP; /* Frequency error capture */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 15> FEDIR; /* Frequency error direction */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 10> TRIMOVF; /* Trimming overflow or underflow */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 9> SYNCMISS; /* SYNC missed */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 8> SYNCERR; /* SYNC error */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 3> ESYNCF; /* Expected SYNC flag */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 2> ERRF; /* Error flag */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 1> SYNCWARNF; /* SYNC warning flag */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 0> SYNCOKF; /* SYNC event OK flag */
    };

    class ICR_T : public Register::Register<CRS_ICR::icr_reg_type, BASE_ADDRESS + ICR_Offset> {
    // interrupt flag clear register
    public:
        Register::Bit<BASE_ADDRESS + ICR_Offset, 3> ESYNCC; /* Expected SYNC clear flag */
        Register::Bit<BASE_ADDRESS + ICR_Offset, 2> ERRC; /* Error clear flag */
        Register::Bit<BASE_ADDRESS + ICR_Offset, 1> SYNCWARNC; /* SYNC warning clear flag */
        Register::Bit<BASE_ADDRESS + ICR_Offset, 0> SYNCOKC; /* SYNC event OK clear flag */
    };

    CR_T CR;
    CFGR_T CFGR;
    ISR_T ISR;
    ICR_T ICR;
};

} // namespace STM32LIB

#endif // STM32F0X1_CRS_HPP_

