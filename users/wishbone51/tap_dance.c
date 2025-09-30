/*
 * ██╗    ██╗██╗███████╗██╗  ██╗██████╗  ██████╗ ███╗   ██╗███████╗███████╗ ██╗
 * ██║    ██║██║██╔════╝██║  ██║██╔══██╗██╔═══██╗████╗  ██║██╔════╝██╔════╝███║
 * ██║ █╗ ██║██║███████╗███████║██████╔╝██║   ██║██╔██╗ ██║█████╗  ███████╗╚██║
 * ██║███╗██║██║╚════██║██╔══██║██╔══██╗██║   ██║██║╚██╗██║██╔══╝  ╚════██║ ██║
 * ╚███╔███╔╝██║███████║██║  ██║██████╔╝╚██████╔╝██║ ╚████║███████╗███████║ ██║
 *  ╚══╝╚══╝ ╚═╝╚══════╝╚═╝  ╚═╝╚═════╝  ╚═════╝ ╚═╝  ╚═══╝╚══════╝╚══════╝ ╚═╝
 *
 * keyboard:    ferris sweep
 * file:        tap_dance.c
 * purpose:     tap dance sequences
 *
 */

#include "quantum.h"
#include "tap_dance.h"

tap_dance_action_t tap_dance_actions[] = {
    [TD_UP_PGUP]        = ACTION_TAP_DANCE_DOUBLE(KC_UP, KC_PGUP),      // UP    -> PGUP
    [TD_LEFT_HOME]      = ACTION_TAP_DANCE_DOUBLE(KC_LEFT, KC_HOME),    // LEFT  -> HOME
    [TD_DOWN_PGDN]      = ACTION_TAP_DANCE_DOUBLE(KC_DOWN, KC_PGDN),    // DOWN  -> PGDN
    [TD_RGHT_END]       = ACTION_TAP_DANCE_DOUBLE(KC_RGHT, KC_END),     // RIGHT -> END
    [TD_SLSH_BSLS]      = ACTION_TAP_DANCE_DOUBLE(KC_SLSH, KC_BSLS),    // SLSH  -> BSLS
    [TD_Q_ESC]          = ACTION_TAP_DANCE_DOUBLE(KC_Q, KC_ESC),        // Q     -> ESC
    [TD_EQL_PPLS]       = ACTION_TAP_DANCE_DOUBLE(KC_EQL, KC_PPLS),     // EQL   -> PPLS
    [TD_LBRC_LCBR]      = ACTION_TAP_DANCE_DOUBLE(KC_LBRC, KC_LCBR),    // LBRC  -> LCBR
    [TD_RBRC_RCBR]      = ACTION_TAP_DANCE_DOUBLE(KC_RBRC, KC_RCBR)     // RBRC  -> RCBR
};
