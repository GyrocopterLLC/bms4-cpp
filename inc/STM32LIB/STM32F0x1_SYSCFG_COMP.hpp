#ifndef STM32F0X1_SYSCFG_COMP_HPP_
#define STM32F0X1_SYSCFG_COMP_HPP_
#pragma once

#include <cstdint>
#include "Register.hpp"

/* System configuration controller */
namespace STM32LIB { 

/* Overwritable types for each of the bitfields.
 * Defaults to uint32_t, but feel free to redefine with your
 * own custom enum class later. */
using SYSCFG_CFGR1_MEM_MODE_T = uint32_t;
using SYSCFG_EXTICR1_EXTI3_T = uint32_t;
using SYSCFG_EXTICR1_EXTI2_T = uint32_t;
using SYSCFG_EXTICR1_EXTI1_T = uint32_t;
using SYSCFG_EXTICR1_EXTI0_T = uint32_t;
using SYSCFG_EXTICR2_EXTI7_T = uint32_t;
using SYSCFG_EXTICR2_EXTI6_T = uint32_t;
using SYSCFG_EXTICR2_EXTI5_T = uint32_t;
using SYSCFG_EXTICR2_EXTI4_T = uint32_t;
using SYSCFG_EXTICR3_EXTI11_T = uint32_t;
using SYSCFG_EXTICR3_EXTI10_T = uint32_t;
using SYSCFG_EXTICR3_EXTI9_T = uint32_t;
using SYSCFG_EXTICR3_EXTI8_T = uint32_t;
using SYSCFG_EXTICR4_EXTI15_T = uint32_t;
using SYSCFG_EXTICR4_EXTI14_T = uint32_t;
using SYSCFG_EXTICR4_EXTI13_T = uint32_t;
using SYSCFG_EXTICR4_EXTI12_T = uint32_t;
using COMP_CSR_COMP1MODE_T = uint32_t;
using COMP_CSR_COMP1INSEL_T = uint32_t;
using COMP_CSR_COMP1OUTSEL_T = uint32_t;
using COMP_CSR_COMP1HYST_T = uint32_t;
using COMP_CSR_COMP2MODE_T = uint32_t;
using COMP_CSR_COMP2INSEL_T = uint32_t;
using COMP_CSR_COMP2OUTSEL_T = uint32_t;
using COMP_CSR_COMP2HYST_T = uint32_t;

namespace SYSCFG_COMP_SYSCFG_CFGR1 {

    enum class syscfg_cfgr1_reg_type {};

    template<SYSCFG_CFGR1_MEM_MODE_T val>
    using MEM_MODE = Register::Combo_Bitfield<syscfg_cfgr1_reg_type, 0, 2, SYSCFG_CFGR1_MEM_MODE_T, val>;

    template<bool tf>
    using ADC_DMA_RMP = Register::Combo_Bit<syscfg_cfgr1_reg_type, 8, tf>;

    template<bool tf>
    using USART1_TX_DMA_RMP = Register::Combo_Bit<syscfg_cfgr1_reg_type, 9, tf>;

    template<bool tf>
    using USART1_RX_DMA_RMP = Register::Combo_Bit<syscfg_cfgr1_reg_type, 10, tf>;

    template<bool tf>
    using TIM16_DMA_RMP = Register::Combo_Bit<syscfg_cfgr1_reg_type, 11, tf>;

    template<bool tf>
    using TIM17_DMA_RMP = Register::Combo_Bit<syscfg_cfgr1_reg_type, 12, tf>;

    template<bool tf>
    using I2C_PB6_FM = Register::Combo_Bit<syscfg_cfgr1_reg_type, 16, tf>;

    template<bool tf>
    using I2C_PB7_FM = Register::Combo_Bit<syscfg_cfgr1_reg_type, 17, tf>;

    template<bool tf>
    using I2C_PB8_FM = Register::Combo_Bit<syscfg_cfgr1_reg_type, 18, tf>;

    template<bool tf>
    using I2C_PB9_FM = Register::Combo_Bit<syscfg_cfgr1_reg_type, 19, tf>;

