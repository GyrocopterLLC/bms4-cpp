#ifndef STM32F0X1_IWDG_HPP_
#define STM32F0X1_IWDG_HPP_
#pragma once

#include <cstdint>
#include "Register.hpp"

/* Independent watchdog */
namespace STM32LIB { 

/* Overwritable types for each of the bitfields.
 * Defaults to uint32_t, but feel free to redefine with your
 * own custom enum class later. */
using KR_KEY_T = uint32_t;
using PR_PR_T = uint32_t;
using RLR_RL_T = uint32_t;
using WINR_WIN_T = uint32_t;

namespace IWDG_KR {

    enum class kr_reg_type {};

    template<KR_KEY_T val>
    using KEY = Register::Combo_Bitfield<kr_reg_type, 0, 16, KR_KEY_T, val>;

} // IWDG_KR
namespace IWDG_PR {

    enum class pr_reg_type {};

    template<PR_PR_T val>
    using PR = Register::Combo_Bitfield<pr_reg_type, 0, 3, PR_PR_T, val>;

} // IWDG_PR
namespace IWDG_RLR {

    enum class rlr_reg_type {};

    template<RLR_RL_T val>
    using RL = Register::Combo_Bitfield<rlr_reg_type, 0, 12, RLR_RL_T, val>;

} // IWDG_RLR
namespace IWDG_SR {

    enum class sr_reg_type {};

    template<bool tf>
    using PVU = Register::Combo_Bit<sr_reg_type, 0, tf>;

    template<bool tf>
    using RVU = Register::Combo_Bit<sr_reg_type, 1, tf>;

    template<bool tf>
    using WVU = Register::Combo_Bit<sr_reg_type, 2, tf>;

} // IWDG_SR
namespace IWDG_WINR {

    enum class winr_reg_type {};

    template<WINR_WIN_T val>
    using WIN = Register::Combo_Bitfield<winr_reg_type, 0, 12, WINR_WIN_T, val>;

} // IWDG_WINR
template<uint32_t BASE_ADDRESS>
class IWDG {
public:
    static const uint32_t KR_Offset = 0x0000;
    static const uint32_t PR_Offset = 0x0004;
    static const uint32_t RLR_Offset = 0x0008;
    static const uint32_t SR_Offset = 0x000C;
    static const uint32_t WINR_Offset = 0x0010;

    IWDG() = default;
    IWDG( const IWDG& ) = delete;
    const IWDG& operator=( const IWDG& ) = delete;

    class KR_T : public Register::Register<IWDG_KR::kr_reg_type, BASE_ADDRESS + KR_Offset> {
    // Key register
    public:
        Register::Bitfield<BASE_ADDRESS + KR_Offset, 0, 16, KR_KEY_T> KEY; /* Key value */
    };

    class PR_T : public Register::Register<IWDG_PR::pr_reg_type, BASE_ADDRESS + PR_Offset> {
    // Prescaler register
    public:
        Register::Bitfield<BASE_ADDRESS + PR_Offset, 0, 3, PR_PR_T> PR; /* Prescaler divider */
    };

    class RLR_T : public Register::Register<IWDG_RLR::rlr_reg_type, BASE_ADDRESS + RLR_Offset> {
    // Reload register
    public:
        Register::Bitfield<BASE_ADDRESS + RLR_Offset, 0, 12, RLR_RL_T> RL; /* Watchdog counter reload value */
    };

    class SR_T : public Register::Register<IWDG_SR::sr_reg_type, BASE_ADDRESS + SR_Offset> {
    // Status register
    public:
        Register::Bit<BASE_ADDRESS + SR_Offset, 0> PVU; /* Watchdog prescaler value update */
        Register::Bit<BASE_ADDRESS + SR_Offset, 1> RVU; /* Watchdog counter reload value update */
        Register::Bit<BASE_ADDRESS + SR_Offset, 2> WVU; /* Watchdog counter window value update */
    };

    class WINR_T : public Register::Register<IWDG_WINR::winr_reg_type, BASE_ADDRESS + WINR_Offset> {
    // Window register
    public:
        Register::Bitfield<BASE_ADDRESS + WINR_Offset, 0, 12, WINR_WIN_T> WIN; /* Watchdog counter window value */
    };

    KR_T KR;
    PR_T PR;
    RLR_T RLR;
    SR_T SR;
    WINR_T WINR;
};

} // namespace STM32LIB

#endif // STM32F0X1_IWDG_HPP_

