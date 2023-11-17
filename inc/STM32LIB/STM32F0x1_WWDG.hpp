#ifndef STM32F0X1_WWDG_HPP_
#define STM32F0X1_WWDG_HPP_
#pragma once

#include <cstdint>
#include "Register.hpp"

/* Window watchdog */
namespace STM32LIB { 

/* Overwritable types for each of the bitfields.
 * Defaults to uint32_t, but feel free to redefine with your
 * own custom enum class later. */
using CR_T_T = uint32_t;
using CFR_WDGTB_T = uint32_t;
using CFR_W_T = uint32_t;

namespace WWDG_CR {

    enum class cr_reg_type {};

    template<bool tf>
    using WDGA = Register::Combo_Bit<cr_reg_type, 7, tf>;

    template<CR_T_T val>
    using T = Register::Combo_Bitfield<cr_reg_type, 0, 7, CR_T_T, val>;

} // WWDG_CR
namespace WWDG_CFR {

    enum class cfr_reg_type {};

    template<bool tf>
    using EWI = Register::Combo_Bit<cfr_reg_type, 9, tf>;

    template<CFR_WDGTB_T val>
    using WDGTB = Register::Combo_Bitfield<cfr_reg_type, 7, 2, CFR_WDGTB_T, val>;

    template<CFR_W_T val>
    using W = Register::Combo_Bitfield<cfr_reg_type, 0, 7, CFR_W_T, val>;

} // WWDG_CFR
namespace WWDG_SR {

    enum class sr_reg_type {};

    template<bool tf>
    using EWIF = Register::Combo_Bit<sr_reg_type, 0, tf>;

} // WWDG_SR
template<uint32_t BASE_ADDRESS>
class WWDG {
public:
    static const uint32_t CR_Offset = 0x0000;
    static const uint32_t CFR_Offset = 0x0004;
    static const uint32_t SR_Offset = 0x0008;

    WWDG() = default;
    WWDG( const WWDG& ) = delete;
    const WWDG& operator=( const WWDG& ) = delete;

    class CR_T : public Register::Register<WWDG_CR::cr_reg_type, BASE_ADDRESS + CR_Offset> {
    // Control register
    public:
        Register::Bit<BASE_ADDRESS + CR_Offset, 7> WDGA; /* Activation bit */
        Register::Bitfield<BASE_ADDRESS + CR_Offset, 0, 7, CR_T_T> T; /* 7-bit counter */
    };

    class CFR_T : public Register::Register<WWDG_CFR::cfr_reg_type, BASE_ADDRESS + CFR_Offset> {
    // Configuration register
    public:
        Register::Bit<BASE_ADDRESS + CFR_Offset, 9> EWI; /* Early wakeup interrupt */
        Register::Bitfield<BASE_ADDRESS + CFR_Offset, 7, 2, CFR_WDGTB_T> WDGTB; /* Timer base */
        Register::Bitfield<BASE_ADDRESS + CFR_Offset, 0, 7, CFR_W_T> W; /* 7-bit window value */
    };

    class SR_T : public Register::Register<WWDG_SR::sr_reg_type, BASE_ADDRESS + SR_Offset> {
    // Status register
    public:
        Register::Bit<BASE_ADDRESS + SR_Offset, 0> EWIF; /* Early wakeup interrupt flag */
    };

    CR_T CR;
    CFR_T CFR;
    SR_T SR;
};

} // namespace STM32LIB

#endif // STM32F0X1_WWDG_HPP_

