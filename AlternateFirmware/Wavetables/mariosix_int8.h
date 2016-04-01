#ifndef MARIOSIX_H_
#define MARIOSIX_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define MARIOSIX_NUM_CELLS 8627
#define MARIOSIX_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) MARIOSIX_DATA [] = {-1,
-1, -1, -1, -2, -1, -2, 0, -2, -1, -1, 0, -2, 0, -1, 0, -1, 0, -1, -1, -1, -1,
-1, -2, 0, -3, 1, 1, 12, -21, 0, 8, -8, 1, 2, -8, -5, 16, 0, -12, -25, 12, 10,
-10, -3, -9, 17, 9, -15, -20, -6, 35, -7, -18, -12, 17, 8, -39, 7, 10, -7, 6,
-1, -13, 7, 7, 8, -18, -11, 13, 3, -4, -14, -4, 6, -11, -7, 11, 4, 2, -2, -5, 5,
2, -4, 8, -4, -8, 0, -3, -10, 5, 10, -1, -7, -1, 15, -6, -9, 7, 5, 6, -9, -6,
10, -4, 1, -3, -9, 9, 7, 0, 2, -5, 2, 12, -4, -8, 7, 8, -7, -12, -1, 1, 3, 4,
-2, 1, 3, 3, 3, 0, -1, 9, 3, -12, -2, 2, -1, 0, -2, 0, 6, -1, -2, 5, 0, -2, 1,
3, 2, -1, -1, -3, -2, 0, 0, -1, -1, 3, 4, -3, -3, 5, 5, 0, 0, -3, -2, 0, -4, -4,
2, 0, 0, -1, -3, 4, 5, 1, -1, -1, 2, 2, -2, -4, -2, 0, -2, 0, 0, 0, 2, 1, -2, 0,
2, 2, 1, -1, -2, 0, 0, -3, -2, 1, 1, -1, -1, 1, 2, 1, 1, 3, 1, -3, -3, 1, -1,
-2, -1, -3, -1, 2, 0, 0, 0, 2, 2, 0, 0, 1, -1, -2, -2, -2, -1, 1, 1, -1, -1, 0,
1, 2, 1, 0, 0, 0, -1, -1, -1, 0, -1, -1, -2, -3, 0, 1, 0, 0, 1, 1, 0, 0, -1, 1,
-2, -3, -1, -1, -1, -1, -1, -1, 0, 0, 1, 1, 0, -1, -2, -2, -2, -2, -2, -2, -1,
-1, -2, -1, -1, 1, 0, -1, -1, -1, 0, -1, -3, -3, -1, 0, -3, -3, -1, 0, -1, -3,
0, 1, 1, 0, -2, -2, -1, -2, -2, -3, -1, -2, -1, -1, -1, 0, 0, 0, -2, -1, -2, 0,
-1, -3, -2, -1, -3, -3, 0, -2, 0, 0, -2, 0, 0, 1, -1, -1, -1, -1, -2, -1, -1,
-2, -1, -2, 0, -1, 0, 1, -2, 0, 1, -2, -1, 0, -1, -1, -2, -2, -1, -1, -1, 0, -1,
-1, 0, 0, -2, 0, 0, -1, -1, -2, -3, -2, 1, -2, -3, -1, 0, 1, -1, 0, 0, 0, -1,
-2, -1, -1, -1, -1, -3, -1, -1, -2, 0, -1, -1, 0, 1, -1, 0, -1, 0, -1, -2, -2,
-1, -1, -3, 0, -1, -1, 0, -1, -1, 0, -1, 0, 0, -1, -1, -3, -1, -2, -2, 0, -3, 0,
0, -2, 2, -1, -1, 2, -2, -1, 0, -2, -1, -1, -2, -2, -1, 0, -2, -1, 0, 0, 0, -1,
-2, 0, 0, -3, -2, -1, -4, 1, -1, -3, 0, -1, 0, 1, -2, 1, 1, -2, -2, 0, -1, -2,
-2, -2, -2, -1, -1, -1, 0, -1, -1, 1, 0, -2, 0, -1, -1, -1, -2, -2, -1, -2, -1,
-1, -1, -1, 2, -2, 1, 0, -2, 0, -2, -1, -3, 0, -2, -2, 0, -2, -1, 1, -2, 0, 1,
-3, 2, 0, -3, 1, -3, -3, -1, -2, -1, 0, -1, -1, -2, -1, 1, -2, 1, -3, -2, 0, -3,
-1, -2, -3, 0, -1, -4, 4, 0, -6, 3, -4, 2, -1, -3, -3, -1, 1, -4, -4, -2, 7, 1,
-17, -1, 13, -19, 8, 4, -8, -6, 29, -5, -51, 23, 5, -4, -8, -10, 19, -13, -3,
39, -48, -37, 75, -36, 8, -25, -6, 79, -101, 40, -18, -11, 29, -16, -13, -16,
43, -25, -13, -11, 17, 0, 13, -34, 6, 0, 14, -9, -24, 24, -32, 33, -15, -13, 11,
-22, 11, 17, -25, 17, 12, -24, -2, 0, 6, -4, -8, 8, -16, 1, -5, 0, 14, -4, 4,
-9, 10, -8, -3, -1, -9, 12, 1, -19, 15, -8, -3, 18, -32, 14, 12, -8, 4, -7, -2,
4, 3, -7, -4, 7, 3, -13, -5, -1, 2, 18, -8, -4, 7, 1, 1, -2, -5, 3, 7, -11, -4,
-3, -3, 8, 5, -5, 1, 7, -5, 0, -1, -1, 0, -2, 2, 1, -1, -6, 2, 0, -3, 4, 0, -6,
8, 2, -7, 1, 2, 2, -1, 0, -8, 2, 2, -10, 6, 3, 0, 8, -8, 1, 6, -2, 4, -5, -4, 5,
0, -5, -4, 4, 1, 1, 2, -1, 2, 3, -3, -3, 2, 2, -1, 1, -3, -3, 6, -2, -1, 0, 0,
5, -1, -2, 2, 1, 0, 2, 3, -2, -3, -1, -2, 3, -2, 0, 2, 0, 3, 1, -1, 0, 2, 1, 0,
-2, -1, -2, 1, -3, 0, 5, 1, 1, -1, 1, 0, 1, 2, -1, 0, 0, 0, 0, -2, 1, 1, 0, 0,
-1, -1, 1, 1, 3, 0, 2, 2, -1, 1, -3, 1, -1, -1, 2, 0, 2, 1, -1, 2, -1, 1, 4, 0,
-1, -4, 0, 1, -2, 3, -1, 0, 2, 2, 1, -3, 2, 3, 0, -3, 1, 2, -2, -1, 0, -2, 3, 2,
-2, 2, -5, 7, 0, -2, 5, -1, 4, 0, -4, 1, -1, 1, 0, -1, 2, -2, 3, 0, -1, 4, 1,
-2, 0, -1, -1, 0, 2, -3, -1, 4, -5, 3, 0, -1, 5, -1, 0, 1, -1, 1, 0, -3, 0, -1,
1, -1, -2, 3, -3, -1, 2, -2, 2, 3, -3, 0, 2, -3, -1, -1, 2, 0, -4, 0, 2, 0, -2,
2, 0, -2, 3, -1, -3, -3, 3, -3, -1, -1, -3, 2, 0, -3, 0, -1, 1, 1, -5, -1, -1,
4, -6, 0, -4, 3, -2, 3, -11, 5, 1, 8, -12, -12, 20, -20, 9, -8, 37, -35, -24,
32, -19, 2, -3, -4, -11, 5, 22, 11, -80, 20, 59, -56, 33, -69, 80, 15, -88, 73,
-71, 28, 22, -17, -35, 36, 5, -42, -7, 13, 12, -4, -1, -25, 23, -8, 31, -51, 19,
-4, -15, 47, -47, -3, 12, -26, 13, -6, -4, 42, -27, -12, 4, 7, 1, -14, 10, 1,
-15, -2, -11, -1, 7, 4, -2, 1, 1, -5, -2, 1, -1, 13, -13, -12, 18, -22, 17, -11,
-20, 18, -1, 3, 1, -3, -2, 4, 7, -12, 0, 16, -5, -21, -1, 1, -3, 12, -9, 8, 2,
-6, 4, -1, -2, 12, -1, -10, -3, -6, 0, 3, -2, -6, 12, -4, -4, 6, -4, 2, 0, -3,
5, 3, -7, -5, 1, -1, -3, 4, -5, -1, 12, -4, -6, 7, 2, -1, 5, -3, -5, 0, -6, -5,
3, 0, 0, 0, -6, 5, 4, 1, 0, -4, 2, 5, -2, -7, -2, 0, -3, -1, 2, 0, 1, 1, -3, -1,
3, 0, -1, 2, -4, 1, -2, -5, 0, -1, 3, 0, -2, -1, 2, 0, 1, 5, 1, -2, -3, -1, -1,
-3, -3, -2, -2, 3, 1, -1, -2, 0, 3, 2, -1, 0, 1, -2, -2, -5, -1, 2, 0, -1, -1,
0, -2, 2, -1, 0, 3, 0, -1, -6, -1, 1, -1, 1, -2, -3, 0, 0, 1, 1, -2, 4, 1, 0, 1,
0, -1, -4, -1, -1, 1, 0, -2, 0, 0, 0, 1, 1, 2, 0, -3, 0, -2, -1, 0, -2, 4, -3,
0, 0, -2, 5, 1, 0, 0, 2, 0, 2, -3, -2, -1, 0, -1, -2, 0, 2, 2, -4, 1, 3, 3, 3,
-1, -1, 0, 0, -1, -2, 3, 1, -2, -1, -1, 1, 4, 0, 1, 2, -2, 0, 1, 0, -3, 3, -1,
-4, 2, -2, 2, 0, -2, 3, 2, 1, 0, 0, -1, 0, -3, 1, 0, -3, 3, -4, 0, 1, -2, 4, -1,
-2, 4, -1, -2, 1, -1, 1, -1, -2, 0, -3, -1, 1, 1, -2, 1, -1, 0, 0, -1, -1, -1,
-2, 0, -3, 2, -1, -3, 2, -4, 2, 2, -1, -1, 4, -6, 5, 0, -8, -4, 9, -18, 6, -6,
10, 11, -25, 4, -5, 8, -10, 10, -27, 26, -8, 0, 7, -55, 57, -22, -17, 3, -20,
81, -62, -6, 7, -26, 50, -25, -10, -15, 38, -11, -32, 9, 16, -20, 9, -5, 5, -16,
8, 17, -44, 23, -10, 19, -6, -29, 12, 13, -30, 18, -10, 6, 17, -18, -1, -5, 4,
-14, 13, 1, -13, -2, -1, -9, 9, 5, -5, -2, 3, 5, -14, -1, 1, -5, 15, -21, 13, 3,
-23, 21, -15, -6, 13, 1, -5, 0, -2, -1, 8, -13, -5, 12, 8, -11, -16, 10, -5, 8,
2, -2, 5, -6, 2, 4, -11, -1, 14, -10, -6, 4, -3, -1, 4, -6, 7, 8, -1, -6, -1, 0,
1, 1, -2, 3, -2, -1, -4, 4, -4, -2, 4, -1, 3, 5, -8, -3, 7, -2, 2, 2, -4, -2, 1,
-3, -1, 2, -1, 5, -2, -3, 6, -3, 1, -4, -1, 7, -4, -2, -4, -1, 6, -2, -1, 6, -2,
2, 3, -6, -1, 3, -1, 2, -2, -3, 3, -4, 0, 0, 1, 4, -3, 0, 1, 0, 2, 2, -2, 0, -1,
-1, 1, -6, 1, 2, -1, 2, 2, 0, -1, 0, 0, 2, -2, -1, 1, 0, -2, -3, 1, 0, 1, 3, 0,
-1, 1, 0, 0, 0, 0, 2, -1, -5, 0, 1, -1, 2, 0, -1, 0, 2, -1, 0, 0, 3, 1, -2, 0,
-2, 2, -4, -2, 3, -1, 2, 2, -3, 3, 1, -2, 2, -1, 3, -1, -6, 2, -2, 0, 0, 1, 3,
-3, 3, -2, -1, 4, 1, -2, -2, 4, 1, -4, -1, -2, 4, 1, -4, 3, -2, 4, 3, -6, 3, 4,
-3, 4, -5, -1, 3, -4, 2, -2, 2, 2, -1, -2, 0, 2, 4, -1, -1, -2, -1, 1, -1, -3,
-1, 4, -4, 2, 1, -4, 4, -1, 0, 2, 0, 1, -2, -3, 0, -1, -2, 3, -3, 0, 2, -2, 2,
-2, 2, 1, -2, 2, 0, -3, -2, -1, 0, 1, -2, 0, 0, -1, 2, -2, -1, 1, 2, -3, -1, -3,
0, -1, -2, 1, -4, 4, -2, -2, -1, 3, -1, 0, -1, -1, 1, 0, -3, -2, -2, 1, -1, -1,
-1, 1, 1, -4, 3, -2, -1, 1, 1, -5, -1, 1, 4, -4, -11, 3, 7, -17, 10, -4, 2, -17,
35, 6, -50, 15, 10, 0, -27, 20, -10, 5, -26, 43, -21, -53, 76, -32, -22, -7, 31,
32, -71, 25, -3, -14, 23, -17, 1, -13, 40, -22, -26, 1, 25, -10, -9, 5, -7, -8,
20, -8, -30, 33, -17, 13, -8, -10, 10, -10, -5, 4, -12, 21, 8, -18, -20, 21, 4,
-20, 15, 2, -6, -10, 9, -13, 9, 1, -4, -1, -1, 4, -16, 6, 0, 0, 11, -9, 8, -8,
-4, 8, -11, -2, 7, -1, -11, 9, -2, -4, 9, -10, -2, 19, 2, -16, -8, 8, -5, 8, -7,
0, 7, -6, 3, -6, -2, 4, 10, -7, -7, 4, 1, -2, 4, -7, 1, 10, -5, -10, 1, 3, 0,
-1, 1, 4, -1, 0, -3, 0, -2, 0, 0, -5, 5, 5, -11, -1, 9, -3, 3, 6, -6, -1, -1,
-3, 0, -3, 2, 3, -6, -3, 3, 0, 1, -6, 4, 5, -2, -1, -1, 3, -1, -1, -1, 4, -2, 0,
-2, -9, 5, 3, -1, 1, -2, 2, 2, -5, -1, 0, 1, 3, -6, -2, 3, -1, 1, 2, 1, 1, 1,
-1, -2, -3, 2, 1, -6, 1, 0, -1, 0, -3, -2, 3, 0, 1, 0, -1, 3, -4, -1, 3, 2, -2,
0, -1, -3, -1, 3, 0, -3, 4, 0, -1, -1, 0, 1, -1, -1, 0, 0, -3, 1, 2, -1, 4, -1,
0, 4, -2, 2, 1, -5, 3, 0, -3, 3, -4, 3, -2, -3, 7, -3, 5, -2, -3, 3, -3, 6, 0,
-3, 3, -2, -3, 1, 1, -2, 3, -1, 1, 2, 1, 0, -1, 0, 1, 2, -6, 1, 0, 2, -3, -1, 3,
0, 3, 0, -2, 3, 0, -3, 5, -4, 2, 1, -4, -4, 2, 4, -2, 0, 1, -1, -1, 1, 4, -2,
-2, 6, -5, -3, 2, -1, -1, 0, 0, -1, 1, 3, -1, -3, 3, 2, -3, 0, 1, 0, -3, -4, 2,
0, -2, 4, -4, 0, 3, -3, -2, 1, 2, -2, -1, -3, 0, -3, 2, 0, -3, 0, 3, -1, -4, 1,
0, -1, -2, 0, -2, -2, 0, -3, -5, 3, -1, -2, -1, -1, 0, -1, -1, 3, -6, 4, -1, -2,
-5, 0, 2, -7, 3, -3, -2, -1, 1, -9, 3, -2, 1, -1, 4, -3, -11, 7, -4, -13, 12,
-4, -5, -3, 12, -12, -6, 8, 2, 18, -41, 21, -3, -23, 17, 0, -30, 22, -19, 12,
16, -68, 51, -10, -42, 29, -11, 48, -27, -38, 34, -29, 26, -7, -23, -15, 39,
-13, -32, -7, 18, 4, -23, 21, -16, -9, 28, 15, -42, 17, -8, 6, 13, -44, 14, 11,
-23, 7, -13, 17, 21, -6, -23, 6, 7, -11, 13, -8, -5, -22, 15, -8, -3, 11, -7, 7,
-6, 6, 0, -3, 2, 2, 8, -22, 9, 4, -21, 9, -2, -16, 5, 10, -12, 13, 3, -5, 12,
-4, -13, 13, 10, -17, -17, 6, -8, 9, 9, -10, 9, -3, 2, 9, -3, -4, 13, -7, -8,
-1, -2, -1, 2, -1, -6, 10, 1, -5, 5, 2, -2, 4, 4, -6, 0, 3, -7, 1, -9, -3, 8,
-6, 3, 10, -7, 2, 6, 4, 3, -3, 0, -9, -2, -3, -5, 4, -1, 0, 4, -5, 4, 7, 2, -1,
2, 0, -3, 2, -9, 3, 3, -7, -1, 4, -1, 0, 4, -3, 0, 5, 4, -1, 0, -2, -2, -2, -3,
-2, 0, 4, -2, -3, 4, 2, 3, 3, 2, 4, -5, -3, 0, -5, -4, 2, -3, -1, 1, 0, 2, 2, 4,
0, 0, 3, 0, -4, 1, -4, -3, 1, 0, 2, -2, 0, 1, -1, 4, 2, 0, 2, 0, -2, -2, 1, -1,
-2, 1, 0, -4, 1, 3, 0, 1, 6, 1, 0, 3, -4, -1, -1, -3, -3, -5, 2, 5, -6, 1, 4,
-2, 4, 2, 4, -2, -4, 2, -5, 2, 1, -4, 3, -3, -1, -1, 2, 3, 0, -1, 3, 4, -4, 1,
0, -3, 1, -1, -5, 1, -1, 3, 0, -2, 6, -1, 4, 4, -3, -3, 4, -3, -5, 1, 2, -1, -3,
-2, 2, 4, 2, 2, -3, 2, 1, -2, 2, -2, -2, 1, -2, -2, 0, 0, 2, -2, -2, 4, 0, -1,
2, 0, -3, 0, 0, -3, -4, 0, 2, -4, 0, 0, -2, 7, -1, -1, 3, -4, 1, -1, 0, -1, -5,
-1, 2, -4, 1, 2, 0, 0, 2, 2, -3, 0, 1, -3, -4, 4, -4, -4, 2, -1, -2, 1, 1, -3,
0, 3, 1, -2, -1, 1, -3, -2, 2, -3, -4, -2, 1, -2, -1, 2, 1, -3, 2, 1, -2, -1,
-2, -1, -2, -2, -2, -3, 0, 2, -1, -3, 1, 2, -4, 2, -1, 0, -1, -5, -1, 1, -1, -2,
-5, -1, 2, -3, 0, -3, 0, 2, -5, 2, 0, -2, -1, -3, -4, -2, 3, -3, -2, 1, -1, -2,
1, -2, -1, 3, -1, -4, -3, -3, 1, -5, 1, -2, 4, -6, 1, 2, -3, 2, -2, 0, -7, 4,
-7, 8, -3, 5, -17, 9, 0, -14, 5, 12, -19, 9, 32, -41, -4, 11, -11, 6, -25, 4,
35, -66, 60, -5, -68, 53, -12, -32, 17, -15, 65, -40, -47, 40, -28, 26, -14,
-16, -2, 35, -21, -17, -11, 27, -18, -2, 22, -32, -12, 36, 4, -60, 26, 5, 17,
-11, -30, 30, -8, -33, 34, -14, 2, 31, -17, -20, -2, -3, 7, 0, -1, -8, -12, 13,
-13, 3, 2, 12, -6, 3, 8, -18, -1, -1, 1, 5, -19, 21, -2, -25, 30, -15, -14, 24,
-1, -9, 8, -9, 0, 4, -15, 3, 19, 1, -13, -9, 2, -3, 10, 8, -4, 5, 2, -2, 3, -9,
-3, 16, -8, -12, 8, 0, -6, 7, -1, 3, 11, -1, -2, 0, -3, 1, -4, 0, 5, -1, -2, -1,
2, -3, 0, 8, -1, 3, 7, -14, -4, 10, -1, -4, 9, -7, -7, 9, -8, -3, 5, 3, 5, -4,
0, 7, -2, -1, 0, -1, -1, 3, -1, -9, 4, 7, -7, 1, 9, -1, 3, 1, -9, 2, 5, -2, 0,
-1, -1, 3, -4, -2, 2, 2, 7, -2, -2, 1, -1, 1, 0, 1, 1, -3, 0, -2, -4, 2, 3, -3,
0, 6, -3, 2, 1, -4, 2, -3, 1, 2, -8, 2, -1, -6, 6, 5, 2, 0, 1, 1, -3, -1, 2, -1,
0, 1, -3, -1, -1, 0, 3, 0, 3, 1, -2, 1, 1, 1, 1, 0, -1, 1, -1, 1, -2, -3, 3, -1,
0, 4, -1, 0, -1, -1, 3, 0, 0, -2, -4, -1, 0, -1, 2, 0, 2, 3, 0, -1, 2, 1, 0, -3,
-1, 3, -3, -1, 0, -1, 2, -1, -1, 3, 0, 3, -1, -2, 3, -2, 2, 2, -5, 2, 1, -2, 1,
-1, 4, 1, -2, 0, 1, 2, 3, -2, -3, 2, -2, -3, 2, 0, -2, 2, 2, 0, 0, 3, 1, -1, 1,
0, 0, 0, -2, -1, -1, -1, 1, 1, -2, 2, 1, -2, 3, 0, -1, 5, -3, -2, 1, -1, 1, -2,
2, 1, -4, 2, 1, -2, 3, 0, 0, 0, 0, 1, -4, -2, 2, -2, -2, 4, -3, 1, 2, -1, 1, -1,
-1, 2, -1, -2, 0, -3, -2, -2, -1, 0, 1, 0, -2, -2, 1, 1, -2, 2, -1, -2, 1, -4,
-1, -1, -3, 2, -2, -4, 2, -1, -2, 3, -3, -2, 3, -1, -2, -4, -1, 1, -5, -3, 1, 0,
1, -2, -1, -2, 3, -3, 1, -7, 4, -1, -7, 1, -2, 2, -1, -5, -3, 2, -1, 1, -6, 7,
2, 2, -19, 14, -13, -1, 3, -9, 23, -29, 9, 0, -18, 9, 0, -32, 25, -9, 10, 11,
-58, 44, -20, -33, 38, -35, 60, -32, -25, 28, -56, 63, -24, -9, 6, -7, 11, -35,
8, 22, -44, 18, 14, -18, -8, 11, 16, -49, 21, 2, 9, 10, -28, 6, 10, -36, 6, 8,
-2, 24, -20, -19, 21, -14, -8, 29, -4, -8, -5, 2, -16, -3, 9, 7, -11, 1, 13,
-13, 6, 1, -12, 24, -16, 11, 11, -41, 30, -8, -26, 25, -1, -6, 15, -10, -8, 13,
-9, 2, 21, 0, -5, -11, 2, -7, 1, 5, -3, 6, -8, -1, 3, 6, -7, 14, 7, -13, 11, -2,
-12, 8, -5, -10, 19, -8, -8, 20, -17, 2, 10, -7, 11, -5, 3, 5, -10, -3, -2, 6,
2, 1, 3, -7, 0, 3, 3, 3, 7, 2, -5, 0, -1, -9, 9, -5, -6, 9, -8, 4, -2, -1, 6, 0,
5, 6, -3, -1, 2, -2, -4, -2, 5, 0, -3, 3, -6, -2, 7, -1, 4, 3, -4, 1, -4, -3, 2,
0, 4, -3, -5, 3, -1, 1, 2, 1, 5, 1, 0, 2, -4, -2, 2, -4, -1, 1, -3, 0, -3, -2,
3, 3, 3, 3, -1, 1, 0, -5, 2, 2, -1, 0, -3, -2, -1, -1, 3, 1, 2, 1, -2, -1, 0, 0,
-2, 1, -2, -2, 1, -1, -1, 1, 2, 2, 2, 2, 0, 0, 1, -3, 2, 0, -3, 4, -4, -4, 2,
-1, 2, 3, 4, 2, -3, 0, 2, 0, 0, -1, 1, -2, -3, 2, 0, 0, 1, -1, 2, 4, -1, 0, 3,
-3, -1, 4, -4, 1, -2, 0, 0, -5, 4, 1, 0, 6, -3, 0, 1, -2, 4, -4, 0, 1, -5, -3,
1, -1, 3, 3, -4, 3, 2, 0, 2, 1, -1, 0, -3, 0, 1, -5, 1, -1, -1, 3, 0, 2, -1, -1,
3, -1, 0, 3, -2, -1, 0, -3, 0, -1, -2, 3, 0, 0, 1, -1, 1, 2, 0, 2, -2, -4, 0,
-4, 2, -3, -1, 3, -2, 1, 0, 0, 1, 0, -2, 2, -1, -4, 1, -3, -3, 0, -2, 0, 0, 0,
0, 0, -2, 1, 1, -3, 2, -1, -2, -3, -3, 1, -2, 1, -2, -1, 0, -1, -2, 2, -2, 0, 1,
-4, 0, -3, -2, -1, -1, -4, 1, -1, 0, 2, 0, -2, 1, -4, 2, -2, -1, -3, -1, 1, 1,
-4, -10, 10, 0, -13, 4, 9, -18, 6, 11, -12, -17, 43, -16, -41, 27, 2, -15, -9,
-1, 10, -10, -15, 54, -61, -11, 52, -62, 19, -12, 26, 30, -86, 51, -43, 13, 45,
-51, 19, -21, 18, -17, -22, 27, -19, -17, 37, -21, -33, 18, 39, -43, -12, 31,
-15, 8, -6, -14, 10, -28, -5, 33, -31, 28, 9, -31, -2, 10, -10, 7, 10, -5, -21,
-2, 3, -17, 20, 5, -8, -8, 18, -15, -6, 13, -15, 19, -3, -15, 24, -31, 10, 21,
-40, 9, 14, -15, 10, 7, -18, 12, 3, -5, 8, 13, -5, -20, 1, -3, -10, 22, 2, -10,
7, -3, -1, 8, -5, 2, 16, -17, -1, 12, -16, 1, 13, -12, 8, 8, -12, 6, 4, -6, 6,
-1, -2, 7, 3, -2, -4, -2, -2, 5, 3, -2, 6, -2, -11, 6, 12, -2, 7, 7, -14, 0, 5,
-10, 5, -1, -3, 9, -6, 0, 7, -2, 1, 5, 1, -3, 5, -3, -3, 4, -2, -1, 4, 2, -2, 4,
-1, -5, 4, 2, 2, 6, -4, -1, 2, -6, 3, 3, 0, 1, -3, 0, 0, 3, 5, -1, 5, 4, -4, 1,
-2, -4, 1, -1, -1, 1, -1, 3, 0, -1, 2, 1, 0, 2, 0, -2, 1, -5, 1, 2, 0, 2, -2,
-1, 1, -2, 1, 3, 0, 0, -1, 0, 0, 0, 1, 1, -3, 0, 0, -2, -1, 1, 3, 1, 1, 2, 0,
-1, 3, -4, -2, 1, -4, 2, 0, -3, 2, 0, -1, 4, 2, 1, -3, -2, 1, -2, 2, -1, -3, 2,
-3, 0, 2, -2, 0, 0, -1, 2, -2, 1, 0, -1, -1, 0, -1, -2, 1, -2, 0, -2, 1, 1, 0,
4, -2, -2, 2, -1, 0, -1, -2, -1, -4, 0, -1, 1, 3, 2, -2, -1, -1, 1, 1, 2, -4,
-1, 2, -3, 0, -1, 1, -2, -1, 2, -1, -1, 2, 0, -2, -1, 1, 1, -2, 0, 1, -4, -1, 3,
-4, 2, 2, -2, 0, 0, 0, 0, 1, 2, -3, -4, 2, -4, 1, 3, -2, 1, -2, 4, -1, -6, 5, 1,
-6, 1, 1, -4, 2, 0, -1, -1, -2, 3, -2, 0, 0, -2, 0, -3, 1, 1, 0, 0, -2, -5, 1,
2, -3, 4, -2, -3, 1, -1, -2, 1, 2, -4, 1, -4, 0, -1, -3, 1, -1, 0, -1, 2, -1,
-2, 1, -1, -1, -4, 1, 0, 0, -3, -4, 0, -2, -2, 0, 2, -4, 2, -3, -2, 2, -1, 0, 0,
-7, 1, -3, 0, 0, -1, -2, 0, 2, -2, 6, -5, -5, 7, -5, -11, 9, -11, -3, -7, 33,
-23, -21, 24, -9, -16, -4, 12, -18, 4, -5, 46, -51, -27, 49, -65, 28, -14, 25,
34, -67, 51, -74, 50, 3, -46, 45, -43, 52, -45, -17, 22, -26, -5, 26, -23, -13,
19, 19, -32, -13, 26, -19, 21, -3, -24, 14, -30, -11, 20, -31, 41, 3, -24, 3,
11, -10, -7, 16, -4, -15, 5, -7, -25, 28, -2, -16, 4, 18, -14, -3, 9, -16, 20,
-4, -4, 22, -31, 15, 15, -46, 12, 10, -12, 15, 3, -12, 6, 8, -8, 7, 18, 3, -19,
-2, -3, -15, 15, -3, -2, 9, 0, 0, 5, -3, 4, 16, -18, 4, 11, -21, 8, 4, -14, 12,
5, -11, 7, 1, -6, 5, -2, 6, 7, 6, -1, -6, -3, -2, 0, -2, -3, 10, 2, -14, 9, 6,
0, 10, 8, -11, 5, 2, -16, 5, -4, -5, 13, -6, -1, 7, -3, 5, 3, 1, 4, 3, -3, -2,
-3, 1, -2, 4, 3, 0, 2, -5, -1, 2, 5, 2, 5, -1, 2, 2, -6, 0, -1, 1, -2, -2, 1,
-1, 5, 0, 3, 7, 2, 0, 0, -1, -4, -2, -3, -1, 1, 0, 1, -1, -1, 2, 4, 3, 1, 2, -1,
-2, -3, -1, 2, 1, 0, 0, -2, -1, 1, -2, 1, 2, 2, 2, -1, 0, 1, -1, -1, -4, 0, -1,
-3, -2, 0, 3, 0, 5, 4, -1, 3, -2, -5, 0, -2, 0, 0, -2, -2, -1, 1, 2, 2, 3, 3,
-2, -2, -1, -1, 1, 0, 0, -1, -3, 2, -3, -2, 3, 0, -1, 2, 3, 2, -3, 2, -1, -4, 1,
-1, -2, -3, 0, -4, 0, 2, 4, 4, 1, -2, 1, -1, -2, -2, 0, -1, -4, -3, -1, 1, -1,
3, 1, 0, -2, 1, 4, -3, -1, 3, -2, -3, 0, 1, -1, -3, 2, 0, -2, 3, 2, 1, -1, 0, 1,
0, -1, -3, 1, -4, -2, 1, -3, 4, -1, 2, 2, -2, 2, -2, 1, 1, -2, -2, -1, -6, 2,
-1, -2, 4, -3, 3, -1, -1, 2, 2, -3, -2, 1, -4, 0, 0, -3, -2, -2, 2, 0, 0, -1, 3,
0, -3, 2, -1, 2, -2, 0, -5, -1, -2, -3, 4, -2, 2, 1, 1, -3, -2, 3, -3, 0, -3, 0,
-2, -2, -3, -1, 2, -4, 5, -4, 2, 0, -3, 2, -4, 0, -3, -2, 0, -5, 0, 0, -4, 0, 3,
-5, 4, -5, 1, -1, 0, -1, 0, -3, -4, -1, -6, 0, -2, 1, -6, 8, -7, 8, -7, 7, -9,
18, -16, 8, 18, -51, 14, 11, -21, -22, 8, 8, 2, -34, 62, -27, -77, 65, -7, -21,
-13, 38, 59, -112, 22, -7, 5, 7, -21, 30, -72, 70, -34, -27, 24, -5, -16, 29,
-11, -31, 18, 13, -18, -28, 34, -23, 24, -16, -30, 29, -45, -4, 44, -31, 22, 25,
-24, -32, 33, 1, -34, 27, -5, -24, -8, -3, -5, 18, 10, -7, 4, 11, -17, 1, -6,
-9, 23, -9, -19, 34, -31, -12, 52, -44, -11, 41, -13, -5, 16, -13, -6, 17, -4,
-2, 11, 5, -22, -18, 14, -11, 22, 6, -4, 15, -10, 0, 14, -8, -3, 22, -23, -6,
13, -24, 7, 23, -14, 9, 14, -8, 3, 0, -8, 10, -6, 0, 14, -6, -2, 1, -1, -5, 7,
7, -2, 8, 0, -15, 5, 18, -4, 6, 8, -21, 5, -4, -16, 16, -1, -2, 17, -7, -5, 15,
-2, -1, 9, -3, -8, 6, -4, -10, 7, -3, 0, 11, 1, 0, 5, -1, -8, 6, 1, 2, 9, -11,
0, 3, -8, 3, 3, 4, -2, -1, 1, -1, 3, 3, 8, -1, 5, -2, -6, -2, -5, 2, -1, 2, -2,
-1, 8, 1, 0, 4, 2, 2, -2, 0, -3, -8, 0, 0, 2, 6, 1, 1, 0, -2, 1, 3, 0, 0, 0, -3,
-1, -2, -1, 3, -1, -1, 1, -2, -1, -1, 3, 5, -2, 2, 4, -4, 0, 2, -7, -2, 1, -3,
0, 1, -1, 5, 0, 1, 7, -1, -1, -2, -6, -1, -1, 0, 1, -1, 2, -1, 3, -1, -2, 6, 0,
-2, -1, 1, -3, -4, 3, -2, 1, -2, -1, 0, -7, 4, 0, 0, 4, 2, 3, -2, -2, 0, -2, 2,
-5, -1, 2, -6, -1, 2, 4, 3, 3, -1, 1, -4, -3, 5, -2, -8, 4, 4, -10, 3, 3, -4, 3,
1, 0, 1, 1, -3, 2, -1, -5, 3, 1, -3, 0, 3, -7, -2, 5, -4, 4, 2, -3, 3, 0, -6, 2,
3, -6, 3, -3, -5, 0, 2, 3, -1, 2, 0, 2, -2, -3, -1, 5, -7, -5, 7, -9, 2, 3, -5,
2, 0, -1, 3, -1, -7, 4, -2, -8, 3, 1, -1, 0, -3, -4, -2, 0, 1, 1, 0, 0, -2, 0,
-3, -1, 5, -7, 1, -4, -3, -2, 2, -1, -1, -1, -1, 5, 2, -3, 2, -5, -3, 1, -7, 5,
-5, -2, -2, 3, -6, 5, -1, 10, -23, 10, 4, -11, -3, 16, 19, -52, 20, 1, -16, -15,
3, -2, 3, -25, 45, -1, -79, 64, -22, -31, 17, -3, 55, -52, -23, 9, -3, 3, -3,
12, -51, 55, -18, -27, 12, 4, -20, -2, 11, -19, 5, -1, 3, -23, 16, -21, 27, 9,
-43, 28, -17, -29, 35, -23, 8, 23, -24, -16, 18, -8, -26, 31, 1, -12, -20, 4,
-1, 0, 13, -13, -1, 11, -8, -6, -2, -3, 8, -2, -8, 21, -6, -18, 28, -18, -18,
23, -4, -7, 10, -12, -2, 15, -8, 1, 11, 12, -12, -16, 13, -11, 4, 9, -3, 8, -5,
-7, 12, 1, -9, 17, -4, -5, 9, -9, 0, 13, -10, 1, 13, -7, 2, 1, -11, 5, 2, -1,
10, 2, 2, -3, -3, 1, 1, 2, -1, 6, 2, -14, 1, 16, -2, 1, 12, -10, 2, 5, -12, 7,
2, -6, 5, 4, -5, 5, -1, -1, 7, -1, 2, 5, -3, -3, 5, 0, -4, 4, 6, -1, 2, -1, -10,
3, 5, -1, 6, 1, -1, 1, -3, 2, 3, 4, -1, -5, -1, 0, 1, 6, -1, 2, 5, -2, 1, 3, -3,
-2, 3, -5, 0, 5, -2, 0, 2, -4, 5, 1, 0, 7, -3, -1, -3, 1, 4, 3, 3, -2, 2, -5,
-5, 4, 3, -2, 4, 2, -6, 1, 4, 1, 0, -1, 1, -2, -3, -1, 2, 1, 0, 1, 4, 1, -3, 7,
-6, -3, 5, -5, 2, -1, -3, 1, 0, -2, 2, 2, 1, 0, -3, -1, -3, 4, 3, 0, -1, -3, 2,
-4, -1, 2, 2, -4, 0, 5, -4, 0, 3, 0, -2, 2, -1, -2, 0, 0, -3, 0, 2, 0, 2, 1, -1,
0, -2, 2, -1, -3, 3, 0, -6, -2, 4, -4, 3, 4, -5, -1, 0, 0, 1, -3, 2, 3, -6, 0,
0, -2, -4, 1, 0, -3, 4, -2, 0, 2, -3, 1, 2, 0, -5, 3, 0, -8, 4, -1, -3, 3, -1,
0, 2, -5, 0, 3, -2, -1, 2, -3, -7, 5, -2, -5, 4, -2, -1, 0, -2, -1, 2, 0, -5, 4,
-1, -5, 3, -4, -4, 1, -1, 0, 1, -5, 0, 4, -8, 3, 3, -5, 2, 1, -5, -2, 0, -4, 1,
-1, -2, -1, -2, 3, -3, 1, 0, -2, -2, -2, 0, -1, -2, -2, 3, -5, 2, 2, -4, 4, -5,
-2, 4, -2, 0, 0, -4, -2, -1, -1, 0, 0, -1, -4, 2, -1, -3, 6, -2, -3, 0, -2, -4,
-1, 2, -4, -1, -2, -3, 2, -3, -2, 2, -4, -1, 3, -4, -2, 0, -1, -4, -2, 3, -5, 2,
-1, -5, 1, -1, -1, 0, -1, -3, 1, -5, -3, 1, -2, 0, 2, -6, -2, 1, -3, -3, 2, 0,
-1, 0, 0, -4, -1, 2, -6, 3, -6, 2, 1, 3, -11, -1, 4, -7, 1, 3, -6, 2, -10, 13,
10, -34, 17, 3, -20, 0, 4, -15, 21, -20, 19, -4, -41, 40, -31, -2, 9, -6, 30,
-27, -13, 12, -10, 1, 5, -6, -14, 23, -12, -8, 7, -5, -7, 4, -1, -9, 1, -3, 7,
-12, 4, -1, 4, -1, -10, 6, -11, -7, 13, -12, 4, 11, -11, -3, 7, -7, -2, 8, -5,
0, -9, 0, -2, 1, 3, -4, 0, 1, -2, -1, -1, -3, 2, -1, -3, 6, -4, -4, 8, -7, -1,
3, -7, 2, 1, -5, 2, -1, -1, 1, 0, 1, -4, -3, 3, -3, 1, -1, 0, 0, -2, 0, 2, -2,
-1, 2, -2, -1, 1, -1, 1, 0, -3, 4, -3, 1, 0, -1, -2, 4, -5, 6, -6, 4, -7, 10,
24, -31, 0, 9, -10, -11, 0, -2, 2, -15, 19, 3, -39, 20, -15, 0, 6, -10, 71, -65,
-10, 36, -38, 31, -11, -27, 0, 15, -4, -5, -17, 21, -21, -7, 27, -19, -15, 26,
18, -35, -3, 11, 7, -1, -20, -4, -4, -19, 24, -22, 5, 31, -14, -2, 6, -1, -7,
-1, 10, -14, -33, 19, 1, -13, 12, 4, -3, 5, 7, -6, 1, 2, -7, -1, -4, 10, -2,
-12, 16, -7, -16, 12, 7, -6, 2, 9, 1, -2, 9, 2, 2, 12, -9, -17, 4, -5, 1, 6, -1,
8, 5, 7, 9, 1, -1, 8, 2, -9, -4, 2, 1, 3, 3, -2, 7, 13, 0, 2, 4, 0, -1, 4, 4, 0,
4, -3, 3, -1, -3, 8, 1, 2, 4, -2, 3, 10, 5, 1, 6, 0, -7, 2, -1, -9, 0, 1, 0, 5,
3, 5, 6, 4, 1, 3, 0, -1, 0, -5, 0, -1, -2, 0, 7, 4, 0, 2, -1, -2, 3, 4, 0, -1,
-1, -2, 1, 1, -2, -1, -1, -2, 0, 0, 1, 5, 1, 2, 4, 0, -2, -1, -4, -5, -4, -5, 1,
-1, -1, 5, 0, 3, 1, 0, 2, 0, -2, -5, -3, -3, -1, 0, 2, -1, -1, 0, 1, 3, -1, 1,
0, -4, 0, 0, -1, -1, 0, -4, -2, -1, -3, 1, -1, 2, -1, 2, 3, 0, -1, 1, -3, -6,
-2, -2, -2, -2, 0, 0, -1, 3, 4, -1, 3, -1, -4, -3, -3, -1, -3, -1, 1, -2, -1, 0,
1, 0, 2, 0, -2, 2, 1, -2, -2, -1, -1, -3, 0, 1, -6, 2, 1, -4, 4, 3, 2, 3, -2, 1,
-1, -2, 0, -3, -2, -2, -1, -1, -1, 4, 3, -1, 3, -1, -2, 2, -1, -3, -3, -1, -2,
0, -1, -1, 1, -1, 1, 1, -1, 2, 2, -3, 0, -1, -2, 3, -3, 0, -2, -2, 0, -1, 1, 1,
2, 1, 0, 0, -1, 0, 2, -3, -4, 0, -2, -2, 2, -1, 1, 2, 1, -1, 2, -1, -2, 0, -5,
-1, -2, -1, -1, -2, -1, -1, 1, -1, -1, 2, -2, -1, 1, -4, 0, 2, -4, 0, -3, -4, 0,
-3, 1, -3, -1, 2, 1, -2, 0, 1, -3, -1, -1, -3, -2, 0, -1, -2, 0, 0, 0, 0, 1, 1,
-3, 0, 0, -2, -3, 1, -1, -4, 0, -1, -2, 0, 0, -1, -1, -1, -1, 0, 0, -3, -2, -2,
-2, -2, -2, -2, -1, -2, -3, 2, -2, -2, 0, -1, -2, 0, -3, -2, -1, -4, -3, 0, -2,
0, 1, 0, 0, -3, 1, -1, -1, -1, -2, -1, -4, 0, -1, -3, 0, -1, -1, -2, -1, 0, -1,
0, 0, -1, -1, -2, -1, 0, -2, -1, -2, -2, 0, -2, -1, 0, -1, -3, 1, 0, -4, 0, -2,
-2, -1, -2, 1, -2, -1, 1, -2, -1, 1, 0, 0, -2, 0, 0, -3, 1, 0, -2, 1, -2, -1, 0,
0, 1, -1, 1, -1, -1, 1, 0, -2, -2, 2, -2, -2, 1, 0, -2, 0, 0, -2, 2, -1, -1, 0,
-1, -1, -1, -1, -1, -1, -2, 1, 0, -4, 2, 2, -1, 0, 0, -1, -2, 0, -1, -2, 0, 0,
-3, 0, 1, -1, 1, -1, 0, 1, -1, 0, 0, -2, 0, 0, -2, 0, 0, -2, 1, 0, -1, 2, -1, 1,
-1, 0, 1, -1, -1, -1, -1, 0, -2, 0, 0, -2, 1, 0, -1, 1, 0, -1, 2, -1, -2, -1,
-2, 0, 0, 0, -1, 0, -1, -1, 1, 1, -2, 0, 1, -2, 0, 1, -1, -1, -2, 0, 1, -2, 1,
0, -1, 1, -1, 1, 1, -2, 1, 0, -2, -1, 0, 0, 0, -1, -1, 0, 0, 1, 1, -2, 0, -1,
-1, -1, -1, 1, -3, -1, 0, -1, 1, 0, -1, 0, 0, -2, 0, 0, -1, -1, 0, 0, -3, -1, 0,
0, -1, -2, 0, 1, -1, 1, 0, -2, 1, -1, -2, 3, -3, -3, 2, -1, -1, -1, 1, 1, -2, 0,
2, -2, 1, -1, 0, -1, -1, 0, -3, 1, 1, -2, -2, 3, -2, -2, 3, 1, -3, -1, 1, -2,
-1, 2, -1, -2, 0, -1, -1, 0, 2, 0, -3, 1, 1, -1, 0, 1, -1, -2, 2, 0, -3, 2, 0,
-2, 1, 1, -1, 0, 3, 0, -2, 1, -1, 0, 0, 2, 1, -4, 2, 2, -2, 1, 2, -1, -2, 3, 0,
-2, 2, 1, -3, 0, 1, 0, -1, 0, 1, -2, 1, 2, -1, 0, 1, 0, -1, 0, 2, -2, 0, 3, -3,
1, 2, -2, 1, 0, 1, 0, -2, 2, -1, -1, 1, 0, -1, 1, 1, -1, 1, 1, -1, 1, 1, 0, 0,
-1, 2, -1, -1, 1, -1, -1, -1, 0, 0, -1, 1, 0, -1, 0, 0, -1, 0, 1, -1, 0, 1, 0,
-1, 1, 0, 0, -1, 1, 0, -2, 3, 0, -3, 1, -1, 0, -1, -1, 1, -2, -2, 1, 1, -1, 1,
-1, 0, 0, 1, 0, -1, 2, -2, -1, 1, -2, -1, 1, 1, -1, -1, 0, -1, -2, 1, 0, -2, 0,
-1, -1, -1, 0, -2, -1, -1, 0, 0, -2, 1, -1, -2, 1, -1, -1, 0, -2, -1, -3, 0, 0,
-3, 1, -1, -2, 1, -2, -1, 0, 0, 0, -1, 0, -1, -1, 0, 0, -2, -1, 0, -1, -1, 0,
-1, -1, -1, 0, 1, -2, 1, 0, -3, 0, -1, -2, -1, -1, 0, -1, -1, 1, 0, -1, 1, -1,
-2, -1, -1, 0, -2, -1, 0, -1, -1, 0, -1, -1, 0, -1, -1, -1, -1, -1, 0, -1, -1,
-1, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, -2, 0, 0, -2, -1, 0, 1,
-1, 0, 0, 0, 1, -2, 0, -1, -2, 0, -1, 0, -1, -1, 0, 0, -1, 0, 0, 0, -1, 1, 0,
-2, 1, 0, -1, 1, 0, 0, -1, 0, 1, -1, 0, 2, -1, -1, 1, 0, -1, 1, -1, -1, 0, 0,
-1, 1, 0, 0, 0, 0, 2, -2, 0, 1, -1, -2, 0, 1, -3, -1, 1, 0, -2, 0, 0, -1, 0, 0,
-2, 0, 0, -2, 0, -1, -1, -1, -1, 0, -1, -1, 0, 1, -2, 0, 1, -1, -1, -1, -1, -1,
-2, 0, -1, -2, 1, -1, -2, 1, -1, -1, 0, 0, 0, -2, 1, 0, -1, 0, 0, 0, -1, -1, 0,
-1, -1, 0, -1, -1, -1, 0, -1, -2, 1, -3, -1, 1, -3, -1, 1, -1, -1, 0, -1, -1,
-2, -1, 0, -1, -1, -1, -1, 0, 0, -2, -1, 1, -1, -3, 0, -1, -2, 0, 0, -1, -1, 0,
-1, -1, 1, -2, 0, 0, -1, -1, -1, 0, -1, -1, 0, 1, -2, -1, 1, -1, 0, 0, -1, -1,
0, 0, 0, 0, 0, -1, -1, 0, -1, -1, -1, 0, 0, -2, 2, 0, -2, 2, 0, -1, 1, 0, -1,
-1, 0, 0, -2, 1, 1, -2, 1, 1, 0, -1, -1, 2, -1, -1, 2, -1, -2, 1, 0, -1, 0, 0,
0, 0, 1, 1, -2, 1, 0, -2, 0, 0, -2, 0, 0, 0, 0, -2, 2, -1, -1, 2, -2, -1, 2, -1,
-1, 0, -2, -1, 0, 0, 0, -2, 1, 0, -1, 1, -1, 0, -1, -1, 0, -1, 0, 0, -1, 0, 0,
-1, 0, 0, -1, -1, 1, 0, -1, -1, 0, -1, -1, 0, -1, -1, 1, -1, -1, 0, -1, 0, -1,
0, -1, -1, -1, -1, -1, -1, -1, -2, -1, -1, 0, -1, -1, 0, -2, -1, 0, -1, -1, -1,
0, -1, -1, 0, -1, -1, 0, 0, -2, -1, 0, -1, -1, -1, -1, -2, -1, 0, -2, -1, 0, -2,
-1, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, -2, -1, 0, -2, -1, -1, 0, -1, -2,
1, -2, -2, 1, -1, -2, 1, -1, -1, -1, -1, -1, -2, 0, -1, -2, -1, 1, -1, -2, 0, 0,
-1, -1, 1, -2, -1, 2, -2, -1, 0, -2, -1, -1, 0, 0, -1, 0, -1, -2, -1, 0, -1, -2,
0, 0, -2, 1, 0, -1, 1, 1, -1, -1, 0, -1, -1, 0, -1, -2, -1, -1, -1, -1, 0, 0,
-1, 0, 0, -1, 0, 0, 0, -1, 0, 0, -2, -1, 0, -2, 0, 0, 0, -1, -1, 1, 0, 0, 1, 0,
-1, 0, 0, -2, 0, 0, -1, -1, -1, -1, 0, 0, -1, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1, 0,
0, 1, 0, -2, 0, -1, -1, 0, -1, -1, -1, -1, 0, 0, 0, 0, -1, 0, 1, -1, 0, 0, -1,
0, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1, 0, -1, -1, -1, 0, 0, -1, 1, 0, -1, 0, 0,
0, 1, 0, 0, 0, -1, -1, -1, 0, -1, -1, -1, 0, -1, -1, 0, -1, -2, -1, -1, -1, 0,
0, 0, 0, 0, 0, -1, 0, 0, -1, -1, 1, -1, 0, 0, -1, -1, -1, 0, 0, -1, -1, 0, 0, 0,
0, 0, 0, 0, -1, -1, -1, 0, -1, -1, 0, -1, -1, 1, 0, -1, 0, 0, -1, 0, -1, -1, -1,
0, -1, -1, -1, -1, 0, -1, -1, -1, -2, 0, 0, -1, -1, -1, 0, -1, -1, 0, 0, 0, 0,
-1, 0, 0, -1, -1, 0, -1, -1, 0, -1, -1, -1, 0, 0, -1, 1, 0, 0, 0, 0, 1, -1, 0,
-1, -1, 0, -1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, -1, 0, -1, 0, 1,
-1, 0, 1, 0, 0, 0, 0, 0, -1, -1, 0, -1, -1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, -2, 0, 0, 0, 0, 2, -2, 0, 1, 0, -2, 1,
-2, 1, -3, 5, 1, -6, -2, -8, 19, -1, -14, 12, 7, -22, 22, -8, -25, 31, -1, 9,
-5, -23, 25, -4, -10, 12, -21, 10, 16, -4, -6, -4, -3, 19, -5, -8, 15, -17, 6,
13, -6, 0, -5, 11, 12, -18, -1, 0, 7, 13, -12, 3, 18, -7, -10, 3, -4, 5, -3, 0,
7, -12, 4, 8, -4, -2, 0, 15, -1, -15, 5, 0, -6, 0, -1, 1, -4, -1, 3, -6, -1, 16,
-16, -10, 21, -9, -10, 9, -3, -4, 1, 4, 1, -19, 4, 3, -8, 6, 0, -4, 1, 0, 1, -2,
-13, 1, 1, 0, 1, -9, -3, 0, 0, 9, -4, -7, 5, -6, -1, 1, -7, 2, 0, -4, 2, -4, -3,
-2, -5, 2, 1, -5, 0, -3, -5, 4, -1, -4, -1, 0, -1, -4, -1, -4, -6, 0, 0, 2, 2,
-5, -2, 1, -2, -1, 0, -3, -5, -2, 2, -3, -2, 4, 1, -1, -1, 0, -4, -4, -1, -1,
-2, 0, -2, -5, -2, 2, -1, -2, 0, 1, 2, -2, -3, -2, 0, -1, 0, 2, -2, -2, -2, -2,
-1, 0, 0, 0, -1, -1, 0, 1, 0, -2, -1, 0, -2, -2, 1, -2, 0, 2, 0, 1, -1, -1, -1,
-1, 1, -1, -3, 0, 1, -1, -1, -3, 0, 1, 0, 1, 0, -2, -1, 1, 1, 0, 0, 0, -2, -1,
-1, -3, -1, -1, -1, 0, -2, 1, 0, 0, 1, 1, 0, -1, -2, -2, 0, -1, 0, 0, 0, 1, 1,
-1, -1, -2, 0, 1, -1, 0, -1, -1, 0, 1, -1, 0, -1, 0, 1, 0, -1, 1, 0, 0, 1, -2,
-1, 0, -1, -2, -2, -1, -1, -1, 0, -1, -1, 1, 0, -1, 0, -1, 0, 0, -2, -3, -1, 2,
0, -1, -1, 0, -1, 0, 1, 0, -1, -1, 0, 0, -2, -1, 1, -1, -2, -1, -1, 0, 0, 0, 0,
0, 1, -1, -1, -1, -2, 0, 1, -3, -1, 0, -1, 0, 1, -1, 0, 2, 1, 1, -1, -2, 0, -1,
-1, -1, -2, -1, -1, -2, 0, 0, -1, 0, 0, -1, -1, 2, 0, -2, 0, 0, -1, -1, -1, -2,
-1, 0, 0, -1, 0, 1, 0, 0, -1, -1, 0, -1, -1, 0, -1, -1, 0, -1, 0, 2, 0, -1, 0,
0, -1, -1, 0, -1, -1, 0, 0, 0, 0, -1, 1, 1, 0, -1, 0, 1, -1, -1, 0, 0, -1, 0,
-1, -1, -1, 0, 0, 0, 1, 0, 1, 1, 0, -1, 0, 1, 0, -2, -1, 2, 0, 0, 1, 0, 0, 0,
-1, 0, 0, -1, 0, -1, -1, -1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1,
-2, -1, 0, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0, 1, -1,
0, 0, -1, -1, 0, 0, 0, -2, 0, 0, -1, -1, 0, 0, 0, -1, 0, -1, -1, 0, -1, 0, 0,
-1, 0, -1, -1, 0, -1, -1, -1, -1, 1, 0, 0, 0, -1, 0, 0, -1, -2, -1, 1, 0, -1, 1,
0, 0, 1, -1, -1, -1, -1, 1, 0, -2, -1, 0, 0, 0, 0, 0, -1, 0, 1, 0, -1, 0, 0, -1,
0, -1, -1, 0, 0, 0, 0, -1, -1, 1, 0, 0, 0, -1, 0, 0, 0, -1, -1, 0, -1, -1, 0,
-1, -1, 0, 0, -1, -1, -1, 0, 0, -1, -1, -1, 1, 0, -1, 0, -1, -1, -1, 0, 0, -1,
0, -1, 0, 0, -1, -1, 0, -1, -1, 0, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -2, -1,
-1, -1, -2, -1, 0, -1, -1, 2, -1, 0, 0, -1, 0, -1, 0, 1, -2, -1, 0, -1, -1, -1,
-1, 0, 1, -1, 2, -3, 3, 0, -2, -10, 2, 14, -9, -7, 10, 0, -13, 13, -14, -3, 18,
-4, 7, -5, -11, 10, -3, -3, 5, -10, 6, 12, -6, -2, -5, -2, 18, -9, -1, 11, -16,
7, 8, -9, 0, 0, 7, 3, -11, -5, 0, 7, 6, -8, 5, 9, -8, -5, -2, 1, 5, -2, -2, 3,
-8, 2, 4, -6, 1, 2, 6, -1, -6, 0, -2, 0, 2, -1, -1, -2, -2, 2, -3, -4, 3, 2, 0,
2, -2, -10, 1, 10, -4, -14, 7, 9, -12, -5, -1, -4, 4, 8, 3, -13, -9, 13, 1, -10,
-3, -3, 2, 4, -2, -4, -8, 0, 8, 3, -6, -3, -2, 0, -6, -3, 7, -9, -1, 1, -2, -2,
-2, 2, 0, -2, 1, 3, -5, -5, -7, 4, 3, -4, -2, -3, -5, -1, 5, -4, -9, 1, 8, -1,
-4, -3, -6, 0, 2, 0, -3, -5, 0, 1, -2, -2, 1, 2, -2, -3, 0, -2, -5, -2, 0, -2,
-1, 0, -3, -5, 0, 3, 1, 0, -1, -1, -1, -1, -3, -1, -1, -3, 2, 0, -4, -4, -2, 0,
-1, 0, 1, -2, -1, 1, -2, -1, 0, -2, -1, -2, -2, -1, -1, 0, 1, 2, 2, -2, -2, -2,
-1, 1, 0, -3, -1, -1, -1, -1, -2, 0, 0, 1, 2, -1, -2, -1, -1, 0, -1, -1, 0, 0,
-2, -2, 0, -1, -1, 1, 0, -1, 1, 0, 0, 0, 0, 0, 0, -2, -3, -3, 0, 2, 1, -1, -1,
1, 0, -1, -1, -1, -1, 0, 1, -2, -2, -1, 0, 0, -1, -1, -1, 0, 0, -1, -1, -1, -1,
0, -2, -1, 0, -2, -1, 0, -1, 0, 0, 0, -1, -1, 1, 1, 0, -2, -2, -2, 0, -2, -3, 0,
0, 0, 1, 0, -1, 0, -1, 0, 0, -2, 0, 0, -1, -2, 0, 2, -1, -1, 0, -1, 1, 0, -1, 0,
0, 0, -1, -1, -2, -2, 1, 1, -2, -2, 0, -1, 1, 0, -2, 0, 1, 0, 0, -1, -2, -1, 0,
-1, -2, 0, 1, 0, 0, 0, -1, 1, 1, -1, -1, -1, 0, 0, -1, 0, 0, 0, 1, -1, -1, -1,
1, 1, 0, -1, 0, 1, 0, 0, -1, -1, 0, 1, 0, -2, 0, 1, 0, 1, 1, -1, 0, 0, 0, -1,
-2, 0, 0, -2, 0, 0, 0, 0, 0, 0, -1, 1, 0, -1, -1, -1, 0, 2, 0, 0, 0, 0, 0, -1,
0, 0, 0, 0, 1, 0, -1, 0, 0, 0, 0, 1, -1, -1, 1, 0, -1, 1, 1, 0, -1, 0, 1, -2,
-1, 1, -1, -1, 0, -1, -1, 0, 1, 1, 0, 0, 1, -1, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0,
0, 0, 0, -1, 1, -1, 0, 0, -1, 1, 0, -1, 0, -2, 0, 0, 0, 1, 0, -1, 1, 0, 0, 0,
-1, 0, -1, 0, -1, -1, 0, 2, -2, -2, -10, 8, 12, -6, -7, 5, 7, -7, -4, -11, 10,
6, 0, 6, -11, 1, 0, -5, 9, -4, -9, 16, 4, -6, 0, -13, 8, 12, -12, 5, 2, -12, 9,
4, -4, -1, 2, 9, -3, -9, -5, 4, 10, -3, -5, 13, -1, -8, -1, -6, 4, 6, -3, 2, 0,
-5, 5, -2, -3, 2, 3, 3, -3, -3, -3, -4, 2, 2, -1, 0, -2, -1, 2, -4, -1, 3, -6,
2, 3, -7, -2, 2, 0, 1, -2, -1, 2, -2, -6, -4, 2, 2, 0, -1, -4, -1, 3, -6, -1,
-4, -1, 8, -2, -9, -1, 5, -1, 0, -1, -4, 0, 0, 0, -4, -5, 1, 5, -1, -4, -1, -2,
0, 2, 1, -2, -2, -2, 1, 0, -5, -2, 3, 1, -3, 1, -4, -4, 1, -1, 0, 1, 2, -1, -3,
-3, 0, 0, -2, -4, 0, 1, -1, -1, -2, -1, 1, 1, 0, -3, -3, 0, 0, -1, 0, -1, 0, -1,
-1, 0, -1, -1, -1, 1, 1, -1, -1, -2, -2, 0, 1, -1, -1, -1, -2, -2, 0, 0, -1, 0,
0, 0, 0, -1, -1, -1, 0, -1, -1, -1, -1, 0, 0, 0, -1, 0, 1, -1, -2, -1, -1, -1,
0, 0, 0, -1, -1, -1, -1, 0, 1, 0, -1, -1, -1, 0, -1, -1, -1, 0, 0, 0, -1, -1,
-1, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 0, -1, -1, 0, 0, 0, 0, -1, 0, 0, -1, -1,
-1, -1, 0, 0, -1, -1, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, 0, -1, -1, 0, -1, 0,
-1, -1, 0, 0, -1, 0, 0, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1,
0, 0, -1, -1, 0, -1, -1, -1, 0, 0, -1, -1, -1, -1, 0, 0, -1, -1, -1, 0, -1, -1,
0, 0, -1, -1, -1, -1, 0, -1, 0, 0, -1, -1, -1, -1, -1, -1, 0, -1, -1, 0, -1, -1,
-1, 0, 0, 0, 0, 0, -1, -1, 0, -1, -1, 0, -1, -1, -1, -1, 0, -1, -1, 0, 0, -1,
-1, -1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, -1, 0, -1, 0, -1, 0, 0, -1,
-1, -1, 0, -1, };

#endif /* MARIOSIX_H_ */
