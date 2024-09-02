// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H


enum layers {
    _BASE,
    _NUM,
    _FN
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │ K │ L │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │ K │ L │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │ K │ L │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │ K │ L │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │ K │ L │ 
     * └───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┘
     */
    [_BASE] = LAYOUT_ortho_5x12(
        KC_GRAVE,       KC_1,       KC_2,       KC_3,          KC_4,                KC_5,       KC_6,       KC_7,                KC_8,       KC_9,       KC_0,         KC_MINUS,
        KC_TAB,         KC_Q,       KC_W,       KC_E,          KC_R,                KC_T,       KC_Y,       KC_U,                KC_I,       KC_O,       KC_P,         KC_BSPC,
        KC_ESC,         KC_A,       KC_S,       KC_D,          KC_F,                KC_G,       KC_H,       KC_J,                KC_K,       KC_L,       KC_SCLN,      KC_ENTER,
        KC_LSFT,        KC_SLASH,   KC_Z,       KC_X,          KC_C,                KC_V,       KC_B,       KC_N,                KC_M,       KC_COMM,    KC_DOT,       MT(MOD_LSFT, KC_QUOT),
        KC_MS_BTN3,     KC_LBRC,        KC_RBRC,   KC_LALT,       LT(_NUM, KC_SPC),    KC_LCTL,    KC_LWIN,    LT(_FN, KC_SPC),     KC_LEFT,    KC_DOWN,    KC_UP,        KC_RIGHT
    ),

    [_NUM] = LAYOUT_ortho_5x12(
        XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        UC(0x00A3), KC_PLUS, KC_MINS, KC_EQL,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_7,    KC_8,    KC_9,    _______,
        XXXXXXX,    XXXXXXX, XXXXXXX, KC_BSLS, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_4,    KC_5,    KC_6,    _______,
        _______,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_1,    KC_2,    KC_3,    _______,
        XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, KC_0,    KC_DOT,  XXXXXXX, XXXXXXX
    ),


    [_FN] = LAYOUT_ortho_5x12(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MPRV, KC_MNXT, KC_MPLY,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_VOLD, KC_VOLU, KC_MUTE,
        KC_SLEP, QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
    )

};