    template<bool tf>
    using I2C1_FM_plus = Register::Combo_Bit<syscfg_cfgr1_reg_type, 20, tf>;

    template<bool tf>
    using I2C2_FM_plus = Register::Combo_Bit<syscfg_cfgr1_reg_type, 21, tf>;

    template<bool tf>
    using SPI2_DMA_RMP = Register::Combo_Bit<syscfg_cfgr1_reg_type, 24, tf>;

    template<bool tf>
    using USART2_DMA_RMP = Register::Combo_Bit<syscfg_cfgr1_reg_type, 25, tf>;

    template<bool tf>
    using USART3_DMA_RMP = Register::Combo_Bit<syscfg_cfgr1_reg_type, 26, tf>;

    template<bool tf>
    using I2C1_DMA_RMP = Register::Combo_Bit<syscfg_cfgr1_reg_type, 27, tf>;

    template<bool tf>
    using TIM1_DMA_RMP = Register::Combo_Bit<syscfg_cfgr1_reg_type, 28, tf>;

    template<bool tf>
    using TIM2_DMA_RMP = Register::Combo_Bit<syscfg_cfgr1_reg_type, 29, tf>;

    template<bool tf>
    using TIM3_DMA_RMP = Register::Combo_Bit<syscfg_cfgr1_reg_type, 30, tf>;

} // SYSCFG_COMP_SYSCFG_CFGR1
namespace SYSCFG_COMP_SYSCFG_EXTICR1 {

    enum class syscfg_exticr1_reg_type {};

    template<SYSCFG_EXTICR1_EXTI3_T val>
    using EXTI3 = Register::Combo_Bitfield<syscfg_exticr1_reg_type, 12, 4, SYSCFG_EXTICR1_EXTI3_T, val>;

    template<SYSCFG_EXTICR1_EXTI2_T val>
    using EXTI2 = Register::Combo_Bitfield<syscfg_exticr1_reg_type, 8, 4, SYSCFG_EXTICR1_EXTI2_T, val>;

    template<SYSCFG_EXTICR1_EXTI1_T val>
    using EXTI1 = Register::Combo_Bitfield<syscfg_exticr1_reg_type, 4, 4, SYSCFG_EXTICR1_EXTI1_T, val>;

    template<SYSCFG_EXTICR1_EXTI0_T val>
    using EXTI0 = Register::Combo_Bitfield<syscfg_exticr1_reg_type, 0, 4, SYSCFG_EXTICR1_EXTI0_T, val>;

} // SYSCFG_COMP_SYSCFG_EXTICR1
namespace SYSCFG_COMP_SYSCFG_EXTICR2 {

    enum class syscfg_exticr2_reg_type {};

    template<SYSCFG_EXTICR2_EXTI7_T val>
    using EXTI7 = Register::Combo_Bitfield<syscfg_exticr2_reg_type, 12, 4, SYSCFG_EXTICR2_EXTI7_T, val>;

    template<SYSCFG_EXTICR2_EXTI6_T val>
    using EXTI6 = Register::Combo_Bitfield<syscfg_exticr2_reg_type, 8, 4, SYSCFG_EXTICR2_EXTI6_T, val>;

    template<SYSCFG_EXTICR2_EXTI5_T val>
    using EXTI5 = Register::Combo_Bitfield<syscfg_exticr2_reg_type, 4, 4, SYSCFG_EXTICR2_EXTI5_T, val>;

    template<SYSCFG_EXTICR2_EXTI4_T val>
    using EXTI4 = Register::Combo_Bitfield<syscfg_exticr2_reg_type, 0, 4, SYSCFG_EXTICR2_EXTI4_T, val>;

} // SYSCFG_COMP_SYSCFG_EXTICR2
namespace SYSCFG_COMP_SYSCFG_EXTICR3 {

    enum class syscfg_exticr3_reg_type {};

    template<SYSCFG_EXTICR3_EXTI11_T val>
    using EXTI11 = Register::Combo_Bitfield<syscfg_exticr3_reg_type, 12, 4, SYSCFG_EXTICR3_EXTI11_T, val>;

