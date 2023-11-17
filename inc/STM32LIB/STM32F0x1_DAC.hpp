#ifndef STM32F0X1_DAC_HPP_
#define STM32F0X1_DAC_HPP_
#pragma once

#include <cstdint>
#include "Register.hpp"

/* Digital-to-analog converter */
namespace STM32LIB { 

/* Overwritable types for each of the bitfields.
 * Defaults to uint32_t, but feel free to redefine with your
 * own custom enum class later. */
using CR_TSEL1_T = uint32_t;
using CR_WAVE1_T = uint32_t;
using CR_MAMP1_T = uint32_t;
using CR_TSEL2_T = uint32_t;
using CR_WAVE2_T = uint32_t;
using CR_MAMP2_T = uint32_t;
using DHR12R1_DACC1DHR_T = uint32_t;
using DHR12L1_DACC1DHR_T = uint32_t;
using DHR8R1_DACC1DHR_T = uint32_t;
using DHR12R2_DACC2DHR_T = uint32_t;
using DHR12L2_DACC2DHR_T = uint32_t;
using DHR8R2_DACC2DHR_T = uint32_t;
using DHR12RD_DACC1DHR_T = uint32_t;
using DHR12RD_DACC2DHR_T = uint32_t;
using DHR12LD_DACC1DHR_T = uint32_t;
using DHR12LD_DACC2DHR_T = uint32_t;
using DHR8RD_DACC2DHR_T = uint32_t;
using DHR8RD_DACC1DHR_T = uint32_t;
using DOR1_DACC1DOR_T = uint32_t;
using DOR2_DACC2DOR_T = uint32_t;

namespace DAC_CR {

    enum class cr_reg_type {};

    template<bool tf>
    using EN1 = Register::Combo_Bit<cr_reg_type, 0, tf>;

    template<bool tf>
    using BOFF1 = Register::Combo_Bit<cr_reg_type, 1, tf>;

    template<bool tf>
    using TEN1 = Register::Combo_Bit<cr_reg_type, 2, tf>;

    template<CR_TSEL1_T val>
    using TSEL1 = Register::Combo_Bitfield<cr_reg_type, 3, 3, CR_TSEL1_T, val>;

    template<CR_WAVE1_T val>
    using WAVE1 = Register::Combo_Bitfield<cr_reg_type, 6, 2, CR_WAVE1_T, val>;

    template<CR_MAMP1_T val>
    using MAMP1 = Register::Combo_Bitfield<cr_reg_type, 8, 4, CR_MAMP1_T, val>;

    template<bool tf>
    using DMAEN1 = Register::Combo_Bit<cr_reg_type, 12, tf>;

    template<bool tf>
    using DMAUDRIE1 = Register::Combo_Bit<cr_reg_type, 13, tf>;

    template<bool tf>
    using EN2 = Register::Combo_Bit<cr_reg_type, 16, tf>;

    template<bool tf>
    using BOFF2 = Register::Combo_Bit<cr_reg_type, 17, tf>;

    template<bool tf>
    using TEN2 = Register::Combo_Bit<cr_reg_type, 18, tf>;

    template<CR_TSEL2_T val>
    using TSEL2 = Register::Combo_Bitfield<cr_reg_type, 19, 3, CR_TSEL2_T, val>;

    template<CR_WAVE2_T val>
    using WAVE2 = Register::Combo_Bitfield<cr_reg_type, 22, 2, CR_WAVE2_T, val>;

    template<CR_MAMP2_T val>
    using MAMP2 = Register::Combo_Bitfield<cr_reg_type, 24, 4, CR_MAMP2_T, val>;

    template<bool tf>
    using DMAEN2 = Register::Combo_Bit<cr_reg_type, 28, tf>;

    template<bool tf>
    using DMAUDRIE2 = Register::Combo_Bit<cr_reg_type, 29, tf>;

} // DAC_CR
namespace DAC_SWTRIGR {

    enum class swtrigr_reg_type {};

    template<bool tf>
    using SWTRIG1 = Register::Combo_Bit<swtrigr_reg_type, 0, tf>;

    template<bool tf>
    using SWTRIG2 = Register::Combo_Bit<swtrigr_reg_type, 1, tf>;

} // DAC_SWTRIGR
namespace DAC_DHR12R1 {

    enum class dhr12r1_reg_type {};

    template<DHR12R1_DACC1DHR_T val>
    using DACC1DHR = Register::Combo_Bitfield<dhr12r1_reg_type, 0, 12, DHR12R1_DACC1DHR_T, val>;

} // DAC_DHR12R1
namespace DAC_DHR12L1 {

    enum class dhr12l1_reg_type {};

    template<DHR12L1_DACC1DHR_T val>
    using DACC1DHR = Register::Combo_Bitfield<dhr12l1_reg_type, 4, 12, DHR12L1_DACC1DHR_T, val>;

} // DAC_DHR12L1
namespace DAC_DHR8R1 {

