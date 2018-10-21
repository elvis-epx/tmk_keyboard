/*
 * SpaceFN layout
 * http://geekhack.org/index.php?topic=51069.0
 */
#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: default */
    KEYMAP_PRAVETZ16(
    F1, F2, ESC,    1,   2,   3,   4,   5,   6,   7,   8,   9,   0,MINS, EQL,BSLS,BSPC,         FN0,      FN1,
    F3, F4, TAB,    Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,LBRC,RBRC,             HOME,  UP,PGUP,PMNS,
    F5, F6, LCTL,   A,   S,   D,   F,   G,   H,   J,   K,   L,SCLN,QUOT, GRV,      ENT,   LEFT,  NO,RGHT,PPLS,
    F7, F8, LSFT,   Z,   X,   C,   V,   B,   N,   M,COMM, DOT,SLSH,               RSFT,    END,DOWN,PGDN,
    F9,F10, LALT,LGUI,              SPC,                                     RGUI, APP,         INS, DEL,PENT
    ),
    /* 1: Num Lock as toggling Fn */
    KEYMAP_PRAVETZ16(
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,    TRNS,     TRNS,
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,            P7, P8,  P9,TRNS,
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,       P4, P5,  P6,TRNS,
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,                 P1, P2,  P3,
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,                                                        P0,PDOT,TRNS
    ),
    /* 2: Scroll Lock as intermitent Fn */
    KEYMAP_PRAVETZ16(
     F11, F12,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,       TRNS,     TRNS,
    MSTP,MPLY,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,            TRNS,TRNS,TRNS,TRNS,
    MRWD,MFFD,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,       TRNS,TRNS,TRNS,TRNS,
    MPRV,MNXT,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,                 TRNS,TRNS,TRNS,
    VOLD,VOLU,TRNS,TRNS,TRNS,TRNS,TRNS,                                                         TRNS,TRNS,TRNS
    ),
};

const action_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_TOGGLE(1),
    [1] = ACTION_LAYER_MOMENTARY(2),
};

