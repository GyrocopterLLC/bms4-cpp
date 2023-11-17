#ifndef STM32F0X1_TIM16_HPP_
#define STM32F0X1_TIM16_HPP_
#pragma once

#include <cstdint>
#include "Register.hpp"

/* General-purpose-timers */
namespace STM32LIB { 

/* Overwritable types for each of the bitfields.
 * Defaults to uint32_t, but feel free to redefine with your
 * own custom enum class later. */
using CR1_CKD_T = uint32_t;
using CCMR1_Output_OC1M_T = uint32_t;
using CCMR1_Output_CC1S_T = uint32_t;
using CCMR1_Input_IC1F_T = uint32_t;
using CCMR1_Input_IC1PSC_T = uint32_t;
using CCMR1_Input_CC1S_T = uint32_t;
using CNT_CNT_T = uint32_t;
using PSC_PSC_T = uint32_t;
using ARR_ARR_T = uint32_t;
using RCR_REP_T = uint32_t;
using CCR1_CCR1_T = uint32_t;
using BDTR_LOCK_T = uint32_t;
using BDTR_DTG_T = uint32_t;
using DCR_DBL_T = uint32_t;
using DCR_DBA_T = uint32_t;
using DMAR_DMAB_T = uint32_t;

namespace TIM16_CR1 {

    enum class cr1_reg_type {};

    template<CR1_CKD_T val>
    using CKD = Register::Combo_Bitfield<cr1_reg_type, 8, 2, CR1_CKD_T, val>;

    template<bool tf>
    using ARPE = Register::Combo_Bit<cr1_reg_type, 7, tf>;

    template<bool tf>
    using OPM = Register::Combo_Bit<cr1_reg_type, 3, tf>;

    template<bool tf>
    using URS = Register::Combo_Bit<cr1_reg_type, 2, tf>;

    template<bool tf>
    using UDIS = Register::Combo_Bit<cr1_reg_type, 1, tf>;

    template<bool tf>
    using CEN = Register::Combo_Bit<cr1_reg_type, 0, tf>;

} // TIM16_CR1
namespace TIM16_CR2 {

    enum class cr2_reg_type {};

    template<bool tf>
    using OIS1N = Register::Combo_Bit<cr2_reg_type, 9, tf>;

    template<bool tf>
    using OIS1 = Register::Combo_Bit<cr2_reg_type, 8, tf>;

    template<bool tf>
    using CCDS = Register::Combo_Bit<cr2_reg_type, 3, tf>;

    template<bool tf>
    using CCUS = Register::Combo_Bit<cr2_reg_type, 2, tf>;

    template<bool tf>
    using CCPC = Register::Combo_Bit<cr2_reg_type, 0, tf>;

} // TIM16_CR2
namespace TIM16_DIER {

    enum class dier_reg_type {};

    template<bool tf>
    using TDE = Register::Combo_Bit<dier_reg_type, 14, tf>;

    template<bool tf>
    using CC1DE = Register::Combo_Bit<dier_reg_type, 9, tf>;

    template<bool tf>
    using UDE = Register::Combo_Bit<dier_reg_type, 8, tf>;

    template<bool tf>
    using BIE = Register::Combo_Bit<dier_reg_type, 7, tf>;

    template<bool tf>
    using TIE = Register::Combo_Bit<dier_reg_type, 6, tf>;

    template<bool tf>
    using COMIE = Register::Combo_Bit<dier_reg_type, 5, tf>;

    template<bool tf>
    using CC1IE = Register::Combo_Bit<dier_reg_type, 1, tf>;

    template<bool tf>
    using UIE = Register::Combo_Bit<dier_reg_type, 0, tf>;

} // TIM16_DIER
namespace TIM16_SR {

    enum class sr_reg_type {};

    template<bool tf>
    using CC1OF = Register::Combo_Bit<sr_reg_type, 9, tf>;

    template<bool tf>
    using BIF = Register::Combo_Bit<sr_reg_type, 7, tf>;

    template<bool tf>
    using TIF = Register::Combo_Bit<sr_reg_type, 6, tf>;

    template<bool tf>
    using COMIF = Register::Combo_Bit<sr_reg_type, 5, tf>;

    template<bool tf>
    using CC1IF = Register::Combo_Bit<sr_reg_type, 1, tf>;

    template<bool tf>
    using UIF = Register::Combo_Bit<sr_reg_type, 0, tf>;

} // TIM16_SR
namespace TIM16_EGR {

    enum class egr_reg_type {};

