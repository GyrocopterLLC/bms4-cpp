#ifndef STM32F0X1_EXTI_HPP_
#define STM32F0X1_EXTI_HPP_
#pragma once

#include <cstdint>
#include "Register.hpp"

/* External interrupt/event controller */
namespace STM32LIB { 

/* Overwritable types for each of the bitfields.
 * Defaults to uint32_t, but feel free to redefine with your
 * own custom enum class later. */

namespace EXTI_IMR {

    enum class imr_reg_type {};

    template<bool tf>
    using MR0 = Register::Combo_Bit<imr_reg_type, 0, tf>;

    template<bool tf>
    using MR1 = Register::Combo_Bit<imr_reg_type, 1, tf>;

    template<bool tf>
    using MR2 = Register::Combo_Bit<imr_reg_type, 2, tf>;

    template<bool tf>
    using MR3 = Register::Combo_Bit<imr_reg_type, 3, tf>;

    template<bool tf>
    using MR4 = Register::Combo_Bit<imr_reg_type, 4, tf>;

    template<bool tf>
    using MR5 = Register::Combo_Bit<imr_reg_type, 5, tf>;

    template<bool tf>
    using MR6 = Register::Combo_Bit<imr_reg_type, 6, tf>;

    template<bool tf>
    using MR7 = Register::Combo_Bit<imr_reg_type, 7, tf>;

    template<bool tf>
    using MR8 = Register::Combo_Bit<imr_reg_type, 8, tf>;

    template<bool tf>
    using MR9 = Register::Combo_Bit<imr_reg_type, 9, tf>;

    template<bool tf>
    using MR10 = Register::Combo_Bit<imr_reg_type, 10, tf>;

    template<bool tf>
    using MR11 = Register::Combo_Bit<imr_reg_type, 11, tf>;

    template<bool tf>
    using MR12 = Register::Combo_Bit<imr_reg_type, 12, tf>;

    template<bool tf>
    using MR13 = Register::Combo_Bit<imr_reg_type, 13, tf>;

    template<bool tf>
    using MR14 = Register::Combo_Bit<imr_reg_type, 14, tf>;

    template<bool tf>
    using MR15 = Register::Combo_Bit<imr_reg_type, 15, tf>;

    template<bool tf>
    using MR16 = Register::Combo_Bit<imr_reg_type, 16, tf>;

    template<bool tf>
    using MR17 = Register::Combo_Bit<imr_reg_type, 17, tf>;

    template<bool tf>
    using MR18 = Register::Combo_Bit<imr_reg_type, 18, tf>;

    template<bool tf>
    using MR19 = Register::Combo_Bit<imr_reg_type, 19, tf>;

    template<bool tf>
    using MR20 = Register::Combo_Bit<imr_reg_type, 20, tf>;

    template<bool tf>
    using MR21 = Register::Combo_Bit<imr_reg_type, 21, tf>;

    template<bool tf>
    using MR22 = Register::Combo_Bit<imr_reg_type, 22, tf>;

    template<bool tf>
    using MR23 = Register::Combo_Bit<imr_reg_type, 23, tf>;

    template<bool tf>
    using MR24 = Register::Combo_Bit<imr_reg_type, 24, tf>;

    template<bool tf>
    using MR25 = Register::Combo_Bit<imr_reg_type, 25, tf>;

    template<bool tf>
    using MR26 = Register::Combo_Bit<imr_reg_type, 26, tf>;

    template<bool tf>
    using MR27 = Register::Combo_Bit<imr_reg_type, 27, tf>;

} // EXTI_IMR
namespace EXTI_EMR {

    enum class emr_reg_type {};

    template<bool tf>
    using MR0 = Register::Combo_Bit<emr_reg_type, 0, tf>;

    template<bool tf>
    using MR1 = Register::Combo_Bit<emr_reg_type, 1, tf>;

    template<bool tf>
    using MR2 = Register::Combo_Bit<emr_reg_type, 2, tf>;

    template<bool tf>
    using MR3 = Register::Combo_Bit<emr_reg_type, 3, tf>;

    template<bool tf>
    using MR4 = Register::Combo_Bit<emr_reg_type, 4, tf>;

    template<bool tf>
    using MR5 = Register::Combo_Bit<emr_reg_type, 5, tf>;

