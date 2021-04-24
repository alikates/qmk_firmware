/* Copyright 2021 Don Kjer
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifdef LED_MATRIX_ENABLE

#include "k3x0.h"

const is31_led g_is31_leds[DRIVER_LED_TOTAL] = {
/* Refer to IS31 manual for these locations
 *    driver
 *    |  LED address
 *    |  | */
    { 0, C1_1  }, // ESC
    { 0, C1_2  }, // F1
    { 0, C1_3  }, // F2
    { 0, C1_4  }, // F3
    { 0, C1_5  }, // F4
    { 0, C1_6  }, // F5
    { 0, C1_7  }, // F6
    { 0, C1_8  }, // F7
    { 0, C1_9  }, // F8
    { 0, C1_10 }, // F9
    { 0, C1_11 }, // F10
    { 0, C1_12 }, // F11
    { 0, C1_13 }, // F12
    { 0, C1_14 }, // PRNT
    { 0, C1_15 }, // SCR
    { 0, C1_16 }, // PAUSE

    { 0, C2_1  }, // GRV
    { 0, C2_2  }, // 1
    { 0, C2_3  }, // 2
    { 0, C2_4  }, // 3
    { 0, C2_5  }, // 4
    { 0, C2_6  }, // 5
    { 0, C2_7  }, // 6
    { 0, C2_8  }, // 7
    { 0, C2_9  }, // 8
    { 0, C2_10 }, // 9
    { 0, C2_11 }, // 0
    { 0, C2_12 }, // -
    { 0, C2_13 }, // =
    { 0, C2_15 }, // BCKSP
    { 0, C2_16 }, // INS
    { 0, C3_15 }, // HOME
    { 0, C3_16 }, // PGUP

    { 0, C3_1  }, // TAB
    { 0, C3_2  }, // Q
    { 0, C3_3  }, // W
    { 0, C3_4  }, // E
    { 0, C3_5  }, // R
    { 0, C3_6  }, // T
    { 0, C3_7  }, // Y
    { 0, C3_8  }, // U
    { 0, C3_9  }, // I
    { 0, C3_10 }, // O
    { 0, C3_11 }, // P
    { 0, C3_12 }, // [
    { 0, C3_13 }, // ]
    { 0, C3_14 }, // BCKSLSH
    { 0, C4_15 }, // DEL
    { 0, C4_16 }, // END
    { 0, C5_16 }, // PGDN

    { 0, C4_1  }, // CAPS
    { 0, C4_2  }, // A
    { 0, C4_3  }, // S
    { 0, C4_4  }, // D
    { 0, C4_5  }, // F
    { 0, C4_6  }, // G
    { 0, C4_7  }, // H
    { 0, C4_8  }, // J
    { 0, C4_9  }, // K
    { 0, C4_10 }, // L
    { 0, C4_11 }, // ;
    { 0, C4_12 }, // '
    { 0, C4_13 }, // NUHS
    { 0, C4_14 }, // ENTER

    { 0, C5_1  }, // LSHIFT
    { 0, C5_2  }, // NUBS
    { 0, C5_3  }, // Z
    { 0, C5_4  }, // X
    { 0, C5_5  }, // C
    { 0, C5_6  }, // V
    { 0, C5_7  }, // B
    { 0, C5_8  }, // N
    { 0, C5_9  }, // M
    { 0, C5_10 }, // ,
    { 0, C5_11 }, // .
    { 0, C5_12 }, // /
    { 0, C5_14 }, // RSHIFT
    { 0, C5_15 }, // UP

    { 0, C6_1  }, // LCTRL
    { 0, C6_2  }, // LGUI
    { 0, C6_3  }, // LALT
    { 0, C6_6  }, // SPC
    { 0, C6_9  }, // RALT
    { 0, C6_10 }, // FN
    { 0, C6_11 }, // APP
    { 0, C6_12 }, // RCTRL
    { 0, C6_13 }, // LEFT
    { 0, C6_14 }, // DOWN
    { 0, C6_15 }  // RGHT
};

#endif /* LED_MATRIX_ENABLE */
