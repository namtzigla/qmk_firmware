#pragma once

#include "lets_split.h"

//void promicro_bootloader_jmp(bool program);
#include "quantum.h"


#ifdef USE_I2C
#include <stddef.h>
#ifdef __AVR__
	#include <avr/io.h>
	#include <avr/interrupt.h>
#endif
#endif

//void promicro_bootloader_jmp(bool program);

#ifndef FLIP_HALF
// Standard Keymap
// (TRRS jack on the left half is to the right, TRRS jack on the right half is to the left)
#define LAYOUT( \
	L00, L01, L02, L03, L04, R00, R01, R02, R03, R04, \
	L10, L11, L12, L13, L14, R10, R11, R12, R13, R14, \
	L20, L21, L22, L23, L24, R20, R21, R22, R23, R24, \
	L30, L31, L32, L33, L34, R30, R31, R32, R33, R34 \
	) \
	{ \
		{ L00, L01, L02, L03, L04}, \
		{ L10, L11, L12, L13, L14}, \
		{ L20, L21, L22, L23, L24}, \
		{ L30, L31, L32, L33, L34}, \
		{ R04, R03, R02, R01, R00 }, \
		{ R14, R13, R12, R11, R10 }, \
		{ R24, R23, R22, R21, R20 }, \
		{ R34, R33, R32, R31, R30 } \
	}
#else
// Keymap with right side flipped
// (TRRS jack on both halves are to the right)
#define LAYOUT( \
	L00, L01, L02, L03, L04, R00, R01, R02, R03, R04, \
	L10, L11, L12, L13, L14, R10, R11, R12, R13, R14, \
	L20, L21, L22, L23, L24, R20, R21, R22, R23, R24, \
	L30, L31, L32, L33, L34, R30, R31, R32, R33, R34, \
	) \
	{ \
		{ L00, L01, L02, L03, L04}, \
		{ L10, L11, L12, L13, L14}, \
		{ L20, L21, L22, L23, L24}, \
		{ L30, L31, L32, L33, L34}, \
		{ R00, R01, R02, R03, R04}, \
		{ R10, R11, R12, R13, R14}, \
		{ R20, R21, R22, R23, R24}, \
		{ R30, R31, R32, R33, R34} \
	}
#endif

#define LAYOUT_ortho_4x12 LAYOUT
