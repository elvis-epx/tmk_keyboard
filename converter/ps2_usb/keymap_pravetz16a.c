/*
 * Pravetz 16 layout - Windows version (no Num Lock interference)
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
    F1, F2, ESC,    1,   2,   3,   4,   5,   6,   7,   8,   9,   0,MINS, EQL,BSLS,BSPC,        NLCK,     SLCK,
    F3, F4, TAB,    Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,LBRC,RBRC,               P7,  P8,  P9,PAST,
    F5, F6, LCTL,   A,   S,   D,   F,   G,   H,   J,   K,   L,SCLN,QUOT, GRV,      ENT,     P4,  P5,  P6,PMNS,
    F7, F8, LSFT,   Z,   X,   C,   V,   B,   N,   M,COMM, DOT,SLSH,               RSFT,     P1,  P2,  P3,
    F9,F10, LALT,LGUI,              SPC,                                     RGUI,CAPS,          P0,PDOT,PPLS
    ),
};

const action_t PROGMEM fn_actions[] = {
};