    template<SYSCFG_EXTICR3_EXTI10_T val>
    using EXTI10 = Register::Combo_Bitfield<syscfg_exticr3_reg_type, 8, 4, SYSCFG_EXTICR3_EXTI10_T, val>;

    template<SYSCFG_EXTICR3_EXTI9_T val>
    using EXTI9 = Register::Combo_Bitfield<syscfg_exticr3_reg_type, 4, 4, SYSCFG_EXTICR3_EXTI9_T, val>;

    template<SYSCFG_EXTICR3_EXTI8_T val>
    using EXTI8 = Register::Combo_Bitfield<syscfg_exticr3_reg_type, 0, 4, SYSCFG_EXTICR3_EXTI8_T, val>;

} // SYSCFG_COMP_SYSCFG_EXTICR3
namespace SYSCFG_COMP_SYSCFG_EXTICR4 {

    enum class syscfg_exticr4_reg_type {};

    template<SYSCFG_EXTICR4_EXTI15_T val>
    using EXTI15 = Register::Combo_Bitfield<syscfg_exticr4_reg_type, 12, 4, SYSCFG_EXTICR4_EXTI15_T, val>;

    template<SYSCFG_EXTICR4_EXTI14_T val>
    using EXTI14 = Register::Combo_Bitfield<syscfg_exticr4_reg_type, 8, 4, SYSCFG_EXTICR4_EXTI14_T, val>;

    template<SYSCFG_EXTICR4_EXTI13_T val>
    using EXTI13 = Register::Combo_Bitfield<syscfg_exticr4_reg_type, 4, 4, SYSCFG_EXTICR4_EXTI13_T, val>;

    template<SYSCFG_EXTICR4_EXTI12_T val>
    using EXTI12 = Register::Combo_Bitfield<syscfg_exticr4_reg_type, 0, 4, SYSCFG_EXTICR4_EXTI12_T, val>;

} // SYSCFG_COMP_SYSCFG_EXTICR4
namespace SYSCFG_COMP_SYSCFG_CFGR2 {

    enum class syscfg_cfgr2_reg_type {};

    template<bool tf>
    using SRAM_PEF = Register::Combo_Bit<syscfg_cfgr2_reg_type, 8, tf>;

    template<bool tf>
    using PVD_LOCK = Register::Combo_Bit<syscfg_cfgr2_reg_type, 2, tf>;

    template<bool tf>
    using SRAM_PARITY_LOCK = Register::Combo_Bit<syscfg_cfgr2_reg_type, 1, tf>;

    template<bool tf>
    using LOCUP_LOCK = Register::Combo_Bit<syscfg_cfgr2_reg_type, 0, tf>;

} // SYSCFG_COMP_SYSCFG_CFGR2
namespace SYSCFG_COMP_COMP_CSR {

    enum class comp_csr_reg_type {};

    template<bool tf>
    using COMP1EN = Register::Combo_Bit<comp_csr_reg_type, 0, tf>;

    template<bool tf>
    using COMP1_INP_DAC = Register::Combo_Bit<comp_csr_reg_type, 1, tf>;

    template<COMP_CSR_COMP1MODE_T val>
    using COMP1MODE = Register::Combo_Bitfield<comp_csr_reg_type, 2, 2, COMP_CSR_COMP1MODE_T, val>;

    template<COMP_CSR_COMP1INSEL_T val>
    using COMP1INSEL = Register::Combo_Bitfield<comp_csr_reg_type, 4, 3, COMP_CSR_COMP1INSEL_T, val>;

    template<COMP_CSR_COMP1OUTSEL_T val>
    using COMP1OUTSEL = Register::Combo_Bitfield<comp_csr_reg_type, 8, 3, COMP_CSR_COMP1OUTSEL_T, val>;

    template<bool tf>
    using COMP1POL = Register::Combo_Bit<comp_csr_reg_type, 11, tf>;

