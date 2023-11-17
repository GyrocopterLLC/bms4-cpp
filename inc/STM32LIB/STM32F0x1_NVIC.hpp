#ifndef STM32F0X1_NVIC_HPP_
#define STM32F0X1_NVIC_HPP_
#pragma once

#include <cstdint>
#include "Register.hpp"

/* Nested Vectored Interrupt Controller */
namespace STM32LIB { 

/* Overwritable types for each of the bitfields.
 * Defaults to uint32_t, but feel free to redefine with your
 * own custom enum class later. */
using ISER_SETENA_T = uint32_t;
using ICER_CLRENA_T = uint32_t;
using ISPR_SETPEND_T = uint32_t;
using ICPR_CLRPEND_T = uint32_t;
using IPR0_PRI_00_T = uint32_t;
using IPR0_PRI_01_T = uint32_t;
using IPR0_PRI_02_T = uint32_t;
using IPR0_PRI_03_T = uint32_t;
using IPR1_PRI_40_T = uint32_t;
using IPR1_PRI_41_T = uint32_t;
using IPR1_PRI_42_T = uint32_t;
using IPR1_PRI_43_T = uint32_t;
using IPR2_PRI_80_T = uint32_t;
using IPR2_PRI_81_T = uint32_t;
using IPR2_PRI_82_T = uint32_t;
using IPR2_PRI_83_T = uint32_t;
using IPR3_PRI_120_T = uint32_t;
using IPR3_PRI_121_T = uint32_t;
using IPR3_PRI_122_T = uint32_t;
using IPR3_PRI_123_T = uint32_t;
using IPR4_PRI_160_T = uint32_t;
using IPR4_PRI_161_T = uint32_t;
using IPR4_PRI_162_T = uint32_t;
using IPR4_PRI_163_T = uint32_t;
using IPR5_PRI_200_T = uint32_t;
using IPR5_PRI_201_T = uint32_t;
using IPR5_PRI_202_T = uint32_t;
using IPR5_PRI_203_T = uint32_t;
using IPR6_PRI_240_T = uint32_t;
using IPR6_PRI_241_T = uint32_t;
using IPR6_PRI_242_T = uint32_t;
using IPR6_PRI_243_T = uint32_t;
using IPR7_PRI_280_T = uint32_t;
using IPR7_PRI_281_T = uint32_t;
using IPR7_PRI_282_T = uint32_t;
using IPR7_PRI_283_T = uint32_t;

namespace NVIC_ISER {

    enum class iser_reg_type {};

    template<ISER_SETENA_T val>
    using SETENA = Register::Combo_Bitfield<iser_reg_type, 0, 32, ISER_SETENA_T, val>;

} // NVIC_ISER
namespace NVIC_ICER {

    enum class icer_reg_type {};

    template<ICER_CLRENA_T val>
    using CLRENA = Register::Combo_Bitfield<icer_reg_type, 0, 32, ICER_CLRENA_T, val>;

} // NVIC_ICER
namespace NVIC_ISPR {

    enum class ispr_reg_type {};

    template<ISPR_SETPEND_T val>
    using SETPEND = Register::Combo_Bitfield<ispr_reg_type, 0, 32, ISPR_SETPEND_T, val>;

} // NVIC_ISPR
namespace NVIC_ICPR {

    enum class icpr_reg_type {};

    template<ICPR_CLRPEND_T val>
    using CLRPEND = Register::Combo_Bitfield<icpr_reg_type, 0, 32, ICPR_CLRPEND_T, val>;

} // NVIC_ICPR
namespace NVIC_IPR0 {

    enum class ipr0_reg_type {};

    template<IPR0_PRI_00_T val>
    using PRI_00 = Register::Combo_Bitfield<ipr0_reg_type, 6, 2, IPR0_PRI_00_T, val>;

    template<IPR0_PRI_01_T val>
    using PRI_01 = Register::Combo_Bitfield<ipr0_reg_type, 14, 2, IPR0_PRI_01_T, val>;

