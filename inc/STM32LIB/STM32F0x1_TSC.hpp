#ifndef STM32F0X1_TSC_HPP_
#define STM32F0X1_TSC_HPP_
#pragma once

#include <cstdint>
#include "Register.hpp"

/* Touch sensing controller */
namespace STM32LIB { 

/* Overwritable types for each of the bitfields.
 * Defaults to uint32_t, but feel free to redefine with your
 * own custom enum class later. */
using CR_CTPH_T = uint32_t;
using CR_CTPL_T = uint32_t;
using CR_SSD_T = uint32_t;
using CR_PGPSC_T = uint32_t;
using CR_MCV_T = uint32_t;
using IOG1CR_CNT_T = uint32_t;
using IOG2CR_CNT_T = uint32_t;
using IOG3CR_CNT_T = uint32_t;
using IOG4CR_CNT_T = uint32_t;
using IOG5CR_CNT_T = uint32_t;
using IOG6CR_CNT_T = uint32_t;

namespace TSC_CR {

    enum class cr_reg_type {};

    template<CR_CTPH_T val>
    using CTPH = Register::Combo_Bitfield<cr_reg_type, 28, 4, CR_CTPH_T, val>;

    template<CR_CTPL_T val>
    using CTPL = Register::Combo_Bitfield<cr_reg_type, 24, 4, CR_CTPL_T, val>;

    template<CR_SSD_T val>
    using SSD = Register::Combo_Bitfield<cr_reg_type, 17, 7, CR_SSD_T, val>;

    template<bool tf>
    using SSE = Register::Combo_Bit<cr_reg_type, 16, tf>;

    template<bool tf>
    using SSPSC = Register::Combo_Bit<cr_reg_type, 15, tf>;

    template<CR_PGPSC_T val>
    using PGPSC = Register::Combo_Bitfield<cr_reg_type, 12, 3, CR_PGPSC_T, val>;

    template<CR_MCV_T val>
    using MCV = Register::Combo_Bitfield<cr_reg_type, 5, 3, CR_MCV_T, val>;

    template<bool tf>
    using IODEF = Register::Combo_Bit<cr_reg_type, 4, tf>;

    template<bool tf>
    using SYNCPOL = Register::Combo_Bit<cr_reg_type, 3, tf>;

    template<bool tf>
    using AM = Register::Combo_Bit<cr_reg_type, 2, tf>;

    template<bool tf>
    using START = Register::Combo_Bit<cr_reg_type, 1, tf>;

    template<bool tf>
    using TSCE = Register::Combo_Bit<cr_reg_type, 0, tf>;

} // TSC_CR
namespace TSC_IER {

    enum class ier_reg_type {};

    template<bool tf>
    using MCEIE = Register::Combo_Bit<ier_reg_type, 1, tf>;

    template<bool tf>
    using EOAIE = Register::Combo_Bit<ier_reg_type, 0, tf>;

} // TSC_IER
namespace TSC_ICR {

    enum class icr_reg_type {};

    template<bool tf>
    using MCEIC = Register::Combo_Bit<icr_reg_type, 1, tf>;

    template<bool tf>
    using EOAIC = Register::Combo_Bit<icr_reg_type, 0, tf>;

} // TSC_ICR
namespace TSC_ISR {

    enum class isr_reg_type {};

    template<bool tf>
    using MCEF = Register::Combo_Bit<isr_reg_type, 1, tf>;

    template<bool tf>
    using EOAF = Register::Combo_Bit<isr_reg_type, 0, tf>;

} // TSC_ISR
namespace TSC_IOHCR {

    enum class iohcr_reg_type {};

    template<bool tf>
    using G6_IO4 = Register::Combo_Bit<iohcr_reg_type, 23, tf>;

    template<bool tf>
    using G6_IO3 = Register::Combo_Bit<iohcr_reg_type, 22, tf>;

    template<bool tf>
    using G6_IO2 = Register::Combo_Bit<iohcr_reg_type, 21, tf>;

    template<bool tf>
    using G6_IO1 = Register::Combo_Bit<iohcr_reg_type, 20, tf>;

    template<bool tf>
    using G5_IO4 = Register::Combo_Bit<iohcr_reg_type, 19, tf>;

    template<bool tf>
    using G5_IO3 = Register::Combo_Bit<iohcr_reg_type, 18, tf>;

    template<bool tf>
    using G5_IO2 = Register::Combo_Bit<iohcr_reg_type, 17, tf>;

    template<bool tf>
    using G5_IO1 = Register::Combo_Bit<iohcr_reg_type, 16, tf>;

    template<bool tf>
    using G4_IO4 = Register::Combo_Bit<iohcr_reg_type, 15, tf>;

    template<bool tf>
    using G4_IO3 = Register::Combo_Bit<iohcr_reg_type, 14, tf>;

    template<bool tf>
    using G4_IO2 = Register::Combo_Bit<iohcr_reg_type, 13, tf>;

    template<bool tf>
    using G4_IO1 = Register::Combo_Bit<iohcr_reg_type, 12, tf>;

    template<bool tf>
    using G3_IO4 = Register::Combo_Bit<iohcr_reg_type, 11, tf>;

    template<bool tf>
    using G3_IO3 = Register::Combo_Bit<iohcr_reg_type, 10, tf>;

    template<bool tf>
    using G3_IO2 = Register::Combo_Bit<iohcr_reg_type, 9, tf>;