    template<bool tf>
    using BG = Register::Combo_Bit<egr_reg_type, 7, tf>;

    template<bool tf>
    using TG = Register::Combo_Bit<egr_reg_type, 6, tf>;

    template<bool tf>
    using COMG = Register::Combo_Bit<egr_reg_type, 5, tf>;

    template<bool tf>
    using CC1G = Register::Combo_Bit<egr_reg_type, 1, tf>;

    template<bool tf>
    using UG = Register::Combo_Bit<egr_reg_type, 0, tf>;

} // TIM16_EGR
namespace TIM16_CCMR1_Output {

    enum class ccmr1_output_reg_type {};

    template<CCMR1_Output_OC1M_T val>
    using OC1M = Register::Combo_Bitfield<ccmr1_output_reg_type, 4, 3, CCMR1_Output_OC1M_T, val>;

    template<bool tf>
    using OC1PE = Register::Combo_Bit<ccmr1_output_reg_type, 3, tf>;

    template<bool tf>
    using OC1FE = Register::Combo_Bit<ccmr1_output_reg_type, 2, tf>;

    template<CCMR1_Output_CC1S_T val>
    using CC1S = Register::Combo_Bitfield<ccmr1_output_reg_type, 0, 2, CCMR1_Output_CC1S_T, val>;

} // TIM16_CCMR1_Output
namespace TIM16_CCMR1_Input {

    enum class ccmr1_input_reg_type {};

    template<CCMR1_Input_IC1F_T val>
    using IC1F = Register::Combo_Bitfield<ccmr1_input_reg_type, 4, 4, CCMR1_Input_IC1F_T, val>;

    template<CCMR1_Input_IC1PSC_T val>
    using IC1PSC = Register::Combo_Bitfield<ccmr1_input_reg_type, 2, 2, CCMR1_Input_IC1PSC_T, val>;

    template<CCMR1_Input_CC1S_T val>
    using CC1S = Register::Combo_Bitfield<ccmr1_input_reg_type, 0, 2, CCMR1_Input_CC1S_T, val>;

} // TIM16_CCMR1_Input
namespace TIM16_CCER {

    enum class ccer_reg_type {};

    template<bool tf>
    using CC1NP = Register::Combo_Bit<ccer_reg_type, 3, tf>;

    template<bool tf>
    using CC1NE = Register::Combo_Bit<ccer_reg_type, 2, tf>;

    template<bool tf>
    using CC1P = Register::Combo_Bit<ccer_reg_type, 1, tf>;

    template<bool tf>
    using CC1E = Register::Combo_Bit<ccer_reg_type, 0, tf>;

} // TIM16_CCER
namespace TIM16_CNT {

    enum class cnt_reg_type {};

    template<CNT_CNT_T val>
    using CNT = Register::Combo_Bitfield<cnt_reg_type, 0, 16, CNT_CNT_T, val>;

} // TIM16_CNT
namespace TIM16_PSC {

    enum class psc_reg_type {};

    template<PSC_PSC_T val>
    using PSC = Register::Combo_Bitfield<psc_reg_type, 0, 16, PSC_PSC_T, val>;

} // TIM16_PSC
namespace TIM16_ARR {

    enum class arr_reg_type {};

    template<ARR_ARR_T val>
    using ARR = Register::Combo_Bitfield<arr_reg_type, 0, 16, ARR_ARR_T, val>;

} // TIM16_ARR
namespace TIM16_RCR {

    enum class rcr_reg_type {};

    template<RCR_REP_T val>
    using REP = Register::Combo_Bitfield<rcr_reg_type, 0, 8, RCR_REP_T, val>;

} // TIM16_RCR
namespace TIM16_CCR1 {

    enum class ccr1_reg_type {};

    template<CCR1_CCR1_T val>
    using CCR1 = Register::Combo_Bitfield<ccr1_reg_type, 0, 16, CCR1_CCR1_T, val>;

} // TIM16_CCR1
namespace TIM16_BDTR {

    enum class bdtr_reg_type {};

    template<bool tf>
    using MOE = Register::Combo_Bit<bdtr_reg_type, 15, tf>;

    template<bool tf>
    using AOE = Register::Combo_Bit<bdtr_reg_type, 14, tf>;

    template<bool tf>
    using BKP = Register::Combo_Bit<bdtr_reg_type, 13, tf>;

    template<bool tf>
    using BKE = Register::Combo_Bit<bdtr_reg_type, 12, tf>;

    template<bool tf>
    using OSSR = Register::Combo_Bit<bdtr_reg_type, 11, tf>;

