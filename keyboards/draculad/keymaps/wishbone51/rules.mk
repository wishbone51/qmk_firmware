#
# ██╗    ██╗██╗███████╗██╗  ██╗██████╗  ██████╗ ███╗   ██╗███████╗███████╗ ██╗
# ██║    ██║██║██╔════╝██║  ██║██╔══██╗██╔═══██╗████╗  ██║██╔════╝██╔════╝███║
# ██║ █╗ ██║██║███████╗███████║██████╔╝██║   ██║██╔██╗ ██║█████╗  ███████╗╚██║
# ██║███╗██║██║╚════██║██╔══██║██╔══██╗██║   ██║██║╚██╗██║██╔══╝  ╚════██║ ██║
# ╚███╔███╔╝██║███████║██║  ██║██████╔╝╚██████╔╝██║ ╚████║███████╗███████║ ██║
#  ╚══╝╚══╝ ╚═╝╚══════╝╚═╝  ╚═╝╚═════╝  ╚═════╝ ╚═╝  ╚═══╝╚══════╝╚══════╝ ╚═╝
#
# keyboard:    draculad
# file:        rules.mk
# purpose:     compiler settings
#
#

CONVERT_TO = elite_pi
CAPS_WORD_ENABLE = yes
LEADER_ENABLE = yes
COMBO_ENABLE = yes
TAP_DANCE_ENABLE = yes
LEADER_ENABLE = yes
KEY_OVERRIDE_ENABLE = yes
RGBLIGHT_ENABLE = no

SRC += oled.c oled_dashboard.c tap_dance.c leader.c 

INTROSPECTION_KEYMAP_C = combos.c