    template<COMP_CSR_COMP1HYST_T val>
    using COMP1HYST = Register::Combo_Bitfield<comp_csr_reg_type, 12, 2, COMP_CSR_COMP1HYST_T, val>;

    template<bool tf>
    using COMP1OUT = Register::Combo_Bit<comp_csr_reg_type, 14, tf>;

    template<bool tf>
    using COMP1LOCK = Register::Combo_Bit<comp_csr_reg_type, 15, tf>;

    template<bool tf>
    using COMP2EN = Register::Combo_Bit<comp_csr_reg_type, 16, tf>;

    template<COMP_CSR_COMP2MODE_T val>
    using COMP2MODE = Register::Combo_Bitfield<comp_csr_reg_type, 18, 2, COMP_CSR_COMP2MODE_T, val>;

    template<COMP_CSR_COMP2INSEL_T val>
    using COMP2INSEL = Register::Combo_Bitfield<comp_csr_reg_type, 20, 3, COMP_CSR_COMP2INSEL_T, val>;

    template<bool tf>
    using WNDWEN = Register::Combo_Bit<comp_csr_reg_type, 23, tf>;

    template<COMP_CSR_COMP2OUTSEL_T val>
    using COMP2OUTSEL = Register::Combo_Bitfield<comp_csr_reg_type, 24, 3, COMP_CSR_COMP2OUTSEL_T, val>;

    template<bool tf>
    using COMP2POL = Register::Combo_Bit<comp_csr_reg_type, 27, tf>;

    template<COMP_CSR_COMP2HYST_T val>
    using COMP2HYST = Register::Combo_Bitfield<comp_csr_reg_type, 28, 2, COMP_CSR_COMP2HYST_T, val>;

    template<bool tf>
    using COMP2OUT = Register::Combo_Bit<comp_csr_reg_type, 30, tf>;

    template<bool tf>
    using COMP2LOCK = Register::Combo_Bit<comp_csr_reg_type, 31, tf>;

} // SYSCFG_COMP_COMP_CSR
template<uint32_t BASE_ADDRESS>
class SYSCFG_COMP {
public:
    static const uint32_t SYSCFG_CFGR1_Offset = 0x0000;
    static const uint32_t SYSCFG_EXTICR1_Offset = 0x0008;
    static const uint32_t SYSCFG_EXTICR2_Offset = 0x000C;
    static const uint32_t SYSCFG_EXTICR3_Offset = 0x0010;
    static const uint32_t SYSCFG_EXTICR4_Offset = 0x0014;
    static const uint32_t SYSCFG_CFGR2_Offset = 0x0018;
    static const uint32_t COMP_CSR_Offset = 0x001C;

    SYSCFG_COMP() = default;
    SYSCFG_COMP( const SYSCFG_COMP& ) = delete;
    const SYSCFG_COMP& operator=( const SYSCFG_COMP& ) = delete;