    template<bool tf>
    using G3_IO1 = Register::Combo_Bit<iohcr_reg_type, 8, tf>;

    template<bool tf>
    using G2_IO4 = Register::Combo_Bit<iohcr_reg_type, 7, tf>;

    template<bool tf>
    using G2_IO3 = Register::Combo_Bit<iohcr_reg_type, 6, tf>;

    template<bool tf>
    using G2_IO2 = Register::Combo_Bit<iohcr_reg_type, 5, tf>;

    template<bool tf>
    using G2_IO1 = Register::Combo_Bit<iohcr_reg_type, 4, tf>;

    template<bool tf>
    using G1_IO4 = Register::Combo_Bit<iohcr_reg_type, 3, tf>;

    template<bool tf>
    using G1_IO3 = Register::Combo_Bit<iohcr_reg_type, 2, tf>;

    template<bool tf>
    using G1_IO2 = Register::Combo_Bit<iohcr_reg_type, 1, tf>;

    template<bool tf>
    using G1_IO1 = Register::Combo_Bit<iohcr_reg_type, 0, tf>;

} // TSC_IOHCR
namespace TSC_IOASCR {

    enum class ioascr_reg_type {};

    template<bool tf>
    using G6_IO4 = Register::Combo_Bit<ioascr_reg_type, 23, tf>;

    template<bool tf>
    using G6_IO3 = Register::Combo_Bit<ioascr_reg_type, 22, tf>;

    template<bool tf>
    using G6_IO2 = Register::Combo_Bit<ioascr_reg_type, 21, tf>;

    template<bool tf>
    using G6_IO1 = Register::Combo_Bit<ioascr_reg_type, 20, tf>;

    template<bool tf>
    using G5_IO4 = Register::Combo_Bit<ioascr_reg_type, 19, tf>;

    template<bool tf>
    using G5_IO3 = Register::Combo_Bit<ioascr_reg_type, 18, tf>;

    template<bool tf>
    using G5_IO2 = Register::Combo_Bit<ioascr_reg_type, 17, tf>;

    template<bool tf>
    using G5_IO1 = Register::Combo_Bit<ioascr_reg_type, 16, tf>;

    template<bool tf>
    using G4_IO4 = Register::Combo_Bit<ioascr_reg_type, 15, tf>;

    template<bool tf>
    using G4_IO3 = Register::Combo_Bit<ioascr_reg_type, 14, tf>;

    template<bool tf>
    using G4_IO2 = Register::Combo_Bit<ioascr_reg_type, 13, tf>;

    template<bool tf>
    using G4_IO1 = Register::Combo_Bit<ioascr_reg_type, 12, tf>;

    template<bool tf>
    using G3_IO4 = Register::Combo_Bit<ioascr_reg_type, 11, tf>;

    template<bool tf>
    using G3_IO3 = Register::Combo_Bit<ioascr_reg_type, 10, tf>;

    template<bool tf>
    using G3_IO2 = Register::Combo_Bit<ioascr_reg_type, 9, tf>;

    template<bool tf>
    using G3_IO1 = Register::Combo_Bit<ioascr_reg_type, 8, tf>;

    template<bool tf>
    using G2_IO4 = Register::Combo_Bit<ioascr_reg_type, 7, tf>;

    template<bool tf>
    using G2_IO3 = Register::Combo_Bit<ioascr_reg_type, 6, tf>;

    template<bool tf>
    using G2_IO2 = Register::Combo_Bit<ioascr_reg_type, 5, tf>;

    template<bool tf>
    using G2_IO1 = Register::Combo_Bit<ioascr_reg_type, 4, tf>;

    template<bool tf>
    using G1_IO4 = Register::Combo_Bit<ioascr_reg_type, 3, tf>;

    template<bool tf>
    using G1_IO3 = Register::Combo_Bit<ioascr_reg_type, 2, tf>;

    template<bool tf>
    using G1_IO2 = Register::Combo_Bit<ioascr_reg_type, 1, tf>;

    template<bool tf>
    using G1_IO1 = Register::Combo_Bit<ioascr_reg_type, 0, tf>;

} // TSC_IOASCR
namespace TSC_IOSCR {

    enum class ioscr_reg_type {};

    template<bool tf>
    using G6_IO4 = Register::Combo_Bit<ioscr_reg_type, 23, tf>;

    template<bool tf>
    using G6_IO3 = Register::Combo_Bit<ioscr_reg_type, 22, tf>;

    template<bool tf>
    using G6_IO2 = Register::Combo_Bit<ioscr_reg_type, 21, tf>;

    template<bool tf>
    using G6_IO1 = Register::Combo_Bit<ioscr_reg_type, 20, tf>;

    template<bool tf>
    using G5_IO4 = Register::Combo_Bit<ioscr_reg_type, 19, tf>;

    template<bool tf>
    using G5_IO3 = Register::Combo_Bit<ioscr_reg_type, 18, tf>;

    template<bool tf>
    using G5_IO2 = Register::Combo_Bit<ioscr_reg_type, 17, tf>;

    template<bool tf>
    using G5_IO1 = Register::Combo_Bit<ioscr_reg_type, 16, tf>;

    template<bool tf>
    using G4_IO4 = Register::Combo_Bit<ioscr_reg_type, 15, tf>;

