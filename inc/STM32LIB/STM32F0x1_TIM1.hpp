#ifndef STM32F0X1_TIM1_HPP_
#define STM32F0X1_TIM1_HPP_
#pragma once

#include <cstdint>
#include "Register.hpp"

/* Advanced-timers */
namespace STM32LIB { 

/* Overwritable types for each of the bitfields.
 * Defaults to uint32_t, but feel free to redefine with your
 * own custom enum class later. */
using CR1_CKD_T = uint32_t;
using CR1_CMS_T = uint32_t;
using CR2_MMS_T = uint32_t;
using SMCR_ETPS_T = uint32_t;
using SMCR_ETF_T = uint32_t;
using SMCR_TS_T = uint32_t;
using SMCR_SMS_T = uint32_t;
using CCMR1_Output_OC2M_T = uint32_t;
using CCMR1_Output_CC2S_T = uint32_t;
using CCMR1_Output_OC1M_T = uint32_t;
using CCMR1_Output_CC1S_T = uint32_t;
using CCMR1_Input_IC2F_T = uint32_t;
using CCMR1_Input_IC2PCS_T = uint32_t;
using CCMR1_Input_CC2S_T = uint32_t;
using CCMR1_Input_IC1F_T = uint32_t;
using CCMR1_Input_IC1PCS_T = uint32_t;
using CCMR1_Input_CC1S_T = uint32_t;
using CCMR2_Output_OC4M_T = uint32_t;
using CCMR2_Output_CC4S_T = uint32_t;
using CCMR2_Output_OC3M_T = uint32_t;
using CCMR2_Output_CC3S_T = uint32_t;
using CCMR2_Input_IC4F_T = uint32_t;
using CCMR2_Input_IC4PSC_T = uint32_t;
using CCMR2_Input_CC4S_T = uint32_t;
using CCMR2_Input_IC3F_T = uint32_t;
using CCMR2_Input_IC3PSC_T = uint32_t;
using CCMR2_Input_CC3S_T = uint32_t;
using CNT_CNT_T = uint32_t;
using PSC_PSC_T = uint32_t;
using ARR_ARR_T = uint32_t;
using RCR_REP_T = uint32_t;
using CCR1_CCR1_T = uint32_t;
using CCR2_CCR2_T = uint32_t;
using CCR3_CCR3_T = uint32_t;
using CCR4_CCR4_T = uint32_t;
using BDTR_LOCK_T = uint32_t;
using BDTR_DTG_T = uint32_t;
using DCR_DBL_T = uint32_t;
using DCR_DBA_T = uint32_t;
using DMAR_DMAB_T = uint32_t;

namespace TIM1_CR1 {

    enum class cr1_reg_type {};

    template<CR1_CKD_T val>
    using CKD = Register::Combo_Bitfield<cr1_reg_type, 8, 2, CR1_CKD_T, val>;

    template<bool tf>
    using ARPE = Register::Combo_Bit<cr1_reg_type, 7, tf>;

    template<CR1_CMS_T val>
    using CMS = Register::Combo_Bitfield<cr1_reg_type, 5, 2, CR1_CMS_T, val>;

    template<bool tf>
    using DIR = Register::Combo_Bit<cr1_reg_type, 4, tf>;

    template<bool tf>
    using OPM = Register::Combo_Bit<cr1_reg_type, 3, tf>;

    template<bool tf>
    using URS = Register::Combo_Bit<cr1_reg_type, 2, tf>;

    template<bool tf>
    using UDIS = Register::Combo_Bit<cr1_reg_type, 1, tf>;

    template<bool tf>
    using CEN = Register::Combo_Bit<cr1_reg_type, 0, tf>;

} // TIM1_CR1
namespace TIM1_CR2 {

    enum class cr2_reg_type {};

    template<bool tf>
    using OIS4 = Register::Combo_Bit<cr2_reg_type, 14, tf>;

    template<bool tf>
    using OIS3N = Register::Combo_Bit<cr2_reg_type, 13, tf>;

    template<bool tf>
    using OIS3 = Register::Combo_Bit<cr2_reg_type, 12, tf>;

    template<bool tf>
    using OIS2N = Register::Combo_Bit<cr2_reg_type, 11, tf>;

    template<bool tf>
    using OIS2 = Register::Combo_Bit<cr2_reg_type, 10, tf>;

    template<bool tf>
    using OIS1N = Register::Combo_Bit<cr2_reg_type, 9, tf>;

    template<bool tf>
    using OIS1 = Register::Combo_Bit<cr2_reg_type, 8, tf>;

    template<bool tf>
    using TI1S = Register::Combo_Bit<cr2_reg_type, 7, tf>;

    template<CR2_MMS_T val>
    using MMS = Register::Combo_Bitfield<cr2_reg_type, 4, 3, CR2_MMS_T, val>;

    template<bool tf>
    using CCDS = Register::Combo_Bit<cr2_reg_type, 3, tf>;

    template<bool tf>
    using CCUS = Register::Combo_Bit<cr2_reg_type, 2, tf>;

    template<bool tf>
    using CCPC = Register::Combo_Bit<cr2_reg_type, 0, tf>;

} // TIM1_CR2
namespace TIM1_SMCR {

    enum class smcr_reg_type {};

    template<bool tf>
    using ETP = Register::Combo_Bit<smcr_reg_type, 15, tf>;

    template<bool tf>
    using ECE = Register::Combo_Bit<smcr_reg_type, 14, tf>;