    class SYSCFG_CFGR1_T : public Register::Register<SYSCFG_COMP_SYSCFG_CFGR1::syscfg_cfgr1_reg_type, BASE_ADDRESS + SYSCFG_CFGR1_Offset> {
    // configuration register 1
    public:
        Register::Bitfield<BASE_ADDRESS + SYSCFG_CFGR1_Offset, 0, 2, SYSCFG_CFGR1_MEM_MODE_T> MEM_MODE; /* Memory mapping selection bits */
        Register::Bit<BASE_ADDRESS + SYSCFG_CFGR1_Offset, 8> ADC_DMA_RMP; /* ADC DMA remapping bit */
        Register::Bit<BASE_ADDRESS + SYSCFG_CFGR1_Offset, 9> USART1_TX_DMA_RMP; /* USART1_TX DMA remapping bit */
        Register::Bit<BASE_ADDRESS + SYSCFG_CFGR1_Offset, 10> USART1_RX_DMA_RMP; /* USART1_RX DMA request remapping bit */
        Register::Bit<BASE_ADDRESS + SYSCFG_CFGR1_Offset, 11> TIM16_DMA_RMP; /* TIM16 DMA request remapping bit */
        Register::Bit<BASE_ADDRESS + SYSCFG_CFGR1_Offset, 12> TIM17_DMA_RMP; /* TIM17 DMA request remapping bit */
        Register::Bit<BASE_ADDRESS + SYSCFG_CFGR1_Offset, 16> I2C_PB6_FM; /* Fast Mode Plus (FM plus) driving capability activation bits. */
        Register::Bit<BASE_ADDRESS + SYSCFG_CFGR1_Offset, 17> I2C_PB7_FM; /* Fast Mode Plus (FM+) driving capability activation bits. */
        Register::Bit<BASE_ADDRESS + SYSCFG_CFGR1_Offset, 18> I2C_PB8_FM; /* Fast Mode Plus (FM+) driving capability activation bits. */
        Register::Bit<BASE_ADDRESS + SYSCFG_CFGR1_Offset, 19> I2C_PB9_FM; /* Fast Mode Plus (FM+) driving capability activation bits. */
        Register::Bit<BASE_ADDRESS + SYSCFG_CFGR1_Offset, 20> I2C1_FM_plus; /* FM+ driving capability activation for I2C1 */
        Register::Bit<BASE_ADDRESS + SYSCFG_CFGR1_Offset, 21> I2C2_FM_plus; /* FM+ driving capability activation for I2C2 */
        Register::Bit<BASE_ADDRESS + SYSCFG_CFGR1_Offset, 24> SPI2_DMA_RMP; /* SPI2 DMA request remapping bit */
        Register::Bit<BASE_ADDRESS + SYSCFG_CFGR1_Offset, 25> USART2_DMA_RMP; /* USART2 DMA request remapping bit */
        Register::Bit<BASE_ADDRESS + SYSCFG_CFGR1_Offset, 26> USART3_DMA_RMP; /* USART3 DMA request remapping bit */
        Register::Bit<BASE_ADDRESS + SYSCFG_CFGR1_Offset, 27> I2C1_DMA_RMP; /* I2C1 DMA request remapping bit */
        Register::Bit<BASE_ADDRESS + SYSCFG_CFGR1_Offset, 28> TIM1_DMA_RMP; /* TIM1 DMA request remapping bit */
        Register::Bit<BASE_ADDRESS + SYSCFG_CFGR1_Offset, 29> TIM2_DMA_RMP; /* TIM2 DMA request remapping bit */
        Register::Bit<BASE_ADDRESS + SYSCFG_CFGR1_Offset, 30> TIM3_DMA_RMP; /* TIM3 DMA request remapping bit */
    };

    class SYSCFG_EXTICR1_T : public Register::Register<SYSCFG_COMP_SYSCFG_EXTICR1::syscfg_exticr1_reg_type, BASE_ADDRESS + SYSCFG_EXTICR1_Offset> {
    // external interrupt configuration register 1
    public:
        Register::Bitfield<BASE_ADDRESS + SYSCFG_EXTICR1_Offset, 12, 4, SYSCFG_EXTICR1_EXTI3_T> EXTI3; /* EXTI 3 configuration bits */
        Register::Bitfield<BASE_ADDRESS + SYSCFG_EXTICR1_Offset, 8, 4, SYSCFG_EXTICR1_EXTI2_T> EXTI2; /* EXTI 2 configuration bits */
        Register::Bitfield<BASE_ADDRESS + SYSCFG_EXTICR1_Offset, 4, 4, SYSCFG_EXTICR1_EXTI1_T> EXTI1; /* EXTI 1 configuration bits */
        Register::Bitfield<BASE_ADDRESS + SYSCFG_EXTICR1_Offset, 0, 4, SYSCFG_EXTICR1_EXTI0_T> EXTI0; /* EXTI 0 configuration bits */
    };

