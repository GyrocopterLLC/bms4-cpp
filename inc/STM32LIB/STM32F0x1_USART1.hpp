#ifndef STM32F0X1_USART1_HPP_
#define STM32F0X1_USART1_HPP_
#pragma once

#include <cstdint>
#include "Register.hpp"

/* Universal synchronous asynchronous receiver transmitter */
namespace STM32LIB { 

/* Overwritable types for each of the bitfields.
 * Defaults to uint32_t, but feel free to redefine with your
 * own custom enum class later. */
using CR1_DEDT_T = uint32_t;
using CR1_DEAT_T = uint32_t;
using CR2_ADD4_T = uint32_t;
using CR2_ADD0_T = uint32_t;
using CR2_ABRMOD_T = uint32_t;
using CR2_STOP_T = uint32_t;
using CR3_WUS_T = uint32_t;
using CR3_SCARCNT_T = uint32_t;
using BRR_DIV_Mantissa_T = uint32_t;
using BRR_DIV_Fraction_T = uint32_t;
using GTPR_GT_T = uint32_t;
using GTPR_PSC_T = uint32_t;
using RTOR_BLEN_T = uint32_t;
using RTOR_RTO_T = uint32_t;
using RDR_RDR_T = uint32_t;
using TDR_TDR_T = uint32_t;

namespace USART1_CR1 {

    enum class cr1_reg_type {};

    template<bool tf>
    using UE = Register::Combo_Bit<cr1_reg_type, 0, tf>;

    template<bool tf>
    using UESM = Register::Combo_Bit<cr1_reg_type, 1, tf>;

    template<bool tf>
    using RE = Register::Combo_Bit<cr1_reg_type, 2, tf>;

    template<bool tf>
    using TE = Register::Combo_Bit<cr1_reg_type, 3, tf>;

    template<bool tf>
    using IDLEIE = Register::Combo_Bit<cr1_reg_type, 4, tf>;

    template<bool tf>
    using RXNEIE = Register::Combo_Bit<cr1_reg_type, 5, tf>;

    template<bool tf>
    using TCIE = Register::Combo_Bit<cr1_reg_type, 6, tf>;

    template<bool tf>
    using TXEIE = Register::Combo_Bit<cr1_reg_type, 7, tf>;

    template<bool tf>
    using PEIE = Register::Combo_Bit<cr1_reg_type, 8, tf>;

    template<bool tf>
    using PS = Register::Combo_Bit<cr1_reg_type, 9, tf>;

    template<bool tf>
    using PCE = Register::Combo_Bit<cr1_reg_type, 10, tf>;

    template<bool tf>
    using WAKE = Register::Combo_Bit<cr1_reg_type, 11, tf>;

    template<bool tf>
    using M = Register::Combo_Bit<cr1_reg_type, 12, tf>;

    template<bool tf>
    using MME = Register::Combo_Bit<cr1_reg_type, 13, tf>;

    template<bool tf>
    using CMIE = Register::Combo_Bit<cr1_reg_type, 14, tf>;

    template<bool tf>
    using OVER8 = Register::Combo_Bit<cr1_reg_type, 15, tf>;

    template<CR1_DEDT_T val>
    using DEDT = Register::Combo_Bitfield<cr1_reg_type, 16, 5, CR1_DEDT_T, val>;

    template<CR1_DEAT_T val>
    using DEAT = Register::Combo_Bitfield<cr1_reg_type, 21, 5, CR1_DEAT_T, val>;

    template<bool tf>
    using RTOIE = Register::Combo_Bit<cr1_reg_type, 26, tf>;

    template<bool tf>
    using EOBIE = Register::Combo_Bit<cr1_reg_type, 27, tf>;

    template<bool tf>
    using M1 = Register::Combo_Bit<cr1_reg_type, 28, tf>;

} // USART1_CR1
namespace USART1_CR2 {

    enum class cr2_reg_type {};

    template<CR2_ADD4_T val>
    using ADD4 = Register::Combo_Bitfield<cr2_reg_type, 28, 4, CR2_ADD4_T, val>;

    template<CR2_ADD0_T val>
    using ADD0 = Register::Combo_Bitfield<cr2_reg_type, 24, 4, CR2_ADD0_T, val>;

