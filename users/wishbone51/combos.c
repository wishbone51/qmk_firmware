/*
 * ██╗    ██╗██╗███████╗██╗  ██╗██████╗  ██████╗ ███╗   ██╗███████╗███████╗ ██╗
 * ██║    ██║██║██╔════╝██║  ██║██╔══██╗██╔═══██╗████╗  ██║██╔════╝██╔════╝███║
 * ██║ █╗ ██║██║███████╗███████║██████╔╝██║   ██║██╔██╗ ██║█████╗  ███████╗╚██║
 * ██║███╗██║██║╚════██║██╔══██║██╔══██╗██║   ██║██║╚██╗██║██╔══╝  ╚════██║ ██║
 * ╚███╔███╔╝██║███████║██║  ██║██████╔╝╚██████╔╝██║ ╚████║███████╗███████║ ██║
 *  ╚══╝╚══╝ ╚═╝╚══════╝╚═╝  ╚═╝╚═════╝  ╚═════╝ ╚═╝  ╚═══╝╚══════╝╚══════╝ ╚═╝
 *
 * keyboard:    ferris sweep
 * file:        combos.c
 * purpose:     combo definitions
 *
 */

#include "quantum.h"
#include "tap_dance.h"


const uint16_t PROGMEM J_K_MINS[] =   {RALT_T(KC_J), RGUI_T(KC_K), COMBO_END};
const uint16_t PROGMEM D_F_TILD[] =   {LGUI_T(KC_D), LALT_T(KC_F), COMBO_END};
const uint16_t PROGMEM L_QUOT_ENT[] = {RCTL_T(KC_L), RSFT_T(KC_QUOT), COMBO_END};
const uint16_t PROGMEM M_COMM_GRV[] = {KC_M, KC_COMM, COMBO_END};
const uint16_t PROGMEM C_V_LEAD[] =   {KC_C, KC_V, COMBO_END };
const uint16_t PROGMEM U_I_BSLS[] =   {KC_U, KC_I, COMBO_END };


combo_t key_combos[] = {
    COMBO(J_K_MINS, KC_MINS),
    COMBO(D_F_TILD, KC_TILD),
    COMBO(L_QUOT_ENT, KC_ENT),
    COMBO(M_COMM_GRV, KC_GRV),
    COMBO(C_V_LEAD, QK_LEAD),
    COMBO(U_I_BSLS, KC_BSLS),
};
