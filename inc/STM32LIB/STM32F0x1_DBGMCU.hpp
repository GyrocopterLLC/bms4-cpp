#ifndef STM32F0X1_DBGMCU_HPP_
#define STM32F0X1_DBGMCU_HPP_
#pragma once

#include <cstdint>
#include "Register.hpp"

/* Debug support */
namespace STM32LIB { 

/* Overwritable types for each of the bitfields.
 * Defaults to uint32_t, but feel free to redefine with your
 * own custom enum class later. */
using IDCODE_DEV_ID_T = uint32_t;
using IDCODE_DIV_ID_T = uint32_t;
using IDCODE_REV_ID_T = uint32_t;

namespace DBGMCU_IDCODE {

    enum class idcode_reg_type {};

    template<IDCODE_DEV_ID_T val>
    using DEV_ID = Register::Combo_Bitfield<idcode_reg_type, 0, 12, IDCODE_DEV_ID_T, val>;

    template<IDCODE_DIV_ID_T val>
    using DIV_ID = Register::Combo_Bitfield<idcode_reg_type, 12, 4, IDCODE_DIV_ID_T, val>;

    template<IDCODE_REV_ID_T val>
    using REV_ID = Register::Combo_Bitfield<idcode_reg_type, 16, 16, IDCODE_REV_ID_T, val>;

} // DBGMCU_IDCODE
namespace DBGMCU_CR {

    enum class cr_reg_type {};

    template<bool tf>
    using DBG_STOP = Register::Combo_Bit<cr_reg_type, 1, tf>;

    template<bool tf>
    using DBG_STANDBY = Register::Combo_Bit<cr_reg_type, 2, tf>;

} // DBGMCU_CR
namespace DBGMCU_APB1_FZ {

    enum class apb1_fz_reg_type {};

    template<bool tf>
    using DBG_TIM2_STOP = Register::Combo_Bit<apb1_fz_reg_type, 0, tf>;

    template<bool tf>
    using DBG_TIM3_STOP = Register::Combo_Bit<apb1_fz_reg_type, 1, tf>;

    template<bool tf>
    using TIM3_counter_stopped_when_core_is_halted = Register::Combo_Bit<apb1_fz_reg_type, 4, tf>;

    template<bool tf>
    using DBG_TIM7_STOP = Register::Combo_Bit<apb1_fz_reg_type, 5, tf>;

    template<bool tf>
    using DBG_TIM14_STOP = Register::Combo_Bit<apb1_fz_reg_type, 8, tf>;

    template<bool tf>
    using DBG_RTC_STOP = Register::Combo_Bit<apb1_fz_reg_type, 10, tf>;

    template<bool tf>
    using DBG_WWDG_STOP = Register::Combo_Bit<apb1_fz_reg_type, 11, tf>;

    template<bool tf>
    using DBG_IWDG_STOP = Register::Combo_Bit<apb1_fz_reg_type, 12, tf>;

    template<bool tf>
    using DBG_I2C1_SMBUS_TIMEOUT = Register::Combo_Bit<apb1_fz_reg_type, 21, tf>;

    template<bool tf>
    using DBG_CAN_STOP = Register::Combo_Bit<apb1_fz_reg_type, 25, tf>;

} // DBGMCU_APB1_FZ
namespace DBGMCU_APB2_FZ {

    enum class apb2_fz_reg_type {};

    template<bool tf>
    using DBG_TIM1_STOP = Register::Combo_Bit<apb2_fz_reg_type, 11, tf>;

    template<bool tf>
    using DBG_TIM15_STOP = Register::Combo_Bit<apb2_fz_reg_type, 16, tf>;

    template<bool tf>
    using DBG_TIM16_STOP = Register::Combo_Bit<apb2_fz_reg_type, 17, tf>;

    template<bool tf>
    using DBG_TIM17_STOP = Register::Combo_Bit<apb2_fz_reg_type, 18, tf>;

} // DBGMCU_APB2_FZ
template<uint32_t BASE_ADDRESS>
class DBGMCU {
public:
    static const uint32_t IDCODE_Offset = 0x0000;
    static const uint32_t CR_Offset = 0x0004;
    static const uint32_t APB1_FZ_Offset = 0x0008;
    static const uint32_t APB2_FZ_Offset = 0x000C;

