#ifndef STM32F0X1_USB_HPP_
#define STM32F0X1_USB_HPP_
#pragma once

#include <cstdint>
#include "Register.hpp"

/* Universal serial bus full-speed device interface */
namespace STM32LIB { 

/* Overwritable types for each of the bitfields.
 * Defaults to uint32_t, but feel free to redefine with your
 * own custom enum class later. */
using EP0R_EA_T = uint32_t;
using EP0R_STAT_TX_T = uint32_t;
using EP0R_EP_TYPE_T = uint32_t;
using EP0R_STAT_RX_T = uint32_t;
using EP1R_EA_T = uint32_t;
using EP1R_STAT_TX_T = uint32_t;
using EP1R_EP_TYPE_T = uint32_t;
using EP1R_STAT_RX_T = uint32_t;
using EP2R_EA_T = uint32_t;
using EP2R_STAT_TX_T = uint32_t;
using EP2R_EP_TYPE_T = uint32_t;
using EP2R_STAT_RX_T = uint32_t;
using EP3R_EA_T = uint32_t;
using EP3R_STAT_TX_T = uint32_t;
using EP3R_EP_TYPE_T = uint32_t;
using EP3R_STAT_RX_T = uint32_t;
using EP4R_EA_T = uint32_t;
using EP4R_STAT_TX_T = uint32_t;
using EP4R_EP_TYPE_T = uint32_t;
using EP4R_STAT_RX_T = uint32_t;
using EP5R_EA_T = uint32_t;
using EP5R_STAT_TX_T = uint32_t;
using EP5R_EP_TYPE_T = uint32_t;
using EP5R_STAT_RX_T = uint32_t;
using EP6R_EA_T = uint32_t;
using EP6R_STAT_TX_T = uint32_t;
using EP6R_EP_TYPE_T = uint32_t;
using EP6R_STAT_RX_T = uint32_t;
using EP7R_EA_T = uint32_t;
using EP7R_STAT_TX_T = uint32_t;
using EP7R_EP_TYPE_T = uint32_t;
using EP7R_STAT_RX_T = uint32_t;
using ISTR_EP_ID_T = uint32_t;
using FNR_FN_T = uint32_t;
using FNR_LSOF_T = uint32_t;
using DADDR_ADD_T = uint32_t;
using BTABLE_BTABLE_T = uint32_t;
using LPMCSR_BESL_T = uint32_t;

namespace USB_EP0R {

    enum class ep0r_reg_type {};

    template<EP0R_EA_T val>
    using EA = Register::Combo_Bitfield<ep0r_reg_type, 0, 4, EP0R_EA_T, val>;

    template<EP0R_STAT_TX_T val>
    using STAT_TX = Register::Combo_Bitfield<ep0r_reg_type, 4, 2, EP0R_STAT_TX_T, val>;

    template<bool tf>
    using DTOG_TX = Register::Combo_Bit<ep0r_reg_type, 6, tf>;

    template<bool tf>
    using CTR_TX = Register::Combo_Bit<ep0r_reg_type, 7, tf>;

    template<bool tf>
    using EP_KIND = Register::Combo_Bit<ep0r_reg_type, 8, tf>;

    template<EP0R_EP_TYPE_T val>
    using EP_TYPE = Register::Combo_Bitfield<ep0r_reg_type, 9, 2, EP0R_EP_TYPE_T, val>;

    template<bool tf>
    using SETUP = Register::Combo_Bit<ep0r_reg_type, 11, tf>;

    template<EP0R_STAT_RX_T val>
    using STAT_RX = Register::Combo_Bitfield<ep0r_reg_type, 12, 2, EP0R_STAT_RX_T, val>;

    template<bool tf>
    using DTOG_RX = Register::Combo_Bit<ep0r_reg_type, 14, tf>;

    template<bool tf>
    using CTR_RX = Register::Combo_Bit<ep0r_reg_type, 15, tf>;

} // USB_EP0R
namespace USB_EP1R {

    enum class ep1r_reg_type {};

    template<EP1R_EA_T val>
    using EA = Register::Combo_Bitfield<ep1r_reg_type, 0, 4, EP1R_EA_T, val>;

    template<EP1R_STAT_TX_T val>
    using STAT_TX = Register::Combo_Bitfield<ep1r_reg_type, 4, 2, EP1R_STAT_TX_T, val>;

    template<bool tf>
    using DTOG_TX = Register::Combo_Bit<ep1r_reg_type, 6, tf>;

    template<bool tf>
    using CTR_TX = Register::Combo_Bit<ep1r_reg_type, 7, tf>;

    template<bool tf>
    using EP_KIND = Register::Combo_Bit<ep1r_reg_type, 8, tf>;

    template<EP1R_EP_TYPE_T val>
    using EP_TYPE = Register::Combo_Bitfield<ep1r_reg_type, 9, 2, EP1R_EP_TYPE_T, val>;

    template<bool tf>
    using SETUP = Register::Combo_Bit<ep1r_reg_type, 11, tf>;

    template<EP1R_STAT_RX_T val>
    using STAT_RX = Register::Combo_Bitfield<ep1r_reg_type, 12, 2, EP1R_STAT_RX_T, val>;

    template<bool tf>
    using DTOG_RX = Register::Combo_Bit<ep1r_reg_type, 14, tf>;

