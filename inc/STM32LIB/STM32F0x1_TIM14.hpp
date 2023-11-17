#ifndef STM32F0X1_TIM14_HPP_
#define STM32F0X1_TIM14_HPP_
#pragma once

#include <cstdint>
#include "Register.hpp"

/* General-purpose-timers */
namespace STM32LIB { 

/* Overwritable types for each of the bitfields.
 * Defaults to uint32_t, but feel free to redefine with your
 * own custom enum class later. */
using CR1_CKD_T = uint32_t;
using CCMR1_Output_CC1S_T = uint32_t;
using CCMR1_Output_OC1M_T = uint32_t;
using CCMR1_Input_IC1F_T = uint32_t;
using CCMR1_Input_IC1PSC_T = uint32_t;
using CCMR1_Input_CC1S_T = uint32_t;
using CNT_CNT_T = uint32_t;
using PSC_PSC_T = uint32_t;
using ARR_ARR_T = uint32_t;
using CCR1_CCR1_T = uint32_t;
using OR_RMP_T = uint32_t;

namespace TIM14_CR1 {

    enum class cr1_reg_type {};

    template<CR1_CKD_T val>
    using CKD = Register::Combo_Bitfield<cr1_reg_type, 8, 2, CR1_CKD_T, val>;

    template<bool tf>
    using ARPE = Register::Combo_Bit<cr1_reg_type, 7, tf>;

    template<bool tf>
    using URS = Register::Combo_Bit<cr1_reg_type, 2, tf>;

    template<bool tf>
    using UDIS = Register::Combo_Bit<cr1_reg_type, 1, tf>;

    template<bool tf>
    using CEN = Register::Combo_Bit<cr1_reg_type, 0, tf>;

} // TIM14_CR1
namespace TIM14_DIER {

    enum class dier_reg_type {};

    template<bool tf>
    using CC1IE = Register::Combo_Bit<dier_reg_type, 1, tf>;

    template<bool tf>
    using UIE = Register::Combo_Bit<dier_reg_type, 0, tf>;

} // TIM14_DIER
namespace TIM14_SR {

    enum class sr_reg_type {};

    template<bool tf>
    using CC1OF = Register::Combo_Bit<sr_reg_type, 9, tf>;

    template<bool tf>
    using CC1IF = Register::Combo_Bit<sr_reg_type, 1, tf>;

    template<bool tf>
    using UIF = Register::Combo_Bit<sr_reg_type, 0, tf>;

} // TIM14_SR
namespace TIM14_EGR {

    enum class egr_reg_type {};

    template<bool tf>
    using CC1G = Register::Combo_Bit<egr_reg_type, 1, tf>;

    template<bool tf>
    using UG = Register::Combo_Bit<egr_reg_type, 0, tf>;

} // TIM14_EGR
namespace TIM14_CCMR1_Output {

    enum class ccmr1_output_reg_type {};

    template<CCMR1_Output_CC1S_T val>
    using CC1S = Register::Combo_Bitfield<ccmr1_output_reg_type, 0, 2, CCMR1_Output_CC1S_T, val>;

    template<bool tf>
    using OC1FE = Register::Combo_Bit<ccmr1_output_reg_type, 2, tf>;

    template<bool tf>
    using OC1PE = Register::Combo_Bit<ccmr1_output_reg_type, 3, tf>;

    template<CCMR1_Output_OC1M_T val>
    using OC1M = Register::Combo_Bitfield<ccmr1_output_reg_type, 4, 3, CCMR1_Output_OC1M_T, val>;

} // TIM14_CCMR1_Output
namespace TIM14_CCMR1_Input {

    enum class ccmr1_input_reg_type {};

    template<CCMR1_Input_IC1F_T val>
    using IC1F = Register::Combo_Bitfield<ccmr1_input_reg_type, 4, 4, CCMR1_Input_IC1F_T, val>;

    template<CCMR1_Input_IC1PSC_T val>
    using IC1PSC = Register::Combo_Bitfield<ccmr1_input_reg_type, 2, 2, CCMR1_Input_IC1PSC_T, val>;

    template<CCMR1_Input_CC1S_T val>
    using CC1S = Register::Combo_Bitfield<ccmr1_input_reg_type, 0, 2, CCMR1_Input_CC1S_T, val>;

} // TIM14_CCMR1_Input
namespace TIM14_CCER {

    enum class ccer_reg_type {};

    template<bool tf>
    using CC1NP = Register::Combo_Bit<ccer_reg_type, 3, tf>;

