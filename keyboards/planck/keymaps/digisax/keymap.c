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
#include "muse.h"

extern keymap_config_t keymap_config;


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* GAMING
 * ,-----------------------------------------------------------------------------------.
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Ctrl |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  | Ent  |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Shift |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |  NAV | Esc  | Alt  | GUI  |Lower |    Space    |Raise | RGUI | RALT | LEAD | GUI  |
 * `-----------------------------------------------------------------------------------'
 */

[_GAMING] = LAYOUT_planck_grid_wrapper(
<<<<<<< HEAD
    KC_TAB,  _________________QWERTY_L1_________________, _________________QWERTY_R1_________________, KC_BSPC,
=======
  KC_TAB,  _________________QWERTY_L1_________________, _________________QWERTY_R1_________________, KC_BSPC,
>>>>>>> 7b47a5c913bdbab25ffd98aad601957316da363d
	KC_LCTL, _________________QWERTY_L2_________________, _________________QWERTY_R2_________________, KC_ENT,
	KC_LSFT, _________________QWERTY_L3_________________, _________________QWERTY_R3_________________, KC_RSFT,
	NAV,     KC_ESC,  KC_LALT, KC_LGUI, LOWER,    KC_SPC, KC_SPC,  RAISE, KC_RGUI, KC_RALT, KC_LEAD,   NAV
),

/* Qwerty
 * ,-----------------------------------------------------------------------------------.
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | CtEs |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |Enter |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |Shift(|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Shift)|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |  NAV | Ctrl | Alt  | GUI  |Lower |    Space    |Raise | RGUI | RALT | LEAD | GUI  |
 * `-----------------------------------------------------------------------------------'
 */

[_QWERTY] = LAYOUT_planck_grid_wrapper(
    KC_TAB,  _________________QWERTY_L1_________________, _________________QWERTY_R1_________________, KC_BSPC,
    CTL_ESC, _________________QWERTY_L2_________________, _________________QWERTY_R2_________________, CTL_ENT,
    KC_LSPO, _________________QWERTY_L3_________________, _________________QWERTY_R3_________________, KC_RSPC,
    NAV,     KC_LEAD, KC_LALT, KC_LGUI, LOWER,     NAV_S, NAV_S,   RAISE, KC_RGUI, KC_RALT, KC_LEAD,   NAV
),

/* Lower
 * ,-----------------------------------------------------------------------------------.
 * |   ~  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  |  F10 | Bksp |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Del  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |  '   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |   -  |   =  |   `  |   \  |   ;  |      |      |   ,  |   .  |   /  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      | Prev | Play | Next |      |
 * `-----------------------------------------------------------------------------------'
 */

[_LOWER] = LAYOUT_planck_grid_wrapper(
    KC_TILD, _________________LOWER_L1__________________, _________________LOWER_R1__________________, KC_BSPC,
    KC_DEL,  _________________LOWER_L2__________________, _________________LOWER_R2__________________, KC_QUOT,
    _______, _________________LOWER_L3__________________, _________________LOWER_R3__________________, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, __________MEDIA__________, _______
),

/* Raise
 * ,-----------------------------------------------------------------------------------.
 * |   `  |  F11 |  F12 |  F13 |   [  |   ]  |   \  |   -  |   =  |   {  |   }  | Bksp |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Del  |   !  |   @  |   #  |   $  |   %  |   ^  |   &  |   *  |   (  |   )  |   "  |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |   _  |   +  |   ~  |   |  |   :  |      |      |   <  |   >  |   ?  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      | Next | Vol- | Vol+ | Play |
 * `-----------------------------------------------------------------------------------'
 */

[_RAISE] = LAYOUT_planck_grid_wrapper(
    KC_GRV,  _________________RAISE_L1__________________, _________________RAISE_R1__________________, KC_BSPC,
    KC_DEL,  _________________RAISE_L2__________________, _________________RAISE_R2__________________, KC_DQUO,
    _______, _________________RAISE_L3__________________, _________________RAISE_R3__________________, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, __________VOLUME_________, _______
),