    template<bool tf>
    using MR6 = Register::Combo_Bit<emr_reg_type, 6, tf>;

    template<bool tf>
    using MR7 = Register::Combo_Bit<emr_reg_type, 7, tf>;

    template<bool tf>
    using MR8 = Register::Combo_Bit<emr_reg_type, 8, tf>;

    template<bool tf>
    using MR9 = Register::Combo_Bit<emr_reg_type, 9, tf>;

    template<bool tf>
    using MR10 = Register::Combo_Bit<emr_reg_type, 10, tf>;

    template<bool tf>
    using MR11 = Register::Combo_Bit<emr_reg_type, 11, tf>;

    template<bool tf>
    using MR12 = Register::Combo_Bit<emr_reg_type, 12, tf>;

    template<bool tf>
    using MR13 = Register::Combo_Bit<emr_reg_type, 13, tf>;

    template<bool tf>
    using MR14 = Register::Combo_Bit<emr_reg_type, 14, tf>;

    template<bool tf>
    using MR15 = Register::Combo_Bit<emr_reg_type, 15, tf>;

    template<bool tf>
    using MR16 = Register::Combo_Bit<emr_reg_type, 16, tf>;

    template<bool tf>
    using MR17 = Register::Combo_Bit<emr_reg_type, 17, tf>;

    template<bool tf>
    using MR18 = Register::Combo_Bit<emr_reg_type, 18, tf>;

    template<bool tf>
    using MR19 = Register::Combo_Bit<emr_reg_type, 19, tf>;

    template<bool tf>
    using MR20 = Register::Combo_Bit<emr_reg_type, 20, tf>;

    template<bool tf>
    using MR21 = Register::Combo_Bit<emr_reg_type, 21, tf>;

    template<bool tf>
    using MR22 = Register::Combo_Bit<emr_reg_type, 22, tf>;

    template<bool tf>
    using MR23 = Register::Combo_Bit<emr_reg_type, 23, tf>;

    template<bool tf>
    using MR24 = Register::Combo_Bit<emr_reg_type, 24, tf>;

    template<bool tf>
    using MR25 = Register::Combo_Bit<emr_reg_type, 25, tf>;

    template<bool tf>
    using MR26 = Register::Combo_Bit<emr_reg_type, 26, tf>;

    template<bool tf>
    using MR27 = Register::Combo_Bit<emr_reg_type, 27, tf>;

} // EXTI_EMR
namespace EXTI_RTSR {

    enum class rtsr_reg_type {};

    template<bool tf>
    using TR0 = Register::Combo_Bit<rtsr_reg_type, 0, tf>;

    template<bool tf>
    using TR1 = Register::Combo_Bit<rtsr_reg_type, 1, tf>;

    template<bool tf>
    using TR2 = Register::Combo_Bit<rtsr_reg_type, 2, tf>;

    template<bool tf>
    using TR3 = Register::Combo_Bit<rtsr_reg_type, 3, tf>;

    template<bool tf>
    using TR4 = Register::Combo_Bit<rtsr_reg_type, 4, tf>;

    template<bool tf>
    using TR5 = Register::Combo_Bit<rtsr_reg_type, 5, tf>;

    template<bool tf>
    using TR6 = Register::Combo_Bit<rtsr_reg_type, 6, tf>;

    template<bool tf>
    using TR7 = Register::Combo_Bit<rtsr_reg_type, 7, tf>;

    template<bool tf>
    using TR8 = Register::Combo_Bit<rtsr_reg_type, 8, tf>;

    template<bool tf>
    using TR9 = Register::Combo_Bit<rtsr_reg_type, 9, tf>;

    template<bool tf>
    using TR10 = Register::Combo_Bit<rtsr_reg_type, 10, tf>;

    template<bool tf>
    using TR11 = Register::Combo_Bit<rtsr_reg_type, 11, tf>;

    template<bool tf>
    using TR12 = Register::Combo_Bit<rtsr_reg_type, 12, tf>;

    template<bool tf>
    using TR13 = Register::Combo_Bit<rtsr_reg_type, 13, tf>;

    template<bool tf>
    using TR14 = Register::Combo_Bit<rtsr_reg_type, 14, tf>;

    template<bool tf>
    using TR15 = Register::Combo_Bit<rtsr_reg_type, 15, tf>;

    template<bool tf>
    using TR16 = Register::Combo_Bit<rtsr_reg_type, 16, tf>;

