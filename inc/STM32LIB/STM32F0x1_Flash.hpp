#ifndef STM32F0X1_Flash_HPP_
#define STM32F0X1_Flash_HPP_
#pragma once

#include <cstdint>
#include "Register.hpp"

/* Flash */
namespace STM32LIB { 

/* Overwritable types for each of the bitfields.
 * Defaults to uint32_t, but feel free to redefine with your
 * own custom enum class later. */
using ACR_LATENCY_T = uint32_t;
using KEYR_FKEYR_T = uint32_t;
using OPTKEYR_OPTKEYR_T = uint32_t;
using AR_FAR_T = uint32_t;
using OBR_RDPRT_T = uint32_t;
using OBR_RAM_PARITY_CHECK_T = uint32_t;
using OBR_Data0_T = uint32_t;
using OBR_Data1_T = uint32_t;
using WRPR_WRP_T = uint32_t;

namespace Flash_ACR {

    enum class acr_reg_type {};

    template<ACR_LATENCY_T val>
    using LATENCY = Register::Combo_Bitfield<acr_reg_type, 0, 3, ACR_LATENCY_T, val>;

    template<bool tf>
    using PRFTBE = Register::Combo_Bit<acr_reg_type, 4, tf>;

    template<bool tf>
    using PRFTBS = Register::Combo_Bit<acr_reg_type, 5, tf>;

} // Flash_ACR
namespace Flash_KEYR {

    enum class keyr_reg_type {};

    template<KEYR_FKEYR_T val>
    using FKEYR = Register::Combo_Bitfield<keyr_reg_type, 0, 32, KEYR_FKEYR_T, val>;

} // Flash_KEYR
namespace Flash_OPTKEYR {

    enum class optkeyr_reg_type {};

    template<OPTKEYR_OPTKEYR_T val>
    using OPTKEYR = Register::Combo_Bitfield<optkeyr_reg_type, 0, 32, OPTKEYR_OPTKEYR_T, val>;

} // Flash_OPTKEYR
namespace Flash_SR {

    enum class sr_reg_type {};

    template<bool tf>
    using EOP = Register::Combo_Bit<sr_reg_type, 5, tf>;

    template<bool tf>
    using WRPRT = Register::Combo_Bit<sr_reg_type, 4, tf>;

    template<bool tf>
    using PGERR = Register::Combo_Bit<sr_reg_type, 2, tf>;

    template<bool tf>
    using BSY = Register::Combo_Bit<sr_reg_type, 0, tf>;

} // Flash_SR
namespace Flash_CR {

    enum class cr_reg_type {};

    template<bool tf>
    using FORCE_OPTLOAD = Register::Combo_Bit<cr_reg_type, 13, tf>;

    template<bool tf>
    using EOPIE = Register::Combo_Bit<cr_reg_type, 12, tf>;

    template<bool tf>
    using ERRIE = Register::Combo_Bit<cr_reg_type, 10, tf>;

    template<bool tf>
    using OPTWRE = Register::Combo_Bit<cr_reg_type, 9, tf>;

    template<bool tf>
    using LOCK = Register::Combo_Bit<cr_reg_type, 7, tf>;

    template<bool tf>
    using STRT = Register::Combo_Bit<cr_reg_type, 6, tf>;

    template<bool tf>
    using OPTER = Register::Combo_Bit<cr_reg_type, 5, tf>;

    template<bool tf>
    using OPTPG = Register::Combo_Bit<cr_reg_type, 4, tf>;

    template<bool tf>
    using MER = Register::Combo_Bit<cr_reg_type, 2, tf>;

    template<bool tf>
    using PER = Register::Combo_Bit<cr_reg_type, 1, tf>;

    template<bool tf>
    using PG = Register::Combo_Bit<cr_reg_type, 0, tf>;

} // Flash_CR
namespace Flash_AR {

    enum class ar_reg_type {};

    template<AR_FAR_T val>
    using FAR = Register::Combo_Bitfield<ar_reg_type, 0, 32, AR_FAR_T, val>;

} // Flash_AR
namespace Flash_OBR {

    enum class obr_reg_type {};

    template<bool tf>
    using OPTERR = Register::Combo_Bit<obr_reg_type, 0, tf>;