    template<SMCR_ETPS_T val>
    using ETPS = Register::Combo_Bitfield<smcr_reg_type, 12, 2, SMCR_ETPS_T, val>;

    template<SMCR_ETF_T val>
    using ETF = Register::Combo_Bitfield<smcr_reg_type, 8, 4, SMCR_ETF_T, val>;

    template<bool tf>
    using MSM = Register::Combo_Bit<smcr_reg_type, 7, tf>;

    template<SMCR_TS_T val>
    using TS = Register::Combo_Bitfield<smcr_reg_type, 4, 3, SMCR_TS_T, val>;

    template<SMCR_SMS_T val>
    using SMS = Register::Combo_Bitfield<smcr_reg_type, 0, 3, SMCR_SMS_T, val>;

} // TIM1_SMCR
namespace TIM1_DIER {

    enum class dier_reg_type {};

    template<bool tf>
    using TDE = Register::Combo_Bit<dier_reg_type, 14, tf>;

    template<bool tf>
    using COMDE = Register::Combo_Bit<dier_reg_type, 13, tf>;

    template<bool tf>
    using CC4DE = Register::Combo_Bit<dier_reg_type, 12, tf>;

    template<bool tf>
    using CC3DE = Register::Combo_Bit<dier_reg_type, 11, tf>;

    template<bool tf>
    using CC2DE = Register::Combo_Bit<dier_reg_type, 10, tf>;

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
    using CC4IE = Register::Combo_Bit<dier_reg_type, 4, tf>;

    template<bool tf>
    using CC3IE = Register::Combo_Bit<dier_reg_type, 3, tf>;

    template<bool tf>
    using CC2IE = Register::Combo_Bit<dier_reg_type, 2, tf>;

    template<bool tf>
    using CC1IE = Register::Combo_Bit<dier_reg_type, 1, tf>;

    template<bool tf>
    using UIE = Register::Combo_Bit<dier_reg_type, 0, tf>;

} // TIM1_DIER
namespace TIM1_SR {

    enum class sr_reg_type {};

    template<bool tf>
    using CC4OF = Register::Combo_Bit<sr_reg_type, 12, tf>;

    template<bool tf>
    using CC3OF = Register::Combo_Bit<sr_reg_type, 11, tf>;

    template<bool tf>
    using CC2OF = Register::Combo_Bit<sr_reg_type, 10, tf>;

    template<bool tf>
    using CC1OF = Register::Combo_Bit<sr_reg_type, 9, tf>;

    template<bool tf>
    using BIF = Register::Combo_Bit<sr_reg_type, 7, tf>;

    template<bool tf>
    using TIF = Register::Combo_Bit<sr_reg_type, 6, tf>;

    template<bool tf>
    using COMIF = Register::Combo_Bit<sr_reg_type, 5, tf>;

    template<bool tf>
    using CC4IF = Register::Combo_Bit<sr_reg_type, 4, tf>;

    template<bool tf>
    using CC3IF = Register::Combo_Bit<sr_reg_type, 3, tf>;

    template<bool tf>
    using CC2IF = Register::Combo_Bit<sr_reg_type, 2, tf>;

    template<bool tf>
    using CC1IF = Register::Combo_Bit<sr_reg_type, 1, tf>;

    template<bool tf>
    using UIF = Register::Combo_Bit<sr_reg_type, 0, tf>;

} // TIM1_SR
namespace TIM1_EGR {

    enum class egr_reg_type {};

    template<bool tf>
    using BG = Register::Combo_Bit<egr_reg_type, 7, tf>;

    template<bool tf>
    using TG = Register::Combo_Bit<egr_reg_type, 6, tf>;

    template<bool tf>
    using COMG = Register::Combo_Bit<egr_reg_type, 5, tf>;

    template<bool tf>
    using CC4G = Register::Combo_Bit<egr_reg_type, 4, tf>;

    template<bool tf>
    using CC3G = Register::Combo_Bit<egr_reg_type, 3, tf>;

    template<bool tf>
    using CC2G = Register::Combo_Bit<egr_reg_type, 2, tf>;

    template<bool tf>
    using CC1G = Register::Combo_Bit<egr_reg_type, 1, tf>;

    template<bool tf>
    using UG = Register::Combo_Bit<egr_reg_type, 0, tf>;

} // TIM1_EGR
namespace TIM1_CCMR1_Output {

    enum class ccmr1_output_reg_type {};

    template<bool tf>
    using OC2CE = Register::Combo_Bit<ccmr1_output_reg_type, 15, tf>;

    template<CCMR1_Output_OC2M_T val>
    using OC2M = Register::Combo_Bitfield<ccmr1_output_reg_type, 12, 3, CCMR1_Output_OC2M_T, val>;

    template<bool tf>
    using OC2PE = Register::Combo_Bit<ccmr1_output_reg_type, 11, tf>;

    template<bool tf>
    using OC2FE = Register::Combo_Bit<ccmr1_output_reg_type, 10, tf>;

    template<CCMR1_Output_CC2S_T val>
    using CC2S = Register::Combo_Bitfield<ccmr1_output_reg_type, 8, 2, CCMR1_Output_CC2S_T, val>;

    template<bool tf>
    using OC1CE = Register::Combo_Bit<ccmr1_output_reg_type, 7, tf>;

    template<CCMR1_Output_OC1M_T val>
    using OC1M = Register::Combo_Bitfield<ccmr1_output_reg_type, 4, 3, CCMR1_Output_OC1M_T, val>;