    template<bool tf>
    using G4_IO3 = Register::Combo_Bit<ioscr_reg_type, 14, tf>;

    template<bool tf>
    using G4_IO2 = Register::Combo_Bit<ioscr_reg_type, 13, tf>;

    template<bool tf>
    using G4_IO1 = Register::Combo_Bit<ioscr_reg_type, 12, tf>;

    template<bool tf>
    using G3_IO4 = Register::Combo_Bit<ioscr_reg_type, 11, tf>;

    template<bool tf>
    using G3_IO3 = Register::Combo_Bit<ioscr_reg_type, 10, tf>;

    template<bool tf>
    using G3_IO2 = Register::Combo_Bit<ioscr_reg_type, 9, tf>;

    template<bool tf>
    using G3_IO1 = Register::Combo_Bit<ioscr_reg_type, 8, tf>;

    template<bool tf>
    using G2_IO4 = Register::Combo_Bit<ioscr_reg_type, 7, tf>;

    template<bool tf>
    using G2_IO3 = Register::Combo_Bit<ioscr_reg_type, 6, tf>;

    template<bool tf>
    using G2_IO2 = Register::Combo_Bit<ioscr_reg_type, 5, tf>;

    template<bool tf>
    using G2_IO1 = Register::Combo_Bit<ioscr_reg_type, 4, tf>;

    template<bool tf>
    using G1_IO4 = Register::Combo_Bit<ioscr_reg_type, 3, tf>;

    template<bool tf>
    using G1_IO3 = Register::Combo_Bit<ioscr_reg_type, 2, tf>;

    template<bool tf>
    using G1_IO2 = Register::Combo_Bit<ioscr_reg_type, 1, tf>;

    template<bool tf>
    using G1_IO1 = Register::Combo_Bit<ioscr_reg_type, 0, tf>;

} // TSC_IOSCR
namespace TSC_IOCCR {

    enum class ioccr_reg_type {};

    template<bool tf>
    using G6_IO4 = Register::Combo_Bit<ioccr_reg_type, 23, tf>;

    template<bool tf>
    using G6_IO3 = Register::Combo_Bit<ioccr_reg_type, 22, tf>;

    template<bool tf>
    using G6_IO2 = Register::Combo_Bit<ioccr_reg_type, 21, tf>;

    template<bool tf>
    using G6_IO1 = Register::Combo_Bit<ioccr_reg_type, 20, tf>;

    template<bool tf>
    using G5_IO4 = Register::Combo_Bit<ioccr_reg_type, 19, tf>;

    template<bool tf>
    using G5_IO3 = Register::Combo_Bit<ioccr_reg_type, 18, tf>;

    template<bool tf>
    using G5_IO2 = Register::Combo_Bit<ioccr_reg_type, 17, tf>;

    template<bool tf>
    using G5_IO1 = Register::Combo_Bit<ioccr_reg_type, 16, tf>;

    template<bool tf>
    using G4_IO4 = Register::Combo_Bit<ioccr_reg_type, 15, tf>;

    template<bool tf>
    using G4_IO3 = Register::Combo_Bit<ioccr_reg_type, 14, tf>;

    template<bool tf>
    using G4_IO2 = Register::Combo_Bit<ioccr_reg_type, 13, tf>;

    template<bool tf>
    using G4_IO1 = Register::Combo_Bit<ioccr_reg_type, 12, tf>;

    template<bool tf>
    using G3_IO4 = Register::Combo_Bit<ioccr_reg_type, 11, tf>;

    template<bool tf>
    using G3_IO3 = Register::Combo_Bit<ioccr_reg_type, 10, tf>;

    template<bool tf>
    using G3_IO2 = Register::Combo_Bit<ioccr_reg_type, 9, tf>;

    template<bool tf>
    using G3_IO1 = Register::Combo_Bit<ioccr_reg_type, 8, tf>;

    template<bool tf>
    using G2_IO4 = Register::Combo_Bit<ioccr_reg_type, 7, tf>;

    template<bool tf>
    using G2_IO3 = Register::Combo_Bit<ioccr_reg_type, 6, tf>;

    template<bool tf>
    using G2_IO2 = Register::Combo_Bit<ioccr_reg_type, 5, tf>;

    template<bool tf>
    using G2_IO1 = Register::Combo_Bit<ioccr_reg_type, 4, tf>;

    template<bool tf>
    using G1_IO4 = Register::Combo_Bit<ioccr_reg_type, 3, tf>;

    template<bool tf>
    using G1_IO3 = Register::Combo_Bit<ioccr_reg_type, 2, tf>;

    template<bool tf>
    using G1_IO2 = Register::Combo_Bit<ioccr_reg_type, 1, tf>;

    template<bool tf>
    using G1_IO1 = Register::Combo_Bit<ioccr_reg_type, 0, tf>;

} // TSC_IOCCR
namespace TSC_IOGCSR {

    enum class iogcsr_reg_type {};

    template<bool tf>
    using G8S = Register::Combo_Bit<iogcsr_reg_type, 23, tf>;

    template<bool tf>
    using G7S = Register::Combo_Bit<iogcsr_reg_type, 22, tf>;

    template<bool tf>
    using G6S = Register::Combo_Bit<iogcsr_reg_type, 21, tf>;

    template<bool tf>
    using G5S = Register::Combo_Bit<iogcsr_reg_type, 20, tf>;

