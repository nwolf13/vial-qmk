/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

/* Vial-specific definitions. */
#define VIAL_KEYBOARD_UID {0xF1, 0x3E, 0xD5, 0xB3, 0x8B, 0xAF, 0x7A, 0x53}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 2 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 13 }
#define LED_PIN_ON_STATE 0

// place overrides here
#define VIAL_TAP_DANCE_ENTRIES 4
#define VIAL_COMBO_ENTRIES 4
#define RSPC_KEYS KC_RSFT, KC_LSFT, KC_NUBS

/* Change USB Polling Rate to 1000hz and a larger keys per scan for elite gaming*/
#define USB_POLLING_INTERVAL_MS 1
#define QMK_KEYS_PER_SCAN 12
