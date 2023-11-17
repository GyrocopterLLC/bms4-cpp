#ifndef STM32F0X1_RCC_HPP_
#define STM32F0X1_RCC_HPP_
#pragma once

#include <cstdint>
#include "Register.hpp"

/* Reset and clock control */
namespace STM32LIB { 

/* Overwritable types for each of the bitfields.
 * Defaults to uint32_t, but feel free to redefine with your
 * own custom enum class later. */
using CR_HSITRIM_T = uint32_t;
using CR_HSICAL_T = uint32_t;
using CFGR_SW_T = uint32_t;
using CFGR_SWS_T = uint32_t;
using CFGR_HPRE_T = uint32_t;
using CFGR_PPRE_T = uint32_t;
using CFGR_PLLSRC_T = uint32_t;
using CFGR_PLLMUL_T = uint32_t;
using CFGR_MCO_T = uint32_t;
using CFGR_MCOPRE_T = uint32_t;
using BDCR_LSEDRV_T = uint32_t;
using BDCR_RTCSEL_T = uint32_t;
using CFGR2_PREDIV_T = uint32_t;
using CFGR3_USART1SW_T = uint32_t;
using CFGR3_USART2SW_T = uint32_t;
using CR2_HSI14TRIM_T = uint32_t;
using CR2_HSI14CAL_T = uint32_t;

namespace RCC_CR {

    enum class cr_reg_type {};

    template<bool tf>
    using HSION = Register::Combo_Bit<cr_reg_type, 0, tf>;

    template<bool tf>
    using HSIRDY = Register::Combo_Bit<cr_reg_type, 1, tf>;

    template<CR_HSITRIM_T val>
    using HSITRIM = Register::Combo_Bitfield<cr_reg_type, 3, 5, CR_HSITRIM_T, val>;

    template<CR_HSICAL_T val>
    using HSICAL = Register::Combo_Bitfield<cr_reg_type, 8, 8, CR_HSICAL_T, val>;

    template<bool tf>
    using HSEON = Register::Combo_Bit<cr_reg_type, 16, tf>;

    template<bool tf>
    using HSERDY = Register::Combo_Bit<cr_reg_type, 17, tf>;

    template<bool tf>
    using HSEBYP = Register::Combo_Bit<cr_reg_type, 18, tf>;

    template<bool tf>
    using CSSON = Register::Combo_Bit<cr_reg_type, 19, tf>;

    template<bool tf>
    using PLLON = Register::Combo_Bit<cr_reg_type, 24, tf>;

    template<bool tf>
    using PLLRDY = Register::Combo_Bit<cr_reg_type, 25, tf>;

} // RCC_CR
namespace RCC_CFGR {

    enum class cfgr_reg_type {};

    template<CFGR_SW_T val>
    using SW = Register::Combo_Bitfield<cfgr_reg_type, 0, 2, CFGR_SW_T, val>;

    template<CFGR_SWS_T val>
    using SWS = Register::Combo_Bitfield<cfgr_reg_type, 2, 2, CFGR_SWS_T, val>;

    template<CFGR_HPRE_T val>
    using HPRE = Register::Combo_Bitfield<cfgr_reg_type, 4, 4, CFGR_HPRE_T, val>;

    template<CFGR_PPRE_T val>
    using PPRE = Register::Combo_Bitfield<cfgr_reg_type, 8, 3, CFGR_PPRE_T, val>;

    template<bool tf>
    using ADCPRE = Register::Combo_Bit<cfgr_reg_type, 14, tf>;

    template<CFGR_PLLSRC_T val>
    using PLLSRC = Register::Combo_Bitfield<cfgr_reg_type, 15, 2, CFGR_PLLSRC_T, val>;

    template<bool tf>
    using PLLXTPRE = Register::Combo_Bit<cfgr_reg_type, 17, tf>;

    template<CFGR_PLLMUL_T val>
    using PLLMUL = Register::Combo_Bitfield<cfgr_reg_type, 18, 4, CFGR_PLLMUL_T, val>;

    template<CFGR_MCO_T val>
    using MCO = Register::Combo_Bitfield<cfgr_reg_type, 24, 3, CFGR_MCO_T, val>;

    template<CFGR_MCOPRE_T val>
    using MCOPRE = Register::Combo_Bitfield<cfgr_reg_type, 28, 3, CFGR_MCOPRE_T, val>;

    template<bool tf>
    using PLLNODIV = Register::Combo_Bit<cfgr_reg_type, 31, tf>;

} // RCC_CFGR
namespace RCC_CIR {

    enum class cir_reg_type {};

    template<bool tf>
    using LSIRDYF = Register::Combo_Bit<cir_reg_type, 0, tf>;

    template<bool tf>
    using LSERDYF = Register::Combo_Bit<cir_reg_type, 1, tf>;

    template<bool tf>
    using HSIRDYF = Register::Combo_Bit<cir_reg_type, 2, tf>;

    template<bool tf>
    using HSERDYF = Register::Combo_Bit<cir_reg_type, 3, tf>;

    template<bool tf>
    using PLLRDYF = Register::Combo_Bit<cir_reg_type, 4, tf>;

    template<bool tf>
    using HSI14RDYF = Register::Combo_Bit<cir_reg_type, 5, tf>;

    template<bool tf>
    using HSI48RDYF = Register::Combo_Bit<cir_reg_type, 6, tf>;

    template<bool tf>
    using CSSF = Register::Combo_Bit<cir_reg_type, 7, tf>;

    template<bool tf>
    using LSIRDYIE = Register::Combo_Bit<cir_reg_type, 8, tf>;

    template<bool tf>
    using LSERDYIE = Register::Combo_Bit<cir_reg_type, 9, tf>;

    template<bool tf>
    using HSIRDYIE = Register::Combo_Bit<cir_reg_type, 10, tf>;

    template<bool tf>
    using HSERDYIE = Register::Combo_Bit<cir_reg_type, 11, tf>;