    template<bool tf>
    using CTR_RX = Register::Combo_Bit<ep1r_reg_type, 15, tf>;

} // USB_EP1R
namespace USB_EP2R {

    enum class ep2r_reg_type {};

    template<EP2R_EA_T val>
    using EA = Register::Combo_Bitfield<ep2r_reg_type, 0, 4, EP2R_EA_T, val>;

    template<EP2R_STAT_TX_T val>
    using STAT_TX = Register::Combo_Bitfield<ep2r_reg_type, 4, 2, EP2R_STAT_TX_T, val>;

    template<bool tf>
    using DTOG_TX = Register::Combo_Bit<ep2r_reg_type, 6, tf>;

    template<bool tf>
    using CTR_TX = Register::Combo_Bit<ep2r_reg_type, 7, tf>;

    template<bool tf>
    using EP_KIND = Register::Combo_Bit<ep2r_reg_type, 8, tf>;

    template<EP2R_EP_TYPE_T val>
    using EP_TYPE = Register::Combo_Bitfield<ep2r_reg_type, 9, 2, EP2R_EP_TYPE_T, val>;

    template<bool tf>
    using SETUP = Register::Combo_Bit<ep2r_reg_type, 11, tf>;

    template<EP2R_STAT_RX_T val>
    using STAT_RX = Register::Combo_Bitfield<ep2r_reg_type, 12, 2, EP2R_STAT_RX_T, val>;

    template<bool tf>
    using DTOG_RX = Register::Combo_Bit<ep2r_reg_type, 14, tf>;

    template<bool tf>
    using CTR_RX = Register::Combo_Bit<ep2r_reg_type, 15, tf>;

} // USB_EP2R
namespace USB_EP3R {

    enum class ep3r_reg_type {};

    template<EP3R_EA_T val>
    using EA = Register::Combo_Bitfield<ep3r_reg_type, 0, 4, EP3R_EA_T, val>;

    template<EP3R_STAT_TX_T val>
    using STAT_TX = Register::Combo_Bitfield<ep3r_reg_type, 4, 2, EP3R_STAT_TX_T, val>;

    template<bool tf>
    using DTOG_TX = Register::Combo_Bit<ep3r_reg_type, 6, tf>;

    template<bool tf>
    using CTR_TX = Register::Combo_Bit<ep3r_reg_type, 7, tf>;

    template<bool tf>
    using EP_KIND = Register::Combo_Bit<ep3r_reg_type, 8, tf>;

    template<EP3R_EP_TYPE_T val>
    using EP_TYPE = Register::Combo_Bitfield<ep3r_reg_type, 9, 2, EP3R_EP_TYPE_T, val>;

    template<bool tf>
    using SETUP = Register::Combo_Bit<ep3r_reg_type, 11, tf>;

    template<EP3R_STAT_RX_T val>
    using STAT_RX = Register::Combo_Bitfield<ep3r_reg_type, 12, 2, EP3R_STAT_RX_T, val>;

    template<bool tf>
    using DTOG_RX = Register::Combo_Bit<ep3r_reg_type, 14, tf>;

    template<bool tf>
    using CTR_RX = Register::Combo_Bit<ep3r_reg_type, 15, tf>;

} // USB_EP3R
namespace USB_EP4R {

    enum class ep4r_reg_type {};

    template<EP4R_EA_T val>
    using EA = Register::Combo_Bitfield<ep4r_reg_type, 0, 4, EP4R_EA_T, val>;

    template<EP4R_STAT_TX_T val>
    using STAT_TX = Register::Combo_Bitfield<ep4r_reg_type, 4, 2, EP4R_STAT_TX_T, val>;

    template<bool tf>
    using DTOG_TX = Register::Combo_Bit<ep4r_reg_type, 6, tf>;

    template<bool tf>
    using CTR_TX = Register::Combo_Bit<ep4r_reg_type, 7, tf>;

    template<bool tf>
    using EP_KIND = Register::Combo_Bit<ep4r_reg_type, 8, tf>;

    template<EP4R_EP_TYPE_T val>
    using EP_TYPE = Register::Combo_Bitfield<ep4r_reg_type, 9, 2, EP4R_EP_TYPE_T, val>;

    template<bool tf>
    using SETUP = Register::Combo_Bit<ep4r_reg_type, 11, tf>;

    template<EP4R_STAT_RX_T val>
    using STAT_RX = Register::Combo_Bitfield<ep4r_reg_type, 12, 2, EP4R_STAT_RX_T, val>;

    template<bool tf>
    using DTOG_RX = Register::Combo_Bit<ep4r_reg_type, 14, tf>;

    template<bool tf>
    using CTR_RX = Register::Combo_Bit<ep4r_reg_type, 15, tf>;

} // USB_EP4R
namespace USB_EP5R {

    enum class ep5r_reg_type {};

    template<EP5R_EA_T val>
    using EA = Register::Combo_Bitfield<ep5r_reg_type, 0, 4, EP5R_EA_T, val>;

    template<EP5R_STAT_TX_T val>
    using STAT_TX = Register::Combo_Bitfield<ep5r_reg_type, 4, 2, EP5R_STAT_TX_T, val>;

    template<bool tf>
    using DTOG_TX = Register::Combo_Bit<ep5r_reg_type, 6, tf>;

    template<bool tf>
    using CTR_TX = Register::Combo_Bit<ep5r_reg_type, 7, tf>;

    template<bool tf>
    using EP_KIND = Register::Combo_Bit<ep5r_reg_type, 8, tf>;

