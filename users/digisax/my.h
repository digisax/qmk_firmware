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

#pragma once

// includes
#include "quantum.h"
#include "version.h"

#ifdef RGB_MATRIX_ENABLE
#include "rgb_matrix.h"
#endif

enum user_layers {
  QWERTY_LAYER,
  QWERTYNAV_LAYER,
  KEBAB_LAYER,
  SNAKE_LAYER,
  LOWER_LAYER,
  RAISE_LAYER,
  NAV_LAYER,
  GUI_LAYER,
  STENO_LAYER,
  ADJUST_LAYER
};

enum planck_layers {
  _QWERTY,
  _GAMING,
  _TEST,
  _NAV,
  _SYMBOL,
  _LOWER,
  _RAISE,
  _GUI,
  _ADJUST,
  _NUMPAD,
};

enum user_keycodes {
  LEADER = SAFE_RANGE,
  QWERTY,
  GAMING,
  TEST,
  SYMBOL,
  NUMPAD,
  STCH_EX,
  SEND_MAKE,
  SEND_VERSION,
  DYNAMIC_MACRO_RANGE,
  BACKLIT,
};

#define TAPPING_TOGGLE 1

// Dynamic macros add additional keycodes.
#define NEW_SAFE_RANGE (DYNAMIC_MACRO_PLAY2 + 1)

#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)

#define NAV_S LT(_NAV, KC_SPC)
#define NAV TT(_NAV)
#define GUI TT(_GUI)
#define SPACE_FN LT(_SPACE_FN, KC_SPC)

#define KC_CAD LALT(LCTL(KC_DEL))
#define KC_CALT LALT(KC_LCTL)

#define GUI_L LT(_GUI, KC_LBRC)
#define GUI_R LT(_GUI, KC_RBRC)

#define HYPER_L ALL_T(KC_RBRC)
#define HYPER_R ALL_T(KC_LBRC)

#define CTL_ESC CTL_T(KC_ESC)
#define CTL_ENT CTL_T(KC_ENT)
#define UNDO LCTL(KC_Z)
#define CUT LCTL(KC_X)
#define COPY LCTL(KC_C)
#define PSTE LCTL(KC_V)

#define CAPITAL OSM(MOD_LSFT)

#define NAV_BSP LT(_NAV, KC_BSPC)

#define GUI_GRV LGUI(KC_GRV)

// Dashes (macOS)
#define KC_NDSH LALT(KC_MINS)
#define KC_MDSH S(LALT(KC_MINS))

// Unify backlight controls
#if defined(RGB_MATRIX_ENABLE) || defined(RGBLIGHT_ENABLE)
#define LIT_TOG RGB_TOG
#define LIT_DEC RGB_VAD
#define LIT_INC RGB_VAI
#else
#define LIT_TOG BL_TOGG
#define LIT_DEC BL_DEC
#define LIT_INC BL_INC
#endif

// Fillers to make layering more clear
#define _______ KC_TRNS
#define XXXXXXX KC_NO

#define shrug_uc "00AF 005C 005F 0028 30C4 0029 005F 002F 00AF"
#define lenny_uc "0028 0020 0361 00B0 0020 035C 0296 0020 0361 00B0 0029"
#define face_uc "0CA0 005F 0CA0"

// Alias layout macros that expand groups of keys.
#define LAYOUT_planck_grid_wrapper(...) LAYOUT_planck_grid(__VA_ARGS__)
#define LAYOUT_planck_mit_wrapper(...) LAYOUT_planck_mit(__VA_ARGS__)
#define LAYOUT_preonic_grid_wrapper(...) LAYOUT_preonic_grid(__VA_ARGS__)
#define LAYOUT_bwalk_wrapper(...) LAYOUT_ortho_hhkb(__VA_ARGS__)
#define LAYOUT_ropro_wrapper(...) LAYOUT_ROPRO(__VA_ARGS__)