    template<bool tf>
    using PLLRDYIE = Register::Combo_Bit<cir_reg_type, 12, tf>;

    template<bool tf>
    using HSI14RDYE = Register::Combo_Bit<cir_reg_type, 13, tf>;

    template<bool tf>
    using HSI48RDYIE = Register::Combo_Bit<cir_reg_type, 14, tf>;

    template<bool tf>
    using LSIRDYC = Register::Combo_Bit<cir_reg_type, 16, tf>;

    template<bool tf>
    using LSERDYC = Register::Combo_Bit<cir_reg_type, 17, tf>;

    template<bool tf>
    using HSIRDYC = Register::Combo_Bit<cir_reg_type, 18, tf>;

    template<bool tf>
    using HSERDYC = Register::Combo_Bit<cir_reg_type, 19, tf>;

    template<bool tf>
    using PLLRDYC = Register::Combo_Bit<cir_reg_type, 20, tf>;

    template<bool tf>
    using HSI14RDYC = Register::Combo_Bit<cir_reg_type, 21, tf>;

    template<bool tf>
    using HSI48RDYC = Register::Combo_Bit<cir_reg_type, 22, tf>;

    template<bool tf>
    using CSSC = Register::Combo_Bit<cir_reg_type, 23, tf>;

} // RCC_CIR
namespace RCC_APB2RSTR {

    enum class apb2rstr_reg_type {};

    template<bool tf>
    using SYSCFGRST = Register::Combo_Bit<apb2rstr_reg_type, 0, tf>;

    template<bool tf>
    using ADCRST = Register::Combo_Bit<apb2rstr_reg_type, 9, tf>;

    template<bool tf>
    using TIM1RST = Register::Combo_Bit<apb2rstr_reg_type, 11, tf>;

    template<bool tf>
    using SPI1RST = Register::Combo_Bit<apb2rstr_reg_type, 12, tf>;

    template<bool tf>
    using USART1RST = Register::Combo_Bit<apb2rstr_reg_type, 14, tf>;

    template<bool tf>
    using TIM15RST = Register::Combo_Bit<apb2rstr_reg_type, 16, tf>;

    template<bool tf>
    using TIM16RST = Register::Combo_Bit<apb2rstr_reg_type, 17, tf>;

    template<bool tf>
    using TIM17RST = Register::Combo_Bit<apb2rstr_reg_type, 18, tf>;

    template<bool tf>
    using DBGMCURST = Register::Combo_Bit<apb2rstr_reg_type, 22, tf>;

} // RCC_APB2RSTR
namespace RCC_APB1RSTR {

    enum class apb1rstr_reg_type {};

    template<bool tf>
    using TIM2RST = Register::Combo_Bit<apb1rstr_reg_type, 0, tf>;

    template<bool tf>
    using TIM3RST = Register::Combo_Bit<apb1rstr_reg_type, 1, tf>;

    template<bool tf>
    using TIM6RST = Register::Combo_Bit<apb1rstr_reg_type, 4, tf>;

    template<bool tf>
    using TIM7RST = Register::Combo_Bit<apb1rstr_reg_type, 5, tf>;

    template<bool tf>
    using TIM14RST = Register::Combo_Bit<apb1rstr_reg_type, 8, tf>;

    template<bool tf>
    using WWDGRST = Register::Combo_Bit<apb1rstr_reg_type, 11, tf>;

    template<bool tf>
    using SPI2RST = Register::Combo_Bit<apb1rstr_reg_type, 14, tf>;

    template<bool tf>
    using USART2RST = Register::Combo_Bit<apb1rstr_reg_type, 17, tf>;

    template<bool tf>
    using USART3RST = Register::Combo_Bit<apb1rstr_reg_type, 18, tf>;

    template<bool tf>
    using USART4RST = Register::Combo_Bit<apb1rstr_reg_type, 19, tf>;

    template<bool tf>
    using USART5RST = Register::Combo_Bit<apb1rstr_reg_type, 20, tf>;

    template<bool tf>
    using I2C1RST = Register::Combo_Bit<apb1rstr_reg_type, 21, tf>;

    template<bool tf>
    using I2C2RST = Register::Combo_Bit<apb1rstr_reg_type, 22, tf>;

    template<bool tf>
    using USBRST = Register::Combo_Bit<apb1rstr_reg_type, 23, tf>;

    template<bool tf>
    using CANRST = Register::Combo_Bit<apb1rstr_reg_type, 25, tf>;

    template<bool tf>
    using CRSRST = Register::Combo_Bit<apb1rstr_reg_type, 27, tf>;

    template<bool tf>
    using PWRRST = Register::Combo_Bit<apb1rstr_reg_type, 28, tf>;

    template<bool tf>
    using DACRST = Register::Combo_Bit<apb1rstr_reg_type, 29, tf>;

    template<bool tf>
    using CECRST = Register::Combo_Bit<apb1rstr_reg_type, 30, tf>;

} // RCC_APB1RSTR
namespace RCC_AHBENR {

    enum class ahbenr_reg_type {};

    template<bool tf>
    using DMA1EN = Register::Combo_Bit<ahbenr_reg_type, 0, tf>;

    template<bool tf>
    using DMA2EN = Register::Combo_Bit<ahbenr_reg_type, 1, tf>;

    template<bool tf>
    using SRAMEN = Register::Combo_Bit<ahbenr_reg_type, 2, tf>;

    template<bool tf>
    using FLITFEN = Register::Combo_Bit<ahbenr_reg_type, 4, tf>;

    template<bool tf>
    using CRCEN = Register::Combo_Bit<ahbenr_reg_type, 6, tf>;

    template<bool tf>
    using IOPAEN = Register::Combo_Bit<ahbenr_reg_type, 17, tf>;

    template<bool tf>
    using IOPBEN = Register::Combo_Bit<ahbenr_reg_type, 18, tf>;

