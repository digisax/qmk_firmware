#include "my.h"
//#include "my_leader.h"
#include "dynamic_macro.h"

void matrix_init_user(void) {
}

LEADER_EXTERNS();

void matrix_scan_user(void) {
    LEADER_DICTIONARY() {
    leading = false;
    leader_end();

    SEQ_ONE_KEY(KC_F) {
      // Anything you can do in a macro.
      SEND_STRING("QMK is awesome.");
    }
    SEQ_ONE_KEY(KC_Q) {
        send_unicode_hex_string(shrug_uc);
    }
    SEQ_ONE_KEY(KC_W) {
        send_unicode_hex_string(lenny_uc);
    }
    SEQ_TWO_KEYS(KC_D, KC_D) {
      SEND_STRING(SS_LCTRL("a")SS_LCTRL("c"));
    }
    SEQ_THREE_KEYS(KC_D, KC_D, KC_S) {
      SEND_STRING("https://start.duckduckgo.com"SS_TAP(X_ENTER));
    }
    SEQ_TWO_KEYS(KC_A, KC_S) {
      register_code(KC_LGUI);
      register_code(KC_S);
      unregister_code(KC_S);
      unregister_code(KC_LGUI);
    }
  }
}


void led_set_user(uint8_t usb_led) {

	if (usb_led & (1 << USB_LED_NUM_LOCK)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_CAPS_LOCK)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_COMPOSE)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_KANA)) {

	} else {

	}

}

uint32_t layer_state_set_user(uint32_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QWERTY:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_QWERTY);
      }
      return false;
      break;
    case GAMING:
        if (record->event.pressed) {
            set_single_persistent_default_layer(_GAMING);
        }
        return false;
        break;
    case TEST:
        if(record->event.pressed) {
            set_single_persistent_default_layer(_TEST);
        }
        return false;
        break;
    case HEHE:
        if(record->event.pressed) {
            SEND_STRING(":ehehe:");
        }
        return false;
        break;
    case SWAVE:
        if(record->event.pressed) {
            SEND_STRING(":SleepyWave:");
        }
        return false;
        break;
    case EYES:
        if(record->event.pressed) {
            SEND_STRING(":eyesssss:");
        }
        return false;
        break;
    case SHRUG:
        if(record->event.pressed) {
            SEND_STRING(":shrug~1:");
        }
        return false;
        break;
    case WAVEB:
        if(record->event.pressed) {
            SEND_STRING(":wavebothhands:");
        }
        return false;
        break;
    case EYESL:
        if(record->event.pressed) {
            SEND_STRING(":eyeslove:");
        }
        return false;
        break;
    case WHAT:
        if(record->event.pressed) {
            SEND_STRING(":what:");
        }
        return false;
        break;
    case HAPPY:
        if(record->event.pressed) {
            SEND_STRING(":happyday:");
        }
        return false;
        break;
  }
  return true;
}
