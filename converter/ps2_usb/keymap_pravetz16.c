/*
 * Pravetz 16 layout
 * Elvis Pfutzenreuter <elvis.pfutzenreuter@gmail.com>
 */
#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: default
       Reuses C/L Shift as LGUI, C/L Lock as APP
       XT's (big +, -, *) in numeric block reused as (Enter, +, -) - more sensible IMHO
       Num Lock is implemented as Fn layer, since MacOS et al. don't Num Lock
       Scroll Lock is also reused as Fn key to make F11, F12, media keys
       Caps Lock works the usual way
       Lock leds are all functional: Num/Scroll controlled locally, Caps controlled by computer
     */
    KEYMAP_PRAVETZ16(
    F1, F2, ESC,    1,   2,   3,   4,   5,   6,   7,   8,   9,   0,MINS, EQL,BSLS,BSPC,         FN0,      FN1,
    F3, F4, TAB,    Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,LBRC,RBRC,             HOME,  UP,PGUP,PMNS,
    F5, F6, LCTL,   A,   S,   D,   F,   G,   H,   J,   K,   L,SCLN,QUOT, GRV,      ENT,   LEFT,  NO,RGHT,PPLS,
    F7, F8, LSFT,   Z,   X,   C,   V,   B,   N,   M,COMM, DOT,SLSH,               RSFT,    END,DOWN,PGDN,
    F9,F10, LALT,LGUI,              SPC,                                      APP,CAPS,         INS, DEL,PENT
    ),
    /* 1: Num Lock as toggling Fn, activates numeric block, leaves all others as they are */
    KEYMAP_PRAVETZ16(
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,    TRNS,     TRNS,
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,            P7, P8,  P9,TRNS,
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,       P4, P5,  P6,TRNS,
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,                 P1, P2,  P3,
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,                                                        P0,PDOT,TRNS
    ),
    /* 2: Scroll Lock as intermitent Fn, affects function keys only */
    KEYMAP_PRAVETZ16(
     F11, F12,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,       TRNS,     TRNS,
    MRWD,MFFD,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,            TRNS,TRNS,TRNS,TRNS,
    MSTP,MPLY,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,       TRNS,TRNS,TRNS,TRNS,
    MPRV,MNXT,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,                 TRNS,TRNS,TRNS,
    VOLD,VOLU,TRNS,TRNS,TRNS,TRNS,TRNS,                                                         TRNS,TRNS,TRNS
    ),
};

const action_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_TOGGLE(1),
    [1] = ACTION_LAYER_MOMENTARY(2),
};