    template<bool tf>
    using IOPCEN = Register::Combo_Bit<ahbenr_reg_type, 19, tf>;

    template<bool tf>
    using IOPDEN = Register::Combo_Bit<ahbenr_reg_type, 20, tf>;

    template<bool tf>
    using IOPFEN = Register::Combo_Bit<ahbenr_reg_type, 22, tf>;

    template<bool tf>
    using TSCEN = Register::Combo_Bit<ahbenr_reg_type, 24, tf>;

} // RCC_AHBENR
namespace RCC_APB2ENR {

    enum class apb2enr_reg_type {};

    template<bool tf>
    using SYSCFGEN = Register::Combo_Bit<apb2enr_reg_type, 0, tf>;

    template<bool tf>
    using ADCEN = Register::Combo_Bit<apb2enr_reg_type, 9, tf>;

    template<bool tf>
    using TIM1EN = Register::Combo_Bit<apb2enr_reg_type, 11, tf>;

    template<bool tf>
    using SPI1EN = Register::Combo_Bit<apb2enr_reg_type, 12, tf>;

    template<bool tf>
    using USART1EN = Register::Combo_Bit<apb2enr_reg_type, 14, tf>;

    template<bool tf>
    using TIM15EN = Register::Combo_Bit<apb2enr_reg_type, 16, tf>;

    template<bool tf>
    using TIM16EN = Register::Combo_Bit<apb2enr_reg_type, 17, tf>;

    template<bool tf>
    using TIM17EN = Register::Combo_Bit<apb2enr_reg_type, 18, tf>;

    template<bool tf>
    using DBGMCUEN = Register::Combo_Bit<apb2enr_reg_type, 22, tf>;

    template<bool tf>
    using USART8EN = Register::Combo_Bit<apb2enr_reg_type, 7, tf>;

    template<bool tf>
    using USART7EN = Register::Combo_Bit<apb2enr_reg_type, 6, tf>;

    template<bool tf>
    using USART6EN = Register::Combo_Bit<apb2enr_reg_type, 5, tf>;

} // RCC_APB2ENR
namespace RCC_APB1ENR {

    enum class apb1enr_reg_type {};

    template<bool tf>
    using TIM2EN = Register::Combo_Bit<apb1enr_reg_type, 0, tf>;

    template<bool tf>
    using TIM3EN = Register::Combo_Bit<apb1enr_reg_type, 1, tf>;

    template<bool tf>
    using TIM6EN = Register::Combo_Bit<apb1enr_reg_type, 4, tf>;

    template<bool tf>
    using TIM7EN = Register::Combo_Bit<apb1enr_reg_type, 5, tf>;

    template<bool tf>
    using TIM14EN = Register::Combo_Bit<apb1enr_reg_type, 8, tf>;

    template<bool tf>
    using WWDGEN = Register::Combo_Bit<apb1enr_reg_type, 11, tf>;

    template<bool tf>
    using SPI2EN = Register::Combo_Bit<apb1enr_reg_type, 14, tf>;

    template<bool tf>
    using USART2EN = Register::Combo_Bit<apb1enr_reg_type, 17, tf>;

    template<bool tf>
    using USART3EN = Register::Combo_Bit<apb1enr_reg_type, 18, tf>;

    template<bool tf>
    using USART4EN = Register::Combo_Bit<apb1enr_reg_type, 19, tf>;

    template<bool tf>
    using USART5EN = Register::Combo_Bit<apb1enr_reg_type, 20, tf>;

    template<bool tf>
    using I2C1EN = Register::Combo_Bit<apb1enr_reg_type, 21, tf>;

    template<bool tf>
    using I2C2EN = Register::Combo_Bit<apb1enr_reg_type, 22, tf>;

    template<bool tf>
    using USBRST = Register::Combo_Bit<apb1enr_reg_type, 23, tf>;

    template<bool tf>
    using CANEN = Register::Combo_Bit<apb1enr_reg_type, 25, tf>;

    template<bool tf>
    using CRSEN = Register::Combo_Bit<apb1enr_reg_type, 27, tf>;

    template<bool tf>
    using PWREN = Register::Combo_Bit<apb1enr_reg_type, 28, tf>;

    template<bool tf>
    using DACEN = Register::Combo_Bit<apb1enr_reg_type, 29, tf>;

    template<bool tf>
    using CECEN = Register::Combo_Bit<apb1enr_reg_type, 30, tf>;

} // RCC_APB1ENR
namespace RCC_BDCR {

    enum class bdcr_reg_type {};

    template<bool tf>
    using LSEON = Register::Combo_Bit<bdcr_reg_type, 0, tf>;

    template<bool tf>
    using LSERDY = Register::Combo_Bit<bdcr_reg_type, 1, tf>;

    template<bool tf>
    using LSEBYP = Register::Combo_Bit<bdcr_reg_type, 2, tf>;

    template<BDCR_LSEDRV_T val>
    using LSEDRV = Register::Combo_Bitfield<bdcr_reg_type, 3, 2, BDCR_LSEDRV_T, val>;

    template<BDCR_RTCSEL_T val>
    using RTCSEL = Register::Combo_Bitfield<bdcr_reg_type, 8, 2, BDCR_RTCSEL_T, val>;

    template<bool tf>
    using RTCEN = Register::Combo_Bit<bdcr_reg_type, 15, tf>;

    template<bool tf>
    using BDRST = Register::Combo_Bit<bdcr_reg_type, 16, tf>;

} // RCC_BDCR
namespace RCC_CSR {

    enum class csr_reg_type {};

    template<bool tf>
    using LSION = Register::Combo_Bit<csr_reg_type, 0, tf>;

    template<bool tf>
    using LSIRDY = Register::Combo_Bit<csr_reg_type, 1, tf>;

    template<bool tf>
    using RMVF = Register::Combo_Bit<csr_reg_type, 24, tf>;