    template<bool tf>
    using OSSI = Register::Combo_Bit<bdtr_reg_type, 10, tf>;

    template<BDTR_LOCK_T val>
    using LOCK = Register::Combo_Bitfield<bdtr_reg_type, 8, 2, BDTR_LOCK_T, val>;

    template<BDTR_DTG_T val>
    using DTG = Register::Combo_Bitfield<bdtr_reg_type, 0, 8, BDTR_DTG_T, val>;

} // TIM16_BDTR
namespace TIM16_DCR {

    enum class dcr_reg_type {};

    template<DCR_DBL_T val>
    using DBL = Register::Combo_Bitfield<dcr_reg_type, 8, 5, DCR_DBL_T, val>;

    template<DCR_DBA_T val>
    using DBA = Register::Combo_Bitfield<dcr_reg_type, 0, 5, DCR_DBA_T, val>;

} // TIM16_DCR
namespace TIM16_DMAR {

    enum class dmar_reg_type {};

    template<DMAR_DMAB_T val>
    using DMAB = Register::Combo_Bitfield<dmar_reg_type, 0, 16, DMAR_DMAB_T, val>;

} // TIM16_DMAR
template<uint32_t BASE_ADDRESS>
class TIM16 {
public:
    static const uint32_t CR1_Offset = 0x0000;
    static const uint32_t CR2_Offset = 0x0004;
    static const uint32_t DIER_Offset = 0x000C;
    static const uint32_t SR_Offset = 0x0010;
    static const uint32_t EGR_Offset = 0x0014;
    static const uint32_t CCMR1_Output_Offset = 0x0018;
    static const uint32_t CCMR1_Input_Offset = 0x0018;
    static const uint32_t CCER_Offset = 0x0020;
    static const uint32_t CNT_Offset = 0x0024;
    static const uint32_t PSC_Offset = 0x0028;
    static const uint32_t ARR_Offset = 0x002C;
    static const uint32_t RCR_Offset = 0x0030;
    static const uint32_t CCR1_Offset = 0x0034;
    static const uint32_t BDTR_Offset = 0x0044;
    static const uint32_t DCR_Offset = 0x0048;
    static const uint32_t DMAR_Offset = 0x004C;

    TIM16() = default;
    TIM16( const TIM16& ) = delete;
    const TIM16& operator=( const TIM16& ) = delete;

    class CR1_T : public Register::Register<TIM16_CR1::cr1_reg_type, BASE_ADDRESS + CR1_Offset> {
    // control register 1
    public:
        Register::Bitfield<BASE_ADDRESS + CR1_Offset, 8, 2, CR1_CKD_T> CKD; /* Clock division */
        Register::Bit<BASE_ADDRESS + CR1_Offset, 7> ARPE; /* Auto-reload preload enable */
        Register::Bit<BASE_ADDRESS + CR1_Offset, 3> OPM; /* One-pulse mode */
        Register::Bit<BASE_ADDRESS + CR1_Offset, 2> URS; /* Update request source */
        Register::Bit<BASE_ADDRESS + CR1_Offset, 1> UDIS; /* Update disable */
        Register::Bit<BASE_ADDRESS + CR1_Offset, 0> CEN; /* Counter enable */
    };

    class CR2_T : public Register::Register<TIM16_CR2::cr2_reg_type, BASE_ADDRESS + CR2_Offset> {
    // control register 2
    public:
        Register::Bit<BASE_ADDRESS + CR2_Offset, 9> OIS1N; /* Output Idle state 1 */
        Register::Bit<BASE_ADDRESS + CR2_Offset, 8> OIS1; /* Output Idle state 1 */
        Register::Bit<BASE_ADDRESS + CR2_Offset, 3> CCDS; /* Capture/compare DMA selection */
        Register::Bit<BASE_ADDRESS + CR2_Offset, 2> CCUS; /* Capture/compare control update selection */
        Register::Bit<BASE_ADDRESS + CR2_Offset, 0> CCPC; /* Capture/compare preloaded control */
    };