#define _________________QWERTY_L1_________________ KC_Q,    KC_W,    KC_E,    KC_R,    KC_T
#define _________________QWERTY_L2_________________ KC_A,    KC_S,    KC_D,    KC_F,    KC_G
#define _________________QWERTY_L3_________________ KC_Z,    KC_X,    KC_C,    KC_V,    KC_B

#define _________________QWERTY_R1_________________ KC_Y,    KC_U,    KC_I,    KC_O,    KC_P
#define _________________QWERTY_R2_________________ KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN
#define _________________QWERTY_R3_________________ KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH

#define _________________LOWER_L1__________________ KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC
#define _________________LOWER_L2__________________ KC_1,    KC_2,    KC_3,    KC_4,    KC_5
#define _________________LOWER_L3__________________ KC_MINS, KC_UNDS, KC_EQL,  KC_PLUS, KC_PIPE

#define _________________LOWER_R1__________________ KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN
#define _________________LOWER_R2__________________ KC_6,    KC_7,    KC_8,    KC_9,    KC_0
#define _________________LOWER_R3__________________ KC_BSLS, KC_LBRC, KC_RBRC, KC_LCBR, KC_RCBR

#define _________________RAISE_L1__________________ KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5
#define _________________RAISE_L2__________________ KC_F11,  KC_F12,  KC_F13,  KC_F14,  KC_F15
#define _________________RAISE_L3__________________ KC_F21,  KC_F22,  KC_F23,  KC_F24,  XXXXXXX

#define _________________RAISE_R1__________________ KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10
#define _________________RAISE_R2__________________ KC_F16,  KC_F17,  KC_F18,  KC_F19,  KC_F20
#define _________________RAISE_R3__________________ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX

#define __________________NAV_L1___________________ XXXXXXX, KC_INS,  XXXXXXX,  KC_PSCR, XXXXXXX
#define __________________NAV_L2___________________ XXXXXXX, KC_HOME, KC_PGUP, KC_PGDN, KC_END
#define __________________NAV_L3___________________ UNDO,    CUT,     COPY,    PSTE,    XXXXXXX

#define __________________NAV_R1___________________ LALT(KC_LEFT), LALT(KC_DOWN), LALT(KC_UP), LALT(KC_RGHT), XXXXXXX
#define __________________NAV_R2___________________ KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, XXXXXXX
#define __________________NAV_R3___________________ LALT(LCTL(KC_LEFT)), LALT(LCTL(KC_DOWN)), LALT(LCTL(KC_UP)), LALT(LCTL(KC_RGHT)), XXXXXXX

#define __________________GUI_L1___________________ KC_BTN2, KC_MS_U, KC_BTN1, KC_WH_D, XXXXXXX
#define __________________GUI_L2___________________ KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_U, XXXXXXX
#define __________________GUI_L3___________________ KC_UNDO, KC_CUT,  KC_COPY, KC_PSTE, XXXXXXX
/* Temporarily depracated until a suitable fix for use in windows is found.
#define __________________GUI_R1___________________ XXXXXXX, WM_PREV, WM_NW,   WM_N,    WM_NE
#define __________________GUI_R2___________________ XXXXXXX, WM_FULL, WM_W,    WM_CNTR, WM_E
#define __________________GUI_R3___________________ XXXXXXX, WM_NEXT, WM_SW,   WM_S,    WM_SE
*/
#define __________________GUI_R1___________________ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
#define __________________GUI_R2___________________ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
#define __________________GUI_R3___________________ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX

#define __________VOLUME_________ KC_MUTE, KC_VOLD, KC_VOLU
#define __________MEDIA__________ KC_MPRV, KC_MPLY, KC_MNXT

/*
* Definitions for the top row of a 50% board like the Preonic
*/
#define __________________BASE_L0__________________ _________________LOWER_L2__________________
#define __________________BASE_R0__________________ _________________LOWER_R2__________________
#define __________________________________________________F_ROW___________________________________________________ KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12
