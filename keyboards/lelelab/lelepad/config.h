/*
Copyright 2021 LeleLab

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID    0xCA21
#define PRODUCT_ID   0x0020
#define DEVICE_VER   0x0001
#define MANUFACTURER LeleLab
#define PRODUCT      LelePad

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 4

#define MATRIX_ROW_PINS {B0,B1,B2,B3,B4}
#define MATRIX_COL_PINS {C0,C1,C2,C3}
#define UNUSED_PINS     {D0,D1,D5,D7} 
#define DIODE_DIRECTION COL2ROW


/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

#define F_SCL   700000UL

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

/* disable these deprecated features by default */
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

/* Bootmagic Lite key configuration */
#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0
