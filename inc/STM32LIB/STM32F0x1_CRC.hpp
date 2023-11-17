#ifndef STM32F0X1_CRC_HPP_
#define STM32F0X1_CRC_HPP_
#pragma once

#include <cstdint>
#include "Register.hpp"

/* cyclic redundancy check calculation unit */
namespace STM32LIB { 

/* Overwritable types for each of the bitfields.
 * Defaults to uint32_t, but feel free to redefine with your
 * own custom enum class later. */
using DR_DR_T = uint32_t;
using IDR_IDR_T = uint32_t;
using CR_POLYSIZE_T = uint32_t;
using CR_REV_IN_T = uint32_t;
using INIT_INIT_T = uint32_t;

namespace CRC_DR {

    enum class dr_reg_type {};

    template<DR_DR_T val>
    using DR = Register::Combo_Bitfield<dr_reg_type, 0, 32, DR_DR_T, val>;

} // CRC_DR
namespace CRC_IDR {

    enum class idr_reg_type {};

    template<IDR_IDR_T val>
    using IDR = Register::Combo_Bitfield<idr_reg_type, 0, 8, IDR_IDR_T, val>;

} // CRC_IDR
namespace CRC_CR {

    enum class cr_reg_type {};

    template<bool tf>
    using RESET = Register::Combo_Bit<cr_reg_type, 0, tf>;

    template<CR_POLYSIZE_T val>
    using POLYSIZE = Register::Combo_Bitfield<cr_reg_type, 3, 2, CR_POLYSIZE_T, val>;

    template<CR_REV_IN_T val>
    using REV_IN = Register::Combo_Bitfield<cr_reg_type, 5, 2, CR_REV_IN_T, val>;

    template<bool tf>
    using REV_OUT = Register::Combo_Bit<cr_reg_type, 7, tf>;

} // CRC_CR
namespace CRC_INIT {

    enum class init_reg_type {};

    template<INIT_INIT_T val>
    using INIT = Register::Combo_Bitfield<init_reg_type, 0, 32, INIT_INIT_T, val>;

} // CRC_INIT
template<uint32_t BASE_ADDRESS>
class CRC {
public:
    static const uint32_t DR_Offset = 0x0000;
    static const uint32_t IDR_Offset = 0x0004;
    static const uint32_t CR_Offset = 0x0008;
    static const uint32_t INIT_Offset = 0x000C;

    CRC() = default;
    CRC( const CRC& ) = delete;
    const CRC& operator=( const CRC& ) = delete;

    class DR_T : public Register::Register<CRC_DR::dr_reg_type, BASE_ADDRESS + DR_Offset> {
    // Data register
    public:
        Register::Bitfield<BASE_ADDRESS + DR_Offset, 0, 32, DR_DR_T> DR; /* Data register bits */
    };

    class IDR_T : public Register::Register<CRC_IDR::idr_reg_type, BASE_ADDRESS + IDR_Offset> {
    // Independent data register
    public:
        Register::Bitfield<BASE_ADDRESS + IDR_Offset, 0, 8, IDR_IDR_T> IDR; /* General-purpose 8-bit data register bits */
    };

    class CR_T : public Register::Register<CRC_CR::cr_reg_type, BASE_ADDRESS + CR_Offset> {
    // Control register
    public:
        Register::Bit<BASE_ADDRESS + CR_Offset, 0> RESET; /* reset bit */
        Register::Bitfield<BASE_ADDRESS + CR_Offset, 3, 2, CR_POLYSIZE_T> POLYSIZE; /* Polynomial size */
        Register::Bitfield<BASE_ADDRESS + CR_Offset, 5, 2, CR_REV_IN_T> REV_IN; /* Reverse input data */
        Register::Bit<BASE_ADDRESS + CR_Offset, 7> REV_OUT; /* Reverse output data */
    };

    class INIT_T : public Register::Register<CRC_INIT::init_reg_type, BASE_ADDRESS + INIT_Offset> {
    // Initial CRC value
    public:
        Register::Bitfield<BASE_ADDRESS + INIT_Offset, 0, 32, INIT_INIT_T> INIT; /* Programmable initial CRC value */
    };

    DR_T DR;
    IDR_T IDR;
    CR_T CR;
    INIT_T INIT;
};

} // namespace STM32LIB

#endif // STM32F0X1_CRC_HPP_

