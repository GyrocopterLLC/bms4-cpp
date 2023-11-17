#ifndef STM32F0X1_PWR_HPP_
#define STM32F0X1_PWR_HPP_
#pragma once

#include <cstdint>
#include "Register.hpp"

/* Power control */
namespace STM32LIB { 

/* Overwritable types for each of the bitfields.
 * Defaults to uint32_t, but feel free to redefine with your
 * own custom enum class later. */
using CR_PLS_T = uint32_t;

namespace PWR_CR {

    enum class cr_reg_type {};

    template<bool tf>
    using DBP = Register::Combo_Bit<cr_reg_type, 8, tf>;

    template<CR_PLS_T val>
    using PLS = Register::Combo_Bitfield<cr_reg_type, 5, 3, CR_PLS_T, val>;

    template<bool tf>
    using PVDE = Register::Combo_Bit<cr_reg_type, 4, tf>;

    template<bool tf>
    using CSBF = Register::Combo_Bit<cr_reg_type, 3, tf>;

    template<bool tf>
    using CWUF = Register::Combo_Bit<cr_reg_type, 2, tf>;

    template<bool tf>
    using PDDS = Register::Combo_Bit<cr_reg_type, 1, tf>;

    template<bool tf>
    using LPDS = Register::Combo_Bit<cr_reg_type, 0, tf>;

} // PWR_CR
namespace PWR_CSR {

    enum class csr_reg_type {};

    template<bool tf>
    using WUF = Register::Combo_Bit<csr_reg_type, 0, tf>;

    template<bool tf>
    using SBF = Register::Combo_Bit<csr_reg_type, 1, tf>;

    template<bool tf>
    using PVDO = Register::Combo_Bit<csr_reg_type, 2, tf>;

    template<bool tf>
    using VREFINTRDY = Register::Combo_Bit<csr_reg_type, 3, tf>;

    template<bool tf>
    using EWUP1 = Register::Combo_Bit<csr_reg_type, 8, tf>;

    template<bool tf>
    using EWUP2 = Register::Combo_Bit<csr_reg_type, 9, tf>;

    template<bool tf>
    using EWUP3 = Register::Combo_Bit<csr_reg_type, 10, tf>;

    template<bool tf>
    using EWUP4 = Register::Combo_Bit<csr_reg_type, 11, tf>;

    template<bool tf>
    using EWUP5 = Register::Combo_Bit<csr_reg_type, 12, tf>;

    template<bool tf>
    using EWUP6 = Register::Combo_Bit<csr_reg_type, 13, tf>;

    template<bool tf>
    using EWUP7 = Register::Combo_Bit<csr_reg_type, 14, tf>;

    template<bool tf>
    using EWUP8 = Register::Combo_Bit<csr_reg_type, 15, tf>;

} // PWR_CSR
template<uint32_t BASE_ADDRESS>
class PWR {
public:
    static const uint32_t CR_Offset = 0x0000;
    static const uint32_t CSR_Offset = 0x0004;

    PWR() = default;
    PWR( const PWR& ) = delete;
    const PWR& operator=( const PWR& ) = delete;

    class CR_T : public Register::Register<PWR_CR::cr_reg_type, BASE_ADDRESS + CR_Offset> {
    // power control register
    public:
        Register::Bit<BASE_ADDRESS + CR_Offset, 8> DBP; /* Disable backup domain write protection */
        Register::Bitfield<BASE_ADDRESS + CR_Offset, 5, 3, CR_PLS_T> PLS; /* PVD level selection */
        Register::Bit<BASE_ADDRESS + CR_Offset, 4> PVDE; /* Power voltage detector enable */
        Register::Bit<BASE_ADDRESS + CR_Offset, 3> CSBF; /* Clear standby flag */
        Register::Bit<BASE_ADDRESS + CR_Offset, 2> CWUF; /* Clear wakeup flag */
        Register::Bit<BASE_ADDRESS + CR_Offset, 1> PDDS; /* Power down deepsleep */
        Register::Bit<BASE_ADDRESS + CR_Offset, 0> LPDS; /* Low-power deep sleep */
    };

    class CSR_T : public Register::Register<PWR_CSR::csr_reg_type, BASE_ADDRESS + CSR_Offset> {
    // power control/status register
    public:
        Register::Bit<BASE_ADDRESS + CSR_Offset, 0> WUF; /* Wakeup flag */
        Register::Bit<BASE_ADDRESS + CSR_Offset, 1> SBF; /* Standby flag */
        Register::Bit<BASE_ADDRESS + CSR_Offset, 2> PVDO; /* PVD output */
        Register::Bit<BASE_ADDRESS + CSR_Offset, 3> VREFINTRDY; /* VREFINT reference voltage ready */
        Register::Bit<BASE_ADDRESS + CSR_Offset, 8> EWUP1; /* Enable WKUP pin 1 */
        Register::Bit<BASE_ADDRESS + CSR_Offset, 9> EWUP2; /* Enable WKUP pin 2 */
        Register::Bit<BASE_ADDRESS + CSR_Offset, 10> EWUP3; /* Enable WKUP pin 3 */
        Register::Bit<BASE_ADDRESS + CSR_Offset, 11> EWUP4; /* Enable WKUP pin 4 */
        Register::Bit<BASE_ADDRESS + CSR_Offset, 12> EWUP5; /* Enable WKUP pin 5 */
        Register::Bit<BASE_ADDRESS + CSR_Offset, 13> EWUP6; /* Enable WKUP pin 6 */
        Register::Bit<BASE_ADDRESS + CSR_Offset, 14> EWUP7; /* Enable WKUP pin 7 */
        Register::Bit<BASE_ADDRESS + CSR_Offset, 15> EWUP8; /* Enable WKUP pin 8 */
    };

    CR_T CR;
    CSR_T CSR;
};

} // namespace STM32LIB

#endif // STM32F0X1_PWR_HPP_

