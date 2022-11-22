/* Copyright 2021 andresteare
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


#define DE_SS KC_MINS
#define DE_AE KC_QUOT
#define DE_OE KC_SCLN
#define DE_UE KC_LBRC
#define KC_APP KC_APPLICATION

#define DE_CIRC KC_GRAVE // accent circumflex ^ and ring °
#define DE_ACUT KC_EQL // accent acute ´ and grave `
#define DE_PLUS KC_RBRC // + and * and ~
#define DE_HASH KC_BSLS // # and '
#define DE_LESS KC_NUBS // < and > and |
#define DE_MINS KC_SLSH // - and _


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	
    [0] = LAYOUT(
    KC_ESC,   KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,    KC_PSCR, KC_SLCK, KC_PAUS,     KC_MPRV,     KC_MPLY,     KC_MNXT,        KC_KB_MUTE, \
    DE_CIRC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, DE_SS, DE_ACUT,    KC_BSPC,    KC_INS,  KC_HOME, KC_PGUP,     KC_NUM_LOCK, KC_KP_SLASH, KC_KP_ASTERISK, KC_KP_MINUS, \
    KC_TAB,   KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Z, KC_U, KC_I, KC_O, KC_P, DE_UE, DE_PLUS,    KC_ENT,    KC_DEL,  KC_END,  KC_PGDN,     KC_P7,       KC_P8,       KC_P9,          KC_KP_PLUS, \
    KC_CAPS,   KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, DE_OE, DE_AE, DE_HASH,                                            KC_P4,       KC_P5,       KC_P6,                \
    KC_LSFT, DE_LESS, KC_Y, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH,   KC_RSFT,             KC_UP,                KC_P1,       KC_P2,       KC_P3,          KC_KP_ENTER, \
    KC_LCTL, KC_LWIN, KC_LALT,               KC_SPC,         KC_RIGHT_ALT, KC_RWIN, KC_APP, KC_RCTL,    KC_LEFT, KC_DOWN, KC_RGHT,     KC_KP_0,                  KC_KP_DOT       \
	)
};

bool encoder_update_kb(uint8_t index, bool clockwise) 
{
    return encoder_update_user(index, clockwise);
}

bool encoder_update_user(uint8_t index, bool clockwise)
{
    if (index == 0) 
	{ /* First encoder */
        if (clockwise)
		{
            tap_code_delay(KC_VOLU, 2);
        }
		else
		{
            tap_code_delay(KC_VOLD, 2);
        }
    } 
    return false;
}