    template<bool tf>
    using RTOEN = Register::Combo_Bit<cr2_reg_type, 23, tf>;

    template<CR2_ABRMOD_T val>
    using ABRMOD = Register::Combo_Bitfield<cr2_reg_type, 21, 2, CR2_ABRMOD_T, val>;

    template<bool tf>
    using ABREN = Register::Combo_Bit<cr2_reg_type, 20, tf>;

    template<bool tf>
    using MSBFIRST = Register::Combo_Bit<cr2_reg_type, 19, tf>;

    template<bool tf>
    using DATAINV = Register::Combo_Bit<cr2_reg_type, 18, tf>;

    template<bool tf>
    using TXINV = Register::Combo_Bit<cr2_reg_type, 17, tf>;

    template<bool tf>
    using RXINV = Register::Combo_Bit<cr2_reg_type, 16, tf>;

    template<bool tf>
    using SWAP = Register::Combo_Bit<cr2_reg_type, 15, tf>;

    template<bool tf>
    using LINEN = Register::Combo_Bit<cr2_reg_type, 14, tf>;

    template<CR2_STOP_T val>
    using STOP = Register::Combo_Bitfield<cr2_reg_type, 12, 2, CR2_STOP_T, val>;

    template<bool tf>
    using CLKEN = Register::Combo_Bit<cr2_reg_type, 11, tf>;

    template<bool tf>
    using CPOL = Register::Combo_Bit<cr2_reg_type, 10, tf>;

    template<bool tf>
    using CPHA = Register::Combo_Bit<cr2_reg_type, 9, tf>;

    template<bool tf>
    using LBCL = Register::Combo_Bit<cr2_reg_type, 8, tf>;

    template<bool tf>
    using LBDIE = Register::Combo_Bit<cr2_reg_type, 6, tf>;

    template<bool tf>
    using LBDL = Register::Combo_Bit<cr2_reg_type, 5, tf>;

    template<bool tf>
    using ADDM7 = Register::Combo_Bit<cr2_reg_type, 4, tf>;

} // USART1_CR2
namespace USART1_CR3 {

    enum class cr3_reg_type {};

    template<bool tf>
    using WUFIE = Register::Combo_Bit<cr3_reg_type, 22, tf>;

    template<CR3_WUS_T val>
    using WUS = Register::Combo_Bitfield<cr3_reg_type, 20, 2, CR3_WUS_T, val>;

    template<CR3_SCARCNT_T val>
    using SCARCNT = Register::Combo_Bitfield<cr3_reg_type, 17, 3, CR3_SCARCNT_T, val>;

    template<bool tf>
    using DEP = Register::Combo_Bit<cr3_reg_type, 15, tf>;

    template<bool tf>
    using DEM = Register::Combo_Bit<cr3_reg_type, 14, tf>;

    template<bool tf>
    using DDRE = Register::Combo_Bit<cr3_reg_type, 13, tf>;

    template<bool tf>
    using OVRDIS = Register::Combo_Bit<cr3_reg_type, 12, tf>;

    template<bool tf>
    using ONEBIT = Register::Combo_Bit<cr3_reg_type, 11, tf>;

    template<bool tf>
    using CTSIE = Register::Combo_Bit<cr3_reg_type, 10, tf>;

    template<bool tf>
    using CTSE = Register::Combo_Bit<cr3_reg_type, 9, tf>;

    template<bool tf>
    using RTSE = Register::Combo_Bit<cr3_reg_type, 8, tf>;

    template<bool tf>
    using DMAT = Register::Combo_Bit<cr3_reg_type, 7, tf>;

    template<bool tf>
    using DMAR = Register::Combo_Bit<cr3_reg_type, 6, tf>;

    template<bool tf>
    using SCEN = Register::Combo_Bit<cr3_reg_type, 5, tf>;

    template<bool tf>
    using NACK = Register::Combo_Bit<cr3_reg_type, 4, tf>;

    template<bool tf>
    using HDSEL = Register::Combo_Bit<cr3_reg_type, 3, tf>;

    template<bool tf>
    using IRLP = Register::Combo_Bit<cr3_reg_type, 2, tf>;

    template<bool tf>
    using IREN = Register::Combo_Bit<cr3_reg_type, 1, tf>;

    template<bool tf>
    using EIE = Register::Combo_Bit<cr3_reg_type, 0, tf>;

} // USART1_CR3
namespace USART1_BRR {