    template<bool tf>
    using OBLRSTF = Register::Combo_Bit<csr_reg_type, 25, tf>;

    template<bool tf>
    using PINRSTF = Register::Combo_Bit<csr_reg_type, 26, tf>;

    template<bool tf>
    using PORRSTF = Register::Combo_Bit<csr_reg_type, 27, tf>;

    template<bool tf>
    using SFTRSTF = Register::Combo_Bit<csr_reg_type, 28, tf>;

    template<bool tf>
    using IWDGRSTF = Register::Combo_Bit<csr_reg_type, 29, tf>;

    template<bool tf>
    using WWDGRSTF = Register::Combo_Bit<csr_reg_type, 30, tf>;

    template<bool tf>
    using LPWRRSTF = Register::Combo_Bit<csr_reg_type, 31, tf>;

} // RCC_CSR
namespace RCC_AHBRSTR {

    enum class ahbrstr_reg_type {};

    template<bool tf>
    using IOPARST = Register::Combo_Bit<ahbrstr_reg_type, 17, tf>;

    template<bool tf>
    using IOPBRST = Register::Combo_Bit<ahbrstr_reg_type, 18, tf>;

    template<bool tf>
    using IOPCRST = Register::Combo_Bit<ahbrstr_reg_type, 19, tf>;

    template<bool tf>
    using IOPDRST = Register::Combo_Bit<ahbrstr_reg_type, 20, tf>;

    template<bool tf>
    using IOPFRST = Register::Combo_Bit<ahbrstr_reg_type, 22, tf>;

    template<bool tf>
    using TSCRST = Register::Combo_Bit<ahbrstr_reg_type, 24, tf>;

} // RCC_AHBRSTR
namespace RCC_CFGR2 {

    enum class cfgr2_reg_type {};

    template<CFGR2_PREDIV_T val>
    using PREDIV = Register::Combo_Bitfield<cfgr2_reg_type, 0, 4, CFGR2_PREDIV_T, val>;

} // RCC_CFGR2
namespace RCC_CFGR3 {

    enum class cfgr3_reg_type {};

    template<CFGR3_USART1SW_T val>
    using USART1SW = Register::Combo_Bitfield<cfgr3_reg_type, 0, 2, CFGR3_USART1SW_T, val>;

    template<bool tf>
    using I2C1SW = Register::Combo_Bit<cfgr3_reg_type, 4, tf>;

    template<bool tf>
    using CECSW = Register::Combo_Bit<cfgr3_reg_type, 6, tf>;

    template<bool tf>
    using USBSW = Register::Combo_Bit<cfgr3_reg_type, 7, tf>;

    template<bool tf>
    using ADCSW = Register::Combo_Bit<cfgr3_reg_type, 8, tf>;

    template<CFGR3_USART2SW_T val>
    using USART2SW = Register::Combo_Bitfield<cfgr3_reg_type, 16, 2, CFGR3_USART2SW_T, val>;

} // RCC_CFGR3
namespace RCC_CR2 {

    enum class cr2_reg_type {};

    template<bool tf>
    using HSI14ON = Register::Combo_Bit<cr2_reg_type, 0, tf>;

    template<bool tf>
    using HSI14RDY = Register::Combo_Bit<cr2_reg_type, 1, tf>;

    template<bool tf>
    using HSI14DIS = Register::Combo_Bit<cr2_reg_type, 2, tf>;

    template<CR2_HSI14TRIM_T val>
    using HSI14TRIM = Register::Combo_Bitfield<cr2_reg_type, 3, 5, CR2_HSI14TRIM_T, val>;

    template<CR2_HSI14CAL_T val>
    using HSI14CAL = Register::Combo_Bitfield<cr2_reg_type, 8, 8, CR2_HSI14CAL_T, val>;

    template<bool tf>
    using HSI48ON = Register::Combo_Bit<cr2_reg_type, 16, tf>;

    template<bool tf>
    using HSI48RDY = Register::Combo_Bit<cr2_reg_type, 17, tf>;

    template<bool tf>
    using HSI48CAL = Register::Combo_Bit<cr2_reg_type, 24, tf>;

} // RCC_CR2
template<uint32_t BASE_ADDRESS>
class RCC {
public:
    static const uint32_t CR_Offset = 0x0000;
    static const uint32_t CFGR_Offset = 0x0004;
    static const uint32_t CIR_Offset = 0x0008;
    static const uint32_t APB2RSTR_Offset = 0x000C;
    static const uint32_t APB1RSTR_Offset = 0x0010;
    static const uint32_t AHBENR_Offset = 0x0014;
    static const uint32_t APB2ENR_Offset = 0x0018;
    static const uint32_t APB1ENR_Offset = 0x001C;
    static const uint32_t BDCR_Offset = 0x0020;
    static const uint32_t CSR_Offset = 0x0024;
    static const uint32_t AHBRSTR_Offset = 0x0028;
    static const uint32_t CFGR2_Offset = 0x002C;
    static const uint32_t CFGR3_Offset = 0x0030;
    static const uint32_t CR2_Offset = 0x0034;

    RCC() = default;
    RCC( const RCC& ) = delete;
    const RCC& operator=( const RCC& ) = delete;

    class CR_T : public Register::Register<RCC_CR::cr_reg_type, BASE_ADDRESS + CR_Offset> {
    // Clock control register
    public:
        Register::Bit<BASE_ADDRESS + CR_Offset, 0> HSION; /* Internal High Speed clock enable */
        Register::Bit<BASE_ADDRESS + CR_Offset, 1> HSIRDY; /* Internal High Speed clock ready flag */
        Register::Bitfield<BASE_ADDRESS + CR_Offset, 3, 5, CR_HSITRIM_T> HSITRIM; /* Internal High Speed clock trimming */
        Register::Bitfield<BASE_ADDRESS + CR_Offset, 8, 8, CR_HSICAL_T> HSICAL; /* Internal High Speed clock Calibration */
        Register::Bit<BASE_ADDRESS + CR_Offset, 16> HSEON; /* External High Speed clock enable */
        Register::Bit<BASE_ADDRESS + CR_Offset, 17> HSERDY; /* External High Speed clock ready flag */
        Register::Bit<BASE_ADDRESS + CR_Offset, 18> HSEBYP; /* External High Speed clock Bypass */
        Register::Bit<BASE_ADDRESS + CR_Offset, 19> CSSON; /* Clock Security System enable */
        Register::Bit<BASE_ADDRESS + CR_Offset, 24> PLLON; /* PLL enable */
        Register::Bit<BASE_ADDRESS + CR_Offset, 25> PLLRDY; /* PLL clock ready flag */
    };