    template<bool tf>
    using TR17 = Register::Combo_Bit<rtsr_reg_type, 17, tf>;

    template<bool tf>
    using TR19 = Register::Combo_Bit<rtsr_reg_type, 19, tf>;

} // EXTI_RTSR
namespace EXTI_FTSR {

    enum class ftsr_reg_type {};

    template<bool tf>
    using TR0 = Register::Combo_Bit<ftsr_reg_type, 0, tf>;

    template<bool tf>
    using TR1 = Register::Combo_Bit<ftsr_reg_type, 1, tf>;

    template<bool tf>
    using TR2 = Register::Combo_Bit<ftsr_reg_type, 2, tf>;

    template<bool tf>
    using TR3 = Register::Combo_Bit<ftsr_reg_type, 3, tf>;

    template<bool tf>
    using TR4 = Register::Combo_Bit<ftsr_reg_type, 4, tf>;

    template<bool tf>
    using TR5 = Register::Combo_Bit<ftsr_reg_type, 5, tf>;

    template<bool tf>
    using TR6 = Register::Combo_Bit<ftsr_reg_type, 6, tf>;

    template<bool tf>
    using TR7 = Register::Combo_Bit<ftsr_reg_type, 7, tf>;

    template<bool tf>
    using TR8 = Register::Combo_Bit<ftsr_reg_type, 8, tf>;

    template<bool tf>
    using TR9 = Register::Combo_Bit<ftsr_reg_type, 9, tf>;

    template<bool tf>
    using TR10 = Register::Combo_Bit<ftsr_reg_type, 10, tf>;

    template<bool tf>
    using TR11 = Register::Combo_Bit<ftsr_reg_type, 11, tf>;

    template<bool tf>
    using TR12 = Register::Combo_Bit<ftsr_reg_type, 12, tf>;

    template<bool tf>
    using TR13 = Register::Combo_Bit<ftsr_reg_type, 13, tf>;

    template<bool tf>
    using TR14 = Register::Combo_Bit<ftsr_reg_type, 14, tf>;

    template<bool tf>
    using TR15 = Register::Combo_Bit<ftsr_reg_type, 15, tf>;

    template<bool tf>
    using TR16 = Register::Combo_Bit<ftsr_reg_type, 16, tf>;

    template<bool tf>
    using TR17 = Register::Combo_Bit<ftsr_reg_type, 17, tf>;

    template<bool tf>
    using TR19 = Register::Combo_Bit<ftsr_reg_type, 19, tf>;

} // EXTI_FTSR
namespace EXTI_SWIER {

    enum class swier_reg_type {};

    template<bool tf>
    using SWIER0 = Register::Combo_Bit<swier_reg_type, 0, tf>;

    template<bool tf>
    using SWIER1 = Register::Combo_Bit<swier_reg_type, 1, tf>;

    template<bool tf>
    using SWIER2 = Register::Combo_Bit<swier_reg_type, 2, tf>;

    template<bool tf>
    using SWIER3 = Register::Combo_Bit<swier_reg_type, 3, tf>;

    template<bool tf>
    using SWIER4 = Register::Combo_Bit<swier_reg_type, 4, tf>;

    template<bool tf>
    using SWIER5 = Register::Combo_Bit<swier_reg_type, 5, tf>;

    template<bool tf>
    using SWIER6 = Register::Combo_Bit<swier_reg_type, 6, tf>;

    template<bool tf>
    using SWIER7 = Register::Combo_Bit<swier_reg_type, 7, tf>;

    template<bool tf>
    using SWIER8 = Register::Combo_Bit<swier_reg_type, 8, tf>;

    template<bool tf>
    using SWIER9 = Register::Combo_Bit<swier_reg_type, 9, tf>;

    template<bool tf>
    using SWIER10 = Register::Combo_Bit<swier_reg_type, 10, tf>;

    template<bool tf>
    using SWIER11 = Register::Combo_Bit<swier_reg_type, 11, tf>;

    template<bool tf>
    using SWIER12 = Register::Combo_Bit<swier_reg_type, 12, tf>;

    template<bool tf>
    using SWIER13 = Register::Combo_Bit<swier_reg_type, 13, tf>;

    template<bool tf>
    using SWIER14 = Register::Combo_Bit<swier_reg_type, 14, tf>;

