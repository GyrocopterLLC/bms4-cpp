#ifndef STM32F0X1_I2C2_HPP_
#define STM32F0X1_I2C2_HPP_
#pragma once

#include <cstdint>
#include "Register.hpp"

/* Inter-integrated circuit */
namespace STM32LIB { 

/* Overwritable types for each of the bitfields.
 * Defaults to uint32_t, but feel free to redefine with your
 * own custom enum class later. */
using CR1_DNF_T = uint32_t;
using CR2_NBYTES_T = uint32_t;
using CR2_SADD8_T = uint32_t;
using CR2_SADD1_T = uint32_t;
using OAR1_OA1_1_T = uint32_t;
using OAR1_OA1_8_T = uint32_t;
using OAR2_OA2_T = uint32_t;
using OAR2_OA2MSK_T = uint32_t;
using TIMINGR_SCLL_T = uint32_t;
using TIMINGR_SCLH_T = uint32_t;
using TIMINGR_SDADEL_T = uint32_t;
using TIMINGR_SCLDEL_T = uint32_t;
using TIMINGR_PRESC_T = uint32_t;
using TIMEOUTR_TIMEOUTA_T = uint32_t;
using TIMEOUTR_TIMEOUTB_T = uint32_t;
using ISR_ADDCODE_T = uint32_t;
using PECR_PEC_T = uint32_t;
using RXDR_RXDATA_T = uint32_t;
using TXDR_TXDATA_T = uint32_t;

namespace I2C2_CR1 {

    enum class cr1_reg_type {};

    template<bool tf>
    using PE = Register::Combo_Bit<cr1_reg_type, 0, tf>;

    template<bool tf>
    using TXIE = Register::Combo_Bit<cr1_reg_type, 1, tf>;

    template<bool tf>
    using RXIE = Register::Combo_Bit<cr1_reg_type, 2, tf>;

    template<bool tf>
    using ADDRIE = Register::Combo_Bit<cr1_reg_type, 3, tf>;

    template<bool tf>
    using NACKIE = Register::Combo_Bit<cr1_reg_type, 4, tf>;

    template<bool tf>
    using STOPIE = Register::Combo_Bit<cr1_reg_type, 5, tf>;

    template<bool tf>
    using TCIE = Register::Combo_Bit<cr1_reg_type, 6, tf>;

    template<bool tf>
    using ERRIE = Register::Combo_Bit<cr1_reg_type, 7, tf>;

    template<CR1_DNF_T val>
    using DNF = Register::Combo_Bitfield<cr1_reg_type, 8, 4, CR1_DNF_T, val>;

    template<bool tf>
    using ANFOFF = Register::Combo_Bit<cr1_reg_type, 12, tf>;

    template<bool tf>
    using SWRST = Register::Combo_Bit<cr1_reg_type, 13, tf>;

    template<bool tf>
    using TXDMAEN = Register::Combo_Bit<cr1_reg_type, 14, tf>;

    template<bool tf>
    using RXDMAEN = Register::Combo_Bit<cr1_reg_type, 15, tf>;

    template<bool tf>
    using SBC = Register::Combo_Bit<cr1_reg_type, 16, tf>;

    template<bool tf>
    using NOSTRETCH = Register::Combo_Bit<cr1_reg_type, 17, tf>;

    template<bool tf>
    using WUPEN = Register::Combo_Bit<cr1_reg_type, 18, tf>;

    template<bool tf>
    using GCEN = Register::Combo_Bit<cr1_reg_type, 19, tf>;

    template<bool tf>
    using SMBHEN = Register::Combo_Bit<cr1_reg_type, 20, tf>;

    template<bool tf>
    using SMBDEN = Register::Combo_Bit<cr1_reg_type, 21, tf>;

    template<bool tf>
    using ALERTEN = Register::Combo_Bit<cr1_reg_type, 22, tf>;

    template<bool tf>
    using PECEN = Register::Combo_Bit<cr1_reg_type, 23, tf>;

} // I2C2_CR1
namespace I2C2_CR2 {

    enum class cr2_reg_type {};

    template<bool tf>
    using PECBYTE = Register::Combo_Bit<cr2_reg_type, 26, tf>;

    template<bool tf>
    using AUTOEND = Register::Combo_Bit<cr2_reg_type, 25, tf>;

    template<bool tf>
    using RELOAD = Register::Combo_Bit<cr2_reg_type, 24, tf>;