    class CFGR_T : public Register::Register<RCC_CFGR::cfgr_reg_type, BASE_ADDRESS + CFGR_Offset> {
    // Clock configuration register (RCC_CFGR)
    public:
        Register::Bitfield<BASE_ADDRESS + CFGR_Offset, 0, 2, CFGR_SW_T> SW; /* System clock Switch */
        Register::Bitfield<BASE_ADDRESS + CFGR_Offset, 2, 2, CFGR_SWS_T> SWS; /* System Clock Switch Status */
        Register::Bitfield<BASE_ADDRESS + CFGR_Offset, 4, 4, CFGR_HPRE_T> HPRE; /* AHB prescaler */
        Register::Bitfield<BASE_ADDRESS + CFGR_Offset, 8, 3, CFGR_PPRE_T> PPRE; /* APB Low speed prescaler (APB1) */
        Register::Bit<BASE_ADDRESS + CFGR_Offset, 14> ADCPRE; /* ADC prescaler */
        Register::Bitfield<BASE_ADDRESS + CFGR_Offset, 15, 2, CFGR_PLLSRC_T> PLLSRC; /* PLL input clock source */
        Register::Bit<BASE_ADDRESS + CFGR_Offset, 17> PLLXTPRE; /* HSE divider for PLL entry */
        Register::Bitfield<BASE_ADDRESS + CFGR_Offset, 18, 4, CFGR_PLLMUL_T> PLLMUL; /* PLL Multiplication Factor */
        Register::Bitfield<BASE_ADDRESS + CFGR_Offset, 24, 3, CFGR_MCO_T> MCO; /* Microcontroller clock output */
        Register::Bitfield<BASE_ADDRESS + CFGR_Offset, 28, 3, CFGR_MCOPRE_T> MCOPRE; /* Microcontroller Clock Output Prescaler */
        Register::Bit<BASE_ADDRESS + CFGR_Offset, 31> PLLNODIV; /* PLL clock not divided for MCO */
    };

    class CIR_T : public Register::Register<RCC_CIR::cir_reg_type, BASE_ADDRESS + CIR_Offset> {
    // Clock interrupt register (RCC_CIR)
    public:
        Register::Bit<BASE_ADDRESS + CIR_Offset, 0> LSIRDYF; /* LSI Ready Interrupt flag */
        Register::Bit<BASE_ADDRESS + CIR_Offset, 1> LSERDYF; /* LSE Ready Interrupt flag */
        Register::Bit<BASE_ADDRESS + CIR_Offset, 2> HSIRDYF; /* HSI Ready Interrupt flag */
        Register::Bit<BASE_ADDRESS + CIR_Offset, 3> HSERDYF; /* HSE Ready Interrupt flag */
        Register::Bit<BASE_ADDRESS + CIR_Offset, 4> PLLRDYF; /* PLL Ready Interrupt flag */
        Register::Bit<BASE_ADDRESS + CIR_Offset, 5> HSI14RDYF; /* HSI14 ready interrupt flag */
        Register::Bit<BASE_ADDRESS + CIR_Offset, 6> HSI48RDYF; /* HSI48 ready interrupt flag */
        Register::Bit<BASE_ADDRESS + CIR_Offset, 7> CSSF; /* Clock Security System Interrupt flag */
        Register::Bit<BASE_ADDRESS + CIR_Offset, 8> LSIRDYIE; /* LSI Ready Interrupt Enable */
        Register::Bit<BASE_ADDRESS + CIR_Offset, 9> LSERDYIE; /* LSE Ready Interrupt Enable */
        Register::Bit<BASE_ADDRESS + CIR_Offset, 10> HSIRDYIE; /* HSI Ready Interrupt Enable */
        Register::Bit<BASE_ADDRESS + CIR_Offset, 11> HSERDYIE; /* HSE Ready Interrupt Enable */
        Register::Bit<BASE_ADDRESS + CIR_Offset, 12> PLLRDYIE; /* PLL Ready Interrupt Enable */
        Register::Bit<BASE_ADDRESS + CIR_Offset, 13> HSI14RDYE; /* HSI14 ready interrupt enable */
        Register::Bit<BASE_ADDRESS + CIR_Offset, 14> HSI48RDYIE; /* HSI48 ready interrupt enable */
        Register::Bit<BASE_ADDRESS + CIR_Offset, 16> LSIRDYC; /* LSI Ready Interrupt Clear */
        Register::Bit<BASE_ADDRESS + CIR_Offset, 17> LSERDYC; /* LSE Ready Interrupt Clear */
        Register::Bit<BASE_ADDRESS + CIR_Offset, 18> HSIRDYC; /* HSI Ready Interrupt Clear */
        Register::Bit<BASE_ADDRESS + CIR_Offset, 19> HSERDYC; /* HSE Ready Interrupt Clear */
        Register::Bit<BASE_ADDRESS + CIR_Offset, 20> PLLRDYC; /* PLL Ready Interrupt Clear */
        Register::Bit<BASE_ADDRESS + CIR_Offset, 21> HSI14RDYC; /* HSI 14 MHz Ready Interrupt Clear */
        Register::Bit<BASE_ADDRESS + CIR_Offset, 22> HSI48RDYC; /* HSI48 Ready Interrupt Clear */
        Register::Bit<BASE_ADDRESS + CIR_Offset, 23> CSSC; /* Clock security system interrupt clear */
    };

