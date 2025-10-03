/*
 * ██╗    ██╗██╗███████╗██╗  ██╗██████╗  ██████╗ ███╗   ██╗███████╗███████╗ ██╗
 * ██║    ██║██║██╔════╝██║  ██║██╔══██╗██╔═══██╗████╗  ██║██╔════╝██╔════╝███║
 * ██║ █╗ ██║██║███████╗███████║██████╔╝██║   ██║██╔██╗ ██║█████╗  ███████╗╚██║
 * ██║███╗██║██║╚════██║██╔══██║██╔══██╗██║   ██║██║╚██╗██║██╔══╝  ╚════██║ ██║
 * ╚███╔███╔╝██║███████║██║  ██║██████╔╝╚██████╔╝██║ ╚████║███████╗███████║ ██║
 *  ╚══╝╚══╝ ╚═╝╚══════╝╚═╝  ╚═╝╚═════╝  ╚═════╝ ╚═╝  ╚═══╝╚══════╝╚══════╝ ╚═╝
 *
 * keyboard:    draculad
 * file:        keymap.c
 * purpose:     keymap definition
 *
 */

#include QMK_KEYBOARD_H

#include "keymap.h"
//#include "tap_dance.h"
//#include "key_overrides.h"


// Layer definition

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] =  LAYOUT(
        TD(TD_Q_ESC),             KC_W,         KC_E,         KC_R,            KC_T,                KC_Y,    KC_U,         KC_I,         KC_O,         KC_P,
        LSFT_T(KC_A),     LCTL_T(KC_S), LGUI_T(KC_D), LALT_T(KC_F),    KC_G,                KC_H,    RALT_T(KC_J), RGUI_T(KC_K), RCTL_T(KC_L), RSFT_T(KC_QUOT),
        LT(_LOWER, KC_Z), KC_X,         KC_C,         KC_V,            KC_B,                KC_N,    KC_M,         KC_COMM,      KC_DOT,       TD(TD_SLSH_BSLS),
                                                                       XXXXXXX,             XXXXXXX,
                                           QK_LEAD, KC_TAB, LALT_T(KC_SPC),             LT(_RAISE, KC_SPC), KC_BSPC, KC_GRV
    ),

    [_LOWER] = LAYOUT(
        KC_EXLM,      KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                      KC_CIRC,          KC_AMPR,          KC_ASTR,          KC_LPRN,          KC_RPRN,
        LSFT_T(KC_A), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      TD(TD_LEFT_HOME), TD(TD_DOWN_PGDN), TD(TD_UP_PGUP),   TD(TD_RGHT_END),  TD(TD_EQL_PPLS),
        XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX,          XXXXXXX,          TD(TD_LBRC_LCBR), TD(TD_RBRC_RCBR), KC_QUES,
                                            XXXXXXX,                      XXXXXXX,
                                   QK_BOOT, XXXXXXX, XXXXXXX,    XXXXXXX, KC_DEL,  XXXXXXX
    ),
    [_RAISE] = LAYOUT(
        KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                        KC_F11,  KC_4,    KC_5,    KC_6,    KC_COLN,
        KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,                       M_PPP,   KC_1,    KC_2,    KC_3,    KC_SCLN,
                                            XXXXXXX,                      KC_NO,
                                   XXXXXXX, XXXXXXX, XXXXXXX,    KC_SPC, KC_BSPC, KC_0
    )
};

#ifdef ENCODER_ENABLE
bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        // Volume control
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    }
    else if (index == 2) {
      if(clockwise) {
        tap_code(KC_WH_U);
      }
      else{
        tap_code(KC_WH_D);
      }
    }
    else if (index == 3  ) {
        // Page up/Page down
        if (clockwise) {
          tap_code(KC_WH_U);
        } else {
          tap_code(KC_WH_D);
        }
    }
    return false;
}
#endif

// Don't ask

#ifdef PPP
bool process_record_user(uint16_t keycode, keyrecord_t* record) {
  switch (keycode) {
    case M_PPP:
      if (record->event.pressed) {
        SEND_STRING(PPP);
      }
      return false;
  }
  return true;
}
#endif