    template<bool tf>
    using G4S = Register::Combo_Bit<iogcsr_reg_type, 19, tf>;

    template<bool tf>
    using G3S = Register::Combo_Bit<iogcsr_reg_type, 18, tf>;

    template<bool tf>
    using G2S = Register::Combo_Bit<iogcsr_reg_type, 17, tf>;

    template<bool tf>
    using G1S = Register::Combo_Bit<iogcsr_reg_type, 16, tf>;

    template<bool tf>
    using G8E = Register::Combo_Bit<iogcsr_reg_type, 7, tf>;

    template<bool tf>
    using G7E = Register::Combo_Bit<iogcsr_reg_type, 6, tf>;

    template<bool tf>
    using G6E = Register::Combo_Bit<iogcsr_reg_type, 5, tf>;

    template<bool tf>
    using G5E = Register::Combo_Bit<iogcsr_reg_type, 4, tf>;

    template<bool tf>
    using G4E = Register::Combo_Bit<iogcsr_reg_type, 3, tf>;

    template<bool tf>
    using G3E = Register::Combo_Bit<iogcsr_reg_type, 2, tf>;

    template<bool tf>
    using G2E = Register::Combo_Bit<iogcsr_reg_type, 1, tf>;

    template<bool tf>
    using G1E = Register::Combo_Bit<iogcsr_reg_type, 0, tf>;

} // TSC_IOGCSR
namespace TSC_IOG1CR {

    enum class iog1cr_reg_type {};

    template<IOG1CR_CNT_T val>
    using CNT = Register::Combo_Bitfield<iog1cr_reg_type, 0, 14, IOG1CR_CNT_T, val>;

} // TSC_IOG1CR
namespace TSC_IOG2CR {

    enum class iog2cr_reg_type {};

    template<IOG2CR_CNT_T val>
    using CNT = Register::Combo_Bitfield<iog2cr_reg_type, 0, 14, IOG2CR_CNT_T, val>;

} // TSC_IOG2CR
namespace TSC_IOG3CR {

    enum class iog3cr_reg_type {};

    template<IOG3CR_CNT_T val>
    using CNT = Register::Combo_Bitfield<iog3cr_reg_type, 0, 14, IOG3CR_CNT_T, val>;

} // TSC_IOG3CR
namespace TSC_IOG4CR {

    enum class iog4cr_reg_type {};

    template<IOG4CR_CNT_T val>
    using CNT = Register::Combo_Bitfield<iog4cr_reg_type, 0, 14, IOG4CR_CNT_T, val>;

} // TSC_IOG4CR
namespace TSC_IOG5CR {

    enum class iog5cr_reg_type {};

    template<IOG5CR_CNT_T val>
    using CNT = Register::Combo_Bitfield<iog5cr_reg_type, 0, 14, IOG5CR_CNT_T, val>;

} // TSC_IOG5CR
namespace TSC_IOG6CR {

    enum class iog6cr_reg_type {};

    template<IOG6CR_CNT_T val>
    using CNT = Register::Combo_Bitfield<iog6cr_reg_type, 0, 14, IOG6CR_CNT_T, val>;

} // TSC_IOG6CR
template<uint32_t BASE_ADDRESS>
class TSC {
public:
    static const uint32_t CR_Offset = 0x0000;
    static const uint32_t IER_Offset = 0x0004;
    static const uint32_t ICR_Offset = 0x0008;
    static const uint32_t ISR_Offset = 0x000C;
    static const uint32_t IOHCR_Offset = 0x0010;
    static const uint32_t IOASCR_Offset = 0x0018;
    static const uint32_t IOSCR_Offset = 0x0020;
    static const uint32_t IOCCR_Offset = 0x0028;
    static const uint32_t IOGCSR_Offset = 0x0030;
    static const uint32_t IOG1CR_Offset = 0x0034;
    static const uint32_t IOG2CR_Offset = 0x0038;
    static const uint32_t IOG3CR_Offset = 0x003C;
    static const uint32_t IOG4CR_Offset = 0x0040;
    static const uint32_t IOG5CR_Offset = 0x0044;
    static const uint32_t IOG6CR_Offset = 0x0048;

    TSC() = default;
    TSC( const TSC& ) = delete;
    const TSC& operator=( const TSC& ) = delete;

    class CR_T : public Register::Register<TSC_CR::cr_reg_type, BASE_ADDRESS + CR_Offset> {
    // control register
    public:
        Register::Bitfield<BASE_ADDRESS + CR_Offset, 28, 4, CR_CTPH_T> CTPH; /* Charge transfer pulse high */
        Register::Bitfield<BASE_ADDRESS + CR_Offset, 24, 4, CR_CTPL_T> CTPL; /* Charge transfer pulse low */
        Register::Bitfield<BASE_ADDRESS + CR_Offset, 17, 7, CR_SSD_T> SSD; /* Spread spectrum deviation */
        Register::Bit<BASE_ADDRESS + CR_Offset, 16> SSE; /* Spread spectrum enable */
        Register::Bit<BASE_ADDRESS + CR_Offset, 15> SSPSC; /* Spread spectrum prescaler */
        Register::Bitfield<BASE_ADDRESS + CR_Offset, 12, 3, CR_PGPSC_T> PGPSC; /* pulse generator prescaler */
        Register::Bitfield<BASE_ADDRESS + CR_Offset, 5, 3, CR_MCV_T> MCV; /* Max count value */
        Register::Bit<BASE_ADDRESS + CR_Offset, 4> IODEF; /* I/O Default mode */
        Register::Bit<BASE_ADDRESS + CR_Offset, 3> SYNCPOL; /* Synchronization pin polarity */
        Register::Bit<BASE_ADDRESS + CR_Offset, 2> AM; /* Acquisition mode */
        Register::Bit<BASE_ADDRESS + CR_Offset, 1> START; /* Start a new acquisition */
        Register::Bit<BASE_ADDRESS + CR_Offset, 0> TSCE; /* Touch sensing controller enable */
    };