    enum class brr_reg_type {};

    template<BRR_DIV_Mantissa_T val>
    using DIV_Mantissa = Register::Combo_Bitfield<brr_reg_type, 4, 12, BRR_DIV_Mantissa_T, val>;

    template<BRR_DIV_Fraction_T val>
    using DIV_Fraction = Register::Combo_Bitfield<brr_reg_type, 0, 4, BRR_DIV_Fraction_T, val>;

} // USART1_BRR
namespace USART1_GTPR {

    enum class gtpr_reg_type {};

    template<GTPR_GT_T val>
    using GT = Register::Combo_Bitfield<gtpr_reg_type, 8, 8, GTPR_GT_T, val>;

    template<GTPR_PSC_T val>
    using PSC = Register::Combo_Bitfield<gtpr_reg_type, 0, 8, GTPR_PSC_T, val>;

} // USART1_GTPR
namespace USART1_RTOR {

    enum class rtor_reg_type {};

    template<RTOR_BLEN_T val>
    using BLEN = Register::Combo_Bitfield<rtor_reg_type, 24, 8, RTOR_BLEN_T, val>;

    template<RTOR_RTO_T val>
    using RTO = Register::Combo_Bitfield<rtor_reg_type, 0, 24, RTOR_RTO_T, val>;

} // USART1_RTOR
namespace USART1_RQR {

    enum class rqr_reg_type {};

    template<bool tf>
    using TXFRQ = Register::Combo_Bit<rqr_reg_type, 4, tf>;

    template<bool tf>
    using RXFRQ = Register::Combo_Bit<rqr_reg_type, 3, tf>;

    template<bool tf>
    using MMRQ = Register::Combo_Bit<rqr_reg_type, 2, tf>;

    template<bool tf>
    using SBKRQ = Register::Combo_Bit<rqr_reg_type, 1, tf>;

    template<bool tf>
    using ABRRQ = Register::Combo_Bit<rqr_reg_type, 0, tf>;

} // USART1_RQR
namespace USART1_ISR {

    enum class isr_reg_type {};

    template<bool tf>
    using REACK = Register::Combo_Bit<isr_reg_type, 22, tf>;

    template<bool tf>
    using TEACK = Register::Combo_Bit<isr_reg_type, 21, tf>;

    template<bool tf>
    using WUF = Register::Combo_Bit<isr_reg_type, 20, tf>;

    template<bool tf>
    using RWU = Register::Combo_Bit<isr_reg_type, 19, tf>;

    template<bool tf>
    using SBKF = Register::Combo_Bit<isr_reg_type, 18, tf>;

    template<bool tf>
    using CMF = Register::Combo_Bit<isr_reg_type, 17, tf>;

    template<bool tf>
    using BUSY = Register::Combo_Bit<isr_reg_type, 16, tf>;

    template<bool tf>
    using ABRF = Register::Combo_Bit<isr_reg_type, 15, tf>;

    template<bool tf>
    using ABRE = Register::Combo_Bit<isr_reg_type, 14, tf>;

    template<bool tf>
    using EOBF = Register::Combo_Bit<isr_reg_type, 12, tf>;

    template<bool tf>
    using RTOF = Register::Combo_Bit<isr_reg_type, 11, tf>;

    template<bool tf>
    using CTS = Register::Combo_Bit<isr_reg_type, 10, tf>;

    template<bool tf>
    using CTSIF = Register::Combo_Bit<isr_reg_type, 9, tf>;

    template<bool tf>
    using LBDF = Register::Combo_Bit<isr_reg_type, 8, tf>;

    template<bool tf>
    using TXE = Register::Combo_Bit<isr_reg_type, 7, tf>;

    template<bool tf>
    using TC = Register::Combo_Bit<isr_reg_type, 6, tf>;

    template<bool tf>
    using RXNE = Register::Combo_Bit<isr_reg_type, 5, tf>;

    template<bool tf>
    using IDLE = Register::Combo_Bit<isr_reg_type, 4, tf>;

    template<bool tf>
    using ORE = Register::Combo_Bit<isr_reg_type, 3, tf>;

    template<bool tf>
    using NF = Register::Combo_Bit<isr_reg_type, 2, tf>;