    enum class dhr8r1_reg_type {};

    template<DHR8R1_DACC1DHR_T val>
    using DACC1DHR = Register::Combo_Bitfield<dhr8r1_reg_type, 0, 8, DHR8R1_DACC1DHR_T, val>;

} // DAC_DHR8R1
namespace DAC_DHR12R2 {

    enum class dhr12r2_reg_type {};

    template<DHR12R2_DACC2DHR_T val>
    using DACC2DHR = Register::Combo_Bitfield<dhr12r2_reg_type, 0, 12, DHR12R2_DACC2DHR_T, val>;

} // DAC_DHR12R2
namespace DAC_DHR12L2 {

    enum class dhr12l2_reg_type {};

    template<DHR12L2_DACC2DHR_T val>
    using DACC2DHR = Register::Combo_Bitfield<dhr12l2_reg_type, 4, 12, DHR12L2_DACC2DHR_T, val>;

} // DAC_DHR12L2
namespace DAC_DHR8R2 {

    enum class dhr8r2_reg_type {};

    template<DHR8R2_DACC2DHR_T val>
    using DACC2DHR = Register::Combo_Bitfield<dhr8r2_reg_type, 0, 8, DHR8R2_DACC2DHR_T, val>;

} // DAC_DHR8R2
namespace DAC_DHR12RD {

    enum class dhr12rd_reg_type {};

    template<DHR12RD_DACC1DHR_T val>
    using DACC1DHR = Register::Combo_Bitfield<dhr12rd_reg_type, 0, 12, DHR12RD_DACC1DHR_T, val>;

    template<DHR12RD_DACC2DHR_T val>
    using DACC2DHR = Register::Combo_Bitfield<dhr12rd_reg_type, 16, 12, DHR12RD_DACC2DHR_T, val>;

} // DAC_DHR12RD
namespace DAC_DHR12LD {

    enum class dhr12ld_reg_type {};

    template<DHR12LD_DACC1DHR_T val>
    using DACC1DHR = Register::Combo_Bitfield<dhr12ld_reg_type, 4, 12, DHR12LD_DACC1DHR_T, val>;

    template<DHR12LD_DACC2DHR_T val>
    using DACC2DHR = Register::Combo_Bitfield<dhr12ld_reg_type, 20, 12, DHR12LD_DACC2DHR_T, val>;

} // DAC_DHR12LD
namespace DAC_DHR8RD {

    enum class dhr8rd_reg_type {};

    template<DHR8RD_DACC2DHR_T val>
    using DACC2DHR = Register::Combo_Bitfield<dhr8rd_reg_type, 8, 8, DHR8RD_DACC2DHR_T, val>;

    template<DHR8RD_DACC1DHR_T val>
    using DACC1DHR = Register::Combo_Bitfield<dhr8rd_reg_type, 0, 8, DHR8RD_DACC1DHR_T, val>;

} // DAC_DHR8RD
namespace DAC_DOR1 {

    enum class dor1_reg_type {};

    template<DOR1_DACC1DOR_T val>
    using DACC1DOR = Register::Combo_Bitfield<dor1_reg_type, 0, 12, DOR1_DACC1DOR_T, val>;

} // DAC_DOR1
namespace DAC_DOR2 {

    enum class dor2_reg_type {};

    template<DOR2_DACC2DOR_T val>
    using DACC2DOR = Register::Combo_Bitfield<dor2_reg_type, 0, 12, DOR2_DACC2DOR_T, val>;

} // DAC_DOR2
namespace DAC_SR {

    enum class sr_reg_type {};

    template<bool tf>
    using DMAUDR2 = Register::Combo_Bit<sr_reg_type, 29, tf>;

    template<bool tf>
    using DMAUDR1 = Register::Combo_Bit<sr_reg_type, 13, tf>;

} // DAC_SR
template<uint32_t BASE_ADDRESS>
class DAC {
public:
    static const uint32_t CR_Offset = 0x0000;
    static const uint32_t SWTRIGR_Offset = 0x0004;
    static const uint32_t DHR12R1_Offset = 0x0008;
    static const uint32_t DHR12L1_Offset = 0x000C;
    static const uint32_t DHR8R1_Offset = 0x0010;
    static const uint32_t DHR12R2_Offset = 0x0014;
    static const uint32_t DHR12L2_Offset = 0x0018;
    static const uint32_t DHR8R2_Offset = 0x001C;
    static const uint32_t DHR12RD_Offset = 0x0020;
    static const uint32_t DHR12LD_Offset = 0x0024;
    static const uint32_t DHR8RD_Offset = 0x0028;
    static const uint32_t DOR1_Offset = 0x002C;
    static const uint32_t DOR2_Offset = 0x0030;
    static const uint32_t SR_Offset = 0x0034;

