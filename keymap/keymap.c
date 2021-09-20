#include QMK_KEYBOARD_H
#include "version.h"

#define QWERTY 0   // L0: QWERTY layer (default)
#define CMAK   1   // L1: COLEMAK layer
#define AUX    2   // L2: AUXILIARY layer

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Layer QWERTY
 * ,--------------------------------------------------.         ,--------------------------------------------------.
 * |   `    |   1  |   2  |   3  |   4  |   5  | Home |         | PgUp |   6  |   7  |   8  |   9  |   0  |  Esc   |
 * |--------+------+------+------+------+-------------|         |------+------+------+------+------+------+--------|
 * | Tab    |   Q  |   W  |   E  |   R  |   T  | End  |         | PgDn |   Y  |   U  |   I  |   O  |   P  |   \    |
 * |--------+------+------+------+------+------|      |         |      |------+------+------+------+------+--------|
 * | LCtrl  |   A  |   S  |   D  |   F  |   G  |------|         |------|   H  |   J  |   K  |   L  |   ;  |   '    |
 * |--------+------+------+------+------+------| LGui |         | RGui |------+------+------+------+------+--------|
 * | LShift |   Z  |   X  |   C  |   V  |   B  |      |         |      |   N  |   M  |   ,  |   .  |   /  | RShift |
 * `--------+------+------+------+------+-------------'         `-------------+------+------+------+------+--------'
 *   | ~L2  | LCtrl| LAlt |   [  |   ]  |                                     |   -  |   =  | RAlt | RCtrl| ~L2  |
 *   `----------------------------------'                                     `----------------------------------'
 *                                      ,-------------.         ,-------------.
 *                                      | Vol- | Vol+ |         | Left | Right|
 *                               ,------|------|------|         |------+------+------.
 *                               |      |      | Mute |         |  Up  |      |      |
 *                               | Bkspc| Del  |------|         |------| Enter| Space|
 *                               |      |      | Pause|         | Down |      |      |
 *                               `--------------------'         `--------------------'
 */
[QWERTY] = LAYOUT_ergodox(
    // left hand
    KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_HOME,
    KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_END,
    KC_LCTL,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,
    KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_LGUI,
    MO(AUX),  KC_LCTL,  KC_LALT,  KC_LBRC,  KC_RBRC,
                                                      KC_VOLD,  KC_VOLU,
                                                                KC_MUTE,
                                            KC_BSPC,  KC_DEL,   KC_MPLY,
    // right hand
    KC_PGUP,  KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_ESC,
    KC_PGDN,  KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_BSLS,
              KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,
    KC_RGUI,  KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,
                        KC_MINS,  KC_EQL,   KC_RALT,  KC_RCTL,  MO(AUX),
    KC_LEFT,  KC_RGHT,
    KC_UP,
    KC_DOWN,  KC_ENT,   KC_SPC
),

/* Layer CMAK
 * ,--------------------------------------------------.         ,--------------------------------------------------.
 * |   ##   |  ##  |  ##  |  ##  |  ##  |  ##  |  ##  |         |  ##  |  ##  |  ##  |  ##  |  ##  |  ##  |   ##   |
 * |--------+------+------+------+------+-------------|         |------+------+------+------+------+------+--------|
 * |   ##   |   Q  |   W  |   F  |   P  |   G  |  ##  |         |  ##  |   J  |   L  |   U  |   Y  |   ;  |   ##   |
 * |--------+------+------+------+------+------|      |         |      |------+------+------+------+------+--------|
 * |   ##   |   A  |   R  |   S  |   T  |   D  |------|         |------|   H  |   N  |   E  |   I  |   O  |   ##   |
 * |--------+------+------+------+------+------|  ##  |         |  ##  |------+------+------+------+------+--------|
 * |   ##   |   Z  |   X  |   C  |   V  |   B  |      |         |      |   K  |   M  |   ,  |   .  |   /  |   ##   |
 * `--------+------+------+------+------+-------------'         `-------------+------+------+------+------+--------'
 *   |  ##  |  ##  |  ##  |  ##  |  ##  |                                     |  ##  |  ##  |  ##  |  ##  |  ##  |
 *   `----------------------------------'                                     `----------------------------------'
 *                                      ,-------------.         ,-------------.
 *                                      |  ##  |  ##  |         |  ##  |  ##  |
 *                               ,------|------|------|         |------+------+------.
 *                               |      |      |  ##  |         |  ##  |      |      |
 *                               |  ##  |  ##  |------|         |------|  ##  |  ##  |
 *                               |      |      |  ##  |         |  ##  |      |      |
 *                               `--------------------'         `--------------------'
 */
