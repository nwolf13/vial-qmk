/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#define VIAL_KEYBOARD_UID {0x8B, 0x13, 0x1F, 0x2D, 0x2A, 0x37, 0x81, 0x46}

#define VIAL_UNLOCK_COMBO_ROWS { 0, 2 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 13 }

#define RSPC_KEYS KC_RSFT, KC_LSFT, KC_NUBS

/* Change USB Polling Rate to 1000hz and a larger keys per scan for elite gaming*/
#define USB_POLLING_INTERVAL_MS 1
#define QMK_KEYS_PER_SCAN 12