    class IER_T : public Register::Register<TSC_IER::ier_reg_type, BASE_ADDRESS + IER_Offset> {
    // interrupt enable register
    public:
        Register::Bit<BASE_ADDRESS + IER_Offset, 1> MCEIE; /* Max count error interrupt enable */
        Register::Bit<BASE_ADDRESS + IER_Offset, 0> EOAIE; /* End of acquisition interrupt enable */
    };

    class ICR_T : public Register::Register<TSC_ICR::icr_reg_type, BASE_ADDRESS + ICR_Offset> {
    // interrupt clear register
    public:
        Register::Bit<BASE_ADDRESS + ICR_Offset, 1> MCEIC; /* Max count error interrupt clear */
        Register::Bit<BASE_ADDRESS + ICR_Offset, 0> EOAIC; /* End of acquisition interrupt clear */
    };

    class ISR_T : public Register::Register<TSC_ISR::isr_reg_type, BASE_ADDRESS + ISR_Offset> {
    // interrupt status register
    public:
        Register::Bit<BASE_ADDRESS + ISR_Offset, 1> MCEF; /* Max count error flag */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 0> EOAF; /* End of acquisition flag */
    };

    class IOHCR_T : public Register::Register<TSC_IOHCR::iohcr_reg_type, BASE_ADDRESS + IOHCR_Offset> {
    // I/O hysteresis control register
    public:
        Register::Bit<BASE_ADDRESS + IOHCR_Offset, 23> G6_IO4; /* G6_IO4 Schmitt trigger hysteresis mode */
        Register::Bit<BASE_ADDRESS + IOHCR_Offset, 22> G6_IO3; /* G6_IO3 Schmitt trigger hysteresis mode */
        Register::Bit<BASE_ADDRESS + IOHCR_Offset, 21> G6_IO2; /* G6_IO2 Schmitt trigger hysteresis mode */
        Register::Bit<BASE_ADDRESS + IOHCR_Offset, 20> G6_IO1; /* G6_IO1 Schmitt trigger hysteresis mode */
        Register::Bit<BASE_ADDRESS + IOHCR_Offset, 19> G5_IO4; /* G5_IO4 Schmitt trigger hysteresis mode */
        Register::Bit<BASE_ADDRESS + IOHCR_Offset, 18> G5_IO3; /* G5_IO3 Schmitt trigger hysteresis mode */
        Register::Bit<BASE_ADDRESS + IOHCR_Offset, 17> G5_IO2; /* G5_IO2 Schmitt trigger hysteresis mode */
        Register::Bit<BASE_ADDRESS + IOHCR_Offset, 16> G5_IO1; /* G5_IO1 Schmitt trigger hysteresis mode */
        Register::Bit<BASE_ADDRESS + IOHCR_Offset, 15> G4_IO4; /* G4_IO4 Schmitt trigger hysteresis mode */
        Register::Bit<BASE_ADDRESS + IOHCR_Offset, 14> G4_IO3; /* G4_IO3 Schmitt trigger hysteresis mode */
        Register::Bit<BASE_ADDRESS + IOHCR_Offset, 13> G4_IO2; /* G4_IO2 Schmitt trigger hysteresis mode */
        Register::Bit<BASE_ADDRESS + IOHCR_Offset, 12> G4_IO1; /* G4_IO1 Schmitt trigger hysteresis mode */
        Register::Bit<BASE_ADDRESS + IOHCR_Offset, 11> G3_IO4; /* G3_IO4 Schmitt trigger hysteresis mode */
        Register::Bit<BASE_ADDRESS + IOHCR_Offset, 10> G3_IO3; /* G3_IO3 Schmitt trigger hysteresis mode */
        Register::Bit<BASE_ADDRESS + IOHCR_Offset, 9> G3_IO2; /* G3_IO2 Schmitt trigger hysteresis mode */
        Register::Bit<BASE_ADDRESS + IOHCR_Offset, 8> G3_IO1; /* G3_IO1 Schmitt trigger hysteresis mode */
        Register::Bit<BASE_ADDRESS + IOHCR_Offset, 7> G2_IO4; /* G2_IO4 Schmitt trigger hysteresis mode */
        Register::Bit<BASE_ADDRESS + IOHCR_Offset, 6> G2_IO3; /* G2_IO3 Schmitt trigger hysteresis mode */
        Register::Bit<BASE_ADDRESS + IOHCR_Offset, 5> G2_IO2; /* G2_IO2 Schmitt trigger hysteresis mode */
        Register::Bit<BASE_ADDRESS + IOHCR_Offset, 4> G2_IO1; /* G2_IO1 Schmitt trigger hysteresis mode */
        Register::Bit<BASE_ADDRESS + IOHCR_Offset, 3> G1_IO4; /* G1_IO4 Schmitt trigger hysteresis mode */
        Register::Bit<BASE_ADDRESS + IOHCR_Offset, 2> G1_IO3; /* G1_IO3 Schmitt trigger hysteresis mode */
        Register::Bit<BASE_ADDRESS + IOHCR_Offset, 1> G1_IO2; /* G1_IO2 Schmitt trigger hysteresis mode */
        Register::Bit<BASE_ADDRESS + IOHCR_Offset, 0> G1_IO1; /* G1_IO1 Schmitt trigger hysteresis mode */
    };