    template<CR2_NBYTES_T val>
    using NBYTES = Register::Combo_Bitfield<cr2_reg_type, 16, 8, CR2_NBYTES_T, val>;

    template<bool tf>
    using NACK = Register::Combo_Bit<cr2_reg_type, 15, tf>;

    template<bool tf>
    using STOP = Register::Combo_Bit<cr2_reg_type, 14, tf>;

    template<bool tf>
    using START = Register::Combo_Bit<cr2_reg_type, 13, tf>;

    template<bool tf>
    using HEAD10R = Register::Combo_Bit<cr2_reg_type, 12, tf>;

    template<bool tf>
    using ADD10 = Register::Combo_Bit<cr2_reg_type, 11, tf>;

    template<bool tf>
    using RD_WRN = Register::Combo_Bit<cr2_reg_type, 10, tf>;

    template<CR2_SADD8_T val>
    using SADD8 = Register::Combo_Bitfield<cr2_reg_type, 8, 2, CR2_SADD8_T, val>;

    template<CR2_SADD1_T val>
    using SADD1 = Register::Combo_Bitfield<cr2_reg_type, 1, 7, CR2_SADD1_T, val>;

    template<bool tf>
    using SADD0 = Register::Combo_Bit<cr2_reg_type, 0, tf>;

} // I2C2_CR2
namespace I2C2_OAR1 {

    enum class oar1_reg_type {};

    template<bool tf>
    using OA1_0 = Register::Combo_Bit<oar1_reg_type, 0, tf>;

    template<OAR1_OA1_1_T val>
    using OA1_1 = Register::Combo_Bitfield<oar1_reg_type, 1, 7, OAR1_OA1_1_T, val>;

    template<OAR1_OA1_8_T val>
    using OA1_8 = Register::Combo_Bitfield<oar1_reg_type, 8, 2, OAR1_OA1_8_T, val>;

    template<bool tf>
    using OA1MODE = Register::Combo_Bit<oar1_reg_type, 10, tf>;

    template<bool tf>
    using OA1EN = Register::Combo_Bit<oar1_reg_type, 15, tf>;

} // I2C2_OAR1
namespace I2C2_OAR2 {

    enum class oar2_reg_type {};

    template<OAR2_OA2_T val>
    using OA2 = Register::Combo_Bitfield<oar2_reg_type, 1, 7, OAR2_OA2_T, val>;

    template<OAR2_OA2MSK_T val>
    using OA2MSK = Register::Combo_Bitfield<oar2_reg_type, 8, 3, OAR2_OA2MSK_T, val>;

    template<bool tf>
    using OA2EN = Register::Combo_Bit<oar2_reg_type, 15, tf>;

} // I2C2_OAR2
namespace I2C2_TIMINGR {

    enum class timingr_reg_type {};

    template<TIMINGR_SCLL_T val>
    using SCLL = Register::Combo_Bitfield<timingr_reg_type, 0, 8, TIMINGR_SCLL_T, val>;

    template<TIMINGR_SCLH_T val>
    using SCLH = Register::Combo_Bitfield<timingr_reg_type, 8, 8, TIMINGR_SCLH_T, val>;

    template<TIMINGR_SDADEL_T val>
    using SDADEL = Register::Combo_Bitfield<timingr_reg_type, 16, 4, TIMINGR_SDADEL_T, val>;

    template<TIMINGR_SCLDEL_T val>
    using SCLDEL = Register::Combo_Bitfield<timingr_reg_type, 20, 4, TIMINGR_SCLDEL_T, val>;

    template<TIMINGR_PRESC_T val>
    using PRESC = Register::Combo_Bitfield<timingr_reg_type, 28, 4, TIMINGR_PRESC_T, val>;

} // I2C2_TIMINGR
namespace I2C2_TIMEOUTR {

    enum class timeoutr_reg_type {};

    template<TIMEOUTR_TIMEOUTA_T val>
    using TIMEOUTA = Register::Combo_Bitfield<timeoutr_reg_type, 0, 12, TIMEOUTR_TIMEOUTA_T, val>;

    template<bool tf>
    using TIDLE = Register::Combo_Bit<timeoutr_reg_type, 12, tf>;

    template<bool tf>
    using TIMOUTEN = Register::Combo_Bit<timeoutr_reg_type, 15, tf>;

