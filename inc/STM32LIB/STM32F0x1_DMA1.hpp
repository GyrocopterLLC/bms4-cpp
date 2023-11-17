#ifndef STM32F0X1_DMA1_HPP_
#define STM32F0X1_DMA1_HPP_
#pragma once

#include <cstdint>
#include "Register.hpp"

/* DMA controller */
namespace STM32LIB { 

/* Overwritable types for each of the bitfields.
 * Defaults to uint32_t, but feel free to redefine with your
 * own custom enum class later. */
using CCR1_PSIZE_T = uint32_t;
using CCR1_MSIZE_T = uint32_t;
using CCR1_PL_T = uint32_t;
using CNDTR1_NDT_T = uint32_t;
using CPAR1_PA_T = uint32_t;
using CMAR1_MA_T = uint32_t;
using CCR2_PSIZE_T = uint32_t;
using CCR2_MSIZE_T = uint32_t;
using CCR2_PL_T = uint32_t;
using CNDTR2_NDT_T = uint32_t;
using CPAR2_PA_T = uint32_t;
using CMAR2_MA_T = uint32_t;
using CCR3_PSIZE_T = uint32_t;
using CCR3_MSIZE_T = uint32_t;
using CCR3_PL_T = uint32_t;
using CNDTR3_NDT_T = uint32_t;
using CPAR3_PA_T = uint32_t;
using CMAR3_MA_T = uint32_t;
using CCR4_PSIZE_T = uint32_t;
using CCR4_MSIZE_T = uint32_t;
using CCR4_PL_T = uint32_t;
using CNDTR4_NDT_T = uint32_t;
using CPAR4_PA_T = uint32_t;
using CMAR4_MA_T = uint32_t;
using CCR5_PSIZE_T = uint32_t;
using CCR5_MSIZE_T = uint32_t;
using CCR5_PL_T = uint32_t;
using CNDTR5_NDT_T = uint32_t;
using CPAR5_PA_T = uint32_t;
using CMAR5_MA_T = uint32_t;
using CCR6_PSIZE_T = uint32_t;
using CCR6_MSIZE_T = uint32_t;
using CCR6_PL_T = uint32_t;
using CNDTR6_NDT_T = uint32_t;
using CPAR6_PA_T = uint32_t;
using CMAR6_MA_T = uint32_t;
using CCR7_PSIZE_T = uint32_t;
using CCR7_MSIZE_T = uint32_t;
using CCR7_PL_T = uint32_t;
using CNDTR7_NDT_T = uint32_t;
using CPAR7_PA_T = uint32_t;
using CMAR7_MA_T = uint32_t;

namespace DMA1_ISR {

    enum class isr_reg_type {};

    template<bool tf>
    using GIF1 = Register::Combo_Bit<isr_reg_type, 0, tf>;

    template<bool tf>
    using TCIF1 = Register::Combo_Bit<isr_reg_type, 1, tf>;

    template<bool tf>
    using HTIF1 = Register::Combo_Bit<isr_reg_type, 2, tf>;

    template<bool tf>
    using TEIF1 = Register::Combo_Bit<isr_reg_type, 3, tf>;

    template<bool tf>
    using GIF2 = Register::Combo_Bit<isr_reg_type, 4, tf>;

    template<bool tf>
    using TCIF2 = Register::Combo_Bit<isr_reg_type, 5, tf>;

    template<bool tf>
    using HTIF2 = Register::Combo_Bit<isr_reg_type, 6, tf>;

    template<bool tf>
    using TEIF2 = Register::Combo_Bit<isr_reg_type, 7, tf>;

    template<bool tf>
    using GIF3 = Register::Combo_Bit<isr_reg_type, 8, tf>;

    template<bool tf>
    using TCIF3 = Register::Combo_Bit<isr_reg_type, 9, tf>;

    template<bool tf>
    using HTIF3 = Register::Combo_Bit<isr_reg_type, 10, tf>;

    template<bool tf>
    using TEIF3 = Register::Combo_Bit<isr_reg_type, 11, tf>;

    template<bool tf>
    using GIF4 = Register::Combo_Bit<isr_reg_type, 12, tf>;

    template<bool tf>
    using TCIF4 = Register::Combo_Bit<isr_reg_type, 13, tf>;

    template<bool tf>
    using HTIF4 = Register::Combo_Bit<isr_reg_type, 14, tf>;

    template<bool tf>
    using TEIF4 = Register::Combo_Bit<isr_reg_type, 15, tf>;

    template<bool tf>
    using GIF5 = Register::Combo_Bit<isr_reg_type, 16, tf>;

    template<bool tf>
    using TCIF5 = Register::Combo_Bit<isr_reg_type, 17, tf>;

    template<bool tf>
    using HTIF5 = Register::Combo_Bit<isr_reg_type, 18, tf>;

    template<bool tf>
    using TEIF5 = Register::Combo_Bit<isr_reg_type, 19, tf>;

    template<bool tf>
    using GIF6 = Register::Combo_Bit<isr_reg_type, 20, tf>;

    template<bool tf>
    using TCIF6 = Register::Combo_Bit<isr_reg_type, 21, tf>;

    template<bool tf>
    using HTIF6 = Register::Combo_Bit<isr_reg_type, 22, tf>;

    template<bool tf>
    using TEIF6 = Register::Combo_Bit<isr_reg_type, 23, tf>;

    template<bool tf>
    using GIF7 = Register::Combo_Bit<isr_reg_type, 24, tf>;

    template<bool tf>
    using TCIF7 = Register::Combo_Bit<isr_reg_type, 25, tf>;

    template<bool tf>
    using HTIF7 = Register::Combo_Bit<isr_reg_type, 26, tf>;

    template<bool tf>
    using TEIF7 = Register::Combo_Bit<isr_reg_type, 27, tf>;

} // DMA1_ISR
namespace DMA1_IFCR {

    enum class ifcr_reg_type {};

    template<bool tf>
    using CGIF1 = Register::Combo_Bit<ifcr_reg_type, 0, tf>;

    template<bool tf>
    using CTCIF1 = Register::Combo_Bit<ifcr_reg_type, 1, tf>;

    template<bool tf>
    using CHTIF1 = Register::Combo_Bit<ifcr_reg_type, 2, tf>;

    template<bool tf>
    using CTEIF1 = Register::Combo_Bit<ifcr_reg_type, 3, tf>;

    template<bool tf>
    using CGIF2 = Register::Combo_Bit<ifcr_reg_type, 4, tf>;

    template<bool tf>
    using CTCIF2 = Register::Combo_Bit<ifcr_reg_type, 5, tf>;

    template<bool tf>
    using CHTIF2 = Register::Combo_Bit<ifcr_reg_type, 6, tf>;

    template<bool tf>
    using CTEIF2 = Register::Combo_Bit<ifcr_reg_type, 7, tf>;

    template<bool tf>
    using CGIF3 = Register::Combo_Bit<ifcr_reg_type, 8, tf>;

    template<bool tf>
    using CTCIF3 = Register::Combo_Bit<ifcr_reg_type, 9, tf>;

