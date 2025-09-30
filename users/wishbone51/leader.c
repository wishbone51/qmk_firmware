/*
 * ██╗    ██╗██╗███████╗██╗  ██╗██████╗  ██████╗ ███╗   ██╗███████╗███████╗ ██╗
 * ██║    ██║██║██╔════╝██║  ██║██╔══██╗██╔═══██╗████╗  ██║██╔════╝██╔════╝███║
 * ██║ █╗ ██║██║███████╗███████║██████╔╝██║   ██║██╔██╗ ██║█████╗  ███████╗╚██║
 * ██║███╗██║██║╚════██║██╔══██║██╔══██╗██║   ██║██║╚██╗██║██╔══╝  ╚════██║ ██║
 * ╚███╔███╔╝██║███████║██║  ██║██████╔╝╚██████╔╝██║ ╚████║███████╗███████║ ██║
 *  ╚══╝╚══╝ ╚═╝╚══════╝╚═╝  ╚═╝╚═════╝  ╚═════╝ ╚═╝  ╚═══╝╚══════╝╚══════╝ ╚═╝
 *
 * keyboard:    ferris sweep
 * file:        leader.c
 * purpose:     leader key definitions
 *
 */

#include "quantum.h"

void leader_end_user(void) {

// L + SS - Screen Shot

    if (leader_sequence_two_keys(KC_S, KC_S)) {
        tap_code16(LGUI(LSFT(KC_S)));
    }

// L + CC - Calculator

    if (leader_sequence_two_keys(KC_C, KC_C)) {
         tap_code16(KC_CALC);
    }

// L + MC - My Computer

    if (leader_sequence_two_keys(KC_M, KC_C)) {
         tap_code16(KC_MYCM);
    }

// L + CD - Ctrl/Alt/Del

    if (leader_sequence_two_keys(KC_C, KC_D)) {
         tap_code16(LCTL(LALT(KC_DEL)));
    }
}
