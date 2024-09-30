/*
Copyright 2022 @Yowkees
Copyright 2022 MURAOKA Taro (aka KoRoN, @kaoriya)

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

#include "quantum.h"

// left click
const uint16_t PROGMEM lclick_lhand_combo[] = {KC_F, KC_D, COMBO_END};
const uint16_t PROGMEM lclick_rhand_combo[] = {KC_J, KC_K, COMBO_END};
// right click
const uint16_t PROGMEM rclick_lhand_combo[] = {KC_D, KC_S, COMBO_END};
const uint16_t PROGMEM rclick_rhand_combo[] = {KC_K, KC_L, COMBO_END};
// scroll
const uint16_t PROGMEM scroll_lhand_combo[] = {KC_F, KC_D, KC_S, COMBO_END};
const uint16_t PROGMEM scroll_rhand_combo[] = {KC_J, KC_K, KC_L, COMBO_END};

combo_t key_combos[] = {
  COMBO(lclick_lhand_combo, KC_BTN1),
  COMBO(lclick_rhand_combo, KC_BTN1),
  COMBO(rclick_lhand_combo, KC_BTN2),
  COMBO(rclick_rhand_combo, KC_BTN2),
  COMBO(scroll_lhand_combo, SCRL_MO),
  COMBO(scroll_rhand_combo, SCRL_MO),
};


// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_universal(
    KC_GRV   , KC_1     , KC_2     , KC_3     , KC_4     , KC_5     ,                                       KC_6         , KC_7     , KC_8     , KC_9     , KC_0     , KC_MINS  ,
    KC_TAB   , KC_Q     , KC_W     , KC_E     , KC_R     , KC_T     ,                                       KC_Y         , KC_U     , KC_I     , KC_O     , KC_P     , KC_EQL   ,
    KC_LCTL  , KC_A     , KC_S     , LT(2, KC_D) , KC_F  , KC_G     ,                                       KC_H         , KC_J     , KC_K     , KC_L     , KC_SCLN  , KC_QUOT  ,
    KC_LSFT  , KC_Z     , KC_X     , KC_C     , KC_V     , KC_B     , KC_LBRC  ,              KC_RBRC      ,KC_N         , KC_M     , KC_COMM  , KC_DOT   , KC_SLSH  , KC_BSLS  ,
    MO(3)    , KC_LNG1  , KC_LNG2  , KC_ESC   , KC_LGUI  , KC_LALT  , LGUI(KC_LALT),          LT(2, KC_ENT),LT(1, KC_SPC),_______  , _______  , _______  , KC_ENT   , KC_BSPC
  ),

  [1] = LAYOUT_universal(
    S(KC_GRV), S(KC_1)  , S(KC_2)  , S(KC_3)  , S(KC_4)  , S(KC_5)  ,                                  S(KC_6)  , S(KC_7)  ,S(KC_8)   , S(KC_9)  ,S(KC_0)   ,S(KC_MINS),
    _______  , S(KC_Q)  , S(KC_W)  , S(KC_E)  , S(KC_R)  , S(KC_T)  ,                                  S(KC_Y)  , S(KC_U)  ,S(KC_I)   , S(KC_O)  ,S(KC_P)   ,S(KC_EQL) ,
    _______  , S(KC_A)  , S(KC_S)  , S(KC_D)  , S(KC_F)  , S(KC_G)  ,                                  S(KC_H)  , S(KC_J)  ,S(KC_K)   , S(KC_L)  ,S(KC_SCLN),S(KC_QUOT),
    _______  , S(KC_Z)  , S(KC_X)  , S(KC_C)  , S(KC_V)  , S(KC_B)  ,S(KC_LBRC),           S(KC_RBRC), S(KC_N)  , S(KC_M)  ,S(KC_COMM), S(KC_DOT),S(KC_SLSH),S(KC_BSLS),
    _______  , _______  , _______  , _______  , _______  , _______  , _______  ,            _______  , _______  , _______  ,_______   , _______  , _______  , _______
  ),

  [2] = LAYOUT_universal(
    _______  , KC_F1    , KC_F2    , KC_F3    , KC_F4    , KC_F5    ,                                  KC_F6    , KC_F7    , KC_F8    , KC_F9    , KC_F10   , KC_F11   ,
    _______  , _______  , _______  , _______  , _______  , _______  ,                                  _______  , _______  , _______  , _______  , _______  , KC_F12   ,
    _______  , _______  , _______  , _______  , _______  , _______  ,                                  KC_LEFT  , KC_DOWN  , KC_UP   , KC_RIGHT  , _______  , _______  ,
    _______  , _______  , _______  , _______  , _______  , _______  , _______  ,            _______  , _______  , _______  , _______  , _______  , _______  , _______  ,
    _______  , _______  , _______  , _______  , _______  , _______  , _______  ,            _______  , _______  , _______  , _______  , _______  , _______  , _______
  ),

  [3] = LAYOUT_universal(
    _______  , SCRL_DVD , SCRL_DVI , CPI_D100 , CPI_I100 , KBC_SAVE ,                                  _______  , _______  , _______  , _______  , _______  , _______  ,
    _______  , _______  , _______  , _______  , _______  , _______  ,                                  _______  , _______  , _______  , _______  , _______  , _______  ,
    _______  , _______  , _______  , _______  , _______  , _______  ,                                  _______  , _______  , _______  , _______  , _______  , _______  ,
    _______  , _______  , _______  , _______  , _______  , _______  , _______  ,            _______  , _______  , _______  , _______  , _______  , _______  , _______  ,
    _______  , _______  , _______  , _______  , _______  , _______  , _______  ,            _______  , _______  , _______  , _______  , _______  , _______  , _______
  ),
};
// clang-format on

layer_state_t layer_state_set_user(layer_state_t state) {
    // Auto enable scroll mode when the highest layer is 3
    keyball_set_scroll_mode(get_highest_layer(state) == 3);
    return state;
}

#ifdef OLED_ENABLE

#    include "lib/oledkit/oledkit.h"

void oledkit_render_info_user(void) {
    keyball_oled_render_keyinfo();
    keyball_oled_render_ballinfo();
    keyball_oled_render_layerinfo();
}
#endif