    template<bool tf>
    using CHTIF3 = Register::Combo_Bit<ifcr_reg_type, 10, tf>;

    template<bool tf>
    using CTEIF3 = Register::Combo_Bit<ifcr_reg_type, 11, tf>;

    template<bool tf>
    using CGIF4 = Register::Combo_Bit<ifcr_reg_type, 12, tf>;

    template<bool tf>
    using CTCIF4 = Register::Combo_Bit<ifcr_reg_type, 13, tf>;

    template<bool tf>
    using CHTIF4 = Register::Combo_Bit<ifcr_reg_type, 14, tf>;

    template<bool tf>
    using CTEIF4 = Register::Combo_Bit<ifcr_reg_type, 15, tf>;

    template<bool tf>
    using CGIF5 = Register::Combo_Bit<ifcr_reg_type, 16, tf>;

    template<bool tf>
    using CTCIF5 = Register::Combo_Bit<ifcr_reg_type, 17, tf>;

    template<bool tf>
    using CHTIF5 = Register::Combo_Bit<ifcr_reg_type, 18, tf>;

    template<bool tf>
    using CTEIF5 = Register::Combo_Bit<ifcr_reg_type, 19, tf>;

    template<bool tf>
    using CGIF6 = Register::Combo_Bit<ifcr_reg_type, 20, tf>;

    template<bool tf>
    using CTCIF6 = Register::Combo_Bit<ifcr_reg_type, 21, tf>;

    template<bool tf>
    using CHTIF6 = Register::Combo_Bit<ifcr_reg_type, 22, tf>;

    template<bool tf>
    using CTEIF6 = Register::Combo_Bit<ifcr_reg_type, 23, tf>;

    template<bool tf>
    using CGIF7 = Register::Combo_Bit<ifcr_reg_type, 24, tf>;

    template<bool tf>
    using CTCIF7 = Register::Combo_Bit<ifcr_reg_type, 25, tf>;

    template<bool tf>
    using CHTIF7 = Register::Combo_Bit<ifcr_reg_type, 26, tf>;

    template<bool tf>
    using CTEIF7 = Register::Combo_Bit<ifcr_reg_type, 27, tf>;

} // DMA1_IFCR
namespace DMA1_CCR1 {

    enum class ccr1_reg_type {};

    template<bool tf>
    using EN = Register::Combo_Bit<ccr1_reg_type, 0, tf>;

    template<bool tf>
    using TCIE = Register::Combo_Bit<ccr1_reg_type, 1, tf>;

    template<bool tf>
    using HTIE = Register::Combo_Bit<ccr1_reg_type, 2, tf>;

    template<bool tf>
    using TEIE = Register::Combo_Bit<ccr1_reg_type, 3, tf>;

    template<bool tf>
    using DIR = Register::Combo_Bit<ccr1_reg_type, 4, tf>;

    template<bool tf>
    using CIRC = Register::Combo_Bit<ccr1_reg_type, 5, tf>;

    template<bool tf>
    using PINC = Register::Combo_Bit<ccr1_reg_type, 6, tf>;

    template<bool tf>
    using MINC = Register::Combo_Bit<ccr1_reg_type, 7, tf>;

    template<CCR1_PSIZE_T val>
    using PSIZE = Register::Combo_Bitfield<ccr1_reg_type, 8, 2, CCR1_PSIZE_T, val>;

    template<CCR1_MSIZE_T val>
    using MSIZE = Register::Combo_Bitfield<ccr1_reg_type, 10, 2, CCR1_MSIZE_T, val>;

    template<CCR1_PL_T val>
    using PL = Register::Combo_Bitfield<ccr1_reg_type, 12, 2, CCR1_PL_T, val>;

    template<bool tf>
    using MEM2MEM = Register::Combo_Bit<ccr1_reg_type, 14, tf>;

} // DMA1_CCR1
namespace DMA1_CNDTR1 {

    enum class cndtr1_reg_type {};

    template<CNDTR1_NDT_T val>
    using NDT = Register::Combo_Bitfield<cndtr1_reg_type, 0, 16, CNDTR1_NDT_T, val>;

} // DMA1_CNDTR1
namespace DMA1_CPAR1 {

    enum class cpar1_reg_type {};

    template<CPAR1_PA_T val>
    using PA = Register::Combo_Bitfield<cpar1_reg_type, 0, 32, CPAR1_PA_T, val>;

} // DMA1_CPAR1
namespace DMA1_CMAR1 {

    enum class cmar1_reg_type {};

    template<CMAR1_MA_T val>
    using MA = Register::Combo_Bitfield<cmar1_reg_type, 0, 32, CMAR1_MA_T, val>;

} // DMA1_CMAR1
namespace DMA1_CCR2 {

    enum class ccr2_reg_type {};

    template<bool tf>
    using EN = Register::Combo_Bit<ccr2_reg_type, 0, tf>;

    template<bool tf>
    using TCIE = Register::Combo_Bit<ccr2_reg_type, 1, tf>;

    template<bool tf>
    using HTIE = Register::Combo_Bit<ccr2_reg_type, 2, tf>;

    template<bool tf>
    using TEIE = Register::Combo_Bit<ccr2_reg_type, 3, tf>;

    template<bool tf>
    using DIR = Register::Combo_Bit<ccr2_reg_type, 4, tf>;

    template<bool tf>
    using CIRC = Register::Combo_Bit<ccr2_reg_type, 5, tf>;

    template<bool tf>
    using PINC = Register::Combo_Bit<ccr2_reg_type, 6, tf>;

    template<bool tf>
    using MINC = Register::Combo_Bit<ccr2_reg_type, 7, tf>;

    template<CCR2_PSIZE_T val>
    using PSIZE = Register::Combo_Bitfield<ccr2_reg_type, 8, 2, CCR2_PSIZE_T, val>;

    template<CCR2_MSIZE_T val>
    using MSIZE = Register::Combo_Bitfield<ccr2_reg_type, 10, 2, CCR2_MSIZE_T, val>;

    template<CCR2_PL_T val>
    using PL = Register::Combo_Bitfield<ccr2_reg_type, 12, 2, CCR2_PL_T, val>;

    template<bool tf>
    using MEM2MEM = Register::Combo_Bit<ccr2_reg_type, 14, tf>;

} // DMA1_CCR2
namespace DMA1_CNDTR2 {

    enum class cndtr2_reg_type {};

    template<CNDTR2_NDT_T val>
    using NDT = Register::Combo_Bitfield<cndtr2_reg_type, 0, 16, CNDTR2_NDT_T, val>;

} // DMA1_CNDTR2
namespace DMA1_CPAR2 {

    enum class cpar2_reg_type {};

    template<CPAR2_PA_T val>
    using PA = Register::Combo_Bitfield<cpar2_reg_type, 0, 32, CPAR2_PA_T, val>;

} // DMA1_CPAR2
namespace DMA1_CMAR2 {

    enum class cmar2_reg_type {};

