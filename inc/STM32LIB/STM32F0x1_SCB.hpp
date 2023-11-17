#ifndef STM32F0X1_SCB_HPP_
#define STM32F0X1_SCB_HPP_
#pragma once

#include <cstdint>
#include "Register.hpp"

/* System control block */
namespace STM32LIB { 

/* Overwritable types for each of the bitfields.
 * Defaults to uint32_t, but feel free to redefine with your
 * own custom enum class later. */
using CPUID_Revision_T = uint32_t;
using CPUID_PartNo_T = uint32_t;
using CPUID_Constant_T = uint32_t;
using CPUID_Variant_T = uint32_t;
using CPUID_Implementer_T = uint32_t;
using ICSR_VECTACTIVE_T = uint32_t;
using ICSR_VECTPENDING_T = uint32_t;
using AIRCR_VECTKEYSTAT_T = uint32_t;
using SHPR2_PRI_11_T = uint32_t;
using SHPR3_PRI_14_T = uint32_t;
using SHPR3_PRI_15_T = uint32_t;

namespace SCB_CPUID {

    enum class cpuid_reg_type {};

    template<CPUID_Revision_T val>
    using Revision = Register::Combo_Bitfield<cpuid_reg_type, 0, 4, CPUID_Revision_T, val>;

    template<CPUID_PartNo_T val>
    using PartNo = Register::Combo_Bitfield<cpuid_reg_type, 4, 12, CPUID_PartNo_T, val>;

    template<CPUID_Constant_T val>
    using Constant = Register::Combo_Bitfield<cpuid_reg_type, 16, 4, CPUID_Constant_T, val>;

    template<CPUID_Variant_T val>
    using Variant = Register::Combo_Bitfield<cpuid_reg_type, 20, 4, CPUID_Variant_T, val>;

    template<CPUID_Implementer_T val>
    using Implementer = Register::Combo_Bitfield<cpuid_reg_type, 24, 8, CPUID_Implementer_T, val>;

} // SCB_CPUID
namespace SCB_ICSR {

    enum class icsr_reg_type {};

    template<ICSR_VECTACTIVE_T val>
    using VECTACTIVE = Register::Combo_Bitfield<icsr_reg_type, 0, 6, ICSR_VECTACTIVE_T, val>;

    template<ICSR_VECTPENDING_T val>
    using VECTPENDING = Register::Combo_Bitfield<icsr_reg_type, 12, 6, ICSR_VECTPENDING_T, val>;

    template<bool tf>
    using ISRPENDING = Register::Combo_Bit<icsr_reg_type, 22, tf>;

    template<bool tf>
    using PENDSTCLR = Register::Combo_Bit<icsr_reg_type, 25, tf>;

    template<bool tf>
    using PENDSTSET = Register::Combo_Bit<icsr_reg_type, 26, tf>;

    template<bool tf>
    using PENDSVCLR = Register::Combo_Bit<icsr_reg_type, 27, tf>;

    template<bool tf>
    using PENDSVSET = Register::Combo_Bit<icsr_reg_type, 28, tf>;

    template<bool tf>
    using NMIPENDSET = Register::Combo_Bit<icsr_reg_type, 31, tf>;

} // SCB_ICSR
namespace SCB_AIRCR {

    enum class aircr_reg_type {};

    template<bool tf>
    using VECTCLRACTIVE = Register::Combo_Bit<aircr_reg_type, 1, tf>;

    template<bool tf>
    using SYSRESETREQ = Register::Combo_Bit<aircr_reg_type, 2, tf>;

    template<bool tf>
    using ENDIANESS = Register::Combo_Bit<aircr_reg_type, 15, tf>;

    template<AIRCR_VECTKEYSTAT_T val>
    using VECTKEYSTAT = Register::Combo_Bitfield<aircr_reg_type, 16, 16, AIRCR_VECTKEYSTAT_T, val>;

} // SCB_AIRCR
namespace SCB_SCR {

    enum class scr_reg_type {};

    template<bool tf>
    using SLEEPONEXIT = Register::Combo_Bit<scr_reg_type, 1, tf>;

    template<bool tf>
    using SLEEPDEEP = Register::Combo_Bit<scr_reg_type, 2, tf>;

    template<bool tf>
    using SEVEONPEND = Register::Combo_Bit<scr_reg_type, 4, tf>;

} // SCB_SCR
namespace SCB_CCR {

    enum class ccr_reg_type {};

    template<bool tf>
    using UNALIGN__TRP = Register::Combo_Bit<ccr_reg_type, 3, tf>;

    template<bool tf>
    using STKALIGN = Register::Combo_Bit<ccr_reg_type, 9, tf>;

} // SCB_CCR
namespace SCB_SHPR2 {

    enum class shpr2_reg_type {};

    template<SHPR2_PRI_11_T val>
    using PRI_11 = Register::Combo_Bitfield<shpr2_reg_type, 24, 8, SHPR2_PRI_11_T, val>;

} // SCB_SHPR2
namespace SCB_SHPR3 {

    enum class shpr3_reg_type {};

    template<SHPR3_PRI_14_T val>
    using PRI_14 = Register::Combo_Bitfield<shpr3_reg_type, 16, 8, SHPR3_PRI_14_T, val>;

    template<SHPR3_PRI_15_T val>
    using PRI_15 = Register::Combo_Bitfield<shpr3_reg_type, 24, 8, SHPR3_PRI_15_T, val>;

} // SCB_SHPR3
template<uint32_t BASE_ADDRESS>
class SCB {
public:
    static const uint32_t CPUID_Offset = 0x0000;
    static const uint32_t ICSR_Offset = 0x0004;
    static const uint32_t AIRCR_Offset = 0x000C;
    static const uint32_t SCR_Offset = 0x0010;
    static const uint32_t CCR_Offset = 0x0014;
    static const uint32_t SHPR2_Offset = 0x001C;
    static const uint32_t SHPR3_Offset = 0x0020;