    template<bool tf>
    using SWIER15 = Register::Combo_Bit<swier_reg_type, 15, tf>;

    template<bool tf>
    using SWIER16 = Register::Combo_Bit<swier_reg_type, 16, tf>;

    template<bool tf>
    using SWIER17 = Register::Combo_Bit<swier_reg_type, 17, tf>;

    template<bool tf>
    using SWIER19 = Register::Combo_Bit<swier_reg_type, 19, tf>;

} // EXTI_SWIER
namespace EXTI_PR {

    enum class pr_reg_type {};

    template<bool tf>
    using PR0 = Register::Combo_Bit<pr_reg_type, 0, tf>;

    template<bool tf>
    using PR1 = Register::Combo_Bit<pr_reg_type, 1, tf>;

    template<bool tf>
    using PR2 = Register::Combo_Bit<pr_reg_type, 2, tf>;

    template<bool tf>
    using PR3 = Register::Combo_Bit<pr_reg_type, 3, tf>;

    template<bool tf>
    using PR4 = Register::Combo_Bit<pr_reg_type, 4, tf>;

    template<bool tf>
    using PR5 = Register::Combo_Bit<pr_reg_type, 5, tf>;

    template<bool tf>
    using PR6 = Register::Combo_Bit<pr_reg_type, 6, tf>;

    template<bool tf>
    using PR7 = Register::Combo_Bit<pr_reg_type, 7, tf>;

    template<bool tf>
    using PR8 = Register::Combo_Bit<pr_reg_type, 8, tf>;

    template<bool tf>
    using PR9 = Register::Combo_Bit<pr_reg_type, 9, tf>;

    template<bool tf>
    using PR10 = Register::Combo_Bit<pr_reg_type, 10, tf>;

    template<bool tf>
    using PR11 = Register::Combo_Bit<pr_reg_type, 11, tf>;

    template<bool tf>
    using PR12 = Register::Combo_Bit<pr_reg_type, 12, tf>;

    template<bool tf>
    using PR13 = Register::Combo_Bit<pr_reg_type, 13, tf>;

    template<bool tf>
    using PR14 = Register::Combo_Bit<pr_reg_type, 14, tf>;

    template<bool tf>
    using PR15 = Register::Combo_Bit<pr_reg_type, 15, tf>;

    template<bool tf>
    using PR16 = Register::Combo_Bit<pr_reg_type, 16, tf>;

    template<bool tf>
    using PR17 = Register::Combo_Bit<pr_reg_type, 17, tf>;

    template<bool tf>
    using PR19 = Register::Combo_Bit<pr_reg_type, 19, tf>;

} // EXTI_PR
template<uint32_t BASE_ADDRESS>
class EXTI {
public:
    static const uint32_t IMR_Offset = 0x0000;
    static const uint32_t EMR_Offset = 0x0004;
    static const uint32_t RTSR_Offset = 0x0008;
    static const uint32_t FTSR_Offset = 0x000C;
    static const uint32_t SWIER_Offset = 0x0010;
    static const uint32_t PR_Offset = 0x0014;

    EXTI() = default;
    EXTI( const EXTI& ) = delete;
    const EXTI& operator=( const EXTI& ) = delete;

