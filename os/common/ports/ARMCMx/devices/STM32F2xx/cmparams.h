/*
    ChibiOS - Copyright (C) 2006..2015 Giovanni Di Sirio.

    This file is part of ChibiOS.

    ChibiOS is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 3 of the License, or
    (at your option) any later version.

    ChibiOS is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

/**
 * @file    STM32F2xx/cmparams.h
 * @brief   ARM Cortex-M3 parameters for the STM32F2xx.
 *
 * @defgroup ARMCMx_STM32F2xx STM32F2xx Specific Parameters
 * @ingroup ARMCMx_SPECIFIC
 * @details This file contains the Cortex-M3 specific parameters for the
 *          STM32F2xx platform.
 * @{
 */

#ifndef _CMPARAMS_H_
#define _CMPARAMS_H_

/**
 * @brief   Cortex core model.
 */
#define CORTEX_MODEL            3

/**
 * @brief   Floating Point unit presence.
 */
#define CORTEX_HAS_FPU          0

/**
 * @brief   Number of bits in priority masks.
 */
#define CORTEX_PRIORITY_BITS    4

/* The following code is not processed when the file is included from an
   asm module.*/
#if !defined(_FROM_ASM_)

/* If the device type is not externally defined, for example from the Makefile,
   then a file named board.h is included. This file must contain a device
   definition compatible with the vendor include file.*/
#if !defined(STM32F2XX)
#include "board.h"
#endif

/**
 * @brief   Number of interrupt vectors.
 * @note    This number does not include the 16 system vectors.
 */
#if defined(STM32F205xx) || defined(STM32F215xx) || defined(STM32F207xx) || \
    defined(STM32F217xx)
#define CORTEX_NUM_VECTORS      81
#endif

/* Including the device CMSIS header. Note, we are not using the definitions
   from this header because we need this file to be usable also from
   assembler source files. We verify that the info matches instead.*/
#include "stm32f2xx.h"

#if CORTEX_MODEL != __CORTEX_M
#error "CMSIS __CORTEX_M mismatch"
#endif

#if CORTEX_PRIORITY_BITS != __NVIC_PRIO_BITS
#error "CMSIS __NVIC_PRIO_BITS mismatch"
#endif

#endif /* !defined(_FROM_ASM_) */

#endif /* _CMPARAMS_H_ */

/** @} */
