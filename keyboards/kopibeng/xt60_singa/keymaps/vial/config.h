/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

/* Vial-specific definitions. */
#define VIAL_KEYBOARD_UID {0x46, 0x90, 0x2C, 0x51, 0xE6, 0xEB, 0xDC, 0x89}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 2 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 12 }

// place overrides here
#define VIAL_TAP_DANCE_ENTRIES 4
#define VIAL_COMBO_ENTRIES 4
#define RSPC_KEYS KC_RSFT, KC_LSFT, KC_NUBS

/* Change USB Polling Rate to 1000hz and a larger keys per scan for elite gaming*/
#define USB_POLLING_INTERVAL_MS 1
#define QMK_KEYS_PER_SCAN 12