    template<bool tf>
    using FE = Register::Combo_Bit<isr_reg_type, 1, tf>;

    template<bool tf>
    using PE = Register::Combo_Bit<isr_reg_type, 0, tf>;

} // USART1_ISR
namespace USART1_ICR {

    enum class icr_reg_type {};

    template<bool tf>
    using WUCF = Register::Combo_Bit<icr_reg_type, 20, tf>;

    template<bool tf>
    using CMCF = Register::Combo_Bit<icr_reg_type, 17, tf>;

    template<bool tf>
    using EOBCF = Register::Combo_Bit<icr_reg_type, 12, tf>;

    template<bool tf>
    using RTOCF = Register::Combo_Bit<icr_reg_type, 11, tf>;

    template<bool tf>
    using CTSCF = Register::Combo_Bit<icr_reg_type, 9, tf>;

    template<bool tf>
    using LBDCF = Register::Combo_Bit<icr_reg_type, 8, tf>;

    template<bool tf>
    using TCCF = Register::Combo_Bit<icr_reg_type, 6, tf>;

    template<bool tf>
    using IDLECF = Register::Combo_Bit<icr_reg_type, 4, tf>;

    template<bool tf>
    using ORECF = Register::Combo_Bit<icr_reg_type, 3, tf>;

    template<bool tf>
    using NCF = Register::Combo_Bit<icr_reg_type, 2, tf>;

    template<bool tf>
    using FECF = Register::Combo_Bit<icr_reg_type, 1, tf>;

    template<bool tf>
    using PECF = Register::Combo_Bit<icr_reg_type, 0, tf>;

} // USART1_ICR
namespace USART1_RDR {

    enum class rdr_reg_type {};

    template<RDR_RDR_T val>
    using RDR = Register::Combo_Bitfield<rdr_reg_type, 0, 9, RDR_RDR_T, val>;

} // USART1_RDR
namespace USART1_TDR {

    enum class tdr_reg_type {};

    template<TDR_TDR_T val>
    using TDR = Register::Combo_Bitfield<tdr_reg_type, 0, 9, TDR_TDR_T, val>;

} // USART1_TDR
template<uint32_t BASE_ADDRESS>
class USART1 {
public:
    static const uint32_t CR1_Offset = 0x0000;
    static const uint32_t CR2_Offset = 0x0004;
    static const uint32_t CR3_Offset = 0x0008;
    static const uint32_t BRR_Offset = 0x000C;
    static const uint32_t GTPR_Offset = 0x0010;
    static const uint32_t RTOR_Offset = 0x0014;
    static const uint32_t RQR_Offset = 0x0018;
    static const uint32_t ISR_Offset = 0x001C;
    static const uint32_t ICR_Offset = 0x0020;
    static const uint32_t RDR_Offset = 0x0024;
    static const uint32_t TDR_Offset = 0x0028;

    USART1() = default;
    USART1( const USART1& ) = delete;
    const USART1& operator=( const USART1& ) = delete;

