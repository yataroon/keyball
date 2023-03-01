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
// const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
//   // keymap for default
//   [0] = LAYOUT_universal(
//     GUI_T(KC_TAB)   , KC_Q     , KC_W     , KC_E     , KC_R     , KC_T     ,                                        KC_Y     , KC_U     , KC_I     , KC_O     , KC_P     , KC_MINS   ,
//     LCTL_T(KC_ESC)   , KC_A     , KC_S     , KC_D     , KC_F     , KC_G     ,                                        KC_H     , KC_J     , KC_K     , KC_L     , KC_SCLN  , KC_QUOT  ,
//     KC_LSFT  , KC_Z     , KC_X     , KC_C     , KC_V     , KC_B     ,                                        KC_N     , KC_M     , KC_COMM  , KC_DOT   , KC_SLSH  , KC_BTN1  ,
//               KC_LALT,LSG(KC_5),  MO(2),LT(3,KC_SPC),MO(1),                  KC_BACKSPACE,GUI_T(KC_ENT), RCTL_T(KC_LNG2),     _______  , TG(1)
//   ),

//   [1] = LAYOUT_universal(
//     RGB_TOG  , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  ,                                        KC_F6  , KC_F7  , KC_F8  , KC_F9 , KC_F10 , KC_F11  ,
//     RGB_MOD  , RGB_HUI  , RGB_SAI  , RGB_VAI  , CPI_I100  , SCRL_DVI ,                                        LCA(KC_LEFT)  , LCA(KC_F)  , LCA(KC_ENT)  , LCA(KC_RIGHT) , KC_KB_VOLUME_UP  , KC_F12  ,
//     RGB_RMOD , RGB_HUD  , RGB_SAD  , RGB_VAD  , CPI_D100  , SCRL_DVD ,                                        LCA(KC_D)  , LCA(KC_E) , LCA(KC_T) , LCA(KC_G)  , _______  , KBC_SAVE ,
//                   _______    , _______  , _______  ,        _______  , _______  ,                   _______  , _______  , _______       , _______  , _______
//   ),

//   [2] = LAYOUT_universal(
//     KC_TILD  ,_______, _______     , _______    , _______     , _______  ,                                         _______  , KC_KP_7  , KC_KP_8  , KC_KP_9  , _______  , KC_PLUS  ,
//     _______  ,_______, _______     , _______    , _______     , _______  ,                                         _______  , KC_KP_4  , KC_KP_5, KC_KP_6  , KC_LCBR  , KC_RCBR   ,
//     _______  ,_______, _______     , _______    , _______     ,_______,                                        KC_KP_DOT,KC_KP_1, KC_KP_2   ,KC_KP_3,KC_PIPE,_______,
//                   _______, _______, _______  ,         _______  , _______  ,                   _______   , KC_KP_0, _______       , _______  , _______
//   ),

//   [3] = LAYOUT_universal(
//     KC_GRV  ,  KC_EXLM   , KC_AT    , KC_HASH   , KC_DOLLAR    , KC_PERCENT    ,                             KC_CIRCUMFLEX    , KC_AMPERSAND    , KC_ASTERISK    , KC_LEFT_PAREN    , KC_RIGHT_PAREN   , KC_EQL   ,
//     _______  ,  KC_MINS , _______  , _______   , KC_ESC   , _______   ,                                     KC_LEFT  , KC_DOWN  , KC_UP    , KC_RIGHT  , KC_LBRC  , KC_RBRC  ,
//     _______  ,  _______ , _______  , _______ , _______  , _______  ,                                         _______  , KC_LNG2  , KC_LNG1  , _______  , KC_BACKSLASH  , _______  ,
//                   _______  , _______ , _______  ,         _______  , _______  ,                   _______  , KC_ESC  , _______       , _______  , _______
//   ),

//   [4] = LAYOUT_universal(
//     _______  ,  _______   , _______    , _______   , _______    , _______    ,                             _______    , _______    , _______    , _______    , _______   , _______   ,
//     _______  ,  _______ , KC_BTN2  , KC_BTN3   , KC_BTN1   , _______   ,                                     _______  , _______  , _______    , _______  , _______  , _______  ,
//     _______  ,  _______ , _______  , _______ , _______  , _______  ,                                         _______  , _______  , _______  , _______  , _______  , _______  ,
//                   _______  , _______ , _______  ,         _______  , _______  ,                   _______  , _______  , _______       , _______  , _______
//   ),
// };