    template<bool tf>
    using CC1P = Register::Combo_Bit<ccer_reg_type, 1, tf>;

    template<bool tf>
    using CC1E = Register::Combo_Bit<ccer_reg_type, 0, tf>;

} // TIM14_CCER
namespace TIM14_CNT {

    enum class cnt_reg_type {};

    template<CNT_CNT_T val>
    using CNT = Register::Combo_Bitfield<cnt_reg_type, 0, 16, CNT_CNT_T, val>;

} // TIM14_CNT
namespace TIM14_PSC {

    enum class psc_reg_type {};

    template<PSC_PSC_T val>
    using PSC = Register::Combo_Bitfield<psc_reg_type, 0, 16, PSC_PSC_T, val>;

} // TIM14_PSC
namespace TIM14_ARR {

    enum class arr_reg_type {};

    template<ARR_ARR_T val>
    using ARR = Register::Combo_Bitfield<arr_reg_type, 0, 16, ARR_ARR_T, val>;

} // TIM14_ARR
namespace TIM14_CCR1 {

    enum class ccr1_reg_type {};

    template<CCR1_CCR1_T val>
    using CCR1 = Register::Combo_Bitfield<ccr1_reg_type, 0, 16, CCR1_CCR1_T, val>;

} // TIM14_CCR1
namespace TIM14_OR {

    enum class or_reg_type {};

    template<OR_RMP_T val>
    using RMP = Register::Combo_Bitfield<or_reg_type, 0, 2, OR_RMP_T, val>;

} // TIM14_OR
template<uint32_t BASE_ADDRESS>
class TIM14 {
public:
    static const uint32_t CR1_Offset = 0x0000;
    static const uint32_t DIER_Offset = 0x000C;
    static const uint32_t SR_Offset = 0x0010;
    static const uint32_t EGR_Offset = 0x0014;
    static const uint32_t CCMR1_Output_Offset = 0x0018;
    static const uint32_t CCMR1_Input_Offset = 0x0018;
    static const uint32_t CCER_Offset = 0x0020;
    static const uint32_t CNT_Offset = 0x0024;
    static const uint32_t PSC_Offset = 0x0028;
    static const uint32_t ARR_Offset = 0x002C;
    static const uint32_t CCR1_Offset = 0x0034;
    static const uint32_t OR_Offset = 0x0050;

    TIM14() = default;
    TIM14( const TIM14& ) = delete;
    const TIM14& operator=( const TIM14& ) = delete;

    class CR1_T : public Register::Register<TIM14_CR1::cr1_reg_type, BASE_ADDRESS + CR1_Offset> {
    // control register 1
    public:
        Register::Bitfield<BASE_ADDRESS + CR1_Offset, 8, 2, CR1_CKD_T> CKD; /* Clock division */
        Register::Bit<BASE_ADDRESS + CR1_Offset, 7> ARPE; /* Auto-reload preload enable */
        Register::Bit<BASE_ADDRESS + CR1_Offset, 2> URS; /* Update request source */
        Register::Bit<BASE_ADDRESS + CR1_Offset, 1> UDIS; /* Update disable */
        Register::Bit<BASE_ADDRESS + CR1_Offset, 0> CEN; /* Counter enable */
    };

    class DIER_T : public Register::Register<TIM14_DIER::dier_reg_type, BASE_ADDRESS + DIER_Offset> {
    // DMA/Interrupt enable register
    public:
        Register::Bit<BASE_ADDRESS + DIER_Offset, 1> CC1IE; /* Capture/Compare 1 interrupt enable */
        Register::Bit<BASE_ADDRESS + DIER_Offset, 0> UIE; /* Update interrupt enable */
    };

    class SR_T : public Register::Register<TIM14_SR::sr_reg_type, BASE_ADDRESS + SR_Offset> {
    // status register
    public:
        Register::Bit<BASE_ADDRESS + SR_Offset, 9> CC1OF; /* Capture/Compare 1 overcapture flag */
        Register::Bit<BASE_ADDRESS + SR_Offset, 1> CC1IF; /* Capture/compare 1 interrupt flag */
        Register::Bit<BASE_ADDRESS + SR_Offset, 0> UIF; /* Update interrupt flag */
    };

    class EGR_T : public Register::Register<TIM14_EGR::egr_reg_type, BASE_ADDRESS + EGR_Offset> {
    // event generation register
    public:
        Register::Bit<BASE_ADDRESS + EGR_Offset, 1> CC1G; /* Capture/compare 1 generation */
        Register::Bit<BASE_ADDRESS + EGR_Offset, 0> UG; /* Update generation */
    };

