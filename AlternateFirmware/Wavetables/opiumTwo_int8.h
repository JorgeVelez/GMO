#ifndef OPIUMTWO_H_
#define OPIUMTWO_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define OPIUMTWO_NUM_CELLS 3315
#define OPIUMTWO_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) OPIUMTWO_DATA [] = {-1,
-2, -4, -6, -12, -17, -26, -33, -44, -51, -57, -52, -40, -12, 22, 53, 56, 22,
-42, -95, -96, -36, 18, -23, -82, -33, 54, 10, 61, 101, 86, 111, 93, 104, 96,
104, 104, 107, 100, 94, 88, 78, 70, 64, 58, 46, 30, 5, -12, -30, -55, -79, -85,
-86, -82, -80, -73, -63, -49, -39, -29, -12, 5, 15, 20, 19, 17, 14, 8, 7, 7, 6,
7, 13, 24, 39, 46, 44, 44, 43, 40, 30, 16, 1, -11, -23, -35, -40, -37, -28, -22,
-17, -13, -3, 7, 16, 29, 39, 42, 38, 34, 32, 30, 25, 19, 12, 4, -5, -11, -16,
-22, -25, -26, -26, -26, -23, -25, -32, -37, -38, -34, -26, -20, -11, -1, 9, 16,
21, 28, 36, 42, 41, 38, 33, 24, 16, 8, -3, -11, -15, -17, -18, -15, -10, -5, -2,
-5, -10, -14, -24, -37, -46, -50, -49, -45, -38, -31, -25, -15, -4, 9, 20, 27,
32, 39, 51, 63, 70, 71, 67, 61, 52, 47, 45, 42, 40, 37, 32, 26, 23, 20, 15, 9,
3, -3, -11, -20, -29, -35, -36, -37, -40, -45, -47, -40, -32, -28, -26, -22,
-17, -11, -9, -12, -17, -25, -33, -42, -51, -57, -58, -56, -53, -49, -40, -31,
-25, -19, -15, -9, -5, -2, -4, -3, 3, 11, 19, 28, 37, 45, 54, 64, 72, 81, 86,
86, 86, 84, 78, 68, 58, 46, 37, 27, 16, 6, 1, -2, -7, -12, -16, -19, -20, -23,
-26, -29, -34, -39, -44, -48, -48, -46, -42, -37, -28, -18, -13, -9, -5, -3, -6,
-10, -15, -20, -25, -30, -31, -29, -23, -19, -13, -5, 7, 18, 25, 30, 33, 33, 32,
29, 23, 17, 15, 14, 13, 13, 14, 15, 13, 12, 12, 9, 6, 3, 1, 0, -2, -4, -6, -8,
-11, -13, -13, -13, -11, -9, -8, -5, 1, 7, 12, 15, 19, 20, 19, 14, 8, 5, 3, 2,
1, 2, 3, 5, 7, 10, 14, 15, 15, 13, 11, 8, 1, -8, -17, -25, -33, -38, -41, -44,
-44, -43, -41, -39, -35, -31, -28, -24, -21, -20, -19, -16, -10, -6, -2, 2, 6,
11, 15, 17, 16, 14, 13, 10, 4, -4, -9, -14, -17, -18, -19, -19, -19, -20, -18,
-15, -11, -3, 7, 15, 21, 27, 31, 33, 32, 28, 24, 21, 18, 15, 15, 14, 13, 10, 6,
1, -5, -12, -18, -24, -28, -30, -31, -31, -30, -30, -28, -24, -17, -9, -1, 4, 8,
12, 14, 14, 15, 15, 15, 15, 14, 14, 15, 16, 16, 17, 17, 15, 14, 12, 9, 8, 8, 7,
5, 5, 5, 4, 4, 3, 2, 3, 2, 0, -1, -4, -5, -4, -2, 0, 2, 3, 1, -1, -6, -11, -13,
-10, -6, -4, 0, 4, 6, 6, 7, 7, 6, 5, 3, 1, -1, -6, -11, -16, -18, -20, -20, -20,
-18, -15, -12, -8, -5, -4, -3, -2, -1, -1, 0, 2, 4, 6, 7, 6, 3, -1, -5, -9, -12,
-16, -20, -21, -21, -21, -21, -22, -21, -19, -14, -10, -7, -4, -1, 1, 1, 1, 3,
7, 9, 11, 10, 8, 5, 3, 1, -2, -3, -4, -3, -3, -5, -7, -8, -7, -6, -6, -5, -4,
-5, -6, -8, -8, -7, -6, -4, -2, 1, 4, 6, 8, 9, 7, 5, 2, 1, 0, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, 0, 1, 1, 2, 2, 2, 2, 2, 3, 5, 7, 7, 8, 8, 5, 3, 0,
-3, -5, -3, -2, -3, -5, -7, -9, -13, -14, -14, -13, -12, -10, -7, -6, -5, -5,
-5, -5, -5, -5, -6, -6, -7, -7, -5, -3, -1, 2, 4, 6, 7, 5, 2, -1, -3, -5, -5,
-6, -6, -7, -7, -7, -5, -4, -5, -6, -8, -8, -8, -9, -10, -11, -13, -15, -15,
-15, -15, -13, -11, -7, -2, 3, 6, 7, 8, 8, 6, 5, 3, 1, 1, 0, -1, -1, -2, -3, -2,
-1, 0, 1, 2, 3, 4, 4, 1, -1, -3, -4, -6, -7, -8, -8, -7, -5, -2, 2, 5, 8, 10,
10, 8, 9, 9, 8, 5, 3, 1, 0, -1, -2, -5, -6, -5, -2, 0, 2, 2, 0, -1, -3, -5, -6,
-7, -8, -7, -5, -4, -2, 0, 1, 2, 3, 3, 3, 3, 2, 3, 5, 6, 6, 5, 3, -1, -4, -6,
-7, -6, -5, -2, 1, 3, 3, 1, -2, -6, -8, -9, -9, -9, -10, -9, -9, -8, -6, -5, -5,
-3, 0, 1, 1, -1, -4, -5, -7, -9, -11, -12, -11, -10, -8, -6, -4, -2, -2, -2, -4,
-4, -4, -3, -3, -4, -5, -6, -6, -6, -7, -9, -10, -12, -12, -10, -8, -8, -9, -10,
-10, -10, -11, -11, -10, -9, -7, -6, -6, -3, -1, 2, 4, 5, 5, 5, 4, 3, 2, 1, 2,
3, 4, 3, 2, 2, 3, 4, 6, 9, 10, 10, 9, 7, 4, 0, -3, -5, -6, -6, -5, -3, -1, 1, 3,
4, 5, 5, 5, 6, 5, 4, 2, 0, -2, -4, -5, -6, -5, -4, -4, -4, -4, -3, -3, -3, -4,
-5, -6, -7, -9, -11, -13, -15, -16, -17, -16, -15, -13, -11, -9, -6, -4, -1, 1,
2, 2, 2, 2, 0, -1, -3, -4, -5, -5, -6, -5, -5, -5, -4, -4, -3, -4, -6, -9, -11,
-12, -13, -14, -13, -11, -9, -6, -3, -1, 1, 2, 2, 3, 2, 0, -1, -1, -2, -3, -3,
-3, -3, -2, -3, -3, -2, -2, -1, 1, 3, 3, 2, 1, -1, -3, -5, -7, -9, -11, -11,
-10, -9, -7, -5, -3, -2, -1, 0, 1, 1, -1, -2, -3, -4, -4, -5, -6, -7, -7, -6,
-5, -3, -1, 1, 1, 1, 0, -1, -3, -5, -6, -7, -7, -7, -6, -5, -4, -4, -3, -3, -3,
-3, -3, -3, -2, 0, 1, 1, 0, -2, -3, -5, -5, -5, -5, -2, 0, 2, 4, 4, 3, 2, 0, -1,
-2, -3, -4, -4, -5, -5, -6, -6, -6, -6, -5, -3, -3, -3, -4, -6, -7, -9, -11,
-12, -12, -12, -12, -11, -10, -8, -7, -7, -6, -5, -5, -4, -4, -5, -5, -4, -4,
-4, -4, -3, -2, -1, -1, -1, -2, -2, -2, -3, -4, -5, -5, -6, -5, -5, -5, -5, -5,
-4, -4, -3, -2, -1, -1, -1, -2, -2, -2, -2, -2, -3, -3, -3, -2, -2, -1, 0, 0, 0,
0, 1, 2, 2, 1, 0, -1, -3, -3, -5, -6, -5, -5, -5, -4, -3, -1, 0, 1, 1, 1, 0, -1,
-1, -1, -1, -1, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -2, -3, -4, -5, -6, -6,
-6, -5, -4, -4, -4, -4, -4, -4, -3, -3, -3, -3, -4, -4, -4, -5, -6, -6, -7, -7,
-6, -5, -3, -2, -1, 0, 0, -1, -1, -2, -3, -4, -5, -5, -5, -6, -5, -4, -3, -2,
-1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -2, -2, -2, -3, -3, -4, -4, -4, -4,
-4, -3, -3, -3, -3, -3, -3, -4, -4, -4, -4, -3, -3, -2, -2, -2, -1, -1, -1, -1,
0, 0, -1, -2, -2, -2, -3, -4, -4, -4, -3, -3, -2, -2, -1, -1, -2, -3, -3, -4,
-5, -5, -4, -5, -5, -5, -4, -4, -3, -2, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0,
1, 2, 2, 1, 3, 3, 3, 3, 3, 3, 2, 2, 3, 3, 2, 2, 1, -1, -1, -1, -1, -2, -3, -2,
-1, -2, -2, -1, 0, 0, 0, 0, 0, -1, -2, -2, -1, -1, -1, -1, 0, -1, -1, -1, -1,
-2, -1, 0, 0, 0, 0, -1, -3, -4, -5, -6, -6, -6, -7, -6, -5, -5, -6, -6, -5, -5,
-5, -4, -4, -2, -2, -3, -3, -3, -3, -4, -3, -2, -1, -1, 0, 0, 0, 0, -1, 0, 0, 1,
0, 1, 2, 2, 2, 2, 2, 2, 2, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, -1, -1, -1, -1,
-2, -2, -2, -2, -1, 0, 0, 0, 1, 1, 1, 0, -1, -2, -1, 0, 0, -1, -2, -2, -1, -1,
-1, -1, -1, 0, 1, 1, -1, -2, -2, -1, 1, 1, 1, 0, 0, 1, 2, 2, 1, -1, -2, -2, -1,
0, 1, 0, 0, -1, -1, -1, -1, -2, -3, -4, -3, -1, 0, 0, -2, -3, -4, -4, -3, -2,
-2, -3, -3, -3, -3, -2, -1, -1, -1, -1, 0, 1, 2, 2, 1, 1, 0, 0, 0, 0, 0, 1, 1,
2, 2, 2, 3, 3, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 1, 1,
0, 0, 0, 1, 1, 2, 2, 2, 1, 1, 1, 1, 2, 2, 2, 2, 1, 1, 0, -1, -1, -1, -1, 0, 0,
0, -1, -1, -2, -2, -2, -1, -1, 0, -1, -2, -3, -5, -6, -6, -5, -3, 0, 2, 3, 4, 3,
2, 0, -1, -2, -2, -2, -1, 0, 1, 1, 1, 0, 0, -1, 0, 0, 1, 2, 3, 3, 2, 2, 1, 0,
-1, -2, -2, -1, -1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 3, 3, 2, 2, 1, 0, 0, 0, 0,
0, 1, 2, 2, 3, 3, 2, 2, 1, 0, -1, -2, -2, -2, -2, -2, -1, -1, 0, 0, 1, 1, 1, 1,
1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, -1, -2, -3, -4,
-4, -4, -4, -3, -2, 0, 1, 2, 3, 3, 3, 3, 2, 2, 1, 0, -1, -1, -2, -1, -1, 0, 1,
2, 3, 4, 4, 4, 3, 3, 2, 1, 0, -1, -2, -2, -2, -1, -1, 0, 1, 2, 3, 4, 4, 4, 3, 3,
2, 0, -1, -2, -3, -3, -4, -3, -3, -3, -2, -1, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, -1,
-1, -1, -1, 0, 0, 1, 1, 2, 2, 3, 3, 3, 2, 2, 1, 0, -2, -3, -3, -4, -4, -4, -4,
-3, -2, -1, 1, 2, 3, 4, 4, 4, 4, 4, 3, 2, 1, 0, -1, -2, -2, -2, -2, -1, 0, 1, 2,
3, 4, 5, 5, 6, 6, 6, 6, 5, 5, 4, 3, 2, 2, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1,
1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2,
2, 1, 1, 1, 0, 0, -1, -1, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, 0, 0, 0,
0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 1, 1, 1, 1,
2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1,
1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0,
0, 1, 1, 1, 2, 2, 3, 3, 3, 3, 4, 4, 4, 3, 3, 3, 2, 2, 2, 1, 0, 0, -1, -1, -2,
-2, -2, -2, -3, -3, -3, -2, -2, -2, -1, -1, -1, 0, 0, 1, 1, 2, 2, 2, 3, 3, 3, 3,
3, 3, 3, 3, 3, 2, 2, 2, 2, 1, 1, 1, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1,
1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 1, 1, 1, 1, 2,
2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
2, 2, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2,
2, 2, 1, 1, 1, 1, 0, 0, 0, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -1, -1, -1, -1, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4,
4, 4, 4, 3, 3, 3, 3, 3, 2, 2, 2, 2, 1, 1, 1, 1, 0, 0, 0, 0, -1, -1, -1, -1, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, 0,
0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2,
2, 1, 1, 1, 1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0,
1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
3, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1,
-1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, -1, -1,
-1, -1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -2, -2, -2, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2,
2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, };

#endif /* OPIUMTWO_H_ */
