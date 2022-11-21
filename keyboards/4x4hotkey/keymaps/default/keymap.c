#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_default(
		KC_P1 , KC_P2 , KC_P3 , KC_P4 ,
        KC_P5 , KC_P6 , KC_P7 , KC_P8 ,
        KC_P9 , KC_P0 , KC_PPLS , KC_PMNS ,
        KC_PENT , KC_DOT , KC_PSLS , KC_PAST
    )
};

#ifdef RGBLIGHT_ENABLE
void keyboard_post_init_user(void) {
  rgblight_enable_noeeprom(); // Enables RGB, without saving settings
  rgblight_sethsv_noeeprom(HSV_GREEN);
  rgblight_mode_noeeprom(RGBLIGHT_MODE_RAINBOW_SWIRL);
}
#endif