    class CCMR1_Output_T : public Register::Register<TIM14_CCMR1_Output::ccmr1_output_reg_type, BASE_ADDRESS + CCMR1_Output_Offset> {
    // capture/compare mode register (output mode)
    public:
        Register::Bitfield<BASE_ADDRESS + CCMR1_Output_Offset, 0, 2, CCMR1_Output_CC1S_T> CC1S; /* Capture/Compare 1 selection */
        Register::Bit<BASE_ADDRESS + CCMR1_Output_Offset, 2> OC1FE; /* Output compare 1 fast enable */
        Register::Bit<BASE_ADDRESS + CCMR1_Output_Offset, 3> OC1PE; /* Output Compare 1 preload enable */
        Register::Bitfield<BASE_ADDRESS + CCMR1_Output_Offset, 4, 3, CCMR1_Output_OC1M_T> OC1M; /* Output Compare 1 mode */
    };

    class CCMR1_Input_T : public Register::Register<TIM14_CCMR1_Input::ccmr1_input_reg_type, BASE_ADDRESS + CCMR1_Input_Offset> {
    // capture/compare mode register (input mode)
    public:
        Register::Bitfield<BASE_ADDRESS + CCMR1_Input_Offset, 4, 4, CCMR1_Input_IC1F_T> IC1F; /* Input capture 1 filter */
        Register::Bitfield<BASE_ADDRESS + CCMR1_Input_Offset, 2, 2, CCMR1_Input_IC1PSC_T> IC1PSC; /* Input capture 1 prescaler */
        Register::Bitfield<BASE_ADDRESS + CCMR1_Input_Offset, 0, 2, CCMR1_Input_CC1S_T> CC1S; /* Capture/Compare 1 selection */
    };

    class CCER_T : public Register::Register<TIM14_CCER::ccer_reg_type, BASE_ADDRESS + CCER_Offset> {
    // capture/compare enable register
    public:
        Register::Bit<BASE_ADDRESS + CCER_Offset, 3> CC1NP; /* Capture/Compare 1 output Polarity */
        Register::Bit<BASE_ADDRESS + CCER_Offset, 1> CC1P; /* Capture/Compare 1 output Polarity */
        Register::Bit<BASE_ADDRESS + CCER_Offset, 0> CC1E; /* Capture/Compare 1 output enable */
    };

    class CNT_T : public Register::Register<TIM14_CNT::cnt_reg_type, BASE_ADDRESS + CNT_Offset> {
    // counter
    public:
        Register::Bitfield<BASE_ADDRESS + CNT_Offset, 0, 16, CNT_CNT_T> CNT; /* counter value */
    };

    class PSC_T : public Register::Register<TIM14_PSC::psc_reg_type, BASE_ADDRESS + PSC_Offset> {
    // prescaler
    public:
        Register::Bitfield<BASE_ADDRESS + PSC_Offset, 0, 16, PSC_PSC_T> PSC; /* Prescaler value */
    };

    class ARR_T : public Register::Register<TIM14_ARR::arr_reg_type, BASE_ADDRESS + ARR_Offset> {
    // auto-reload register
    public:
        Register::Bitfield<BASE_ADDRESS + ARR_Offset, 0, 16, ARR_ARR_T> ARR; /* Auto-reload value */
    };

    class CCR1_T : public Register::Register<TIM14_CCR1::ccr1_reg_type, BASE_ADDRESS + CCR1_Offset> {
    // capture/compare register 1
    public:
        Register::Bitfield<BASE_ADDRESS + CCR1_Offset, 0, 16, CCR1_CCR1_T> CCR1; /* Capture/Compare 1 value */
    };

    class OR_T : public Register::Register<TIM14_OR::or_reg_type, BASE_ADDRESS + OR_Offset> {
    // option register
    public:
        Register::Bitfield<BASE_ADDRESS + OR_Offset, 0, 2, OR_RMP_T> RMP; /* Timer input 1 remap */
    };

    CR1_T CR1;
    DIER_T DIER;
    SR_T SR;
    EGR_T EGR;
    CCMR1_Output_T CCMR1_Output;
    CCMR1_Input_T CCMR1_Input;
    CCER_T CCER;
    CNT_T CNT;
    PSC_T PSC;
    ARR_T ARR;
    CCR1_T CCR1;
    OR_T OR;
};

} // namespace STM32LIB

#endif // STM32F0X1_TIM14_HPP_

