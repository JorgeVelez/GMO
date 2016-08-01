#ifndef JAZZFOUR_H_
#define JAZZFOUR_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define JAZZFOUR_NUM_CELLS 3981
#define JAZZFOUR_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) JAZZFOUR_DATA [] = {-2,
3, 5, -6, -2, -3, -22, -41, -46, -21, -5, 4, 22, 4, 7, -2, 7, -13, 9, 18, -23,
-11, 5, -7, -64, -60, -27, 45, 102, 115, 101, 91, 59, 33, 17, -11, -37, -25, 23,
-2, -25, -15, -18, -88, -73, -56, -69, -28, 0, 15, -7, 5, 13, 10, 3, -12, 25,
65, 43, 16, 62, 92, 72, 42, 6, -9, 9, 37, 30, 19, -32, -78, -94, -116, -117,
-106, -78, -58, -33, -14, -17, -4, 12, 18, 14, 16, 21, 1, -12, 1, -10, -40, -26,
-8, -5, 14, 28, 20, 10, 19, 27, 26, 36, 57, 61, 46, 44, 30, 16, 12, 18, 34, 26,
28, 24, 9, -6, -12, -5, 9, 15, -1, -19, -28, -20, -19, -32, -52, -58, -50, -46,
-37, -22, 9, 30, 36, 30, 27, 27, 13, 9, 9, -5, -34, -40, -22, -23, -44, -50,
-13, 29, 61, 65, 41, 8, -16, -18, -21, -21, -35, -46, -42, -27, -6, 37, 86, 83,
43, 1, -18, -24, -24, -23, -14, 2, 2, -3, -13, -41, -55, -51, -36, -20, -6, -2,
-18, -23, -14, 10, 19, 22, 26, 21, 14, 11, 28, 59, 81, 75, 69, 58, 22, -19, -33,
-20, -7, -8, -20, -46, -50, -27, -5, 4, -3, -8, -10, 4, 21, 28, 41, 47, 36, 20,
8, -5, -19, -44, -51, -34, 1, 47, 64, 60, 49, 27, -28, -77, -94, -90, -72, -58,
-40, -25, -14, -17, -22, -16, -13, -6, 3, 1, -1, 8, 10, -3, -17, -6, 8, 6, 0, 8,
19, 13, 10, 9, 1, -15, -22, -11, 14, 50, 74, 75, 61, 50, 40, 26, 2, -17, -13,
-10, -16, -23, -14, -1, -1, -4, 2, 11, 6, -9, -16, -13, -9, -6, -13, -19, -21,
-14, -5, 1, 13, 23, 21, 13, 7, 1, -9, -17, -15, 1, 20, 26, 8, -30, -57, -47,
-28, -19, -13, -16, -19, -16, 4, 28, 45, 53, 43, 17, -7, -25, -41, -43, -27,
-12, 0, 20, 32, 36, 34, 29, 14, -11, -38, -56, -55, -47, -34, -14, -1, -7, -20,
-14, 4, 15, 22, 31, 37, 31, 16, 4, -2, -2, 3, 11, 11, 24, 53, 67, 51, 19, -10,
-36, -53, -49, -22, 3, 21, 33, 38, 32, 19, 7, -3, -3, 3, 12, 14, 2, -16, -23,
-18, -14, -13, -7, -3, -6, -12, -17, -16, -22, -32, -40, -37, -28, -19, -14, -9,
-6, -12, -20, -20, -14, -4, 9, 26, 39, 37, 26, 19, 18, 13, 1, -5, -6, -10, -15,
-20, -19, -16, -11, -5, 4, 17, 23, 24, 22, 12, -8, -19, -10, 8, 15, 13, 11, 15,
23, 28, 30, 22, 8, -9, -18, -14, 0, 16, 23, 18, -1, -10, -4, 2, 7, 12, 8, -6,
-17, -23, -29, -33, -28, -13, 3, 18, 28, 28, 18, 1, -20, -39, -50, -52, -43,
-29, -13, 1, 13, 16, 10, 4, 6, 10, 17, 25, 28, 21, 8, 0, -6, -10, -7, 0, 7, 10,
4, -5, -13, -18, -21, -22, -20, -14, -3, 9, 14, 8, 0, -9, -16, -18, -12, 0, 13,
22, 26, 25, 24, 25, 21, 15, 5, -3, -9, -12, -15, -11, -2, 1, -1, -4, -8, -13,
-11, -4, -4, -4, 2, 9, 18, 22, 22, 26, 32, 33, 24, 11, -4, -13, -10, 1, 13, 15,
4, -19, -44, -53, -44, -27, -12, 0, 6, 1, -13, -30, -38, -39, -35, -27, -13, 1,
8, 12, 15, 18, 17, 9, -2, -8, -5, 1, 8, 11, 3, -14, -29, -31, -21, 0, 25, 43,
51, 49, 40, 29, 18, 10, 10, 12, 14, 12, 5, -2, -7, -11, -16, -18, -19, -17, -13,
-11, -12, -16, -15, -7, 4, 10, 10, 6, -1, -6, -4, 3, 5, -1, -1, 3, 5, 3, 1, 2,
6, 8, 6, 2, -5, -13, -20, -26, -28, -27, -25, -18, -4, 9, 18, 23, 25, 24, 19,
10, 0, -8, -12, -14, -13, -9, -2, 2, 0, -4, -8, -12, -17, -20, -18, -10, 0, 7,
13, 16, 17, 17, 14, 5, -8, -21, -26, -20, -5, 13, 27, 32, 27, 17, 8, 3, 2, 0,
-7, -15, -24, -28, -24, -10, 6, 14, 18, 18, 19, 22, 25, 26, 25, 20, 12, 3, -5,
-11, -13, -12, -10, -11, -12, -13, -17, -20, -19, -18, -19, -21, -21, -15, -4,
5, 12, 16, 13, 4, -7, -16, -19, -14, -1, 13, 25, 31, 26, 14, 2, -8, -17, -23,
-23, -18, -13, -10, -12, -15, -18, -16, -10, -2, 10, 19, 21, 16, 8, -1, -5, -1,
8, 17, 22, 21, 17, 12, 9, 11, 11, 6, -1, -8, -15, -18, -17, -10, 1, 12, 20, 25,
28, 29, 24, 14, 3, -6, -13, -16, -14, -10, -7, -10, -16, -23, -29, -34, -38,
-37, -32, -20, -5, 9, 17, 18, 16, 12, 7, 5, 6, 7, 7, 3, 0, -1, 3, 10, 18, 25,
22, 10, -6, -18, -24, -26, -25, -24, -23, -20, -12, -1, 9, 14, 15, 14, 14, 13,
12, 11, 9, 8, 8, 9, 6, 1, -4, -9, -13, -15, -16, -15, -11, -2, 5, 8, 9, 7, 5, 1,
-2, -1, 2, 4, 4, 2, -2, -6, -5, 1, 12, 23, 29, 27, 21, 14, 7, 2, -3, -12, -20,
-23, -21, -17, -16, -17, -16, -10, 0, 12, 22, 25, 21, 11, -4, -18, -28, -31,
-27, -20, -14, -11, -13, -15, -16, -12, -4, 5, 12, 14, 10, 2, -4, -7, -4, 1, 6,
9, 8, 5, 2, 4, 11, 22, 34, 40, 39, 33, 25, 16, 8, -2, -17, -33, -44, -46, -39,
-26, -11, 1, 9, 11, 7, 0, -2, 2, 12, 22, 26, 21, 9, -4, -13, -15, -10, -2, 5, 7,
3, -3, -8, -10, -10, -9, -8, -7, -6, -5, -2, 1, 2, 0, -5, -11, -15, -14, -9, -2,
5, 12, 17, 19, 14, 6, -2, -8, -12, -14, -15, -15, -13, -10, -6, -3, -2, 0, 3, 8,
14, 20, 23, 20, 11, 1, -6, -6, -2, 2, 1, -3, -9, -11, -9, -6, -5, -6, -9, -10,
-6, 0, 7, 12, 12, 9, 2, -4, -6, -3, 2, 9, 14, 16, 16, 14, 11, 9, 6, 1, -8, -16,
-23, -24, -18, -8, 2, 7, 7, 2, -3, -8, -11, -10, -6, -2, -1, -2, -4, -4, -3, -1,
0, 1, 2, 5, 9, 14, 16, 13, 5, -5, -15, -20, -19, -14, -8, -2, 1, -1, -6, -11,
-14, -13, -10, -6, -2, 0, -1, -1, 1, 4, 10, 17, 22, 25, 23, 17, 9, 2, -2, -2,
-1, 0, 0, 0, 1, 2, 3, 4, 7, 9, 10, 7, 3, 1, 1, 4, 7, 6, 1, -6, -15, -23, -28,
-29, -27, -23, -18, -13, -9, -6, -3, -2, -2, -2, 0, 4, 8, 11, 11, 10, 8, 6, 6,
6, 4, 0, -5, -7, -6, 0, 7, 13, 14, 9, 1, -8, -14, -17, -15, -10, -5, -1, 1, 2,
2, 5, 8, 12, 14, 12, 9, 7, 5, 5, 2, -2, -8, -15, -20, -21, -18, -13, -6, 0, 5,
7, 9, 10, 12, 12, 9, 5, 0, -5, -8, -9, -8, -7, -8, -7, -6, -1, 6, 12, 15, 16,
16, 15, 15, 12, 7, -1, -8, -13, -15, -14, -9, -4, 1, 4, 5, 3, 0, -3, -6, -8, -9,
-10, -11, -13, -15, -15, -15, -13, -12, -11, -9, -8, -5, -3, 0, 4, 10, 17, 21,
21, 17, 10, 3, -2, -4, -2, 1, 4, 7, 9, 11, 13, 13, 12, 10, 7, 2, -4, -10, -14,
-18, -20, -20, -17, -12, -6, 0, 5, 9, 12, 13, 14, 14, 12, 9, 6, 2, 1, 2, 3, 2,
-3, -10, -18, -24, -25, -20, -9, 3, 15, 21, 20, 13, 1, -11, -19, -22, -20, -15,
-10, -7, -4, -1, 3, 7, 10, 10, 7, 2, -3, -6, -7, -6, -4, -2, 0, 1, 2, 4, 7, 11,
15, 17, 17, 17, 15, 12, 8, 3, -4, -10, -17, -21, -23, -23, -20, -16, -12, -8,
-5, -1, 1, 4, 7, 10, 13, 15, 15, 14, 11, 7, 2, -3, -6, -7, -5, -1, 2, 3, 2, 0,
-3, -6, -8, -9, -8, -5, -2, 1, 2, 3, 3, 3, 3, 2, 0, -2, -4, -5, -3, 0, 3, 4, 5,
5, 4, 3, 2, 0, -3, -7, -12, -14, -13, -10, -6, -2, 1, 3, 2, 0, -3, -6, -8, -10,
-10, -9, -6, -3, 0, 1, 2, 3, 4, 4, 4, 2, -1, -3, -4, -1, 5, 12, 17, 20, 20, 17,
13, 8, 3, 1, 2, 6, 10, 12, 11, 5, -3, -10, -15, -17, -15, -13, -10, -7, -5, -5,
-8, -13, -19, -24, -25, -21, -15, -7, 0, 5, 8, 11, 13, 16, 18, 20, 20, 18, 12,
4, -6, -15, -21, -23, -20, -13, -5, 3, 8, 11, 11, 10, 9, 7, 4, 0, -4, -8, -9,
-7, -2, 4, 9, 11, 11, 9, 5, 2, -1, -2, -3, -4, -5, -5, -7, -9, -12, -13, -14,
-12, -8, -3, 3, 8, 11, 13, 12, 11, 10, 8, 4, 0, -6, -12, -16, -17, -16, -13, -9,
-4, 1, 5, 9, 13, 17, 19, 19, 15, 9, 3, -2, -4, -3, 0, 2, 3, 2, -2, -6, -11, -14,
-16, -14, -9, -4, 0, 0, -4, -11, -18, -23, -25, -23, -17, -9, 0, 8, 14, 18, 19,
19, 19, 18, 15, 10, 4, -2, -8, -10, -9, -6, -2, 0, 1, 1, 2, 3, 6, 9, 11, 10, 7,
1, -5, -11, -15, -17, -16, -12, -7, -1, 4, 10, 14, 17, 17, 14, 10, 4, 0, -3, -3,
-3, -4, -6, -8, -10, -10, -9, -7, -4, -1, -1, -1, -1, 0, 1, 3, 3, 1, -3, -9,
-13, -16, -15, -13, -8, -4, 0, 3, 4, 4, 3, 2, 2, 2, 3, 6, 8, 11, 12, 12, 10, 7,
4, 1, 0, 0, 1, 3, 4, 4, 2, -1, -5, -9, -12, -15, -16, -15, -14, -11, -8, -5, -2,
2, 6, 10, 13, 13, 11, 8, 4, 1, -1, 0, 1, 1, 0, -2, -4, -5, -4, -2, -2, -3, -4,
-6, -6, -5, -2, 2, 5, 6, 6, 4, 2, 1, 1, 2, 3, 4, 3, 1, -1, -3, -4, -4, -2, -1,
-1, -1, -2, -3, -2, 0, 2, 3, 2, -2, -6, -10, -13, -14, -13, -11, -9, -7, -5, -3,
-1, 0, 1, 2, 2, 1, 1, 0, 0, 1, 2, 3, 6, 9, 12, 15, 17, 17, 15, 11, 7, 4, 3, 3,
3, 4, 3, 1, -3, -8, -11, -12, -11, -7, -4, -1, -1, -3, -6, -10, -13, -15, -15,
-13, -10, -7, -5, -4, -4, -3, -2, 2, 6, 10, 13, 14, 13, 10, 5, 0, -4, -6, -7,
-8, -8, -7, -5, -1, 2, 5, 6, 6, 4, 3, 1, 0, -1, -2, -3, -4, -4, -3, -2, -1, -1,
-1, -1, 0, 2, 4, 7, 9, 9, 7, 2, -3, -7, -10, -12, -11, -9, -7, -4, -2, 0, 2, 3,
3, 3, 2, 1, 0, 0, -1, -2, -4, -7, -10, -12, -12, -9, -3, 4, 11, 16, 20, 21, 21,
19, 15, 10, 5, 0, -4, -7, -10, -14, -16, -17, -17, -14, -9, -5, -1, 1, 1, 1, 0,
-2, -3, -6, -8, -10, -10, -8, -5, -2, 2, 4, 5, 6, 8, 9, 11, 11, 10, 6, 3, -1,
-3, -4, -5, -5, -6, -6, -6, -4, 0, 5, 10, 12, 12, 8, 2, -5, -10, -12, -11, -7,
-3, 1, 3, 3, 2, 1, 1, 2, 5, 8, 10, 10, 7, 4, 1, -2, -4, -5, -6, -6, -6, -6, -6,
-5, -4, -4, -4, -5, -6, -7, -9, -9, -9, -9, -9, -9, -9, -8, -5, -1, 3, 6, 9, 10,
10, 10, 10, 10, 10, 10, 10, 8, 7, 4, 2, 0, -2, -4, -4, -3, -1, 0, 1, 1, -1, -3,
-5, -7, -8, -8, -8, -8, -7, -5, -3, 0, 2, 4, 6, 6, 6, 6, 6, 4, 1, -2, -4, -5,
-5, -3, -2, -2, -3, -5, -5, -5, -2, 1, 5, 7, 6, 4, 1, -2, -3, -3, 0, 2, 4, 4, 4,
3, 1, -2, -4, -6, -6, -5, -3, 1, 4, 6, 6, 6, 4, 3, 1, 0, -2, -3, -4, -5, -6, -6,
-6, -7, -8, -9, -11, -11, -11, -10, -8, -5, -1, 2, 4, 5, 5, 5, 5, 5, 6, 6, 6, 6,
7, 9, 11, 13, 15, 16, 15, 13, 9, 4, -1, -7, -12, -15, -17, -17, -16, -13, -9,
-6, -3, -1, 0, 0, -1, -2, -2, -2, -1, 0, 1, 1, 0, -3, -5, -8, -9, -8, -6, -2, 3,
8, 11, 12, 11, 9, 6, 2, -2, -6, -10, -12, -12, -10, -6, -1, 5, 8, 10, 9, 7, 4,
1, -1, -3, -4, -5, -5, -5, -5, -5, -4, -2, -1, 2, 4, 7, 9, 11, 10, 9, 5, 1, -3,
-6, -7, -7, -6, -5, -5, -7, -8, -9, -8, -6, -2, 2, 5, 6, 5, 1, -3, -7, -9, -9,
-7, -2, 3, 8, 11, 13, 14, 15, 14, 13, 10, 7, 2, -2, -5, -8, -10, -11, -12, -12,
-12, -12, -10, -8, -4, -1, 2, 4, 4, 2, 0, -3, -5, -6, -5, -4, -3, -1, 0, 3, 5,
7, 9, 9, 9, 7, 4, 1, -2, -4, -5, -6, -7, -7, -7, -7, -6, -4, -1, 2, 5, 6, 7, 6,
5, 3, 1, -2, -4, -5, -6, -6, -5, -4, -2, 0, 3, 5, 8, 10, 11, 11, 10, 8, 4, 1,
-2, -4, -5, -5, -6, -8, -10, -11, -12, -12, -10, -7, -4, -2, -2, -2, -4, -6, -7,
-7, -6, -4, -2, 0, 2, 4, 6, 8, 9, 10, 11, 11, 10, 8, 6, 4, 2, 1, 0, 0, -1, -2,
-4, -5, -6, -6, -4, -2, 0, 2, 2, 1, -2, -5, -7, -8, -8, -6, -4, -1, 2, 4, 5, 4,
3, 1, -1, -3, -4, -4, -3, -2, -1, 0, 0, 1, 2, 2, 2, 2, 0, -2, -4, -5, -7, -7,
-7, -5, -2, 1, 5, 8, 9, 8, 6, 3, 0, -1, -1, -1, 1, 3, 3, 3, 1, -1, -3, -4, -4,
-3, -1, 1, 1, 1, 0, -3, -5, -7, -9, -10, -11, -11, -11, -10, -7, -4, -1, 2, 4,
4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 6, 8, 9, 9, 8, 7, 5, 3, 2, 0, -2, -4, -6, -8,
-9, -9, -8, -7, -6, -5, -5, -6, -7, -7, -6, -3, 0, 4, 7, 7, 6, 3, -1, -5, -7,
-8, -7, -5, -1, 2, 5, 7, 8, 9, 8, 6, 3, 0, -4, -7, -9, -9, -8, -7, -5, -3, -3,
-2, -1, 0, 1, 3, 4, 5, 4, 4, 3, 1, 0, -2, -3, -3, -2, 0, 3, 6, 9, 10, 10, 9, 6,
3, -1, -5, -8, -11, -13, -14, -14, -12, -10, -7, -4, -1, 2, 4, 5, 6, 6, 4, 3, 0,
-2, -3, -4, -4, -3, -2, 0, 2, 3, 5, 6, 6, 7, 7, 6, 5, 3, 1, -2, -5, -7, -8, -9,
-8, -7, -6, -6, -5, -4, -2, 0, 2, 5, 6, 6, 5, 3, 0, -3, -5, -6, -6, -5, -2, 1,
3, 6, 7, 8, 8, 6, 4, 1, -2, -5, -7, -9, -9, -9, -8, -6, -5, -3, -3, -2, -2, -1,
0, 2, 4, 5, 6, 5, 4, 2, 0, -1, -1, 0, 3, 5, 8, 9, 10, 9, 7, 5, 2, 0, -3, -5, -7,
-8, -9, -9, -9, -9, -9, -9, -8, -6, -5, -3, -3, -3, -3, -4, -4, -3, -1, 2, 4, 6,
7, 8, 7, 6, 5, 4, 4, 3, 2, 1, 0, -1, -1, -1, -1, -1, -1, -2, -2, -2, -2, -1, 1,
1, 1, 1, -1, -2, -4, -4, -4, -4, -2, -1, -1, -1, -1, -2, -2, -2, -2, -1, 0, 1,
2, 3, 3, 4, 3, 2, 0, -2, -4, -4, -4, -2, -1, 0, -1, -2, -4, -6, -6, -5, -3, 0,
2, 3, 4, 4, 3, 3, 3, 4, 5, 6, 6, 6, 5, 3, 1, -1, -3, -4, -4, -3, -3, -2, -2, -3,
-4, -5, -6, -8, -8, -8, -8, -7, -6, -4, -3, -1, 0, 1, 2, 3, 3, 4, 4, 5, 6, 7, 7,
6, 4, 2, -1, -3, -4, -4, -2, 1, 4, 6, 7, 6, 4, 0, -3, -7, -9, -11, -11, -10, -8,
-6, -3, 0, 2, 4, 5, 5, 5, 4, 3, 1, 0, -1, -2, -3, -3, -3, -3, -3, -2, 0, 1, 2,
3, 4, 5, 5, 5, 4, 3, 0, -3, -7, -9, -11, -11, -10, -8, -6, -3, -1, 1, 2, 3, 4,
5, 5, 5, 4, 3, 3, 2, 2, 2, 2, 2, 3, 3, 3, 3, 2, 1, 0, 0, -1, -2, -4, -6, -8,
-10, -11, -11, -9, -7, -3, 0, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 1, 0, -2, -3, -3,
-3, -2, -1, 1, 3, 4, 4, 4, 3, 1, -1, -3, -4, -5, -6, -5, -5, -3, -2, -1, 1, 2,
4, 4, 4, 2, 0, -2, -3, -4, -4, -3, -2, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, -1, -2, -3,
-5, -6, -6, -6, -6, -5, -4, -3, -1, 0, 1, 2, 3, 3, 3, 2, 2, 1, 1, 1, 1, 2, 2, 3,
3, 4, 4, 4, 4, 3, 2, 2, 1, 1, 0, 0, -2, -4, -6, -8, -10, -10, -10, -8, -7, -5,
-3, -2, -1, -1, -1, 0, 0, 1, 2, 2, 3, 3, 4, 3, 3, 3, 2, 1, 1, 0, 0, 0, 0, 1, 1,
1, 0, 0, -1, -2, -3, -3, -3, -3, -2, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0,
0, 0, -1, -1, -1, 0, 0, 1, 1, 1, 0, -1, -2, -2, -2, -2, -1, 0, 0, 1, 0, -1, -2,
-4, -5, -5, -5, -4, -3, -1, 1, 2, 3, 4, 5, 5, 5, 4, 3, 3, 2, 1, 0, -1, -2, -3,
-3, -3, -3, -3, -2, -2, -1, -1, -1, -1, -1, -1, -1, -2, -3, -4, -5, -6, -6, -5,
-4, -2, 0, 2, 3, 4, 5, 5, 4, 4, 3, 2, 1, 0, -1, -1, -1, 0, 1, 1, 1, 1, 0, -1,
-2, -3, -3, -3, -3, -2, -2, -2, -2, -3, -3, -3, -2, -1, 0, 1, 3, 4, 4, 4, 3, 2,
2, 0, -1, -1, -2, -2, -3, -3, -2, -2, -1, 0, 0, 0, 0, 0, -1, -2, -3, -4, -5, -5,
-5, -4, -3, -2, -1, 0, 1, 2, 2, 3, 4, 4, 3, 3, 2, 2, 1, 0, 0, 0, 0, 0, 0, 0, 1,
1, 1, 1, 1, 0, -1, -3, -4, -5, -6, -6, -5, -5, -3, -2, -1, 0, 0, 1, 2, 2, 3, 3,
2, 1, 0, -1, -2, -3, -3, -3, -2, -1, 1, 2, 2, 3, 2, 1, 1, 0, 0, 0, 0, 0, -1, -2,
-3, -4, -5, -5, -4, -3, -1, 0, 2, 2, 3, 3, 3, 3, 2, 1, 0, -1, -1, -2, -2, -2,
-2, -1, -1, -1, -1, -1, -2, -2, -3, -4, -4, -4, -3, -3, -3, -2, -2, -1, -1, 0,
1, 2, 2, 3, 4, 4, 3, 3, 2, 2, 2, 1, 1, 1, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0, -1,
-2, -3, -4, -4, -4, -4, -3, -2, -2, -1, -1, -1, -2, -2, -2, -2, -1, -1, 0, 1, 1,
2, 2, 2, 2, 2, 1, 1, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -2, -2, -2, -2, -1, -1, 0, 1, 1, 2, 2, 2, 1, 1, 1, 1, 0,
0, -1, -1, -2, -2, -2, -2, -2, -2, -1, -2, -2, -3, -3, -3, -3, -2, -1, 0, 1, 1,
1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 1, 0, -1, -2, -3, -3, -3, -3, -3, -2, -2,
-1, -1, 0, 0, 0, 0, -1, -1, -2, -2, -2, -2, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1,
1, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -2, -3, -3,
-3, -3, -2, -1, 0, 1, 2, 2, 2, 2, 2, 2, 2, 1, 1, 0, 0, -1, -2, -3, -3, -3, -3,
-2, -1, -1, -1, -1, -1, -1, -1, -2, -2, -2, -3, -3, -2, -2, -2, -1, -1, 0, 1, 1,
2, 2, 3, 3, 3, 3, 2, 2, 1, 0, -1, -2, -2, -2, -2, -2, -1, -1, 0, 0, 0, -1, -1,
-2, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, -1,
-1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -2, -2, -2, -1, -1,
-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -2, -2, -2,
-2, -2, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2,
-2, -1, -1, -1, -1, -1, -1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, -1, -1, -1, -1, -1,
-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 1, 1, 1, 1,
1, 1, 0, 0, 0, 0, -1, -1, -1, -1, -2, -2, -2, -1, -1, -1, -1, 0, 0, 0, 0, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1,
-1, -1, -1, 0, };

#endif /* JAZZFOUR_H_ */