    class SYSCFG_EXTICR2_T : public Register::Register<SYSCFG_COMP_SYSCFG_EXTICR2::syscfg_exticr2_reg_type, BASE_ADDRESS + SYSCFG_EXTICR2_Offset> {
    // external interrupt configuration register 2
    public:
        Register::Bitfield<BASE_ADDRESS + SYSCFG_EXTICR2_Offset, 12, 4, SYSCFG_EXTICR2_EXTI7_T> EXTI7; /* EXTI 7 configuration bits */
        Register::Bitfield<BASE_ADDRESS + SYSCFG_EXTICR2_Offset, 8, 4, SYSCFG_EXTICR2_EXTI6_T> EXTI6; /* EXTI 6 configuration bits */
        Register::Bitfield<BASE_ADDRESS + SYSCFG_EXTICR2_Offset, 4, 4, SYSCFG_EXTICR2_EXTI5_T> EXTI5; /* EXTI 5 configuration bits */
        Register::Bitfield<BASE_ADDRESS + SYSCFG_EXTICR2_Offset, 0, 4, SYSCFG_EXTICR2_EXTI4_T> EXTI4; /* EXTI 4 configuration bits */
    };

    class SYSCFG_EXTICR3_T : public Register::Register<SYSCFG_COMP_SYSCFG_EXTICR3::syscfg_exticr3_reg_type, BASE_ADDRESS + SYSCFG_EXTICR3_Offset> {
    // external interrupt configuration register 3
    public:
        Register::Bitfield<BASE_ADDRESS + SYSCFG_EXTICR3_Offset, 12, 4, SYSCFG_EXTICR3_EXTI11_T> EXTI11; /* EXTI 11 configuration bits */
        Register::Bitfield<BASE_ADDRESS + SYSCFG_EXTICR3_Offset, 8, 4, SYSCFG_EXTICR3_EXTI10_T> EXTI10; /* EXTI 10 configuration bits */
        Register::Bitfield<BASE_ADDRESS + SYSCFG_EXTICR3_Offset, 4, 4, SYSCFG_EXTICR3_EXTI9_T> EXTI9; /* EXTI 9 configuration bits */
        Register::Bitfield<BASE_ADDRESS + SYSCFG_EXTICR3_Offset, 0, 4, SYSCFG_EXTICR3_EXTI8_T> EXTI8; /* EXTI 8 configuration bits */
    };

    class SYSCFG_EXTICR4_T : public Register::Register<SYSCFG_COMP_SYSCFG_EXTICR4::syscfg_exticr4_reg_type, BASE_ADDRESS + SYSCFG_EXTICR4_Offset> {
    // external interrupt configuration register 4
    public:
        Register::Bitfield<BASE_ADDRESS + SYSCFG_EXTICR4_Offset, 12, 4, SYSCFG_EXTICR4_EXTI15_T> EXTI15; /* EXTI 15 configuration bits */
        Register::Bitfield<BASE_ADDRESS + SYSCFG_EXTICR4_Offset, 8, 4, SYSCFG_EXTICR4_EXTI14_T> EXTI14; /* EXTI 14 configuration bits */
        Register::Bitfield<BASE_ADDRESS + SYSCFG_EXTICR4_Offset, 4, 4, SYSCFG_EXTICR4_EXTI13_T> EXTI13; /* EXTI 13 configuration bits */
        Register::Bitfield<BASE_ADDRESS + SYSCFG_EXTICR4_Offset, 0, 4, SYSCFG_EXTICR4_EXTI12_T> EXTI12; /* EXTI 12 configuration bits */
    };

    class SYSCFG_CFGR2_T : public Register::Register<SYSCFG_COMP_SYSCFG_CFGR2::syscfg_cfgr2_reg_type, BASE_ADDRESS + SYSCFG_CFGR2_Offset> {
    // configuration register 2
    public:
        Register::Bit<BASE_ADDRESS + SYSCFG_CFGR2_Offset, 8> SRAM_PEF; /* SRAM parity flag */
        Register::Bit<BASE_ADDRESS + SYSCFG_CFGR2_Offset, 2> PVD_LOCK; /* PVD lock enable bit */
        Register::Bit<BASE_ADDRESS + SYSCFG_CFGR2_Offset, 1> SRAM_PARITY_LOCK; /* SRAM parity lock bit */
        Register::Bit<BASE_ADDRESS + SYSCFG_CFGR2_Offset, 0> LOCUP_LOCK; /* Cortex-M0 LOCKUP bit enable bit */
    };

