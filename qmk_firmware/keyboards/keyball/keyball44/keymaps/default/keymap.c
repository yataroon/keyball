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

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // keymap for default
  [0] = LAYOUT_universal(
    KC_TAB   , KC_Q     , KC_W     , KC_E     , KC_R     , KC_T     ,                                        KC_Y     , KC_U     , KC_I     , KC_O     , KC_P     , KC_MINS   ,
    LCTL_T(KC_ESC)   , KC_A     , KC_S     , KC_D     , LT(3, KC_F)     , KC_G     ,                                        KC_H     , KC_J     , KC_K     , KC_L     , KC_SCLN  , KC_QUOT  ,
    KC_LSFT  , KC_Z     , KC_X     , KC_C     , KC_V     , KC_B     ,                                        KC_N     , KC_M     , KC_COMM  , KC_DOT   , KC_SLSH  , KC_BTN1  ,
              KC_LALT,KC_LGUI,  MO(2),LT(1,KC_SPC),MO(3),                  KC_BSPC,GUI_T(KC_ENT), RCTL_T(KC_LANG2),     _______  , KC_BTN2
  ),

  [1] = LAYOUT_universal(
    KC_GRV  ,  KC_EXLM   , KC_AT    , KC_HASH   , KC_DOLLAR    , KC_PERCENT    ,                             KC_CIRCUMFLEX    , KC_AMPERSAND    , KC_ASTERISK    , KC_LEFT_PAREN    , KC_RIGHT_PAREN   , KC_EQL   ,
    _______  ,  _______ , KC_BTN2  , KC_BTN3   , KC_BTN1   , _______   ,                                     KC_LEFT  , KC_DOWN  , KC_UP    , KC_RIGHT  , KC_BTN3  , KC_F12   ,
    _______  ,  _______ , _______  , _______ , _______  , _______  ,                                         _______  , KC_LNG2  , KC_LNG1  , _______  , KC_BACKSLASH  , _______  ,
                  _______  , _______ , _______  ,         _______  , _______  ,                   _______  , _______  , _______       , _______  , _______
  ),

  [2] = LAYOUT_universal(
    KC_TILD  ,_______, _______     , _______    , _______     , _______  ,                                         _______  , KC_7  , KC_8  , KC_9  , _______  , KC_PLUS  ,
    _______  ,_______, _______     , _______    , _______     , _______  ,                                         _______  , KC_4  , KC_5, KC_6  , KC_LCBR  , KC_RCBR  ,
    _______  ,_______, _______     , _______    , _______     ,_______,                                        KC_DOT,KC_1, KC_2   ,KC_3,KC_PIPE,_______,
                  _______, _______, _______  ,         _______  , _______  ,                   _______   , KC_0, _______       , _______  , _______
  ),

  [3] = LAYOUT_universal(
    RGB_TOG  , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  ,                                        KC_F6  , KC_F7  , KC_F8  , KC_F9 , KC_F10 , KC_F11  ,
    RGB_MOD  , RGB_HUI  , RGB_SAI  , RGB_VAI  , CPI_I100  , SCRL_DVI ,                                        LCA(KC_LEFT)  , _______  , LCA(KC_ENT)  , LCA(KC_RIGHT) , _______  , KC_F12  ,
    RGB_RMOD , RGB_HUD  , RGB_SAD  , RGB_VAD  , CPI_D100  , SCRL_DVD ,                                        _______  , _______ , _______ , _______  , _______  , _______ ,
                  _______    , _______  , _______  ,        _______  , _______  ,                   _______  , _______  , _______       , _______  , RESET
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
}
#endif