    SCB() = default;
    SCB( const SCB& ) = delete;
    const SCB& operator=( const SCB& ) = delete;

    class CPUID_T : public Register::Register<SCB_CPUID::cpuid_reg_type, BASE_ADDRESS + CPUID_Offset> {
    // CPUID base register
    public:
        Register::Bitfield<BASE_ADDRESS + CPUID_Offset, 0, 4, CPUID_Revision_T> Revision; /* Revision number */
        Register::Bitfield<BASE_ADDRESS + CPUID_Offset, 4, 12, CPUID_PartNo_T> PartNo; /* Part number of the processor */
        Register::Bitfield<BASE_ADDRESS + CPUID_Offset, 16, 4, CPUID_Constant_T> Constant; /* Reads as 0xF */
        Register::Bitfield<BASE_ADDRESS + CPUID_Offset, 20, 4, CPUID_Variant_T> Variant; /* Variant number */
        Register::Bitfield<BASE_ADDRESS + CPUID_Offset, 24, 8, CPUID_Implementer_T> Implementer; /* Implementer code */
    };

    class ICSR_T : public Register::Register<SCB_ICSR::icsr_reg_type, BASE_ADDRESS + ICSR_Offset> {
    // Interrupt control and state register
    public:
        Register::Bitfield<BASE_ADDRESS + ICSR_Offset, 0, 6, ICSR_VECTACTIVE_T> VECTACTIVE; /* Active vector */
        Register::Bitfield<BASE_ADDRESS + ICSR_Offset, 12, 6, ICSR_VECTPENDING_T> VECTPENDING; /* Pending vector */
        Register::Bit<BASE_ADDRESS + ICSR_Offset, 22> ISRPENDING; /* Interrupt pending flag */
        Register::Bit<BASE_ADDRESS + ICSR_Offset, 25> PENDSTCLR; /* SysTick exception clear-pending bit */
        Register::Bit<BASE_ADDRESS + ICSR_Offset, 26> PENDSTSET; /* SysTick exception set-pending bit */
        Register::Bit<BASE_ADDRESS + ICSR_Offset, 27> PENDSVCLR; /* PendSV clear-pending bit */
        Register::Bit<BASE_ADDRESS + ICSR_Offset, 28> PENDSVSET; /* PendSV set-pending bit */
        Register::Bit<BASE_ADDRESS + ICSR_Offset, 31> NMIPENDSET; /* NMI set-pending bit. */
    };

    class AIRCR_T : public Register::Register<SCB_AIRCR::aircr_reg_type, BASE_ADDRESS + AIRCR_Offset> {
    // Application interrupt and reset control register
    public:
        Register::Bit<BASE_ADDRESS + AIRCR_Offset, 1> VECTCLRACTIVE; /* VECTCLRACTIVE */
        Register::Bit<BASE_ADDRESS + AIRCR_Offset, 2> SYSRESETREQ; /* SYSRESETREQ */
        Register::Bit<BASE_ADDRESS + AIRCR_Offset, 15> ENDIANESS; /* ENDIANESS */
        Register::Bitfield<BASE_ADDRESS + AIRCR_Offset, 16, 16, AIRCR_VECTKEYSTAT_T> VECTKEYSTAT; /* Register key */
    };

    class SCR_T : public Register::Register<SCB_SCR::scr_reg_type, BASE_ADDRESS + SCR_Offset> {
    // System control register
    public:
        Register::Bit<BASE_ADDRESS + SCR_Offset, 1> SLEEPONEXIT; /* SLEEPONEXIT */
        Register::Bit<BASE_ADDRESS + SCR_Offset, 2> SLEEPDEEP; /* SLEEPDEEP */
        Register::Bit<BASE_ADDRESS + SCR_Offset, 4> SEVEONPEND; /* Send Event on Pending bit */
    };

    class CCR_T : public Register::Register<SCB_CCR::ccr_reg_type, BASE_ADDRESS + CCR_Offset> {
    // Configuration and control register
    public:
        Register::Bit<BASE_ADDRESS + CCR_Offset, 3> UNALIGN__TRP; /* UNALIGN_ TRP */
        Register::Bit<BASE_ADDRESS + CCR_Offset, 9> STKALIGN; /* STKALIGN */
    };

    class SHPR2_T : public Register::Register<SCB_SHPR2::shpr2_reg_type, BASE_ADDRESS + SHPR2_Offset> {
    // System handler priority registers
    public:
        Register::Bitfield<BASE_ADDRESS + SHPR2_Offset, 24, 8, SHPR2_PRI_11_T> PRI_11; /* Priority of system handler 11 */
    };

    class SHPR3_T : public Register::Register<SCB_SHPR3::shpr3_reg_type, BASE_ADDRESS + SHPR3_Offset> {
    // System handler priority registers
    public:
        Register::Bitfield<BASE_ADDRESS + SHPR3_Offset, 16, 8, SHPR3_PRI_14_T> PRI_14; /* Priority of system handler 14 */
        Register::Bitfield<BASE_ADDRESS + SHPR3_Offset, 24, 8, SHPR3_PRI_15_T> PRI_15; /* Priority of system handler 15 */
    };

    CPUID_T CPUID;
    ICSR_T ICSR;
    AIRCR_T AIRCR;
    SCR_T SCR;
    CCR_T CCR;
    SHPR2_T SHPR2;
    SHPR3_T SHPR3;
};

} // namespace STM32LIB

#endif // STM32F0X1_SCB_HPP_