    DAC() = default;
    DAC( const DAC& ) = delete;
    const DAC& operator=( const DAC& ) = delete;

    class CR_T : public Register::Register<DAC_CR::cr_reg_type, BASE_ADDRESS + CR_Offset> {
    // control register
    public:
        Register::Bit<BASE_ADDRESS + CR_Offset, 0> EN1; /* DAC channel1 enable */
        Register::Bit<BASE_ADDRESS + CR_Offset, 1> BOFF1; /* DAC channel1 output buffer disable */
        Register::Bit<BASE_ADDRESS + CR_Offset, 2> TEN1; /* DAC channel1 trigger enable */
        Register::Bitfield<BASE_ADDRESS + CR_Offset, 3, 3, CR_TSEL1_T> TSEL1; /* DAC channel1 trigger selection */
        Register::Bitfield<BASE_ADDRESS + CR_Offset, 6, 2, CR_WAVE1_T> WAVE1; /* DAC channel1 noise/triangle wave generation enable */
        Register::Bitfield<BASE_ADDRESS + CR_Offset, 8, 4, CR_MAMP1_T> MAMP1; /* DAC channel1 mask/amplitude selector */
        Register::Bit<BASE_ADDRESS + CR_Offset, 12> DMAEN1; /* DAC channel1 DMA enable */
        Register::Bit<BASE_ADDRESS + CR_Offset, 13> DMAUDRIE1; /* DAC channel1 DMA Underrun Interrupt enable */
        Register::Bit<BASE_ADDRESS + CR_Offset, 16> EN2; /* DAC channel2 enable */
        Register::Bit<BASE_ADDRESS + CR_Offset, 17> BOFF2; /* DAC channel2 output buffer disable */
        Register::Bit<BASE_ADDRESS + CR_Offset, 18> TEN2; /* DAC channel2 trigger enable */
        Register::Bitfield<BASE_ADDRESS + CR_Offset, 19, 3, CR_TSEL2_T> TSEL2; /* DAC channel2 trigger selection */
        Register::Bitfield<BASE_ADDRESS + CR_Offset, 22, 2, CR_WAVE2_T> WAVE2; /* DAC channel2 noise/triangle wave generation enable */
        Register::Bitfield<BASE_ADDRESS + CR_Offset, 24, 4, CR_MAMP2_T> MAMP2; /* DAC channel2 mask/amplitude selector */
        Register::Bit<BASE_ADDRESS + CR_Offset, 28> DMAEN2; /* DAC channel2 DMA enable */
        Register::Bit<BASE_ADDRESS + CR_Offset, 29> DMAUDRIE2; /* DAC channel2 DMA underrun interrupt enable */
    };

    class SWTRIGR_T : public Register::Register<DAC_SWTRIGR::swtrigr_reg_type, BASE_ADDRESS + SWTRIGR_Offset> {
    // software trigger register
    public:
        Register::Bit<BASE_ADDRESS + SWTRIGR_Offset, 0> SWTRIG1; /* DAC channel1 software trigger */
        Register::Bit<BASE_ADDRESS + SWTRIGR_Offset, 1> SWTRIG2; /* DAC channel2 software trigger */
    };

    class DHR12R1_T : public Register::Register<DAC_DHR12R1::dhr12r1_reg_type, BASE_ADDRESS + DHR12R1_Offset> {
    // channel1 12-bit right-aligned data holding register
    public:
        Register::Bitfield<BASE_ADDRESS + DHR12R1_Offset, 0, 12, DHR12R1_DACC1DHR_T> DACC1DHR; /* DAC channel1 12-bit right-aligned data */
    };

    class DHR12L1_T : public Register::Register<DAC_DHR12L1::dhr12l1_reg_type, BASE_ADDRESS + DHR12L1_Offset> {
    // channel1 12-bit left aligned data holding register
    public:
        Register::Bitfield<BASE_ADDRESS + DHR12L1_Offset, 4, 12, DHR12L1_DACC1DHR_T> DACC1DHR; /* DAC channel1 12-bit left-aligned data */
    };

    class DHR8R1_T : public Register::Register<DAC_DHR8R1::dhr8r1_reg_type, BASE_ADDRESS + DHR8R1_Offset> {
    // channel1 8-bit right aligned data holding register
    public:
        Register::Bitfield<BASE_ADDRESS + DHR8R1_Offset, 0, 8, DHR8R1_DACC1DHR_T> DACC1DHR; /* DAC channel1 8-bit right-aligned data */
    };

    class DHR12R2_T : public Register::Register<DAC_DHR12R2::dhr12r2_reg_type, BASE_ADDRESS + DHR12R2_Offset> {
    // DAC channel2 12-bit right-aligned data holding register
    public:
        Register::Bitfield<BASE_ADDRESS + DHR12R2_Offset, 0, 12, DHR12R2_DACC2DHR_T> DACC2DHR; /* DAC channel2 12-bit right-aligned data */
    };