    template<EP5R_EP_TYPE_T val>
    using EP_TYPE = Register::Combo_Bitfield<ep5r_reg_type, 9, 2, EP5R_EP_TYPE_T, val>;

    template<bool tf>
    using SETUP = Register::Combo_Bit<ep5r_reg_type, 11, tf>;

    template<EP5R_STAT_RX_T val>
    using STAT_RX = Register::Combo_Bitfield<ep5r_reg_type, 12, 2, EP5R_STAT_RX_T, val>;

    template<bool tf>
    using DTOG_RX = Register::Combo_Bit<ep5r_reg_type, 14, tf>;

    template<bool tf>
    using CTR_RX = Register::Combo_Bit<ep5r_reg_type, 15, tf>;

} // USB_EP5R
namespace USB_EP6R {

    enum class ep6r_reg_type {};

    template<EP6R_EA_T val>
    using EA = Register::Combo_Bitfield<ep6r_reg_type, 0, 4, EP6R_EA_T, val>;

    template<EP6R_STAT_TX_T val>
    using STAT_TX = Register::Combo_Bitfield<ep6r_reg_type, 4, 2, EP6R_STAT_TX_T, val>;

    template<bool tf>
    using DTOG_TX = Register::Combo_Bit<ep6r_reg_type, 6, tf>;

    template<bool tf>
    using CTR_TX = Register::Combo_Bit<ep6r_reg_type, 7, tf>;

    template<bool tf>
    using EP_KIND = Register::Combo_Bit<ep6r_reg_type, 8, tf>;

    template<EP6R_EP_TYPE_T val>
    using EP_TYPE = Register::Combo_Bitfield<ep6r_reg_type, 9, 2, EP6R_EP_TYPE_T, val>;

    template<bool tf>
    using SETUP = Register::Combo_Bit<ep6r_reg_type, 11, tf>;

    template<EP6R_STAT_RX_T val>
    using STAT_RX = Register::Combo_Bitfield<ep6r_reg_type, 12, 2, EP6R_STAT_RX_T, val>;

    template<bool tf>
    using DTOG_RX = Register::Combo_Bit<ep6r_reg_type, 14, tf>;

    template<bool tf>
    using CTR_RX = Register::Combo_Bit<ep6r_reg_type, 15, tf>;

} // USB_EP6R
namespace USB_EP7R {

    enum class ep7r_reg_type {};

    template<EP7R_EA_T val>
    using EA = Register::Combo_Bitfield<ep7r_reg_type, 0, 4, EP7R_EA_T, val>;

    template<EP7R_STAT_TX_T val>
    using STAT_TX = Register::Combo_Bitfield<ep7r_reg_type, 4, 2, EP7R_STAT_TX_T, val>;

    template<bool tf>
    using DTOG_TX = Register::Combo_Bit<ep7r_reg_type, 6, tf>;

    template<bool tf>
    using CTR_TX = Register::Combo_Bit<ep7r_reg_type, 7, tf>;

    template<bool tf>
    using EP_KIND = Register::Combo_Bit<ep7r_reg_type, 8, tf>;

    template<EP7R_EP_TYPE_T val>
    using EP_TYPE = Register::Combo_Bitfield<ep7r_reg_type, 9, 2, EP7R_EP_TYPE_T, val>;

    template<bool tf>
    using SETUP = Register::Combo_Bit<ep7r_reg_type, 11, tf>;

    template<EP7R_STAT_RX_T val>
    using STAT_RX = Register::Combo_Bitfield<ep7r_reg_type, 12, 2, EP7R_STAT_RX_T, val>;

    template<bool tf>
    using DTOG_RX = Register::Combo_Bit<ep7r_reg_type, 14, tf>;

    template<bool tf>
    using CTR_RX = Register::Combo_Bit<ep7r_reg_type, 15, tf>;

} // USB_EP7R
namespace USB_CNTR {

    enum class cntr_reg_type {};

    template<bool tf>
    using FRES = Register::Combo_Bit<cntr_reg_type, 0, tf>;

    template<bool tf>
    using PDWN = Register::Combo_Bit<cntr_reg_type, 1, tf>;

    template<bool tf>
    using LPMODE = Register::Combo_Bit<cntr_reg_type, 2, tf>;

    template<bool tf>
    using FSUSP = Register::Combo_Bit<cntr_reg_type, 3, tf>;

    template<bool tf>
    using RESUME = Register::Combo_Bit<cntr_reg_type, 4, tf>;

    template<bool tf>
    using L1RESUME = Register::Combo_Bit<cntr_reg_type, 5, tf>;

    template<bool tf>
    using L1REQM = Register::Combo_Bit<cntr_reg_type, 7, tf>;

    template<bool tf>
    using ESOFM = Register::Combo_Bit<cntr_reg_type, 8, tf>;

    template<bool tf>
    using SOFM = Register::Combo_Bit<cntr_reg_type, 9, tf>;

    template<bool tf>
    using RESETM = Register::Combo_Bit<cntr_reg_type, 10, tf>;

    template<bool tf>
    using SUSPM = Register::Combo_Bit<cntr_reg_type, 11, tf>;

    template<bool tf>
    using WKUPM = Register::Combo_Bit<cntr_reg_type, 12, tf>;

    template<bool tf>
    using ERRM = Register::Combo_Bit<cntr_reg_type, 13, tf>;

