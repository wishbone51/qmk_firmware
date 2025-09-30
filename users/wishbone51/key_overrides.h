/*
 * ██╗    ██╗██╗███████╗██╗  ██╗██████╗  ██████╗ ███╗   ██╗███████╗███████╗ ██╗
 * ██║    ██║██║██╔════╝██║  ██║██╔══██╗██╔═══██╗████╗  ██║██╔════╝██╔════╝███║
 * ██║ █╗ ██║██║███████╗███████║██████╔╝██║   ██║██╔██╗ ██║█████╗  ███████╗╚██║
 * ██║███╗██║██║╚════██║██╔══██║██╔══██╗██║   ██║██║╚██╗██║██╔══╝  ╚════██║ ██║
 * ╚███╔███╔╝██║███████║██║  ██║██████╔╝╚██████╔╝██║ ╚████║███████╗███████║ ██║
 *  ╚══╝╚══╝ ╚═╝╚══════╝╚═╝  ╚═╝╚═════╝  ╚═════╝ ╚═╝  ╚═══╝╚══════╝╚══════╝ ╚═╝
 *
 * keyboard:    ferris sweep
 * file:        key_overrides.h
 * purpose:     defines key overrides
 *
 */

#pragma once

#include "quantum.h"

const key_override_t **key_overrides = (const key_override_t *[]) {
    &ko_make_basic(MOD_MASK_ALT, KC_R, LALT(KC_F4)),                  // ALT-R -> ALT-F4
    &ko_make_basic(MOD_MASK_ALT, LSFT_T(KC_A), LALT(KC_TAB)),         // ALT-A -> ALT-TAB
    NULL
};

