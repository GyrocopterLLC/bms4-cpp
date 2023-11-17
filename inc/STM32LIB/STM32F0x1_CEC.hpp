#ifndef STM32F0X1_CEC_HPP_
#define STM32F0X1_CEC_HPP_
#pragma once

#include <cstdint>
#include "Register.hpp"

/* HDMI-CEC controller */
namespace STM32LIB { 

/* Overwritable types for each of the bitfields.
 * Defaults to uint32_t, but feel free to redefine with your
 * own custom enum class later. */
using CFGR_SFT_T = uint32_t;
using CFGR_OAR_T = uint32_t;
using TXDR_TXD_T = uint32_t;
using RXDR_RXDR_T = uint32_t;

namespace CEC_CR {

    enum class cr_reg_type {};

    template<bool tf>
    using TXEOM = Register::Combo_Bit<cr_reg_type, 2, tf>;

    template<bool tf>
    using TXSOM = Register::Combo_Bit<cr_reg_type, 1, tf>;

    template<bool tf>
    using CECEN = Register::Combo_Bit<cr_reg_type, 0, tf>;

} // CEC_CR
namespace CEC_CFGR {

    enum class cfgr_reg_type {};

    template<bool tf>
    using LBPEGEN = Register::Combo_Bit<cfgr_reg_type, 11, tf>;

    template<bool tf>
    using BREGEN = Register::Combo_Bit<cfgr_reg_type, 10, tf>;

    template<bool tf>
    using BRESTP = Register::Combo_Bit<cfgr_reg_type, 9, tf>;

    template<bool tf>
    using RXTOL = Register::Combo_Bit<cfgr_reg_type, 8, tf>;

    template<CFGR_SFT_T val>
    using SFT = Register::Combo_Bitfield<cfgr_reg_type, 5, 3, CFGR_SFT_T, val>;

    template<bool tf>
    using LSTN = Register::Combo_Bit<cfgr_reg_type, 4, tf>;

    template<CFGR_OAR_T val>
    using OAR = Register::Combo_Bitfield<cfgr_reg_type, 0, 4, CFGR_OAR_T, val>;

} // CEC_CFGR
namespace CEC_TXDR {

    enum class txdr_reg_type {};

    template<TXDR_TXD_T val>
    using TXD = Register::Combo_Bitfield<txdr_reg_type, 0, 8, TXDR_TXD_T, val>;

} // CEC_TXDR
namespace CEC_RXDR {

    enum class rxdr_reg_type {};

    template<RXDR_RXDR_T val>
    using RXDR = Register::Combo_Bitfield<rxdr_reg_type, 0, 8, RXDR_RXDR_T, val>;

} // CEC_RXDR
namespace CEC_ISR {

    enum class isr_reg_type {};

    template<bool tf>
    using TXACKE = Register::Combo_Bit<isr_reg_type, 12, tf>;

    template<bool tf>
    using TXERR = Register::Combo_Bit<isr_reg_type, 11, tf>;

    template<bool tf>
    using TXUDR = Register::Combo_Bit<isr_reg_type, 10, tf>;

    template<bool tf>
    using TXEND = Register::Combo_Bit<isr_reg_type, 9, tf>;

    template<bool tf>
    using TXBR = Register::Combo_Bit<isr_reg_type, 8, tf>;

    template<bool tf>
    using ARBLST = Register::Combo_Bit<isr_reg_type, 7, tf>;

    template<bool tf>
    using RXACKE = Register::Combo_Bit<isr_reg_type, 6, tf>;

    template<bool tf>
    using LBPE = Register::Combo_Bit<isr_reg_type, 5, tf>;

    template<bool tf>
    using SBPE = Register::Combo_Bit<isr_reg_type, 4, tf>;

    template<bool tf>
    using BRE = Register::Combo_Bit<isr_reg_type, 3, tf>;

    template<bool tf>
    using RXOVR = Register::Combo_Bit<isr_reg_type, 2, tf>;

