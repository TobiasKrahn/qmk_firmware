/* Copyright 2021 Glorious, LLC <salman@pcgamingrace.com>
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

#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
#define _BL 0
#define _FL 1


// enum custom_keycodes
// {
//     SOCD_ENABLE = SAFE_RANGE,
//     SOCD_DISABLE
// };

// bool socd_enabled = true;

// bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//     static bool wHeld = false;
//     static bool sHeld = false;
//     static bool aHeld = false;
//     static bool dHeld = false;
//     static bool fnHeld = false;

//     // Track the state of the WIN_FN key
//     if (keycode == MO(_FL)) {
//         fnHeld = record->event.pressed;
//     }

//     // Check if WIN_FN is held and 1 is pressed to enable SOCD
//     if (fnHeld && keycode == KC_1 && record->event.pressed) {
//         socd_enabled = true; // Enable SOCD feature
//         return false; // Prevent further processing of this event
//     }

//     // Check if WIN_FN is held and 2 is pressed to disable SOCD
//     if (fnHeld && keycode == KC_2 && record->event.pressed) {
//         socd_enabled = false; // Disable SOCD feature
//         return false; // Prevent further processing of this event
//     }

//     // Handle custom keycodes for SOCD_ENABLE and SOCD_DISABLE
//     switch (keycode) {
//         case SOCD_ENABLE:
//             if (record->event.pressed) {
//                 socd_enabled = true; // Enable SOCD
//             }
//             return false; // Prevent further processing

//         case SOCD_DISABLE:
//             if (record->event.pressed) {
//                 socd_enabled = false; // Disable SOCD
//             }
//             return false; // Prevent further processing
//     }

//     // Handle SOCD key logic
//     switch (keycode) {
//         case KC_W:
//             wHeld = record->event.pressed;
//             if (socd_enabled) {
//                 if (sHeld && wHeld) {
//                     unregister_code(KC_S); // Unregister S if both W and S are held
//                 } else if (sHeld && !wHeld) {
//                     unregister_code(KC_W);
//                     register_code(KC_S); // Register S if W is released and S is held
//                     return false; // Prevent further processing
//                 }
//             }
//             break; // Break to continue processing

//         case KC_S:
//             sHeld = record->event.pressed;
//             if (socd_enabled) {
//                 if (wHeld && sHeld) {
//                     unregister_code(KC_W); // Unregister W if both W and S are held
//                 } else if (wHeld && !sHeld) {
//                     unregister_code(KC_S);
//                     register_code(KC_W); // Register W if S is released and W is held
//                     return false; // Prevent further processing
//                 }
//             }
//             break; // Break to continue processing

//         case KC_A:
//             aHeld = record->event.pressed;
//             if (socd_enabled) {
//                 if (dHeld && aHeld) {
//                     unregister_code(KC_D); // Unregister D if both A and D are held
//                 } else if (dHeld && !aHeld) {
//                     unregister_code(KC_A);
//                     register_code(KC_D); // Register D if A is released and D is held
//                     return false; // Prevent further processing
//                 }
//             }
//             break; // Break to continue processing

//         case KC_D:
//             dHeld = record->event.pressed;
//             if (socd_enabled) {
//                 if (aHeld && dHeld) {
//                     unregister_code(KC_A); // Unregister A if both A and D are held
//                 } else if (aHeld && !dHeld) {
//                     unregister_code(KC_D);
//                     register_code(KC_A); // Register A if D is released and A is held
//                     return false; // Prevent further processing
//                 }
//             }
//             break; // Break

//         default:
//             break; // return keycodes normally
//     }

//     return true;
// }


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Keymap _BL: Base Layer (Default Layer)
   */
[_BL] = LAYOUT(
  QK_GESC,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_DEL,   KC_PSCR,  KC_INS,   KC_PGUP,  KC_PGDN,
  KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,  KC_NUM,   KC_PSLS,  KC_PAST,  KC_PMNS,
  KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_ENT,   KC_P7,    KC_P8,    KC_P9,    KC_PPLS,
  KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,  KC_NUHS,            KC_P4,    KC_P5,    KC_P6,
  KC_LSFT,  KC_NUBS,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,  KC_UP,    KC_P1,    KC_P2,    KC_P3,    KC_PENT,
  KC_LCTL,  KC_LGUI,  KC_LALT,                      KC_SPC,                                 KC_RALT,  MO(_FL),  KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_P0,    KC_PDOT),

  /* Keymap _FL: Function Layer
   */
[_FL] = LAYOUT(
  QK_BOOT,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______,  _______,
  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______,  _______,
  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,  KC_VOLU,  _______,  _______,
  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,             KC_MPRV,  KC_MPLY,  KC_MNXT,
  _______,  _______,  RGB_SAI,  RGB_SAD,  RGB_SPD,  RGB_SPI,  RGB_HUD,  RGB_HUI,  _______,  _______,  _______,  _______,  _______,   RGB_VAI,  _______,  KC_VOLD,  _______,  _______,
  _______,  UC_WIN,   _______,                      _______,                                _______,  _______,  _______,  RGB_RMOD,  RGB_VAD,  RGB_MOD,  _______,  _______)
};

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    if (host_keyboard_led_state().caps_lock) {
        for (uint8_t led = led_min; led < led_max; led++) {
            RGB_MATRIX_INDICATOR_SET_COLOR(led, 255, 0, 0);

        }
    }
    return false;
}