    class IOASCR_T : public Register::Register<TSC_IOASCR::ioascr_reg_type, BASE_ADDRESS + IOASCR_Offset> {
    // I/O analog switch control register
    public:
        Register::Bit<BASE_ADDRESS + IOASCR_Offset, 23> G6_IO4; /* G6_IO4 analog switch enable */
        Register::Bit<BASE_ADDRESS + IOASCR_Offset, 22> G6_IO3; /* G6_IO3 analog switch enable */
        Register::Bit<BASE_ADDRESS + IOASCR_Offset, 21> G6_IO2; /* G6_IO2 analog switch enable */
        Register::Bit<BASE_ADDRESS + IOASCR_Offset, 20> G6_IO1; /* G6_IO1 analog switch enable */
        Register::Bit<BASE_ADDRESS + IOASCR_Offset, 19> G5_IO4; /* G5_IO4 analog switch enable */
        Register::Bit<BASE_ADDRESS + IOASCR_Offset, 18> G5_IO3; /* G5_IO3 analog switch enable */
        Register::Bit<BASE_ADDRESS + IOASCR_Offset, 17> G5_IO2; /* G5_IO2 analog switch enable */
        Register::Bit<BASE_ADDRESS + IOASCR_Offset, 16> G5_IO1; /* G5_IO1 analog switch enable */
        Register::Bit<BASE_ADDRESS + IOASCR_Offset, 15> G4_IO4; /* G4_IO4 analog switch enable */
        Register::Bit<BASE_ADDRESS + IOASCR_Offset, 14> G4_IO3; /* G4_IO3 analog switch enable */
        Register::Bit<BASE_ADDRESS + IOASCR_Offset, 13> G4_IO2; /* G4_IO2 analog switch enable */
        Register::Bit<BASE_ADDRESS + IOASCR_Offset, 12> G4_IO1; /* G4_IO1 analog switch enable */
        Register::Bit<BASE_ADDRESS + IOASCR_Offset, 11> G3_IO4; /* G3_IO4 analog switch enable */
        Register::Bit<BASE_ADDRESS + IOASCR_Offset, 10> G3_IO3; /* G3_IO3 analog switch enable */
        Register::Bit<BASE_ADDRESS + IOASCR_Offset, 9> G3_IO2; /* G3_IO2 analog switch enable */
        Register::Bit<BASE_ADDRESS + IOASCR_Offset, 8> G3_IO1; /* G3_IO1 analog switch enable */
        Register::Bit<BASE_ADDRESS + IOASCR_Offset, 7> G2_IO4; /* G2_IO4 analog switch enable */
        Register::Bit<BASE_ADDRESS + IOASCR_Offset, 6> G2_IO3; /* G2_IO3 analog switch enable */
        Register::Bit<BASE_ADDRESS + IOASCR_Offset, 5> G2_IO2; /* G2_IO2 analog switch enable */
        Register::Bit<BASE_ADDRESS + IOASCR_Offset, 4> G2_IO1; /* G2_IO1 analog switch enable */
        Register::Bit<BASE_ADDRESS + IOASCR_Offset, 3> G1_IO4; /* G1_IO4 analog switch enable */
        Register::Bit<BASE_ADDRESS + IOASCR_Offset, 2> G1_IO3; /* G1_IO3 analog switch enable */
        Register::Bit<BASE_ADDRESS + IOASCR_Offset, 1> G1_IO2; /* G1_IO2 analog switch enable */
        Register::Bit<BASE_ADDRESS + IOASCR_Offset, 0> G1_IO1; /* G1_IO1 analog switch enable */
    };