    template<TIMEOUTR_TIMEOUTB_T val>
    using TIMEOUTB = Register::Combo_Bitfield<timeoutr_reg_type, 16, 12, TIMEOUTR_TIMEOUTB_T, val>;

    template<bool tf>
    using TEXTEN = Register::Combo_Bit<timeoutr_reg_type, 31, tf>;

} // I2C2_TIMEOUTR
namespace I2C2_ISR {

    enum class isr_reg_type {};

    template<ISR_ADDCODE_T val>
    using ADDCODE = Register::Combo_Bitfield<isr_reg_type, 17, 7, ISR_ADDCODE_T, val>;

    template<bool tf>
    using DIR = Register::Combo_Bit<isr_reg_type, 16, tf>;

    template<bool tf>
    using BUSY = Register::Combo_Bit<isr_reg_type, 15, tf>;

    template<bool tf>
    using ALERT = Register::Combo_Bit<isr_reg_type, 13, tf>;

    template<bool tf>
    using TIMEOUT = Register::Combo_Bit<isr_reg_type, 12, tf>;

    template<bool tf>
    using PECERR = Register::Combo_Bit<isr_reg_type, 11, tf>;

    template<bool tf>
    using OVR = Register::Combo_Bit<isr_reg_type, 10, tf>;

    template<bool tf>
    using ARLO = Register::Combo_Bit<isr_reg_type, 9, tf>;

    template<bool tf>
    using BERR = Register::Combo_Bit<isr_reg_type, 8, tf>;

    template<bool tf>
    using TCR = Register::Combo_Bit<isr_reg_type, 7, tf>;

    template<bool tf>
    using TC = Register::Combo_Bit<isr_reg_type, 6, tf>;

    template<bool tf>
    using STOPF = Register::Combo_Bit<isr_reg_type, 5, tf>;

    template<bool tf>
    using NACKF = Register::Combo_Bit<isr_reg_type, 4, tf>;

    template<bool tf>
    using ADDR = Register::Combo_Bit<isr_reg_type, 3, tf>;

    template<bool tf>
    using RXNE = Register::Combo_Bit<isr_reg_type, 2, tf>;

    template<bool tf>
    using TXIS = Register::Combo_Bit<isr_reg_type, 1, tf>;

    template<bool tf>
    using TXE = Register::Combo_Bit<isr_reg_type, 0, tf>;

} // I2C2_ISR
namespace I2C2_ICR {

    enum class icr_reg_type {};

    template<bool tf>
    using ALERTCF = Register::Combo_Bit<icr_reg_type, 13, tf>;

    template<bool tf>
    using TIMOUTCF = Register::Combo_Bit<icr_reg_type, 12, tf>;

    template<bool tf>
    using PECCF = Register::Combo_Bit<icr_reg_type, 11, tf>;

    template<bool tf>
    using OVRCF = Register::Combo_Bit<icr_reg_type, 10, tf>;

    template<bool tf>
    using ARLOCF = Register::Combo_Bit<icr_reg_type, 9, tf>;

    template<bool tf>
    using BERRCF = Register::Combo_Bit<icr_reg_type, 8, tf>;

    template<bool tf>
    using STOPCF = Register::Combo_Bit<icr_reg_type, 5, tf>;

    template<bool tf>
    using NACKCF = Register::Combo_Bit<icr_reg_type, 4, tf>;

    template<bool tf>
    using ADDRCF = Register::Combo_Bit<icr_reg_type, 3, tf>;

} // I2C2_ICR
namespace I2C2_PECR {

    enum class pecr_reg_type {};

    template<PECR_PEC_T val>
    using PEC = Register::Combo_Bitfield<pecr_reg_type, 0, 8, PECR_PEC_T, val>;

} // I2C2_PECR
namespace I2C2_RXDR {

    enum class rxdr_reg_type {};

    template<RXDR_RXDATA_T val>
    using RXDATA = Register::Combo_Bitfield<rxdr_reg_type, 0, 8, RXDR_RXDATA_T, val>;

} // I2C2_RXDR
namespace I2C2_TXDR {

    enum class txdr_reg_type {};

