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
#    define RGB_DI_PIN E6
#endif // RGB_DI_PIN

#ifndef SOFT_SERIAL_PIN
#    define SOFT_SERIAL_PIN D0
#endif // SOFT_SERIAL_PIN

#ifndef PRODUCT_ID
#    define PRODUCT_ID 0x7256
#endif // PRODUCT_ID

#ifndef VENDOR_ID
#    define VENDOR_ID 0xCB10
#endif // VENDOR_ID

#ifndef PRODUCT
#    define PRODUCT "Iris Rev. 7"
#endif // PRODUCT

#ifndef MANUFACTURER
#    define MANUFACTURER "Keebio"
#endif // MANUFACTURER

#ifndef DEVICE_VER
#    define DEVICE_VER 0x0700
#endif // DEVICE_VER

#ifndef MATRIX_COLS
#    define MATRIX_COLS 6
#endif // MATRIX_COLS

#ifndef MATRIX_ROWS
#    define MATRIX_ROWS 10
#endif // MATRIX_ROWS

#ifndef MATRIX_COL_PINS
#    define MATRIX_COL_PINS { F1, F4, B5, C7, D4, D6 }
#endif // MATRIX_COL_PINS

#ifndef MATRIX_ROW_PINS
#    define MATRIX_ROW_PINS { B1, F0, F5, B4, D7 }
#endif // MATRIX_ROW_PINS

#ifndef ENCODERS_PAD_A
#    define ENCODERS_PAD_A { B3, F6 }
#endif // ENCODERS_PAD_A

#ifndef ENCODERS_PAD_B
#    define ENCODERS_PAD_B { B2, F7 }
#endif // ENCODERS_PAD_B

#ifndef MATRIX_COL_PINS_RIGHT
#    define MATRIX_COL_PINS_RIGHT { D4, D6, D7, C7, F1, F4 }
#endif // MATRIX_COL_PINS_RIGHT

#ifndef MATRIX_ROW_PINS_RIGHT
#    define MATRIX_ROW_PINS_RIGHT { B1, F0, F5, B4, B5 }
#endif // MATRIX_ROW_PINS_RIGHT
