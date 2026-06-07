/* Copyright 2015-2017 Jack Humbert
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
#include "keymap_us_international.h"

#define KC_PC_UNDO LCTL(KC_Z)

enum preonic_layers {
  _MINE,
  _MINE_L2,
  _QWERTZ,
  _M3,
  _M4,
  _MEDIA,
  _KBDCTRL
};

enum preonic_keycodes {
  BACKLIT = SAFE_RANGE
};

#define MINE PDF(_MINE)
#define QWERTZ PDF(_QWERTZ)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {    
  [_MINE] = LAYOUT_preonic_grid(
    KC_NO,          KC_1,            KC_2,            KC_3,             KC_4,             KC_5,            KC_6,            KC_7,             KC_8,             KC_9,            KC_0,          KC_BSPC,
    KC_TAB,         KC_J,            KC_L,            KC_U,             KC_A,             KC_Q,            KC_W,            KC_B,             KC_D,             KC_G,            KC_Y,          US_SS,
    KC_ESCAPE,      KC_C,            KC_R,            KC_I,             KC_E,             KC_O,            KC_M,            KC_N,             KC_T,             KC_H,            KC_S,          KC_Z,
    LM(_MINE_L2,MOD_LSFT),KC_V,      KC_X,            US_UDIA,          US_ADIA,          US_ODIA,         KC_P,            KC_F,             KC_COMM,          KC_DOT,          KC_K,          LM(_MINE_L2,MOD_RSFT),
    KC_LCTL,        KC_LGUI,         MO(_M4),         KC_LALT,          KC_SPACE,         MO(_M3),         MO(_M4),         KC_ENTER,         KC_RALT,          MO(_M3),         MO(5),         KC_RCTL
                
  ),
  [_MINE_L2] = LAYOUT_preonic_grid(
    KC_NO,          US_DEG,         US_SECT,        KC_NO,          KC_NO,          KC_NO,          US_DLR,         KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_BSPC,
    KC_TAB,         KC_J,           KC_L,           KC_U,           KC_A,           KC_Q,           KC_W,           KC_B,           KC_D,           KC_G,           KC_Y,           US_SS,
    KC_ESCAPE,      KC_C,           KC_R,           KC_I,           KC_E,           KC_O,           KC_M,           KC_N,           KC_T,           KC_H,           KC_S,           KC_Z,
    KC_TRANSPARENT, KC_V,           KC_X,           US_UDIA,        US_ADIA,        US_ODIA,        KC_P,           KC_F,           KC_COMM,        KC_DOT,         KC_K,           KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT
  ),
  [_QWERTZ] = LAYOUT_preonic_grid(
    KC_GRV,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLS,
    KC_ESCAPE,      KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOT,
    KC_LSFT,        KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           KC_N,           KC_M,           KC_COMM,        KC_DOT,         KC_SLSH,        KC_RSFT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [_M3] = LAYOUT_preonic_grid(
    KC_NO,          KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,
    KC_TAB,         KC_NO,          KC_UNDS,        KC_LBRC,        KC_RBRC,        KC_CIRC,        KC_EXLM,        KC_LABK,        KC_RABK,        KC_EQL,         KC_AMPR,        KC_F12,
    KC_ESCAPE,      KC_BSLS,        KC_SLSH,        KC_LCBR,        KC_RCBR,        KC_ASTR,        KC_QUES,        KC_LPRN,        KC_RPRN,        KC_MINS,        KC_COLN,        KC_AT,
    KC_LSFT,        KC_HASH,        US_DLR,         KC_PIPE,        KC_TILD,        KC_GRV,         KC_PLUS,        KC_PERC,        KC_DQUO,        KC_QUOT,        KC_SCLN,        KC_RSFT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT
  ),
  [_M4] = LAYOUT_preonic_grid(
    KC_PSCR,        KC_NO,          KC_NO,          KC_NO,          KC_DOT,         KC_NO,          KC_NO,          KC_NO,          KC_TAB,         KC_KP_SLASH,    KC_KP_ASTERISK, KC_TRANSPARENT,
    KC_TAB,         KC_PGUP,        KC_BSPC,        KC_UP,          KC_DELETE,      KC_PGDN,        KC_NO,          KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_KP_PLUS,     KC_KP_MINUS,
    KC_ESCAPE,      KC_HOME,        KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_END,         KC_NO,          KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_KP_COMMA,    KC_KP_DOT,
    KC_LSFT,        KC_ESCAPE,      KC_TAB,         KC_INSERT,      KC_ENTER,       KC_PC_UNDO,     KC_COLN,        KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_SCLN,        KC_KP_ENTER,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_KP_0,        KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT
  ),
  [_MEDIA] = LAYOUT_preonic_grid(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          MO(_KBDCTRL),   KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,
    KC_NO,          KC_NO,          KC_NO,          MS_UP,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_NO,          MS_WHLU,        MS_LEFT,        MS_DOWN,        MS_RGHT,        KC_NO,          KC_NO,          KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK, KC_NO,          KC_NO,
    KC_LSFT,        MS_WHLD,        KC_NO,          MS_BTN1,        MS_BTN2,        KC_NO,          KC_NO,          KC_AUDIO_MUTE,  KC_AUDIO_VOL_DOWN, KC_AUDIO_VOL_UP,     KC_NO,          KC_RSFT,
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT
  ),

/* 
 * ,-----------------------------------------------------------------------------------.
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      | Reset| Debug|      |      |      |      |TermOf|TermOn|      |      |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |      |Aud on|AudOff|AGnorm|AGswap|Qwertz|Mine  |      |      |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | LED  |      |      |      |      |      |      |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_KBDCTRL] = LAYOUT_preonic_grid(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_NO,          QK_BOOT,        DB_TOGG,        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_NO,          KC_NO,          KC_NO,          AU_ON,          AU_OFF,         AG_NORM,        AG_SWAP,        QWERTZ,         MINE,           KC_NO,          KC_NO,          KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    BACKLIT,        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO
)


};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
        case BACKLIT:
          if (record->event.pressed) {
            register_code(KC_RSFT);
            #ifdef BACKLIGHT_ENABLE
              backlight_step();
            #endif
            #ifdef RGBLIGHT_ENABLE
              rgblight_step();
            #endif
            #ifdef __AVR__
            gpio_write_pin_low(E6);
            #endif
          } else {
            unregister_code(KC_RSFT);
            #ifdef __AVR__
            gpio_write_pin_high(E6);
            #endif
          }
          return false;
          break;
      }
    return true;
};