    class CR1_T : public Register::Register<USART1_CR1::cr1_reg_type, BASE_ADDRESS + CR1_Offset> {
    // Control register 1
    public:
        Register::Bit<BASE_ADDRESS + CR1_Offset, 0> UE; /* USART enable */
        Register::Bit<BASE_ADDRESS + CR1_Offset, 1> UESM; /* USART enable in Stop mode */
        Register::Bit<BASE_ADDRESS + CR1_Offset, 2> RE; /* Receiver enable */
        Register::Bit<BASE_ADDRESS + CR1_Offset, 3> TE; /* Transmitter enable */
        Register::Bit<BASE_ADDRESS + CR1_Offset, 4> IDLEIE; /* IDLE interrupt enable */
        Register::Bit<BASE_ADDRESS + CR1_Offset, 5> RXNEIE; /* RXNE interrupt enable */
        Register::Bit<BASE_ADDRESS + CR1_Offset, 6> TCIE; /* Transmission complete interrupt enable */
        Register::Bit<BASE_ADDRESS + CR1_Offset, 7> TXEIE; /* interrupt enable */
        Register::Bit<BASE_ADDRESS + CR1_Offset, 8> PEIE; /* PE interrupt enable */
        Register::Bit<BASE_ADDRESS + CR1_Offset, 9> PS; /* Parity selection */
        Register::Bit<BASE_ADDRESS + CR1_Offset, 10> PCE; /* Parity control enable */
        Register::Bit<BASE_ADDRESS + CR1_Offset, 11> WAKE; /* Receiver wakeup method */
        Register::Bit<BASE_ADDRESS + CR1_Offset, 12> M; /* Word length */
        Register::Bit<BASE_ADDRESS + CR1_Offset, 13> MME; /* Mute mode enable */
        Register::Bit<BASE_ADDRESS + CR1_Offset, 14> CMIE; /* Character match interrupt enable */
        Register::Bit<BASE_ADDRESS + CR1_Offset, 15> OVER8; /* Oversampling mode */
        Register::Bitfield<BASE_ADDRESS + CR1_Offset, 16, 5, CR1_DEDT_T> DEDT; /* Driver Enable deassertion time */
        Register::Bitfield<BASE_ADDRESS + CR1_Offset, 21, 5, CR1_DEAT_T> DEAT; /* Driver Enable assertion time */
        Register::Bit<BASE_ADDRESS + CR1_Offset, 26> RTOIE; /* Receiver timeout interrupt enable */
        Register::Bit<BASE_ADDRESS + CR1_Offset, 27> EOBIE; /* End of Block interrupt enable */
        Register::Bit<BASE_ADDRESS + CR1_Offset, 28> M1; /* Word length */
    };

    class CR2_T : public Register::Register<USART1_CR2::cr2_reg_type, BASE_ADDRESS + CR2_Offset> {
    // Control register 2
    public:
        Register::Bitfield<BASE_ADDRESS + CR2_Offset, 28, 4, CR2_ADD4_T> ADD4; /* Address of the USART node */
        Register::Bitfield<BASE_ADDRESS + CR2_Offset, 24, 4, CR2_ADD0_T> ADD0; /* Address of the USART node */
        Register::Bit<BASE_ADDRESS + CR2_Offset, 23> RTOEN; /* Receiver timeout enable */
        Register::Bitfield<BASE_ADDRESS + CR2_Offset, 21, 2, CR2_ABRMOD_T> ABRMOD; /* Auto baud rate mode */
        Register::Bit<BASE_ADDRESS + CR2_Offset, 20> ABREN; /* Auto baud rate enable */
        Register::Bit<BASE_ADDRESS + CR2_Offset, 19> MSBFIRST; /* Most significant bit first */
        Register::Bit<BASE_ADDRESS + CR2_Offset, 18> DATAINV; /* Binary data inversion */
        Register::Bit<BASE_ADDRESS + CR2_Offset, 17> TXINV; /* TX pin active level inversion */
        Register::Bit<BASE_ADDRESS + CR2_Offset, 16> RXINV; /* RX pin active level inversion */
        Register::Bit<BASE_ADDRESS + CR2_Offset, 15> SWAP; /* Swap TX/RX pins */
        Register::Bit<BASE_ADDRESS + CR2_Offset, 14> LINEN; /* LIN mode enable */
        Register::Bitfield<BASE_ADDRESS + CR2_Offset, 12, 2, CR2_STOP_T> STOP; /* STOP bits */
        Register::Bit<BASE_ADDRESS + CR2_Offset, 11> CLKEN; /* Clock enable */
        Register::Bit<BASE_ADDRESS + CR2_Offset, 10> CPOL; /* Clock polarity */
        Register::Bit<BASE_ADDRESS + CR2_Offset, 9> CPHA; /* Clock phase */
        Register::Bit<BASE_ADDRESS + CR2_Offset, 8> LBCL; /* Last bit clock pulse */
        Register::Bit<BASE_ADDRESS + CR2_Offset, 6> LBDIE; /* LIN break detection interrupt enable */
        Register::Bit<BASE_ADDRESS + CR2_Offset, 5> LBDL; /* LIN break detection length */
        Register::Bit<BASE_ADDRESS + CR2_Offset, 4> ADDM7; /* 7-bit Address Detection/4-bit Address Detection */
    };