    template<bool tf>
    using PMAOVRM = Register::Combo_Bit<cntr_reg_type, 14, tf>;

    template<bool tf>
    using CTRM = Register::Combo_Bit<cntr_reg_type, 15, tf>;

} // USB_CNTR
namespace USB_ISTR {

    enum class istr_reg_type {};

    template<ISTR_EP_ID_T val>
    using EP_ID = Register::Combo_Bitfield<istr_reg_type, 0, 4, ISTR_EP_ID_T, val>;

    template<bool tf>
    using DIR = Register::Combo_Bit<istr_reg_type, 4, tf>;

    template<bool tf>
    using L1REQ = Register::Combo_Bit<istr_reg_type, 7, tf>;

    template<bool tf>
    using ESOF = Register::Combo_Bit<istr_reg_type, 8, tf>;

    template<bool tf>
    using SOF = Register::Combo_Bit<istr_reg_type, 9, tf>;

    template<bool tf>
    using RESET = Register::Combo_Bit<istr_reg_type, 10, tf>;

    template<bool tf>
    using SUSP = Register::Combo_Bit<istr_reg_type, 11, tf>;

    template<bool tf>
    using WKUP = Register::Combo_Bit<istr_reg_type, 12, tf>;

    template<bool tf>
    using ERR = Register::Combo_Bit<istr_reg_type, 13, tf>;

    template<bool tf>
    using PMAOVR = Register::Combo_Bit<istr_reg_type, 14, tf>;

    template<bool tf>
    using CTR = Register::Combo_Bit<istr_reg_type, 15, tf>;

} // USB_ISTR
namespace USB_FNR {

    enum class fnr_reg_type {};

    template<FNR_FN_T val>
    using FN = Register::Combo_Bitfield<fnr_reg_type, 0, 11, FNR_FN_T, val>;

    template<FNR_LSOF_T val>
    using LSOF = Register::Combo_Bitfield<fnr_reg_type, 11, 2, FNR_LSOF_T, val>;

    template<bool tf>
    using LCK = Register::Combo_Bit<fnr_reg_type, 13, tf>;

    template<bool tf>
    using RXDM = Register::Combo_Bit<fnr_reg_type, 14, tf>;

    template<bool tf>
    using RXDP = Register::Combo_Bit<fnr_reg_type, 15, tf>;

} // USB_FNR
namespace USB_DADDR {

    enum class daddr_reg_type {};

    template<DADDR_ADD_T val>
    using ADD = Register::Combo_Bitfield<daddr_reg_type, 0, 7, DADDR_ADD_T, val>;

    template<bool tf>
    using EF = Register::Combo_Bit<daddr_reg_type, 7, tf>;

} // USB_DADDR
namespace USB_BTABLE {

    enum class btable_reg_type {};

    template<BTABLE_BTABLE_T val>
    using BTABLE = Register::Combo_Bitfield<btable_reg_type, 3, 13, BTABLE_BTABLE_T, val>;

} // USB_BTABLE
namespace USB_LPMCSR {

    enum class lpmcsr_reg_type {};

    template<bool tf>
    using LPMEN = Register::Combo_Bit<lpmcsr_reg_type, 0, tf>;

    template<bool tf>
    using LPMACK = Register::Combo_Bit<lpmcsr_reg_type, 1, tf>;

    template<bool tf>
    using REMWAKE = Register::Combo_Bit<lpmcsr_reg_type, 3, tf>;

    template<LPMCSR_BESL_T val>
    using BESL = Register::Combo_Bitfield<lpmcsr_reg_type, 4, 4, LPMCSR_BESL_T, val>;

} // USB_LPMCSR
namespace USB_BCDR {

    enum class bcdr_reg_type {};

    template<bool tf>
    using BCDEN = Register::Combo_Bit<bcdr_reg_type, 0, tf>;

    template<bool tf>
    using DCDEN = Register::Combo_Bit<bcdr_reg_type, 1, tf>;

    template<bool tf>
    using PDEN = Register::Combo_Bit<bcdr_reg_type, 2, tf>;

    template<bool tf>
    using SDEN = Register::Combo_Bit<bcdr_reg_type, 3, tf>;

    template<bool tf>
    using DCDET = Register::Combo_Bit<bcdr_reg_type, 4, tf>;

    template<bool tf>
    using PDET = Register::Combo_Bit<bcdr_reg_type, 5, tf>;

    template<bool tf>
    using SDET = Register::Combo_Bit<bcdr_reg_type, 6, tf>;

    template<bool tf>
    using PS2DET = Register::Combo_Bit<bcdr_reg_type, 7, tf>;

    template<bool tf>
    using DPPU = Register::Combo_Bit<bcdr_reg_type, 15, tf>;

} // USB_BCDR
template<uint32_t BASE_ADDRESS>
class USB {
public:
    static const uint32_t EP0R_Offset = 0x0000;
    static const uint32_t EP1R_Offset = 0x0004;
    static const uint32_t EP2R_Offset = 0x0008;
    static const uint32_t EP3R_Offset = 0x000C;
    static const uint32_t EP4R_Offset = 0x0010;
    static const uint32_t EP5R_Offset = 0x0014;
    static const uint32_t EP6R_Offset = 0x0018;
    static const uint32_t EP7R_Offset = 0x001C;
    static const uint32_t CNTR_Offset = 0x0040;
    static const uint32_t ISTR_Offset = 0x0044;
    static const uint32_t FNR_Offset = 0x0048;
    static const uint32_t DADDR_Offset = 0x004C;
    static const uint32_t BTABLE_Offset = 0x0050;
    static const uint32_t LPMCSR_Offset = 0x0054;
    static const uint32_t BCDR_Offset = 0x0058;