    class DIER_T : public Register::Register<TIM16_DIER::dier_reg_type, BASE_ADDRESS + DIER_Offset> {
    // DMA/Interrupt enable register
    public:
        Register::Bit<BASE_ADDRESS + DIER_Offset, 14> TDE; /* Trigger DMA request enable */
        Register::Bit<BASE_ADDRESS + DIER_Offset, 9> CC1DE; /* Capture/Compare 1 DMA request enable */
        Register::Bit<BASE_ADDRESS + DIER_Offset, 8> UDE; /* Update DMA request enable */
        Register::Bit<BASE_ADDRESS + DIER_Offset, 7> BIE; /* Break interrupt enable */
        Register::Bit<BASE_ADDRESS + DIER_Offset, 6> TIE; /* Trigger interrupt enable */
        Register::Bit<BASE_ADDRESS + DIER_Offset, 5> COMIE; /* COM interrupt enable */
        Register::Bit<BASE_ADDRESS + DIER_Offset, 1> CC1IE; /* Capture/Compare 1 interrupt enable */
        Register::Bit<BASE_ADDRESS + DIER_Offset, 0> UIE; /* Update interrupt enable */
    };

    class SR_T : public Register::Register<TIM16_SR::sr_reg_type, BASE_ADDRESS + SR_Offset> {
    // status register
    public:
        Register::Bit<BASE_ADDRESS + SR_Offset, 9> CC1OF; /* Capture/Compare 1 overcapture flag */
        Register::Bit<BASE_ADDRESS + SR_Offset, 7> BIF; /* Break interrupt flag */
        Register::Bit<BASE_ADDRESS + SR_Offset, 6> TIF; /* Trigger interrupt flag */
        Register::Bit<BASE_ADDRESS + SR_Offset, 5> COMIF; /* COM interrupt flag */
        Register::Bit<BASE_ADDRESS + SR_Offset, 1> CC1IF; /* Capture/compare 1 interrupt flag */
        Register::Bit<BASE_ADDRESS + SR_Offset, 0> UIF; /* Update interrupt flag */
    };

    class EGR_T : public Register::Register<TIM16_EGR::egr_reg_type, BASE_ADDRESS + EGR_Offset> {
    // event generation register
    public:
        Register::Bit<BASE_ADDRESS + EGR_Offset, 7> BG; /* Break generation */
        Register::Bit<BASE_ADDRESS + EGR_Offset, 6> TG; /* Trigger generation */
        Register::Bit<BASE_ADDRESS + EGR_Offset, 5> COMG; /* Capture/Compare control update generation */
        Register::Bit<BASE_ADDRESS + EGR_Offset, 1> CC1G; /* Capture/compare 1 generation */
        Register::Bit<BASE_ADDRESS + EGR_Offset, 0> UG; /* Update generation */
    };

    class CCMR1_Output_T : public Register::Register<TIM16_CCMR1_Output::ccmr1_output_reg_type, BASE_ADDRESS + CCMR1_Output_Offset> {
    // capture/compare mode register (output mode)
    public:
        Register::Bitfield<BASE_ADDRESS + CCMR1_Output_Offset, 4, 3, CCMR1_Output_OC1M_T> OC1M; /* Output Compare 1 mode */
        Register::Bit<BASE_ADDRESS + CCMR1_Output_Offset, 3> OC1PE; /* Output Compare 1 preload enable */
        Register::Bit<BASE_ADDRESS + CCMR1_Output_Offset, 2> OC1FE; /* Output Compare 1 fast enable */
        Register::Bitfield<BASE_ADDRESS + CCMR1_Output_Offset, 0, 2, CCMR1_Output_CC1S_T> CC1S; /* Capture/Compare 1 selection */
    };

    class CCMR1_Input_T : public Register::Register<TIM16_CCMR1_Input::ccmr1_input_reg_type, BASE_ADDRESS + CCMR1_Input_Offset> {
    // capture/compare mode register 1 (input mode)
    public:
        Register::Bitfield<BASE_ADDRESS + CCMR1_Input_Offset, 4, 4, CCMR1_Input_IC1F_T> IC1F; /* Input capture 1 filter */
        Register::Bitfield<BASE_ADDRESS + CCMR1_Input_Offset, 2, 2, CCMR1_Input_IC1PSC_T> IC1PSC; /* Input capture 1 prescaler */
        Register::Bitfield<BASE_ADDRESS + CCMR1_Input_Offset, 0, 2, CCMR1_Input_CC1S_T> CC1S; /* Capture/Compare 1 selection */
    };

    class CCER_T : public Register::Register<TIM16_CCER::ccer_reg_type, BASE_ADDRESS + CCER_Offset> {
    // capture/compare enable register
    public:
        Register::Bit<BASE_ADDRESS + CCER_Offset, 3> CC1NP; /* Capture/Compare 1 output Polarity */
        Register::Bit<BASE_ADDRESS + CCER_Offset, 2> CC1NE; /* Capture/Compare 1 complementary output enable */
        Register::Bit<BASE_ADDRESS + CCER_Offset, 1> CC1P; /* Capture/Compare 1 output Polarity */
        Register::Bit<BASE_ADDRESS + CCER_Offset, 0> CC1E; /* Capture/Compare 1 output enable */
    };

