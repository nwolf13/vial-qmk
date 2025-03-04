/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#define VIAL_KEYBOARD_UID {0x78, 0x38, 0xA9, 0x1B, 0xAA, 0xB6, 0x27, 0x45}

#define VIAL_UNLOCK_COMBO_ROWS {0, 2}
#define VIAL_UNLOCK_COMBO_COLS {0, 0}

#include "spanish_space_cadet.h"

/* Change USB Polling Rate to 1000hz and a larger keys per scan for elite gaming*/
#define USB_POLLING_INTERVAL_MS 1
#define QMK_KEYS_PER_SCAN 12