    USB() = default;
    USB( const USB& ) = delete;
    const USB& operator=( const USB& ) = delete;

    class EP0R_T : public Register::Register<USB_EP0R::ep0r_reg_type, BASE_ADDRESS + EP0R_Offset> {
    // endpoint 0 register
    public:
        Register::Bitfield<BASE_ADDRESS + EP0R_Offset, 0, 4, EP0R_EA_T> EA; /* Endpoint address */
        Register::Bitfield<BASE_ADDRESS + EP0R_Offset, 4, 2, EP0R_STAT_TX_T> STAT_TX; /* Status bits, for transmission transfers */
        Register::Bit<BASE_ADDRESS + EP0R_Offset, 6> DTOG_TX; /* Data Toggle, for transmission transfers */
        Register::Bit<BASE_ADDRESS + EP0R_Offset, 7> CTR_TX; /* Correct Transfer for transmission */
        Register::Bit<BASE_ADDRESS + EP0R_Offset, 8> EP_KIND; /* Endpoint kind */
        Register::Bitfield<BASE_ADDRESS + EP0R_Offset, 9, 2, EP0R_EP_TYPE_T> EP_TYPE; /* Endpoint type */
        Register::Bit<BASE_ADDRESS + EP0R_Offset, 11> SETUP; /* Setup transaction completed */
        Register::Bitfield<BASE_ADDRESS + EP0R_Offset, 12, 2, EP0R_STAT_RX_T> STAT_RX; /* Status bits, for reception transfers */
        Register::Bit<BASE_ADDRESS + EP0R_Offset, 14> DTOG_RX; /* Data Toggle, for reception transfers */
        Register::Bit<BASE_ADDRESS + EP0R_Offset, 15> CTR_RX; /* Correct transfer for reception */
    };

    class EP1R_T : public Register::Register<USB_EP1R::ep1r_reg_type, BASE_ADDRESS + EP1R_Offset> {
    // endpoint 1 register
    public:
        Register::Bitfield<BASE_ADDRESS + EP1R_Offset, 0, 4, EP1R_EA_T> EA; /* Endpoint address */
        Register::Bitfield<BASE_ADDRESS + EP1R_Offset, 4, 2, EP1R_STAT_TX_T> STAT_TX; /* Status bits, for transmission transfers */
        Register::Bit<BASE_ADDRESS + EP1R_Offset, 6> DTOG_TX; /* Data Toggle, for transmission transfers */
        Register::Bit<BASE_ADDRESS + EP1R_Offset, 7> CTR_TX; /* Correct Transfer for transmission */
        Register::Bit<BASE_ADDRESS + EP1R_Offset, 8> EP_KIND; /* Endpoint kind */
        Register::Bitfield<BASE_ADDRESS + EP1R_Offset, 9, 2, EP1R_EP_TYPE_T> EP_TYPE; /* Endpoint type */
        Register::Bit<BASE_ADDRESS + EP1R_Offset, 11> SETUP; /* Setup transaction completed */
        Register::Bitfield<BASE_ADDRESS + EP1R_Offset, 12, 2, EP1R_STAT_RX_T> STAT_RX; /* Status bits, for reception transfers */
        Register::Bit<BASE_ADDRESS + EP1R_Offset, 14> DTOG_RX; /* Data Toggle, for reception transfers */
        Register::Bit<BASE_ADDRESS + EP1R_Offset, 15> CTR_RX; /* Correct transfer for reception */
    };

    class EP2R_T : public Register::Register<USB_EP2R::ep2r_reg_type, BASE_ADDRESS + EP2R_Offset> {
    // endpoint 2 register
    public:
        Register::Bitfield<BASE_ADDRESS + EP2R_Offset, 0, 4, EP2R_EA_T> EA; /* Endpoint address */
        Register::Bitfield<BASE_ADDRESS + EP2R_Offset, 4, 2, EP2R_STAT_TX_T> STAT_TX; /* Status bits, for transmission transfers */
        Register::Bit<BASE_ADDRESS + EP2R_Offset, 6> DTOG_TX; /* Data Toggle, for transmission transfers */
        Register::Bit<BASE_ADDRESS + EP2R_Offset, 7> CTR_TX; /* Correct Transfer for transmission */
        Register::Bit<BASE_ADDRESS + EP2R_Offset, 8> EP_KIND; /* Endpoint kind */
        Register::Bitfield<BASE_ADDRESS + EP2R_Offset, 9, 2, EP2R_EP_TYPE_T> EP_TYPE; /* Endpoint type */
        Register::Bit<BASE_ADDRESS + EP2R_Offset, 11> SETUP; /* Setup transaction completed */
        Register::Bitfield<BASE_ADDRESS + EP2R_Offset, 12, 2, EP2R_STAT_RX_T> STAT_RX; /* Status bits, for reception transfers */
        Register::Bit<BASE_ADDRESS + EP2R_Offset, 14> DTOG_RX; /* Data Toggle, for reception transfers */
        Register::Bit<BASE_ADDRESS + EP2R_Offset, 15> CTR_RX; /* Correct transfer for reception */
    };