    class CNT_T : public Register::Register<TIM16_CNT::cnt_reg_type, BASE_ADDRESS + CNT_Offset> {
    // counter
    public:
        Register::Bitfield<BASE_ADDRESS + CNT_Offset, 0, 16, CNT_CNT_T> CNT; /* counter value */
    };

    class PSC_T : public Register::Register<TIM16_PSC::psc_reg_type, BASE_ADDRESS + PSC_Offset> {
    // prescaler
    public:
        Register::Bitfield<BASE_ADDRESS + PSC_Offset, 0, 16, PSC_PSC_T> PSC; /* Prescaler value */
    };

    class ARR_T : public Register::Register<TIM16_ARR::arr_reg_type, BASE_ADDRESS + ARR_Offset> {
    // auto-reload register
    public:
        Register::Bitfield<BASE_ADDRESS + ARR_Offset, 0, 16, ARR_ARR_T> ARR; /* Auto-reload value */
    };

    class RCR_T : public Register::Register<TIM16_RCR::rcr_reg_type, BASE_ADDRESS + RCR_Offset> {
    // repetition counter register
    public:
        Register::Bitfield<BASE_ADDRESS + RCR_Offset, 0, 8, RCR_REP_T> REP; /* Repetition counter value */
    };

    class CCR1_T : public Register::Register<TIM16_CCR1::ccr1_reg_type, BASE_ADDRESS + CCR1_Offset> {
    // capture/compare register 1
    public:
        Register::Bitfield<BASE_ADDRESS + CCR1_Offset, 0, 16, CCR1_CCR1_T> CCR1; /* Capture/Compare 1 value */
    };

    class BDTR_T : public Register::Register<TIM16_BDTR::bdtr_reg_type, BASE_ADDRESS + BDTR_Offset> {
    // break and dead-time register
    public:
        Register::Bit<BASE_ADDRESS + BDTR_Offset, 15> MOE; /* Main output enable */
        Register::Bit<BASE_ADDRESS + BDTR_Offset, 14> AOE; /* Automatic output enable */
        Register::Bit<BASE_ADDRESS + BDTR_Offset, 13> BKP; /* Break polarity */
        Register::Bit<BASE_ADDRESS + BDTR_Offset, 12> BKE; /* Break enable */
        Register::Bit<BASE_ADDRESS + BDTR_Offset, 11> OSSR; /* Off-state selection for Run mode */
        Register::Bit<BASE_ADDRESS + BDTR_Offset, 10> OSSI; /* Off-state selection for Idle mode */
        Register::Bitfield<BASE_ADDRESS + BDTR_Offset, 8, 2, BDTR_LOCK_T> LOCK; /* Lock configuration */
        Register::Bitfield<BASE_ADDRESS + BDTR_Offset, 0, 8, BDTR_DTG_T> DTG; /* Dead-time generator setup */
    };

    class DCR_T : public Register::Register<TIM16_DCR::dcr_reg_type, BASE_ADDRESS + DCR_Offset> {
    // DMA control register
    public:
        Register::Bitfield<BASE_ADDRESS + DCR_Offset, 8, 5, DCR_DBL_T> DBL; /* DMA burst length */
        Register::Bitfield<BASE_ADDRESS + DCR_Offset, 0, 5, DCR_DBA_T> DBA; /* DMA base address */
    };

    class DMAR_T : public Register::Register<TIM16_DMAR::dmar_reg_type, BASE_ADDRESS + DMAR_Offset> {
    // DMA address for full transfer
    public:
        Register::Bitfield<BASE_ADDRESS + DMAR_Offset, 0, 16, DMAR_DMAB_T> DMAB; /* DMA register for burst accesses */
    };

    CR1_T CR1;
    CR2_T CR2;
    DIER_T DIER;
    SR_T SR;
    EGR_T EGR;
    CCMR1_Output_T CCMR1_Output;
    CCMR1_Input_T CCMR1_Input;
    CCER_T CCER;
    CNT_T CNT;
    PSC_T PSC;
    ARR_T ARR;
    RCR_T RCR;
    CCR1_T CCR1;
    BDTR_T BDTR;
    DCR_T DCR;
    DMAR_T DMAR;
};

} // namespace STM32LIB

#endif // STM32F0X1_TIM16_HPP_