    template<IPR0_PRI_02_T val>
    using PRI_02 = Register::Combo_Bitfield<ipr0_reg_type, 22, 2, IPR0_PRI_02_T, val>;

    template<IPR0_PRI_03_T val>
    using PRI_03 = Register::Combo_Bitfield<ipr0_reg_type, 30, 2, IPR0_PRI_03_T, val>;

} // NVIC_IPR0
namespace NVIC_IPR1 {

    enum class ipr1_reg_type {};

    template<IPR1_PRI_40_T val>
    using PRI_40 = Register::Combo_Bitfield<ipr1_reg_type, 6, 2, IPR1_PRI_40_T, val>;

    template<IPR1_PRI_41_T val>
    using PRI_41 = Register::Combo_Bitfield<ipr1_reg_type, 14, 2, IPR1_PRI_41_T, val>;

    template<IPR1_PRI_42_T val>
    using PRI_42 = Register::Combo_Bitfield<ipr1_reg_type, 22, 2, IPR1_PRI_42_T, val>;

    template<IPR1_PRI_43_T val>
    using PRI_43 = Register::Combo_Bitfield<ipr1_reg_type, 30, 2, IPR1_PRI_43_T, val>;

} // NVIC_IPR1
namespace NVIC_IPR2 {

    enum class ipr2_reg_type {};

    template<IPR2_PRI_80_T val>
    using PRI_80 = Register::Combo_Bitfield<ipr2_reg_type, 6, 2, IPR2_PRI_80_T, val>;

    template<IPR2_PRI_81_T val>
    using PRI_81 = Register::Combo_Bitfield<ipr2_reg_type, 14, 2, IPR2_PRI_81_T, val>;

    template<IPR2_PRI_82_T val>
    using PRI_82 = Register::Combo_Bitfield<ipr2_reg_type, 22, 2, IPR2_PRI_82_T, val>;

    template<IPR2_PRI_83_T val>
    using PRI_83 = Register::Combo_Bitfield<ipr2_reg_type, 30, 2, IPR2_PRI_83_T, val>;

} // NVIC_IPR2
namespace NVIC_IPR3 {

    enum class ipr3_reg_type {};

    template<IPR3_PRI_120_T val>
    using PRI_120 = Register::Combo_Bitfield<ipr3_reg_type, 6, 2, IPR3_PRI_120_T, val>;

    template<IPR3_PRI_121_T val>
    using PRI_121 = Register::Combo_Bitfield<ipr3_reg_type, 14, 2, IPR3_PRI_121_T, val>;

    template<IPR3_PRI_122_T val>
    using PRI_122 = Register::Combo_Bitfield<ipr3_reg_type, 22, 2, IPR3_PRI_122_T, val>;

    template<IPR3_PRI_123_T val>
    using PRI_123 = Register::Combo_Bitfield<ipr3_reg_type, 30, 2, IPR3_PRI_123_T, val>;

} // NVIC_IPR3
namespace NVIC_IPR4 {

    enum class ipr4_reg_type {};

    template<IPR4_PRI_160_T val>
    using PRI_160 = Register::Combo_Bitfield<ipr4_reg_type, 6, 2, IPR4_PRI_160_T, val>;

    template<IPR4_PRI_161_T val>
    using PRI_161 = Register::Combo_Bitfield<ipr4_reg_type, 14, 2, IPR4_PRI_161_T, val>;

    template<IPR4_PRI_162_T val>
    using PRI_162 = Register::Combo_Bitfield<ipr4_reg_type, 22, 2, IPR4_PRI_162_T, val>;

    template<IPR4_PRI_163_T val>
    using PRI_163 = Register::Combo_Bitfield<ipr4_reg_type, 30, 2, IPR4_PRI_163_T, val>;

} // NVIC_IPR4
namespace NVIC_IPR5 {

    enum class ipr5_reg_type {};

    template<IPR5_PRI_200_T val>
    using PRI_200 = Register::Combo_Bitfield<ipr5_reg_type, 6, 2, IPR5_PRI_200_T, val>;