[CMAK] = LAYOUT_ergodox(
    // left hand
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
    KC_TRNS,  KC_Q,     KC_W,     KC_F,     KC_P,     KC_G,     KC_TRNS,
    KC_TRNS,  KC_A,     KC_R,     KC_S,     KC_T,     KC_D,
    KC_TRNS,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_TRNS,
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
                                                      KC_TRNS,  KC_TRNS,
                                                                KC_TRNS,
                                            KC_TRNS,  KC_TRNS,  KC_TRNS,
    // right hand
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
    KC_TRNS,  KC_J,     KC_L,     KC_U,     KC_Y,     KC_SCLN,  KC_TRNS,
              KC_H,     KC_N,     KC_E,     KC_I,     KC_O,     KC_TRNS,
    KC_TRNS,  KC_K,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_TRNS,
                        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
    KC_TRNS,  KC_TRNS,
    KC_TRNS,
    KC_TRNS,  KC_TRNS,  KC_TRNS
),

/* Layer AUXILIARY
 * ,--------------------------------------------------.         ,--------------------------------------------------.
 * | Esc    |  F1  |  F2  |  F3  |  F4  |  F5  | F6   |         |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 | PrtSc  |
 * |--------+------+------+------+------+-------------|         |------+------+------+------+------+------+--------|
 * |   ##   |      |  Up  |      |      |      |  L1  |         | Caps | BRI- | BRI+ |      |      |      |        |
 * |--------+------+------+------+------+------|      |         |      |------+------+------+------+------+--------|
 * |   ##   | Left | Down | Right|      |      |------|         |------| HUE- | HUE+ |      |      |      |        |
 * |--------+------+------+------+------+------|  ##  |         |  ##  |------+------+------+------+------+--------|
 * |   ##   |      |      |      |      |      |      |         |      | SAT- | SAT+ |      |      |      |   ##   |
 * `--------+------+------+------+------+-------------'         `-------------+------+------+------+------+--------'
 *   |  ##  |  ##  |  ##  |      |  Esc |                                     | RGB  |      |  ##  |  ##  |  ##  |
 *   `----------------------------------'                                     `----------------------------------'
 *                                      ,-------------.         ,-------------.
 *                                      | Prev | Next |         | RGB- | RGB+ |
 *                               ,------|------|------|         |------+------+------.
 *                               |      |      |      |         |      |      |      |
 *                               | Space| Enter|------|         |------|      |      |
 *                               |      |      |      |         |      |      |      |
 *                               `--------------------'         `--------------------'
 */
[AUX] = LAYOUT_ergodox(
    // left hand
    KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,
    KC_TRNS,  KC_NO,    KC_UP,    KC_NO,    KC_NO,    KC_NO,    TG(CMAK),
    KC_TRNS,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_NO,    KC_NO,
    KC_TRNS,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_TRNS,
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_NO,    KC_ESC,
                                                      KC_MPRV,  KC_MNXT,
                                                                KC_NO,
                                            KC_SPC,   KC_ENT,   KC_NO,
    // right hand
    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_PSCR,
    KC_CAPS,  RGB_VAD,  RGB_VAI,  KC_NO,    KC_NO,    KC_NO,    KC_NO,
              RGB_HUD,  RGB_HUI,  KC_NO,    KC_NO,    KC_NO,    KC_NO,
    KC_TRNS,  RGB_SAD,  RGB_SAI,  KC_NO,    KC_NO,    KC_NO,    KC_TRNS,
                        RGB_TOG,  KC_NO,    KC_TRNS,  KC_TRNS,  KC_TRNS,
    RGB_RMOD, RGB_MOD,
    KC_NO,
    KC_NO,    KC_NO,    KC_NO
),
};

void keyboard_post_init_user(void) {
  ergodox_right_led_1_on();
}

layer_state_t layer_state_set_user(layer_state_t state) {
  if (layer_state_cmp(state, CMAK)) {
    ergodox_right_led_1_off();
    ergodox_right_led_2_on();
  } else {
    ergodox_right_led_1_on();
    ergodox_right_led_2_off();
  }
  if (layer_state_cmp(state, AUX)) {
    ergodox_right_led_3_on();
  } else {
    ergodox_right_led_3_off();
  }
  return state;
}
