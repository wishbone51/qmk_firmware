#include "quantum.h"

/*
 * ██╗    ██╗██╗███████╗██╗  ██╗██████╗  ██████╗ ███╗   ██╗███████╗███████╗ ██╗
 * ██║    ██║██║██╔════╝██║  ██║██╔══██╗██╔═══██╗████╗  ██║██╔════╝██╔════╝███║
 * ██║ █╗ ██║██║███████╗███████║██████╔╝██║   ██║██╔██╗ ██║█████╗  ███████╗╚██║
 * ██║███╗██║██║╚════██║██╔══██║██╔══██╗██║   ██║██║╚██╗██║██╔══╝  ╚════██║ ██║
 * ╚███╔███╔╝██║███████║██║  ██║██████╔╝╚██████╔╝██║ ╚████║███████╗███████║ ██║
 *  ╚══╝╚══╝ ╚═╝╚══════╝╚═╝  ╚═╝╚═════╝  ╚═════╝ ╚═╝  ╚═══╝╚══════╝╚══════╝ ╚═╝
 *
 * keyboard:    draculad
 * file:        oled_dashboard.c
 * purpose:     OLED status dashboard
 *
 */

void oled_dashboard(void) {
    uint8_t highest_layer;
    highest_layer = (get_highest_layer(layer_state));
    oled_write_ln_P(PSTR("LAYER"), false);
    oled_write_ln_P(PSTR("-----"), false);

    if (highest_layer == 0) {
        oled_write_ln_P(PSTR("DEFAULT"), true);
    } else {
        oled_write_ln_P(PSTR("DEFAULT"), false);
    }
    if (highest_layer == 1) {
        oled_write_ln_P(PSTR("LOWER"), true);
    } else {
        oled_write_ln_P(PSTR("LOWER"), false);
    }
    if (highest_layer == 2) {
        oled_write_ln_P(PSTR("RAISE"), true);
    } else {
        oled_write_ln_P(PSTR("RAISE"), false);
    }

    oled_write_ln_P(PSTR(""), false);

    oled_write_ln_P(PSTR("MODES"), false);
    oled_write_ln_P(PSTR("-----"), false);

    if (is_caps_word_on()) {
        oled_write_ln_P(PSTR("CAPS WORD"), true);
    } else {
        oled_write_ln_P(PSTR("CAPS WORD"), false);
    }
    if (leader_sequence_active()) {
        oled_write_ln_P(PSTR("LEADER KEY"), true);
    } else {
        oled_write_ln_P(PSTR("LEADER KEY"), false);
    }

    oled_write_ln_P(PSTR(""), false);

    uint8_t current_mods = get_mods();
    oled_write_ln_P(PSTR("MODIFIERS"), false);
    oled_write_ln_P(PSTR("-----"), false);

    if (current_mods & (MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT))) {
        oled_write_P(PSTR("S"), true);
    } else {
        oled_write_P(PSTR("S"), false);
    }

    if (current_mods & (MOD_BIT(KC_LCTL) | MOD_BIT(KC_RCTL))) {
        oled_write_P(PSTR("C"), true);
    } else {
        oled_write_P(PSTR("C"), false);
    }

    if (current_mods & (MOD_BIT(KC_LWIN) | MOD_BIT(KC_RWIN))) {
        oled_write_P(PSTR("W"), true);
    } else {
        oled_write_P(PSTR("W"), false);
    }

    if (current_mods & (MOD_BIT(KC_LALT) | MOD_BIT(KC_RALT))) {
        oled_write_P(PSTR("A"), true);
    } else {
        oled_write_P(PSTR("A"), false);
    }
}
