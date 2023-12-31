// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

/*******************************************************************************
  88888888888 888      d8b                .d888 d8b 888               d8b
      888     888      Y8P               d88P"  Y8P 888               Y8P
      888     888                        888        888
      888     88888b.  888 .d8888b       888888 888 888  .d88b.       888 .d8888b
      888     888 "88b 888 88K           888    888 888 d8P  Y8b      888 88K
      888     888  888 888 "Y8888b.      888    888 888 88888888      888 "Y8888b.
      888     888  888 888      X88      888    888 888 Y8b.          888      X88
      888     888  888 888  88888P'      888    888 888  "Y8888       888  88888P'
                                                        888                 888
                                                        888                 888
                                                        888                 888
     .d88b.   .d88b.  88888b.   .d88b.  888d888 8888b.  888888 .d88b.   .d88888
    d88P"88b d8P  Y8b 888 "88b d8P  Y8b 888P"      "88b 888   d8P  Y8b d88" 888
    888  888 88888888 888  888 88888888 888    .d888888 888   88888888 888  888
    Y88b 888 Y8b.     888  888 Y8b.     888    888  888 Y88b. Y8b.     Y88b 888
     "Y88888  "Y8888  888  888  "Y8888  888    "Y888888  "Y888 "Y8888   "Y88888
         888
    Y8b d88P
     "Y88P"
*******************************************************************************/

#include QMK_KEYBOARD_H

#ifdef RGB_MATRIX_ENABLE
#include "rgb_matrix.h"
__attribute__ ((weak)) led_config_t g_led_config = {
  {
    { 2, 3, 8, 9, 12 },
    { 1, 4, 7, 10, 13 },
    { 0, 5, 6, 11, 14 },
    { 17, NO_LED, 15, 16, NO_LED },
    { 20, 21, 26, 27, 30 },
    { 19, 22, 25, 28, 31 },
    { 18, 23, 24, 29, 32 },
    { 33, NO_LED, 34, NO_LED, NO_LED },
  },
  { {0, 42}, {0, 21}, {0, 0}, {18, 0}, {18, 21}, {18, 42}, {36, 42}, {36, 21}, {36, 0}, {54, 0}, {54, 21}, {54, 42}, {72, 0}, {72, 21}, {72, 42}, {72, 64}, {90, 64}, {108, 64}, {224, 42}, {224, 21}, {224, 0}, {206, 0}, {206, 21}, {206, 42}, {188, 42}, {188, 21}, {188, 0}, {170, 0}, {170, 21}, {170, 42}, {152, 0}, {152, 21}, {152, 42}, {134, 64}, {152, 64}, {0, 0} },
  { 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1, 1, 1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4 },
};
#endif