    template<CMAR2_MA_T val>
    using MA = Register::Combo_Bitfield<cmar2_reg_type, 0, 32, CMAR2_MA_T, val>;

} // DMA1_CMAR2
namespace DMA1_CCR3 {

    enum class ccr3_reg_type {};

    template<bool tf>
    using EN = Register::Combo_Bit<ccr3_reg_type, 0, tf>;

    template<bool tf>
    using TCIE = Register::Combo_Bit<ccr3_reg_type, 1, tf>;

    template<bool tf>
    using HTIE = Register::Combo_Bit<ccr3_reg_type, 2, tf>;

    template<bool tf>
    using TEIE = Register::Combo_Bit<ccr3_reg_type, 3, tf>;

    template<bool tf>
    using DIR = Register::Combo_Bit<ccr3_reg_type, 4, tf>;

    template<bool tf>
    using CIRC = Register::Combo_Bit<ccr3_reg_type, 5, tf>;

    template<bool tf>
    using PINC = Register::Combo_Bit<ccr3_reg_type, 6, tf>;

    template<bool tf>
    using MINC = Register::Combo_Bit<ccr3_reg_type, 7, tf>;

    template<CCR3_PSIZE_T val>
    using PSIZE = Register::Combo_Bitfield<ccr3_reg_type, 8, 2, CCR3_PSIZE_T, val>;

    template<CCR3_MSIZE_T val>
    using MSIZE = Register::Combo_Bitfield<ccr3_reg_type, 10, 2, CCR3_MSIZE_T, val>;

    template<CCR3_PL_T val>
    using PL = Register::Combo_Bitfield<ccr3_reg_type, 12, 2, CCR3_PL_T, val>;

    template<bool tf>
    using MEM2MEM = Register::Combo_Bit<ccr3_reg_type, 14, tf>;

} // DMA1_CCR3
namespace DMA1_CNDTR3 {

    enum class cndtr3_reg_type {};

    template<CNDTR3_NDT_T val>
    using NDT = Register::Combo_Bitfield<cndtr3_reg_type, 0, 16, CNDTR3_NDT_T, val>;

} // DMA1_CNDTR3
namespace DMA1_CPAR3 {

    enum class cpar3_reg_type {};

    template<CPAR3_PA_T val>
    using PA = Register::Combo_Bitfield<cpar3_reg_type, 0, 32, CPAR3_PA_T, val>;

} // DMA1_CPAR3
namespace DMA1_CMAR3 {

    enum class cmar3_reg_type {};

    template<CMAR3_MA_T val>
    using MA = Register::Combo_Bitfield<cmar3_reg_type, 0, 32, CMAR3_MA_T, val>;

} // DMA1_CMAR3
namespace DMA1_CCR4 {

    enum class ccr4_reg_type {};

    template<bool tf>
    using EN = Register::Combo_Bit<ccr4_reg_type, 0, tf>;

    template<bool tf>
    using TCIE = Register::Combo_Bit<ccr4_reg_type, 1, tf>;

    template<bool tf>
    using HTIE = Register::Combo_Bit<ccr4_reg_type, 2, tf>;

    template<bool tf>
    using TEIE = Register::Combo_Bit<ccr4_reg_type, 3, tf>;

    template<bool tf>
    using DIR = Register::Combo_Bit<ccr4_reg_type, 4, tf>;

    template<bool tf>
    using CIRC = Register::Combo_Bit<ccr4_reg_type, 5, tf>;

    template<bool tf>
    using PINC = Register::Combo_Bit<ccr4_reg_type, 6, tf>;

    template<bool tf>
    using MINC = Register::Combo_Bit<ccr4_reg_type, 7, tf>;

    template<CCR4_PSIZE_T val>
    using PSIZE = Register::Combo_Bitfield<ccr4_reg_type, 8, 2, CCR4_PSIZE_T, val>;

    template<CCR4_MSIZE_T val>
    using MSIZE = Register::Combo_Bitfield<ccr4_reg_type, 10, 2, CCR4_MSIZE_T, val>;

    template<CCR4_PL_T val>
    using PL = Register::Combo_Bitfield<ccr4_reg_type, 12, 2, CCR4_PL_T, val>;

    template<bool tf>
    using MEM2MEM = Register::Combo_Bit<ccr4_reg_type, 14, tf>;

} // DMA1_CCR4
namespace DMA1_CNDTR4 {

    enum class cndtr4_reg_type {};

    template<CNDTR4_NDT_T val>
    using NDT = Register::Combo_Bitfield<cndtr4_reg_type, 0, 16, CNDTR4_NDT_T, val>;

} // DMA1_CNDTR4
namespace DMA1_CPAR4 {

    enum class cpar4_reg_type {};

    template<CPAR4_PA_T val>
    using PA = Register::Combo_Bitfield<cpar4_reg_type, 0, 32, CPAR4_PA_T, val>;

} // DMA1_CPAR4
namespace DMA1_CMAR4 {

    enum class cmar4_reg_type {};

    template<CMAR4_MA_T val>
    using MA = Register::Combo_Bitfield<cmar4_reg_type, 0, 32, CMAR4_MA_T, val>;

} // DMA1_CMAR4
namespace DMA1_CCR5 {

    enum class ccr5_reg_type {};

    template<bool tf>
    using EN = Register::Combo_Bit<ccr5_reg_type, 0, tf>;

    template<bool tf>
    using TCIE = Register::Combo_Bit<ccr5_reg_type, 1, tf>;

    template<bool tf>
    using HTIE = Register::Combo_Bit<ccr5_reg_type, 2, tf>;

    template<bool tf>
    using TEIE = Register::Combo_Bit<ccr5_reg_type, 3, tf>;

    template<bool tf>
    using DIR = Register::Combo_Bit<ccr5_reg_type, 4, tf>;

    template<bool tf>
    using CIRC = Register::Combo_Bit<ccr5_reg_type, 5, tf>;

    template<bool tf>
    using PINC = Register::Combo_Bit<ccr5_reg_type, 6, tf>;

    template<bool tf>
    using MINC = Register::Combo_Bit<ccr5_reg_type, 7, tf>;

    template<CCR5_PSIZE_T val>
    using PSIZE = Register::Combo_Bitfield<ccr5_reg_type, 8, 2, CCR5_PSIZE_T, val>;

    template<CCR5_MSIZE_T val>
    using MSIZE = Register::Combo_Bitfield<ccr5_reg_type, 10, 2, CCR5_MSIZE_T, val>;

    template<CCR5_PL_T val>
    using PL = Register::Combo_Bitfield<ccr5_reg_type, 12, 2, CCR5_PL_T, val>;

    template<bool tf>
    using MEM2MEM = Register::Combo_Bit<ccr5_reg_type, 14, tf>;

} // DMA1_CCR5
namespace DMA1_CNDTR5 {

    enum class cndtr5_reg_type {};

    template<CNDTR5_NDT_T val>
    using NDT = Register::Combo_Bitfield<cndtr5_reg_type, 0, 16, CNDTR5_NDT_T, val>;

} // DMA1_CNDTR5
namespace DMA1_CPAR5 {

