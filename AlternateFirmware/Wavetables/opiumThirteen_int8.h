#ifndef OPIUMTHIRTEEN_H_
#define OPIUMTHIRTEEN_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define OPIUMTHIRTEEN_NUM_CELLS 5060
#define OPIUMTHIRTEEN_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) OPIUMTHIRTEEN_DATA [] =
{-3, 21, 41, 56, 93, 89, 74, 71, 28, 0, 23, -14, -33, -37, -90, -101, -83, -79,
-82, -99, -81, -85, -86, -64, -81, -88, -95, -71, -71, -68, -67, -68, -61, -70,
-45, -46, -44, -46, -31, -43, -31, -21, -13, 7, -13, -11, -19, -3, -15, -14, -8,
6, 44, 64, 64, 63, 46, 72, 86, 71, 69, 71, 63, 11, 13, -5, -16, -14, -22, -10,
-2, -14, 1, -5, -6, 17, 5, 11, 9, 10, 15, 14, 20, 16, 16, 19, 26, 23, 20, 37,
37, 44, 31, 31, 19, 23, 26, 10, 11, 19, 19, 5, 20, 18, 22, 13, 31, 39, 78, 119,
106, 81, 50, 38, 45, 35, 24, 42, 50, 73, 76, 87, 82, 69, 50, 37, 41, 49, 57, 46,
47, 83, 101, 94, 94, 82, 74, 66, 60, 58, 63, 71, 70, 38, 27, -1, -18, -22, -36,
-43, -55, -53, -59, -54, -49, -52, -40, -39, -36, -26, -30, -15, -29, -30, -18,
-11, -9, -19, 0, 33, 36, 33, 40, 33, 34, 16, 12, 18, 14, -3, -21, -12, -1, -12,
-17, -14, -25, -33, -60, -78, -84, -67, -37, -30, -19, -22, -37, -37, -34, -37,
-34, -29, -10, 21, 33, 25, 29, 29, 16, 18, -2, -8, -1, -12, -10, -15, -16, -22,
-22, -31, -31, -30, -55, -80, -92, -95, -91, -82, -90, -84, -75, -66, -61, -61,
-65, -71, -64, -56, -51, -48, -47, -58, -56, -51, -49, -35, -3, 3, -22, -36,
-42, -39, -39, -31, -32, -21, -12, -8, 26, 31, 33, 46, 46, 42, 38, 39, 40, 42,
38, 28, 24, 38, 41, 39, 35, 34, 43, 42, 40, 41, 39, 33, 39, 32, 21, 13, 9, 13,
13, 14, 18, 19, 12, 1, -1, -10, -20, -20, -23, -24, -25, -16, -27, -50, -65,
-61, -60, -66, -66, -66, -60, -59, -53, -55, -54, -54, -45, -36, -19, -11, -19,
-15, -14, -12, -23, -25, -23, -17, -5, -9, -12, -10, -12, -11, -7, -6, -8, -5,
-10, -12, -11, -18, -20, -22, -24, -24, -22, -22, -16, -16, -5, -9, -18, -13,
-14, -10, -14, -10, -13, -9, -1, -3, -2, 9, 27, 35, 26, 19, 15, 16, 12, 7, 10,
2, 0, -2, -7, -4, -3, -6, -4, -6, -3, 6, 22, 34, 39, 49, 51, 56, 58, 59, 60, 59,
57, 56, 56, 54, 45, 39, 32, 22, 15, 18, 13, 0, -6, -21, -31, -31, -27, -28, -25,
-26, -24, -22, -21, -14, -10, 3, 4, -1, 2, 0, 3, 9, 19, 27, 32, 36, 45, 48, 47,
47, 42, 40, 37, 38, 36, 35, 33, 31, 28, 19, 6, 5, 3, -4, -5, -12, -14, -14, -17,
-26, -32, -33, -30, -30, -27, -27, -25, -23, -18, -6, 10, 24, 29, 32, 27, 26,
21, 22, 29, 28, 33, 33, 26, 19, 13, 5, 0, 1, -3, -5, -8, -13, -18, -30, -27,
-27, -27, -23, -23, -22, -19, -16, -18, -20, -18, -13, -14, -14, -14, -14, -13,
-13, -9, -9, -7, -2, 1, 8, 21, 20, 16, 25, 30, 29, 30, 30, 29, 34, 41, 43, 38,
38, 36, 32, 33, 34, 34, 32, 29, 24, 22, 21, 25, 21, 19, 20, 20, 21, 17, 14, 11,
12, 11, 12, 12, 8, 7, 5, 4, 3, 5, 1, -9, -13, -9, -13, -19, -17, -16, -19, -23,
-22, -22, -26, -34, -39, -32, -24, -23, -28, -28, -29, -27, -25, -28, -27, -30,
-29, -25, -23, -22, -23, -24, -22, -21, -21, -18, -9, 1, 7, 1, 0, 4, 5, 8, 12,
15, 12, 12, 12, 6, -4, -9, -5, -2, 1, 7, 9, 9, 16, 24, 27, 27, 25, 23, 23, 21,
18, 15, 11, 7, 4, 1, 4, 12, 13, 13, 9, 7, 5, 0, -11, -22, -23, -18, -11, -1, 2,
-1, 1, 0, -4, -8, -10, -18, -25, -26, -28, -27, -27, -25, -23, -21, -17, -14,
-17, -16, -16, -18, -17, -17, -16, -15, -14, -11, -6, -4, 3, 9, 10, 14, 16, 14,
14, 13, 16, 15, 14, 10, 9, 13, 6, 1, 0, -2, 2, 7, 11, 15, 13, 14, 14, 10, 2, 0,
-1, 0, 2, 5, 8, 11, 18, 19, 19, 19, 18, 17, 16, 15, 14, 12, 10, 11, 9, 7, 5, 3,
0, 1, 0, -1, -5, -8, -7, -13, -16, -20, -22, -21, -22, -22, -22, -22, -22, -22,
-20, -19, -18, -19, -17, -16, -15, -14, -13, -12, -9, -4, 4, 5, 5, 8, 7, 10, 12,
14, 14, 16, 18, 16, 14, 14, 16, 16, 16, 15, 14, 14, 14, 13, 12, 8, 4, 4, 5, 3,
3, 4, 4, -2, -4, -8, -8, -7, -4, -3, -8, -9, -11, -12, -15, -12, -15, -17, -17,
-17, -19, -19, -19, -18, -17, -18, -16, -17, -16, -15, -13, -13, -13, -10, -11,
-11, -10, -10, -10, -8, -8, -7, -6, -7, -6, -5, -5, -4, -4, -2, -1, -1, -1, -1,
2, 2, 2, 2, 3, 4, 4, 4, 4, 3, 6, 7, 4, 3, 3, 4, 3, 4, 4, 5, 5, 4, 5, 6, 6, 6, 6,
6, 6, 6, 7, 7, 6, 7, 7, 9, 11, 13, 12, 12, 13, 13, 16, 19, 23, 26, 26, 22, 18,
18, 18, 18, 19, 19, 18, 16, 14, 16, 17, 17, 16, 15, 15, 14, 13, 12, 11, 10, 9,
9, 8, 8, 7, 6, 6, 6, 5, 4, 3, 3, 2, 2, 1, 0, -1, -2, -2, -3, -3, -5, -6, -10,
-13, -9, -7, -7, -8, -8, -10, -13, -16, -17, -18, -22, -22, -20, -19, -18, -18,
-19, -20, -19, -19, -18, -16, -18, -19, -19, -19, -18, -18, -18, -17, -17, -17,
-15, -14, -15, -14, -14, -13, -13, -12, -12, -12, -11, -10, -9, -9, -9, -8, -7,
-6, -6, -5, -4, -4, -1, 2, 4, 7, 8, 10, 11, 11, 12, 12, 13, 12, 12, 12, 11, 9,
8, 8, 8, 8, 8, 8, 7, 6, 4, 1, -1, -2, -4, -4, -6, -7, -9, -10, -13, -14, -13,
-13, -12, -11, -10, -9, -9, -9, -10, -10, -9, -9, -9, -7, -5, -6, -6, -5, -6,
-7, -7, -7, -7, -6, -5, -3, -1, -1, -2, -2, -3, -4, -3, -3, -5, -5, -4, -4, -4,
-4, -3, -3, -3, -3, -3, -3, -2, -2, -2, -1, -1, 0, -1, 0, 0, 0, 0, 1, 1, 1, 2,
3, 4, 5, 6, 6, 7, 10, 14, 14, 16, 16, 16, 16, 15, 15, 14, 13, 12, 12, 11, 8, 6,
4, 4, 3, 3, 1, -1, -4, -7, -8, -7, -7, -6, -5, -4, -3, -2, 0, 0, 0, -1, 1, 1,
-3, -5, -6, -6, -6, -5, -3, -3, -3, -2, -3, -5, -7, -7, -5, -4, -4, -2, -2, -2,
1, 1, -1, -3, -5, -6, -5, -4, -4, -5, -3, -2, 1, 3, 1, -2, -2, -1, 0, 1, 2, 3,
2, 2, 2, 0, 0, 1, 2, 3, 3, 5, 5, 4, 5, 5, 5, 4, 4, 4, 3, 2, 2, 0, -1, 0, -1, -3,
-2, -2, -4, -5, -7, -7, -7, -8, -8, -9, -9, -8, -8, -7, -7, -6, -6, -6, -5, -4,
-1, 1, 3, 5, 6, 7, 7, 7, 7, 6, 6, 4, 2, -1, -2, -2, -2, -3, -3, -3, -3, -3, -4,
-6, -7, -6, -5, -4, -3, -3, -4, -4, -5, -4, -4, -4, -4, -4, -3, -1, -1, -2, -2,
-3, -3, -3, -4, -4, -3, -3, -3, -3, -3, -3, -3, -3, -2, -2, -1, 0, 0, -1, -2,
-1, -1, 0, 0, 0, 2, 4, 7, 8, 6, 4, 3, 3, 3, 4, 4, 5, 4, 5, 6, 8, 8, 8, 8, 8, 8,
8, 7, 7, 7, 7, 6, 6, 5, 5, 5, 4, 4, 4, 3, 3, 3, 2, 2, 3, 3, 3, 2, 2, 2, 1, 0,
-2, -4, -3, -2, -1, 0, 0, -1, -1, -1, -3, -3, -3, -3, -4, -4, -5, -4, -5, -6,
-6, -6, -8, -9, -10, -9, -9, -9, -8, -8, -8, -8, -7, -6, -6, -6, -5, -6, -6, -5,
-5, -5, -4, -4, -4, -3, -2, 1, 1, 0, -2, -2, -1, 0, 0, 0, 1, 1, 1, 0, 0, -1, 0,
1, 2, 2, 2, 3, 3, 3, 5, 5, 6, 5, 4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
3, 3, 4, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0,
0, -1, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -2, -3, -4, -3, -3, -2, -2, -2, -1,
0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -2, -4, -5, -5, -3, -3, -3, -3, -3, -3, -3,
-5, -6, -6, -6, -5, -4, -3, -3, -3, -3, -3, -3, -3, -2, -2, -2, 0, 0, -1, -1,
-1, -1, -2, -3, -2, -2, -2, -1, 0, 0, 0, -1, -1, 0, -1, -1, 0, 0, 0, 1, 2, 1, 1,
1, 1, 0, -1, -1, -2, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0,
0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 3, 3, 4, 4, 4, 4, 4, 5,
6, 7, 6, 6, 6, 6, 6, 5, 5, 5, 5, 4, 4, 4, 4, 4, 3, 3, 3, 3, 2, 1, 0, -1, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
0, 0, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 2,
2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -2, -2, -2, -2, -3, -3, -3, -4, -4, -5, -6, -6, -6, -6,
-6, -6, -5, -5, -5, -5, -5, -5, -4, -4, -4, -4, -4, -4, -4, -3, -3, -3, -3, -3,
-3, -2, -2, -2, -1, -1, -1, -1, -1, 0, 1, 2, 2, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1,
1, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, -1, -1, -1, -1,
-1, -1, -1, -2, -2, -2, -3, -3, -4, -4, -4, -4, -4, -4, -4, -4, -3, -3, -3, -3,
-3, -3, -3, -3, -3, -3, -2, -2, -2, -2, -2, -2, -1, -1, -2, -2, -2, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, -1, -1, -1, -1,
-1, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -2, -2, -2, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -2, -2, -2, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -2, -2, -2, -1, -1, -1, -1, -2, -2, -2, -1, -1, -2, -2,
-2, -2, -2, -2, -3, -3, -3, -3, -3, -3, -3, -3, -3, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2,
2, 2, 2, 1, 1, 1, 1, 1, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, -1, -1,
-1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -2, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -2,
-2, -1, -1, -2, -2, -2, -2, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, -1, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0,
0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
-1, 0, -1, 0, 0, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0, -1,
-1, 0, -1, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1,
-1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, 0, -1,
0, -1, -1, -1, 0, -1, 0, -1, 0, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, 0, -1, 0,
-1, 0, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, -1,
0, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, -1, 0, -1, 0, -1,
0, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, -1, 0, -1, -1, 0, -1, 0, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, 0, -1,
-1, -1, -1, -1, 0, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, -1, 0, -1, -1,
0, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0,
-1, 0, 0, -1, 0, -1, -1, -1, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, 0, -1, 0, -1, -1, -1, -1, -1,
-1, -1, -1, 0, 0, -1, 0, -1, 0, -1, 0, -1, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1,
0, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, -1, -1, -1, -1,
-1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, 0, -1, 0, -1,
0, -1, -1, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, 0, -1, 0, -1, -1, 0, -1,
0, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, 0,
-1, 0, -1, -1, -1, 0, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0, -1,
-1, -1, -1, 0, -1, 0, -1, 0, -1, -1, 0, -1, -1, 0, -1, 0, -1, 0, -1, -1, -1, 0,
0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, 0, -1, -1, -1, 0,
-1, -1, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, -1, 0, -1, -1, 0, -1, 0,
-1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1,
0, -1, 0, -1, 0, -1, 0, -1, -1, -1, -1, 0, -1, 0, -1, 0, -1, -1, 0, -1, 0, 0,
-1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0,
-1, -1, 0, -1, 0, -1, -1, -1, 0, -1, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, 0, -1, 0, -1, 0, -1, 0,
-1, -1, 0, -1, -1, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, -1, 0, -1, 0,
-1, -1, -1, -1, -1, -1, -1, 0, -1, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, 0, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, 0,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0,
-1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0,
-1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, -1, 0, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, 0, -1,
-1, -1, -1, 0, -1, 0, -1, -1, -1, -1, 0, -1, 0, -1, -1, -1, -1, 0, -1, 0, -1,
-1, 0, -1, -1, -1, -1, 0, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1,
-1, -1, -1, 0, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, -1, -1, -1, 0, -1, 0, -1, -1, -1, -1,
-1, -1, -1, -1, -1, 0, -1, 0, -1, 0, -1, -1, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1,
0, -1, -1, -1, -1, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, -1, -1, -1, -1, 0, -1, -1, -1,
-1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, -1, 0, -1, -1,
-1, -1, -1, -1, -1, -1, 0, -1, 0, -1, -1, 0, -1, -1, -1, -1, 0, -1, 0, -1, 0,
-1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, -1,
-1, -1, 0, -1, 0, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1,
-1, -1, 0, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, 0, -1, 0, -1, -1,
-1, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0, -1, -1, -1, -1, 0, -1, 0, -1, -1, -1,
-1, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, 0, -1, -1,
-1, -1, -1, 0, -1, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, 0, -1,
0, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1,
0, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, 0, -1, 0, -1, -1,
-1, -1, -1, 0, -1, 0, -1, 0, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1,
0, -1, 0, -1, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0,
-1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0, -1,
0, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1,
0, -1, 0, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, 0, -1, 0, -1, 0, -1, -1, 0, -1,
-1, -1, -1, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, -1, };

#endif /* OPIUMTHIRTEEN_H_ */
