/* Copyright 2021 Dane Hobrecht
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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* Layer 0 - Default
     * ,-----------------------------------------------------------------------------------.
     * | Esc  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * | Tab  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  "   |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |  Up  |Enter |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * | Ctrl |  GUI | Caps | Alt  |Layer1|    Space    |Layer2|   /  | Left | Down |Right |
     * `-----------------------------------------------------------------------------------'
     */
    [0] = LAYOUT_planck_mit(
        KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,  KC_T,   KC_Y,  KC_U,  KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,  KC_G,   KC_H,  KC_J,  KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,  KC_B,   KC_N,  KC_M,  KC_COMM, KC_DOT,  KC_UP,   KC_ENT,
        KC_LCTL, KC_LGUI, KC_CAPS, KC_LALT, MO(1),    KC_SPC,     MO(2), KC_SLSH, KC_LEFT, KC_DOWN, KC_RGHT
    ),

    /* Layer 1 - Numerical
     * ,-----------------------------------------------------------------------------------.
     * |   `  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |  =   |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |      | Mute | Vol- | Vol+ |      |      |      |   4  |   5  |   6  |   [  |  ]   |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |      |r_TOG |r_Mode|r_Hue-|      |      |      |   1  |   2  |   3  |   \  |  -   |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |      |r_HUD |BL_TOG|BL_STEP|     |    Space    |   0  |   .  | Enter|      |      |
     * `-----------------------------------------------------------------------------------'
     */
    [1] = LAYOUT_planck_mit(
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_EQL,
        _______, KC_MUTE, KC_VOLD, KC_VOLU, _______, _______, _______, KC_4,    KC_5,    KC_6,    KC_LBRC, KC_RBRC,
        _______, RGB_TOG, RGB_MOD, RGB_HUI, _______, _______, _______, KC_1,    KC_2,    KC_3,    KC_BSLS, KC_MINS,
        _______, RGB_HUD, BL_TOGG, BL_STEP, _______,      KC_SPC,      KC_0,    KC_DOT,  KC_ENT,  _______, _______
    ),

    /* Layer 2 - Diagnostic
     * ,-----------------------------------------------------------------------------------.
     * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |      |      |      |      |      |      |      |      |      |      |      |      |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |      |      |      |      |      |      |      |      |      |      |      |      |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * | Reset|      |      |      |      |      |      |      |      |      |      |      |
     * `-----------------------------------------------------------------------------------'
     */
    [2] = LAYOUT_planck_mit(
        KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______,
        _______, _______, _______, _______, _______, _______, _______, KC_F11,  KC_F12,  _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        RESET,   _______, _______, _______, _______,     _______,      _______, _______, _______, _______, _______
    ),
};

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    return true;
}

void led_set_user(uint8_t usb_led) {

    if (IS_LED_ON(usb_led, USB_LED_NUM_LOCK)) {

    } else {

    }

    if (IS_LED_ON(usb_led, USB_LED_CAPS_LOCK)) {

    } else {

    }

    if (IS_LED_ON(usb_led, USB_LED_SCROLL_LOCK)) {

    } else {

    }

    if (IS_LED_ON(usb_led, USB_LED_COMPOSE)) {

    } else {

    }

    if (IS_LED_ON(usb_led, USB_LED_KANA)) {

    } else {

    }

}
