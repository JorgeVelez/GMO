#ifndef JAZZTEN_H_
#define JAZZTEN_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define JAZZTEN_NUM_CELLS 3918
#define JAZZTEN_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) JAZZTEN_DATA [] = {-1, 0,
-2, -1, -2, 0, -2, -1, -1, 0, -2, -1, -2, 0, -3, -1, -3, 0, -3, 0, -3, -1, -3,
0, -5, -1, -5, 0, -4, -1, -5, 0, -5, 0, -4, 0, -5, -1, -3, 0, -4, -1, -5, 0, -4,
-1, -6, 0, -6, -1, -5, 0, -4, -1, -6, 0, -5, -1, -7, 0, -5, -1, -3, 0, -3, -1,
-2, 0, -4, -1, -3, 0, -2, 0, 0, -1, 0, 0, 2, 0, 2, 0, 1, 0, 1, -1, 4, 0, 5, -1,
4, 0, 5, 0, 2, -1, 4, 0, -2, -1, -3, 0, -2, 0, -4, -1, 5, 0, 1, -1, -1, 0, 2, 0,
0, 0, 1, 0, 0, -1, -6, 0, -3, -1, -9, 0, -4, -1, -7, -1, -5, 0, 1, -1, -1, 0, 4,
-1, -4, 0, 4, 0, -2, -1, 0, 0, 1, -1, -2, 0, 6, -1, -1, 0, -1, 0, 2, -1, 3, 0,
4, -1, -6, 0, -2, -1, 1, -1, 4, 0, 6, -1, -1, 0, 5, -1, 4, 0, 0, -1, 8, 0, 5,
-1, 8, 0, 5, 0, -2, -1, 2, 0, -2, -1, 3, 0, -4, -1, -11, 0, -6, -1, -1, 0, -7,
0, -7, 0, -10, 0, -6, -1, 2, 0, 9, 0, 5, 0, 2, -1, 10, 0, -1, -1, 11, 0, 3, 0,
2, -1, 3, 0, 6, -1, 10, -1, 13, 0, 14, 0, 0, 0, 9, 0, 7, 0, 0, -1, 8, 0, -5, 0,
-1, -1, 12, 0, -7, -1, 0, 0, 0, -1, -3, 0, -14, 0, -11, 0, -14, 0, -7, -1, 1, 0,
-6, -1, 3, 0, -4, -1, 0, 0, 3, -1, -4, 0, -8, 0, 10, -1, -3, 0, -1, 0, -3, -1,
2, 0, 19, -1, 11, 0, 31, -1, 20, 0, 13, 0, 11, -1, 40, 0, 14, 0, 3, -1, 39, 0,
-7, -1, 10, 0, 16, 0, 23, 0, 5, -1, 0, 0, -10, 0, -26, -1, -11, 0, -23, 0, -5,
-1, -38, 0, -39, -1, -38, 0, -36, 0, -23, -1, -50, 0, -27, -1, -16, 0, -44, -1,
-40, 0, -48, 0, -12, -1, -37, 0, -48, 0, -6, -1, -23, 0, -30, 0, -20, 0, 0, 0,
-22, 0, -10, 0, 9, -1, -16, 0, -4, -1, 16, 0, 6, 0, -7, -1, 22, 0, 18, 0, 18,
-1, 26, 0, 9, -1, 39, 0, 10, -1, 20, 0, 39, -1, 29, 0, 29, -1, 28, 0, 25, -1,
38, 0, 34, 0, 16, 0, 28, -1, 31, 0, 38, -1, 31, 0, 19, -1, 33, 0, 33, -1, 29, 0,
17, -1, -6, 0, 51, 0, 28, -1, 13, 0, 11, -1, 7, 0, -2, 0, 0, -1, -9, 0, -34, -1,
-15, 0, -25, -1, -13, 0, -59, -1, -49, 0, -2, -1, -40, 0, -39, -1, -34, 0, -42,
-1, -49, 0, -48, -1, -7, 0, -73, -1, -61, 0, -9, 0, -56, -1, -37, 0, -42, -1,
-17, 0, -18, -1, -50, 0, 12, -1, -16, -1, -20, 0, -1, -1, -8, 0, 23, -1, 16, 0,
16, -1, -4, 0, 12, -1, 37, 0, 50, 0, 20, -1, 5, 0, 31, -1, 34, 0, 31, -1, 42, 0,
30, -1, 3, 0, 48, -1, 29, 0, 25, -1, 11, 0, 39, 0, 39, 0, 30, -1, 31, 0, -3, -1,
18, 0, 6, 0, -6, -1, 21, 0, 22, -1, -17, 0, 2, -1, -17, 0, -1, -1, -3, 0, 0, 0,
-13, -1, -14, 0, -29, -1, 18, 0, -23, 0, -50, -1, 26, 0, -7, -1, 0, 0, -32, -1,
1, 0, 4, -1, -18, 0, -43, -1, -1, 0, -23, -1, -12, 0, -18, -1, -50, 0, 1, -1, 1,
0, -15, -1, -32, 0, -5, -1, 16, 0, -12, 0, -38, -1, 9, 0, -4, -1, -4, 0, 6, -1,
3, 0, -12, -1, 27, 0, 0, 0, -4, 0, 14, -1, 16, 0, 28, 0, 13, -1, 11, 0, 18, -1,
8, 0, 6, -1, 59, 0, 8, -1, 26, 0, 6, -1, 4, 0, 8, -1, 12, 0, 11, 0, -31, -1, 25,
0, 4, -1, -13, 0, -1, -1, -1, 0, 5, 0, 2, 0, 4, 0, -12, -1, -21, 0, 12, 0, 23,
-1, -28, 0, -5, -1, 35, 0, -23, -1, -18, 0, 2, 0, -5, -1, -3, 0, 0, -1, -1, 0,
-13, 0, 1, -1, 5, 0, -6, -1, -20, 0, 14, 0, 20, -1, -14, 0, 8, -1, 18, 0, -3,
-1, 2, 0, -7, 0, -14, -1, -9, 0, 10, -1, 16, 0, -17, 0, 19, 0, 13, 0, -17, 0,
-18, -1, 3, 0, -3, -1, -5, 0, -9, -1, -23, 0, -9, -1, -5, 0, -1, -1, -12, 0, 18,
-1, -8, 0, 11, 0, -28, 0, -6, -1, 9, 0, -24, 0, 24, 0, -10, 0, 14, 0, 5, -1,
-10, 0, 17, 0, 0, -1, -6, 0, 9, -1, -23, 0, -11, 0, 2, -1, -7, 0, -10, 0, 2, -1,
0, 0, -17, -1, -15, 0, 8, 0, 2, -1, -13, 0, 12, 0, -1, 0, -1, 0, -13, 0, -5, -1,
2, 0, -5, -1, -2, 0, 10, -1, -6, 0, 1, 0, -7, -1, 1, 0, 3, -1, -6, 0, 26, -1, 3,
0, 2, 0, -4, 0, 4, -1, -7, 0, -4, -1, 7, 0, -2, 0, -8, 0, -2, 0, -2, 0, -11, 0,
8, 0, 4, 0, -15, -1, -4, 0, 13, -1, 5, 0, -8, -1, -7, 0, 3, -1, 7, 0, 5, -1, 0,
0, 11, 0, -3, 0, 6, -1, 4, 0, -1, 0, 8, -1, 13, 0, 12, 0, -11, -1, 0, 0, 3, -1,
-6, 0, -12, -1, 7, 0, -8, -1, -10, 0, -1, -1, -18, 0, 1, 0, -10, -1, -13, 0,
-11, -1, -10, 0, -11, -1, -16, 0, -6, 0, -9, -1, -8, 0, -11, -1, -14, 0, -8, -1,
-10, 0, 4, -1, -16, 0, -4, -1, 29, 0, -8, 0, -20, -1, 19, 0, 10, -1, -8, 0, 14,
-1, 8, 0, 16, -1, 15, 0, 11, -1, 25, 0, 15, -1, 8, 0, 27, -1, 10, 0, 14, -1, 12,
0, 3, 0, 4, 0, -1, -1, 22, 0, -3, -1, -5, 0, 15, -1, 1, 0, -7, -1, 3, 0, 0, -1,
-19, 0, -5, -1, -3, 0, -6, -1, 9, 0, -7, -1, -15, 0, -6, -1, -4, 0, -6, -1, -10,
0, -13, 0, 14, 0, 0, -1, -5, 0, -3, -1, 2, 0, 6, 0, 0, -1, 5, 0, -3, 0, 7, -1,
8, 0, -13, -1, -17, 0, 3, 0, -13, -1, -19, 0, -4, 0, 1, -1, -13, 0, 7, 0, -1, 0,
-20, -1, 6, 0, 17, 0, -9, 0, -1, 0, -1, 0, 4, -1, 4, 0, -5, -1, 11, 0, 3, 0, 4,
-1, 7, 0, 13, -1, -19, -1, 11, 0, 7, -1, -7, 0, 0, -1, 1, 0, 8, 0, -6, -1, -2,
0, 2, -1, -5, 0, -9, -1, 16, 0, -1, -1, -2, 0, 0, -1, 8, 0, 0, -1, -11, 0, 4,
-1, -4, 0, -11, -1, 0, 0, 3, -1, -6, 0, -7, 0, -5, 0, 8, -1, -17, 0, -6, -1, 6,
0, -3, -1, 3, 0, 4, -1, 1, 0, -4, -1, 13, 0, 5, 0, 2, -1, 17, 0, 14, -1, 2, 0,
4, -1, 13, -1, 9, 0, 0, -1, 4, 0, 2, -1, -7, 0, -2, 0, 4, -1, 6, 0, -9, -1, -11,
0, 8, -1, -5, 0, -8, -1, -20, 0, -11, 0, 6, -1, -11, 0, -11, -1, -9, 0, -5, -1,
-9, 0, -1, 0, -4, 0, -12, 0, 1, -1, -4, 0, -15, -1, -12, 0, -8, -1, -2, 0, -13,
-1, -6, 0, 2, 0, -11, -1, -1, 0, 2, -1, 11, 0, -1, 0, -4, -1, 14, 0, 2, 0, -4,
-1, 6, 0, -2, -1, -6, 0, 4, 0, 4, 0, 3, -1, -3, 0, 7, -1, 9, 0, -4, -1, 8, 0,
11, 0, 8, 0, 4, -1, -3, 0, 11, -1, 0, 0, -3, 0, 13, -1, 2, 0, -6, -1, 4, 0, 6,
-1, -6, 0, 2, -1, 11, 0, 5, -1, -5, 0, 3, 0, 0, -1, -4, 0, 8, -1, 4, 0, -8, -1,
-5, 0, 8, -1, -3, 0, -11, 0, -9, 0, 0, 0, -3, -1, -14, 0, -6, 0, -6, 0, -8, -1,
-9, 0, -8, -1, -3, 0, -5, -1, -1, 0, -10, -1, -9, 0, -4, -1, 1, 0, -3, 0, 1, -1,
4, 0, 0, -1, 4, 0, -5, -1, 1, 0, 5, 0, 4, -1, 4, 0, 0, -1, 4, 0, -1, -1, 4, 0,
-6, -1, -8, 0, 8, 0, -3, 0, 1, 0, 1, -1, 10, 0, 0, -1, -10, 0, -3, -1, 2, 0, 4,
-1, -7, 0, -1, -1, -1, 0, -11, -1, -2, 0, 0, 0, -14, -1, -2, 0, 1, -1, -5, 0,
-6, -1, 1, 0, 3, -1, -5, 0, -3, -1, 0, 0, 3, 0, 2, -1, -1, 0, 8, -1, 3, 0, 1,
-1, 18, 0, 1, -1, -4, 0, 5, -1, 11, 0, 0, 0, -3, -1, -3, 0, -2, 0, 2, -1, -6, 0,
11, -1, -1, 0, -10, 0, 5, -1, -4, 0, -4, -1, 3, 0, -3, 0, 2, 0, -1, -1, -6, 0,
3, -1, -6, 0, -8, 0, -5, -1, -6, 0, -7, -1, -3, 0, 3, -1, -4, 0, -4, -1, -4, 0,
1, 0, 1, 0, -5, -1, 5, 0, -5, -1, -6, 0, -2, -1, 2, 0, 0, -1, -2, 0, 7, -1, 7,
0, -3, -1, -7, 0, 4, -1, -2, 0, -4, -1, 5, 0, -1, -1, -7, 0, 0, 0, -2, 0, 2, -1,
2, 0, 8, 0, 2, -1, -4, 0, 4, -1, 2, 0, 2, -1, -3, 0, 4, -1, 5, 0, -3, -1, 0, 0,
4, 0, -1, -1, 3, 0, 2, -1, 7, 0, 0, -1, 3, 0, 5, 0, -5, -1, 10, 0, -1, 0, 4, 0,
4, -1, 0, 0, 12, 0, 1, 0, -5, 0, 4, 0, -2, 0, -3, -1, 0, 0, -2, -1, -6, 0, -7,
-1, -4, 0, -3, -1, -2, 0, -6, -1, -2, 0, -5, -1, -2, 0, -1, -1, 0, 0, -4, -1, 0,
0, 6, 0, -1, 0, -1, -1, -2, 0, 3, 0, -3, -1, -4, 0, 2, -1, 3, 0, -2, -1, -2, 0,
1, 0, -3, 0, -2, -1, 0, 0, 0, -1, -5, 0, 0, -1, 2, 0, -5, 0, -3, -1, -2, 0, 3,
0, -4, -1, -7, 0, 3, -1, -4, 0, -6, 0, 1, -1, 0, 0, -7, -1, 1, 0, -1, 0, -3, -1,
1, 0, 1, 0, 4, -1, -2, 0, 5, -1, 6, 0, 3, -1, 0, 0, 2, -1, 6, 0, 3, -1, 2, 0, 2,
0, 5, 0, -1, 0, 3, -1, 4, 0, -6, 0, 3, 0, 5, -1, -3, 0, -3, -1, -4, 0, 2, -1,
-4, 0, -2, -1, -2, 0, -1, -1, -2, 0, -5, 0, 0, -1, -3, 0, 1, -1, -1, 0, -4, -1,
-7, 0, 1, 0, -3, 0, -6, 0, -4, -1, -2, 0, -3, -1, -6, 0, 0, 0, -2, -1, -3, 0,
-4, -1, -1, 0, -2, -1, -4, 0, -1, -1, 0, 0, -4, 0, -3, -1, 1, 0, -2, -1, -3, 0,
-2, 0, 0, -1, 1, 0, -5, -1, 2, 0, 2, -1, -3, 0, -1, -1, -2, -1, 3, 0, -1, -1,
-2, 0, 1, -1, -2, -1, 2, 0, 2, -1, -2, 0, 0, -1, 2, 0, 5, -1, -2, 0, -3, -1, 3,
0, 0, 0, -4, -1, 0, 0, -2, -1, -3, 0, -3, -1, -1, 0, -3, -1, -4, 0, 0, -1, -5,
0, -2, 0, -2, 0, -2, -1, -3, 0, -4, -1, -3, 0, -1, -1, -1, 0, -3, 0, -1, -1, 0,
0, 0, -1, 0, 0, 0, -1, 1, 0, 0, -1, 0, 0, 2, -1, 1, 0, 3, -1, 1, 0, 2, -1, 2, 0,
3, 0, 4, -1, 0, 0, 2, -1, 5, 0, 2, -1, 1, -1, 3, 0, 2, -1, 0, 0, 3, -1, 3, 0, 1,
0, 2, -1, 1, 0, 2, -1, 2, 0, 0, -1, 3, 0, 1, -1, -1, 0, 0, -1, 1, 0, -2, 0, 0,
0, 2, -1, -2, 0, -2, -1, -1, 0, 1, -1, -3, 0, -2, 0, 1, -1, -2, 0, -2, -1, -3,
0, -2, 0, -1, -1, -2, 0, -1, -1, 0, 0, -2, 0, -1, -1, 0, 0, -2, -1, 0, 0, 0, 0,
1, -1, -1, 0, 0, -1, 1, 0, 0, -1, 0, 0, 0, -1, 1, 0, -1, 0, 1, -1, 2, 0, -2, -1,
-1, 0, -1, -1, -2, 0, -2, 0, -2, -1, -1, 0, 0, 0, -1, -1, -2, 0, 0, -1, -2, 0,
-1, -1, 1, 0, -1, 0, -2, 0, 0, 0, 0, -1, -1, 0, -1, -1, -1, 0, -1, 0, 0, -1, 0,
0, 1, -1, 1, 0, 2, 0, 1, -1, 1, 0, 0, -1, 1, 0, 2, -1, 0, 0, 1, -1, 2, 0, 3, -1,
1, 0, 3, -1, 3, 0, 2, -1, 2, 0, 2, -1, 3, 0, 2, -1, 2, 0, 2, 0, 2, 0, 1, -1, 1,
0, 2, -1, -2, 0, -2, -1, -1, 0, -2, -1, -3, 0, -2, -1, -3, 0, -5, 0, -3, 0, -4,
-1, -4, 0, -5, -1, -5, 0, -4, -1, -5, 0, -4, 0, -3, 0, -5, 0, -4, -1, -1, 0, -3,
0, -5, 0, -3, 0, -2, -1, -3, 0, -3, 0, -2, 0, -2, -1, -2, 0, -3, -1, 1, 0, 0,
-1, -1, 0, 0, 0, 0, -1, 1, 0, -1, -1, 1, 0, 1, -1, 1, 0, 0, 0, 0, 0, 1, 0, -1,
0, 1, 0, 0, 0, 1, -1, 0, 0, 1, -1, 1, 0, 0, -1, 2, 0, 0, -1, 0, 0, -1, 0, 1, -1,
1, 0, 0, -1, 1, 0, 1, -1, 1, 0, 0, 0, 0, -1, 0, 0, -1, -1, -1, 0, 0, -1, -2, -1,
-2, 0, -2, -1, -2, 0, -3, 0, -1, -1, -1, 0, -2, -1, -2, 0, -3, -1, -2, 0, -3,
-1, -2, 0, -2, -1, -3, -1, -3, 0, -2, -1, -2, 0, -3, -1, -2, 0, -1, 0, -2, 0,
-2, -1, -2, 0, -2, -1, -1, 0, -1, 0, 0, 0, -1, 0, 0, -1, 0, 0, 0, -1, 1, 0, 1,
0, 2, -1, 1, 0, 1, 0, 1, -1, 0, 0, 0, -1, 1, 0, 1, -1, 1, 0, 1, -1, 1, 0, 0, -1,
1, 0, 0, -1, 0, 0, 0, -1, -1, 0, 1, -1, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, 0, 0,
0, -1, 0, 0, -1, -1, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, -1, 0, 0, -1, -1, 0,
0, -1, -1, 0, -1, -1, 1, 0, -1, 0, 0, -1, 1, 0, -1, -1, -1, 0, -1, -1, 0, 0, -2,
-1, -1, 0, -1, -1, -1, 0, -1, 0, -2, -1, -1, 0, -3, -1, -2, 0, -1, -1, -3, 0,
-3, 0, -2, -1, -2, 0, -2, 0, -2, -1, -2, 0, -1, -1, -1, 0, -1, 0, -1, -1, -1, 0,
-1, -1, 0, -1, 0, 0, 0, -1, 1, 0, 0, -1, 0, -1, 0, 0, 1, -1, 0, 0, 1, -1, 1, 0,
1, -1, 1, 0, 1, -1, 1, 0, 1, -1, 1, 0, 1, 0, 1, -1, 1, 0, -1, 0, -1, -1, 0, 0,
-1, 0, -1, -1, -1, 0, -1, -1, -1, 0, -1, -1, 0, 0, -1, -1, -1, 0, -1, -1, -2, 0,
-2, 0, -2, 0, -1, 0, -2, 0, -2, -1, -1, 0, -1, -1, -1, 0, -1, -1, 0, -1, 0, 0,
0, -1, 0, 0, 0, -1, -1, 0, -1, -1, 0, 0, -1, -1, -1, -1, 0, 0, 0, -1, -1, 0, 0,
-1, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0,
0, -1, 0, 0, 0, 0, -1, 0, -1, -1, 0, 0, -1, -1, -2, -1, -2, 0, -2, -1, -2, 0,
-2, -1, -2, 0, -1, 0, -2, -1, -2, 0, -2, -1, -2, 0, -2, -1, -2, 0, -2, -1, -3,
0, -2, -1, -2, 0, -2, -1, -2, 0, -2, -1, -1, 0, -1, -1, -1, 0, -1, -1, -1, 0, 0,
0, -1, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 1, 0, 0, -1, 0, 0, 0, 0, 1,
-1, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, -1,
0, 0, 0, -1, -1, 0, 0, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, 0, 0, -1, -1, 0, 0, -1,
0, 0, 0, 0, -1, -1, 0, 0, 0, -1, -1, 0, 0, -1, -1, -1, -1, 0, -1, -1, 0, 0, 0,
0, -1, -1, 0, 0, 0, -1, 0, 0, -1, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, -1, 0, 0, 0,
-1, 1, 0, 0, 0, 0, -1, 0, 0, 0, -1, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, 0,
0, 0, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -2, 0, -1, -1, -2, 0, -2, -1, -2,
0, -2, 0, -2, -1, -2, 0, -2, 0, -2, 0, -2, 0, -2, -1, -2, 0, -2, -1, -1, 0, -1,
-1, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0,
-1, 0, 0, 0, -1, 0, 0, 1, -1, 1, 0, 0, 0, 1, -1, 0, 0, 0, -1, 0, 0, 0, 0, 1, -1,
0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, -1, 0, -1, -1, -1, 0,
-1, 0, -1, 0, -1, -1, -1, 0, -1, -1, -1, 0, -1, -1, -1, 0, -1, -1, -1, 0, -1, 0,
-1, 0, -1, 0, -1, -1, -1, 0, -1, -1, -1, 0, -1, -1, -1, 0, -1, 0, -1, -1, -1, 0,
-1, -1, -1, 0, -1, 0, -1, -1, -1, 0, -1, -1, -1, 0, -1, -1, -1, 0, 0, -1, 0, 0,
0, -1, 0, 0, 0, 0, 0, -1, -1, 0, -1, -1, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0,
0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, 0,
-1, 0, 0, -1, -1, -1, 0, -1, -1, -1, 0, -1, -1, -1, 0, -1, -1, -1, 0, -1, -1,
-1, 0, -1, -1, -1, 0, -1, 0, -1, -1, -1, 0, -1, 0, -1, 0, -1, -1, 0, 0, 0, 0, 0,
-1, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1,
0, 0, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, -1, -1, -1, 0, -1, 0, 0, -1,
0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0,
-1, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0,
0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, -1, 0,
-1, -1, -1, 0, -1, -1, -1, 0, -1, -1, -1, 0, -1, -1, -1, 0, -1, -1, -1, 0, -1,
-1, -1, 0, -1, 0, -1, -1, 0, 0, -1, -1, -1, 0, -1, 0, -1, -1, -1, 0, -1, 0, -1,
-1, -1, 0, -1, -1, -1, 0, -1, -1, -1, 0, -1, -1, -1, 0, 0, 0, -1, -1, 0, 0, -1,
-1, -1, 0, -1, 0, -1, -1, -1, 0, -1, -1, -1, 0, -1, -1, -1, 0, -1, -1, -1, 0,
-1, 0, -1, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, -1, 0, -1, -1, -1, 0,
0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, 0, 0,
-1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, 0, -1, -1, -1, 0, -1, 0, -1, -1, -1, 0,
-1, 0, -1, -1, -1, 0, -1, 0, -1, -1, -1, 0, -1, -1, -1, 0, -1, -1, -1, 0, -1,
-1, -1, 0, -1, -1, -1, 0, -1, 0, -1, -1, -1, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, 0,
0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0,
-1, 0, -1, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0,
0, -1, 0, 0, 0, -1, 0, 0, 0, -1, -1, 0, -1, -1, -1, 0, -1, -1, -1, 0, -1, -1,
-1, 0, -1, -1, -1, 0, -1, 0, -1, -1, -1, 0, -1, -1, -1, 0, -1, 0, -1, -1, -1, 0,
-1, 0, -1, -1, -1, 0, -1, -1, -1, 0, -1, -1, -1, 0, -1, 0, -1, -1, -1, 0, -1,
-1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0,
0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, 0, -1, -1, -1, 0, -1, -1, -1, 0, -1, -1, -1,
0, -1, -1, -1, 0, -1, 0, -1, 0, -1, -1, -1, 0, -1, 0, -1, -1, -1, 0, -1, -1, -1,
0, -1, 0, -1, 0, -1, -1, -1, 0, -1, -1, -1, 0, -1, 0, -1, -1, -1, 0, -1, -1, -1,
0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, 0, 0, 0, 0, -1, 0, 0, 0, -1, 0,
-1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, -1, 0, 0, 0, -1, 0, 0, -1, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, -1,
0, -1, -1, -1, 0, -1, -1, -1, 0, -1, -1, -1, 0, -1, -1, -1, 0, -1, 0, -1, -1,
-1, 0, -1, -1, -1, 0, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, 0, 0, 0,
-1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
-1, 0, };

#endif /* JAZZTEN_H_ */