    template<TXDR_TXDATA_T val>
    using TXDATA = Register::Combo_Bitfield<txdr_reg_type, 0, 8, TXDR_TXDATA_T, val>;

} // I2C2_TXDR
template<uint32_t BASE_ADDRESS>
class I2C2 {
public:
    static const uint32_t CR1_Offset = 0x0000;
    static const uint32_t CR2_Offset = 0x0004;
    static const uint32_t OAR1_Offset = 0x0008;
    static const uint32_t OAR2_Offset = 0x000C;
    static const uint32_t TIMINGR_Offset = 0x0010;
    static const uint32_t TIMEOUTR_Offset = 0x0014;
    static const uint32_t ISR_Offset = 0x0018;
    static const uint32_t ICR_Offset = 0x001C;
    static const uint32_t PECR_Offset = 0x0020;
    static const uint32_t RXDR_Offset = 0x0024;
    static const uint32_t TXDR_Offset = 0x0028;

    I2C2() = default;
    I2C2( const I2C2& ) = delete;
    const I2C2& operator=( const I2C2& ) = delete;

    class CR1_T : public Register::Register<I2C2_CR1::cr1_reg_type, BASE_ADDRESS + CR1_Offset> {
    // Control register 1
    public:
        Register::Bit<BASE_ADDRESS + CR1_Offset, 0> PE; /* Peripheral enable */
        Register::Bit<BASE_ADDRESS + CR1_Offset, 1> TXIE; /* TX Interrupt enable */
        Register::Bit<BASE_ADDRESS + CR1_Offset, 2> RXIE; /* RX Interrupt enable */
        Register::Bit<BASE_ADDRESS + CR1_Offset, 3> ADDRIE; /* Address match interrupt enable (slave only) */
        Register::Bit<BASE_ADDRESS + CR1_Offset, 4> NACKIE; /* Not acknowledge received interrupt enable */
        Register::Bit<BASE_ADDRESS + CR1_Offset, 5> STOPIE; /* STOP detection Interrupt enable */
        Register::Bit<BASE_ADDRESS + CR1_Offset, 6> TCIE; /* Transfer Complete interrupt enable */
        Register::Bit<BASE_ADDRESS + CR1_Offset, 7> ERRIE; /* Error interrupts enable */
        Register::Bitfield<BASE_ADDRESS + CR1_Offset, 8, 4, CR1_DNF_T> DNF; /* Digital noise filter */
        Register::Bit<BASE_ADDRESS + CR1_Offset, 12> ANFOFF; /* Analog noise filter OFF */
        Register::Bit<BASE_ADDRESS + CR1_Offset, 13> SWRST; /* Software reset */
        Register::Bit<BASE_ADDRESS + CR1_Offset, 14> TXDMAEN; /* DMA transmission requests enable */
        Register::Bit<BASE_ADDRESS + CR1_Offset, 15> RXDMAEN; /* DMA reception requests enable */
        Register::Bit<BASE_ADDRESS + CR1_Offset, 16> SBC; /* Slave byte control */
        Register::Bit<BASE_ADDRESS + CR1_Offset, 17> NOSTRETCH; /* Clock stretching disable */
        Register::Bit<BASE_ADDRESS + CR1_Offset, 18> WUPEN; /* Wakeup from STOP enable */
        Register::Bit<BASE_ADDRESS + CR1_Offset, 19> GCEN; /* General call enable */
        Register::Bit<BASE_ADDRESS + CR1_Offset, 20> SMBHEN; /* SMBus Host address enable */
        Register::Bit<BASE_ADDRESS + CR1_Offset, 21> SMBDEN; /* SMBus Device Default address enable */
        Register::Bit<BASE_ADDRESS + CR1_Offset, 22> ALERTEN; /* SMBUS alert enable */
        Register::Bit<BASE_ADDRESS + CR1_Offset, 23> PECEN; /* PEC enable */
    };

