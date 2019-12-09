/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

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

#pragma once

// place overrides here

// If you need more program area, try select and reduce rgblight modes to use.

// Selection of RGBLIGHT MODE to use.
#if defined(LED_ANIMATIONS)
   #define RGBLIGHT_EFFECT_BREATHING
   #define RGBLIGHT_EFFECT_RAINBOW_MOOD
   #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
   #define RGBLIGHT_EFFECT_SNAKE
   #define RGBLIGHT_EFFECT_KNIGHT
   #define RGBLIGHT_EFFECT_CHRISTMAS
   #define RGBLIGHT_EFFECT_STATIC_GRADIENT
   //#define RGBLIGHT_EFFECT_RGB_TEST
   //#define RGBLIGHT_EFFECT_ALTERNATING
#endif

#if defined(LED_LAYOUTs)
#define LED_LAYOUT( \
    L00, L01, L02, L03, L04, L05, \
    L06, L07, L08, L09, L10, L11, \
    L12, L13, L14, L15, L16, L17, \
    L18, L19, L20, L21, L22, L23, L24, \
    L25, L26, L27, L28, L29, L30, L31 ) \
  { \
    L05, L04, L03, L02, L01, L00, \
    L06, L07, L08, L09, L10, L11, \
    L17, L16, L15, L14, L13, L12, \
    L18, L19, L20, L21, L22, L23, L24, \
    L31, L30, L29, L28, L27, L26, L25  \
  }

#define RGBLIGHT_LED_MAP LED_LAYOUT( \
   0,  1,  2,  3,  4,  5,       \
   6,  7,  8,  9, 10, 11,       \
  12, 13, 14, 15, 16, 17,       \
  18, 19, 20, 21, 22, 23, 24,   \
  25, 26, 27, 28, 29, 30, 31 )
#endif
