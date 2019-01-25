#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _ADJUST 16

enum custom_keycodes {
   QWERTY = SAFE_RANGE,
   LOWER,
  /* RAISE, */
  /* ADJUST, */
};

#define MAX_LAYER 4
#define REV2_LAYOUT(n, \
    L11, L12, L13, L14, L15,           R11, R12, R13, R14, R15, \
    L21, L22, L23, L24, L25,           R21, R22, R23, R24, R25, \
    L31, L32, L33, L34, L35,           R31, R32, R33, R34, R35) \
    LAYOUT( \
    L11, L12, L13, L14, L15,                                                            R11, R12, R13, R14, R15, \
    L21, L22, L23, L24, L25,                                                            R21, R22, R23, R24, R25, \
    L31, L32, L33, L34, L35,                                                            R31, R32, R33, R34, R35, \
    DF((n==MAX_LAYER?0:n+1)), DF((n==0?MAX_LAYER:n-1)), KC_SPC,  KC_TAB, KC_GESC,       KC_LCTRL,  LT(1,KC_ENTER), LT(1,KC_BSPACE), KC_QUOTE,  KC_BSLS, \
                                                        OSM(MOD_LSFT),   KC_LGUI,       KC_GESC,   KC_LALT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = REV2_LAYOUT(0,
          KC_Q, KC_W, KC_E, KC_R, KC_T,     KC_Y,  KC_U, KC_I,    KC_O,    KC_P,
          KC_A, KC_S, KC_D, KC_F, KC_G,     KC_H,  KC_J, KC_K,    KC_L,    KC_SCLN,
          KC_Z, KC_X, KC_C, KC_V, KC_B,     KC_N,  KC_M, KC_COMM, KC_DOT,  KC_SLSH
  ),
  [1] = REV2_LAYOUT(1,
          KC_NO,    KC_1,  KC_2,  KC_3,  KC_MINUS,         KC_PGUP,   KC_HOME,  KC_UP,    KC_END,    KC_MINUS,
          KC_NO,    KC_4,  KC_5,  KC_6,  KC_EQL,           KC_PGDOWN, KC_LEFT,  KC_DOWN,  KC_RIGHT,  KC_EQL,
          KC_RBRC,  KC_7,  KC_8,  KC_9,  KC_0,             KC_LBRC,   KC_RBRC,  KC_BSLS,  KC_QUOT,   KC_SLSH
  ),
  [2] = REV2_LAYOUT(2,
          KC_EXLM,   KC_AT, KC_HASH, KC_DLR, KC_PERC,      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,
          KC_TILD,   KC_NO, KC_NO,   KC_NO,  KC_NO,        KC_NO,   KC_NO,   KC_LBRC, KC_RBRC, KC_BSLASH,
          KC_NO,     KC_NO, KC_NO,   KC_NO,  KC_NO,        KC_NO,   KC_NO,   KC_NO,   KC_SCLN, KC_QUOTE
  ),
  [3] = REV2_LAYOUT(3,
  	      KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS,    KC_NO, KC_MUTE, KC_VOLD, KC_VOLU, KC_EJCT,
  	      KC_NUHS, KC_SCLN, KC_COMM, KC_DOT,  KC_QUOT,    KC_NO, KC_MPRV, KC_MPLY, KC_MNXT, KC_NO,
  	      KC_SLSH, KC_NUBS, KC_NO,   KC_NO,   KC_NO,      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
	),
  [4] = REV2_LAYOUT(4,
          RESET, KC_AT, KC_HASH, KC_DLR, KC_PERC,        KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,
          KC_NO,   KC_NO, KC_NO,   KC_NO,  KC_NO,        KC_NO,   KC_NO,   KC_LBRC, KC_RBRC, KC_BSLASH,
          KC_NO,   KC_NO, KC_NO,   KC_NO,  KC_NO,        KC_NO,   KC_NO,   KC_NO,   KC_SCLN, KC_QUOTE
  ),
};

/* bool process_record_user(uint16_t keycode, keyrecord_t *record) { */
  /* switch (keycode) { */
    /* case QWERTY: */
      /* if (record->event.pressed) { */
        /* set_single_persistent_default_layer(_QWERTY); */
      /* } */
      /* return false; */
      /* break; */
    /* case LOWER: */
      /* if (record->event.pressed) { */
        /* layer_on(_LOWER); */
        /* update_tri_layer(_LOWER, _RAISE, _ADJUST); */
      /* } else { */
        /* layer_off(_LOWER); */
        /* update_tri_layer(_LOWER, _RAISE, _ADJUST); */
      /* } */
      /* return false; */
      /* break; */
    /* case RAISE: */
      /* if (record->event.pressed) { */
        /* layer_on(_RAISE); */
        /* update_tri_layer(_LOWER, _RAISE, _ADJUST); */
      /* } else { */
        /* layer_off(_RAISE); */
        /* update_tri_layer(_LOWER, _RAISE, _ADJUST); */
      /* } */
      /* return false; */
      /* break; */
    /* case ADJUST: */
      /* if (record->event.pressed) { */
        /* layer_on(_ADJUST); */
      /* } else { */
        /* layer_off(_ADJUST); */
      /* } */
      /* return false; */
      /* break; */
  /* } */
  /* return true; */
/* } */