    class CR2_T : public Register::Register<I2C2_CR2::cr2_reg_type, BASE_ADDRESS + CR2_Offset> {
    // Control register 2
    public:
        Register::Bit<BASE_ADDRESS + CR2_Offset, 26> PECBYTE; /* Packet error checking byte */
        Register::Bit<BASE_ADDRESS + CR2_Offset, 25> AUTOEND; /* Automatic end mode (master mode) */
        Register::Bit<BASE_ADDRESS + CR2_Offset, 24> RELOAD; /* NBYTES reload mode */
        Register::Bitfield<BASE_ADDRESS + CR2_Offset, 16, 8, CR2_NBYTES_T> NBYTES; /* Number of bytes */
        Register::Bit<BASE_ADDRESS + CR2_Offset, 15> NACK; /* NACK generation (slave mode) */
        Register::Bit<BASE_ADDRESS + CR2_Offset, 14> STOP; /* Stop generation (master mode) */
        Register::Bit<BASE_ADDRESS + CR2_Offset, 13> START; /* Start generation */
        Register::Bit<BASE_ADDRESS + CR2_Offset, 12> HEAD10R; /* 10-bit address header only read direction (master receiver mode) */
        Register::Bit<BASE_ADDRESS + CR2_Offset, 11> ADD10; /* 10-bit addressing mode (master mode) */
        Register::Bit<BASE_ADDRESS + CR2_Offset, 10> RD_WRN; /* Transfer direction (master mode) */
        Register::Bitfield<BASE_ADDRESS + CR2_Offset, 8, 2, CR2_SADD8_T> SADD8; /* Slave address bit 9:8 (master mode) */
        Register::Bitfield<BASE_ADDRESS + CR2_Offset, 1, 7, CR2_SADD1_T> SADD1; /* Slave address bit 7:1 (master mode) */
        Register::Bit<BASE_ADDRESS + CR2_Offset, 0> SADD0; /* Slave address bit 0 (master mode) */
    };

    class OAR1_T : public Register::Register<I2C2_OAR1::oar1_reg_type, BASE_ADDRESS + OAR1_Offset> {
    // Own address register 1
    public:
        Register::Bit<BASE_ADDRESS + OAR1_Offset, 0> OA1_0; /* Interface address */
        Register::Bitfield<BASE_ADDRESS + OAR1_Offset, 1, 7, OAR1_OA1_1_T> OA1_1; /* Interface address */
        Register::Bitfield<BASE_ADDRESS + OAR1_Offset, 8, 2, OAR1_OA1_8_T> OA1_8; /* Interface address */
        Register::Bit<BASE_ADDRESS + OAR1_Offset, 10> OA1MODE; /* Own Address 1 10-bit mode */
        Register::Bit<BASE_ADDRESS + OAR1_Offset, 15> OA1EN; /* Own Address 1 enable */
    };

    class OAR2_T : public Register::Register<I2C2_OAR2::oar2_reg_type, BASE_ADDRESS + OAR2_Offset> {
    // Own address register 2
    public:
        Register::Bitfield<BASE_ADDRESS + OAR2_Offset, 1, 7, OAR2_OA2_T> OA2; /* Interface address */
        Register::Bitfield<BASE_ADDRESS + OAR2_Offset, 8, 3, OAR2_OA2MSK_T> OA2MSK; /* Own Address 2 masks */
        Register::Bit<BASE_ADDRESS + OAR2_Offset, 15> OA2EN; /* Own Address 2 enable */
    };

    class TIMINGR_T : public Register::Register<I2C2_TIMINGR::timingr_reg_type, BASE_ADDRESS + TIMINGR_Offset> {
    // Timing register
    public:
        Register::Bitfield<BASE_ADDRESS + TIMINGR_Offset, 0, 8, TIMINGR_SCLL_T> SCLL; /* SCL low period (master mode) */
        Register::Bitfield<BASE_ADDRESS + TIMINGR_Offset, 8, 8, TIMINGR_SCLH_T> SCLH; /* SCL high period (master mode) */
        Register::Bitfield<BASE_ADDRESS + TIMINGR_Offset, 16, 4, TIMINGR_SDADEL_T> SDADEL; /* Data hold time */
        Register::Bitfield<BASE_ADDRESS + TIMINGR_Offset, 20, 4, TIMINGR_SCLDEL_T> SCLDEL; /* Data setup time */
        Register::Bitfield<BASE_ADDRESS + TIMINGR_Offset, 28, 4, TIMINGR_PRESC_T> PRESC; /* Timing prescaler */
    };

    class TIMEOUTR_T : public Register::Register<I2C2_TIMEOUTR::timeoutr_reg_type, BASE_ADDRESS + TIMEOUTR_Offset> {
    // Status register 1
    public:
        Register::Bitfield<BASE_ADDRESS + TIMEOUTR_Offset, 0, 12, TIMEOUTR_TIMEOUTA_T> TIMEOUTA; /* Bus timeout A */
        Register::Bit<BASE_ADDRESS + TIMEOUTR_Offset, 12> TIDLE; /* Idle clock timeout detection */
        Register::Bit<BASE_ADDRESS + TIMEOUTR_Offset, 15> TIMOUTEN; /* Clock timeout enable */
        Register::Bitfield<BASE_ADDRESS + TIMEOUTR_Offset, 16, 12, TIMEOUTR_TIMEOUTB_T> TIMEOUTB; /* Bus timeout B */
        Register::Bit<BASE_ADDRESS + TIMEOUTR_Offset, 31> TEXTEN; /* Extended clock timeout enable */
    };