    class IMR_T : public Register::Register<EXTI_IMR::imr_reg_type, BASE_ADDRESS + IMR_Offset> {
    // Interrupt mask register (EXTI_IMR)
    public:
        Register::Bit<BASE_ADDRESS + IMR_Offset, 0> MR0; /* Interrupt Mask on line 0 */
        Register::Bit<BASE_ADDRESS + IMR_Offset, 1> MR1; /* Interrupt Mask on line 1 */
        Register::Bit<BASE_ADDRESS + IMR_Offset, 2> MR2; /* Interrupt Mask on line 2 */
        Register::Bit<BASE_ADDRESS + IMR_Offset, 3> MR3; /* Interrupt Mask on line 3 */
        Register::Bit<BASE_ADDRESS + IMR_Offset, 4> MR4; /* Interrupt Mask on line 4 */
        Register::Bit<BASE_ADDRESS + IMR_Offset, 5> MR5; /* Interrupt Mask on line 5 */
        Register::Bit<BASE_ADDRESS + IMR_Offset, 6> MR6; /* Interrupt Mask on line 6 */
        Register::Bit<BASE_ADDRESS + IMR_Offset, 7> MR7; /* Interrupt Mask on line 7 */
        Register::Bit<BASE_ADDRESS + IMR_Offset, 8> MR8; /* Interrupt Mask on line 8 */
        Register::Bit<BASE_ADDRESS + IMR_Offset, 9> MR9; /* Interrupt Mask on line 9 */
        Register::Bit<BASE_ADDRESS + IMR_Offset, 10> MR10; /* Interrupt Mask on line 10 */
        Register::Bit<BASE_ADDRESS + IMR_Offset, 11> MR11; /* Interrupt Mask on line 11 */
        Register::Bit<BASE_ADDRESS + IMR_Offset, 12> MR12; /* Interrupt Mask on line 12 */
        Register::Bit<BASE_ADDRESS + IMR_Offset, 13> MR13; /* Interrupt Mask on line 13 */
        Register::Bit<BASE_ADDRESS + IMR_Offset, 14> MR14; /* Interrupt Mask on line 14 */
        Register::Bit<BASE_ADDRESS + IMR_Offset, 15> MR15; /* Interrupt Mask on line 15 */
        Register::Bit<BASE_ADDRESS + IMR_Offset, 16> MR16; /* Interrupt Mask on line 16 */
        Register::Bit<BASE_ADDRESS + IMR_Offset, 17> MR17; /* Interrupt Mask on line 17 */
        Register::Bit<BASE_ADDRESS + IMR_Offset, 18> MR18; /* Interrupt Mask on line 18 */
        Register::Bit<BASE_ADDRESS + IMR_Offset, 19> MR19; /* Interrupt Mask on line 19 */
        Register::Bit<BASE_ADDRESS + IMR_Offset, 20> MR20; /* Interrupt Mask on line 20 */
        Register::Bit<BASE_ADDRESS + IMR_Offset, 21> MR21; /* Interrupt Mask on line 21 */
        Register::Bit<BASE_ADDRESS + IMR_Offset, 22> MR22; /* Interrupt Mask on line 22 */
        Register::Bit<BASE_ADDRESS + IMR_Offset, 23> MR23; /* Interrupt Mask on line 23 */
        Register::Bit<BASE_ADDRESS + IMR_Offset, 24> MR24; /* Interrupt Mask on line 24 */
        Register::Bit<BASE_ADDRESS + IMR_Offset, 25> MR25; /* Interrupt Mask on line 25 */
        Register::Bit<BASE_ADDRESS + IMR_Offset, 26> MR26; /* Interrupt Mask on line 26 */
        Register::Bit<BASE_ADDRESS + IMR_Offset, 27> MR27; /* Interrupt Mask on line 27 */
    };