    enum class cpar5_reg_type {};

    template<CPAR5_PA_T val>
    using PA = Register::Combo_Bitfield<cpar5_reg_type, 0, 32, CPAR5_PA_T, val>;

} // DMA1_CPAR5
namespace DMA1_CMAR5 {

    enum class cmar5_reg_type {};

    template<CMAR5_MA_T val>
    using MA = Register::Combo_Bitfield<cmar5_reg_type, 0, 32, CMAR5_MA_T, val>;

} // DMA1_CMAR5
namespace DMA1_CCR6 {

    enum class ccr6_reg_type {};

    template<bool tf>
    using EN = Register::Combo_Bit<ccr6_reg_type, 0, tf>;

    template<bool tf>
    using TCIE = Register::Combo_Bit<ccr6_reg_type, 1, tf>;

    template<bool tf>
    using HTIE = Register::Combo_Bit<ccr6_reg_type, 2, tf>;

    template<bool tf>
    using TEIE = Register::Combo_Bit<ccr6_reg_type, 3, tf>;

    template<bool tf>
    using DIR = Register::Combo_Bit<ccr6_reg_type, 4, tf>;

    template<bool tf>
    using CIRC = Register::Combo_Bit<ccr6_reg_type, 5, tf>;

    template<bool tf>
    using PINC = Register::Combo_Bit<ccr6_reg_type, 6, tf>;

    template<bool tf>
    using MINC = Register::Combo_Bit<ccr6_reg_type, 7, tf>;

    template<CCR6_PSIZE_T val>
    using PSIZE = Register::Combo_Bitfield<ccr6_reg_type, 8, 2, CCR6_PSIZE_T, val>;

    template<CCR6_MSIZE_T val>
    using MSIZE = Register::Combo_Bitfield<ccr6_reg_type, 10, 2, CCR6_MSIZE_T, val>;

    template<CCR6_PL_T val>
    using PL = Register::Combo_Bitfield<ccr6_reg_type, 12, 2, CCR6_PL_T, val>;

    template<bool tf>
    using MEM2MEM = Register::Combo_Bit<ccr6_reg_type, 14, tf>;

} // DMA1_CCR6
namespace DMA1_CNDTR6 {

    enum class cndtr6_reg_type {};

    template<CNDTR6_NDT_T val>
    using NDT = Register::Combo_Bitfield<cndtr6_reg_type, 0, 16, CNDTR6_NDT_T, val>;

} // DMA1_CNDTR6
namespace DMA1_CPAR6 {

    enum class cpar6_reg_type {};

    template<CPAR6_PA_T val>
    using PA = Register::Combo_Bitfield<cpar6_reg_type, 0, 32, CPAR6_PA_T, val>;

} // DMA1_CPAR6
namespace DMA1_CMAR6 {

    enum class cmar6_reg_type {};

    template<CMAR6_MA_T val>
    using MA = Register::Combo_Bitfield<cmar6_reg_type, 0, 32, CMAR6_MA_T, val>;

} // DMA1_CMAR6
namespace DMA1_CCR7 {

    enum class ccr7_reg_type {};

    template<bool tf>
    using EN = Register::Combo_Bit<ccr7_reg_type, 0, tf>;

    template<bool tf>
    using TCIE = Register::Combo_Bit<ccr7_reg_type, 1, tf>;

    template<bool tf>
    using HTIE = Register::Combo_Bit<ccr7_reg_type, 2, tf>;

    template<bool tf>
    using TEIE = Register::Combo_Bit<ccr7_reg_type, 3, tf>;

    template<bool tf>
    using DIR = Register::Combo_Bit<ccr7_reg_type, 4, tf>;

    template<bool tf>
    using CIRC = Register::Combo_Bit<ccr7_reg_type, 5, tf>;

    template<bool tf>
    using PINC = Register::Combo_Bit<ccr7_reg_type, 6, tf>;

    template<bool tf>
    using MINC = Register::Combo_Bit<ccr7_reg_type, 7, tf>;

    template<CCR7_PSIZE_T val>
    using PSIZE = Register::Combo_Bitfield<ccr7_reg_type, 8, 2, CCR7_PSIZE_T, val>;

    template<CCR7_MSIZE_T val>
    using MSIZE = Register::Combo_Bitfield<ccr7_reg_type, 10, 2, CCR7_MSIZE_T, val>;

    template<CCR7_PL_T val>
    using PL = Register::Combo_Bitfield<ccr7_reg_type, 12, 2, CCR7_PL_T, val>;

    template<bool tf>
    using MEM2MEM = Register::Combo_Bit<ccr7_reg_type, 14, tf>;

} // DMA1_CCR7
namespace DMA1_CNDTR7 {

    enum class cndtr7_reg_type {};

    template<CNDTR7_NDT_T val>
    using NDT = Register::Combo_Bitfield<cndtr7_reg_type, 0, 16, CNDTR7_NDT_T, val>;

} // DMA1_CNDTR7
namespace DMA1_CPAR7 {

    enum class cpar7_reg_type {};

    template<CPAR7_PA_T val>
    using PA = Register::Combo_Bitfield<cpar7_reg_type, 0, 32, CPAR7_PA_T, val>;

} // DMA1_CPAR7
namespace DMA1_CMAR7 {

    enum class cmar7_reg_type {};

    template<CMAR7_MA_T val>
    using MA = Register::Combo_Bitfield<cmar7_reg_type, 0, 32, CMAR7_MA_T, val>;

} // DMA1_CMAR7
template<uint32_t BASE_ADDRESS>
class DMA1 {
public:
    static const uint32_t ISR_Offset = 0x0000;
    static const uint32_t IFCR_Offset = 0x0004;
    static const uint32_t CCR1_Offset = 0x0008;
    static const uint32_t CNDTR1_Offset = 0x000C;
    static const uint32_t CPAR1_Offset = 0x0010;
    static const uint32_t CMAR1_Offset = 0x0014;
    static const uint32_t CCR2_Offset = 0x001C;
    static const uint32_t CNDTR2_Offset = 0x0020;
    static const uint32_t CPAR2_Offset = 0x0024;
    static const uint32_t CMAR2_Offset = 0x0028;
    static const uint32_t CCR3_Offset = 0x0030;
    static const uint32_t CNDTR3_Offset = 0x0034;
    static const uint32_t CPAR3_Offset = 0x0038;
    static const uint32_t CMAR3_Offset = 0x003C;
    static const uint32_t CCR4_Offset = 0x0044;
    static const uint32_t CNDTR4_Offset = 0x0048;
    static const uint32_t CPAR4_Offset = 0x004C;
    static const uint32_t CMAR4_Offset = 0x0050;
    static const uint32_t CCR5_Offset = 0x0058;
    static const uint32_t CNDTR5_Offset = 0x005C;
    static const uint32_t CPAR5_Offset = 0x0060;
    static const uint32_t CMAR5_Offset = 0x0064;
    static const uint32_t CCR6_Offset = 0x006C;
    static const uint32_t CNDTR6_Offset = 0x0070;
    static const uint32_t CPAR6_Offset = 0x0074;
    static const uint32_t CMAR6_Offset = 0x0078;
    static const uint32_t CCR7_Offset = 0x0080;
    static const uint32_t CNDTR7_Offset = 0x0084;
    static const uint32_t CPAR7_Offset = 0x0088;
    static const uint32_t CMAR7_Offset = 0x008C;

