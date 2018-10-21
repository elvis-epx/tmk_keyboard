/*
Copyright 2011 Jun Wako <wakojun@gmail.com>
Copyright 2018 Elvis Pfutzenreuter <elvis.pfutzenreuter@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "stdint.h"
#include "ps2.h"
#include "led.h"
#include "hook.h"
#include "led_failure.h"

static uint8_t ps2_led = 0;

void led_set(uint8_t usb_led)
{
    if (usb_led & (1 << USB_LED_CAPS_LOCK)) {
        ps2_led |= (1 << PS2_LED_CAPS_LOCK);
    } else {
        ps2_led &= ~(1 << PS2_LED_CAPS_LOCK);
    }
    // Num Lock and Scroll Lock are tied to layers
    ps2_host_set_led(ps2_led);
}

void led_signal_failure()
{
    // all leds including apocryphal C/L lock
    ps2_host_set_led(0xff);
}

void hook_layer_change(uint32_t layer_state)
{
    // Caps Lock is set by normal led_set() flow
    if (layer_state & (1L << 1)) {
        ps2_led |= (1 << PS2_LED_NUM_LOCK);
    } else {
        ps2_led &= ~(1 << PS2_LED_NUM_LOCK);
    } 
    if (layer_state & (1L << 2)) {
        ps2_led |= (1 << PS2_LED_SCROLL_LOCK);
    } else {
        ps2_led &= ~(1 << PS2_LED_SCROLL_LOCK);
    }
    ps2_host_set_led(ps2_led);
}