    class EP3R_T : public Register::Register<USB_EP3R::ep3r_reg_type, BASE_ADDRESS + EP3R_Offset> {
    // endpoint 3 register
    public:
        Register::Bitfield<BASE_ADDRESS + EP3R_Offset, 0, 4, EP3R_EA_T> EA; /* Endpoint address */
        Register::Bitfield<BASE_ADDRESS + EP3R_Offset, 4, 2, EP3R_STAT_TX_T> STAT_TX; /* Status bits, for transmission transfers */
        Register::Bit<BASE_ADDRESS + EP3R_Offset, 6> DTOG_TX; /* Data Toggle, for transmission transfers */
        Register::Bit<BASE_ADDRESS + EP3R_Offset, 7> CTR_TX; /* Correct Transfer for transmission */
        Register::Bit<BASE_ADDRESS + EP3R_Offset, 8> EP_KIND; /* Endpoint kind */
        Register::Bitfield<BASE_ADDRESS + EP3R_Offset, 9, 2, EP3R_EP_TYPE_T> EP_TYPE; /* Endpoint type */
        Register::Bit<BASE_ADDRESS + EP3R_Offset, 11> SETUP; /* Setup transaction completed */
        Register::Bitfield<BASE_ADDRESS + EP3R_Offset, 12, 2, EP3R_STAT_RX_T> STAT_RX; /* Status bits, for reception transfers */
        Register::Bit<BASE_ADDRESS + EP3R_Offset, 14> DTOG_RX; /* Data Toggle, for reception transfers */
        Register::Bit<BASE_ADDRESS + EP3R_Offset, 15> CTR_RX; /* Correct transfer for reception */
    };

    class EP4R_T : public Register::Register<USB_EP4R::ep4r_reg_type, BASE_ADDRESS + EP4R_Offset> {
    // endpoint 4 register
    public:
        Register::Bitfield<BASE_ADDRESS + EP4R_Offset, 0, 4, EP4R_EA_T> EA; /* Endpoint address */
        Register::Bitfield<BASE_ADDRESS + EP4R_Offset, 4, 2, EP4R_STAT_TX_T> STAT_TX; /* Status bits, for transmission transfers */
        Register::Bit<BASE_ADDRESS + EP4R_Offset, 6> DTOG_TX; /* Data Toggle, for transmission transfers */
        Register::Bit<BASE_ADDRESS + EP4R_Offset, 7> CTR_TX; /* Correct Transfer for transmission */
        Register::Bit<BASE_ADDRESS + EP4R_Offset, 8> EP_KIND; /* Endpoint kind */
        Register::Bitfield<BASE_ADDRESS + EP4R_Offset, 9, 2, EP4R_EP_TYPE_T> EP_TYPE; /* Endpoint type */
        Register::Bit<BASE_ADDRESS + EP4R_Offset, 11> SETUP; /* Setup transaction completed */
        Register::Bitfield<BASE_ADDRESS + EP4R_Offset, 12, 2, EP4R_STAT_RX_T> STAT_RX; /* Status bits, for reception transfers */
        Register::Bit<BASE_ADDRESS + EP4R_Offset, 14> DTOG_RX; /* Data Toggle, for reception transfers */
        Register::Bit<BASE_ADDRESS + EP4R_Offset, 15> CTR_RX; /* Correct transfer for reception */
    };

    class EP5R_T : public Register::Register<USB_EP5R::ep5r_reg_type, BASE_ADDRESS + EP5R_Offset> {
    // endpoint 5 register
    public:
        Register::Bitfield<BASE_ADDRESS + EP5R_Offset, 0, 4, EP5R_EA_T> EA; /* Endpoint address */
        Register::Bitfield<BASE_ADDRESS + EP5R_Offset, 4, 2, EP5R_STAT_TX_T> STAT_TX; /* Status bits, for transmission transfers */
        Register::Bit<BASE_ADDRESS + EP5R_Offset, 6> DTOG_TX; /* Data Toggle, for transmission transfers */
        Register::Bit<BASE_ADDRESS + EP5R_Offset, 7> CTR_TX; /* Correct Transfer for transmission */
        Register::Bit<BASE_ADDRESS + EP5R_Offset, 8> EP_KIND; /* Endpoint kind */
        Register::Bitfield<BASE_ADDRESS + EP5R_Offset, 9, 2, EP5R_EP_TYPE_T> EP_TYPE; /* Endpoint type */
        Register::Bit<BASE_ADDRESS + EP5R_Offset, 11> SETUP; /* Setup transaction completed */
        Register::Bitfield<BASE_ADDRESS + EP5R_Offset, 12, 2, EP5R_STAT_RX_T> STAT_RX; /* Status bits, for reception transfers */
        Register::Bit<BASE_ADDRESS + EP5R_Offset, 14> DTOG_RX; /* Data Toggle, for reception transfers */
        Register::Bit<BASE_ADDRESS + EP5R_Offset, 15> CTR_RX; /* Correct transfer for reception */
    };