    class EMR_T : public Register::Register<EXTI_EMR::emr_reg_type, BASE_ADDRESS + EMR_Offset> {
    // Event mask register (EXTI_EMR)
    public:
        Register::Bit<BASE_ADDRESS + EMR_Offset, 0> MR0; /* Event Mask on line 0 */
        Register::Bit<BASE_ADDRESS + EMR_Offset, 1> MR1; /* Event Mask on line 1 */
        Register::Bit<BASE_ADDRESS + EMR_Offset, 2> MR2; /* Event Mask on line 2 */
        Register::Bit<BASE_ADDRESS + EMR_Offset, 3> MR3; /* Event Mask on line 3 */
        Register::Bit<BASE_ADDRESS + EMR_Offset, 4> MR4; /* Event Mask on line 4 */
        Register::Bit<BASE_ADDRESS + EMR_Offset, 5> MR5; /* Event Mask on line 5 */
        Register::Bit<BASE_ADDRESS + EMR_Offset, 6> MR6; /* Event Mask on line 6 */
        Register::Bit<BASE_ADDRESS + EMR_Offset, 7> MR7; /* Event Mask on line 7 */
        Register::Bit<BASE_ADDRESS + EMR_Offset, 8> MR8; /* Event Mask on line 8 */
        Register::Bit<BASE_ADDRESS + EMR_Offset, 9> MR9; /* Event Mask on line 9 */
        Register::Bit<BASE_ADDRESS + EMR_Offset, 10> MR10; /* Event Mask on line 10 */
        Register::Bit<BASE_ADDRESS + EMR_Offset, 11> MR11; /* Event Mask on line 11 */
        Register::Bit<BASE_ADDRESS + EMR_Offset, 12> MR12; /* Event Mask on line 12 */
        Register::Bit<BASE_ADDRESS + EMR_Offset, 13> MR13; /* Event Mask on line 13 */
        Register::Bit<BASE_ADDRESS + EMR_Offset, 14> MR14; /* Event Mask on line 14 */
        Register::Bit<BASE_ADDRESS + EMR_Offset, 15> MR15; /* Event Mask on line 15 */
        Register::Bit<BASE_ADDRESS + EMR_Offset, 16> MR16; /* Event Mask on line 16 */
        Register::Bit<BASE_ADDRESS + EMR_Offset, 17> MR17; /* Event Mask on line 17 */
        Register::Bit<BASE_ADDRESS + EMR_Offset, 18> MR18; /* Event Mask on line 18 */
        Register::Bit<BASE_ADDRESS + EMR_Offset, 19> MR19; /* Event Mask on line 19 */
        Register::Bit<BASE_ADDRESS + EMR_Offset, 20> MR20; /* Event Mask on line 20 */
        Register::Bit<BASE_ADDRESS + EMR_Offset, 21> MR21; /* Event Mask on line 21 */
        Register::Bit<BASE_ADDRESS + EMR_Offset, 22> MR22; /* Event Mask on line 22 */
        Register::Bit<BASE_ADDRESS + EMR_Offset, 23> MR23; /* Event Mask on line 23 */
        Register::Bit<BASE_ADDRESS + EMR_Offset, 24> MR24; /* Event Mask on line 24 */
        Register::Bit<BASE_ADDRESS + EMR_Offset, 25> MR25; /* Event Mask on line 25 */
        Register::Bit<BASE_ADDRESS + EMR_Offset, 26> MR26; /* Event Mask on line 26 */
        Register::Bit<BASE_ADDRESS + EMR_Offset, 27> MR27; /* Event Mask on line 27 */
    };

    class RTSR_T : public Register::Register<EXTI_RTSR::rtsr_reg_type, BASE_ADDRESS + RTSR_Offset> {
    // Rising Trigger selection register (EXTI_RTSR)
    public:
        Register::Bit<BASE_ADDRESS + RTSR_Offset, 0> TR0; /* Rising trigger event configuration of line 0 */
        Register::Bit<BASE_ADDRESS + RTSR_Offset, 1> TR1; /* Rising trigger event configuration of line 1 */
        Register::Bit<BASE_ADDRESS + RTSR_Offset, 2> TR2; /* Rising trigger event configuration of line 2 */
        Register::Bit<BASE_ADDRESS + RTSR_Offset, 3> TR3; /* Rising trigger event configuration of line 3 */
        Register::Bit<BASE_ADDRESS + RTSR_Offset, 4> TR4; /* Rising trigger event configuration of line 4 */
        Register::Bit<BASE_ADDRESS + RTSR_Offset, 5> TR5; /* Rising trigger event configuration of line 5 */
        Register::Bit<BASE_ADDRESS + RTSR_Offset, 6> TR6; /* Rising trigger event configuration of line 6 */
        Register::Bit<BASE_ADDRESS + RTSR_Offset, 7> TR7; /* Rising trigger event configuration of line 7 */
        Register::Bit<BASE_ADDRESS + RTSR_Offset, 8> TR8; /* Rising trigger event configuration of line 8 */
        Register::Bit<BASE_ADDRESS + RTSR_Offset, 9> TR9; /* Rising trigger event configuration of line 9 */
        Register::Bit<BASE_ADDRESS + RTSR_Offset, 10> TR10; /* Rising trigger event configuration of line 10 */
        Register::Bit<BASE_ADDRESS + RTSR_Offset, 11> TR11; /* Rising trigger event configuration of line 11 */
        Register::Bit<BASE_ADDRESS + RTSR_Offset, 12> TR12; /* Rising trigger event configuration of line 12 */
        Register::Bit<BASE_ADDRESS + RTSR_Offset, 13> TR13; /* Rising trigger event configuration of line 13 */
        Register::Bit<BASE_ADDRESS + RTSR_Offset, 14> TR14; /* Rising trigger event configuration of line 14 */
        Register::Bit<BASE_ADDRESS + RTSR_Offset, 15> TR15; /* Rising trigger event configuration of line 15 */
        Register::Bit<BASE_ADDRESS + RTSR_Offset, 16> TR16; /* Rising trigger event configuration of line 16 */
        Register::Bit<BASE_ADDRESS + RTSR_Offset, 17> TR17; /* Rising trigger event configuration of line 17 */
        Register::Bit<BASE_ADDRESS + RTSR_Offset, 19> TR19; /* Rising trigger event configuration of line 19 */
    };