    template<bool tf>
    using OC1PE = Register::Combo_Bit<ccmr1_output_reg_type, 3, tf>;

    template<bool tf>
    using OC1FE = Register::Combo_Bit<ccmr1_output_reg_type, 2, tf>;

    template<CCMR1_Output_CC1S_T val>
    using CC1S = Register::Combo_Bitfield<ccmr1_output_reg_type, 0, 2, CCMR1_Output_CC1S_T, val>;

} // TIM1_CCMR1_Output
namespace TIM1_CCMR1_Input {

    enum class ccmr1_input_reg_type {};

    template<CCMR1_Input_IC2F_T val>
    using IC2F = Register::Combo_Bitfield<ccmr1_input_reg_type, 12, 4, CCMR1_Input_IC2F_T, val>;

    template<CCMR1_Input_IC2PCS_T val>
    using IC2PCS = Register::Combo_Bitfield<ccmr1_input_reg_type, 10, 2, CCMR1_Input_IC2PCS_T, val>;

    template<CCMR1_Input_CC2S_T val>
    using CC2S = Register::Combo_Bitfield<ccmr1_input_reg_type, 8, 2, CCMR1_Input_CC2S_T, val>;

    template<CCMR1_Input_IC1F_T val>
    using IC1F = Register::Combo_Bitfield<ccmr1_input_reg_type, 4, 4, CCMR1_Input_IC1F_T, val>;

    template<CCMR1_Input_IC1PCS_T val>
    using IC1PCS = Register::Combo_Bitfield<ccmr1_input_reg_type, 2, 2, CCMR1_Input_IC1PCS_T, val>;

    template<CCMR1_Input_CC1S_T val>
    using CC1S = Register::Combo_Bitfield<ccmr1_input_reg_type, 0, 2, CCMR1_Input_CC1S_T, val>;

} // TIM1_CCMR1_Input
namespace TIM1_CCMR2_Output {

    enum class ccmr2_output_reg_type {};

    template<bool tf>
    using OC4CE = Register::Combo_Bit<ccmr2_output_reg_type, 15, tf>;

    template<CCMR2_Output_OC4M_T val>
    using OC4M = Register::Combo_Bitfield<ccmr2_output_reg_type, 12, 3, CCMR2_Output_OC4M_T, val>;

    template<bool tf>
    using OC4PE = Register::Combo_Bit<ccmr2_output_reg_type, 11, tf>;

    template<bool tf>
    using OC4FE = Register::Combo_Bit<ccmr2_output_reg_type, 10, tf>;

    template<CCMR2_Output_CC4S_T val>
    using CC4S = Register::Combo_Bitfield<ccmr2_output_reg_type, 8, 2, CCMR2_Output_CC4S_T, val>;

    template<bool tf>
    using OC3CE = Register::Combo_Bit<ccmr2_output_reg_type, 7, tf>;

    template<CCMR2_Output_OC3M_T val>
    using OC3M = Register::Combo_Bitfield<ccmr2_output_reg_type, 4, 3, CCMR2_Output_OC3M_T, val>;

    template<bool tf>
    using OC3PE = Register::Combo_Bit<ccmr2_output_reg_type, 3, tf>;

    template<bool tf>
    using OC3FE = Register::Combo_Bit<ccmr2_output_reg_type, 2, tf>;

    template<CCMR2_Output_CC3S_T val>
    using CC3S = Register::Combo_Bitfield<ccmr2_output_reg_type, 0, 2, CCMR2_Output_CC3S_T, val>;

} // TIM1_CCMR2_Output
namespace TIM1_CCMR2_Input {

    enum class ccmr2_input_reg_type {};

    template<CCMR2_Input_IC4F_T val>
    using IC4F = Register::Combo_Bitfield<ccmr2_input_reg_type, 12, 4, CCMR2_Input_IC4F_T, val>;

    template<CCMR2_Input_IC4PSC_T val>
    using IC4PSC = Register::Combo_Bitfield<ccmr2_input_reg_type, 10, 2, CCMR2_Input_IC4PSC_T, val>;

    template<CCMR2_Input_CC4S_T val>
    using CC4S = Register::Combo_Bitfield<ccmr2_input_reg_type, 8, 2, CCMR2_Input_CC4S_T, val>;

    template<CCMR2_Input_IC3F_T val>
    using IC3F = Register::Combo_Bitfield<ccmr2_input_reg_type, 4, 4, CCMR2_Input_IC3F_T, val>;

    template<CCMR2_Input_IC3PSC_T val>
    using IC3PSC = Register::Combo_Bitfield<ccmr2_input_reg_type, 2, 2, CCMR2_Input_IC3PSC_T, val>;

    template<CCMR2_Input_CC3S_T val>
    using CC3S = Register::Combo_Bitfield<ccmr2_input_reg_type, 0, 2, CCMR2_Input_CC3S_T, val>;

} // TIM1_CCMR2_Input
namespace TIM1_CCER {

    enum class ccer_reg_type {};

    template<bool tf>
    using CC4P = Register::Combo_Bit<ccer_reg_type, 13, tf>;

    template<bool tf>
    using CC4E = Register::Combo_Bit<ccer_reg_type, 12, tf>;

    template<bool tf>
    using CC3NP = Register::Combo_Bit<ccer_reg_type, 11, tf>;

    template<bool tf>
    using CC3NE = Register::Combo_Bit<ccer_reg_type, 10, tf>;

    template<bool tf>
    using CC3P = Register::Combo_Bit<ccer_reg_type, 9, tf>;