    template<IPR5_PRI_201_T val>
    using PRI_201 = Register::Combo_Bitfield<ipr5_reg_type, 14, 2, IPR5_PRI_201_T, val>;

    template<IPR5_PRI_202_T val>
    using PRI_202 = Register::Combo_Bitfield<ipr5_reg_type, 22, 2, IPR5_PRI_202_T, val>;

    template<IPR5_PRI_203_T val>
    using PRI_203 = Register::Combo_Bitfield<ipr5_reg_type, 30, 2, IPR5_PRI_203_T, val>;

} // NVIC_IPR5
namespace NVIC_IPR6 {

    enum class ipr6_reg_type {};

    template<IPR6_PRI_240_T val>
    using PRI_240 = Register::Combo_Bitfield<ipr6_reg_type, 6, 2, IPR6_PRI_240_T, val>;

    template<IPR6_PRI_241_T val>
    using PRI_241 = Register::Combo_Bitfield<ipr6_reg_type, 14, 2, IPR6_PRI_241_T, val>;

    template<IPR6_PRI_242_T val>
    using PRI_242 = Register::Combo_Bitfield<ipr6_reg_type, 22, 2, IPR6_PRI_242_T, val>;

    template<IPR6_PRI_243_T val>
    using PRI_243 = Register::Combo_Bitfield<ipr6_reg_type, 30, 2, IPR6_PRI_243_T, val>;

} // NVIC_IPR6
namespace NVIC_IPR7 {

    enum class ipr7_reg_type {};

    template<IPR7_PRI_280_T val>
    using PRI_280 = Register::Combo_Bitfield<ipr7_reg_type, 6, 2, IPR7_PRI_280_T, val>;

    template<IPR7_PRI_281_T val>
    using PRI_281 = Register::Combo_Bitfield<ipr7_reg_type, 14, 2, IPR7_PRI_281_T, val>;

    template<IPR7_PRI_282_T val>
    using PRI_282 = Register::Combo_Bitfield<ipr7_reg_type, 22, 2, IPR7_PRI_282_T, val>;

    template<IPR7_PRI_283_T val>
    using PRI_283 = Register::Combo_Bitfield<ipr7_reg_type, 30, 2, IPR7_PRI_283_T, val>;

} // NVIC_IPR7
template<uint32_t BASE_ADDRESS>
class NVIC {
public:
    static const uint32_t ISER_Offset = 0x0000;
    static const uint32_t ICER_Offset = 0x0080;
    static const uint32_t ISPR_Offset = 0x0100;
    static const uint32_t ICPR_Offset = 0x0180;
    static const uint32_t IPR0_Offset = 0x0300;
    static const uint32_t IPR1_Offset = 0x0304;
    static const uint32_t IPR2_Offset = 0x0308;
    static const uint32_t IPR3_Offset = 0x030C;
    static const uint32_t IPR4_Offset = 0x0310;
    static const uint32_t IPR5_Offset = 0x0314;
    static const uint32_t IPR6_Offset = 0x0318;
    static const uint32_t IPR7_Offset = 0x031C;

    NVIC() = default;
    NVIC( const NVIC& ) = delete;
    const NVIC& operator=( const NVIC& ) = delete;

    class ISER_T : public Register::Register<NVIC_ISER::iser_reg_type, BASE_ADDRESS + ISER_Offset> {
    // Interrupt Set Enable Register
    public:
        Register::Bitfield<BASE_ADDRESS + ISER_Offset, 0, 32, ISER_SETENA_T> SETENA; /* SETENA */
    };

    class ICER_T : public Register::Register<NVIC_ICER::icer_reg_type, BASE_ADDRESS + ICER_Offset> {
    // Interrupt Clear Enable Register
    public:
        Register::Bitfield<BASE_ADDRESS + ICER_Offset, 0, 32, ICER_CLRENA_T> CLRENA; /* CLRENA */
    };