// 39 key
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // keymap for default
  [0] = LAYOUT_universal(
    _______   , KC_Q     , KC_W     , KC_E     , KC_R     , KC_T     ,                                        KC_Y     , KC_U     , KC_I     , KC_O     , KC_P     , _______   ,
    _______   , LCTL_T(KC_A)     , KC_S     , KC_D     , KC_F     , KC_G     ,                                        KC_H     , KC_J     , KC_K     , KC_L,   RCTL_T(KC_SCLN)  , _______  ,
    _______  , LSFT_T(KC_Z)     , KC_X     , KC_C     , KC_V     , KC_B     ,                                        KC_N     , KC_M     , KC_COMM  , KC_DOT   , RSFT_T(KC_SLSH)  , _______  ,
              KC_LALT,LSG(KC_5),  MO(2),LT(3,KC_SPC),MO(1),                  RSFT_T(KC_BACKSPACE),GUI_T(KC_ENT), RCTL_T(KC_LNG2),     _______  , TG(1)
  ),

  [1] = LAYOUT_universal(
    RGB_TOG  , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  ,                                        KC_F6  , KC_F7  , KC_F8  , KC_F9 , KC_F10 , _______  ,
    RGB_MOD  , RGB_HUI  , RGB_SAI  , RGB_VAI  , CPI_I100  , SCRL_DVI ,                                        LCA(KC_LEFT)  , LCA(KC_F)  , LCA(KC_ENT)  , LCA(KC_RIGHT) , KC_F11  , _______  ,
    RGB_RMOD , RGB_HUD  , RGB_SAD  , RGB_VAD  , CPI_D100  , SCRL_DVD ,                                        LCA(KC_D)  , LCA(KC_E) , LCA(KC_T) , LCA(KC_G)  , KC_F12  , _______ ,
                  _______    , _______  , _______  ,        _______  , _______  ,                   _______  , _______  , _______       , _______  , _______
  ),

  [2] = LAYOUT_universal(
    _______  ,_______, _______     , _______    , _______     , _______  ,                                         _______  , KC_KP_7  , KC_KP_8  , KC_KP_9  , _______  , _______  ,
    _______  ,_______, _______     , _______    , _______     , _______  ,                                         _______  , KC_KP_4  , KC_KP_5, KC_KP_6  , _______  , _______   ,
    _______  ,_______, _______     , _______    , _______     ,_______,                                        KC_KP_DOT,KC_KP_1, KC_KP_2   ,KC_KP_3,KC_PIPE,_______,
                  _______, _______, _______  ,         _______  , _______  ,                   _______   , KC_KP_0, _______       , _______  , _______
  ),

  [3] = LAYOUT_universal(
    _______  ,  KC_EXLM   , KC_AT    , KC_HASH   , KC_DOLLAR    , KC_PERCENT    ,                             KC_CIRCUMFLEX    , KC_AMPERSAND    , KC_ASTERISK    , KC_LEFT_PAREN    , KC_RIGHT_PAREN   , _______   ,
    _______  ,  KC_TAB , _______  , KC_LNG2   , KC_LNG1   , KC_ESC   ,                                     KC_LEFT  , KC_DOWN  , KC_UP    , KC_RIGHT  , KC_QUOT  , _______  ,
    _______  ,  _______ , _______  , KC_TILDE , KC_GRAVE  , _______  ,                                         KC_LEFT_BRACKET  , KC_RIGHT_BRACKET  , KC_MINUS  , KC_EQUAL  , KC_BACKSLASH  , _______  ,
                  _______  , _______ , _______  ,         _______  , _______  ,                   _______  , KC_ESC  , _______       , _______  , _______
  ),

  [4] = LAYOUT_universal(
    _______  ,  _______   , _______    , _______   , _______    , _______    ,                             _______    , _______    , _______    , _______    , _______   , _______   ,
    _______  ,  _______ , KC_BTN2  , KC_BTN3   , KC_BTN1   , _______   ,                                     _______  , _______  , _______    , _______  , _______  , _______  ,
    _______  ,  _______ , _______  , _______ , _______  , _______  ,                                         _______  , _______  , _______  , _______  , _______  , _______  ,
                  _______  , _______ , _______  ,         _______  , _______  ,                   _______  , _______  , _______       , _______  , _______
  ),
};
// clang-format on

layer_state_t layer_state_set_user(layer_state_t state) {
    switch(get_highest_layer(remove_auto_mouse_layer(state, true))) {
        case 3:
            // Auto enable scroll mode when the highest layer is 3
            // remove_auto_mouse_target must be called to adjust state *before* setting enable
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
