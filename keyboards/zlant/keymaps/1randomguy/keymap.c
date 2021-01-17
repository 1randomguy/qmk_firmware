#include QMK_KEYBOARD_H

#define BASE   0
#define DVORAK 1
#define UPPER  2
#define LOWER  3


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [BASE] = LAYOUT(
    KC_TAB,        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Z,    KC_U,    KC_I,    KC_O,    KC_P,     KC_BSPC,          \
    KC_ESC,        KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,  KC_QUOT,          \
    KC_LSFT, KC_Y,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,  RSFT_T(KC_ENTER), \
    KC_LCTRL,      DF(1), KC_LGUI, KC_LALT,  MO(3),   KC_SPC,KC_SPC,     MO(2),  KC_RALT, KC_PGUP, KC_PGDOWN,  KC_RCTRL         \
  ),

  [UPPER]   = LAYOUT(
    _______, KC_MPLY,    KC_MPRV,    KC_MNXT, KC_VOLD,   KC_VOLU, _______, RALT(KC_Y), _______, RALT(KC_P), _______,   KC_DEL,  \
    _______, RALT(KC_Q), RALT(KC_S), _______, _______,   KC_MUTE, KC_LEFT, KC_DOWN,   KC_UP,    KC_RIGHT,   _______,   _______, \
    _______, _______,    _______,    _______, _______,   _______, _______, _______,   _______,  _______,    _______,   _______, \
    _______, _______,    _______,    _______, _______,   _______, _______, RESET,     _______,  _______,    _______,   _______  \
  ),

  [LOWER]   = LAYOUT(
    KC_GRV , KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,      KC_7,    KC_8,    KC_9,    KC_0,    KC_BSLS, \
    _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,    _______, _______, _______, KC_MINUS, KC_EQUAL,\
    KC_CAPS, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,    _______, _______, KC_LBRC, KC_RBRC, _______, \
    _______, _______, _______, _______,   _______, _______, _______, _______, _______, _______, _______, _______  \
  ),

  [DVORAK] = LAYOUT(
    KC_TAB,  KC_QUOT, KC_COMM, KC_DOT,  KC_P,    KC_Y,    KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    KC_BSPC,         \
    KC_ESC,  KC_A,    KC_O,    KC_E,    KC_U,    KC_I,    KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_MINUS,        \
    KC_LSFT, KC_SCLN, KC_Q,    KC_J,    KC_K,    KC_X,    KC_B,    KC_M,    KC_W,    KC_V,    KC_Z,    RSFT_T(KC_ENTER),\
    KC_LCTRL,DF(1), KC_LGUI, KC_LALT, MO(3),   KC_SPC,KC_SPC,    MO(2),   KC_RALT, KC_PGUP, KC_PGDOWN, KC_RCTRL         \
  ),
};