    DBGMCU() = default;
    DBGMCU( const DBGMCU& ) = delete;
    const DBGMCU& operator=( const DBGMCU& ) = delete;

    class IDCODE_T : public Register::Register<DBGMCU_IDCODE::idcode_reg_type, BASE_ADDRESS + IDCODE_Offset> {
    // MCU Device ID Code Register
    public:
        Register::Bitfield<BASE_ADDRESS + IDCODE_Offset, 0, 12, IDCODE_DEV_ID_T> DEV_ID; /* Device Identifier */
        Register::Bitfield<BASE_ADDRESS + IDCODE_Offset, 12, 4, IDCODE_DIV_ID_T> DIV_ID; /* Division Identifier */
        Register::Bitfield<BASE_ADDRESS + IDCODE_Offset, 16, 16, IDCODE_REV_ID_T> REV_ID; /* Revision Identifier */
    };

    class CR_T : public Register::Register<DBGMCU_CR::cr_reg_type, BASE_ADDRESS + CR_Offset> {
    // Debug MCU Configuration Register
    public:
        Register::Bit<BASE_ADDRESS + CR_Offset, 1> DBG_STOP; /* Debug Stop Mode */
        Register::Bit<BASE_ADDRESS + CR_Offset, 2> DBG_STANDBY; /* Debug Standby Mode */
    };

    class APB1_FZ_T : public Register::Register<DBGMCU_APB1_FZ::apb1_fz_reg_type, BASE_ADDRESS + APB1_FZ_Offset> {
    // Debug MCU APB1 freeze register
    public:
        Register::Bit<BASE_ADDRESS + APB1_FZ_Offset, 0> DBG_TIM2_STOP; /* TIM2 counter stopped when core is halted */
        Register::Bit<BASE_ADDRESS + APB1_FZ_Offset, 1> DBG_TIM3_STOP; /* TIM3 counter stopped when core is halted */
        Register::Bit<BASE_ADDRESS + APB1_FZ_Offset, 4> TIM3_counter_stopped_when_core_is_halted; /* TIM6 counter stopped when core is halted */
        Register::Bit<BASE_ADDRESS + APB1_FZ_Offset, 5> DBG_TIM7_STOP; /* TIM7 counter stopped when core is halted */
        Register::Bit<BASE_ADDRESS + APB1_FZ_Offset, 8> DBG_TIM14_STOP; /* TIM14 counter stopped when core is halted */
        Register::Bit<BASE_ADDRESS + APB1_FZ_Offset, 10> DBG_RTC_STOP; /* Debug RTC stopped when core is halted */
        Register::Bit<BASE_ADDRESS + APB1_FZ_Offset, 11> DBG_WWDG_STOP; /* Debug window watchdog stopped when core is halted */
        Register::Bit<BASE_ADDRESS + APB1_FZ_Offset, 12> DBG_IWDG_STOP; /* Debug independent watchdog stopped when core is halted */
        Register::Bit<BASE_ADDRESS + APB1_FZ_Offset, 21> DBG_I2C1_SMBUS_TIMEOUT; /* SMBUS timeout mode stopped when core is halted */
        Register::Bit<BASE_ADDRESS + APB1_FZ_Offset, 25> DBG_CAN_STOP; /* CAN stopped when core is halted */
    };

    class APB2_FZ_T : public Register::Register<DBGMCU_APB2_FZ::apb2_fz_reg_type, BASE_ADDRESS + APB2_FZ_Offset> {
    // Debug MCU APB2 freeze register
    public:
        Register::Bit<BASE_ADDRESS + APB2_FZ_Offset, 11> DBG_TIM1_STOP; /* TIM1 counter stopped when core is halted */
        Register::Bit<BASE_ADDRESS + APB2_FZ_Offset, 16> DBG_TIM15_STOP; /* TIM15 counter stopped when core is halted */
        Register::Bit<BASE_ADDRESS + APB2_FZ_Offset, 17> DBG_TIM16_STOP; /* TIM16 counter stopped when core is halted */
        Register::Bit<BASE_ADDRESS + APB2_FZ_Offset, 18> DBG_TIM17_STOP; /* TIM17 counter stopped when core is halted */
    };

    IDCODE_T IDCODE;
    CR_T CR;
    APB1_FZ_T APB1_FZ;
    APB2_FZ_T APB2_FZ;
};

} // namespace STM32LIB

#endif // STM32F0X1_DBGMCU_HPP_