    class APB2RSTR_T : public Register::Register<RCC_APB2RSTR::apb2rstr_reg_type, BASE_ADDRESS + APB2RSTR_Offset> {
    // APB2 peripheral reset register (RCC_APB2RSTR)
    public:
        Register::Bit<BASE_ADDRESS + APB2RSTR_Offset, 0> SYSCFGRST; /* SYSCFG and COMP reset */
        Register::Bit<BASE_ADDRESS + APB2RSTR_Offset, 9> ADCRST; /* ADC interface reset */
        Register::Bit<BASE_ADDRESS + APB2RSTR_Offset, 11> TIM1RST; /* TIM1 timer reset */
        Register::Bit<BASE_ADDRESS + APB2RSTR_Offset, 12> SPI1RST; /* SPI 1 reset */
        Register::Bit<BASE_ADDRESS + APB2RSTR_Offset, 14> USART1RST; /* USART1 reset */
        Register::Bit<BASE_ADDRESS + APB2RSTR_Offset, 16> TIM15RST; /* TIM15 timer reset */
        Register::Bit<BASE_ADDRESS + APB2RSTR_Offset, 17> TIM16RST; /* TIM16 timer reset */
        Register::Bit<BASE_ADDRESS + APB2RSTR_Offset, 18> TIM17RST; /* TIM17 timer reset */
        Register::Bit<BASE_ADDRESS + APB2RSTR_Offset, 22> DBGMCURST; /* Debug MCU reset */
    };

    class APB1RSTR_T : public Register::Register<RCC_APB1RSTR::apb1rstr_reg_type, BASE_ADDRESS + APB1RSTR_Offset> {
    // APB1 peripheral reset register (RCC_APB1RSTR)
    public:
        Register::Bit<BASE_ADDRESS + APB1RSTR_Offset, 0> TIM2RST; /* Timer 2 reset */
        Register::Bit<BASE_ADDRESS + APB1RSTR_Offset, 1> TIM3RST; /* Timer 3 reset */
        Register::Bit<BASE_ADDRESS + APB1RSTR_Offset, 4> TIM6RST; /* Timer 6 reset */
        Register::Bit<BASE_ADDRESS + APB1RSTR_Offset, 5> TIM7RST; /* TIM7 timer reset */
        Register::Bit<BASE_ADDRESS + APB1RSTR_Offset, 8> TIM14RST; /* Timer 14 reset */
        Register::Bit<BASE_ADDRESS + APB1RSTR_Offset, 11> WWDGRST; /* Window watchdog reset */
        Register::Bit<BASE_ADDRESS + APB1RSTR_Offset, 14> SPI2RST; /* SPI2 reset */
        Register::Bit<BASE_ADDRESS + APB1RSTR_Offset, 17> USART2RST; /* USART 2 reset */
        Register::Bit<BASE_ADDRESS + APB1RSTR_Offset, 18> USART3RST; /* USART3 reset */
        Register::Bit<BASE_ADDRESS + APB1RSTR_Offset, 19> USART4RST; /* USART4 reset */
        Register::Bit<BASE_ADDRESS + APB1RSTR_Offset, 20> USART5RST; /* USART5 reset */
        Register::Bit<BASE_ADDRESS + APB1RSTR_Offset, 21> I2C1RST; /* I2C1 reset */
        Register::Bit<BASE_ADDRESS + APB1RSTR_Offset, 22> I2C2RST; /* I2C2 reset */
        Register::Bit<BASE_ADDRESS + APB1RSTR_Offset, 23> USBRST; /* USB interface reset */
        Register::Bit<BASE_ADDRESS + APB1RSTR_Offset, 25> CANRST; /* CAN interface reset */
        Register::Bit<BASE_ADDRESS + APB1RSTR_Offset, 27> CRSRST; /* Clock Recovery System interface reset */
        Register::Bit<BASE_ADDRESS + APB1RSTR_Offset, 28> PWRRST; /* Power interface reset */
        Register::Bit<BASE_ADDRESS + APB1RSTR_Offset, 29> DACRST; /* DAC interface reset */
        Register::Bit<BASE_ADDRESS + APB1RSTR_Offset, 30> CECRST; /* HDMI CEC reset */
    };

    class AHBENR_T : public Register::Register<RCC_AHBENR::ahbenr_reg_type, BASE_ADDRESS + AHBENR_Offset> {
    // AHB Peripheral Clock enable register (RCC_AHBENR)
    public:
        Register::Bit<BASE_ADDRESS + AHBENR_Offset, 0> DMA1EN; /* DMA1 clock enable */
        Register::Bit<BASE_ADDRESS + AHBENR_Offset, 1> DMA2EN; /* DMA2 clock enable */
        Register::Bit<BASE_ADDRESS + AHBENR_Offset, 2> SRAMEN; /* SRAM interface clock enable */
        Register::Bit<BASE_ADDRESS + AHBENR_Offset, 4> FLITFEN; /* FLITF clock enable */
        Register::Bit<BASE_ADDRESS + AHBENR_Offset, 6> CRCEN; /* CRC clock enable */
        Register::Bit<BASE_ADDRESS + AHBENR_Offset, 17> IOPAEN; /* I/O port A clock enable */
        Register::Bit<BASE_ADDRESS + AHBENR_Offset, 18> IOPBEN; /* I/O port B clock enable */
        Register::Bit<BASE_ADDRESS + AHBENR_Offset, 19> IOPCEN; /* I/O port C clock enable */
        Register::Bit<BASE_ADDRESS + AHBENR_Offset, 20> IOPDEN; /* I/O port D clock enable */
        Register::Bit<BASE_ADDRESS + AHBENR_Offset, 22> IOPFEN; /* I/O port F clock enable */
        Register::Bit<BASE_ADDRESS + AHBENR_Offset, 24> TSCEN; /* Touch sensing controller clock enable */
    };