    template<bool tf>
    using CC3E = Register::Combo_Bit<ccer_reg_type, 8, tf>;

    template<bool tf>
    using CC2NP = Register::Combo_Bit<ccer_reg_type, 7, tf>;

    template<bool tf>
    using CC2NE = Register::Combo_Bit<ccer_reg_type, 6, tf>;

    template<bool tf>
    using CC2P = Register::Combo_Bit<ccer_reg_type, 5, tf>;

    template<bool tf>
    using CC2E = Register::Combo_Bit<ccer_reg_type, 4, tf>;

    template<bool tf>
    using CC1NP = Register::Combo_Bit<ccer_reg_type, 3, tf>;

    template<bool tf>
    using CC1NE = Register::Combo_Bit<ccer_reg_type, 2, tf>;

    template<bool tf>
    using CC1P = Register::Combo_Bit<ccer_reg_type, 1, tf>;

    template<bool tf>
    using CC1E = Register::Combo_Bit<ccer_reg_type, 0, tf>;

} // TIM1_CCER
namespace TIM1_CNT {

    enum class cnt_reg_type {};

    template<CNT_CNT_T val>
    using CNT = Register::Combo_Bitfield<cnt_reg_type, 0, 16, CNT_CNT_T, val>;

} // TIM1_CNT
namespace TIM1_PSC {

    enum class psc_reg_type {};

    template<PSC_PSC_T val>
    using PSC = Register::Combo_Bitfield<psc_reg_type, 0, 16, PSC_PSC_T, val>;

} // TIM1_PSC
namespace TIM1_ARR {

    enum class arr_reg_type {};

    template<ARR_ARR_T val>
    using ARR = Register::Combo_Bitfield<arr_reg_type, 0, 16, ARR_ARR_T, val>;

} // TIM1_ARR
namespace TIM1_RCR {

    enum class rcr_reg_type {};

    template<RCR_REP_T val>
    using REP = Register::Combo_Bitfield<rcr_reg_type, 0, 8, RCR_REP_T, val>;

} // TIM1_RCR
namespace TIM1_CCR1 {

    enum class ccr1_reg_type {};

    template<CCR1_CCR1_T val>
    using CCR1 = Register::Combo_Bitfield<ccr1_reg_type, 0, 16, CCR1_CCR1_T, val>;

} // TIM1_CCR1
namespace TIM1_CCR2 {

    enum class ccr2_reg_type {};

    template<CCR2_CCR2_T val>
    using CCR2 = Register::Combo_Bitfield<ccr2_reg_type, 0, 16, CCR2_CCR2_T, val>;

} // TIM1_CCR2
namespace TIM1_CCR3 {

    enum class ccr3_reg_type {};

    template<CCR3_CCR3_T val>
    using CCR3 = Register::Combo_Bitfield<ccr3_reg_type, 0, 16, CCR3_CCR3_T, val>;

} // TIM1_CCR3
namespace TIM1_CCR4 {

    enum class ccr4_reg_type {};

    template<CCR4_CCR4_T val>
    using CCR4 = Register::Combo_Bitfield<ccr4_reg_type, 0, 16, CCR4_CCR4_T, val>;

} // TIM1_CCR4
namespace TIM1_BDTR {

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

} // TIM1_BDTR
namespace TIM1_DCR {

    enum class dcr_reg_type {};

    template<DCR_DBL_T val>
    using DBL = Register::Combo_Bitfield<dcr_reg_type, 8, 5, DCR_DBL_T, val>;

    template<DCR_DBA_T val>
    using DBA = Register::Combo_Bitfield<dcr_reg_type, 0, 5, DCR_DBA_T, val>;

} // TIM1_DCR
namespace TIM1_DMAR {

    enum class dmar_reg_type {};

    template<DMAR_DMAB_T val>
    using DMAB = Register::Combo_Bitfield<dmar_reg_type, 0, 16, DMAR_DMAB_T, val>;

} // TIM1_DMAR
template<uint32_t BASE_ADDRESS>
class TIM1 {
public:
    static const uint32_t CR1_Offset = 0x0000;
    static const uint32_t CR2_Offset = 0x0004;
    static const uint32_t SMCR_Offset = 0x0008;
    static const uint32_t DIER_Offset = 0x000C;
    static const uint32_t SR_Offset = 0x0010;
    static const uint32_t EGR_Offset = 0x0014;
    static const uint32_t CCMR1_Output_Offset = 0x0018;
    static const uint32_t CCMR1_Input_Offset = 0x0018;
    static const uint32_t CCMR2_Output_Offset = 0x001C;
    static const uint32_t CCMR2_Input_Offset = 0x001C;
    static const uint32_t CCER_Offset = 0x0020;
    static const uint32_t CNT_Offset = 0x0024;
    static const uint32_t PSC_Offset = 0x0028;
    static const uint32_t ARR_Offset = 0x002C;
    static const uint32_t RCR_Offset = 0x0030;
    static const uint32_t CCR1_Offset = 0x0034;
    static const uint32_t CCR2_Offset = 0x0038;
    static const uint32_t CCR3_Offset = 0x003C;
    static const uint32_t CCR4_Offset = 0x0040;
    static const uint32_t BDTR_Offset = 0x0044;
    static const uint32_t DCR_Offset = 0x0048;
    static const uint32_t DMAR_Offset = 0x004C;

    TIM1() = default;
    TIM1( const TIM1& ) = delete;
    const TIM1& operator=( const TIM1& ) = delete;