    DMA1() = default;
    DMA1( const DMA1& ) = delete;
    const DMA1& operator=( const DMA1& ) = delete;

    class ISR_T : public Register::Register<DMA1_ISR::isr_reg_type, BASE_ADDRESS + ISR_Offset> {
    // DMA interrupt status register (DMA_ISR)
    public:
        Register::Bit<BASE_ADDRESS + ISR_Offset, 0> GIF1; /* Channel 1 Global interrupt flag */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 1> TCIF1; /* Channel 1 Transfer Complete flag */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 2> HTIF1; /* Channel 1 Half Transfer Complete flag */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 3> TEIF1; /* Channel 1 Transfer Error flag */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 4> GIF2; /* Channel 2 Global interrupt flag */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 5> TCIF2; /* Channel 2 Transfer Complete flag */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 6> HTIF2; /* Channel 2 Half Transfer Complete flag */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 7> TEIF2; /* Channel 2 Transfer Error flag */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 8> GIF3; /* Channel 3 Global interrupt flag */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 9> TCIF3; /* Channel 3 Transfer Complete flag */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 10> HTIF3; /* Channel 3 Half Transfer Complete flag */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 11> TEIF3; /* Channel 3 Transfer Error flag */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 12> GIF4; /* Channel 4 Global interrupt flag */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 13> TCIF4; /* Channel 4 Transfer Complete flag */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 14> HTIF4; /* Channel 4 Half Transfer Complete flag */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 15> TEIF4; /* Channel 4 Transfer Error flag */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 16> GIF5; /* Channel 5 Global interrupt flag */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 17> TCIF5; /* Channel 5 Transfer Complete flag */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 18> HTIF5; /* Channel 5 Half Transfer Complete flag */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 19> TEIF5; /* Channel 5 Transfer Error flag */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 20> GIF6; /* Channel 6 Global interrupt flag */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 21> TCIF6; /* Channel 6 Transfer Complete flag */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 22> HTIF6; /* Channel 6 Half Transfer Complete flag */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 23> TEIF6; /* Channel 6 Transfer Error flag */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 24> GIF7; /* Channel 7 Global interrupt flag */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 25> TCIF7; /* Channel 7 Transfer Complete flag */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 26> HTIF7; /* Channel 7 Half Transfer Complete flag */
        Register::Bit<BASE_ADDRESS + ISR_Offset, 27> TEIF7; /* Channel 7 Transfer Error flag */
    };

    class IFCR_T : public Register::Register<DMA1_IFCR::ifcr_reg_type, BASE_ADDRESS + IFCR_Offset> {
    // DMA interrupt flag clear register (DMA_IFCR)
    public:
        Register::Bit<BASE_ADDRESS + IFCR_Offset, 0> CGIF1; /* Channel 1 Global interrupt clear */
        Register::Bit<BASE_ADDRESS + IFCR_Offset, 1> CTCIF1; /* Channel 1 Transfer Complete clear */
        Register::Bit<BASE_ADDRESS + IFCR_Offset, 2> CHTIF1; /* Channel 1 Half Transfer clear */
        Register::Bit<BASE_ADDRESS + IFCR_Offset, 3> CTEIF1; /* Channel 1 Transfer Error clear */
        Register::Bit<BASE_ADDRESS + IFCR_Offset, 4> CGIF2; /* Channel 2 Global interrupt clear */
        Register::Bit<BASE_ADDRESS + IFCR_Offset, 5> CTCIF2; /* Channel 2 Transfer Complete clear */
        Register::Bit<BASE_ADDRESS + IFCR_Offset, 6> CHTIF2; /* Channel 2 Half Transfer clear */
        Register::Bit<BASE_ADDRESS + IFCR_Offset, 7> CTEIF2; /* Channel 2 Transfer Error clear */
        Register::Bit<BASE_ADDRESS + IFCR_Offset, 8> CGIF3; /* Channel 3 Global interrupt clear */
        Register::Bit<BASE_ADDRESS + IFCR_Offset, 9> CTCIF3; /* Channel 3 Transfer Complete clear */
        Register::Bit<BASE_ADDRESS + IFCR_Offset, 10> CHTIF3; /* Channel 3 Half Transfer clear */
        Register::Bit<BASE_ADDRESS + IFCR_Offset, 11> CTEIF3; /* Channel 3 Transfer Error clear */
        Register::Bit<BASE_ADDRESS + IFCR_Offset, 12> CGIF4; /* Channel 4 Global interrupt clear */
        Register::Bit<BASE_ADDRESS + IFCR_Offset, 13> CTCIF4; /* Channel 4 Transfer Complete clear */
        Register::Bit<BASE_ADDRESS + IFCR_Offset, 14> CHTIF4; /* Channel 4 Half Transfer clear */
        Register::Bit<BASE_ADDRESS + IFCR_Offset, 15> CTEIF4; /* Channel 4 Transfer Error clear */
        Register::Bit<BASE_ADDRESS + IFCR_Offset, 16> CGIF5; /* Channel 5 Global interrupt clear */
        Register::Bit<BASE_ADDRESS + IFCR_Offset, 17> CTCIF5; /* Channel 5 Transfer Complete clear */
        Register::Bit<BASE_ADDRESS + IFCR_Offset, 18> CHTIF5; /* Channel 5 Half Transfer clear */
        Register::Bit<BASE_ADDRESS + IFCR_Offset, 19> CTEIF5; /* Channel 5 Transfer Error clear */
        Register::Bit<BASE_ADDRESS + IFCR_Offset, 20> CGIF6; /* Channel 6 Global interrupt clear */
        Register::Bit<BASE_ADDRESS + IFCR_Offset, 21> CTCIF6; /* Channel 6 Transfer Complete clear */
        Register::Bit<BASE_ADDRESS + IFCR_Offset, 22> CHTIF6; /* Channel 6 Half Transfer clear */
        Register::Bit<BASE_ADDRESS + IFCR_Offset, 23> CTEIF6; /* Channel 6 Transfer Error clear */
        Register::Bit<BASE_ADDRESS + IFCR_Offset, 24> CGIF7; /* Channel 7 Global interrupt clear */
        Register::Bit<BASE_ADDRESS + IFCR_Offset, 25> CTCIF7; /* Channel 7 Transfer Complete clear */
        Register::Bit<BASE_ADDRESS + IFCR_Offset, 26> CHTIF7; /* Channel 7 Half Transfer clear */
        Register::Bit<BASE_ADDRESS + IFCR_Offset, 27> CTEIF7; /* Channel 7 Transfer Error clear */
    };