    class APB2ENR_T : public Register::Register<RCC_APB2ENR::apb2enr_reg_type, BASE_ADDRESS + APB2ENR_Offset> {
    // APB2 peripheral clock enable register (RCC_APB2ENR)
    public:
        Register::Bit<BASE_ADDRESS + APB2ENR_Offset, 0> SYSCFGEN; /* SYSCFG clock enable */
        Register::Bit<BASE_ADDRESS + APB2ENR_Offset, 9> ADCEN; /* ADC 1 interface clock enable */
        Register::Bit<BASE_ADDRESS + APB2ENR_Offset, 11> TIM1EN; /* TIM1 Timer clock enable */
        Register::Bit<BASE_ADDRESS + APB2ENR_Offset, 12> SPI1EN; /* SPI 1 clock enable */
        Register::Bit<BASE_ADDRESS + APB2ENR_Offset, 14> USART1EN; /* USART1 clock enable */
        Register::Bit<BASE_ADDRESS + APB2ENR_Offset, 16> TIM15EN; /* TIM15 timer clock enable */
        Register::Bit<BASE_ADDRESS + APB2ENR_Offset, 17> TIM16EN; /* TIM16 timer clock enable */
        Register::Bit<BASE_ADDRESS + APB2ENR_Offset, 18> TIM17EN; /* TIM17 timer clock enable */
        Register::Bit<BASE_ADDRESS + APB2ENR_Offset, 22> DBGMCUEN; /* MCU debug module clock enable */
        Register::Bit<BASE_ADDRESS + APB2ENR_Offset, 7> USART8EN; /* USART8 clock enable */
        Register::Bit<BASE_ADDRESS + APB2ENR_Offset, 6> USART7EN; /* USART7 clock enable */
        Register::Bit<BASE_ADDRESS + APB2ENR_Offset, 5> USART6EN; /* USART6 clock enable */
    };

    class APB1ENR_T : public Register::Register<RCC_APB1ENR::apb1enr_reg_type, BASE_ADDRESS + APB1ENR_Offset> {
    // APB1 peripheral clock enable register (RCC_APB1ENR)
    public:
        Register::Bit<BASE_ADDRESS + APB1ENR_Offset, 0> TIM2EN; /* Timer 2 clock enable */
        Register::Bit<BASE_ADDRESS + APB1ENR_Offset, 1> TIM3EN; /* Timer 3 clock enable */
        Register::Bit<BASE_ADDRESS + APB1ENR_Offset, 4> TIM6EN; /* Timer 6 clock enable */
        Register::Bit<BASE_ADDRESS + APB1ENR_Offset, 5> TIM7EN; /* TIM7 timer clock enable */
        Register::Bit<BASE_ADDRESS + APB1ENR_Offset, 8> TIM14EN; /* Timer 14 clock enable */
        Register::Bit<BASE_ADDRESS + APB1ENR_Offset, 11> WWDGEN; /* Window watchdog clock enable */
        Register::Bit<BASE_ADDRESS + APB1ENR_Offset, 14> SPI2EN; /* SPI 2 clock enable */
        Register::Bit<BASE_ADDRESS + APB1ENR_Offset, 17> USART2EN; /* USART 2 clock enable */
        Register::Bit<BASE_ADDRESS + APB1ENR_Offset, 18> USART3EN; /* USART3 clock enable */
        Register::Bit<BASE_ADDRESS + APB1ENR_Offset, 19> USART4EN; /* USART4 clock enable */
        Register::Bit<BASE_ADDRESS + APB1ENR_Offset, 20> USART5EN; /* USART5 clock enable */
        Register::Bit<BASE_ADDRESS + APB1ENR_Offset, 21> I2C1EN; /* I2C 1 clock enable */
        Register::Bit<BASE_ADDRESS + APB1ENR_Offset, 22> I2C2EN; /* I2C 2 clock enable */
        Register::Bit<BASE_ADDRESS + APB1ENR_Offset, 23> USBRST; /* USB interface clock enable */
        Register::Bit<BASE_ADDRESS + APB1ENR_Offset, 25> CANEN; /* CAN interface clock enable */
        Register::Bit<BASE_ADDRESS + APB1ENR_Offset, 27> CRSEN; /* Clock Recovery System interface clock enable */
        Register::Bit<BASE_ADDRESS + APB1ENR_Offset, 28> PWREN; /* Power interface clock enable */
        Register::Bit<BASE_ADDRESS + APB1ENR_Offset, 29> DACEN; /* DAC interface clock enable */
        Register::Bit<BASE_ADDRESS + APB1ENR_Offset, 30> CECEN; /* HDMI CEC interface clock enable */
    };

    class BDCR_T : public Register::Register<RCC_BDCR::bdcr_reg_type, BASE_ADDRESS + BDCR_Offset> {
    // Backup domain control register (RCC_BDCR)
    public:
        Register::Bit<BASE_ADDRESS + BDCR_Offset, 0> LSEON; /* External Low Speed oscillator enable */
        Register::Bit<BASE_ADDRESS + BDCR_Offset, 1> LSERDY; /* External Low Speed oscillator ready */
        Register::Bit<BASE_ADDRESS + BDCR_Offset, 2> LSEBYP; /* External Low Speed oscillator bypass */
        Register::Bitfield<BASE_ADDRESS + BDCR_Offset, 3, 2, BDCR_LSEDRV_T> LSEDRV; /* LSE oscillator drive capability */
        Register::Bitfield<BASE_ADDRESS + BDCR_Offset, 8, 2, BDCR_RTCSEL_T> RTCSEL; /* RTC clock source selection */
        Register::Bit<BASE_ADDRESS + BDCR_Offset, 15> RTCEN; /* RTC clock enable */
        Register::Bit<BASE_ADDRESS + BDCR_Offset, 16> BDRST; /* Backup domain software reset */
    };

