/* Copyright 2019 Matt Horgan
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
#include "my.h"



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* QWERTY
   *        ,-----------------------------------------------------------------------------------.
   *        |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  |  F10  | F11 |  F12 |
   *        |------+------+------+------+------+-------------+------+------+------+------+------|
   *        | Esc  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Del  |
   *        |+------+------+------+------+-----+------+------+------+------+------+------+------|--------------.
   *        | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp | Rotary Click |
   * ,------+------+------+------+------+------+------+------+------+------+------+------+------|--------------'
   * | PgUp |CtlEsc|   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  | Ret  |
   * |------+------+------+------+------+------+-------------+------+------+------+------+------|
   * | Lower|Lshft(|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Rshft)|
   * |------+------+------+------+------+------+------+------+------+------+------+------+------|
   * | PgDn | Del  | Ctrl | GUI  | ALT  |Lower |SPACE |SPACE |Raise | Left | Down |  Up  |Right |
   * `------------------------------------------------------------------------------------------'
   */
  	[_QWERTY] = LAYOUT_ropro_wrapper(
              KC_F1,   KC_F2,    KC_F3,    KC_F4,   KC_F5,   KC_F6, KC_F7,    KC_F8,  KC_F9,   KC_F10,   KC_F11,  KC_F12,
              KC_ESC,  __________________BASE_L0__________________, __________________BASE_R0__________________,  KC_DEL,
KC_CAPS,      KC_TAB,  _________________QWERTY_L1_________________, _________________QWERTY_R1_________________,  KC_BSPC,
    KC_PGUP,  CTL_ESC, _________________QWERTY_L2_________________, _________________QWERTY_R2_________________,  KC_ENT,
    LOWER,    KC_LSPO, _________________QWERTY_L3_________________, _________________QWERTY_R3_________________,  KC_RSPC,
    KC_PGDN,  KC_DEL,  KC_LEAD,  KC_LALT, KC_LGUI, LOWER,    NAV_S, NAV_S,   RAISE,   KC_LEFT, KC_DOWN,   KC_UP,  KC_RGHT
  ),
  	[_TEST] = LAYOUT_ropro_wrapper(
              KC_F1,   KC_F2,    KC_F3,    KC_F4,   KC_F5,   KC_F6, KC_F7,    KC_F8,  KC_F9,   KC_F10,   KC_F11,  KC_F12,
              KC_ESC,  __________________BASE_L0__________________, __________________BASE_R0__________________,  KC_DEL,
KC_CAPS,      KC_TAB,  _________________QWERTY_L1_________________, _________________QWERTY_R1_________________,  KC_BSPC,
    KC_PGUP,  CTL_ESC, _________________QWERTY_L2_________________, _________________QWERTY_R2_________________,  KC_QUOT,
    LOWER,    KC_LSPO, _________________QWERTY_L3_________________, _________________QWERTY_R3_________________,  KC_ENT,
    KC_PGDN,  KC_DEL,  KC_LEAD,  KC_LALT, KC_LGUI, LOWER,    NAV_S, NAV_S,   RAISE,   KC_LEFT, KC_DOWN,   KC_UP,  KC_RGHT
  ),
  /* GAMING
   *        ,-----------------------------------------------------------------------------------.
   *        |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  |  F10  | F11 |  F12 |
   *        |------+------+------+------+------+-------------+------+------+------+------+------|
   *        | Esc  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |   -  |
   *        |+------+------+------+------+-----+------+------+------+------+------+------+------|--------------.
   *        | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp | Rotary Click |
   * ,------+------+------+------+------+------+------+------+------+------+------+------+------|--------------'
   * | PgUp | Ctrl |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  "   |
   * |------+------+------+------+------+------+-------------+------+------+------+------+------|
   * | Lower| Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Enter |
   * |------+------+------+------+------+------+------+------+------+------+------+------+------|
   * | PgDn | Del  | Ctrl | GUI  | ALT  |Lower |SPACE |SPACE | End  | Left | Down |  Up  |Right |
   * `------------------------------------------------------------------------------------------'
   */
  	[_GAMING] = LAYOUT_ropro_wrapper(
              KC_F1,     KC_F2,    KC_F3,    KC_F4,   KC_F5,   KC_F6, KC_F7,    KC_F8,  KC_F9,   KC_F10,   KC_F11,  KC_F12,
              KC_ESC,    __________________BASE_L0__________________, __________________BASE_R0__________________,  KC_DEL,
KC_CAPS,      KC_TAB,    _________________QWERTY_L1_________________, _________________QWERTY_R1_________________,  KC_BSPC,
    KC_PGUP,  KC_LCTRL,  _________________QWERTY_L2_________________, _________________QWERTY_R2_________________,  KC_QUOT,
    LOWER,    KC_LSHIFT, _________________QWERTY_L3_________________, _________________QWERTY_R3_________________,  KC_ENT,
    KC_PGDN,  KC_DEL,    KC_RCTRL, KC_LALT, KC_LGUI, LOWER,   KC_SPC, KC_SPC,  RAISE,   KC_LEFT, KC_DOWN,   KC_UP,  KC_RGHT
  ),


  /* LOWER
   *        ,-----------------------------------------------------------------------------------.
   *        |TOGRGB|      |      |      |Sat(-)|Hue(-)|Hue(+)|Sat(+)|      |      |Brght-|Brght+|
   *        |------+------+------+------+------+-------------+------+------+------+------+------|
   *        |  `   |      |      |      |      |      |      |      |      |      |      |   =  |
   *        |+------+------+------+------+-----+------+------+------+------+------+------+------|--------------.
   *        |      |      |  Up  |      |      |      |      |      |      |   [  |   ]  |   \  |    NumLock   |
   * ,------+------+------+------+------+------+------+------+------+------+------+------+------|--------------'
   * | Home |      | Left | Down |Right |      |      |      |      |      |      |      |      |
   * |------+------+------+------+------+------+-------------+------+------+------+------+------|
   * |      |      |      |      |      |      |      |      |      |      |      |      |      |
   * |------+------+------+------+------+------+------+------+------+------+------+------+------|
   * | End  |      |      |      |      |      |      |      |      |      |      |      |PrScn |
   * `------------------------------------------------------------------------------------------'
   */
    [_LOWER] = LAYOUT_ropro_wrapper(
              KC_F1,     KC_F2,    KC_F3,    KC_F4,   KC_F5,   KC_F6, KC_F7,    KC_F8,  KC_F9,   KC_F10,   KC_F11,  KC_F12,
              KC_GRV,    __________________BASE_L0__________________, __________________BASE_R0__________________,  KC_DEL,
KC_CAPS,      KC_TILD,   _________________LOWER_L1__________________, _________________LOWER_R1__________________,  KC_BSPC,
    KC_HOME,  KC_LCTRL,  _________________LOWER_L2__________________, _________________LOWER_R2__________________,  KC_QUOT,
    LOWER,    KC_LSHIFT, _________________LOWER_L3__________________, _________________LOWER_R3__________________,  KC_ENT,
    KC_END,   KC_DEL,    KC_RCTRL, KC_LALT, KC_LGUI, LOWER,   KC_SPC, KC_SPC,  RAISE,   KC_LEFT, KC_DOWN,   KC_UP,  KC_RGHT
  ),

  /* RAISE
   *        ,-----------------------------------------------------------------------------------.
   *        |TOGRGB|      |      |      |Sat(-)|Hue(-)|Hue(+)|Sat(+)|      |      |Brght-|Brght+|
   *        |------+------+------+------+------+-------------+------+------+------+------+------|
   *        |  `   |      |      |      |      |      |      |      |      |      |      |   =  |
   *        |+------+------+------+------+-----+------+------+------+------+------+------+------|--------------.
   *        |      |      |  Up  |      |      |      |      |      |      |   [  |   ]  |   \  |    NumLock   |
   * ,------+------+------+------+------+------+------+------+------+------+------+------+------|--------------'
   * | Home |      | Left | Down |Right |      |      |      |      |      |      |      |      |
   * |------+------+------+------+------+------+-------------+------+------+------+------+------|
   * |      |      |      |      |      |      |      |      |      |      |      |      |      |
   * |------+------+------+------+------+------+------+------+------+------+------+------+------|
   * | End  |      |      |      |      |      |      |      |      |      |      |      |PrScn |
   * `------------------------------------------------------------------------------------------'
   */
    [_RAISE] = LAYOUT_ropro_wrapper(
              KC_F1,     KC_F2,    KC_F3,    KC_F4,   KC_F5,   KC_F6, KC_F7,    KC_F8,  KC_F9,   KC_F10,   KC_F11,  KC_F12,
              KC_ESC,    __________________BASE_L0__________________, __________________BASE_R0__________________,  KC_DEL,
KC_CAPS,      KC_TAB,    _________________RAISE_L1__________________, _________________RAISE_R1__________________,  KC_BSPC,
    KC_HOME,  KC_LCTRL,  _________________RAISE_L2__________________, _________________RAISE_R2__________________,  KC_QUOT,
    LOWER,    KC_LSHIFT, _________________RAISE_L3__________________, _________________RAISE_R3__________________,  KC_ENT,
    KC_END,   KC_DEL,    KC_RCTRL, KC_LALT, KC_LGUI, LOWER,   KC_SPC, KC_SPC,  RAISE,   KC_LEFT, KC_DOWN,   KC_UP,  KC_RGHT
  ),

    /* RAISE
   *        ,-----------------------------------------------------------------------------------.
   *        |TOGRGB|      |      |      |Sat(-)|Hue(-)|Hue(+)|Sat(+)|      |      |Brght-|Brght+|
   *        |------+------+------+------+------+-------------+------+------+------+------+------|
   *        |  `   |      |      |      |      |      |      |      |      |      |      |   =  |
   *        |+------+------+------+------+-----+------+------+------+------+------+------+------|--------------.
   *        |      |      |  Up  |      |      |      |      |      |      |   [  |   ]  |   \  |    NumLock   |
   * ,------+------+------+------+------+------+------+------+------+------+------+------+------|--------------'
   * | Home |      | Left | Down |Right |      |      |      |      |      |      |      |      |
   * |------+------+------+------+------+------+-------------+------+------+------+------+------|
   * |      |      |      |      |      |      |      |      |      |      |      |      |      |
   * |------+------+------+------+------+------+------+------+------+------+------+------+------|
   * | End  |      |      |      |      |      |      |      |      |      |      |      |PrScn |
   * `------------------------------------------------------------------------------------------'
   */
    [_ADJUST] = LAYOUT_ropro_wrapper(
              XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
              XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, GAMING,  QWERTY,  TEST,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
  ),
};

void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    }
}
