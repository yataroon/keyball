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
// #include "tapdance.c"

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // keymap for default
  [0] = LAYOUT_universal(
    GUI_T(KC_TAB)   , KC_Q     , KC_W     , KC_E     , KC_R     , KC_T     ,                                        KC_Y     , KC_U     , KC_I     , KC_O     , KC_P     , LALT_T(KC_MINS)   ,
    LCTL_T(KC_ESC)   , KC_A     , KC_S     , KC_D     , KC_F     , KC_G     ,                                        KC_H     , KC_J     , KC_K     , KC_L     , KC_SCLN  , KC_QUOT  ,
    KC_LSFT  , KC_Z     , KC_X     , KC_C     , KC_V     , KC_B     ,                                        KC_N     , KC_M     , KC_COMM  , KC_DOT   , KC_SLSH  , KC_BTN1  ,
              KC_LALT,LSG(KC_5),  LT(2, KC_LNG2), LT(3,KC_SPC),LT(1, KC_LNG1),                  LSFT_T(KC_BSPC),GUI_T(KC_ENT), _______,     _______  , DF(5)
  ),

  [1] = LAYOUT_universal(
    RGB_TOG  , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  ,                                        KC_F6  , KC_F7  , KC_F8  , KC_F9 , KC_F10 , KC_F11  ,
    RGB_MOD  , RGB_HUI  , RGB_SAI  , RGB_VAI  , CPI_I100  , SCRL_DVI ,                                        LCA(KC_LEFT)  , LCA(KC_F)  , LCA(KC_ENT)  , LCA(KC_RIGHT) , KC_KB_VOLUME_UP  , KC_F12  ,
    RGB_RMOD , RGB_HUD  , RGB_SAD  , RGB_VAD  , CPI_D100  , SCRL_DVD ,                                        LCA(KC_D)  , LCA(KC_E) , LCA(KC_T) , LCA(KC_G)  , _______  , KBC_SAVE ,
                  _______    , _______  , _______  ,        _______  , _______  ,                   _______  , _______  , _______       , _______  , _______
  ),

  [2] = LAYOUT_universal(
    KC_TILD  ,_______, _______     , _______    , _______     , _______  ,                                         _______  , KC_KP_7  , KC_KP_8  , KC_KP_9  , _______  , KC_PLUS  ,
    _______  ,_______, _______     , _______    , _______     , _______  ,                                         _______  , KC_KP_4  , KC_KP_5, KC_KP_6  , KC_LCBR  , KC_RCBR   ,
    _______  ,_______, _______     , _______    , _______     ,_______,                                        KC_KP_DOT,KC_KP_1, KC_KP_2   ,KC_KP_3,KC_BACKSLASH,_______,
                  _______, _______, _______  ,         _______  , _______  ,                   _______   , KC_KP_0, _______       , _______  , _______
  ),

  [3] = LAYOUT_universal(
    KC_GRV  ,  KC_EXLM   , KC_AT    , KC_HASH   , KC_DOLLAR    , KC_PERCENT    ,                             KC_CIRCUMFLEX    , KC_AMPERSAND    , KC_ASTERISK    , KC_LPRN    , KC_RPRN   , KC_EQL   ,
    _______  ,  _______ , _______  , KC_LBRC   ,  KC_RBRC  , _______   ,                                     KC_LEFT  , KC_DOWN  , KC_UP    , KC_RIGHT  , KC_PIPE  , KC_BSLS  ,
    _______  ,  _______ , _______  , _______ , _______ , _______  ,                                         HYPR(KC_N)  , KC_LCBR  , KC_RCBR  , _______  , _______  , _______  ,
                  _______  , _______ , _______  ,         _______  , _______  ,                   _______  , KC_ESC  , _______       , _______  , _______
  ),

  [4] = LAYOUT_universal(
    _______  ,  _______   , _______    , _______   , _______    , _______    ,                             _______    , _______    , _______    , _______    , _______   , _______   ,
    _______  ,  _______ , KC_BTN2  , KC_BTN3   , KC_BTN1   , _______   ,                                     _______  , _______  , _______    , _______  , _______  , _______  ,
    _______  ,  _______ , _______  , _______ , _______  , _______  ,                                         _______  , _______  , _______  , _______  , _______  , _______  ,
                  _______  , _______ , _______  ,   _______  , _______  ,                   _______  , _______  , _______       , _______  , _______
  ),

  [5] = LAYOUT_universal(
    GUI_T(KC_TAB)  ,  KC_QUOT   ,  KC_COMM   , KC_DOT   , KC_P    , KC_Y    ,                             KC_F    , KC_G    , KC_C    , KC_R    , KC_L   , KC_SLSH   ,
    LCTL_T(KC_ESC)  ,  KC_A , KC_O  , KC_E   , KC_U   , KC_I   ,                                     KC_D  , KC_H  , KC_T    , KC_N  , KC_S  , KC_MINS  ,
    KC_LSFT  ,  KC_SCLN , KC_Q  , KC_J , KC_K  , KC_X  ,                                         KC_B  , KC_M  , KC_W  , KC_V  , KC_Z  , _______  ,
              KC_LALT,LSG(KC_5),  LT(2, KC_LNG2), LT(3,KC_SPC),LT(1, KC_LNG1),                  LSFT_T(KC_BSPC),GUI_T(KC_ENT), _______,     _______  , DF(0)
  ),
};
// clang-format on

layer_state_t layer_state_set_user(layer_state_t state) {
    switch(get_highest_layer(remove_auto_mouse_layer(state, true))) {
        case 3:
            // Auto enable scroll mode when the highest layer is 3
            state = remove_auto_mouse_layer(state, false);
            set_auto_mouse_enable(false);
            keyball_set_scroll_mode(true);
            break;
        default:
            set_auto_mouse_enable(true);
            keyball_set_scroll_mode(false);
            break;
    }

    return state;
}

#ifdef OLED_ENABLE

#    include "lib/oledkit/oledkit.h"

void oledkit_render_info_user(void) {
    keyball_oled_render_keyinfo();
    keyball_oled_render_ballinfo();
}
#endif

void pointing_device_init_user(void) {
    // set_auto_mouse_layer(<mouse_layer>); // only required if AUTO_MOUSE_DEFAULT_LAYER is not set to index of <mouse_layer>
    set_auto_mouse_enable(true);         // always required before the auto mouse feature will work
}