    class ISPR_T : public Register::Register<NVIC_ISPR::ispr_reg_type, BASE_ADDRESS + ISPR_Offset> {
    // Interrupt Set-Pending Register
    public:
        Register::Bitfield<BASE_ADDRESS + ISPR_Offset, 0, 32, ISPR_SETPEND_T> SETPEND; /* SETPEND */
    };

    class ICPR_T : public Register::Register<NVIC_ICPR::icpr_reg_type, BASE_ADDRESS + ICPR_Offset> {
    // Interrupt Clear-Pending Register
    public:
        Register::Bitfield<BASE_ADDRESS + ICPR_Offset, 0, 32, ICPR_CLRPEND_T> CLRPEND; /* CLRPEND */
    };

    class IPR0_T : public Register::Register<NVIC_IPR0::ipr0_reg_type, BASE_ADDRESS + IPR0_Offset> {
    // Interrupt Priority Register 0
    public:
        Register::Bitfield<BASE_ADDRESS + IPR0_Offset, 6, 2, IPR0_PRI_00_T> PRI_00; /* PRI_00 */
        Register::Bitfield<BASE_ADDRESS + IPR0_Offset, 14, 2, IPR0_PRI_01_T> PRI_01; /* PRI_01 */
        Register::Bitfield<BASE_ADDRESS + IPR0_Offset, 22, 2, IPR0_PRI_02_T> PRI_02; /* PRI_02 */
        Register::Bitfield<BASE_ADDRESS + IPR0_Offset, 30, 2, IPR0_PRI_03_T> PRI_03; /* PRI_03 */
    };

    class IPR1_T : public Register::Register<NVIC_IPR1::ipr1_reg_type, BASE_ADDRESS + IPR1_Offset> {
    // Interrupt Priority Register 1
    public:
        Register::Bitfield<BASE_ADDRESS + IPR1_Offset, 6, 2, IPR1_PRI_40_T> PRI_40; /* PRI_40 */
        Register::Bitfield<BASE_ADDRESS + IPR1_Offset, 14, 2, IPR1_PRI_41_T> PRI_41; /* PRI_41 */
        Register::Bitfield<BASE_ADDRESS + IPR1_Offset, 22, 2, IPR1_PRI_42_T> PRI_42; /* PRI_42 */
        Register::Bitfield<BASE_ADDRESS + IPR1_Offset, 30, 2, IPR1_PRI_43_T> PRI_43; /* PRI_43 */
    };

    class IPR2_T : public Register::Register<NVIC_IPR2::ipr2_reg_type, BASE_ADDRESS + IPR2_Offset> {
    // Interrupt Priority Register 2
    public:
        Register::Bitfield<BASE_ADDRESS + IPR2_Offset, 6, 2, IPR2_PRI_80_T> PRI_80; /* PRI_80 */
        Register::Bitfield<BASE_ADDRESS + IPR2_Offset, 14, 2, IPR2_PRI_81_T> PRI_81; /* PRI_81 */
        Register::Bitfield<BASE_ADDRESS + IPR2_Offset, 22, 2, IPR2_PRI_82_T> PRI_82; /* PRI_82 */
        Register::Bitfield<BASE_ADDRESS + IPR2_Offset, 30, 2, IPR2_PRI_83_T> PRI_83; /* PRI_83 */
    };

    class IPR3_T : public Register::Register<NVIC_IPR3::ipr3_reg_type, BASE_ADDRESS + IPR3_Offset> {
    // Interrupt Priority Register 3
    public:
        Register::Bitfield<BASE_ADDRESS + IPR3_Offset, 6, 2, IPR3_PRI_120_T> PRI_120; /* PRI_120 */
        Register::Bitfield<BASE_ADDRESS + IPR3_Offset, 14, 2, IPR3_PRI_121_T> PRI_121; /* PRI_121 */
        Register::Bitfield<BASE_ADDRESS + IPR3_Offset, 22, 2, IPR3_PRI_122_T> PRI_122; /* PRI_122 */
        Register::Bitfield<BASE_ADDRESS + IPR3_Offset, 30, 2, IPR3_PRI_123_T> PRI_123; /* PRI_123 */
    };

