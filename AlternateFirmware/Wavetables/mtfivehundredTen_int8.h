#ifndef MTFIVEHUNDREDTEN_H_
#define MTFIVEHUNDREDTEN_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define MTFIVEHUNDREDTEN_NUM_CELLS 4508
#define MTFIVEHUNDREDTEN_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) MTFIVEHUNDREDTEN_DATA []
= {0, 3, 0, -2, -1, 6, 0, -25, -1, 40, 0, 54, 0, -45, -1, 56, 0, -75, -1, 51, 0,
2, -1, -66, 0, 36, 0, -70, -1, -7, 0, -24, -1, 11, 0, 32, 0, -7, -1, -68, 0, 58,
0, -19, -1, -82, 0, 27, -1, 10, 0, 35, -1, -7, 0, -13, 0, -33, -1, 25, 0, 17,
-1, -13, 0, 16, -1, -17, 0, 43, -1, -4, 0, -35, -1, 22, 0, 14, -1, 62, 0, 46,
-1, -16, 0, 57, -1, 56, 0, -49, 0, 36, -1, -34, 0, -26, -1, -29, 0, -60, -1, 24,
0, -46, -1, -23, 0, -59, -1, -26, 0, -6, -1, 41, 0, -30, -1, -29, 0, 17, -1, 0,
0, 31, -1, -13, 0, 75, -1, -23, 0, 10, -1, 16, 0, -57, -1, -1, 0, -6, 0, 54, -1,
-42, 0, -40, -1, 48, 0, 18, -1, 24, 0, -20, -1, 34, 0, -2, -1, -25, 0, -13, -1,
0, 0, -24, -1, 6, 0, 109, -1, -50, 0, 17, -1, 38, 0, 38, -1, -21, 0, -85, 0, 51,
-1, 44, 0, -24, 0, -28, -1, -19, 0, -7, -1, -17, 0, -116, -1, 40, 0, -36, -1,
-64, 0, 43, -1, -25, 0, 37, -1, 12, 0, 11, -1, 4, 0, -10, -1, 44, 0, 20, -1,
-47, 0, -24, 0, 53, 0, 47, -1, -28, 0, -30, 0, 8, -1, 35, 0, 11, -1, 13, 0, -1,
0, -25, -1, -11, 0, 6, -1, -13, 0, 11, 0, 42, -1, -12, 0, 14, -1, -44, 0, -34,
-1, 55, 0, -24, -1, -80, 0, 6, -1, 19, -1, 3, 0, -51, -1, -7, 0, 7, -1, 2, 0,
-8, -1, -12, 0, 42, -1, 17, 0, 0, -1, -41, 0, 73, -1, 45, 0, 0, -1, -48, 0, 46,
0, 34, -1, -19, 0, 21, 0, -60, -1, 2, 0, -11, -1, -10, 0, -8, 0, -1, 0, -18, -1,
63, 0, -10, -1, -63, 0, 61, 0, 35, 0, -10, -1, -37, 0, 37, -1, 47, 0, -43, -1,
-3, -1, 29, 0, -16, -1, -35, 0, 7, -1, 52, 0, -63, -1, -52, 0, 39, 0, -52, 0,
-37, 0, 31, 0, 0, -1, -40, 0, -62, -1, 59, 0, 14, -1, -95, 0, 18, 0, 28, -1, 18,
0, 26, -1, 14, 0, 36, 0, 14, -1, 53, 0, 27, -1, 5, 0, 29, -1, 15, 0, 20, -1,
-29, 0, 12, 0, 23, -1, 5, 0, -20, -1, -11, 0, -4, -1, -46, 0, 4, -1, -41, -1,
-72, 0, 23, -1, -16, 0, -31, -1, -31, 0, -34, -1, -12, 0, -48, 0, 15, -1, -3, 0,
0, -1, 13, 0, 58, -1, 41, 0, 2, -1, 40, 0, 81, -1, 16, 0, -4, -1, 53, 0, 8, 0,
17, -1, -37, 0, 25, -1, 37, 0, -71, -1, -41, 0, 0, 0, -25, -1, -17, 0, -35, -1,
1, 0, -14, -1, 36, 0, -4, -1, -74, 0, 28, 0, -17, -1, -5, 0, 24, -1, -27, 0, 66,
0, 24, -1, -47, 0, 56, -1, -52, 0, 49, -1, 13, 0, 14, 0, 30, -1, 2, 0, 3, -1,
-41, 0, 23, 0, -4, -1, 9, 0, -73, -1, 44, 0, -49, 0, -17, -1, -31, 0, 4, -1, 24,
0, -71, 0, 42, -1, -22, 0, -31, -1, -31, 0, 81, 0, 0, -1, -3, 0, 20, 0, 32, -1,
23, 0, -15, -1, 27, 0, 34, -1, 60, 0, 15, -1, -2, 0, -9, -1, -47, 0, 24, -1, 2,
0, -35, 0, -29, -1, -20, 0, 26, -1, -74, 0, 0, -1, -3, 0, -9, -1, -67, 0, 14,
-1, -22, 0, -64, -1, -2, 0, -2, -1, 34, 0, -27, -1, 44, 0, -4, -1, -34, 0, 37,
-1, 47, 0, -28, -1, 55, 0, 43, -1, -8, 0, 19, 0, 17, -1, -11, 0, 29, -1, -16, 0,
-21, 0, -5, 0, -5, 0, 38, -1, -12, 0, -14, -1, -25, 0, 45, -1, -18, 0, -2, 0,
-8, 0, -25, 0, 4, 0, -6, -1, 33, 0, -38, -1, 33, 0, 8, 0, -8, -1, 69, 0, 13, -1,
-25, 0, -29, 0, 31, 0, -32, -1, -19, 0, 9, -1, -30, 0, 2, 0, -29, 0, -20, -1,
-30, 0, -45, -1, -13, 0, 14, -1, 5, 0, -10, -1, 19, 0, 14, 0, 9, -1, -11, 0, 29,
-1, 6, 0, -20, 0, 37, -1, 23, 0, 0, 0, 3, -1, 69, 0, 4, -1, -2, 0, 24, -1, 26,
0, 35, -1, -58, 0, -40, -1, 14, 0, 19, -1, -40, 0, -10, 0, 24, -1, -45, 0, -41,
-1, -9, 0, 27, 0, -80, 0, -3, -1, -2, 0, -19, -1, -2, -1, -42, 0, 13, -1, -30,
0, 2, -1, 18, 0, 29, -1, -32, 0, 67, 0, 20, -1, 23, 0, 81, 0, -5, -1, 14, 0, 24,
-1, 0, 0, 15, 0, 11, -1, -31, 0, 10, 0, -6, -1, -16, 0, -33, 0, -38, 0, 25, 0,
-8, 0, -58, -1, 11, 0, -6, -1, 3, 0, -39, -1, -19, 0, 12, 0, 17, 0, -22, -1,
-15, 0, 61, -1, 1, 0, -39, -1, -5, 0, 34, -1, -10, 0, -7, 0, 7, -1, 62, 0, -28,
-1, -22, 0, 41, 0, -34, -1, -12, 0, 1, 0, 46, 0, 11, 0, -23, 0, 27, -1, 22, 0,
-50, -1, -12, 0, 39, -1, 7, 0, -9, 0, -14, -1, 0, 0, -18, 0, -21, -1, 4, 0, 4,
-1, -17, 0, 28, -1, 14, 0, -18, -1, -21, 0, 20, -1, 21, 0, -22, -1, -15, 0, 15,
-1, 12, 0, -27, -1, -13, 0, 13, -1, 49, 0, -10, -1, -6, 0, 17, -1, -31, 0, -12,
0, -18, -1, -6, 0, 31, -1, -20, 0, -42, -1, 31, 0, 2, -1, -19, -1, -4, 0, 30,
-1, 29, 0, -43, 0, 2, -1, 31, 0, 24, -1, -41, 0, 15, -1, 38, 0, -27, 0, -3, -1,
2, 0, -7, 0, -14, -1, 10, 0, 30, -1, -29, 0, 2, -1, -2, 0, -35, -1, -23, 0, -32,
0, 65, -1, -26, 0, -41, -1, 34, 0, 40, -1, -42, 0, -52, -1, 30, 0, 31, -1, -23,
0, -6, -1, 59, 0, -8, -1, -16, -1, 37, 0, 30, -1, 3, 0, 6, 0, 38, -1, -5, 0,
-24, -1, 24, 0, 6, 0, -16, -1, -5, 0, -39, -1, -47, 0, 49, 0, -60, 0, -29, 0,
-26, 0, -16, 0, 15, 0, -31, 0, 32, 0, -10, -1, -15, 0, 2, -1, 41, 0, -19, -1,
41, 0, 32, 0, -5, 0, 14, 0, 38, 0, 48, 0, -39, 0, -3, 0, 5, -1, 27, 0, -23, -1,
-37, 0, 10, -1, 16, 0, -34, 0, -13, -1, 32, 0, -4, -1, -40, 0, -32, -1, 43, 0,
-33, -1, -28, 0, 23, 0, -12, -1, -18, 0, 0, -1, 33, 0, 8, 0, -30, -1, 16, 0, 25,
0, 20, 0, -6, -1, 4, 0, 1, -1, 3, 0, 42, -1, -2, -1, -3, 0, -25, -1, 12, 0, 12,
-1, -17, 0, -19, 0, 13, -1, 16, 0, -27, -1, -32, 0, 15, -1, -4, 0, -53, -1, 24,
0, 6, -1, -14, 0, -2, -1, -1, 0, -8, 0, -10, -1, -1, 0, 10, -1, 17, 0, -8, -1,
10, 0, -20, -1, 12, 0, 9, 0, -25, -1, 20, 0, 0, -1, -13, 0, 16, -1, 23, 0, 4,
-1, -16, 0, 6, -1, 30, 0, -18, 0, 11, -1, 15, 0, -26, 0, 20, -1, 9, 0, -33, -1,
-15, 0, -19, 0, 27, -1, 4, 0, -38, -1, 1, 0, 2, -1, 16, 0, 13, -1, -14, 0, -8,
0, -14, -1, -5, 0, 26, 0, -13, -1, -3, 0, -20, -1, 30, 0, 13, -1, -31, 0, -4,
-1, 11, 0, 22, -1, -45, 0, -1, 0, -5, -1, 16, 0, -6, -1, -18, 0, 3, 0, 2, -1, 6,
0, -16, 0, 20, -1, -9, 0, 15, 0, -22, -1, 17, 0, 2, -1, -11, 0, 13, -1, -3, 0,
30, 0, -37, -1, 3, 0, 6, -1, -12, 0, 30, -1, 25, 0, -26, -1, 5, 0, 28, -1, -4,
0, -6, 0, -16, -1, 9, 0, 10, 0, -32, -1, 17, 0, -11, -1, -51, 0, 4, -1, -5, 0,
25, -1, -27, 0, -24, 0, 41, -1, 2, 0, -31, -1, 10, 0, 25, 0, -10, -1, -23, 0,
-4, -1, 5, 0, -15, -1, -8, 0, 16, -1, 0, 0, -21, -1, -2, 0, 29, -1, 27, 0, -22,
0, 22, -1, 3, 0, 8, 0, -4, -1, -11, 0, 22, 0, -38, 0, 10, 0, 15, 0, -13, -1, -3,
0, 16, -1, 7, 0, 0, -1, 2, 0, 18, -1, 10, 0, -36, -1, 0, 0, 35, -1, -20, 0, -55,
-1, 1, 0, 10, 0, -2, 0, -29, 0, -15, 0, 20, 0, -28, -1, -30, 0, 0, -1, 9, 0, 22,
-1, -23, 0, 22, 0, -6, -1, -3, 0, 34, -1, -12, 0, -5, -1, 8, 0, 49, -1, 9, 0, 7,
-1, -2, 0, 37, 0, -11, 0, -25, 0, 4, 0, 4, -1, 33, 0, -30, -1, 5, 0, -3, 0, 14,
0, -13, 0, -4, 0, -10, 0, -12, 0, 7, 0, -13, 0, 2, 0, -40, -1, 29, 0, 10, -1,
-48, 0, -14, 0, 27, -1, -10, 0, -33, -1, -22, 0, 39, -1, 38, 0, -30, -1, 28, 0,
13, -1, 19, 0, 1, -1, -41, 0, 15, 0, 9, -1, -14, 0, -5, 0, -19, -1, 24, 0, 3,
-1, -21, 0, 0, 0, 0, -1, 14, 0, -11, -1, -21, -1, -3, 0, 19, -1, 11, 0, 7, 0,
-9, 0, -5, 0, 24, -1, -22, 0, -12, 0, 30, 0, 3, 0, 11, -1, -10, 0, 2, 0, 15, 0,
-25, 0, 2, 0, -2, -1, -25, 0, 0, -1, -5, 0, -19, -1, -24, 0, -15, 0, 9, 0, -1,
-1, -10, 0, -3, -1, 25, -1, -13, 0, -34, -1, 32, 0, 36, -1, 7, 0, -22, -1, 12,
0, 24, -1, 8, 0, 19, -1, 3, 0, 4, -1, 4, 0, 31, 0, -13, -1, -20, 0, 31, -1, 10,
0, 1, -1, -23, 0, -12, 0, 6, -1, -9, 0, -12, 0, -5, 0, 12, 0, -14, -1, -26, 0,
-27, -1, -3, 0, -20, -1, -18, 0, 24, -1, -26, 0, -10, 0, -19, 0, -4, -1, 20, 0,
-11, -1, 8, 0, 33, -1, 12, 0, 6, -1, 37, 0, -8, 0, 15, -1, -4, 0, 26, 0, 27, 0,
-34, 0, 7, -1, 16, 0, 10, -1, -25, 0, -6, 0, -6, -1, 0, 0, -14, -1, 16, 0, 2,
-1, -36, 0, 27, -1, 11, 0, -19, -1, -10, 0, 4, 0, 2, 0, -18, 0, -9, 0, 16, -1,
-10, 0, -20, -1, -12, 0, -2, 0, -12, -1, -36, 0, 20, -1, 32, 0, -24, -1, -11, 0,
-1, -1, 30, 0, 15, -1, 4, 0, 18, -1, 13, 0, 6, 0, 11, 0, 1, 0, -6, 0, 23, 0,
-15, 0, 19, -1, 19, 0, -44, -1, -13, 0, 8, -1, 5, 0, -4, 0, -24, 0, -6, -1, 11,
0, 5, 0, -7, -1, -8, 0, -19, -1, 24, 0, -10, -1, -37, 0, 9, -1, 9, 0, -3, 0,
-15, -1, 23, 0, -3, -1, -20, 0, 9, -1, 5, 0, 5, -1, -4, 0, 3, 0, -1, -1, 17, 0,
12, 0, -26, 0, 3, -1, 1, 0, 22, -1, -29, 0, -5, 0, -4, -1, 7, 0, 25, -1, -48, 0,
15, -1, 8, 0, -6, 0, 0, -1, 1, 0, -8, -1, -6, 0, 10, -1, 6, 0, 6, 0, -14, -1, 4,
0, 26, 0, -28, -1, -10, 0, -4, -1, 6, 0, -3, 0, -31, -1, 23, 0, 0, -1, 8, 0, -6,
-1, 6, -1, 9, 0, -19, -1, -7, 0, 5, 0, 12, 0, 1, 0, -12, 0, -29, 0, 11, -1, 10,
0, -7, -1, -17, 0, -7, -1, 33, 0, 9, -1, -18, 0, -13, -1, 15, 0, 27, 0, 8, -1,
-33, 0, 12, -1, 15, 0, -19, 0, 13, -1, -7, 0, -6, -1, -3, 0, 1, -1, 7, 0, -17,
-1, 1, 0, 33, -1, -21, 0, -17, -1, 22, 0, -9, 0, 1, 0, 0, 0, -12, -1, 0, 0, 7,
-1, 7, 0, -7, -1, -8, 0, 16, -1, 3, 0, -24, -1, 11, 0, 17, 0, -4, 0, -32, 0, -3,
0, 31, -1, -13, 0, -14, -1, -6, 0, 14, -1, 7, 0, -10, 0, -29, -1, 8, 0, 4, -1,
2, 0, 3, -1, -19, 0, 17, 0, -23, -1, 0, 0, 0, 0, 7, -1, 0, 0, 9, -1, 8, 0, 4,
-1, 10, 0, -3, -1, 34, 0, -25, -1, 15, 0, 16, 0, -29, 0, 17, -1, -11, 0, -15,
-1, 2, 0, -1, -1, -1, 0, -13, -1, -26, 0, 7, 0, 6, -1, -41, 0, 22, -1, 19, 0,
-16, 0, -18, 0, 12, 0, 30, 0, -7, 0, -16, -1, 8, 0, 33, -1, -18, 0, -6, -1, 9,
0, 4, 0, -4, -1, 7, 0, 18, -1, -21, 0, -6, 0, 2, -1, -8, 0, 3, -1, 3, 0, 12, -1,
-4, 0, 9, 0, 3, -1, -16, 0, -5, -1, 0, 0, 15, 0, -13, -1, -8, 0, 6, -1, 0, 0,
-1, 0, -1, -1, -22, 0, 14, 0, 12, -1, -18, 0, -8, -1, 22, 0, 9, -1, -20, 0, 4,
0, 4, -1, 21, 0, -28, -1, -8, 0, 26, 0, -8, -1, -14, 0, 5, -1, 11, 0, -12, -1,
-3, 0, 1, -1, -13, 0, -9, -1, 15, 0, 15, -1, -18, 0, -8, -1, -5, 0, 13, -1, 9,
0, -22, -1, 5, 0, 4, 0, 3, -1, 2, 0, -3, -1, -4, 0, 1, -1, 8, 0, 13, 0, -22, 0,
0, -1, 7, 0, 0, -1, -13, 0, -4, -1, 6, 0, -7, 0, 5, -1, -23, 0, 31, -1, -12, 0,
-18, 0, 4, -1, 11, 0, 6, 0, -19, -1, -4, 0, 6, -1, 16, 0, -17, -1, 3, 0, 6, -1,
-11, 0, 1, 0, 17, -1, -16, 0, -13, -1, 17, 0, 19, 0, -20, -1, -37, 0, 35, 0, 16,
-1, -20, 0, -15, -1, 7, -1, 16, 0, -22, -1, 1, 0, 11, -1, 0, 0, -13, -1, 25, 0,
9, -1, -31, 0, 12, -1, 20, 0, -3, -1, -15, 0, 20, -1, 2, 0, -19, 0, 1, -1, 26,
0, -12, -1, -34, 0, 9, -1, 9, 0, 1, -1, -7, 0, -31, -1, 5, 0, 15, 0, -27, -1,
11, 0, 1, -1, -15, 0, 8, -1, 7, 0, 13, -1, -15, 0, -10, 0, 31, -1, -2, 0, -17,
-1, 7, 0, 18, -1, -2, 0, 9, -1, 15, 0, -16, -1, 15, 0, -2, -1, 11, 0, -3, -1,
-16, 0, 25, 0, 12, -1, -7, 0, -28, 0, 15, -1, 5, 0, 3, 0, -22, -1, -7, 0, 7, -1,
-50, 0, 4, 0, -1, 0, -23, 0, -15, 0, 10, -1, 7, 0, -17, -1, -17, 0, 7, -1, 15,
0, -1, -1, 9, 0, 2, -1, 12, 0, 5, -1, 17, 0, 29, -1, 3, 0, -13, -1, 28, 0, 18,
-1, -28, 0, 6, 0, 0, -1, 1, 0, -5, -1, 3, 0, -19, -1, -21, 0, 2, 0, -5, -1, 6,
0, -33, -1, 15, 0, 7, -1, -7, 0, -8, -1, -11, 0, 22, 0, 5, -1, -19, 0, -15, -1,
23, 0, -7, 0, -14, -1, 2, 0, 9, 0, -16, -1, 6, 0, 18, -1, 2, 0, 0, -1, -7, 0,
24, -1, -10, 0, 9, -1, 18, 0, -17, -1, -1, 0, 14, -1, 3, 0, -4, -1, -8, 0, -11,
0, 16, -1, 10, 0, -18, -1, -8, 0, -3, 0, 2, 0, 10, -1, -17, 0, -9, -1, 11, 0, 4,
-1, -3, 0, -14, -1, -5, 0, 11, -1, 3, 0, -12, -1, -8, 0, 14, -1, 2, 0, 0, -1,
-2, 0, -8, -1, 5, 0, 4, -1, 1, 0, -11, -1, 9, 0, -1, -1, -4, 0, -2, -1, -11, 0,
-1, -1, -3, 0, -1, 0, 1, -1, 23, 0, -14, -1, -20, 0, 13, -1, 12, 0, 12, -1, -28,
0, 3, 0, 14, -1, -6, 0, 4, -1, 0, 0, -1, -1, -6, 0, 11, 0, 1, 0, -8, 0, -7, 0,
12, -1, 8, 0, -11, 0, -1, -1, 2, 0, -2, -1, -18, 0, 9, -1, 4, 0, -22, -1, -10,
0, 5, -1, 2, 0, -9, -1, -1, 0, 3, 0, 6, -1, -3, 0, 5, 0, -7, -1, -3, 0, 12, -1,
6, 0, -12, -1, 2, 0, 20, -1, -19, -1, 5, 0, -2, -1, -10, 0, -6, -1, 8, 0, 9, -1,
-26, 0, 8, -1, 8, 0, -4, 0, -12, -1, 5, 0, -2, -1, -9, 0, 11, -1, 4, 0, 1, -1,
-9, 0, 17, -1, 11, 0, -9, -1, -10, 0, 15, -1, 4, 0, -9, 0, -15, -1, 5, 0, 12,
-1, -28, 0, 2, -1, 3, 0, 2, -1, -11, 0, 4, 0, -9, 0, -9, 0, 9, -1, 0, 0, 3, -1,
1, 0, 2, -1, -2, -1, 4, 0, -12, -1, 3, 0, 0, -1, 11, -1, -11, 0, -13, -1, 12, 0,
3, -1, 1, 0, -8, -1, 21, 0, 0, -1, -5, 0, -2, -1, -3, -1, 4, 0, 7, -1, 10, 0,
-11, -1, -15, 0, 5, -1, 9, 0, -22, -1, -11, 0, 10, 0, 4, -1, -15, 0, -20, -1,
28, 0, 10, -1, -39, 0, 18, -1, 20, 0, 0, 0, -9, -1, 8, 0, 4, -1, -12, 0, 23, -1,
2, 0, -15, -1, -11, 0, 26, -1, -1, 0, -33, -1, 4, 0, 19, 0, -14, -1, -14, 0, 14,
0, -6, 0, -5, 0, -3, -1, 7, 0, 4, 0, -13, 0, 9, -1, -4, 0, -6, -1, -10, 0, 7,
-1, 2, 0, -4, 0, -1, 0, 4, 0, 9, -1, -14, 0, 17, -1, 6, 0, -7, 0, -3, -1, 32, 0,
-11, -1, -19, 0, 21, 0, -20, -1, -1, 0, -5, -1, 8, 0, -14, 0, -14, 0, 23, -1,
-9, 0, -3, -1, 1, 0, 9, 0, -7, -1, 2, 0, 7, -1, 1, 0, -3, -1, -4, 0, 24, -1,
-12, 0, -1, -1, 4, 0, -8, 0, 13, -1, 3, 0, -13, -1, -9, 0, -4, -1, 6, 0, -10,
-1, -24, -1, -4, 0, 9, -1, -7, 0, -3, -1, -4, 0, -1, -1, 13, 0, -7, -1, -3, 0,
-11, -1, 19, 0, 19, -1, -7, -1, -7, 0, 6, 0, 18, -1, -10, 0, -5, -1, 10, 0, -2,
0, -6, -1, 1, 0, -7, -1, 3, 0, 0, -1, -1, 0, -1, -1, 0, 0, 12, -1, -11, 0, -7,
-1, 1, 0, 14, -1, 13, 0, -31, -1, -6, 0, 27, -1, 1, 0, -21, 0, -11, -1, 4, 0,
-6, -1, 6, 0, -12, -1, -5, 0, 10, -1, 12, 0, 1, -1, -13, 0, 5, 0, 5, -1, 0, 0,
-2, -1, 8, 0, -6, -1, 5, 0, 5, -1, -2, 0, -12, -1, -3, 0, 6, -1, -15, 0, 0, -1,
0, 0, -1, 0, -13, -1, -2, 0, 7, -1, -12, 0, 9, -1, 0, 0, 10, 0, 1, -1, -10, 0,
-1, -1, -2, 0, 17, 0, 5, -1, -3, 0, -12, -1, 5, 0, 4, -1, 5, 0, -26, -1, -12, 0,
37, 0, -7, -1, -8, 0, -2, -1, -6, 0, 16, -1, 0, 0, 0, 0, -4, -1, -6, 0, 7, -1,
-5, 0, 0, 0, -1, -1, -2, 0, 1, 0, -2, -1, -8, 0, -6, 0, 1, -1, -2, 0, 3, -1, 6,
0, -6, 0, 5, -1, -9, 0, 13, -1, 5, 0, -7, -1, -5, 0, -1, -1, 17, 0, -20, 0, 15,
0, -1, 0, -4, -1, 11, -1, -3, 0, 8, -1, -20, 0, -6, -1, 20, 0, -4, -1, -18, 0,
2, 0, 9, 0, 5, 0, -12, 0, -20, -1, 15, 0, 0, -1, -14, 0, 9, -1, -11, 0, -1, 0,
6, -1, -5, 0, 4, 0, -1, -1, -9, 0, 6, -1, 3, -1, -6, 0, 5, -1, 1, 0, -4, -1, 2,
0, 6, 0, 2, 0, 7, -1, -12, 0, 10, 0, -3, 0, -4, -1, 16, 0, -10, -1, 1, 0, -6,
-1, -1, 0, -1, 0, -3, 0, -8, -1, 10, 0, -9, -1, -9, 0, 8, -1, 0, 0, 0, 0, -18,
-1, 5, 0, 16, -1, -1, 0, -20, -1, 0, 0, 13, -1, -8, 0, -7, -1, 9, 0, -6, -1, -4,
0, 7, -1, 0, 0, -3, 0, 2, -1, 7, 0, -10, -1, -4, 0, 13, -1, -1, 0, -9, -1, 5, 0,
0, -1, 7, 0, 1, -1, -3, 0, 0, -1, -10, 0, 5, -1, 6, 0, -10, 0, -5, 0, 4, -1, -5,
0, -9, -1, -2, 0, 2, -1, -8, 0, -7, -1, -2, 0, 1, -1, 3, 0, 3, -1, 2, 0, 0, 0,
3, -1, 8, 0, 14, -1, -9, 0, -2, -1, 4, 0, 0, -1, -3, 0, -9, 0, 6, 0, -1, -1, -2,
0, 1, -1, -4, 0, -5, -1, 3, -1, -8, 0, -8, -1, 6, 0, -4, -1, 3, 0, -2, -1, -6,
0, 2, -1, 5, 0, -7, -1, -1, 0, 6, -1, -3, 0, 9, -1, -3, 0, 1, -1, 10, -1, -1, 0,
0, -1, -9, 0, 1, -1, 5, 0, -5, -1, -2, 0, -4, -1, -3, 0, -5, -1, 11, 0, -10, -1,
-17, 0, 7, -1, 4, 0, -15, 0, -10, -1, 11, 0, 2, -1, -2, 0, 3, -1, 6, 0, -7, -1,
-1, 0, 5, -1, -2, 0, -2, 0, 12, 0, 0, -1, 1, 0, 3, -1, -4, 0, 2, 0, 0, -1, 1, 0,
0, 0, -4, -1, 2, 0, 7, -1, -6, 0, 7, -1, -7, 0, -6, 0, 1, 0, 2, -1, -2, 0, 2,
-1, -5, 0, 0, -1, 9, 0, -9, -1, 3, 0, -9, -1, 5, 0, 6, -1, 0, 0, 0, 0, -1, 0, 1,
-1, -5, 0, 1, -1, -10, 0, 4, -1, 0, 0, -6, -1, 4, 0, -8, -1, -2, 0, 0, -1, 0, 0,
-3, -1, -5, 0, 3, -1, 0, 0, 0, 0, -2, -1, 2, 0, 2, -1, 0, 0, 3, 0, 5, -1, 2, 0,
-1, 0, 1, -1, 5, 0, 2, -1, -3, 0, -1, 0, 0, -1, 1, 0, 1, -1, -5, 0, -9, -1, 2,
0, 3, 0, -3, -1, -8, 0, -1, 0, 3, -1, -3, 0, -1, 0, -1, -1, -2, 0, -1, 0, 3, -1,
-4, 0, 1, -1, 2, 0, 2, -1, -1, 0, -2, 0, 3, -1, -3, 0, 1, -1, 2, 0, -1, -1, 1,
0, 2, 0, -3, -1, 0, 0, 2, -1, 1, 0, 0, -1, 0, 0, 1, -1, -2, 0, -1, -1, -2, 0, 1,
0, 2, 0, 0, 0, -1, 0, -2, 0, -1, -1, 0, 0, -6, -1, -2, 0, 1, -1, -3, 0, 2, -1,
-3, 0, -3, -1, -1, 0, 1, 0, -3, 0, 0, -1, 1, 0, -3, -1, 2, 0, 3, 0, 2, -1, -1,
0, 1, 0, 1, -1, 0, 0, 1, 0, 1, -1, 1, 0, 0, -1, -1, 0, 1, 0, 0, -1, -2, 0, 0,
-1, -1, 0, 0, 0, -1, -1, -2, 0, -1, 0, 0, -1, -2, 0, -3, 0, 1, -1, 0, 0, 0, -1,
-2, 0, -2, 0, 1, -1, 0, 0, 0, -1, -1, 0, 0, -1, -1, 0, 1, 0, 1, -1, -1, 0, -1,
-1, 1, 0, 2, -1, -1, 0, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, 1, -1, -3, -1, -1, 0,
0, -1, -1, 0, 0, -1, -2, 0, -2, 0, 0, -1, -1, 0, 0, -1, 0, 0, 0, 0, -1, -1, 0,
0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, 0, -1, -1, 0, 0,
-1, -1, 0, 0, 0, 0, 0, -1, -1, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1,
0, 0, -1, -1, 0, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0,
0, -1, 0, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0,
-1, -1, -1, 0, 0, -1, -1, 0, -1, -1, -1, 0, -1, 0, 0, -1, -1, 0, -1, -1, -1, 0,
-1, 0, -1, -1, -1, 0, -1, -1, 0, 0, -1, 0, -1, -1, 0, 0, -1, -1, -1, 0, -1, -1,
-1, 0, -1, -1, -1, 0, -1, -1, 0, 0, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, 0, -1, -1,
0, -1, -1, -1, 0, -1, -1, -1, 0, 0, -1, -1, 0, -1, -1, -1, 0, -1, -1, -1, 0, -1,
0, -1, -1, -1, 0, 0, -1, -1, 0, -1, -1, -1, 0, -1, 0, -1, -1, 0, 0, -1, -1, -1,
0, -1, 0, -1, 0, -1, 0, 0, 0, -1, -1, 0, 0, -1, -1, -1, 0, -1, -1, -1, 0, -1,
-1, 0, 0, -1, 0, -1, -1, -1, 0, -1, 0, -1, 0, -1, -1, 0, 0, 0, -1, 0, 0, -1, -1,
-1, -1, -1, 0, 0, -1, -1, 0, -1, -1, 0, 0, -1, -1, -1, 0, -1, -1, -1, 0, -1, -1,
-1, 0, -1, -1, -1, 0, -1, -1, -1, 0, -1, -1, -1, 0, -1, 0, -1, -1, -1, 0, -1,
-1, -1, 0, -1, 0, -1, -1, -1, 0, -1, -1, -1, 0, -1, 0, -1, -1, -1, 0, -1, 0, -1,
-1, -1, 0, -1, -1, -1, 0, -1, 0, -1, -1, -1, 0, -1, -1, -1, 0, -1, -1, -1, 0,
-1, 0, -1, -1, -1, 0, -1, -1, -1, 0, -1, -1, -1, 0, -1, 0, -1, 0, -1, -1, -1, 0,
-1, -1, -1, 0, -1, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, -1, 0, -1, 0,
-1, -1, -1, 0, -1, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, -1, 0, -1, -1, -1, 0,
-1, 0, -1, -1, -1, 0, -1, -1, -1, 0, -1, 0, -1, -1, -1, 0, -1, -1, -1, 0, -1, 0,
-1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, -1, 0, -1, -1, -1, 0, -1, -1,
-1, 0, -1, -1, -1, 0, -1, -1, -1, 0, -1, };

#endif /* MTFIVEHUNDREDTEN_H_ */