    class IOSCR_T : public Register::Register<TSC_IOSCR::ioscr_reg_type, BASE_ADDRESS + IOSCR_Offset> {
    // I/O sampling control register
    public:
        Register::Bit<BASE_ADDRESS + IOSCR_Offset, 23> G6_IO4; /* G6_IO4 sampling mode */
        Register::Bit<BASE_ADDRESS + IOSCR_Offset, 22> G6_IO3; /* G6_IO3 sampling mode */
        Register::Bit<BASE_ADDRESS + IOSCR_Offset, 21> G6_IO2; /* G6_IO2 sampling mode */
        Register::Bit<BASE_ADDRESS + IOSCR_Offset, 20> G6_IO1; /* G6_IO1 sampling mode */
        Register::Bit<BASE_ADDRESS + IOSCR_Offset, 19> G5_IO4; /* G5_IO4 sampling mode */
        Register::Bit<BASE_ADDRESS + IOSCR_Offset, 18> G5_IO3; /* G5_IO3 sampling mode */
        Register::Bit<BASE_ADDRESS + IOSCR_Offset, 17> G5_IO2; /* G5_IO2 sampling mode */
        Register::Bit<BASE_ADDRESS + IOSCR_Offset, 16> G5_IO1; /* G5_IO1 sampling mode */
        Register::Bit<BASE_ADDRESS + IOSCR_Offset, 15> G4_IO4; /* G4_IO4 sampling mode */
        Register::Bit<BASE_ADDRESS + IOSCR_Offset, 14> G4_IO3; /* G4_IO3 sampling mode */
        Register::Bit<BASE_ADDRESS + IOSCR_Offset, 13> G4_IO2; /* G4_IO2 sampling mode */
        Register::Bit<BASE_ADDRESS + IOSCR_Offset, 12> G4_IO1; /* G4_IO1 sampling mode */
        Register::Bit<BASE_ADDRESS + IOSCR_Offset, 11> G3_IO4; /* G3_IO4 sampling mode */
        Register::Bit<BASE_ADDRESS + IOSCR_Offset, 10> G3_IO3; /* G3_IO3 sampling mode */
        Register::Bit<BASE_ADDRESS + IOSCR_Offset, 9> G3_IO2; /* G3_IO2 sampling mode */
        Register::Bit<BASE_ADDRESS + IOSCR_Offset, 8> G3_IO1; /* G3_IO1 sampling mode */
        Register::Bit<BASE_ADDRESS + IOSCR_Offset, 7> G2_IO4; /* G2_IO4 sampling mode */
        Register::Bit<BASE_ADDRESS + IOSCR_Offset, 6> G2_IO3; /* G2_IO3 sampling mode */
        Register::Bit<BASE_ADDRESS + IOSCR_Offset, 5> G2_IO2; /* G2_IO2 sampling mode */
        Register::Bit<BASE_ADDRESS + IOSCR_Offset, 4> G2_IO1; /* G2_IO1 sampling mode */
        Register::Bit<BASE_ADDRESS + IOSCR_Offset, 3> G1_IO4; /* G1_IO4 sampling mode */
        Register::Bit<BASE_ADDRESS + IOSCR_Offset, 2> G1_IO3; /* G1_IO3 sampling mode */
        Register::Bit<BASE_ADDRESS + IOSCR_Offset, 1> G1_IO2; /* G1_IO2 sampling mode */
        Register::Bit<BASE_ADDRESS + IOSCR_Offset, 0> G1_IO1; /* G1_IO1 sampling mode */
    };

    class IOCCR_T : public Register::Register<TSC_IOCCR::ioccr_reg_type, BASE_ADDRESS + IOCCR_Offset> {
    // I/O channel control register
    public:
        Register::Bit<BASE_ADDRESS + IOCCR_Offset, 23> G6_IO4; /* G6_IO4 channel mode */
        Register::Bit<BASE_ADDRESS + IOCCR_Offset, 22> G6_IO3; /* G6_IO3 channel mode */
        Register::Bit<BASE_ADDRESS + IOCCR_Offset, 21> G6_IO2; /* G6_IO2 channel mode */
        Register::Bit<BASE_ADDRESS + IOCCR_Offset, 20> G6_IO1; /* G6_IO1 channel mode */
        Register::Bit<BASE_ADDRESS + IOCCR_Offset, 19> G5_IO4; /* G5_IO4 channel mode */
        Register::Bit<BASE_ADDRESS + IOCCR_Offset, 18> G5_IO3; /* G5_IO3 channel mode */
        Register::Bit<BASE_ADDRESS + IOCCR_Offset, 17> G5_IO2; /* G5_IO2 channel mode */
        Register::Bit<BASE_ADDRESS + IOCCR_Offset, 16> G5_IO1; /* G5_IO1 channel mode */
        Register::Bit<BASE_ADDRESS + IOCCR_Offset, 15> G4_IO4; /* G4_IO4 channel mode */
        Register::Bit<BASE_ADDRESS + IOCCR_Offset, 14> G4_IO3; /* G4_IO3 channel mode */
        Register::Bit<BASE_ADDRESS + IOCCR_Offset, 13> G4_IO2; /* G4_IO2 channel mode */
        Register::Bit<BASE_ADDRESS + IOCCR_Offset, 12> G4_IO1; /* G4_IO1 channel mode */
        Register::Bit<BASE_ADDRESS + IOCCR_Offset, 11> G3_IO4; /* G3_IO4 channel mode */
        Register::Bit<BASE_ADDRESS + IOCCR_Offset, 10> G3_IO3; /* G3_IO3 channel mode */
        Register::Bit<BASE_ADDRESS + IOCCR_Offset, 9> G3_IO2; /* G3_IO2 channel mode */
        Register::Bit<BASE_ADDRESS + IOCCR_Offset, 8> G3_IO1; /* G3_IO1 channel mode */
        Register::Bit<BASE_ADDRESS + IOCCR_Offset, 7> G2_IO4; /* G2_IO4 channel mode */
        Register::Bit<BASE_ADDRESS + IOCCR_Offset, 6> G2_IO3; /* G2_IO3 channel mode */
        Register::Bit<BASE_ADDRESS + IOCCR_Offset, 5> G2_IO2; /* G2_IO2 channel mode */
        Register::Bit<BASE_ADDRESS + IOCCR_Offset, 4> G2_IO1; /* G2_IO1 channel mode */
        Register::Bit<BASE_ADDRESS + IOCCR_Offset, 3> G1_IO4; /* G1_IO4 channel mode */
        Register::Bit<BASE_ADDRESS + IOCCR_Offset, 2> G1_IO3; /* G1_IO3 channel mode */
        Register::Bit<BASE_ADDRESS + IOCCR_Offset, 1> G1_IO2; /* G1_IO2 channel mode */
        Register::Bit<BASE_ADDRESS + IOCCR_Offset, 0> G1_IO1; /* G1_IO1 channel mode */
    };