    class CR1_T : public Register::Register<TIM1_CR1::cr1_reg_type, BASE_ADDRESS + CR1_Offset> {
    // control register 1
    public:
        Register::Bitfield<BASE_ADDRESS + CR1_Offset, 8, 2, CR1_CKD_T> CKD; /* Clock division */
        Register::Bit<BASE_ADDRESS + CR1_Offset, 7> ARPE; /* Auto-reload preload enable */
        Register::Bitfield<BASE_ADDRESS + CR1_Offset, 5, 2, CR1_CMS_T> CMS; /* Center-aligned mode selection */
        Register::Bit<BASE_ADDRESS + CR1_Offset, 4> DIR; /* Direction */
        Register::Bit<BASE_ADDRESS + CR1_Offset, 3> OPM; /* One-pulse mode */
        Register::Bit<BASE_ADDRESS + CR1_Offset, 2> URS; /* Update request source */
        Register::Bit<BASE_ADDRESS + CR1_Offset, 1> UDIS; /* Update disable */
        Register::Bit<BASE_ADDRESS + CR1_Offset, 0> CEN; /* Counter enable */
    };

    class CR2_T : public Register::Register<TIM1_CR2::cr2_reg_type, BASE_ADDRESS + CR2_Offset> {
    // control register 2
    public:
        Register::Bit<BASE_ADDRESS + CR2_Offset, 14> OIS4; /* Output Idle state 4 */
        Register::Bit<BASE_ADDRESS + CR2_Offset, 13> OIS3N; /* Output Idle state 3 */
        Register::Bit<BASE_ADDRESS + CR2_Offset, 12> OIS3; /* Output Idle state 3 */
        Register::Bit<BASE_ADDRESS + CR2_Offset, 11> OIS2N; /* Output Idle state 2 */
        Register::Bit<BASE_ADDRESS + CR2_Offset, 10> OIS2; /* Output Idle state 2 */
        Register::Bit<BASE_ADDRESS + CR2_Offset, 9> OIS1N; /* Output Idle state 1 */
        Register::Bit<BASE_ADDRESS + CR2_Offset, 8> OIS1; /* Output Idle state 1 */
        Register::Bit<BASE_ADDRESS + CR2_Offset, 7> TI1S; /* TI1 selection */
        Register::Bitfield<BASE_ADDRESS + CR2_Offset, 4, 3, CR2_MMS_T> MMS; /* Master mode selection */
        Register::Bit<BASE_ADDRESS + CR2_Offset, 3> CCDS; /* Capture/compare DMA selection */
        Register::Bit<BASE_ADDRESS + CR2_Offset, 2> CCUS; /* Capture/compare control update selection */
        Register::Bit<BASE_ADDRESS + CR2_Offset, 0> CCPC; /* Capture/compare preloaded control */
    };

    class SMCR_T : public Register::Register<TIM1_SMCR::smcr_reg_type, BASE_ADDRESS + SMCR_Offset> {
    // slave mode control register
    public:
        Register::Bit<BASE_ADDRESS + SMCR_Offset, 15> ETP; /* External trigger polarity */
        Register::Bit<BASE_ADDRESS + SMCR_Offset, 14> ECE; /* External clock enable */
        Register::Bitfield<BASE_ADDRESS + SMCR_Offset, 12, 2, SMCR_ETPS_T> ETPS; /* External trigger prescaler */
        Register::Bitfield<BASE_ADDRESS + SMCR_Offset, 8, 4, SMCR_ETF_T> ETF; /* External trigger filter */
        Register::Bit<BASE_ADDRESS + SMCR_Offset, 7> MSM; /* Master/Slave mode */
        Register::Bitfield<BASE_ADDRESS + SMCR_Offset, 4, 3, SMCR_TS_T> TS; /* Trigger selection */
        Register::Bitfield<BASE_ADDRESS + SMCR_Offset, 0, 3, SMCR_SMS_T> SMS; /* Slave mode selection */
    };

    class DIER_T : public Register::Register<TIM1_DIER::dier_reg_type, BASE_ADDRESS + DIER_Offset> {
    // DMA/Interrupt enable register
    public:
        Register::Bit<BASE_ADDRESS + DIER_Offset, 14> TDE; /* Trigger DMA request enable */
        Register::Bit<BASE_ADDRESS + DIER_Offset, 13> COMDE; /* COM DMA request enable */
        Register::Bit<BASE_ADDRESS + DIER_Offset, 12> CC4DE; /* Capture/Compare 4 DMA request enable */
        Register::Bit<BASE_ADDRESS + DIER_Offset, 11> CC3DE; /* Capture/Compare 3 DMA request enable */
        Register::Bit<BASE_ADDRESS + DIER_Offset, 10> CC2DE; /* Capture/Compare 2 DMA request enable */
        Register::Bit<BASE_ADDRESS + DIER_Offset, 9> CC1DE; /* Capture/Compare 1 DMA request enable */
        Register::Bit<BASE_ADDRESS + DIER_Offset, 8> UDE; /* Update DMA request enable */
        Register::Bit<BASE_ADDRESS + DIER_Offset, 7> BIE; /* Break interrupt enable */
        Register::Bit<BASE_ADDRESS + DIER_Offset, 6> TIE; /* Trigger interrupt enable */
        Register::Bit<BASE_ADDRESS + DIER_Offset, 5> COMIE; /* COM interrupt enable */
        Register::Bit<BASE_ADDRESS + DIER_Offset, 4> CC4IE; /* Capture/Compare 4 interrupt enable */
        Register::Bit<BASE_ADDRESS + DIER_Offset, 3> CC3IE; /* Capture/Compare 3 interrupt enable */
        Register::Bit<BASE_ADDRESS + DIER_Offset, 2> CC2IE; /* Capture/Compare 2 interrupt enable */
        Register::Bit<BASE_ADDRESS + DIER_Offset, 1> CC1IE; /* Capture/Compare 1 interrupt enable */
        Register::Bit<BASE_ADDRESS + DIER_Offset, 0> UIE; /* Update interrupt enable */
    };