    class EP6R_T : public Register::Register<USB_EP6R::ep6r_reg_type, BASE_ADDRESS + EP6R_Offset> {
    // endpoint 6 register
    public:
        Register::Bitfield<BASE_ADDRESS + EP6R_Offset, 0, 4, EP6R_EA_T> EA; /* Endpoint address */
        Register::Bitfield<BASE_ADDRESS + EP6R_Offset, 4, 2, EP6R_STAT_TX_T> STAT_TX; /* Status bits, for transmission transfers */
        Register::Bit<BASE_ADDRESS + EP6R_Offset, 6> DTOG_TX; /* Data Toggle, for transmission transfers */
        Register::Bit<BASE_ADDRESS + EP6R_Offset, 7> CTR_TX; /* Correct Transfer for transmission */
        Register::Bit<BASE_ADDRESS + EP6R_Offset, 8> EP_KIND; /* Endpoint kind */
        Register::Bitfield<BASE_ADDRESS + EP6R_Offset, 9, 2, EP6R_EP_TYPE_T> EP_TYPE; /* Endpoint type */
        Register::Bit<BASE_ADDRESS + EP6R_Offset, 11> SETUP; /* Setup transaction completed */
        Register::Bitfield<BASE_ADDRESS + EP6R_Offset, 12, 2, EP6R_STAT_RX_T> STAT_RX; /* Status bits, for reception transfers */
        Register::Bit<BASE_ADDRESS + EP6R_Offset, 14> DTOG_RX; /* Data Toggle, for reception transfers */
        Register::Bit<BASE_ADDRESS + EP6R_Offset, 15> CTR_RX; /* Correct transfer for reception */
    };

    class EP7R_T : public Register::Register<USB_EP7R::ep7r_reg_type, BASE_ADDRESS + EP7R_Offset> {
    // endpoint 7 register
    public:
        Register::Bitfield<BASE_ADDRESS + EP7R_Offset, 0, 4, EP7R_EA_T> EA; /* Endpoint address */
        Register::Bitfield<BASE_ADDRESS + EP7R_Offset, 4, 2, EP7R_STAT_TX_T> STAT_TX; /* Status bits, for transmission transfers */
        Register::Bit<BASE_ADDRESS + EP7R_Offset, 6> DTOG_TX; /* Data Toggle, for transmission transfers */
        Register::Bit<BASE_ADDRESS + EP7R_Offset, 7> CTR_TX; /* Correct Transfer for transmission */
        Register::Bit<BASE_ADDRESS + EP7R_Offset, 8> EP_KIND; /* Endpoint kind */
        Register::Bitfield<BASE_ADDRESS + EP7R_Offset, 9, 2, EP7R_EP_TYPE_T> EP_TYPE; /* Endpoint type */
        Register::Bit<BASE_ADDRESS + EP7R_Offset, 11> SETUP; /* Setup transaction completed */
        Register::Bitfield<BASE_ADDRESS + EP7R_Offset, 12, 2, EP7R_STAT_RX_T> STAT_RX; /* Status bits, for reception transfers */
        Register::Bit<BASE_ADDRESS + EP7R_Offset, 14> DTOG_RX; /* Data Toggle, for reception transfers */
        Register::Bit<BASE_ADDRESS + EP7R_Offset, 15> CTR_RX; /* Correct transfer for reception */
    };

    class CNTR_T : public Register::Register<USB_CNTR::cntr_reg_type, BASE_ADDRESS + CNTR_Offset> {
    // control register
    public:
        Register::Bit<BASE_ADDRESS + CNTR_Offset, 0> FRES; /* Force USB Reset */
        Register::Bit<BASE_ADDRESS + CNTR_Offset, 1> PDWN; /* Power down */
        Register::Bit<BASE_ADDRESS + CNTR_Offset, 2> LPMODE; /* Low-power mode */
        Register::Bit<BASE_ADDRESS + CNTR_Offset, 3> FSUSP; /* Force suspend */
        Register::Bit<BASE_ADDRESS + CNTR_Offset, 4> RESUME; /* Resume request */
        Register::Bit<BASE_ADDRESS + CNTR_Offset, 5> L1RESUME; /* LPM L1 Resume request */
        Register::Bit<BASE_ADDRESS + CNTR_Offset, 7> L1REQM; /* LPM L1 state request interrupt mask */
        Register::Bit<BASE_ADDRESS + CNTR_Offset, 8> ESOFM; /* Expected start of frame interrupt mask */
        Register::Bit<BASE_ADDRESS + CNTR_Offset, 9> SOFM; /* Start of frame interrupt mask */
        Register::Bit<BASE_ADDRESS + CNTR_Offset, 10> RESETM; /* USB reset interrupt mask */
        Register::Bit<BASE_ADDRESS + CNTR_Offset, 11> SUSPM; /* Suspend mode interrupt mask */
        Register::Bit<BASE_ADDRESS + CNTR_Offset, 12> WKUPM; /* Wakeup interrupt mask */
        Register::Bit<BASE_ADDRESS + CNTR_Offset, 13> ERRM; /* Error interrupt mask */
        Register::Bit<BASE_ADDRESS + CNTR_Offset, 14> PMAOVRM; /* Packet memory area over / underrun interrupt mask */
        Register::Bit<BASE_ADDRESS + CNTR_Offset, 15> CTRM; /* Correct transfer interrupt mask */
    };