    class CCR1_T : public Register::Register<DMA1_CCR1::ccr1_reg_type, BASE_ADDRESS + CCR1_Offset> {
    // DMA channel configuration register (DMA_CCR)
    public:
        Register::Bit<BASE_ADDRESS + CCR1_Offset, 0> EN; /* Channel enable */
        Register::Bit<BASE_ADDRESS + CCR1_Offset, 1> TCIE; /* Transfer complete interrupt enable */
        Register::Bit<BASE_ADDRESS + CCR1_Offset, 2> HTIE; /* Half Transfer interrupt enable */
        Register::Bit<BASE_ADDRESS + CCR1_Offset, 3> TEIE; /* Transfer error interrupt enable */
        Register::Bit<BASE_ADDRESS + CCR1_Offset, 4> DIR; /* Data transfer direction */
        Register::Bit<BASE_ADDRESS + CCR1_Offset, 5> CIRC; /* Circular mode */
        Register::Bit<BASE_ADDRESS + CCR1_Offset, 6> PINC; /* Peripheral increment mode */
        Register::Bit<BASE_ADDRESS + CCR1_Offset, 7> MINC; /* Memory increment mode */
        Register::Bitfield<BASE_ADDRESS + CCR1_Offset, 8, 2, CCR1_PSIZE_T> PSIZE; /* Peripheral size */
        Register::Bitfield<BASE_ADDRESS + CCR1_Offset, 10, 2, CCR1_MSIZE_T> MSIZE; /* Memory size */
        Register::Bitfield<BASE_ADDRESS + CCR1_Offset, 12, 2, CCR1_PL_T> PL; /* Channel Priority level */
        Register::Bit<BASE_ADDRESS + CCR1_Offset, 14> MEM2MEM; /* Memory to memory mode */
    };

    class CNDTR1_T : public Register::Register<DMA1_CNDTR1::cndtr1_reg_type, BASE_ADDRESS + CNDTR1_Offset> {
    // DMA channel 1 number of data register
    public:
        Register::Bitfield<BASE_ADDRESS + CNDTR1_Offset, 0, 16, CNDTR1_NDT_T> NDT; /* Number of data to transfer */
    };

    class CPAR1_T : public Register::Register<DMA1_CPAR1::cpar1_reg_type, BASE_ADDRESS + CPAR1_Offset> {
    // DMA channel 1 peripheral address register
    public:
        Register::Bitfield<BASE_ADDRESS + CPAR1_Offset, 0, 32, CPAR1_PA_T> PA; /* Peripheral address */
    };

    class CMAR1_T : public Register::Register<DMA1_CMAR1::cmar1_reg_type, BASE_ADDRESS + CMAR1_Offset> {
    // DMA channel 1 memory address register
    public:
        Register::Bitfield<BASE_ADDRESS + CMAR1_Offset, 0, 32, CMAR1_MA_T> MA; /* Memory address */
    };

    class CCR2_T : public Register::Register<DMA1_CCR2::ccr2_reg_type, BASE_ADDRESS + CCR2_Offset> {
    // DMA channel configuration register (DMA_CCR)
    public:
        Register::Bit<BASE_ADDRESS + CCR2_Offset, 0> EN; /* Channel enable */
        Register::Bit<BASE_ADDRESS + CCR2_Offset, 1> TCIE; /* Transfer complete interrupt enable */
        Register::Bit<BASE_ADDRESS + CCR2_Offset, 2> HTIE; /* Half Transfer interrupt enable */
        Register::Bit<BASE_ADDRESS + CCR2_Offset, 3> TEIE; /* Transfer error interrupt enable */
        Register::Bit<BASE_ADDRESS + CCR2_Offset, 4> DIR; /* Data transfer direction */
        Register::Bit<BASE_ADDRESS + CCR2_Offset, 5> CIRC; /* Circular mode */
        Register::Bit<BASE_ADDRESS + CCR2_Offset, 6> PINC; /* Peripheral increment mode */
        Register::Bit<BASE_ADDRESS + CCR2_Offset, 7> MINC; /* Memory increment mode */
        Register::Bitfield<BASE_ADDRESS + CCR2_Offset, 8, 2, CCR2_PSIZE_T> PSIZE; /* Peripheral size */
        Register::Bitfield<BASE_ADDRESS + CCR2_Offset, 10, 2, CCR2_MSIZE_T> MSIZE; /* Memory size */
        Register::Bitfield<BASE_ADDRESS + CCR2_Offset, 12, 2, CCR2_PL_T> PL; /* Channel Priority level */
        Register::Bit<BASE_ADDRESS + CCR2_Offset, 14> MEM2MEM; /* Memory to memory mode */
    };

    class CNDTR2_T : public Register::Register<DMA1_CNDTR2::cndtr2_reg_type, BASE_ADDRESS + CNDTR2_Offset> {
    // DMA channel 2 number of data register
    public:
        Register::Bitfield<BASE_ADDRESS + CNDTR2_Offset, 0, 16, CNDTR2_NDT_T> NDT; /* Number of data to transfer */
    };

    class CPAR2_T : public Register::Register<DMA1_CPAR2::cpar2_reg_type, BASE_ADDRESS + CPAR2_Offset> {
    // DMA channel 2 peripheral address register
    public:
        Register::Bitfield<BASE_ADDRESS + CPAR2_Offset, 0, 32, CPAR2_PA_T> PA; /* Peripheral address */
    };

    class CMAR2_T : public Register::Register<DMA1_CMAR2::cmar2_reg_type, BASE_ADDRESS + CMAR2_Offset> {
    // DMA channel 2 memory address register
    public:
        Register::Bitfield<BASE_ADDRESS + CMAR2_Offset, 0, 32, CMAR2_MA_T> MA; /* Memory address */
    };

    class CCR3_T : public Register::Register<DMA1_CCR3::ccr3_reg_type, BASE_ADDRESS + CCR3_Offset> {
    // DMA channel configuration register (DMA_CCR)
    public:
        Register::Bit<BASE_ADDRESS + CCR3_Offset, 0> EN; /* Channel enable */
        Register::Bit<BASE_ADDRESS + CCR3_Offset, 1> TCIE; /* Transfer complete interrupt enable */
        Register::Bit<BASE_ADDRESS + CCR3_Offset, 2> HTIE; /* Half Transfer interrupt enable */
        Register::Bit<BASE_ADDRESS + CCR3_Offset, 3> TEIE; /* Transfer error interrupt enable */
        Register::Bit<BASE_ADDRESS + CCR3_Offset, 4> DIR; /* Data transfer direction */
        Register::Bit<BASE_ADDRESS + CCR3_Offset, 5> CIRC; /* Circular mode */
        Register::Bit<BASE_ADDRESS + CCR3_Offset, 6> PINC; /* Peripheral increment mode */
        Register::Bit<BASE_ADDRESS + CCR3_Offset, 7> MINC; /* Memory increment mode */
        Register::Bitfield<BASE_ADDRESS + CCR3_Offset, 8, 2, CCR3_PSIZE_T> PSIZE; /* Peripheral size */
        Register::Bitfield<BASE_ADDRESS + CCR3_Offset, 10, 2, CCR3_MSIZE_T> MSIZE; /* Memory size */
        Register::Bitfield<BASE_ADDRESS + CCR3_Offset, 12, 2, CCR3_PL_T> PL; /* Channel Priority level */
        Register::Bit<BASE_ADDRESS + CCR3_Offset, 14> MEM2MEM; /* Memory to memory mode */
    };