    template<bool tf>
    using RXEND = Register::Combo_Bit<isr_reg_type, 1, tf>;

    template<bool tf>
    using RXBR = Register::Combo_Bit<isr_reg_type, 0, tf>;

} // CEC_ISR
namespace CEC_IER {

    enum class ier_reg_type {};

    template<bool tf>
    using TXACKIE = Register::Combo_Bit<ier_reg_type, 12, tf>;

    template<bool tf>
    using TXERRIE = Register::Combo_Bit<ier_reg_type, 11, tf>;

    template<bool tf>
    using TXUDRIE = Register::Combo_Bit<ier_reg_type, 10, tf>;

    template<bool tf>
    using TXENDIE = Register::Combo_Bit<ier_reg_type, 9, tf>;

    template<bool tf>
    using TXBRIE = Register::Combo_Bit<ier_reg_type, 8, tf>;

    template<bool tf>
    using ARBLSTIE = Register::Combo_Bit<ier_reg_type, 7, tf>;

    template<bool tf>
    using RXACKIE = Register::Combo_Bit<ier_reg_type, 6, tf>;

    template<bool tf>
    using LBPEIE = Register::Combo_Bit<ier_reg_type, 5, tf>;

    template<bool tf>
    using SBPEIE = Register::Combo_Bit<ier_reg_type, 4, tf>;

    template<bool tf>
    using BREIE = Register::Combo_Bit<ier_reg_type, 3, tf>;

    template<bool tf>
    using RXOVRIE = Register::Combo_Bit<ier_reg_type, 2, tf>;

    template<bool tf>
    using RXENDIE = Register::Combo_Bit<ier_reg_type, 1, tf>;

    template<bool tf>
    using RXBRIE = Register::Combo_Bit<ier_reg_type, 0, tf>;

} // CEC_IER
template<uint32_t BASE_ADDRESS>
class CEC {
public:
    static const uint32_t CR_Offset = 0x0000;
    static const uint32_t CFGR_Offset = 0x0004;
    static const uint32_t TXDR_Offset = 0x0008;
    static const uint32_t RXDR_Offset = 0x000C;
    static const uint32_t ISR_Offset = 0x0010;
    static const uint32_t IER_Offset = 0x0014;

    CEC() = default;
    CEC( const CEC& ) = delete;
    const CEC& operator=( const CEC& ) = delete;

    class CR_T : public Register::Register<CEC_CR::cr_reg_type, BASE_ADDRESS + CR_Offset> {
    // control register
    public:
        Register::Bit<BASE_ADDRESS + CR_Offset, 2> TXEOM; /* Tx End Of Message */
        Register::Bit<BASE_ADDRESS + CR_Offset, 1> TXSOM; /* Tx start of message */
        Register::Bit<BASE_ADDRESS + CR_Offset, 0> CECEN; /* CEC Enable */
    };

    class CFGR_T : public Register::Register<CEC_CFGR::cfgr_reg_type, BASE_ADDRESS + CFGR_Offset> {
    // configuration register
    public:
        Register::Bit<BASE_ADDRESS + CFGR_Offset, 11> LBPEGEN; /* Generate Error-Bit on Long Bit Period Error */
        Register::Bit<BASE_ADDRESS + CFGR_Offset, 10> BREGEN; /* Generate error-bit on bit rising error */
        Register::Bit<BASE_ADDRESS + CFGR_Offset, 9> BRESTP; /* Rx-stop on bit rising error */
        Register::Bit<BASE_ADDRESS + CFGR_Offset, 8> RXTOL; /* Rx-Tolerance */
        Register::Bitfield<BASE_ADDRESS + CFGR_Offset, 5, 3, CFGR_SFT_T> SFT; /* Signal Free Time */
        Register::Bit<BASE_ADDRESS + CFGR_Offset, 4> LSTN; /* Listen mode */
        Register::Bitfield<BASE_ADDRESS + CFGR_Offset, 0, 4, CFGR_OAR_T> OAR; /* Own Address */
    };