    class DHR12L2_T : public Register::Register<DAC_DHR12L2::dhr12l2_reg_type, BASE_ADDRESS + DHR12L2_Offset> {
    // DAC channel2 12-bit left-aligned data holding register
    public:
        Register::Bitfield<BASE_ADDRESS + DHR12L2_Offset, 4, 12, DHR12L2_DACC2DHR_T> DACC2DHR; /* DAC channel2 12-bit left-aligned data */
    };

    class DHR8R2_T : public Register::Register<DAC_DHR8R2::dhr8r2_reg_type, BASE_ADDRESS + DHR8R2_Offset> {
    // DAC channel2 8-bit right-aligned data holding register
    public:
        Register::Bitfield<BASE_ADDRESS + DHR8R2_Offset, 0, 8, DHR8R2_DACC2DHR_T> DACC2DHR; /* DAC channel2 8-bit right-aligned data */
    };

    class DHR12RD_T : public Register::Register<DAC_DHR12RD::dhr12rd_reg_type, BASE_ADDRESS + DHR12RD_Offset> {
    // DHR12RD
    public:
        Register::Bitfield<BASE_ADDRESS + DHR12RD_Offset, 0, 12, DHR12RD_DACC1DHR_T> DACC1DHR; /* DAC channel1 12-bit right-aligned data */
        Register::Bitfield<BASE_ADDRESS + DHR12RD_Offset, 16, 12, DHR12RD_DACC2DHR_T> DACC2DHR; /* DAC channel2 12-bit right-aligned data */
    };

    class DHR12LD_T : public Register::Register<DAC_DHR12LD::dhr12ld_reg_type, BASE_ADDRESS + DHR12LD_Offset> {
    // Dual DAC 12-bit left-aligned data holding register
    public:
        Register::Bitfield<BASE_ADDRESS + DHR12LD_Offset, 4, 12, DHR12LD_DACC1DHR_T> DACC1DHR; /* DAC channel1 12-bit left-aligned data */
        Register::Bitfield<BASE_ADDRESS + DHR12LD_Offset, 20, 12, DHR12LD_DACC2DHR_T> DACC2DHR; /* DAC channel2 12-bit left-aligned data */
    };

    class DHR8RD_T : public Register::Register<DAC_DHR8RD::dhr8rd_reg_type, BASE_ADDRESS + DHR8RD_Offset> {
    // Dual DAC 8-bit right-aligned data holding register
    public:
        Register::Bitfield<BASE_ADDRESS + DHR8RD_Offset, 8, 8, DHR8RD_DACC2DHR_T> DACC2DHR; /* DAC channel2 8-bit right-aligned data */
        Register::Bitfield<BASE_ADDRESS + DHR8RD_Offset, 0, 8, DHR8RD_DACC1DHR_T> DACC1DHR; /* DAC channel1 8-bit right-aligned data */
    };

    class DOR1_T : public Register::Register<DAC_DOR1::dor1_reg_type, BASE_ADDRESS + DOR1_Offset> {
    // channel1 data output register
    public:
        Register::Bitfield<BASE_ADDRESS + DOR1_Offset, 0, 12, DOR1_DACC1DOR_T> DACC1DOR; /* DAC channel1 data output */
    };

    class DOR2_T : public Register::Register<DAC_DOR2::dor2_reg_type, BASE_ADDRESS + DOR2_Offset> {
    // DAC channel2 data output register
    public:
        Register::Bitfield<BASE_ADDRESS + DOR2_Offset, 0, 12, DOR2_DACC2DOR_T> DACC2DOR; /* DAC channel2 data output */
    };

    class SR_T : public Register::Register<DAC_SR::sr_reg_type, BASE_ADDRESS + SR_Offset> {
    // status register
    public:
        Register::Bit<BASE_ADDRESS + SR_Offset, 29> DMAUDR2; /* DAC channel2 DMA underrun flag */
        Register::Bit<BASE_ADDRESS + SR_Offset, 13> DMAUDR1; /* DAC channel1 DMA underrun flag */
    };

    CR_T CR;
    SWTRIGR_T SWTRIGR;
    DHR12R1_T DHR12R1;
    DHR12L1_T DHR12L1;
    DHR8R1_T DHR8R1;
    DHR12R2_T DHR12R2;
    DHR12L2_T DHR12L2;
    DHR8R2_T DHR8R2;
    DHR12RD_T DHR12RD;
    DHR12LD_T DHR12LD;
    DHR8RD_T DHR8RD;
    DOR1_T DOR1;
    DOR2_T DOR2;
    SR_T SR;
};

} // namespace STM32LIB

#endif // STM32F0X1_DAC_HPP_