    class SR_T : public Register::Register<TIM1_SR::sr_reg_type, BASE_ADDRESS + SR_Offset> {
    // status register
    public:
        Register::Bit<BASE_ADDRESS + SR_Offset, 12> CC4OF; /* Capture/Compare 4 overcapture flag */
        Register::Bit<BASE_ADDRESS + SR_Offset, 11> CC3OF; /* Capture/Compare 3 overcapture flag */
        Register::Bit<BASE_ADDRESS + SR_Offset, 10> CC2OF; /* Capture/compare 2 overcapture flag */
        Register::Bit<BASE_ADDRESS + SR_Offset, 9> CC1OF; /* Capture/Compare 1 overcapture flag */
        Register::Bit<BASE_ADDRESS + SR_Offset, 7> BIF; /* Break interrupt flag */
        Register::Bit<BASE_ADDRESS + SR_Offset, 6> TIF; /* Trigger interrupt flag */
        Register::Bit<BASE_ADDRESS + SR_Offset, 5> COMIF; /* COM interrupt flag */
        Register::Bit<BASE_ADDRESS + SR_Offset, 4> CC4IF; /* Capture/Compare 4 interrupt flag */
        Register::Bit<BASE_ADDRESS + SR_Offset, 3> CC3IF; /* Capture/Compare 3 interrupt flag */
        Register::Bit<BASE_ADDRESS + SR_Offset, 2> CC2IF; /* Capture/Compare 2 interrupt flag */
        Register::Bit<BASE_ADDRESS + SR_Offset, 1> CC1IF; /* Capture/compare 1 interrupt flag */
        Register::Bit<BASE_ADDRESS + SR_Offset, 0> UIF; /* Update interrupt flag */
    };

    class EGR_T : public Register::Register<TIM1_EGR::egr_reg_type, BASE_ADDRESS + EGR_Offset> {
    // event generation register
    public:
        Register::Bit<BASE_ADDRESS + EGR_Offset, 7> BG; /* Break generation */
        Register::Bit<BASE_ADDRESS + EGR_Offset, 6> TG; /* Trigger generation */
        Register::Bit<BASE_ADDRESS + EGR_Offset, 5> COMG; /* Capture/Compare control update generation */
        Register::Bit<BASE_ADDRESS + EGR_Offset, 4> CC4G; /* Capture/compare 4 generation */
        Register::Bit<BASE_ADDRESS + EGR_Offset, 3> CC3G; /* Capture/compare 3 generation */
        Register::Bit<BASE_ADDRESS + EGR_Offset, 2> CC2G; /* Capture/compare 2 generation */
        Register::Bit<BASE_ADDRESS + EGR_Offset, 1> CC1G; /* Capture/compare 1 generation */
        Register::Bit<BASE_ADDRESS + EGR_Offset, 0> UG; /* Update generation */
    };

    class CCMR1_Output_T : public Register::Register<TIM1_CCMR1_Output::ccmr1_output_reg_type, BASE_ADDRESS + CCMR1_Output_Offset> {
    // capture/compare mode register (output mode)
    public:
        Register::Bit<BASE_ADDRESS + CCMR1_Output_Offset, 15> OC2CE; /* Output Compare 2 clear enable */
        Register::Bitfield<BASE_ADDRESS + CCMR1_Output_Offset, 12, 3, CCMR1_Output_OC2M_T> OC2M; /* Output Compare 2 mode */
        Register::Bit<BASE_ADDRESS + CCMR1_Output_Offset, 11> OC2PE; /* Output Compare 2 preload enable */
        Register::Bit<BASE_ADDRESS + CCMR1_Output_Offset, 10> OC2FE; /* Output Compare 2 fast enable */
        Register::Bitfield<BASE_ADDRESS + CCMR1_Output_Offset, 8, 2, CCMR1_Output_CC2S_T> CC2S; /* Capture/Compare 2 selection */
        Register::Bit<BASE_ADDRESS + CCMR1_Output_Offset, 7> OC1CE; /* Output Compare 1 clear enable */
        Register::Bitfield<BASE_ADDRESS + CCMR1_Output_Offset, 4, 3, CCMR1_Output_OC1M_T> OC1M; /* Output Compare 1 mode */
        Register::Bit<BASE_ADDRESS + CCMR1_Output_Offset, 3> OC1PE; /* Output Compare 1 preload enable */
        Register::Bit<BASE_ADDRESS + CCMR1_Output_Offset, 2> OC1FE; /* Output Compare 1 fast enable */
        Register::Bitfield<BASE_ADDRESS + CCMR1_Output_Offset, 0, 2, CCMR1_Output_CC1S_T> CC1S; /* Capture/Compare 1 selection */
    };

