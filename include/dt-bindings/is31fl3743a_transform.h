/*
 * Copyright (c) 2024 Kuba Birecki
 *
 * SPDX-License-Identifier: MIT
 */

/**
 * These macros allow to conveniently map a 1D array of led strip cells
 * to the correct register numbers on IS31FL3743a when using common anode
 * or common cathode RGB LEDs.
 *
 * Common anode: (Sink numbers are for R, G, B channels respectively)
 *
 * RGB(SW(n), CS(n), CS(n), CS(n))
 *
 * Common cathode: (SW numbers for R, G, B channels respectively)
 *
 * RGB(CS(n), SW(n), SW(n), SW(n))
 */
#define RGB(com, r, g, b) (com + r)(com + g)(com + b)

#define SW(n) ((n - 1) * 18)
#define CS(n) (n - 1)