/* Nav layer
 * ,-----------------------------------------------------------------------------------.
<<<<<<< HEAD
 * |      |      |  INS |  DEL | PSCR |      |      |      |      |      |      | PrScr|
=======
 * |      |      |  INS |  DEL | PSCR |      |      |      |      |      |      | CAD  |
>>>>>>> 7b47a5c913bdbab25ffd98aad601957316da363d
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      | Home | PgUp | PgDn |  End | Left | Down |  Up  |Right |      |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      | Undo |  Cut | Copy |Paste |      |ALT+L |ALT+D |ALT+U |ALT+R |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
<<<<<<< HEAD
 * |      |      |      |      |      |    Space    |      | Mute | VolD | VolU |  CAD |
=======
 * |      |      |      |      |      |    Space    |      | Mute | VolD | VolU |      |
>>>>>>> 7b47a5c913bdbab25ffd98aad601957316da363d
 * `-----------------------------------------------------------------------------------'
 */

[_NAV] = LAYOUT_planck_grid_wrapper(
	_______, __________________NAV_L1___________________, __________________NAV_R1___________________, KC_CAD,
	KC_DEL,  __________________NAV_L2___________________, __________________NAV_R2___________________, _______,
	_______, __________________NAV_L3___________________, __________________NAV_R3___________________, _______,
<<<<<<< HEAD
	_______, __________MEDIA__________, _______, _______, _______, _______, __________VOLUME_________, _______
=======
	_______, KC_LEAD, KC_LALT, KC_LGUI, _______, _______, _______, _______, __________VOLUME_________, _______
>>>>>>> 7b47a5c913bdbab25ffd98aad601957316da363d
),


/* Adjust (Lower + Raise)
 * ,-----------------------------------------------------------------------------------.
 * |      | Reset| Debug|      |      |      |      |      |      |      |      |  Del |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Caps |      |      |Aud on|Audoff|AGnorm|AGswap|Qwerty|Gaming|      |      |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |Voice-|Voice+|Mus on|Musoff|MIDIon|MIDIof|      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */

[_ADJUST] = LAYOUT_planck_grid_wrapper(
    _______, RESET,   DEBUG,   RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD,  RGB_VAI, RGB_VAD, KC_DEL ,
    KC_CAPS, _______, MU_MOD,  AU_ON,   AU_OFF,  AG_NORM, AG_SWAP, QWERTY,  GAMING,   _______, _______, _______,
    _______, MUV_DE,  MUV_IN,  MU_ON,   MU_OFF,  MI_ON,   MI_OFF,  TERM_ON, TERM_OFF, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______
)

};


bool muse_mode = false;
uint8_t last_muse_note = 0;
uint16_t muse_counter = 0;
uint8_t muse_offset = 70;
uint16_t muse_tempo = 50;

void encoder_update(bool clockwise) {
  if (muse_mode) {
    if (IS_LAYER_ON(_RAISE)) {
      if (clockwise) {
        muse_offset++;
      } else {
        muse_offset--;
      }
    } else {
      if (clockwise) {
        muse_tempo+=1;
      } else {
        muse_tempo-=1;
      }
    }
  } else {
    if (clockwise) {
      #ifdef MOUSEKEY_ENABLE
        register_code(KC_MS_WH_DOWN);
        unregister_code(KC_MS_WH_DOWN);
      #else
        register_code(KC_PGDN);
        unregister_code(KC_PGDN);
      #endif
    } else {
      #ifdef MOUSEKEY_ENABLE
        register_code(KC_MS_WH_UP);
        unregister_code(KC_MS_WH_UP);
      #else
        register_code(KC_PGUP);
        unregister_code(KC_PGUP);
      #endif
    }
  }
}

void dip_update(uint8_t index, bool active) {
  switch (index) {
    case 0:
      if (active) {
        layer_on(_ADJUST);
      } else {
        layer_off(_ADJUST);
      }
      break;
    case 1:
      if (active) {
        muse_mode = true;
      } else {
        muse_mode = false;
      }
   }
}

bool music_mask_user(uint16_t keycode) {
  switch (keycode) {
    case RAISE:
    case LOWER:
      return false;
    default:
      return true;
  }
}
