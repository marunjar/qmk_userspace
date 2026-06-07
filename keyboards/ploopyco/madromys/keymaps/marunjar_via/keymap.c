/* Copyright 2023 Colin Lam (Ploopy Corporation)
 * Copyright 2020 Christopher Courtney, aka Drashna Jael're  (@drashna) <drashna@live.com>
 * Copyright 2019 Sunjun Kim
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

enum adept_layers {
  _DEFAULT,
  _CONFIG
};

enum acceleration_keycodes {
    MA_TOGGLE = MA_TOGG,
    MA_TAKEOFF = MA_TKOF,
    MA_GROWTH_RATE = MA_GROW,
    MA_OFFSET = MA_OFST,
    MA_LIMIT = MA_LMT
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_DEFAULT] = LAYOUT( DRAG_SCROLL, MS_BTN4, MS_BTN5, MS_BTN2, MS_BTN1, MO(_CONFIG) ),
    [_CONFIG]  = LAYOUT( DPI_CONFIG,  MA_TOGG, KC_NO,   KC_NO,   MS_JGTG, KC_NO       )
};