    class CNDTR3_T : public Register::Register<DMA1_CNDTR3::cndtr3_reg_type, BASE_ADDRESS + CNDTR3_Offset> {
    // DMA channel 3 number of data register
    public:
        Register::Bitfield<BASE_ADDRESS + CNDTR3_Offset, 0, 16, CNDTR3_NDT_T> NDT; /* Number of data to transfer */
    };

    class CPAR3_T : public Register::Register<DMA1_CPAR3::cpar3_reg_type, BASE_ADDRESS + CPAR3_Offset> {
    // DMA channel 3 peripheral address register
    public:
        Register::Bitfield<BASE_ADDRESS + CPAR3_Offset, 0, 32, CPAR3_PA_T> PA; /* Peripheral address */
    };

    class CMAR3_T : public Register::Register<DMA1_CMAR3::cmar3_reg_type, BASE_ADDRESS + CMAR3_Offset> {
    // DMA channel 3 memory address register
    public:
        Register::Bitfield<BASE_ADDRESS + CMAR3_Offset, 0, 32, CMAR3_MA_T> MA; /* Memory address */
    };

    class CCR4_T : public Register::Register<DMA1_CCR4::ccr4_reg_type, BASE_ADDRESS + CCR4_Offset> {
    // DMA channel configuration register (DMA_CCR)
    public:
        Register::Bit<BASE_ADDRESS + CCR4_Offset, 0> EN; /* Channel enable */
        Register::Bit<BASE_ADDRESS + CCR4_Offset, 1> TCIE; /* Transfer complete interrupt enable */
        Register::Bit<BASE_ADDRESS + CCR4_Offset, 2> HTIE; /* Half Transfer interrupt enable */
        Register::Bit<BASE_ADDRESS + CCR4_Offset, 3> TEIE; /* Transfer error interrupt enable */
        Register::Bit<BASE_ADDRESS + CCR4_Offset, 4> DIR; /* Data transfer direction */
        Register::Bit<BASE_ADDRESS + CCR4_Offset, 5> CIRC; /* Circular mode */
        Register::Bit<BASE_ADDRESS + CCR4_Offset, 6> PINC; /* Peripheral increment mode */
        Register::Bit<BASE_ADDRESS + CCR4_Offset, 7> MINC; /* Memory increment mode */
        Register::Bitfield<BASE_ADDRESS + CCR4_Offset, 8, 2, CCR4_PSIZE_T> PSIZE; /* Peripheral size */
        Register::Bitfield<BASE_ADDRESS + CCR4_Offset, 10, 2, CCR4_MSIZE_T> MSIZE; /* Memory size */
        Register::Bitfield<BASE_ADDRESS + CCR4_Offset, 12, 2, CCR4_PL_T> PL; /* Channel Priority level */
        Register::Bit<BASE_ADDRESS + CCR4_Offset, 14> MEM2MEM; /* Memory to memory mode */
    };

    class CNDTR4_T : public Register::Register<DMA1_CNDTR4::cndtr4_reg_type, BASE_ADDRESS + CNDTR4_Offset> {
    // DMA channel 4 number of data register
    public:
        Register::Bitfield<BASE_ADDRESS + CNDTR4_Offset, 0, 16, CNDTR4_NDT_T> NDT; /* Number of data to transfer */
    };

    class CPAR4_T : public Register::Register<DMA1_CPAR4::cpar4_reg_type, BASE_ADDRESS + CPAR4_Offset> {
    // DMA channel 4 peripheral address register
    public:
        Register::Bitfield<BASE_ADDRESS + CPAR4_Offset, 0, 32, CPAR4_PA_T> PA; /* Peripheral address */
    };

    class CMAR4_T : public Register::Register<DMA1_CMAR4::cmar4_reg_type, BASE_ADDRESS + CMAR4_Offset> {
    // DMA channel 4 memory address register
    public:
        Register::Bitfield<BASE_ADDRESS + CMAR4_Offset, 0, 32, CMAR4_MA_T> MA; /* Memory address */
    };

    class CCR5_T : public Register::Register<DMA1_CCR5::ccr5_reg_type, BASE_ADDRESS + CCR5_Offset> {
    // DMA channel configuration register (DMA_CCR)
    public:
        Register::Bit<BASE_ADDRESS + CCR5_Offset, 0> EN; /* Channel enable */
        Register::Bit<BASE_ADDRESS + CCR5_Offset, 1> TCIE; /* Transfer complete interrupt enable */
        Register::Bit<BASE_ADDRESS + CCR5_Offset, 2> HTIE; /* Half Transfer interrupt enable */
        Register::Bit<BASE_ADDRESS + CCR5_Offset, 3> TEIE; /* Transfer error interrupt enable */
        Register::Bit<BASE_ADDRESS + CCR5_Offset, 4> DIR; /* Data transfer direction */
        Register::Bit<BASE_ADDRESS + CCR5_Offset, 5> CIRC; /* Circular mode */
        Register::Bit<BASE_ADDRESS + CCR5_Offset, 6> PINC; /* Peripheral increment mode */
        Register::Bit<BASE_ADDRESS + CCR5_Offset, 7> MINC; /* Memory increment mode */
        Register::Bitfield<BASE_ADDRESS + CCR5_Offset, 8, 2, CCR5_PSIZE_T> PSIZE; /* Peripheral size */
        Register::Bitfield<BASE_ADDRESS + CCR5_Offset, 10, 2, CCR5_MSIZE_T> MSIZE; /* Memory size */
        Register::Bitfield<BASE_ADDRESS + CCR5_Offset, 12, 2, CCR5_PL_T> PL; /* Channel Priority level */
        Register::Bit<BASE_ADDRESS + CCR5_Offset, 14> MEM2MEM; /* Memory to memory mode */
    };

    class CNDTR5_T : public Register::Register<DMA1_CNDTR5::cndtr5_reg_type, BASE_ADDRESS + CNDTR5_Offset> {
    // DMA channel 5 number of data register
    public:
        Register::Bitfield<BASE_ADDRESS + CNDTR5_Offset, 0, 16, CNDTR5_NDT_T> NDT; /* Number of data to transfer */
    };

    class CPAR5_T : public Register::Register<DMA1_CPAR5::cpar5_reg_type, BASE_ADDRESS + CPAR5_Offset> {
    // DMA channel 5 peripheral address register
    public:
        Register::Bitfield<BASE_ADDRESS + CPAR5_Offset, 0, 32, CPAR5_PA_T> PA; /* Peripheral address */
    };

    class CMAR5_T : public Register::Register<DMA1_CMAR5::cmar5_reg_type, BASE_ADDRESS + CMAR5_Offset> {
    // DMA channel 5 memory address register
    public:
        Register::Bitfield<BASE_ADDRESS + CMAR5_Offset, 0, 32, CMAR5_MA_T> MA; /* Memory address */
    };