    template<OBR_RDPRT_T val>
    using RDPRT = Register::Combo_Bitfield<obr_reg_type, 1, 2, OBR_RDPRT_T, val>;

    template<bool tf>
    using WDG_SW = Register::Combo_Bit<obr_reg_type, 8, tf>;

    template<bool tf>
    using nRST_STOP = Register::Combo_Bit<obr_reg_type, 9, tf>;

    template<bool tf>
    using nRST_STDBY = Register::Combo_Bit<obr_reg_type, 10, tf>;

    template<bool tf>
    using nBOOT0 = Register::Combo_Bit<obr_reg_type, 11, tf>;

    template<bool tf>
    using nBOOT1 = Register::Combo_Bit<obr_reg_type, 12, tf>;

    template<bool tf>
    using VDDA_MONITOR = Register::Combo_Bit<obr_reg_type, 13, tf>;

    template<OBR_RAM_PARITY_CHECK_T val>
    using RAM_PARITY_CHECK = Register::Combo_Bitfield<obr_reg_type, 14, 0, OBR_RAM_PARITY_CHECK_T, val>;

    template<bool tf>
    using BOOT_SEL = Register::Combo_Bit<obr_reg_type, 15, tf>;

    template<OBR_Data0_T val>
    using Data0 = Register::Combo_Bitfield<obr_reg_type, 16, 8, OBR_Data0_T, val>;

    template<OBR_Data1_T val>
    using Data1 = Register::Combo_Bitfield<obr_reg_type, 24, 8, OBR_Data1_T, val>;

} // Flash_OBR
namespace Flash_WRPR {

    enum class wrpr_reg_type {};

    template<WRPR_WRP_T val>
    using WRP = Register::Combo_Bitfield<wrpr_reg_type, 0, 32, WRPR_WRP_T, val>;

} // Flash_WRPR
template<uint32_t BASE_ADDRESS>
class Flash {
public:
    static const uint32_t ACR_Offset = 0x0000;
    static const uint32_t KEYR_Offset = 0x0004;
    static const uint32_t OPTKEYR_Offset = 0x0008;
    static const uint32_t SR_Offset = 0x000C;
    static const uint32_t CR_Offset = 0x0010;
    static const uint32_t AR_Offset = 0x0014;
    static const uint32_t OBR_Offset = 0x001C;
    static const uint32_t WRPR_Offset = 0x0020;

    Flash() = default;
    Flash( const Flash& ) = delete;
    const Flash& operator=( const Flash& ) = delete;

    class ACR_T : public Register::Register<Flash_ACR::acr_reg_type, BASE_ADDRESS + ACR_Offset> {
    // Flash access control register
    public:
        Register::Bitfield<BASE_ADDRESS + ACR_Offset, 0, 3, ACR_LATENCY_T> LATENCY; /* LATENCY */
        Register::Bit<BASE_ADDRESS + ACR_Offset, 4> PRFTBE; /* PRFTBE */
        Register::Bit<BASE_ADDRESS + ACR_Offset, 5> PRFTBS; /* PRFTBS */
    };

    class KEYR_T : public Register::Register<Flash_KEYR::keyr_reg_type, BASE_ADDRESS + KEYR_Offset> {
    // Flash key register
    public:
        Register::Bitfield<BASE_ADDRESS + KEYR_Offset, 0, 32, KEYR_FKEYR_T> FKEYR; /* Flash Key */
    };

    class OPTKEYR_T : public Register::Register<Flash_OPTKEYR::optkeyr_reg_type, BASE_ADDRESS + OPTKEYR_Offset> {
    // Flash option key register
    public:
        Register::Bitfield<BASE_ADDRESS + OPTKEYR_Offset, 0, 32, OPTKEYR_OPTKEYR_T> OPTKEYR; /* Option byte key */
    };

    class SR_T : public Register::Register<Flash_SR::sr_reg_type, BASE_ADDRESS + SR_Offset> {
    // Flash status register
    public:
        Register::Bit<BASE_ADDRESS + SR_Offset, 5> EOP; /* End of operation */
        Register::Bit<BASE_ADDRESS + SR_Offset, 4> WRPRT; /* Write protection error */
        Register::Bit<BASE_ADDRESS + SR_Offset, 2> PGERR; /* Programming error */
        Register::Bit<BASE_ADDRESS + SR_Offset, 0> BSY; /* Busy */
    };

