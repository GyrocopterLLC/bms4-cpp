#ifndef STM32F0X1_STK_HPP_
#define STM32F0X1_STK_HPP_
#pragma once

#include <cstdint>
#include "Register.hpp"

/* SysTick timer */
namespace STM32LIB { 

/* Overwritable types for each of the bitfields.
 * Defaults to uint32_t, but feel free to redefine with your
 * own custom enum class later. */
using RVR_RELOAD_T = uint32_t;
using CVR_CURRENT_T = uint32_t;
using CALIB_TENMS_T = uint32_t;

namespace STK_CSR {

    enum class csr_reg_type {};

    template<bool tf>
    using ENABLE = Register::Combo_Bit<csr_reg_type, 0, tf>;

    template<bool tf>
    using TICKINT = Register::Combo_Bit<csr_reg_type, 1, tf>;

    template<bool tf>
    using CLKSOURCE = Register::Combo_Bit<csr_reg_type, 2, tf>;

    template<bool tf>
    using COUNTFLAG = Register::Combo_Bit<csr_reg_type, 16, tf>;

} // STK_CSR
namespace STK_RVR {

    enum class rvr_reg_type {};

    template<RVR_RELOAD_T val>
    using RELOAD = Register::Combo_Bitfield<rvr_reg_type, 0, 24, RVR_RELOAD_T, val>;

} // STK_RVR
namespace STK_CVR {

    enum class cvr_reg_type {};

    template<CVR_CURRENT_T val>
    using CURRENT = Register::Combo_Bitfield<cvr_reg_type, 0, 24, CVR_CURRENT_T, val>;

} // STK_CVR
namespace STK_CALIB {

    enum class calib_reg_type {};

    template<CALIB_TENMS_T val>
    using TENMS = Register::Combo_Bitfield<calib_reg_type, 0, 24, CALIB_TENMS_T, val>;

    template<bool tf>
    using SKEW = Register::Combo_Bit<calib_reg_type, 30, tf>;

    template<bool tf>
    using NOREF = Register::Combo_Bit<calib_reg_type, 31, tf>;

} // STK_CALIB
template<uint32_t BASE_ADDRESS>
class STK {
public:
    static const uint32_t CSR_Offset = 0x0000;
    static const uint32_t RVR_Offset = 0x0004;
    static const uint32_t CVR_Offset = 0x0008;
    static const uint32_t CALIB_Offset = 0x000C;

    STK() = default;
    STK( const STK& ) = delete;
    const STK& operator=( const STK& ) = delete;

    class CSR_T : public Register::Register<STK_CSR::csr_reg_type, BASE_ADDRESS + CSR_Offset> {
    // SysTick control and status register
    public:
        Register::Bit<BASE_ADDRESS + CSR_Offset, 0> ENABLE; /* Counter enable */
        Register::Bit<BASE_ADDRESS + CSR_Offset, 1> TICKINT; /* SysTick exception request enable */
        Register::Bit<BASE_ADDRESS + CSR_Offset, 2> CLKSOURCE; /* Clock source selection */
        Register::Bit<BASE_ADDRESS + CSR_Offset, 16> COUNTFLAG; /* COUNTFLAG */
    };

    class RVR_T : public Register::Register<STK_RVR::rvr_reg_type, BASE_ADDRESS + RVR_Offset> {
    // SysTick reload value register
    public:
        Register::Bitfield<BASE_ADDRESS + RVR_Offset, 0, 24, RVR_RELOAD_T> RELOAD; /* RELOAD value */
    };

    class CVR_T : public Register::Register<STK_CVR::cvr_reg_type, BASE_ADDRESS + CVR_Offset> {
    // SysTick current value register
    public:
        Register::Bitfield<BASE_ADDRESS + CVR_Offset, 0, 24, CVR_CURRENT_T> CURRENT; /* Current counter value */
    };

    class CALIB_T : public Register::Register<STK_CALIB::calib_reg_type, BASE_ADDRESS + CALIB_Offset> {
    // SysTick calibration value register
    public:
        Register::Bitfield<BASE_ADDRESS + CALIB_Offset, 0, 24, CALIB_TENMS_T> TENMS; /* Calibration value */
        Register::Bit<BASE_ADDRESS + CALIB_Offset, 30> SKEW; /* SKEW flag: Indicates whether the TENMS value is exact */
        Register::Bit<BASE_ADDRESS + CALIB_Offset, 31> NOREF; /* NOREF flag. Reads as zero */
    };

    CSR_T CSR;
    RVR_T RVR;
    CVR_T CVR;
    CALIB_T CALIB;
};

} // namespace STM32LIB

#endif // STM32F0X1_STK_HPP_

