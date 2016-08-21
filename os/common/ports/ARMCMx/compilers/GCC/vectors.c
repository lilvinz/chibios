/*
    ChibiOS - Copyright (C) 2006..2015 Giovanni Di Sirio

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/

/**
 * @file    ARMCMx/compilers/GCC/vectors.c
 * @brief   Interrupt vectors for Cortex-Mx devices.
 *
 * @defgroup ARMCMx_VECTORS Cortex-Mx Interrupt Vectors
 * @{
 */

#include <stdbool.h>
#include <stdint.h>

#include "vectors.h"

#if (CORTEX_NUM_VECTORS < 8) || (CORTEX_NUM_VECTORS > 240)
#error "the constant CORTEX_NUM_VECTORS must be between 8 and 240 inclusive"
#endif

/**
 * @brief   Unhandled exceptions handler.
 * @details Any undefined exception vector points to this function by default.
 *          This function simply stops the system into an infinite loop.
 *
 * @notapi
 */
/*lint -save -e9075 [8.4] All symbols are invoked from asm context.*/
void _unhandled_exception(void) {
/*lint -restore*/

  while (true) {
  }
}

#if !defined(__DOXYGEN__)
extern uint32_t __main_stack_end__;
void Reset_Handler(void);
void NMI_Handler(void) __attribute__((weak, alias("_unhandled_exception")));
void HardFault_Handler(void) __attribute__((weak, alias("_unhandled_exception")));
void MemManage_Handler(void) __attribute__((weak, alias("_unhandled_exception")));
void BusFault_Handler(void) __attribute__((weak, alias("_unhandled_exception")));
void UsageFault_Handler(void) __attribute__((weak, alias("_unhandled_exception")));
void Vector1C(void) __attribute__((weak, alias("_unhandled_exception")));
void Vector20(void) __attribute__((weak, alias("_unhandled_exception")));
void Vector24(void) __attribute__((weak, alias("_unhandled_exception")));
void Vector28(void) __attribute__((weak, alias("_unhandled_exception")));
void SVC_Handler(void) __attribute__((weak, alias("_unhandled_exception")));
void DebugMon_Handler(void) __attribute__((weak, alias("_unhandled_exception")));
void Vector34(void) __attribute__((weak, alias("_unhandled_exception")));
void PendSV_Handler(void) __attribute__((weak, alias("_unhandled_exception")));
void SysTick_Handler(void) __attribute__((weak, alias("_unhandled_exception")));
#if CORTEX_NUM_VECTORS > 0
#endif
void Vector40(void) __attribute__((weak, alias("_unhandled_exception")));
#if CORTEX_NUM_VECTORS > 1
#endif
void Vector44(void) __attribute__((weak, alias("_unhandled_exception")));
#if CORTEX_NUM_VECTORS > 2
#endif
void Vector48(void) __attribute__((weak, alias("_unhandled_exception")));
#if CORTEX_NUM_VECTORS > 3
#endif
void Vector4C(void) __attribute__((weak, alias("_unhandled_exception")));
#if CORTEX_NUM_VECTORS > 4
void Vector50(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 5
void Vector54(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 6
void Vector58(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 7
void Vector5C(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 8
void Vector60(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 9
void Vector64(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 10
void Vector68(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 11
void Vector6C(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 12
void Vector70(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 13
void Vector74(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 14
void Vector78(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 15
void Vector7C(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 16
void Vector80(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 17
void Vector84(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 18
void Vector88(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 19
void Vector8C(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 20
void Vector90(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 21
void Vector94(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 22
void Vector98(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 23
void Vector9C(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 24
void VectorA0(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 25
void VectorA4(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 26
void VectorA8(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 27
void VectorAC(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 28
void VectorB0(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 29
void VectorB4(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 30
void VectorB8(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 31
void VectorBC(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 32
void VectorC0(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 33
void VectorC4(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 34
void VectorC8(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 35
void VectorCC(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 36
void VectorD0(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 37
void VectorD4(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 38
void VectorD8(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 39
void VectorDC(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 40
void VectorE0(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 41
void VectorE4(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 42
void VectorE8(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 43
void VectorEC(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 44
void VectorF0(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 45
void VectorF4(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 46
void VectorF8(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 47
void VectorFC(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 48
void Vector100(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 49
void Vector104(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 50
void Vector108(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 51
void Vector10C(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 52
void Vector110(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 53
void Vector114(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 54
void Vector118(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 55
void Vector11C(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 56
void Vector120(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 57
void Vector124(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 58
void Vector128(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 59
void Vector12C(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 60
void Vector130(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 61
void Vector134(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 62
void Vector138(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 63
void Vector13C(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 64
void Vector140(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 65
void Vector144(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 66
void Vector148(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 67
void Vector14C(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 68
void Vector150(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 69
void Vector154(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 70
void Vector158(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 71
void Vector15C(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 72
void Vector160(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 73
void Vector164(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 74
void Vector168(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 75
void Vector16C(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 76
void Vector170(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 77
void Vector174(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 78
void Vector178(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 79
void Vector17C(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 80
void Vector180(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 81
void Vector184(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 82
void Vector188(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 83
void Vector18C(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 84
void Vector190(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 85
void Vector194(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 86
void Vector198(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 87
void Vector19C(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 88
void Vector1A0(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 89
void Vector1A4(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 90
void Vector1A8(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 91
void Vector1AC(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 92
void Vector1B0(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 93
void Vector1B4(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 94
void Vector1B8(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 95
void Vector1BC(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 96
void Vector1C0(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 97
void Vector1C4(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 98
void Vector1C8(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 99
void Vector1CC(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 100
void Vector1D0(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 101
void Vector1D4(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 102
void Vector1D8(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 103
void Vector1DC(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 104
void Vector1E0(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 105
void Vector1E4(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 106
void Vector1E8(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 107
void Vector1EC(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 108
void Vector1F0(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 109
void Vector1F4(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 110
void Vector1F8(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 111
void Vector1FC(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 112
void Vector200(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 113
void Vector204(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 114
void Vector208(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 115
void Vector20C(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 116
void Vector210(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 117
void Vector214(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 118
void Vector218(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 119
void Vector21C(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 120
void Vector220(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 121
void Vector224(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 122
void Vector228(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 123
void Vector22C(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 124
void Vector230(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 125
void Vector234(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 126
void Vector238(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 127
void Vector23C(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 128
void Vector240(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 129
void Vector244(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 130
void Vector248(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 131
void Vector24C(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 132
void Vector250(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 133
void Vector254(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 134
void Vector258(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 135
void Vector25C(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 136
void Vector260(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 137
void Vector264(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 138
void Vector268(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 139
void Vector26C(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 140
void Vector270(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 141
void Vector274(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 142
void Vector278(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 143
void Vector27C(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 144
void Vector280(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 145
void Vector284(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 146
void Vector288(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 147
void Vector28C(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 148
void Vector290(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 149
void Vector294(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 150
void Vector298(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 151
void Vector29C(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 152
void Vector2A0(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 153
void Vector2A4(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 154
void Vector2A8(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 155
void Vector2AC(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 156
void Vector2B0(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 157
void Vector2B4(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 158
void Vector2B8(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 159
void Vector2BC(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 160
void Vector2C0(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 161
void Vector2C4(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 162
void Vector2C8(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 163
void Vector2CC(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 164
void Vector2D0(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 165
void Vector2D4(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 166
void Vector2D8(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 167
void Vector2DC(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 168
void Vector2E0(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 169
void Vector2E4(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 170
void Vector2E8(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 171
void Vector2EC(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 172
void Vector2F0(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 173
void Vector2F4(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 174
void Vector2F8(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 175
void Vector2FC(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 176
void Vector300(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 177
void Vector304(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 178
void Vector308(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 179
void Vector30C(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 180
void Vector310(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 181
void Vector314(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 182
void Vector318(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 183
void Vector31C(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 184
void Vector320(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 185
void Vector324(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 186
void Vector328(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 187
void Vector32C(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 188
void Vector330(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 189
void Vector334(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 190
void Vector338(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 191
void Vector33C(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 192
void Vector340(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 193
void Vector344(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 194
void Vector348(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 195
void Vector34C(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 196
void Vector350(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 197
void Vector354(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 198
void Vector358(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 199
void Vector35C(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 200
void Vector360(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 201
void Vector364(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 202
void Vector368(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 203
void Vector36C(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 204
void Vector370(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 205
void Vector374(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 206
void Vector378(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 207
void Vector37C(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 208
void Vector380(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 209
void Vector384(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 210
void Vector388(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 211
void Vector38C(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 212
void Vector390(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 213
void Vector394(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 214
void Vector398(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 215
void Vector39C(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 216
void Vector3A0(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 217
void Vector3A4(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 218
void Vector3A8(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 219
void Vector3AC(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 220
void Vector3B0(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 221
void Vector3B4(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 222
void Vector3B8(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 223
void Vector3BC(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 224
void Vector3C0(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 225
void Vector3C4(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 226
void Vector3C8(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 227
void Vector3CC(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 228
void Vector3D0(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 229
void Vector3D4(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 230
void Vector3D8(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 231
void Vector3DC(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 232
void Vector3E0(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 233
void Vector3E4(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 234
void Vector3E8(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 235
void Vector3EC(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 236
void Vector3F0(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 237
void Vector3F4(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 238
void Vector3F8(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#if CORTEX_NUM_VECTORS > 239
void Vector3FC(void) __attribute__((weak, alias("_unhandled_exception")));
#endif
#endif /* !defined(__DOXYGEN__) */

/**
 * @brief   STM32 vectors table.
 */
#if !defined(__DOXYGEN__)
#if !defined(VECTORS_SECTION)
__attribute__ ((used, aligned(128), section(".vectors")))
#else
__attribute__ ((used, aligned(128), section(VECTORS_SECTION)))
#endif
#endif
/*lint -save -e9075 [8.4] All symbols are invoked from asm context.*/
vectors_t _vectors = {
/*lint -restore*/
  &__main_stack_end__,Reset_Handler,      NMI_Handler,        HardFault_Handler,
  MemManage_Handler,  BusFault_Handler,   UsageFault_Handler, Vector1C,
  Vector20,           Vector24,           Vector28,           SVC_Handler,
  DebugMon_Handler,   Vector34,           PendSV_Handler,     SysTick_Handler,
  {
#if CORTEX_NUM_VECTORS > 0
    Vector40,
#endif
#if CORTEX_NUM_VECTORS > 1
    Vector44,
#endif
#if CORTEX_NUM_VECTORS > 2
    Vector48,
#endif
#if CORTEX_NUM_VECTORS > 3
    Vector4C,
#endif
#if CORTEX_NUM_VECTORS > 4
    Vector50,
#endif
#if CORTEX_NUM_VECTORS > 5
    Vector54,
#endif
#if CORTEX_NUM_VECTORS > 6
    Vector58,
#endif
#if CORTEX_NUM_VECTORS > 7
    Vector5C,
#endif
#if CORTEX_NUM_VECTORS > 8
    Vector60,
#endif
#if CORTEX_NUM_VECTORS > 9
    Vector64,
#endif
#if CORTEX_NUM_VECTORS > 10
    Vector68,
#endif
#if CORTEX_NUM_VECTORS > 11
    Vector6C,
#endif
#if CORTEX_NUM_VECTORS > 12
    Vector70,
#endif
#if CORTEX_NUM_VECTORS > 13
    Vector74,
#endif
#if CORTEX_NUM_VECTORS > 14
    Vector78,
#endif
#if CORTEX_NUM_VECTORS > 15
    Vector7C,
#endif
#if CORTEX_NUM_VECTORS > 16
    Vector80,
#endif
#if CORTEX_NUM_VECTORS > 17
    Vector84,
#endif
#if CORTEX_NUM_VECTORS > 18
    Vector88,
#endif
#if CORTEX_NUM_VECTORS > 19
    Vector8C,
#endif
#if CORTEX_NUM_VECTORS > 20
    Vector90,
#endif
#if CORTEX_NUM_VECTORS > 21
    Vector94,
#endif
#if CORTEX_NUM_VECTORS > 22
    Vector98,
#endif
#if CORTEX_NUM_VECTORS > 23
    Vector9C,
#endif
#if CORTEX_NUM_VECTORS > 24
    VectorA0,
#endif
#if CORTEX_NUM_VECTORS > 25
    VectorA4,
#endif
#if CORTEX_NUM_VECTORS > 26
    VectorA8,
#endif
#if CORTEX_NUM_VECTORS > 27
    VectorAC,
#endif
#if CORTEX_NUM_VECTORS > 28
    VectorB0,
#endif
#if CORTEX_NUM_VECTORS > 29
    VectorB4,
#endif
#if CORTEX_NUM_VECTORS > 30
    VectorB8,
#endif
#if CORTEX_NUM_VECTORS > 31
    VectorBC,
#endif
#if CORTEX_NUM_VECTORS > 32
    VectorC0,
#endif
#if CORTEX_NUM_VECTORS > 33
    VectorC4,
#endif
#if CORTEX_NUM_VECTORS > 34
    VectorC8,
#endif
#if CORTEX_NUM_VECTORS > 35
    VectorCC,
#endif
#if CORTEX_NUM_VECTORS > 36
    VectorD0,
#endif
#if CORTEX_NUM_VECTORS > 37
    VectorD4,
#endif
#if CORTEX_NUM_VECTORS > 38
    VectorD8,
#endif
#if CORTEX_NUM_VECTORS > 39
    VectorDC,
#endif
#if CORTEX_NUM_VECTORS > 40
    VectorE0,
#endif
#if CORTEX_NUM_VECTORS > 41
    VectorE4,
#endif
#if CORTEX_NUM_VECTORS > 42
    VectorE8,
#endif
#if CORTEX_NUM_VECTORS > 43
    VectorEC,
#endif
#if CORTEX_NUM_VECTORS > 44
    VectorF0,
#endif
#if CORTEX_NUM_VECTORS > 45
    VectorF4,
#endif
#if CORTEX_NUM_VECTORS > 46
    VectorF8,
#endif
#if CORTEX_NUM_VECTORS > 47
    VectorFC,
#endif
#if CORTEX_NUM_VECTORS > 48
    Vector100,
#endif
#if CORTEX_NUM_VECTORS > 49
    Vector104,
#endif
#if CORTEX_NUM_VECTORS > 50
    Vector108,
#endif
#if CORTEX_NUM_VECTORS > 51
    Vector10C,
#endif
#if CORTEX_NUM_VECTORS > 52
    Vector110,
#endif
#if CORTEX_NUM_VECTORS > 53
    Vector114,
#endif
#if CORTEX_NUM_VECTORS > 54
    Vector118,
#endif
#if CORTEX_NUM_VECTORS > 55
    Vector11C,
#endif
#if CORTEX_NUM_VECTORS > 56
    Vector120,
#endif
#if CORTEX_NUM_VECTORS > 57
    Vector124,
#endif
#if CORTEX_NUM_VECTORS > 58
    Vector128,
#endif
#if CORTEX_NUM_VECTORS > 59
    Vector12C,
#endif
#if CORTEX_NUM_VECTORS > 60
    Vector130,
#endif
#if CORTEX_NUM_VECTORS > 61
    Vector134,
#endif
#if CORTEX_NUM_VECTORS > 62
    Vector138,
#endif
#if CORTEX_NUM_VECTORS > 63
    Vector13C,
#endif
#if CORTEX_NUM_VECTORS > 64
    Vector140,
#endif
#if CORTEX_NUM_VECTORS > 65
    Vector144,
#endif
#if CORTEX_NUM_VECTORS > 66
    Vector148,
#endif
#if CORTEX_NUM_VECTORS > 67
    Vector14C,
#endif
#if CORTEX_NUM_VECTORS > 68
    Vector150,
#endif
#if CORTEX_NUM_VECTORS > 69
    Vector154,
#endif
#if CORTEX_NUM_VECTORS > 70
    Vector158,
#endif
#if CORTEX_NUM_VECTORS > 71
    Vector15C,
#endif
#if CORTEX_NUM_VECTORS > 72
    Vector160,
#endif
#if CORTEX_NUM_VECTORS > 73
    Vector164,
#endif
#if CORTEX_NUM_VECTORS > 74
    Vector168,
#endif
#if CORTEX_NUM_VECTORS > 75
    Vector16C,
#endif
#if CORTEX_NUM_VECTORS > 76
    Vector170,
#endif
#if CORTEX_NUM_VECTORS > 77
    Vector174,
#endif
#if CORTEX_NUM_VECTORS > 78
    Vector178,
#endif
#if CORTEX_NUM_VECTORS > 79
    Vector17C,
#endif
#if CORTEX_NUM_VECTORS > 80
    Vector180,
#endif
#if CORTEX_NUM_VECTORS > 81
    Vector184,
#endif
#if CORTEX_NUM_VECTORS > 82
    Vector188,
#endif
#if CORTEX_NUM_VECTORS > 83
    Vector18C,
#endif
#if CORTEX_NUM_VECTORS > 84
    Vector190,
#endif
#if CORTEX_NUM_VECTORS > 85
    Vector194,
#endif
#if CORTEX_NUM_VECTORS > 86
    Vector198,
#endif
#if CORTEX_NUM_VECTORS > 87
    Vector19C,
#endif
#if CORTEX_NUM_VECTORS > 88
    Vector1A0,
#endif
#if CORTEX_NUM_VECTORS > 89
    Vector1A4,
#endif
#if CORTEX_NUM_VECTORS > 90
    Vector1A8,
#endif
#if CORTEX_NUM_VECTORS > 91
    Vector1AC,
#endif
#if CORTEX_NUM_VECTORS > 92
    Vector1B0,
#endif
#if CORTEX_NUM_VECTORS > 93
    Vector1B4,
#endif
#if CORTEX_NUM_VECTORS > 94
    Vector1B8,
#endif
#if CORTEX_NUM_VECTORS > 95
    Vector1BC,
#endif
#if CORTEX_NUM_VECTORS > 96
    Vector1C0,
#endif
#if CORTEX_NUM_VECTORS > 97
    Vector1C4,
#endif
#if CORTEX_NUM_VECTORS > 98
    Vector1C8,
#endif
#if CORTEX_NUM_VECTORS > 99
    Vector1CC,
#endif
#if CORTEX_NUM_VECTORS > 100
    Vector1D0,
#endif
#if CORTEX_NUM_VECTORS > 101
    Vector1D4,
#endif
#if CORTEX_NUM_VECTORS > 102
    Vector1D8,
#endif
#if CORTEX_NUM_VECTORS > 103
    Vector1DC,
#endif
#if CORTEX_NUM_VECTORS > 104
    Vector1E0,
#endif
#if CORTEX_NUM_VECTORS > 105
    Vector1E4,
#endif
#if CORTEX_NUM_VECTORS > 106
    Vector1E8,
#endif
#if CORTEX_NUM_VECTORS > 107
    Vector1EC,
#endif
#if CORTEX_NUM_VECTORS > 108
    Vector1F0,
#endif
#if CORTEX_NUM_VECTORS > 109
    Vector1F4,
#endif
#if CORTEX_NUM_VECTORS > 110
    Vector1F8,
#endif
#if CORTEX_NUM_VECTORS > 111
    Vector1FC,
#endif
#if CORTEX_NUM_VECTORS > 112
    Vector200,
#endif
#if CORTEX_NUM_VECTORS > 113
    Vector204,
#endif
#if CORTEX_NUM_VECTORS > 114
    Vector208,
#endif
#if CORTEX_NUM_VECTORS > 115
    Vector20C,
#endif
#if CORTEX_NUM_VECTORS > 116
    Vector210,
#endif
#if CORTEX_NUM_VECTORS > 117
    Vector214,
#endif
#if CORTEX_NUM_VECTORS > 118
    Vector218,
#endif
#if CORTEX_NUM_VECTORS > 119
    Vector21C,
#endif
#if CORTEX_NUM_VECTORS > 120
    Vector220,
#endif
#if CORTEX_NUM_VECTORS > 121
    Vector224,
#endif
#if CORTEX_NUM_VECTORS > 122
    Vector228,
#endif
#if CORTEX_NUM_VECTORS > 123
    Vector22C,
#endif
#if CORTEX_NUM_VECTORS > 124
    Vector230,
#endif
#if CORTEX_NUM_VECTORS > 125
    Vector234,
#endif
#if CORTEX_NUM_VECTORS > 126
    Vector238,
#endif
#if CORTEX_NUM_VECTORS > 127
    Vector23C,
#endif
#if CORTEX_NUM_VECTORS > 128
    Vector240,
#endif
#if CORTEX_NUM_VECTORS > 129
    Vector244,
#endif
#if CORTEX_NUM_VECTORS > 130
    Vector248,
#endif
#if CORTEX_NUM_VECTORS > 131
    Vector24C,
#endif
#if CORTEX_NUM_VECTORS > 132
    Vector250,
#endif
#if CORTEX_NUM_VECTORS > 133
    Vector254,
#endif
#if CORTEX_NUM_VECTORS > 134
    Vector258,
#endif
#if CORTEX_NUM_VECTORS > 135
    Vector25C,
#endif
#if CORTEX_NUM_VECTORS > 136
    Vector260,
#endif
#if CORTEX_NUM_VECTORS > 137
    Vector264,
#endif
#if CORTEX_NUM_VECTORS > 138
    Vector268,
#endif
#if CORTEX_NUM_VECTORS > 139
    Vector26C,
#endif
#if CORTEX_NUM_VECTORS > 140
    Vector270,
#endif
#if CORTEX_NUM_VECTORS > 141
    Vector274,
#endif
#if CORTEX_NUM_VECTORS > 142
    Vector278,
#endif
#if CORTEX_NUM_VECTORS > 143
    Vector27C,
#endif
#if CORTEX_NUM_VECTORS > 144
    Vector280,
#endif
#if CORTEX_NUM_VECTORS > 145
    Vector284,
#endif
#if CORTEX_NUM_VECTORS > 146
    Vector288,
#endif
#if CORTEX_NUM_VECTORS > 147
    Vector28C,
#endif
#if CORTEX_NUM_VECTORS > 148
    Vector290,
#endif
#if CORTEX_NUM_VECTORS > 149
    Vector294,
#endif
#if CORTEX_NUM_VECTORS > 150
    Vector298,
#endif
#if CORTEX_NUM_VECTORS > 151
    Vector29C,
#endif
#if CORTEX_NUM_VECTORS > 152
    Vector2A0,
#endif
#if CORTEX_NUM_VECTORS > 153
    Vector2A4,
#endif
#if CORTEX_NUM_VECTORS > 154
    Vector2A8,
#endif
#if CORTEX_NUM_VECTORS > 155
    Vector2AC,
#endif
#if CORTEX_NUM_VECTORS > 156
    Vector2B0,
#endif
#if CORTEX_NUM_VECTORS > 157
    Vector2B4,
#endif
#if CORTEX_NUM_VECTORS > 158
    Vector2B8,
#endif
#if CORTEX_NUM_VECTORS > 159
    Vector2BC,
#endif
#if CORTEX_NUM_VECTORS > 160
    Vector2C0,
#endif
#if CORTEX_NUM_VECTORS > 161
    Vector2C4,
#endif
#if CORTEX_NUM_VECTORS > 162
    Vector2C8,
#endif
#if CORTEX_NUM_VECTORS > 163
    Vector2CC,
#endif
#if CORTEX_NUM_VECTORS > 164
    Vector2D0,
#endif
#if CORTEX_NUM_VECTORS > 165
    Vector2D4,
#endif
#if CORTEX_NUM_VECTORS > 166
    Vector2D8,
#endif
#if CORTEX_NUM_VECTORS > 167
    Vector2DC,
#endif
#if CORTEX_NUM_VECTORS > 168
    Vector2E0,
#endif
#if CORTEX_NUM_VECTORS > 169
    Vector2E4,
#endif
#if CORTEX_NUM_VECTORS > 170
    Vector2E8,
#endif
#if CORTEX_NUM_VECTORS > 171
    Vector2EC,
#endif
#if CORTEX_NUM_VECTORS > 172
    Vector2F0,
#endif
#if CORTEX_NUM_VECTORS > 173
    Vector2F4,
#endif
#if CORTEX_NUM_VECTORS > 174
    Vector2F8,
#endif
#if CORTEX_NUM_VECTORS > 175
    Vector2FC,
#endif
#if CORTEX_NUM_VECTORS > 176
    Vector300,
#endif
#if CORTEX_NUM_VECTORS > 177
    Vector304,
#endif
#if CORTEX_NUM_VECTORS > 178
    Vector308,
#endif
#if CORTEX_NUM_VECTORS > 179
    Vector30C,
#endif
#if CORTEX_NUM_VECTORS > 180
    Vector310,
#endif
#if CORTEX_NUM_VECTORS > 181
    Vector314,
#endif
#if CORTEX_NUM_VECTORS > 182
    Vector318,
#endif
#if CORTEX_NUM_VECTORS > 183
    Vector31C,
#endif
#if CORTEX_NUM_VECTORS > 184
    Vector320,
#endif
#if CORTEX_NUM_VECTORS > 185
    Vector324,
#endif
#if CORTEX_NUM_VECTORS > 186
    Vector328,
#endif
#if CORTEX_NUM_VECTORS > 187
    Vector32C,
#endif
#if CORTEX_NUM_VECTORS > 188
    Vector330,
#endif
#if CORTEX_NUM_VECTORS > 189
    Vector334,
#endif
#if CORTEX_NUM_VECTORS > 190
    Vector338,
#endif
#if CORTEX_NUM_VECTORS > 191
    Vector33C,
#endif
#if CORTEX_NUM_VECTORS > 192
    Vector340,
#endif
#if CORTEX_NUM_VECTORS > 193
    Vector344,
#endif
#if CORTEX_NUM_VECTORS > 194
    Vector348,
#endif
#if CORTEX_NUM_VECTORS > 195
    Vector34C,
#endif
#if CORTEX_NUM_VECTORS > 196
    Vector350,
#endif
#if CORTEX_NUM_VECTORS > 197
    Vector354,
#endif
#if CORTEX_NUM_VECTORS > 198
    Vector358,
#endif
#if CORTEX_NUM_VECTORS > 199
    Vector35C,
#endif
#if CORTEX_NUM_VECTORS > 200
    Vector360,
#endif
#if CORTEX_NUM_VECTORS > 201
    Vector364,
#endif
#if CORTEX_NUM_VECTORS > 202
    Vector368,
#endif
#if CORTEX_NUM_VECTORS > 203
    Vector36C,
#endif
#if CORTEX_NUM_VECTORS > 204
    Vector370,
#endif
#if CORTEX_NUM_VECTORS > 205
    Vector374,
#endif
#if CORTEX_NUM_VECTORS > 206
    Vector378,
#endif
#if CORTEX_NUM_VECTORS > 207
    Vector37C,
#endif
#if CORTEX_NUM_VECTORS > 208
    Vector380,
#endif
#if CORTEX_NUM_VECTORS > 209
    Vector384,
#endif
#if CORTEX_NUM_VECTORS > 210
    Vector388,
#endif
#if CORTEX_NUM_VECTORS > 211
    Vector38C,
#endif
#if CORTEX_NUM_VECTORS > 212
    Vector390,
#endif
#if CORTEX_NUM_VECTORS > 213
    Vector394,
#endif
#if CORTEX_NUM_VECTORS > 214
    Vector398,
#endif
#if CORTEX_NUM_VECTORS > 215
    Vector39C,
#endif
#if CORTEX_NUM_VECTORS > 216
    Vector3A0,
#endif
#if CORTEX_NUM_VECTORS > 217
    Vector3A4,
#endif
#if CORTEX_NUM_VECTORS > 218
    Vector3A8,
#endif
#if CORTEX_NUM_VECTORS > 219
    Vector3AC,
#endif
#if CORTEX_NUM_VECTORS > 220
    Vector3B0,
#endif
#if CORTEX_NUM_VECTORS > 221
    Vector3B4,
#endif
#if CORTEX_NUM_VECTORS > 222
    Vector3B8,
#endif
#if CORTEX_NUM_VECTORS > 223
    Vector3BC,
#endif
#if CORTEX_NUM_VECTORS > 224
    Vector3C0,
#endif
#if CORTEX_NUM_VECTORS > 225
    Vector3C4,
#endif
#if CORTEX_NUM_VECTORS > 226
    Vector3C8,
#endif
#if CORTEX_NUM_VECTORS > 227
    Vector3CC,
#endif
#if CORTEX_NUM_VECTORS > 228
    Vector3D0,
#endif
#if CORTEX_NUM_VECTORS > 229
    Vector3D4,
#endif
#if CORTEX_NUM_VECTORS > 230
    Vector3D8,
#endif
#if CORTEX_NUM_VECTORS > 231
    Vector3DC
#endif
#if CORTEX_NUM_VECTORS > 232
    Vector3E0,
#endif
#if CORTEX_NUM_VECTORS > 233
    Vector3E4,
#endif
#if CORTEX_NUM_VECTORS > 234
    Vector3E8,
#endif
#if CORTEX_NUM_VECTORS > 235
    Vector3EC
#endif
#if CORTEX_NUM_VECTORS > 236
    Vector3F0,
#endif
#if CORTEX_NUM_VECTORS > 237
    Vector3F4,
#endif
#if CORTEX_NUM_VECTORS > 238
    Vector3F8,
#endif
#if CORTEX_NUM_VECTORS > 239
    Vector3FC
#endif
  }
};

/** @} */