    class FTSR_T : public Register::Register<EXTI_FTSR::ftsr_reg_type, BASE_ADDRESS + FTSR_Offset> {
    // Falling Trigger selection register (EXTI_FTSR)
    public:
        Register::Bit<BASE_ADDRESS + FTSR_Offset, 0> TR0; /* Falling trigger event configuration of line 0 */
        Register::Bit<BASE_ADDRESS + FTSR_Offset, 1> TR1; /* Falling trigger event configuration of line 1 */
        Register::Bit<BASE_ADDRESS + FTSR_Offset, 2> TR2; /* Falling trigger event configuration of line 2 */
        Register::Bit<BASE_ADDRESS + FTSR_Offset, 3> TR3; /* Falling trigger event configuration of line 3 */
        Register::Bit<BASE_ADDRESS + FTSR_Offset, 4> TR4; /* Falling trigger event configuration of line 4 */
        Register::Bit<BASE_ADDRESS + FTSR_Offset, 5> TR5; /* Falling trigger event configuration of line 5 */
        Register::Bit<BASE_ADDRESS + FTSR_Offset, 6> TR6; /* Falling trigger event configuration of line 6 */
        Register::Bit<BASE_ADDRESS + FTSR_Offset, 7> TR7; /* Falling trigger event configuration of line 7 */
        Register::Bit<BASE_ADDRESS + FTSR_Offset, 8> TR8; /* Falling trigger event configuration of line 8 */
        Register::Bit<BASE_ADDRESS + FTSR_Offset, 9> TR9; /* Falling trigger event configuration of line 9 */
        Register::Bit<BASE_ADDRESS + FTSR_Offset, 10> TR10; /* Falling trigger event configuration of line 10 */
        Register::Bit<BASE_ADDRESS + FTSR_Offset, 11> TR11; /* Falling trigger event configuration of line 11 */
        Register::Bit<BASE_ADDRESS + FTSR_Offset, 12> TR12; /* Falling trigger event configuration of line 12 */
        Register::Bit<BASE_ADDRESS + FTSR_Offset, 13> TR13; /* Falling trigger event configuration of line 13 */
        Register::Bit<BASE_ADDRESS + FTSR_Offset, 14> TR14; /* Falling trigger event configuration of line 14 */
        Register::Bit<BASE_ADDRESS + FTSR_Offset, 15> TR15; /* Falling trigger event configuration of line 15 */
        Register::Bit<BASE_ADDRESS + FTSR_Offset, 16> TR16; /* Falling trigger event configuration of line 16 */
        Register::Bit<BASE_ADDRESS + FTSR_Offset, 17> TR17; /* Falling trigger event configuration of line 17 */
        Register::Bit<BASE_ADDRESS + FTSR_Offset, 19> TR19; /* Falling trigger event configuration of line 19 */
    };