    class ISTR_T : public Register::Register<USB_ISTR::istr_reg_type, BASE_ADDRESS + ISTR_Offset> {
    // interrupt status register
    public:
        Register::Bitfield<BASE_ADDRESS + ISTR_Offset, 0, 4, ISTR_EP_ID_T> EP_ID; /* Endpoint Identifier */
        Register::Bit<BASE_ADDRESS + ISTR_Offset, 4> DIR; /* Direction of transaction */
        Register::Bit<BASE_ADDRESS + ISTR_Offset, 7> L1REQ; /* LPM L1 state request */
        Register::Bit<BASE_ADDRESS + ISTR_Offset, 8> ESOF; /* Expected start frame */
        Register::Bit<BASE_ADDRESS + ISTR_Offset, 9> SOF; /* start of frame */
        Register::Bit<BASE_ADDRESS + ISTR_Offset, 10> RESET; /* reset request */
        Register::Bit<BASE_ADDRESS + ISTR_Offset, 11> SUSP; /* Suspend mode request */
        Register::Bit<BASE_ADDRESS + ISTR_Offset, 12> WKUP; /* Wakeup */
        Register::Bit<BASE_ADDRESS + ISTR_Offset, 13> ERR; /* Error */
        Register::Bit<BASE_ADDRESS + ISTR_Offset, 14> PMAOVR; /* Packet memory area over / underrun */
        Register::Bit<BASE_ADDRESS + ISTR_Offset, 15> CTR; /* Correct transfer */
    };

    class FNR_T : public Register::Register<USB_FNR::fnr_reg_type, BASE_ADDRESS + FNR_Offset> {
    // frame number register
    public:
        Register::Bitfield<BASE_ADDRESS + FNR_Offset, 0, 11, FNR_FN_T> FN; /* Frame number */
        Register::Bitfield<BASE_ADDRESS + FNR_Offset, 11, 2, FNR_LSOF_T> LSOF; /* Lost SOF */
        Register::Bit<BASE_ADDRESS + FNR_Offset, 13> LCK; /* Locked */
        Register::Bit<BASE_ADDRESS + FNR_Offset, 14> RXDM; /* Receive data - line status */
        Register::Bit<BASE_ADDRESS + FNR_Offset, 15> RXDP; /* Receive data + line status */
    };

    class DADDR_T : public Register::Register<USB_DADDR::daddr_reg_type, BASE_ADDRESS + DADDR_Offset> {
    // device address
    public:
        Register::Bitfield<BASE_ADDRESS + DADDR_Offset, 0, 7, DADDR_ADD_T> ADD; /* Device address */
        Register::Bit<BASE_ADDRESS + DADDR_Offset, 7> EF; /* Enable function */
    };

    class BTABLE_T : public Register::Register<USB_BTABLE::btable_reg_type, BASE_ADDRESS + BTABLE_Offset> {
    // Buffer table address
    public:
        Register::Bitfield<BASE_ADDRESS + BTABLE_Offset, 3, 13, BTABLE_BTABLE_T> BTABLE; /* Buffer table */
    };

    class LPMCSR_T : public Register::Register<USB_LPMCSR::lpmcsr_reg_type, BASE_ADDRESS + LPMCSR_Offset> {
    // LPM control and status register
    public:
        Register::Bit<BASE_ADDRESS + LPMCSR_Offset, 0> LPMEN; /* LPM support enable */
        Register::Bit<BASE_ADDRESS + LPMCSR_Offset, 1> LPMACK; /* LPM Token acknowledge enable */
        Register::Bit<BASE_ADDRESS + LPMCSR_Offset, 3> REMWAKE; /* bRemoteWake value */
        Register::Bitfield<BASE_ADDRESS + LPMCSR_Offset, 4, 4, LPMCSR_BESL_T> BESL; /* BESL value */
    };

    class BCDR_T : public Register::Register<USB_BCDR::bcdr_reg_type, BASE_ADDRESS + BCDR_Offset> {
    // Battery charging detector
    public:
        Register::Bit<BASE_ADDRESS + BCDR_Offset, 0> BCDEN; /* Battery charging detector (BCD) enable */
        Register::Bit<BASE_ADDRESS + BCDR_Offset, 1> DCDEN; /* Data contact detection (DCD) mode enable */
        Register::Bit<BASE_ADDRESS + BCDR_Offset, 2> PDEN; /* Primary detection (PD) mode enable */
        Register::Bit<BASE_ADDRESS + BCDR_Offset, 3> SDEN; /* Secondary detection (SD) mode enable */
        Register::Bit<BASE_ADDRESS + BCDR_Offset, 4> DCDET; /* Data contact detection (DCD) status */
        Register::Bit<BASE_ADDRESS + BCDR_Offset, 5> PDET; /* Primary detection (PD) status */
        Register::Bit<BASE_ADDRESS + BCDR_Offset, 6> SDET; /* Secondary detection (SD) status */
        Register::Bit<BASE_ADDRESS + BCDR_Offset, 7> PS2DET; /* DM pull-up detection status */
        Register::Bit<BASE_ADDRESS + BCDR_Offset, 15> DPPU; /* DP pull-up control */
    };

    EP0R_T EP0R;
    EP1R_T EP1R;
    EP2R_T EP2R;
    EP3R_T EP3R;
    EP4R_T EP4R;
    EP5R_T EP5R;
    EP6R_T EP6R;
    EP7R_T EP7R;
    CNTR_T CNTR;
    ISTR_T ISTR;
    FNR_T FNR;
    DADDR_T DADDR;
    BTABLE_T BTABLE;
    LPMCSR_T LPMCSR;
    BCDR_T BCDR;
};

} // namespace STM32LIB

#endif // STM32F0X1_USB_HPP_