    class ISR_T : public Register::Register<I2C2_ISR::isr_reg_type, BASE_ADDRESS + ISR_Offset> {
    // Interrupt and Status register
    public:
        Register::Bitfield<BASE_ADDRESS + ISR_Offset, 17, 7, ISR_ADDCODE_T> ADDCODE; /* Address match code (Slave mode) */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 16> DIR; /* Transfer direction (Slave mode) */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 15> BUSY; /* Bus busy */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 13> ALERT; /* SMBus alert */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 12> TIMEOUT; /* Timeout or t_low detection flag */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 11> PECERR; /* PEC Error in reception */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 10> OVR; /* Overrun/Underrun (slave mode) */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 9> ARLO; /* Arbitration lost */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 8> BERR; /* Bus error */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 7> TCR; /* Transfer Complete Reload */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 6> TC; /* Transfer Complete (master mode) */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 5> STOPF; /* Stop detection flag */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 4> NACKF; /* Not acknowledge received flag */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 3> ADDR; /* Address matched (slave mode) */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 2> RXNE; /* Receive data register not empty (receivers) */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 1> TXIS; /* Transmit interrupt status (transmitters) */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 0> TXE; /* Transmit data register empty (transmitters) */
    };

    class ICR_T : public Register::Register<I2C2_ICR::icr_reg_type, BASE_ADDRESS + ICR_Offset> {
    // Interrupt clear register
    public:
        Register::Bit<BASE_ADDRESS + ICR_Offset, 13> ALERTCF; /* Alert flag clear */
        Register::Bit<BASE_ADDRESS + ICR_Offset, 12> TIMOUTCF; /* Timeout detection flag clear */
        Register::Bit<BASE_ADDRESS + ICR_Offset, 11> PECCF; /* PEC Error flag clear */
        Register::Bit<BASE_ADDRESS + ICR_Offset, 10> OVRCF; /* Overrun/Underrun flag clear */
        Register::Bit<BASE_ADDRESS + ICR_Offset, 9> ARLOCF; /* Arbitration lost flag clear */
        Register::Bit<BASE_ADDRESS + ICR_Offset, 8> BERRCF; /* Bus error flag clear */
        Register::Bit<BASE_ADDRESS + ICR_Offset, 5> STOPCF; /* Stop detection flag clear */
        Register::Bit<BASE_ADDRESS + ICR_Offset, 4> NACKCF; /* Not Acknowledge flag clear */
        Register::Bit<BASE_ADDRESS + ICR_Offset, 3> ADDRCF; /* Address Matched flag clear */
    };

    class PECR_T : public Register::Register<I2C2_PECR::pecr_reg_type, BASE_ADDRESS + PECR_Offset> {
    // PEC register
    public:
        Register::Bitfield<BASE_ADDRESS + PECR_Offset, 0, 8, PECR_PEC_T> PEC; /* Packet error checking register */
    };

    class RXDR_T : public Register::Register<I2C2_RXDR::rxdr_reg_type, BASE_ADDRESS + RXDR_Offset> {
    // Receive data register
    public:
        Register::Bitfield<BASE_ADDRESS + RXDR_Offset, 0, 8, RXDR_RXDATA_T> RXDATA; /* 8-bit receive data */
    };

    class TXDR_T : public Register::Register<I2C2_TXDR::txdr_reg_type, BASE_ADDRESS + TXDR_Offset> {
    // Transmit data register
    public:
        Register::Bitfield<BASE_ADDRESS + TXDR_Offset, 0, 8, TXDR_TXDATA_T> TXDATA; /* 8-bit transmit data */
    };

    CR1_T CR1;
    CR2_T CR2;
    OAR1_T OAR1;
    OAR2_T OAR2;
    TIMINGR_T TIMINGR;
    TIMEOUTR_T TIMEOUTR;
    ISR_T ISR;
    ICR_T ICR;
    PECR_T PECR;
    RXDR_T RXDR;
    TXDR_T TXDR;
};

} // namespace STM32LIB

#endif // STM32F0X1_I2C2_HPP_