    class CCMR1_Input_T : public Register::Register<TIM1_CCMR1_Input::ccmr1_input_reg_type, BASE_ADDRESS + CCMR1_Input_Offset> {
    // capture/compare mode register 1 (input mode)
    public:
        Register::Bitfield<BASE_ADDRESS + CCMR1_Input_Offset, 12, 4, CCMR1_Input_IC2F_T> IC2F; /* Input capture 2 filter */
        Register::Bitfield<BASE_ADDRESS + CCMR1_Input_Offset, 10, 2, CCMR1_Input_IC2PCS_T> IC2PCS; /* Input capture 2 prescaler */
        Register::Bitfield<BASE_ADDRESS + CCMR1_Input_Offset, 8, 2, CCMR1_Input_CC2S_T> CC2S; /* Capture/Compare 2 selection */
        Register::Bitfield<BASE_ADDRESS + CCMR1_Input_Offset, 4, 4, CCMR1_Input_IC1F_T> IC1F; /* Input capture 1 filter */
        Register::Bitfield<BASE_ADDRESS + CCMR1_Input_Offset, 2, 2, CCMR1_Input_IC1PCS_T> IC1PCS; /* Input capture 1 prescaler */
        Register::Bitfield<BASE_ADDRESS + CCMR1_Input_Offset, 0, 2, CCMR1_Input_CC1S_T> CC1S; /* Capture/Compare 1 selection */
    };

    class CCMR2_Output_T : public Register::Register<TIM1_CCMR2_Output::ccmr2_output_reg_type, BASE_ADDRESS + CCMR2_Output_Offset> {
    // capture/compare mode register (output mode)
    public:
        Register::Bit<BASE_ADDRESS + CCMR2_Output_Offset, 15> OC4CE; /* Output compare 4 clear enable */
        Register::Bitfield<BASE_ADDRESS + CCMR2_Output_Offset, 12, 3, CCMR2_Output_OC4M_T> OC4M; /* Output compare 4 mode */
        Register::Bit<BASE_ADDRESS + CCMR2_Output_Offset, 11> OC4PE; /* Output compare 4 preload enable */
        Register::Bit<BASE_ADDRESS + CCMR2_Output_Offset, 10> OC4FE; /* Output compare 4 fast enable */
        Register::Bitfield<BASE_ADDRESS + CCMR2_Output_Offset, 8, 2, CCMR2_Output_CC4S_T> CC4S; /* Capture/Compare 4 selection */
        Register::Bit<BASE_ADDRESS + CCMR2_Output_Offset, 7> OC3CE; /* Output compare 3 clear enable */
        Register::Bitfield<BASE_ADDRESS + CCMR2_Output_Offset, 4, 3, CCMR2_Output_OC3M_T> OC3M; /* Output compare 3 mode */
        Register::Bit<BASE_ADDRESS + CCMR2_Output_Offset, 3> OC3PE; /* Output compare 3 preload enable */
        Register::Bit<BASE_ADDRESS + CCMR2_Output_Offset, 2> OC3FE; /* Output compare 3 fast enable */
        Register::Bitfield<BASE_ADDRESS + CCMR2_Output_Offset, 0, 2, CCMR2_Output_CC3S_T> CC3S; /* Capture/Compare 3 selection */
    };

    class CCMR2_Input_T : public Register::Register<TIM1_CCMR2_Input::ccmr2_input_reg_type, BASE_ADDRESS + CCMR2_Input_Offset> {
    // capture/compare mode register 2 (input mode)
    public:
        Register::Bitfield<BASE_ADDRESS + CCMR2_Input_Offset, 12, 4, CCMR2_Input_IC4F_T> IC4F; /* Input capture 4 filter */
        Register::Bitfield<BASE_ADDRESS + CCMR2_Input_Offset, 10, 2, CCMR2_Input_IC4PSC_T> IC4PSC; /* Input capture 4 prescaler */
        Register::Bitfield<BASE_ADDRESS + CCMR2_Input_Offset, 8, 2, CCMR2_Input_CC4S_T> CC4S; /* Capture/Compare 4 selection */
        Register::Bitfield<BASE_ADDRESS + CCMR2_Input_Offset, 4, 4, CCMR2_Input_IC3F_T> IC3F; /* Input capture 3 filter */
        Register::Bitfield<BASE_ADDRESS + CCMR2_Input_Offset, 2, 2, CCMR2_Input_IC3PSC_T> IC3PSC; /* Input capture 3 prescaler */
        Register::Bitfield<BASE_ADDRESS + CCMR2_Input_Offset, 0, 2, CCMR2_Input_CC3S_T> CC3S; /* Capture/compare 3 selection */
    };

    class CCER_T : public Register::Register<TIM1_CCER::ccer_reg_type, BASE_ADDRESS + CCER_Offset> {
    // capture/compare enable register
    public:
        Register::Bit<BASE_ADDRESS + CCER_Offset, 13> CC4P; /* Capture/Compare 3 output Polarity */
        Register::Bit<BASE_ADDRESS + CCER_Offset, 12> CC4E; /* Capture/Compare 4 output enable */
        Register::Bit<BASE_ADDRESS + CCER_Offset, 11> CC3NP; /* Capture/Compare 3 output Polarity */
        Register::Bit<BASE_ADDRESS + CCER_Offset, 10> CC3NE; /* Capture/Compare 3 complementary output enable */
        Register::Bit<BASE_ADDRESS + CCER_Offset, 9> CC3P; /* Capture/Compare 3 output Polarity */
        Register::Bit<BASE_ADDRESS + CCER_Offset, 8> CC3E; /* Capture/Compare 3 output enable */
        Register::Bit<BASE_ADDRESS + CCER_Offset, 7> CC2NP; /* Capture/Compare 2 output Polarity */
        Register::Bit<BASE_ADDRESS + CCER_Offset, 6> CC2NE; /* Capture/Compare 2 complementary output enable */
        Register::Bit<BASE_ADDRESS + CCER_Offset, 5> CC2P; /* Capture/Compare 2 output Polarity */
        Register::Bit<BASE_ADDRESS + CCER_Offset, 4> CC2E; /* Capture/Compare 2 output enable */
        Register::Bit<BASE_ADDRESS + CCER_Offset, 3> CC1NP; /* Capture/Compare 1 output Polarity */
        Register::Bit<BASE_ADDRESS + CCER_Offset, 2> CC1NE; /* Capture/Compare 1 complementary output enable */
        Register::Bit<BASE_ADDRESS + CCER_Offset, 1> CC1P; /* Capture/Compare 1 output Polarity */
        Register::Bit<BASE_ADDRESS + CCER_Offset, 0> CC1E; /* Capture/Compare 1 output enable */
    };

