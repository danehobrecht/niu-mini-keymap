/* Copyright 2022 Dane Hobrecht
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

rgblight_setrgb(RGB_BLUE);

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	/* Layer 0
	 * ,-----------------------------------------------------------------------------------.
	 * |  Esc |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
	 * |------+------+------+------+------+------+------+------+------+------+------+------|
	 * |  Tab |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  | ;  : |  ' " |
	 * |------+------+------+------+------+------+------+------+------+------+------+------|
	 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |  , < |  . > |  Up  | Enter|
	 * |------+------+------+------+------+------+------+------+------+------+------+------|
	 * | Ctrl |Fn(L1)|  GUI |  Alt |  L2  |    Space    |  L3  |  / ? | Left | Down | Right|
	 * `-----------------------------------------------------------------------------------'
	 */
	[0] = LAYOUT_planck_mit(
		KC_ESC,  KC_Q,  KC_W,    KC_E,    KC_R,  KC_T, KC_Y, KC_U,  KC_I,    KC_O,    KC_P,    KC_BSPC,
		KC_TAB,  KC_A,  KC_S,    KC_D,    KC_F,  KC_G, KC_H, KC_J,  KC_K,    KC_L,    KC_SCLN, KC_QUOT,
		KC_LSFT, KC_Z,  KC_X,    KC_C,    KC_V,  KC_B, KC_N, KC_M,  KC_COMM, KC_DOT,  KC_UP,   KC_ENT,
		KC_LCTL, MO(1), KC_LGUI, KC_LALT, MO(2),   KC_SPC,   MO(3), KC_SLSH, KC_LEFT, KC_DOWN, KC_RGHT
	),

	/* Layer 1
	 * ,-----------------------------------------------------------------------------------.
	 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |
	 * |------+------+------+------+------+------+------+------+------+------+------+------|
	 * |      |      |      |      |      |      |      |      |      |      |      |      |
	 * |------+------+------+------+------+------+------+------+------+------+------+------|
	 * |      |      |      |      |      |      |      |      |      |      |      |      |
	 * |------+------+------+------+------+------+------+------+------+------+------+------|
	 * |      |      |      |      |      |      |      |      |      |      |      |      |
	 * `-----------------------------------------------------------------------------------'
	 */
	[1] = LAYOUT_planck_mit(
		KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,    KC_F10,  KC_F11,  KC_F12,
		_______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______,
		_______, _______, _______, _______, _______,      _______,     _______, _______,  _______, _______, _______
	),

	/* Layer 2
	 * ,-----------------------------------------------------------------------------------.
	 * |   `  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |   =  |
	 * |------+------+------+------+------+------+------+------+------+------+------+------|
	 * |      |   4  |   5  |   6  |      |      |      |      |      |  - _ |  [ { |  ] } |
	 * |------+------+------+------+------+------+------+------+------+------+------+------|
	 * |      |   7  |   8  |   9  |      |      |      |      |      |      |      |      |
	 * |------+------+------+------+------+------+------+------+------+------+------+------|
	 * | Reset|      |      |      |      |      |      |      |  \ | |      |      |      |
	 * `-----------------------------------------------------------------------------------'
	 */
	[2] = LAYOUT_planck_mit(
		KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,     KC_9,    KC_0,    KC_EQL,
		_______, KC_4,    KC_5,    KC_6,    _______, _______, _______, _______, _______,  KC_MINS, KC_LBRC, KC_RBRC,
		_______, KC_7,    KC_8,    KC_9,    _______, _______, _______, _______, _______,  _______, _______, _______,
		RESET,   _______, _______, _______, _______,      _______,     _______, KC_BSLS,  _______, _______, _______
	),

	/* Layer 3
	 * ,-----------------------------------------------------------------------------------.
	 * |      |  l_B |  m_U |  r_B |  w_U |  b_T |  Ins |      |  Up  | Pause|  p_U |      |
	 * |------+------+------+------+------+------+------+------+------+------+------+------|
	 * |      |  m_L |  m_D |  m_R |  w_D |      |      | Left | Down | Right|  p_D |  End |
	 * |------+------+------+------+------+------+------+------+------+------+------+------|
	 * |      |  c_H |  c_B |  c_C |  c_T |      |      | Mute | Vol- | Vol+ |      |      |
	 * |------+------+------+------+------+------+------+------+------+------+------+------|
	 * |      |      |      |      |      |      |      |      |      |      |      |      |
	 * `-----------------------------------------------------------------------------------'
	 */
	[3] = LAYOUT_planck_mit(
		_______, KC_BTN1, KC_MS_U, KC_BTN2, KC_WH_U, BL_TOGG, KC_INS,  _______, KC_UP,   KC_PAUS, KC_PGUP, _______,
		_______, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, _______, KC_LSCR, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, KC_END,
		_______, RGB_HUI, RGB_VAI, RGB_MOD, RGB_TOG, _______, _______, KC_MUTE, KC_VOLD, KC_VOLU, _______, _______,
		_______, _______, _______, _______, _______,      _______,     _______, _______, _______, _______, _______
	),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}