    class IPR4_T : public Register::Register<NVIC_IPR4::ipr4_reg_type, BASE_ADDRESS + IPR4_Offset> {
    // Interrupt Priority Register 4
    public:
        Register::Bitfield<BASE_ADDRESS + IPR4_Offset, 6, 2, IPR4_PRI_160_T> PRI_160; /* PRI_160 */
        Register::Bitfield<BASE_ADDRESS + IPR4_Offset, 14, 2, IPR4_PRI_161_T> PRI_161; /* PRI_161 */
        Register::Bitfield<BASE_ADDRESS + IPR4_Offset, 22, 2, IPR4_PRI_162_T> PRI_162; /* PRI_162 */
        Register::Bitfield<BASE_ADDRESS + IPR4_Offset, 30, 2, IPR4_PRI_163_T> PRI_163; /* PRI_163 */
    };

    class IPR5_T : public Register::Register<NVIC_IPR5::ipr5_reg_type, BASE_ADDRESS + IPR5_Offset> {
    // Interrupt Priority Register 5
    public:
        Register::Bitfield<BASE_ADDRESS + IPR5_Offset, 6, 2, IPR5_PRI_200_T> PRI_200; /* PRI_200 */
        Register::Bitfield<BASE_ADDRESS + IPR5_Offset, 14, 2, IPR5_PRI_201_T> PRI_201; /* PRI_201 */
        Register::Bitfield<BASE_ADDRESS + IPR5_Offset, 22, 2, IPR5_PRI_202_T> PRI_202; /* PRI_202 */
        Register::Bitfield<BASE_ADDRESS + IPR5_Offset, 30, 2, IPR5_PRI_203_T> PRI_203; /* PRI_203 */
    };

    class IPR6_T : public Register::Register<NVIC_IPR6::ipr6_reg_type, BASE_ADDRESS + IPR6_Offset> {
    // Interrupt Priority Register 6
    public:
        Register::Bitfield<BASE_ADDRESS + IPR6_Offset, 6, 2, IPR6_PRI_240_T> PRI_240; /* PRI_240 */
        Register::Bitfield<BASE_ADDRESS + IPR6_Offset, 14, 2, IPR6_PRI_241_T> PRI_241; /* PRI_241 */
        Register::Bitfield<BASE_ADDRESS + IPR6_Offset, 22, 2, IPR6_PRI_242_T> PRI_242; /* PRI_242 */
        Register::Bitfield<BASE_ADDRESS + IPR6_Offset, 30, 2, IPR6_PRI_243_T> PRI_243; /* PRI_243 */
    };

    class IPR7_T : public Register::Register<NVIC_IPR7::ipr7_reg_type, BASE_ADDRESS + IPR7_Offset> {
    // Interrupt Priority Register 7
    public:
        Register::Bitfield<BASE_ADDRESS + IPR7_Offset, 6, 2, IPR7_PRI_280_T> PRI_280; /* PRI_280 */
        Register::Bitfield<BASE_ADDRESS + IPR7_Offset, 14, 2, IPR7_PRI_281_T> PRI_281; /* PRI_281 */
        Register::Bitfield<BASE_ADDRESS + IPR7_Offset, 22, 2, IPR7_PRI_282_T> PRI_282; /* PRI_282 */
        Register::Bitfield<BASE_ADDRESS + IPR7_Offset, 30, 2, IPR7_PRI_283_T> PRI_283; /* PRI_283 */
    };

    ISER_T ISER;
    ICER_T ICER;
    ISPR_T ISPR;
    ICPR_T ICPR;
    IPR0_T IPR0;
    IPR1_T IPR1;
    IPR2_T IPR2;
    IPR3_T IPR3;
    IPR4_T IPR4;
    IPR5_T IPR5;
    IPR6_T IPR6;
    IPR7_T IPR7;
};

} // namespace STM32LIB

#endif // STM32F0X1_NVIC_HPP_