    class CNT_T : public Register::Register<TIM1_CNT::cnt_reg_type, BASE_ADDRESS + CNT_Offset> {
    // counter
    public:
        Register::Bitfield<BASE_ADDRESS + CNT_Offset, 0, 16, CNT_CNT_T> CNT; /* counter value */
    };

    class PSC_T : public Register::Register<TIM1_PSC::psc_reg_type, BASE_ADDRESS + PSC_Offset> {
    // prescaler
    public:
        Register::Bitfield<BASE_ADDRESS + PSC_Offset, 0, 16, PSC_PSC_T> PSC; /* Prescaler value */
    };

    class ARR_T : public Register::Register<TIM1_ARR::arr_reg_type, BASE_ADDRESS + ARR_Offset> {
    // auto-reload register
    public:
        Register::Bitfield<BASE_ADDRESS + ARR_Offset, 0, 16, ARR_ARR_T> ARR; /* Auto-reload value */
    };

    class RCR_T : public Register::Register<TIM1_RCR::rcr_reg_type, BASE_ADDRESS + RCR_Offset> {
    // repetition counter register
    public:
        Register::Bitfield<BASE_ADDRESS + RCR_Offset, 0, 8, RCR_REP_T> REP; /* Repetition counter value */
    };

    class CCR1_T : public Register::Register<TIM1_CCR1::ccr1_reg_type, BASE_ADDRESS + CCR1_Offset> {
    // capture/compare register 1
    public:
        Register::Bitfield<BASE_ADDRESS + CCR1_Offset, 0, 16, CCR1_CCR1_T> CCR1; /* Capture/Compare 1 value */
    };

    class CCR2_T : public Register::Register<TIM1_CCR2::ccr2_reg_type, BASE_ADDRESS + CCR2_Offset> {
    // capture/compare register 2
    public:
        Register::Bitfield<BASE_ADDRESS + CCR2_Offset, 0, 16, CCR2_CCR2_T> CCR2; /* Capture/Compare 2 value */
    };

    class CCR3_T : public Register::Register<TIM1_CCR3::ccr3_reg_type, BASE_ADDRESS + CCR3_Offset> {
    // capture/compare register 3
    public:
        Register::Bitfield<BASE_ADDRESS + CCR3_Offset, 0, 16, CCR3_CCR3_T> CCR3; /* Capture/Compare 3 value */
    };

    class CCR4_T : public Register::Register<TIM1_CCR4::ccr4_reg_type, BASE_ADDRESS + CCR4_Offset> {
    // capture/compare register 4
    public:
        Register::Bitfield<BASE_ADDRESS + CCR4_Offset, 0, 16, CCR4_CCR4_T> CCR4; /* Capture/Compare 3 value */
    };

    class BDTR_T : public Register::Register<TIM1_BDTR::bdtr_reg_type, BASE_ADDRESS + BDTR_Offset> {
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

    class DCR_T : public Register::Register<TIM1_DCR::dcr_reg_type, BASE_ADDRESS + DCR_Offset> {
    // DMA control register
    public:
        Register::Bitfield<BASE_ADDRESS + DCR_Offset, 8, 5, DCR_DBL_T> DBL; /* DMA burst length */
        Register::Bitfield<BASE_ADDRESS + DCR_Offset, 0, 5, DCR_DBA_T> DBA; /* DMA base address */
    };

    class DMAR_T : public Register::Register<TIM1_DMAR::dmar_reg_type, BASE_ADDRESS + DMAR_Offset> {
    // DMA address for full transfer
    public:
        Register::Bitfield<BASE_ADDRESS + DMAR_Offset, 0, 16, DMAR_DMAB_T> DMAB; /* DMA register for burst accesses */
    };

    CR1_T CR1;
    CR2_T CR2;
    SMCR_T SMCR;
    DIER_T DIER;
    SR_T SR;
    EGR_T EGR;
    CCMR1_Output_T CCMR1_Output;
    CCMR1_Input_T CCMR1_Input;
    CCMR2_Output_T CCMR2_Output;
    CCMR2_Input_T CCMR2_Input;
    CCER_T CCER;
    CNT_T CNT;
    PSC_T PSC;
    ARR_T ARR;
    RCR_T RCR;
    CCR1_T CCR1;
    CCR2_T CCR2;
    CCR3_T CCR3;
    CCR4_T CCR4;
    BDTR_T BDTR;
    DCR_T DCR;
    DMAR_T DMAR;
};

} // namespace STM32LIB

#endif // STM32F0X1_TIM1_HPP_

