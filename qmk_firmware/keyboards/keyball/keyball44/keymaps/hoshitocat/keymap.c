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
  // keymap for default
  [0] = LAYOUT_universal(
    KC_TAB   , LT(4, KC_Q) , KC_W     , KC_E        , KC_R     , KC_T     ,                                        KC_Y     , KC_U     , KC_I     , KC_O    , KC_P    , KC_BSPC  ,
    KC_LCTL  , KC_A        , KC_S     , LT(3, KC_D) , KC_F     , KC_G     ,                                        KC_H     , KC_J     , KC_K     , KC_L    , KC_SCLN , KC_QUOT  ,
    KC_LSFT  , KC_Z        , KC_X     , KC_C        , KC_V     , KC_B     ,                                        KC_N     , KC_M     , KC_COMM  , KC_DOT  , KC_SLSH , KC_BSLS  ,
                  KC_LNG2  , KC_ESC , KC_LWIN ,               KC_LALT  , LGUI(KC_LALT)  ,                   LT(2, KC_ENT),LT(1,KC_SPC),_______,     _______  , MO(5)
  ),

  [1] = LAYOUT_universal(
    KC_GRV   , KC_1     , KC_2     , KC_3     , KC_4    , KC_5     ,                                        KC_6     , KC_7     , KC_8    , KC_9    , KC_0    , _______ ,
    _______  , _______  , _______  , _______  , _______ , _______  ,                                        _______  , KC_MINS  , KC_EQL  , KC_LBRC , KC_RBRC , _______ ,
    _______  , _______  , _______  , _______  , _______ , _______  ,                                        _______  , _______  , _______ , _______ , _______ , _______ ,
                  _______  , _______ , _______  ,         _______  , _______  ,                   _______  , _______  , _______       , _______  , _______
  ),

  [2] = LAYOUT_universal(
    S(KC_GRV), S(KC_1)  , S(KC_2)  , S(KC_3)    , S(KC_4)   , S(KC_5) ,                                     S(KC_6)  , S(KC_7)    , S(KC_8)   , S(KC_9)    , S(KC_0)   , _______  ,
    _______  , _______  , _______  , _______    , _______   , _______ ,                                     _______  , S(KC_MINS) , S(KC_EQL) , S(KC_LBRC) , S(KC_RBRC), _______  ,
    _______  , _______  , _______  , _______    , _______   , _______ ,                                     _______  , _______    , _______   , _______    , _______   , _______  ,
                  _______  , _______ , _______  ,         _______  , _______  ,                   _______  , _______  , _______       , _______  , _______
  ),

  [3] = LAYOUT_universal(
    _______  , _______  , _______  , _______  , _______  , _______  ,                                        _______  , _______  , _______ , _______  , _______  , _______  ,
    _______  , _______  , _______  , _______  , _______  , _______  ,                                        KC_LEFT  , KC_DOWN  , KC_UP   , KC_RIGHT , _______  , _______  ,
    _______  , _______  , _______  , _______  , _______  , _______  ,                                        _______  , _______  , _______ , _______  , _______  , _______  ,
                  _______  , _______ , _______  ,         _______  , _______  ,                   _______  , _______   , _______      , _______ , _______
  ),

  [4] = LAYOUT_universal(
    _______  , _______  , _______  , _______  , _______  , _______  ,                          KC_F1    , KC_F2    , KC_F3    , KC_F4    , KC_F5    , KC_F6    ,
    _______  , _______  , _______  , _______  , _______  , _______  ,                          KC_F7    , KC_F8    , KC_F9    , KC_F10   , KC_F11   , KC_F12   ,
    _______  , _______  , _______  , _______  , _______  , _______  ,                          _______  , _______  , _______  , _______  , _______  , _______  ,
                  _______  , _______ , _______  ,         _______  , _______  ,                   _______  , _______   , _______      , _______ , _______
  ),

  [5] = LAYOUT_universal(
    _______  , _______  , _______  , _______  , _______  , KBC_SAVE ,                          _______  , _______  , _______  , _______  , _______  , _______  ,
    _______  , SCRL_DVD , SCRL_DVI , CPI_D100 , CPI_I100 , _______  ,                          _______  , KC_BTN1  , SCRL_MO  , KC_BTN2  , _______  , _______  ,
    _______  , _______  , _______  , _______  , _______  , _______  ,                          _______  , _______  , _______  , _______  , _______  , _______  ,
                  _______  , _______  , _______  ,         _______ , _______  ,                   _______  , _______   , _______      , _______ , _______
  )
};
// clang-format on

#ifdef OLED_ENABLE

#    include "lib/oledkit/oledkit.h"

void oledkit_render_info_user(void) {
    keyball_oled_render_keyinfo();
    keyball_oled_render_ballinfo();
    keyball_oled_render_layerinfo();
}
#endif
