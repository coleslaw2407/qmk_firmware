/**
 * Copyright 2021 Charly Delay <charly@codesink.dev> (@0xcharly)
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

enum charybdis_keymap_layers {
    LAYER_BASE = 0,
    LAYER_NUM,
    LAYER_NAV,
    LAYER_SYM,
    LAYER_FUNC,
};

// Combos
const uint16_t PROGMEM FR_FUNC[] = {KC_F, KC_R, COMBO_END};
const uint16_t PROGMEM JU_SYM[] = {KC_J, KC_U, COMBO_END};
const uint16_t PROGMEM DE_LCTL[] = {KC_D, KC_E, COMBO_END};
const uint16_t PROGMEM KI_LCTL[] = {KC_K, KC_I, COMBO_END};
const uint16_t PROGMEM SW_LGUI[] = {KC_S, KC_W, COMBO_END};
const uint16_t PROGMEM LO_LGUI[] = {KC_L, KC_O, COMBO_END};
const uint16_t PROGMEM AQ_LALT[] = {KC_A, KC_Q, COMBO_END};
const uint16_t PROGMEM SCLNP_LALT[] = {KC_SCLN, KC_P, COMBO_END};
combo_t key_combos[] = {
    COMBO(FR_FUNC, MO(LAYER_FUNC)),
    COMBO(JU_SYM, MO(LAYER_SYM)),
    COMBO(DE_LCTL, KC_LCTL),
    COMBO(KI_LCTL, KC_LCTL),
    COMBO(SW_LGUI, KC_LGUI),
    COMBO(LO_LGUI, KC_LGUI),
    COMBO(AQ_LALT, KC_LALT),
    COMBO(SCLNP_LALT, KC_LALT),
};

#define NUM_SPC LT(LAYER_NUM, KC_SPC)
#define RAISE_BSP LT(LAYER_NAV, KC_BSPC)

NEED TO ADD A QUOTE SOMEWHERE!!!

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [LAYER_BASE] = LAYOUT(
  // ╭─────────────────────────────────────────────╮ ╭─────────────────────────────────────────────╮
          KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
  // ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
          KC_A,    KC_S,    KC_D,    KC_F,    KC_G,     KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN,
  // ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,     KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,
  // ╰─────────────────────────────────────────────┤ ├─────────────────────────────────────────────╯
                         KC_DEL, KC_LSFT, RAISE_BSP,  NUM_SPC, KC_LSFT, KC_TAB
  //                   ╰───────────────────────────╯ ╰─────────────────────────╯
  ),

  [LAYER_NUM] = LAYOUT(
  // ╭─────────────────────────────────────────────╮ ╭─────────────────────────────────────────────╮
       KC_PSLS, KC_7,    KC_8,    KC_9,    KC_PAST,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  // ├──────────────────────────────────── ────────┤ ├──────────────────────────────────────────┤
       KC_0,    KC_4,    KC_5,    KC_6,    KC_PMNS,    KC_LPRN, KC_LSFT, KC_LCTL, KC_LGUI, KC_LALT,
  // ├─────────────────────────────────────────────┤ ├──────────────────────────────────────────┤
       KC_PDOT, KC_1,    KC_2,    KC_3,    KC_PPLS,    KC_RPRN, KC_LBRC, KC_RBRC, KC_LCBR, KC_RCBR,
  // ╰─────────────────────────────────────────────┤ ├─────────────────────────────────────────────╯
                         KC_ESC,  KC_LSFT, KC_BSPC,    _______, XXXXXXX, XXXXXXX
  //                   ╰───────────────────────────╯ ╰──────────────────────────╯
  ),

  [LAYER_NAV] = LAYOUT(
  // ╭─────────────────────────────────────────────╮ ╭─────────────────────────────────────────────╮
       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  // ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
       KC_LALT, KC_LGUI, KC_LCTL, KC_LSFT, XXXXXXX,    KC_LEFT, KC_DOWN, KC_UP, KC_RGHT,  XXXXXXX,
  // ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
       C(KC_Z), C(KC_X), C(KC_C), C(KC_V), C(KC_B),    KC_HOME, KC_PGDN, KC_PGUP, KC_END, XXXXXXX,
  // ╰─────────────────────────────────────────────┤ ├─────────────────────────────────────────────╯
                         XXXXXXX, XXXXXXX, _______,    KC_SPC,  KC_LSFT, KC_ENT
  //                   ╰───────────────────────────╯ ╰──────────────────────────╯
  ),

  [LAYER_SYM] = LAYOUT(
  // ╭─────────────────────────────────────────────╮ ╭─────────────────────────────────────────────╮
       KC_BSLS, KC_AMPR, KC_ASTR, KC_PIPE, KC_GRV,     XXXXXXX, _______, XXXXXXX, XXXXXXX, XXXXXXX,
  // ├──────────────────────────────────── ────────┤ ├───────────────────────────────────────────┤
       KC_EQL,  KC_DLR,  KC_PERC, KC_CIRC, KC_MINS,    XXXXXXX, _______, KC_LCTL, KC_LGUI, KC_LALT,
  // ├─────────────────────────────────────────────┤ ├───────────────────────────────────────────┤
       KC_PLUS, KC_EXLM, KC_AT,   KC_HASH, KC_UNDS,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  // ╰─────────────────────────────────────────────┤ ├─────────────────────────────────────────────╯
                         KC_TILD, KC_DQUO, KC_QUOT,    XXXXXXX, KC_LSFT, XXXXXXX
  //                   ╰───────────────────────────╯ ╰──────────────────────────╯
  ),

  [LAYER_FUNC] = LAYOUT(
  // ╭─────────────────────────────────────────────╮ ╭─────────────────────────────────────────────╮
       XXXXXXX, XXXXXXX, XXXXXXX, _______, XXXXXXX,    KC_F11, KC_F12, KC_NUM, KC_SCRL, KC_PAUS,
  // ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
       KC_LALT, KC_LGUI, KC_LCTL, _______, XXXXXXX,    KC_F6,  KC_F7,  KC_F8,   KC_F9,   KC_F10,
  // ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    KC_F1,  KC_F2,  KC_F3,   KC_F4,   KC_F5,
  // ╰─────────────────────────────────────────────┤ ├─────────────────────────────────────────────╯
                         XXXXXXX, KC_LSFT, _______,    KC_INS, KC_CAPS, KC_PSCR
  //                   ╰───────────────────────────╯ ╰──────────────────────────╯
  ),
};