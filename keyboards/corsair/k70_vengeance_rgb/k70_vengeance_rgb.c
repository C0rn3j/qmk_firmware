#include "k70_vengeance_rgb.h"
#include <hal.h>

/* override led_init_ports as leds are not standard*/

void led_init_ports(void) {

    setPinOutput(LED_CAPS_LOCK_PIN);
    setPinOutput(LED_SCROLL_LOCK_PIN);
    setPinOutput(LED_NUM_LOCK_PIN);
    off_all_leds();
}

void off_all_leds(void) {

    writePinHigh(LED_CAPS_LOCK_PIN);
    writePinHigh(LED_SCROLL_LOCK_PIN);
    writePinHigh(LED_NUM_LOCK_PIN);
}

void on_all_leds(void) {

    writePinLow(LED_CAPS_LOCK_PIN);
    writePinLow(LED_SCROLL_LOCK_PIN);
    writePinLow(LED_NUM_LOCK_PIN);
}

void keyboard_post_init_kb(void) {

    /* flash leds, like default firmware */
    on_all_leds();
    wait_ms(500);
    off_all_leds();
}

// static bool win_key_locked = false;

// bool process_record_kb(uint16_t keycode, keyrecord_t *record) {
//     switch (keycode) {
//         case KC_TGUI:
//             if (record->event.pressed) {
//                 /* Toggle GUI lock on key press */
//                 win_key_locked = !win_key_locked;
//                 writePin(LED_WIN_LOCK_PIN, !win_key_locked);
//             }
//             break;
//         case KC_LGUI:
//             if (win_key_locked) { return false; }
//             break;
//     }
//     return process_record_user(keycode, record);
// }

bool encoder_update_user(uint8_t index, bool clockwise) {
  if (clockwise) {
    tap_code(KC_KB_VOLUME_UP);
  } else {
    tap_code(KC_KB_VOLUME_DOWN);
  }
  return false;
}