    class TXDR_T : public Register::Register<CEC_TXDR::txdr_reg_type, BASE_ADDRESS + TXDR_Offset> {
    // Tx data register
    public:
        Register::Bitfield<BASE_ADDRESS + TXDR_Offset, 0, 8, TXDR_TXD_T> TXD; /* Tx Data register */
    };

    class RXDR_T : public Register::Register<CEC_RXDR::rxdr_reg_type, BASE_ADDRESS + RXDR_Offset> {
    // Rx Data Register
    public:
        Register::Bitfield<BASE_ADDRESS + RXDR_Offset, 0, 8, RXDR_RXDR_T> RXDR; /* CEC Rx Data Register */
    };

    class ISR_T : public Register::Register<CEC_ISR::isr_reg_type, BASE_ADDRESS + ISR_Offset> {
    // Interrupt and Status Register
    public:
        Register::Bit<BASE_ADDRESS + ISR_Offset, 12> TXACKE; /* Tx-Missing acknowledge error */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 11> TXERR; /* Tx-Error */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 10> TXUDR; /* Tx-Buffer Underrun */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 9> TXEND; /* End of Transmission */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 8> TXBR; /* Tx-Byte Request */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 7> ARBLST; /* Arbitration Lost */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 6> RXACKE; /* Rx-Missing Acknowledge */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 5> LBPE; /* Rx-Long Bit Period Error */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 4> SBPE; /* Rx-Short Bit period error */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 3> BRE; /* Rx-Bit rising error */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 2> RXOVR; /* Rx-Overrun */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 1> RXEND; /* End Of Reception */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 0> RXBR; /* Rx-Byte Received */
    };

    class IER_T : public Register::Register<CEC_IER::ier_reg_type, BASE_ADDRESS + IER_Offset> {
    // interrupt enable register
    public:
        Register::Bit<BASE_ADDRESS + IER_Offset, 12> TXACKIE; /* Tx-Missing Acknowledge Error Interrupt Enable */
        Register::Bit<BASE_ADDRESS + IER_Offset, 11> TXERRIE; /* Tx-Error Interrupt Enable */
        Register::Bit<BASE_ADDRESS + IER_Offset, 10> TXUDRIE; /* Tx-Underrun interrupt enable */
        Register::Bit<BASE_ADDRESS + IER_Offset, 9> TXENDIE; /* Tx-End of message interrupt enable */
        Register::Bit<BASE_ADDRESS + IER_Offset, 8> TXBRIE; /* Tx-Byte Request Interrupt Enable */
        Register::Bit<BASE_ADDRESS + IER_Offset, 7> ARBLSTIE; /* Arbitration Lost Interrupt Enable */
        Register::Bit<BASE_ADDRESS + IER_Offset, 6> RXACKIE; /* Rx-Missing Acknowledge Error Interrupt Enable */
        Register::Bit<BASE_ADDRESS + IER_Offset, 5> LBPEIE; /* Long Bit Period Error Interrupt Enable */
        Register::Bit<BASE_ADDRESS + IER_Offset, 4> SBPEIE; /* Short Bit Period Error Interrupt Enable */
        Register::Bit<BASE_ADDRESS + IER_Offset, 3> BREIE; /* Bit Rising Error Interrupt Enable */
        Register::Bit<BASE_ADDRESS + IER_Offset, 2> RXOVRIE; /* Rx-Buffer Overrun Interrupt Enable */
        Register::Bit<BASE_ADDRESS + IER_Offset, 1> RXENDIE; /* End Of Reception Interrupt Enable */
        Register::Bit<BASE_ADDRESS + IER_Offset, 0> RXBRIE; /* Rx-Byte Received Interrupt Enable */
    };

    CR_T CR;
    CFGR_T CFGR;
    TXDR_T TXDR;
    RXDR_T RXDR;
    ISR_T ISR;
    IER_T IER;
};

} // namespace STM32LIB

#endif // STM32F0X1_CEC_HPP_