    class CR_T : public Register::Register<Flash_CR::cr_reg_type, BASE_ADDRESS + CR_Offset> {
    // Flash control register
    public:
        Register::Bit<BASE_ADDRESS + CR_Offset, 13> FORCE_OPTLOAD; /* Force option byte loading */
        Register::Bit<BASE_ADDRESS + CR_Offset, 12> EOPIE; /* End of operation interrupt enable */
        Register::Bit<BASE_ADDRESS + CR_Offset, 10> ERRIE; /* Error interrupt enable */
        Register::Bit<BASE_ADDRESS + CR_Offset, 9> OPTWRE; /* Option bytes write enable */
        Register::Bit<BASE_ADDRESS + CR_Offset, 7> LOCK; /* Lock */
        Register::Bit<BASE_ADDRESS + CR_Offset, 6> STRT; /* Start */
        Register::Bit<BASE_ADDRESS + CR_Offset, 5> OPTER; /* Option byte erase */
        Register::Bit<BASE_ADDRESS + CR_Offset, 4> OPTPG; /* Option byte programming */
        Register::Bit<BASE_ADDRESS + CR_Offset, 2> MER; /* Mass erase */
        Register::Bit<BASE_ADDRESS + CR_Offset, 1> PER; /* Page erase */
        Register::Bit<BASE_ADDRESS + CR_Offset, 0> PG; /* Programming */
    };

    class AR_T : public Register::Register<Flash_AR::ar_reg_type, BASE_ADDRESS + AR_Offset> {
    // Flash address register
    public:
        Register::Bitfield<BASE_ADDRESS + AR_Offset, 0, 32, AR_FAR_T> FAR; /* Flash address */
    };

    class OBR_T : public Register::Register<Flash_OBR::obr_reg_type, BASE_ADDRESS + OBR_Offset> {
    // Option byte register
    public:
        Register::Bit<BASE_ADDRESS + OBR_Offset, 0> OPTERR; /* Option byte error */
        Register::Bitfield<BASE_ADDRESS + OBR_Offset, 1, 2, OBR_RDPRT_T> RDPRT; /* Read protection level status */
        Register::Bit<BASE_ADDRESS + OBR_Offset, 8> WDG_SW; /* WDG_SW */
        Register::Bit<BASE_ADDRESS + OBR_Offset, 9> nRST_STOP; /* nRST_STOP */
        Register::Bit<BASE_ADDRESS + OBR_Offset, 10> nRST_STDBY; /* nRST_STDBY */
        Register::Bit<BASE_ADDRESS + OBR_Offset, 11> nBOOT0; /* nBOOT0 */
        Register::Bit<BASE_ADDRESS + OBR_Offset, 12> nBOOT1; /* BOOT1 */
        Register::Bit<BASE_ADDRESS + OBR_Offset, 13> VDDA_MONITOR; /* VDDA_MONITOR */
        Register::Bitfield<BASE_ADDRESS + OBR_Offset, 14, 0, OBR_RAM_PARITY_CHECK_T> RAM_PARITY_CHECK; /* RAM_PARITY_CHECK */
        Register::Bit<BASE_ADDRESS + OBR_Offset, 15> BOOT_SEL; /* BOOT_SEL */
        Register::Bitfield<BASE_ADDRESS + OBR_Offset, 16, 8, OBR_Data0_T> Data0; /* Data0 */
        Register::Bitfield<BASE_ADDRESS + OBR_Offset, 24, 8, OBR_Data1_T> Data1; /* Data1 */
    };

    class WRPR_T : public Register::Register<Flash_WRPR::wrpr_reg_type, BASE_ADDRESS + WRPR_Offset> {
    // Write protection register
    public:
        Register::Bitfield<BASE_ADDRESS + WRPR_Offset, 0, 32, WRPR_WRP_T> WRP; /* Write protect */
    };

    ACR_T ACR;
    KEYR_T KEYR;
    OPTKEYR_T OPTKEYR;
    SR_T SR;
    CR_T CR;
    AR_T AR;
    OBR_T OBR;
    WRPR_T WRPR;
};

} // namespace STM32LIB

#endif // STM32F0X1_Flash_HPP_