    class SWIER_T : public Register::Register<EXTI_SWIER::swier_reg_type, BASE_ADDRESS + SWIER_Offset> {
    // Software interrupt event register (EXTI_SWIER)
    public:
        Register::Bit<BASE_ADDRESS + SWIER_Offset, 0> SWIER0; /* Software Interrupt on line 0 */
        Register::Bit<BASE_ADDRESS + SWIER_Offset, 1> SWIER1; /* Software Interrupt on line 1 */
        Register::Bit<BASE_ADDRESS + SWIER_Offset, 2> SWIER2; /* Software Interrupt on line 2 */
        Register::Bit<BASE_ADDRESS + SWIER_Offset, 3> SWIER3; /* Software Interrupt on line 3 */
        Register::Bit<BASE_ADDRESS + SWIER_Offset, 4> SWIER4; /* Software Interrupt on line 4 */
        Register::Bit<BASE_ADDRESS + SWIER_Offset, 5> SWIER5; /* Software Interrupt on line 5 */
        Register::Bit<BASE_ADDRESS + SWIER_Offset, 6> SWIER6; /* Software Interrupt on line 6 */
        Register::Bit<BASE_ADDRESS + SWIER_Offset, 7> SWIER7; /* Software Interrupt on line 7 */
        Register::Bit<BASE_ADDRESS + SWIER_Offset, 8> SWIER8; /* Software Interrupt on line 8 */
        Register::Bit<BASE_ADDRESS + SWIER_Offset, 9> SWIER9; /* Software Interrupt on line 9 */
        Register::Bit<BASE_ADDRESS + SWIER_Offset, 10> SWIER10; /* Software Interrupt on line 10 */
        Register::Bit<BASE_ADDRESS + SWIER_Offset, 11> SWIER11; /* Software Interrupt on line 11 */
        Register::Bit<BASE_ADDRESS + SWIER_Offset, 12> SWIER12; /* Software Interrupt on line 12 */
        Register::Bit<BASE_ADDRESS + SWIER_Offset, 13> SWIER13; /* Software Interrupt on line 13 */
        Register::Bit<BASE_ADDRESS + SWIER_Offset, 14> SWIER14; /* Software Interrupt on line 14 */
        Register::Bit<BASE_ADDRESS + SWIER_Offset, 15> SWIER15; /* Software Interrupt on line 15 */
        Register::Bit<BASE_ADDRESS + SWIER_Offset, 16> SWIER16; /* Software Interrupt on line 16 */
        Register::Bit<BASE_ADDRESS + SWIER_Offset, 17> SWIER17; /* Software Interrupt on line 17 */
        Register::Bit<BASE_ADDRESS + SWIER_Offset, 19> SWIER19; /* Software Interrupt on line 19 */
    };

    class PR_T : public Register::Register<EXTI_PR::pr_reg_type, BASE_ADDRESS + PR_Offset> {
    // Pending register (EXTI_PR)
    public:
        Register::Bit<BASE_ADDRESS + PR_Offset, 0> PR0; /* Pending bit 0 */
        Register::Bit<BASE_ADDRESS + PR_Offset, 1> PR1; /* Pending bit 1 */
        Register::Bit<BASE_ADDRESS + PR_Offset, 2> PR2; /* Pending bit 2 */
        Register::Bit<BASE_ADDRESS + PR_Offset, 3> PR3; /* Pending bit 3 */
        Register::Bit<BASE_ADDRESS + PR_Offset, 4> PR4; /* Pending bit 4 */
        Register::Bit<BASE_ADDRESS + PR_Offset, 5> PR5; /* Pending bit 5 */
        Register::Bit<BASE_ADDRESS + PR_Offset, 6> PR6; /* Pending bit 6 */
        Register::Bit<BASE_ADDRESS + PR_Offset, 7> PR7; /* Pending bit 7 */
        Register::Bit<BASE_ADDRESS + PR_Offset, 8> PR8; /* Pending bit 8 */
        Register::Bit<BASE_ADDRESS + PR_Offset, 9> PR9; /* Pending bit 9 */
        Register::Bit<BASE_ADDRESS + PR_Offset, 10> PR10; /* Pending bit 10 */
        Register::Bit<BASE_ADDRESS + PR_Offset, 11> PR11; /* Pending bit 11 */
        Register::Bit<BASE_ADDRESS + PR_Offset, 12> PR12; /* Pending bit 12 */
        Register::Bit<BASE_ADDRESS + PR_Offset, 13> PR13; /* Pending bit 13 */
        Register::Bit<BASE_ADDRESS + PR_Offset, 14> PR14; /* Pending bit 14 */
        Register::Bit<BASE_ADDRESS + PR_Offset, 15> PR15; /* Pending bit 15 */
        Register::Bit<BASE_ADDRESS + PR_Offset, 16> PR16; /* Pending bit 16 */
        Register::Bit<BASE_ADDRESS + PR_Offset, 17> PR17; /* Pending bit 17 */
        Register::Bit<BASE_ADDRESS + PR_Offset, 19> PR19; /* Pending bit 19 */
    };

    IMR_T IMR;
    EMR_T EMR;
    RTSR_T RTSR;
    FTSR_T FTSR;
    SWIER_T SWIER;
    PR_T PR;
};

} // namespace STM32LIB

#endif // STM32F0X1_EXTI_HPP_