    class CR3_T : public Register::Register<USART1_CR3::cr3_reg_type, BASE_ADDRESS + CR3_Offset> {
    // Control register 3
    public:
        Register::Bit<BASE_ADDRESS + CR3_Offset, 22> WUFIE; /* Wakeup from Stop mode interrupt enable */
        Register::Bitfield<BASE_ADDRESS + CR3_Offset, 20, 2, CR3_WUS_T> WUS; /* Wakeup from Stop mode interrupt flag selection */
        Register::Bitfield<BASE_ADDRESS + CR3_Offset, 17, 3, CR3_SCARCNT_T> SCARCNT; /* Smartcard auto-retry count */
        Register::Bit<BASE_ADDRESS + CR3_Offset, 15> DEP; /* Driver enable polarity selection */
        Register::Bit<BASE_ADDRESS + CR3_Offset, 14> DEM; /* Driver enable mode */
        Register::Bit<BASE_ADDRESS + CR3_Offset, 13> DDRE; /* DMA Disable on Reception Error */
        Register::Bit<BASE_ADDRESS + CR3_Offset, 12> OVRDIS; /* Overrun Disable */
        Register::Bit<BASE_ADDRESS + CR3_Offset, 11> ONEBIT; /* One sample bit method enable */
        Register::Bit<BASE_ADDRESS + CR3_Offset, 10> CTSIE; /* CTS interrupt enable */
        Register::Bit<BASE_ADDRESS + CR3_Offset, 9> CTSE; /* CTS enable */
        Register::Bit<BASE_ADDRESS + CR3_Offset, 8> RTSE; /* RTS enable */
        Register::Bit<BASE_ADDRESS + CR3_Offset, 7> DMAT; /* DMA enable transmitter */
        Register::Bit<BASE_ADDRESS + CR3_Offset, 6> DMAR; /* DMA enable receiver */
        Register::Bit<BASE_ADDRESS + CR3_Offset, 5> SCEN; /* Smartcard mode enable */
        Register::Bit<BASE_ADDRESS + CR3_Offset, 4> NACK; /* Smartcard NACK enable */
        Register::Bit<BASE_ADDRESS + CR3_Offset, 3> HDSEL; /* Half-duplex selection */
        Register::Bit<BASE_ADDRESS + CR3_Offset, 2> IRLP; /* IrDA low-power */
        Register::Bit<BASE_ADDRESS + CR3_Offset, 1> IREN; /* IrDA mode enable */
        Register::Bit<BASE_ADDRESS + CR3_Offset, 0> EIE; /* Error interrupt enable */
    };

    class BRR_T : public Register::Register<USART1_BRR::brr_reg_type, BASE_ADDRESS + BRR_Offset> {
    // Baud rate register
    public:
        Register::Bitfield<BASE_ADDRESS + BRR_Offset, 4, 12, BRR_DIV_Mantissa_T> DIV_Mantissa; /* mantissa of USARTDIV */
        Register::Bitfield<BASE_ADDRESS + BRR_Offset, 0, 4, BRR_DIV_Fraction_T> DIV_Fraction; /* fraction of USARTDIV */
    };

    class GTPR_T : public Register::Register<USART1_GTPR::gtpr_reg_type, BASE_ADDRESS + GTPR_Offset> {
    // Guard time and prescaler register
    public:
        Register::Bitfield<BASE_ADDRESS + GTPR_Offset, 8, 8, GTPR_GT_T> GT; /* Guard time value */
        Register::Bitfield<BASE_ADDRESS + GTPR_Offset, 0, 8, GTPR_PSC_T> PSC; /* Prescaler value */
    };

    class RTOR_T : public Register::Register<USART1_RTOR::rtor_reg_type, BASE_ADDRESS + RTOR_Offset> {
    // Receiver timeout register
    public:
        Register::Bitfield<BASE_ADDRESS + RTOR_Offset, 24, 8, RTOR_BLEN_T> BLEN; /* Block Length */
        Register::Bitfield<BASE_ADDRESS + RTOR_Offset, 0, 24, RTOR_RTO_T> RTO; /* Receiver timeout value */
    };

    class RQR_T : public Register::Register<USART1_RQR::rqr_reg_type, BASE_ADDRESS + RQR_Offset> {
    // Request register
    public:
        Register::Bit<BASE_ADDRESS + RQR_Offset, 4> TXFRQ; /* Transmit data flush request */
        Register::Bit<BASE_ADDRESS + RQR_Offset, 3> RXFRQ; /* Receive data flush request */
        Register::Bit<BASE_ADDRESS + RQR_Offset, 2> MMRQ; /* Mute mode request */
        Register::Bit<BASE_ADDRESS + RQR_Offset, 1> SBKRQ; /* Send break request */
        Register::Bit<BASE_ADDRESS + RQR_Offset, 0> ABRRQ; /* Auto baud rate request */
    };