    class CCR6_T : public Register::Register<DMA1_CCR6::ccr6_reg_type, BASE_ADDRESS + CCR6_Offset> {
    // DMA channel configuration register (DMA_CCR)
    public:
        Register::Bit<BASE_ADDRESS + CCR6_Offset, 0> EN; /* Channel enable */
        Register::Bit<BASE_ADDRESS + CCR6_Offset, 1> TCIE; /* Transfer complete interrupt enable */
        Register::Bit<BASE_ADDRESS + CCR6_Offset, 2> HTIE; /* Half Transfer interrupt enable */
        Register::Bit<BASE_ADDRESS + CCR6_Offset, 3> TEIE; /* Transfer error interrupt enable */
        Register::Bit<BASE_ADDRESS + CCR6_Offset, 4> DIR; /* Data transfer direction */
        Register::Bit<BASE_ADDRESS + CCR6_Offset, 5> CIRC; /* Circular mode */
        Register::Bit<BASE_ADDRESS + CCR6_Offset, 6> PINC; /* Peripheral increment mode */
        Register::Bit<BASE_ADDRESS + CCR6_Offset, 7> MINC; /* Memory increment mode */
        Register::Bitfield<BASE_ADDRESS + CCR6_Offset, 8, 2, CCR6_PSIZE_T> PSIZE; /* Peripheral size */
        Register::Bitfield<BASE_ADDRESS + CCR6_Offset, 10, 2, CCR6_MSIZE_T> MSIZE; /* Memory size */
        Register::Bitfield<BASE_ADDRESS + CCR6_Offset, 12, 2, CCR6_PL_T> PL; /* Channel Priority level */
        Register::Bit<BASE_ADDRESS + CCR6_Offset, 14> MEM2MEM; /* Memory to memory mode */
    };

    class CNDTR6_T : public Register::Register<DMA1_CNDTR6::cndtr6_reg_type, BASE_ADDRESS + CNDTR6_Offset> {
    // DMA channel 6 number of data register
    public:
        Register::Bitfield<BASE_ADDRESS + CNDTR6_Offset, 0, 16, CNDTR6_NDT_T> NDT; /* Number of data to transfer */
    };

    class CPAR6_T : public Register::Register<DMA1_CPAR6::cpar6_reg_type, BASE_ADDRESS + CPAR6_Offset> {
    // DMA channel 6 peripheral address register
    public:
        Register::Bitfield<BASE_ADDRESS + CPAR6_Offset, 0, 32, CPAR6_PA_T> PA; /* Peripheral address */
    };

    class CMAR6_T : public Register::Register<DMA1_CMAR6::cmar6_reg_type, BASE_ADDRESS + CMAR6_Offset> {
    // DMA channel 6 memory address register
    public:
        Register::Bitfield<BASE_ADDRESS + CMAR6_Offset, 0, 32, CMAR6_MA_T> MA; /* Memory address */
    };

    class CCR7_T : public Register::Register<DMA1_CCR7::ccr7_reg_type, BASE_ADDRESS + CCR7_Offset> {
    // DMA channel configuration register (DMA_CCR)
    public:
        Register::Bit<BASE_ADDRESS + CCR7_Offset, 0> EN; /* Channel enable */
        Register::Bit<BASE_ADDRESS + CCR7_Offset, 1> TCIE; /* Transfer complete interrupt enable */
        Register::Bit<BASE_ADDRESS + CCR7_Offset, 2> HTIE; /* Half Transfer interrupt enable */
        Register::Bit<BASE_ADDRESS + CCR7_Offset, 3> TEIE; /* Transfer error interrupt enable */
        Register::Bit<BASE_ADDRESS + CCR7_Offset, 4> DIR; /* Data transfer direction */
        Register::Bit<BASE_ADDRESS + CCR7_Offset, 5> CIRC; /* Circular mode */
        Register::Bit<BASE_ADDRESS + CCR7_Offset, 6> PINC; /* Peripheral increment mode */
        Register::Bit<BASE_ADDRESS + CCR7_Offset, 7> MINC; /* Memory increment mode */
        Register::Bitfield<BASE_ADDRESS + CCR7_Offset, 8, 2, CCR7_PSIZE_T> PSIZE; /* Peripheral size */
        Register::Bitfield<BASE_ADDRESS + CCR7_Offset, 10, 2, CCR7_MSIZE_T> MSIZE; /* Memory size */
        Register::Bitfield<BASE_ADDRESS + CCR7_Offset, 12, 2, CCR7_PL_T> PL; /* Channel Priority level */
        Register::Bit<BASE_ADDRESS + CCR7_Offset, 14> MEM2MEM; /* Memory to memory mode */
    };

    class CNDTR7_T : public Register::Register<DMA1_CNDTR7::cndtr7_reg_type, BASE_ADDRESS + CNDTR7_Offset> {
    // DMA channel 7 number of data register
    public:
        Register::Bitfield<BASE_ADDRESS + CNDTR7_Offset, 0, 16, CNDTR7_NDT_T> NDT; /* Number of data to transfer */
    };

    class CPAR7_T : public Register::Register<DMA1_CPAR7::cpar7_reg_type, BASE_ADDRESS + CPAR7_Offset> {
    // DMA channel 7 peripheral address register
    public:
        Register::Bitfield<BASE_ADDRESS + CPAR7_Offset, 0, 32, CPAR7_PA_T> PA; /* Peripheral address */
    };

    class CMAR7_T : public Register::Register<DMA1_CMAR7::cmar7_reg_type, BASE_ADDRESS + CMAR7_Offset> {
    // DMA channel 7 memory address register
    public:
        Register::Bitfield<BASE_ADDRESS + CMAR7_Offset, 0, 32, CMAR7_MA_T> MA; /* Memory address */
    };

    ISR_T ISR;
    IFCR_T IFCR;
    CCR1_T CCR1;
    CNDTR1_T CNDTR1;
    CPAR1_T CPAR1;
    CMAR1_T CMAR1;
    CCR2_T CCR2;
    CNDTR2_T CNDTR2;
    CPAR2_T CPAR2;
    CMAR2_T CMAR2;
    CCR3_T CCR3;
    CNDTR3_T CNDTR3;
    CPAR3_T CPAR3;
    CMAR3_T CMAR3;
    CCR4_T CCR4;
    CNDTR4_T CNDTR4;
    CPAR4_T CPAR4;
    CMAR4_T CMAR4;
    CCR5_T CCR5;
    CNDTR5_T CNDTR5;
    CPAR5_T CPAR5;
    CMAR5_T CMAR5;
    CCR6_T CCR6;
    CNDTR6_T CNDTR6;
    CPAR6_T CPAR6;
    CMAR6_T CMAR6;
    CCR7_T CCR7;
    CNDTR7_T CNDTR7;
    CPAR7_T CPAR7;
    CMAR7_T CMAR7;
};

} // namespace STM32LIB

#endif // STM32F0X1_DMA1_HPP_