    class CSR_T : public Register::Register<RCC_CSR::csr_reg_type, BASE_ADDRESS + CSR_Offset> {
    // Control/status register (RCC_CSR)
    public:
        Register::Bit<BASE_ADDRESS + CSR_Offset, 0> LSION; /* Internal low speed oscillator enable */
        Register::Bit<BASE_ADDRESS + CSR_Offset, 1> LSIRDY; /* Internal low speed oscillator ready */
        Register::Bit<BASE_ADDRESS + CSR_Offset, 24> RMVF; /* Remove reset flag */
        Register::Bit<BASE_ADDRESS + CSR_Offset, 25> OBLRSTF; /* Option byte loader reset flag */
        Register::Bit<BASE_ADDRESS + CSR_Offset, 26> PINRSTF; /* PIN reset flag */
        Register::Bit<BASE_ADDRESS + CSR_Offset, 27> PORRSTF; /* POR/PDR reset flag */
        Register::Bit<BASE_ADDRESS + CSR_Offset, 28> SFTRSTF; /* Software reset flag */
        Register::Bit<BASE_ADDRESS + CSR_Offset, 29> IWDGRSTF; /* Independent watchdog reset flag */
        Register::Bit<BASE_ADDRESS + CSR_Offset, 30> WWDGRSTF; /* Window watchdog reset flag */
        Register::Bit<BASE_ADDRESS + CSR_Offset, 31> LPWRRSTF; /* Low-power reset flag */
    };

    class AHBRSTR_T : public Register::Register<RCC_AHBRSTR::ahbrstr_reg_type, BASE_ADDRESS + AHBRSTR_Offset> {
    // AHB peripheral reset register
    public:
        Register::Bit<BASE_ADDRESS + AHBRSTR_Offset, 17> IOPARST; /* I/O port A reset */
        Register::Bit<BASE_ADDRESS + AHBRSTR_Offset, 18> IOPBRST; /* I/O port B reset */
        Register::Bit<BASE_ADDRESS + AHBRSTR_Offset, 19> IOPCRST; /* I/O port C reset */
        Register::Bit<BASE_ADDRESS + AHBRSTR_Offset, 20> IOPDRST; /* I/O port D reset */
        Register::Bit<BASE_ADDRESS + AHBRSTR_Offset, 22> IOPFRST; /* I/O port F reset */
        Register::Bit<BASE_ADDRESS + AHBRSTR_Offset, 24> TSCRST; /* Touch sensing controller reset */
    };

    class CFGR2_T : public Register::Register<RCC_CFGR2::cfgr2_reg_type, BASE_ADDRESS + CFGR2_Offset> {
    // Clock configuration register 2
    public:
        Register::Bitfield<BASE_ADDRESS + CFGR2_Offset, 0, 4, CFGR2_PREDIV_T> PREDIV; /* PREDIV division factor */
    };

    class CFGR3_T : public Register::Register<RCC_CFGR3::cfgr3_reg_type, BASE_ADDRESS + CFGR3_Offset> {
    // Clock configuration register 3
    public:
        Register::Bitfield<BASE_ADDRESS + CFGR3_Offset, 0, 2, CFGR3_USART1SW_T> USART1SW; /* USART1 clock source selection */
        Register::Bit<BASE_ADDRESS + CFGR3_Offset, 4> I2C1SW; /* I2C1 clock source selection */
        Register::Bit<BASE_ADDRESS + CFGR3_Offset, 6> CECSW; /* HDMI CEC clock source selection */
        Register::Bit<BASE_ADDRESS + CFGR3_Offset, 7> USBSW; /* USB clock source selection */
        Register::Bit<BASE_ADDRESS + CFGR3_Offset, 8> ADCSW; /* ADC clock source selection */
        Register::Bitfield<BASE_ADDRESS + CFGR3_Offset, 16, 2, CFGR3_USART2SW_T> USART2SW; /* USART2 clock source selection */
    };

    class CR2_T : public Register::Register<RCC_CR2::cr2_reg_type, BASE_ADDRESS + CR2_Offset> {
    // Clock control register 2
    public:
        Register::Bit<BASE_ADDRESS + CR2_Offset, 0> HSI14ON; /* HSI14 clock enable */
        Register::Bit<BASE_ADDRESS + CR2_Offset, 1> HSI14RDY; /* HR14 clock ready flag */
        Register::Bit<BASE_ADDRESS + CR2_Offset, 2> HSI14DIS; /* HSI14 clock request from ADC disable */
        Register::Bitfield<BASE_ADDRESS + CR2_Offset, 3, 5, CR2_HSI14TRIM_T> HSI14TRIM; /* HSI14 clock trimming */
        Register::Bitfield<BASE_ADDRESS + CR2_Offset, 8, 8, CR2_HSI14CAL_T> HSI14CAL; /* HSI14 clock calibration */
        Register::Bit<BASE_ADDRESS + CR2_Offset, 16> HSI48ON; /* HSI48 clock enable */
        Register::Bit<BASE_ADDRESS + CR2_Offset, 17> HSI48RDY; /* HSI48 clock ready flag */
        Register::Bit<BASE_ADDRESS + CR2_Offset, 24> HSI48CAL; /* HSI48 factory clock calibration */
    };

    CR_T CR;
    CFGR_T CFGR;
    CIR_T CIR;
    APB2RSTR_T APB2RSTR;
    APB1RSTR_T APB1RSTR;
    AHBENR_T AHBENR;
    APB2ENR_T APB2ENR;
    APB1ENR_T APB1ENR;
    BDCR_T BDCR;
    CSR_T CSR;
    AHBRSTR_T AHBRSTR;
    CFGR2_T CFGR2;
    CFGR3_T CFGR3;
    CR2_T CR2;
};

} // namespace STM32LIB

#endif // STM32F0X1_RCC_HPP_