    class IOGCSR_T : public Register::Register<TSC_IOGCSR::iogcsr_reg_type, BASE_ADDRESS + IOGCSR_Offset> {
    // I/O group control status register
    public:
        Register::Bit<BASE_ADDRESS + IOGCSR_Offset, 23> G8S; /* Analog I/O group x status */
        Register::Bit<BASE_ADDRESS + IOGCSR_Offset, 22> G7S; /* Analog I/O group x status */
        Register::Bit<BASE_ADDRESS + IOGCSR_Offset, 21> G6S; /* Analog I/O group x status */
        Register::Bit<BASE_ADDRESS + IOGCSR_Offset, 20> G5S; /* Analog I/O group x status */
        Register::Bit<BASE_ADDRESS + IOGCSR_Offset, 19> G4S; /* Analog I/O group x status */
        Register::Bit<BASE_ADDRESS + IOGCSR_Offset, 18> G3S; /* Analog I/O group x status */
        Register::Bit<BASE_ADDRESS + IOGCSR_Offset, 17> G2S; /* Analog I/O group x status */
        Register::Bit<BASE_ADDRESS + IOGCSR_Offset, 16> G1S; /* Analog I/O group x status */
        Register::Bit<BASE_ADDRESS + IOGCSR_Offset, 7> G8E; /* Analog I/O group x enable */
        Register::Bit<BASE_ADDRESS + IOGCSR_Offset, 6> G7E; /* Analog I/O group x enable */
        Register::Bit<BASE_ADDRESS + IOGCSR_Offset, 5> G6E; /* Analog I/O group x enable */
        Register::Bit<BASE_ADDRESS + IOGCSR_Offset, 4> G5E; /* Analog I/O group x enable */
        Register::Bit<BASE_ADDRESS + IOGCSR_Offset, 3> G4E; /* Analog I/O group x enable */
        Register::Bit<BASE_ADDRESS + IOGCSR_Offset, 2> G3E; /* Analog I/O group x enable */
        Register::Bit<BASE_ADDRESS + IOGCSR_Offset, 1> G2E; /* Analog I/O group x enable */
        Register::Bit<BASE_ADDRESS + IOGCSR_Offset, 0> G1E; /* Analog I/O group x enable */
    };

    class IOG1CR_T : public Register::Register<TSC_IOG1CR::iog1cr_reg_type, BASE_ADDRESS + IOG1CR_Offset> {
    // I/O group x counter register
    public:
        Register::Bitfield<BASE_ADDRESS + IOG1CR_Offset, 0, 14, IOG1CR_CNT_T> CNT; /* Counter value */
    };

    class IOG2CR_T : public Register::Register<TSC_IOG2CR::iog2cr_reg_type, BASE_ADDRESS + IOG2CR_Offset> {
    // I/O group x counter register
    public:
        Register::Bitfield<BASE_ADDRESS + IOG2CR_Offset, 0, 14, IOG2CR_CNT_T> CNT; /* Counter value */
    };

    class IOG3CR_T : public Register::Register<TSC_IOG3CR::iog3cr_reg_type, BASE_ADDRESS + IOG3CR_Offset> {
    // I/O group x counter register
    public:
        Register::Bitfield<BASE_ADDRESS + IOG3CR_Offset, 0, 14, IOG3CR_CNT_T> CNT; /* Counter value */
    };

    class IOG4CR_T : public Register::Register<TSC_IOG4CR::iog4cr_reg_type, BASE_ADDRESS + IOG4CR_Offset> {
    // I/O group x counter register
    public:
        Register::Bitfield<BASE_ADDRESS + IOG4CR_Offset, 0, 14, IOG4CR_CNT_T> CNT; /* Counter value */
    };

    class IOG5CR_T : public Register::Register<TSC_IOG5CR::iog5cr_reg_type, BASE_ADDRESS + IOG5CR_Offset> {
    // I/O group x counter register
    public:
        Register::Bitfield<BASE_ADDRESS + IOG5CR_Offset, 0, 14, IOG5CR_CNT_T> CNT; /* Counter value */
    };

    class IOG6CR_T : public Register::Register<TSC_IOG6CR::iog6cr_reg_type, BASE_ADDRESS + IOG6CR_Offset> {
    // I/O group x counter register
    public:
        Register::Bitfield<BASE_ADDRESS + IOG6CR_Offset, 0, 14, IOG6CR_CNT_T> CNT; /* Counter value */
    };

    CR_T CR;
    IER_T IER;
    ICR_T ICR;
    ISR_T ISR;
    IOHCR_T IOHCR;
    IOASCR_T IOASCR;
    IOSCR_T IOSCR;
    IOCCR_T IOCCR;
    IOGCSR_T IOGCSR;
    IOG1CR_T IOG1CR;
    IOG2CR_T IOG2CR;
    IOG3CR_T IOG3CR;
    IOG4CR_T IOG4CR;
    IOG5CR_T IOG5CR;
    IOG6CR_T IOG6CR;
};

} // namespace STM32LIB

#endif // STM32F0X1_TSC_HPP_

