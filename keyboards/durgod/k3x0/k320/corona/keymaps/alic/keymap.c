/* Copyright 2021 kuenhlee
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

// Layer shorthand
#define _BL     0u
#define _FL     1u  // Multimedia Related, Virtual Desktop control
#define _TL     2u

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BL] = LAYOUT_tkl_ansi( /* Base Layer */
      KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,             KC_PSCR,  KC_SLCK,  KC_PAUS,
      KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,  KC_INS,   KC_HOME,  KC_PGUP,
      KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,  KC_DEL,   KC_END,   KC_PGDN,
      KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,  KC_ENT,
      KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,                      KC_UP,
      KC_LCTL,  KC_LGUI,  KC_LALT,                                KC_SPC,                                 KC_RALT,  MO(_FL),  /*KC_APP*/ MO(_TL),   KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT
  ),

  [_FL] = LAYOUT_tkl_ansi( /* First Layer */
      XXXXXXX,  KC_MPLY,  KC_MSTP,  KC_MPRV,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,            BL_STEP, XXXXXXX, XXXXXXX,
      XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  BL_ON,   XXXXXXX, XXXXXXX,
      XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  BL_OFF,  XXXXXXX, XXXXXXX,
      XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
      XXXXXXX,            XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,                     BL_INC,
      XXXXXXX,  KC_TGUI,  XXXXXXX,                                XXXXXXX,                                XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  RGB_SPD, BL_DEC,  RGB_SPI
  ),

  [_TL] = LAYOUT_tkl_ansi( /* First Layer */
      XXXXXXX,  KC_MPLY,  KC_MSTP,  KC_MPRV,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,            BL_STEP, XXXXXXX, XXXXXXX,
      XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  BL_ON,   XXXXXXX, XXXXXXX,
      XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  BL_OFF,  XXXXXXX, XXXXXXX,
      XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
      XXXXXXX,            XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,                     BL_INC,
      XXXXXXX,  KC_TGUI,  XXXXXXX,                                XXXXXXX,                                XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX, BL_DEC,  XXXXXXX
  )
};


 led_config_t g_led_config = {
    {
    //    esc  f1   f2   f3   f4   f5   f6   f7   f8   f9  f10  f11  f12           ptscr  sclk pause
        {  0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,             13,  14,  15},
    //     `    1    2    3    4    5    6    7    8    9    0    -    =       bkspace   pgup
        { 16,  17,  18,  19,  20,  21,  22,  23,  24,  25,  26,  27,  28,  NO_LED, 29,   32},
    //   tab    q    w    e    r    t    y    u    i    o    p    [    ]              \   ins  home
        { 33,  34,  35,  36,  37,  38,  39,  40,  41,  42,  43,  44,  45,             46,  30,  31},
    //   caps   a    s    d    f    g    h    j    k    l    ;    '                   del  end  pgdn
        { 50,  51,  52,  53,  54,  55,  56,  57,  58,  59,  60,  61,  62,             47,  48,  49},
    //   shift  z    x    c    v    b    n    m    ,    .    /                shift enter up
        { 64,  65,  66,  67,  68,  69,  70,  71,  72,  73,  74,  75,  NO_LED,  76,  63,  77},
    //  ctrl win alt                         space                        alt   fn  menu ctrl lft  dwn
        {78, 79, 80, NO_LED, NO_LED, NO_LED, 81, NO_LED, NO_LED,  NO_LED,  82,  83,  84,  85,  86,  87},
    //                                                                                                                         right
        {NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, 88}
    }, {
        {  0,  0 }, { 14,  0 }, { 28,  0 }, { 42,  0 }, { 56,  0 }, { 70,  0 }, { 84,  0 }, { 98,  0 }, {112,  0 }, {126,  0 }, {140,  0 }, {154,  0 }, {168,  0 }, {182,  0 }, {196,  0 }, {224,  0 },
        {  0, 10 }, { 14, 10 }, { 28, 10 }, { 42, 10 }, { 56, 10 }, { 70, 10 }, { 84, 10 }, { 98, 10 }, {112, 10 }, {126, 10 }, {140, 10 }, {154, 10 }, {168, 10 }, {182, 10 }, {196, 10 }, {210, 10 }, {224, 10},
        {  0, 20 }, { 14, 20 }, { 28, 20 }, { 42, 20 }, { 56, 20 }, { 70, 20 }, { 84, 20 }, { 98, 20 }, {112, 20 }, {126, 20 }, {140, 20 }, {154, 20 }, {168, 20 }, {182, 20 }, {196, 20 }, {210, 20 }, {224, 20},
        {  0, 30 }, { 14, 30 }, { 28, 30 }, { 42, 30 }, { 56, 30 }, { 70, 30 }, { 84, 30 }, { 98, 30 }, {112, 30 }, {126, 30 }, {140, 30 }, {154, 30 }, {168, 30 }, {182, 30 },
        {  0, 40 }, { 14, 40 }, { 28, 40 }, { 42, 40 }, { 56, 40 }, { 70, 40 }, { 84, 40 }, { 98, 40 }, {112, 40 }, {126, 40 }, {140, 40 }, {154, 40 }, {168, 40 }, {182, 40 },
        {  0, 50 }, { 14, 50 }, { 28, 50 }, { 84, 50 }, {140, 50 }, {154, 50 }, {168, 50 }, {182, 50 }, {196, 50 }, {210, 50 }, {224, 50},
    }, {
        // LED  Index to Flag
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1
    }
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch(keycode) {
        case RGB_SPI:
            if(record->event.pressed) {
                led_matrix_increase_speed();
            }
            break;
        case RGB_SPD:
            if(record->event.pressed) {
                led_matrix_decrease_speed();
            }
            break;
    }
    return true;
}

uint8_t _FL_LIGHT_KEYS[]= {1, 2, 3, 4, 5, 6, 7, 79, 77, 87, 30, 47, 13, 86, 88};
uint8_t _TL_LIGHT_KEYS[]= {17, 18, 19, 20, 21, 22, 23, 24, 25, 26};
#define FIRST_NUM 17

void toggle_layer_lights(uint8_t* keys, uint8_t nkeys) {
    led_matrix_set_value_all(led_matrix_eeconfig.val / 6);
    for (uint8_t i = 0; i < nkeys; i++) {
        led_matrix_set_value(keys[i], led_matrix_eeconfig.val);
    }
}

uint8_t changed_layer = 0;
void led_matrix_indicators_user(void) {
    uint8_t new_layer = get_highest_layer(layer_state | default_layer_state);

    if(changed_layer != new_layer) {
        switch (new_layer) {
            case _FL:
                toggle_layer_lights(_FL_LIGHT_KEYS, sizeof(_FL_LIGHT_KEYS));
                break;
            case _TL:
                toggle_layer_lights(_TL_LIGHT_KEYS, 0); //sizeof(_TL_LIGHT_KEYS));
                break;
            default:
                //led_matrix_set_value_all(led_matrix_eeconfig.val);
                break;
        }
        led_matrix_set_value(new_layer + FIRST_NUM - 1, led_matrix_eeconfig.val);
    } else {
        changed_layer = new_layer;
    }
}