    class ISR_T : public Register::Register<USART1_ISR::isr_reg_type, BASE_ADDRESS + ISR_Offset> {
    // Interrupt & status register
    public:
        Register::Bit<BASE_ADDRESS + ISR_Offset, 22> REACK; /* Receive enable acknowledge flag */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 21> TEACK; /* Transmit enable acknowledge flag */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 20> WUF; /* Wakeup from Stop mode flag */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 19> RWU; /* Receiver wakeup from Mute mode */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 18> SBKF; /* Send break flag */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 17> CMF; /* character match flag */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 16> BUSY; /* Busy flag */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 15> ABRF; /* Auto baud rate flag */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 14> ABRE; /* Auto baud rate error */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 12> EOBF; /* End of block flag */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 11> RTOF; /* Receiver timeout */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 10> CTS; /* CTS flag */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 9> CTSIF; /* CTS interrupt flag */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 8> LBDF; /* LIN break detection flag */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 7> TXE; /* Transmit data register empty */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 6> TC; /* Transmission complete */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 5> RXNE; /* Read data register not empty */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 4> IDLE; /* Idle line detected */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 3> ORE; /* Overrun error */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 2> NF; /* Noise detected flag */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 1> FE; /* Framing error */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 0> PE; /* Parity error */
    };

    class ICR_T : public Register::Register<USART1_ICR::icr_reg_type, BASE_ADDRESS + ICR_Offset> {
    // Interrupt flag clear register
    public:
        Register::Bit<BASE_ADDRESS + ICR_Offset, 20> WUCF; /* Wakeup from Stop mode clear flag */
        Register::Bit<BASE_ADDRESS + ICR_Offset, 17> CMCF; /* Character match clear flag */
        Register::Bit<BASE_ADDRESS + ICR_Offset, 12> EOBCF; /* End of timeout clear flag */
        Register::Bit<BASE_ADDRESS + ICR_Offset, 11> RTOCF; /* Receiver timeout clear flag */
        Register::Bit<BASE_ADDRESS + ICR_Offset, 9> CTSCF; /* CTS clear flag */
        Register::Bit<BASE_ADDRESS + ICR_Offset, 8> LBDCF; /* LIN break detection clear flag */
        Register::Bit<BASE_ADDRESS + ICR_Offset, 6> TCCF; /* Transmission complete clear flag */
        Register::Bit<BASE_ADDRESS + ICR_Offset, 4> IDLECF; /* Idle line detected clear flag */
        Register::Bit<BASE_ADDRESS + ICR_Offset, 3> ORECF; /* Overrun error clear flag */
        Register::Bit<BASE_ADDRESS + ICR_Offset, 2> NCF; /* Noise detected clear flag */
        Register::Bit<BASE_ADDRESS + ICR_Offset, 1> FECF; /* Framing error clear flag */
        Register::Bit<BASE_ADDRESS + ICR_Offset, 0> PECF; /* Parity error clear flag */
    };

    class RDR_T : public Register::Register<USART1_RDR::rdr_reg_type, BASE_ADDRESS + RDR_Offset> {
    // Receive data register
    public:
        Register::Bitfield<BASE_ADDRESS + RDR_Offset, 0, 9, RDR_RDR_T> RDR; /* Receive data value */
    };

    class TDR_T : public Register::Register<USART1_TDR::tdr_reg_type, BASE_ADDRESS + TDR_Offset> {
    // Transmit data register
    public:
        Register::Bitfield<BASE_ADDRESS + TDR_Offset, 0, 9, TDR_TDR_T> TDR; /* Transmit data value */
    };

    CR1_T CR1;
    CR2_T CR2;
    CR3_T CR3;
    BRR_T BRR;
    GTPR_T GTPR;
    RTOR_T RTOR;
    RQR_T RQR;
    ISR_T ISR;
    ICR_T ICR;
    RDR_T RDR;
    TDR_T TDR;
};

} // namespace STM32LIB

#endif // STM32F0X1_USART1_HPP_

