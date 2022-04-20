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

	/* Layer 0
	 * ,-----------------------------------------------------------------------------------.
	 * |  Esc |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
	 * |------+------+------+------+------+------+------+------+------+------+------+------|
	 * |  Tab |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |   "  |
	 * |------+------+------+------+------+------+------+------+------+------+------+------|
	 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |  Up  |Enter |
	 * |------+------+------+------+------+------+------+------+------+------+------+------|
	 * | Ctrl | Caps |  Alt |  GUI |Layer1|    Space    |Layer2|   /  | Left | Down |Right |
	 * `-----------------------------------------------------------------------------------'
	 */
	[0] = LAYOUT_planck_mit(
		KC_ESC,  KC_Q,  KC_W,   KC_E,   KC_R,  KC_T,   KC_Y,  KC_U,  KC_I,    KC_O,   KC_P,    KC_BSPC,
		KC_TAB,  KC_A,  KC_S,   KC_D,   KC_F,  KC_G,   KC_H,  KC_J,  KC_K,    KC_L,   KC_SCLN, KC_QUOT,
		KC_LSFT, KC_Z,  KC_X,   KC_C,   KC_V,  KC_B,   KC_N,  KC_M,  KC_COMM, KC_DOT, KC_UP,   KC_ENT,
		KC_LCTL, KC_CAPS, KC_LALT, KC_LGUI, MO(1),  KC_SPC,  MO(2),  KC_SLSH, KC_LEFT,KC_DOWN, KC_RGHT
	),

	/* Layer 1
	 * ,-----------------------------------------------------------------------------------.
	 * |   `  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |   =  |
	 * |------+------+------+------+------+------+------+------+------+------+------+------|
	 * |      | Vol- | Vol+ | Mute |      |      |      |      |      |   -  |   [  |   ]  |
	 * |------+------+------+------+------+------+------+------+------+------+------+------|
	 * |      | r_TOG|r_Mode|      |      |      |      |      |      |  l_B |  m_U |  r_B |
	 * |------+------+------+------+------+------+------+------+------+------+------+------|
	 * |      |      |      |      |      |      |      |      |   \  |  m_L |  m_D |  m_R |
	 * `-----------------------------------------------------------------------------------'
	 */
	[1] = LAYOUT_planck_mit(
		KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_EQL,
		_______, KC_VOLD, KC_VOLU, KC_MUTE, _______, _______, _______, _______, _______, KC_MINS, KC_LBRC, KC_RBRC,
		_______, RGB_TOG, RGB_MOD, _______, _______, _______, _______, _______, _______, KC_BTN1, KC_MS_U, KC_BTN2,
		_______, _______, _______, _______, _______,    _______,   _______,   KC_BSLS, KC_MS_L, KC_MS_D, KC_MS_R
	),

	/* Layer 2
	 * ,-----------------------------------------------------------------------------------.
	 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |
	 * |------+------+------+------+------+------+------+------+------+------+------+------|
	 * |      |      |      |      |      |      |      |      |      |      |      |      |
	 * |------+------+------+------+------+------+------+------+------+------+------+------|
	 * |      |      |      |      |      |      |      |      |      |      |  s_U |      |
	 * |------+------+------+------+------+------+------+------+------+------+------+------|
	 * | Reset|      |      |      |      |      |      |      |      |  s_L |  s_D |  s_R |
	 * `-----------------------------------------------------------------------------------'
	 */
	[2] = LAYOUT_planck_mit(
		KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_WH_U, _______,
		RESET,   _______, _______, _______, _______,      _______,     _______, _______, KC_WH_L, KC_WH_D, KC_WH_R
	),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}
