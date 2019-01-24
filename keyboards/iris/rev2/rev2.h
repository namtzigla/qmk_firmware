#pragma once

#include "iris.h"

//void promicro_bootloader_jmp(bool program);
#include "quantum.h"


#ifdef USE_I2C
#include <stddef.h>
#ifdef __AVR__
    #include <avr/io.h>
    #include <avr/interrupt.h>
#endif
#endif

#define ___ KC_NO 

//void promicro_bootloader_jmp(bool program);

#define LAYOUT( \
    L11, L12, L13, L14, L15,           R11, R12, R13, R14, R15, \
    L21, L22, L23, L24, L25,           R21, R22, R23, R24, R25, \
    L31, L32, L33, L34, L35,           R31, R32, R33, R34, R35, \
    L41, L42, L43, L44, L45,           R41, R42, R43, R44, R45, \
                   L54, L55,           R51, R52  \
    ) \
    { \
        { L11, L12, L13, L14, L15 }, \
        { L21, L22, L23, L24, L25 }, \
        { L31, L32, L33, L34, L35 }, \
        { L41, L42, L43, L44, L45 }, \
        { ___, ___, ___, L54, L55 }, \
        { R15, R14, R13, R12, R11 }, \
        { R25, R24, R23, R22, R21 }, \
        { R35, R34, R33, R32, R31 }, \
        { R45, R44, R43, R42, R41 }, \
        { ___, ___, ___, R52, R51 } \
    }