    class COMP_CSR_T : public Register::Register<SYSCFG_COMP_COMP_CSR::comp_csr_reg_type, BASE_ADDRESS + COMP_CSR_Offset> {
    // control and status register
    public:
        Register::Bit<BASE_ADDRESS + COMP_CSR_Offset, 0> COMP1EN; /* Comparator 1 enable */
        Register::Bit<BASE_ADDRESS + COMP_CSR_Offset, 1> COMP1_INP_DAC; /* COMP1_INP_DAC */
        Register::Bitfield<BASE_ADDRESS + COMP_CSR_Offset, 2, 2, COMP_CSR_COMP1MODE_T> COMP1MODE; /* Comparator 1 mode */
        Register::Bitfield<BASE_ADDRESS + COMP_CSR_Offset, 4, 3, COMP_CSR_COMP1INSEL_T> COMP1INSEL; /* Comparator 1 inverting input selection */
        Register::Bitfield<BASE_ADDRESS + COMP_CSR_Offset, 8, 3, COMP_CSR_COMP1OUTSEL_T> COMP1OUTSEL; /* Comparator 1 output selection */
        Register::Bit<BASE_ADDRESS + COMP_CSR_Offset, 11> COMP1POL; /* Comparator 1 output polarity */
        Register::Bitfield<BASE_ADDRESS + COMP_CSR_Offset, 12, 2, COMP_CSR_COMP1HYST_T> COMP1HYST; /* Comparator 1 hysteresis */
        Register::Bit<BASE_ADDRESS + COMP_CSR_Offset, 14> COMP1OUT; /* Comparator 1 output */
        Register::Bit<BASE_ADDRESS + COMP_CSR_Offset, 15> COMP1LOCK; /* Comparator 1 lock */
        Register::Bit<BASE_ADDRESS + COMP_CSR_Offset, 16> COMP2EN; /* Comparator 2 enable */
        Register::Bitfield<BASE_ADDRESS + COMP_CSR_Offset, 18, 2, COMP_CSR_COMP2MODE_T> COMP2MODE; /* Comparator 2 mode */
        Register::Bitfield<BASE_ADDRESS + COMP_CSR_Offset, 20, 3, COMP_CSR_COMP2INSEL_T> COMP2INSEL; /* Comparator 2 inverting input selection */
        Register::Bit<BASE_ADDRESS + COMP_CSR_Offset, 23> WNDWEN; /* Window mode enable */
        Register::Bitfield<BASE_ADDRESS + COMP_CSR_Offset, 24, 3, COMP_CSR_COMP2OUTSEL_T> COMP2OUTSEL; /* Comparator 2 output selection */
        Register::Bit<BASE_ADDRESS + COMP_CSR_Offset, 27> COMP2POL; /* Comparator 2 output polarity */
        Register::Bitfield<BASE_ADDRESS + COMP_CSR_Offset, 28, 2, COMP_CSR_COMP2HYST_T> COMP2HYST; /* Comparator 2 hysteresis */
        Register::Bit<BASE_ADDRESS + COMP_CSR_Offset, 30> COMP2OUT; /* Comparator 2 output */
        Register::Bit<BASE_ADDRESS + COMP_CSR_Offset, 31> COMP2LOCK; /* Comparator 2 lock */
    };

    SYSCFG_CFGR1_T SYSCFG_CFGR1;
    SYSCFG_EXTICR1_T SYSCFG_EXTICR1;
    SYSCFG_EXTICR2_T SYSCFG_EXTICR2;
    SYSCFG_EXTICR3_T SYSCFG_EXTICR3;
    SYSCFG_EXTICR4_T SYSCFG_EXTICR4;
    SYSCFG_CFGR2_T SYSCFG_CFGR2;
    COMP_CSR_T COMP_CSR;
};

} // namespace STM32LIB

#endif // STM32F0X1_SYSCFG_COMP_HPP_

