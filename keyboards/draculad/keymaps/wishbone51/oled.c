/*
 * ██╗    ██╗██╗███████╗██╗  ██╗██████╗  ██████╗ ███╗   ██╗███████╗███████╗ ██╗
 * ██║    ██║██║██╔════╝██║  ██║██╔══██╗██╔═══██╗████╗  ██║██╔════╝██╔════╝███║
 * ██║ █╗ ██║██║███████╗███████║██████╔╝██║   ██║██╔██╗ ██║█████╗  ███████╗╚██║
 * ██║███╗██║██║╚════██║██╔══██║██╔══██╗██║   ██║██║╚██╗██║██╔══╝  ╚════██║ ██║
 * ╚███╔███╔╝██║███████║██║  ██║██████╔╝╚██████╔╝██║ ╚████║███████╗███████║ ██║
 *  ╚══╝╚══╝ ╚═╝╚══════╝╚═╝  ╚═╝╚═════╝  ╚═════╝ ╚═╝  ╚═══╝╚══════╝╚══════╝ ╚═╝
 *
 * keyboard:    draculad
 * file:        oled.c
 * purpose:     manages OLED content
 *
 */

#include "quantum.h"
#include "oled_dashboard.h"
#include "oled_images/draculad.h"

oled_rotation_t oled_init_user(oled_rotation_t rotation) {

 if (is_keyboard_master()) {
    if(is_keyboard_left()){
      return OLED_ROTATION_270;
      }
      else {
        return OLED_ROTATION_90;
      }
    } else {
            return OLED_ROTATION_0;
    }
}
static void render_logo(void) {
  oled_write_raw_P(oled_image, sizeof(oled_image));
}

bool oled_task_user(void) {
      if (is_keyboard_master()) {
        oled_dashboard();
    } else {
        render_logo();
    }
    return false;
}

