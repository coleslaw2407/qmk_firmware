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

#pragma once

#ifndef DIODE_DIRECTION
#    define DIODE_DIRECTION COL2ROW
#endif // DIODE_DIRECTION

#ifndef RGB_DI_PIN
#    define RGB_DI_PIN B7
#endif // RGB_DI_PIN

#ifndef RGBLED_NUM
#    define RGBLED_NUM 14
#endif // RGBLED_NUM

#ifndef RGBLIGHT_HUE_STEP
#    define RGBLIGHT_HUE_STEP 12
#endif // RGBLIGHT_HUE_STEP

#ifndef RGBLIGHT_SAT_STEP
#    define RGBLIGHT_SAT_STEP 25
#endif // RGBLIGHT_SAT_STEP

#ifndef RGBLIGHT_VAL_STEP
#    define RGBLIGHT_VAL_STEP 12
#endif // RGBLIGHT_VAL_STEP

#ifndef PRODUCT_ID
#    define PRODUCT_ID 0x5337
#endif // PRODUCT_ID

#ifndef VENDOR_ID
#    define VENDOR_ID 0xCDCD
#endif // VENDOR_ID

#ifndef PRODUCT
#    define PRODUCT "Boardwalk"
#endif // PRODUCT

#ifndef MANUFACTURER
#    define MANUFACTURER "shensmobile"
#endif // MANUFACTURER

#ifndef DEVICE_VER
#    define DEVICE_VER 0x0001
#endif // DEVICE_VER

#ifndef MATRIX_COLS
#    define MATRIX_COLS 14
#endif // MATRIX_COLS

#ifndef MATRIX_ROWS
#    define MATRIX_ROWS 5
#endif // MATRIX_ROWS

#ifndef MATRIX_COL_PINS
#    define MATRIX_COL_PINS { F7, C7, C6, B6, B5, B4, D7, D6, D4, D5, D3, D2, D1, D0 }
#endif // MATRIX_COL_PINS

#ifndef MATRIX_ROW_PINS
#    define MATRIX_ROW_PINS { F0, F1, F4, F5, F6 }
#endif // MATRIX_ROW_PINS
