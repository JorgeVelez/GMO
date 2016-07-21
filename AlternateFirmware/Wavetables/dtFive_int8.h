#ifndef DTFIVE_H_
#define DTFIVE_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define DTFIVE_NUM_CELLS 5789
#define DTFIVE_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) DTFIVE_DATA [] = {-1, -2,
-3, -3, -1, 2, 1, -3, -2, 1, 1, 1, 0, -1, -1, -2, -3, -3, 0, 2, 0, 1, 3, 6, 11,
16, 15, 11, 20, 33, 19, -3, -18, -27, -34, -42, -39, -31, -29, -25, -17, -8, 1,
3, 8, 17, 22, 23, 24, 30, 32, 32, 19, -3, -11, -4, -2, -5, -17, -28, -20, -2, 5,
5, 11, 10, 1, -5, 5, 8, -2, -3, 5, 14, 19, 25, 25, 22, 27, 36, 36, 13, 17, 14,
-28, -52, -37, -14, 4, 12, -5, -31, -45, -34, -31, -50, -72, -87, -95, -86, -58,
-28, -13, -17, -6, 29, 68, 97, 112, 118, 120, 114, 88, 47, 4, -37, -71, -81,
-69, -40, -6, 18, 40, 44, 40, 24, -8, -43, -78, -93, -83, -54, -26, -3, 22, 45,
57, 51, 35, 12, -4, -15, -29, -26, -4, 17, 14, 0, -4, 12, 25, 24, 26, 34, 39,
35, 22, 0, -22, -44, -60, -68, -54, -16, 20, 38, 61, 82, 91, 85, 71, 45, 2, -32,
-34, -27, -40, -35, -22, -21, -18, -19, -25, -22, -9, -8, -21, -25, -26, -36,
-39, -39, -30, -4, 17, 19, 21, 34, 37, 37, 38, 30, 21, 11, 6, 7, 12, 12, 7, -6,
-12, -5, 2, 5, 10, 23, 26, 21, 14, 7, -5, -20, -30, -31, -29, -24, -9, -4, -14,
-19, -15, -23, -46, -65, -59, -32, -3, 8, 4, 11, 27, 28, 26, 34, 36, 35, 30, 27,
27, 27, 24, 25, 26, 23, 19, -2, -25, -27, -15, -14, -17, -23, -28, -26, -24,
-23, -38, -55, -47, -37, -45, -44, -19, 17, 11, -1, 15, 19, 6, -1, -4, -9, -6,
-7, -15, -23, -14, -11, -20, -7, 26, 43, 43, 38, 60, 69, 39, 26, 31, 47, 47, 40,
52, 63, 59, 28, -20, -57, -80, -97, -112, -115, -104, -81, -49, -15, 25, 63, 86,
90, 78, 42, -15, -61, -72, -47, -1, 36, 45, 20, -26, -62, -76, -66, -37, -1, 22,
29, 22, 14, 15, 42, 70, 62, 31, 18, 25, 15, 1, -1, -2, -26, -54, -63, -62, -46,
-13, 4, 11, 22, 36, 60, 74, 77, 53, 11, -19, -31, -39, -36, -19, 0, 11, 4, -1,
-15, -20, -7, 7, 17, 9, -2, -24, -44, -49, -38, -24, -12, 2, 1, -12, -18, -10,
-16, -26, -25, -27, -32, -27, -9, 15, 43, 63, 78, 72, 54, 46, 48, 49, 28, 16, 4,
-20, -42, -47, -33, -19, 11, 30, 30, 22, 0, -19, -30, -21, 1, 11, 10, -3, -17,
-28, -36, -22, 9, 21, 26, 30, 34, 42, 39, 24, 12, -2, -40, -69, -72, -38, 15,
43, 34, -3, -43, -77, -95, -90, -53, -3, 22, 22, 22, 35, 52, 64, 64, 40, 1, -31,
-49, -43, -13, 33, 68, 69, 36, -15, -59, -81, -74, -49, -19, 9, 33, 59, 78, 83,
71, 37, 2, -25, -47, -52, -37, -8, 22, 43, 50, 47, 33, 11, -3, -7, -13, -19,
-22, -25, -18, 4, 27, 26, 10, -8, -23, -37, -46, -46, -52, -59, -60, -48, -25,
-2, 24, 43, 45, 38, 26, 6, -7, -7, -8, 3, 34, 66, 73, 45, 10, -7, -7, -1, 6, 5,
-14, -39, -48, -43, -39, -27, -10, -6, -1, 7, 13, 15, -3, -23, -42, -49, -46,
-35, -16, 14, 45, 55, 63, 73, 62, 31, 1, -16, -28, -40, -55, -50, -26, -15, -4,
-2, -13, -14, -10, -2, 15, 21, 26, 40, 56, 53, 32, 2, -28, -24, -13, 4, 17, 23,
35, 30, 16, 11, 0, -20, -32, -37, -36, -28, -21, -15, -16, -20, -10, 2, 18, 35,
33, 30, 27, 31, 47, 38, 13, -19, -60, -85, -98, -96, -71, -31, 11, 47, 55, 41,
36, 54, 67, 65, 50, 26, 4, -10, -6, 12, 25, 21, -4, -36, -61, -63, -38, -3, 28,
43, 34, 8, -26, -42, -37, -33, -24, -19, -7, 11, 31, 45, 32, 11, -6, -18, -36,
-55, -60, -51, -24, 15, 37, 42, 53, 54, 25, -18, -47, -54, -34, 1, 31, 50, 54,
47, 28, 10, -3, -12, -23, -40, -57, -62, -45, -23, -5, 11, 31, 42, 50, 39, 18,
3, -14, -17, -14, -14, -27, -31, -36, -38, -32, -17, 13, 37, 56, 64, 55, 28, 0,
-22, -29, -18, -6, -3, -2, 1, 6, 8, 2, -18, -36, -40, -40, -28, -8, 12, 30, 48,
56, 46, 32, 22, 0, -13, -21, -35, -44, -50, -57, -67, -65, -51, -22, 12, 45, 65,
67, 45, 9, -13, -23, -25, -15, 5, 23, 35, 50, 69, 73, 50, 13, -19, -46, -62,
-73, -71, -51, -31, -6, 19, 28, 27, 10, -12, -29, -39, -32, -11, 10, 29, 42, 41,
34, 27, 19, 13, 14, 13, 3, -10, -15, -15, -19, -24, -27, -29, -22, -4, 10, 23,
24, 15, 9, 0, -6, -4, 5, 20, 23, 20, 14, 5, 0, -6, -11, -7, -5, -2, 11, 16, 14,
0, -21, -36, -41, -36, -26, 1, 35, 55, 54, 38, 17, -11, -44, -46, -28, -6, 17,
30, 30, 21, 15, 8, 10, 12, 6, -12, -33, -51, -52, -38, -18, 8, 24, 29, 13, -19,
-47, -48, -24, 8, 42, 66, 67, 58, 44, 22, 0, -18, -38, -56, -57, -36, -12, -2,
4, -3, -20, -28, -17, 5, 28, 38, 31, 12, -11, -15, -2, 11, 16, 6, -11, -31, -50,
-43, -9, 28, 53, 58, 36, 0, -27, -30, -10, 14, 33, 37, 19, -7, -31, -40, -30,
-3, 29, 52, 64, 62, 41, -1, -35, -51, -50, -22, 1, 9, 12, 5, -10, -26, -37, -43,
-46, -39, -15, 3, 16, 26, 19, 1, -19, -23, -15, 3, 24, 25, 8, -15, -32, -42,
-41, -28, -18, -8, 5, 19, 37, 61, 83, 88, 73, 45, 14, -16, -33, -38, -33, -29,
-26, -24, -18, -4, 12, 22, 27, 24, 15, 6, 1, -4, -12, -27, -43, -52, -52, -38,
-19, 3, 9, -2, -16, -22, -15, -1, 20, 33, 31, 14, 3, 4, 14, 26, 28, 18, 3, -14,
-28, -35, -35, -25, -11, 0, 7, 11, 10, 3, -1, 3, 17, 30, 35, 35, 23, 8, 1, 3, 5,
8, 8, 2, 1, -7, -23, -27, -15, 2, 5, -8, -22, -31, -32, -25, -8, 10, 14, 8, 1,
-7, -12, -9, -1, 11, 17, 18, 7, -10, -23, -23, -14, -2, 13, 27, 36, 33, 21, 14,
7, -10, -26, -33, -26, -3, 20, 32, 35, 29, 16, 3, -16, -31, -38, -39, -35, -29,
-18, -12, -6, 7, 21, 28, 28, 29, 32, 28, 23, 11, -9, -26, -33, -28, -22, -21,
-19, -11, 1, 9, 13, 24, 35, 36, 25, 2, -22, -38, -43, -32, -15, -2, 5, 3, -2,
-2, 6, 23, 38, 36, 18, -4, -20, -25, -16, 1, 15, 18, 3, -24, -44, -43, -25, 0,
26, 44, 47, 33, 11, -8, -15, -11, -3, 3, 3, 2, 1, -3, -12, -19, -18, -2, 16, 21,
15, 3, -10, -22, -28, -19, 3, 20, 31, 32, 22, 9, -2, -9, -15, -22, -28, -28,
-22, -6, 6, 8, 4, -4, -7, 1, 12, 19, 20, 12, 0, -13, -22, -23, -17, -10, -7,
-10, -11, -11, -4, 7, 23, 36, 34, 20, 2, -12, -15, -10, -3, 6, 7, 1, -2, -2, 1,
1, -8, -19, -25, -28, -21, -6, 7, 19, 21, 14, 7, -5, -15, -13, -6, 2, 7, 5, -1,
-5, -4, 5, 15, 19, 18, 14, 5, -6, -15, -14, -10, -5, 2, 5, 11, 14, 12, 5, -6,
-20, -33, -41, -42, -30, -10, 10, 18, 15, 6, -2, -8, -7, -4, 2, 7, 8, 8, 11, 15,
21, 27, 28, 27, 23, 14, -1, -13, -17, -16, -15, -18, -21, -25, -29, -26, -12, 8,
25, 31, 27, 16, 5, -1, 0, 6, 14, 16, 9, -4, -17, -26, -28, -28, -26, -16, -3, 7,
13, 17, 14, 10, 3, -4, -6, 1, 6, 7, 2, -4, -3, 2, 6, 4, -1, -6, -8, -7, -3, 5,
13, 15, 10, 1, -8, -14, -12, -2, 7, 10, 5, -5, -15, -18, -12, 1, 12, 15, 14, 9,
3, -1, -5, -6, -6, -8, -11, -4, 5, 6, 2, -3, -5, -7, -4, 4, 9, 2, -11, -20, -25,
-20, -5, 10, 20, 23, 20, 14, 10, 2, -7, -11, -8, -7, -4, -2, -2, 3, 7, 7, 2, 0,
2, 4, 0, -5, -9, -13, -15, -16, -13, -7, 1, 8, 15, 18, 16, 8, 1, -4, -9, -11,
-11, -5, 3, 8, 12, 14, 13, 7, -1, -10, -15, -16, -16, -11, -3, 4, 4, 0, -5, -8,
-8, -7, -6, -1, 3, 4, 4, 4, 2, -2, 0, 3, 5, 10, 16, 19, 16, 6, -10, -26, -34,
-34, -28, -18, -7, -2, 0, 7, 16, 20, 19, 18, 15, 10, 7, 4, -1, -7, -13, -18,
-16, -10, -4, 2, 8, 9, 6, 2, 0, 0, 0, -2, -7, -13, -16, -13, -6, 1, 4, -2, -11,
-17, -15, -8, 4, 17, 24, 24, 20, 13, 6, -3, -4, -2, -2, -1, -3, -4, -3, -1, -1,
-2, -2, -2, 0, 6, 11, 8, -2, -13, -19, -19, -19, -15, -5, 6, 11, 9, 4, -1, -1,
1, 2, 1, 2, 4, 4, 6, 9, 11, 7, 0, -10, -16, -15, -8, 1, 6, 5, 0, -9, -15, -14,
-10, -1, 8, 12, 12, 9, 5, 2, -3, -7, -10, -11, -6, 3, 11, 15, 11, 2, -9, -16,
-16, -10, 4, 18, 23, 21, 13, 4, -5, -11, -15, -16, -17, -20, -23, -17, -3, 10,
16, 14, 3, -8, -13, -13, -6, 2, 8, 6, 0, -5, -5, -1, 5, 11, 13, 8, 2, -2, -2, 3,
9, 12, 7, -4, -15, -19, -18, -15, -9, -2, 2, 4, 4, 2, 1, 1, 3, 4, 3, -1, -7,
-16, -19, -11, 0, 9, 14, 14, 5, -6, -14, -14, -10, -5, -1, 0, -2, -4, -4, 2, 12,
18, 15, 10, 4, -2, -5, -7, -9, -8, -4, 0, 1, 2, 1, -5, -12, -14, -13, -7, 0, 7,
10, 10, 6, 2, 2, 5, 6, 7, 8, 6, 4, -1, -5, -6, -5, -4, -4, -4, -4, -7, -8, -5,
-1, 0, -3, -7, -10, -11, -9, -6, 3, 10, 15, 16, 10, 4, 0, -4, -7, -9, -9, -5,
-4, -2, 2, 5, 6, 3, -2, -5, -6, -6, -9, -12, -14, -11, -4, 8, 21, 29, 29, 19, 4,
-8, -15, -14, -10, -5, -1, -1, -3, -5, -6, -5, -7, -10, -12, -10, -3, 5, 14, 20,
22, 17, 8, -1, -6, -7, -6, -5, -5, -5, -4, -6, -8, -9, -8, -5, 0, 6, 11, 11, 6,
1, -5, -5, -1, 6, 11, 14, 15, 10, 2, -7, -15, -18, -18, -15, -13, -11, -10, -6,
1, 6, 9, 9, 4, -4, -9, -9, -3, 7, 16, 19, 17, 9, -1, -11, -15, -12, -6, -1, 1,
-1, -3, -3, -2, -1, 1, 2, 3, 4, 5, 6, 6, 4, 2, -2, -7, -9, -8, -5, -5, -7, -8,
-7, -5, -3, 2, 7, 7, 1, -5, -8, -6, -1, 6, 13, 15, 12, 6, -1, -7, -10, -11, -10,
-7, -5, -3, -2, -4, -8, -9, -7, -5, -2, 1, 3, 4, 5, 6, 7, 5, 2, -2, -5, -8, -10,
-9, -5, -1, 2, 2, 2, 3, 4, 3, 1, -2, -2, 1, 5, 6, 5, 3, -2, -6, -8, -8, -6, -4,
-2, -1, -3, -7, -6, -3, 0, 3, 3, 1, -1, -2, -3, -1, 0, 2, 3, 4, 6, 8, 9, 9, 9,
3, -3, -7, -9, -6, -3, 0, 2, 3, 0, -6, -13, -15, -13, -8, -3, 4, 8, 8, 6, 3, 1,
-1, -1, -1, -1, 0, 0, -1, -1, 0, 0, -1, -2, -3, -3, -3, -4, -4, -4, -2, -2, -2,
-1, 1, 3, 4, 3, 2, 2, 2, 1, 1, 1, 1, 1, 2, 3, 2, 0, -1, -1, -1, -2, -3, -4, -7,
-7, -5, -3, -2, -1, 0, 2, 5, 6, 7, 7, 5, 2, -3, -8, -11, -9, -3, 2, 6, 5, 3, -1,
-4, -4, -2, -1, -2, -1, -1, 2, 4, 5, 5, 5, 3, 1, -1, -1, 1, 1, 1, -1, -3, -5,
-6, -5, -3, 0, 2, 4, 3, 2, 0, -1, -2, -2, -1, 1, 2, 2, 1, -1, -2, -1, 0, -1, -2,
-2, -4, -5, -5, -2, 1, 4, 5, 4, 2, -1, -3, -4, -3, -1, 0, -1, 0, 2, 3, 4, 1, -2,
-5, -9, -12, -12, -8, -1, 6, 10, 11, 8, 2, -6, -12, -14, -11, -4, 3, 7, 7, 5, 1,
0, 1, 4, 6, 5, 2, -1, -3, -2, 1, 4, 3, 0, -4, -8, -8, -7, -3, 0, 3, 5, 5, 2, -1,
-5, -7, -6, -4, -1, 2, 4, 5, 4, 2, -1, -3, -2, 1, 3, 4, 3, 1, 0, -1, -1, -2, -2,
-5, -8, -9, -7, -4, -1, 2, 5, 4, 3, 2, 1, 1, 1, 1, 2, 2, 1, 0, 0, 1, 1, 1, 0,
-1, -3, -5, -4, -2, 1, 4, 5, 5, 4, 3, 2, 2, -1, -4, -6, -8, -7, -5, -1, 3, 4, 4,
2, 0, 0, 0, 2, 4, 4, 2, 0, -2, -2, -1, -2, -2, -2, -1, 0, 1, 1, 0, -2, -3, -3,
-2, -1, -1, -1, -1, -2, -3, -2, -1, 2, 5, 5, 4, 0, -2, -3, -3, -3, -1, 1, 4, 6,
6, 5, 3, 0, -2, -3, -4, -3, -3, -3, -4, -4, -3, -1, 0, 1, 1, 1, 2, 2, 2, 1, 1,
0, 0, -1, -1, -2, -1, 0, 1, 4, 6, 7, 6, 2, -1, -4, -5, -6, -6, -6, -5, -2, 2, 3,
2, 1, 0, -2, -3, -3, -2, -1, 0, 2, 1, 0, -1, -2, -1, 0, 1, 1, 2, 1, 0, 0, 0, -1,
-2, -4, -2, 1, 5, 6, 6, 3, 0, -2, -4, -3, 0, 2, 1, -1, -2, -2, -2, -1, 0, -1,
-3, -6, -6, -6, -4, -2, -1, 1, 1, 1, 0, 0, 0, 2, 2, 2, 2, 1, 2, 2, 4, 6, 5, 2,
-1, -3, -4, -3, -2, 0, 0, 0, 0, -1, -2, -3, -4, -4, -4, -5, -5, -4, -2, 0, 3, 4,
3, 2, 2, 1, 1, 1, 1, 1, 2, 1, 1, 0, 0, -1, -2, -1, 1, 2, 1, 0, -1, -2, -3, -2,
-1, -1, -2, -2, 0, 1, 1, 1, -1, -2, -3, -3, -3, -3, -2, 0, 1, 1, 2, 2, 2, 2, 2,
1, 1, 0, -1, -2, -2, -1, 1, 2, 2, 2, 1, 0, 0, 0, 0, 0, 0, -1, -2, -2, -2, -1, 0,
0, -1, -2, -4, -5, -5, -4, -3, -1, 0, 0, 0, 1, 1, 2, 2, 2, 2, 2, 2, 1, -1, -2,
-3, -2, 0, 1, 2, 2, 0, -1, -3, -4, -4, -2, -1, 1, 2, 2, 1, 0, -1, -1, -2, -2,
-2, -2, -1, 0, 2, 2, 2, 0, -2, -4, -3, -2, -2, -1, 0, 1, -1, -2, -3, -2, 0, 1,
2, 1, 0, -1, -1, 0, 1, 2, 2, 2, 1, 0, 0, 1, 1, 0, 0, -2, -3, -3, -3, -3, -4, -3,
-3, -3, -3, -1, 1, 2, 2, 1, -1, -2, -2, 0, 2, 4, 4, 4, 1, -2, -4, -5, -4, -2, 0,
2, 2, 1, -1, -2, -3, -4, -4, -3, -1, 0, 2, 3, 4, 3, 2, 0, -1, -2, -3, -2, -2,
-2, -3, -2, -2, -2, -2, -2, -2, -1, 0, 1, 2, 2, 2, 0, -2, -3, -4, -3, -2, -1,
-1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 2, 3, 4, 5, 4, 2, -1, -3, -4, -4, -4, -4, -2,
-1, 0, 2, 2, 2, 0, -1, -2, -2, -2, -1, -1, 0, 0, 0, 0, -1, -2, -2, -2, -1, -1,
-1, -1, -1, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 1, 2, 2, 1, 0, -1,
-3, -3, -3, -3, -3, -2, -2, -1, 0, 0, 1, 2, 1, 1, 0, 0, 1, 1, 0, 0, -1, -2, -3,
-2, -1, 0, 1, 0, 0, 0, 0, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-1, -1, -1, 0, 1, 1, 1, 0, -1, -2, -2, -2, -2, -1, 0, 0, 0, 0, -1, -1, -1, -1,
-1, -2, -2, -2, -2, -2, -2, -1, 0, 0, 1, 1, 0, -2, -3, -4, -3, -2, 0, 2, 2, 2,
2, 0, -1, -1, 0, 0, 0, -1, -2, -2, -1, -1, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1,
-2, -2, -1, 0, 0, 0, -1, -1, -3, -3, -4, -4, -4, -3, -3, -2, -1, 0, 2, 3, 3, 3,
2, 1, 0, 0, 0, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, 0, 1, 3, 3, 2,
-1, -3, -4, -4, -3, -2, 0, 1, 1, 0, -2, -3, -3, -3, -1, 0, 1, 0, 0, -2, -3, -3,
-3, -1, 1, 2, 3, 4, 3, 2, 0, -2, -2, -2, -2, -1, -1, -1, -2, -2, -3, -2, -1, 0,
0, 0, 0, -1, -1, -1, -1, 0, 1, 0, 0, 0, 0, -1, -2, -2, -2, -1, -1, -1, 0, 0, 1,
0, -2, -3, -4, -3, -1, 0, 2, 2, 2, 2, 1, -1, -2, -2, -2, -1, 0, 0, 1, 1, 0, 0,
-1, -2, -2, -2, -2, -1, 0, 0, 1, 1, 2, 2, 1, 0, 0, -1, -1, -1, 0, 0, 0, -1, -2,
-2, -2, -1, -1, -1, 0, 0, -1, -1, -1, -1, -1, -2, -2, -2, -2, -1, 0, 1, 1, 2, 1,
1, 0, -1, -2, -2, -1, 0, 1, 2, 1, 0, -1, -1, -2, -2, -2, -2, -2, -1, -1, 0, 0,
0, -1, -2, -2, -2, -2, -1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -2, -2, -1, 0,
1, 1, 1, 0, -1, -1, -1, -2, -2, -2, -2, -2, -1, 0, 0, 0, 0, -1, -2, -1, 0, 1, 1,
1, 0, -1, -2, -2, -1, -1, -1, -1, -1, -1, -1, 0, 1, 1, 2, 1, 0, 0, -1, -2, -2,
-2, -2, -2, -2, -1, -1, -1, 0, -1, -1, -2, -2, -1, -1, -1, -1, -1, -2, -2, -2,
0, 1, 2, 2, 1, 1, 0, 0, 0, 0, 0, -1, -2, -2, -2, -2, -1, -1, -1, -1, -1, -1, -1,
-1, 0, 1, 1, 1, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0,
-1, -1, -2, -2, -2, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, 1, 1, 0, -1,
-2, -2, -2, -1, 0, 1, 1, 1, 0, 0, 0, -1, -1, -2, -2, -3, -2, -2, -2, -1, 0, 0,
1, 1, 1, 1, 0, 0, -2, -2, -2, -1, -1, 0, 0, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0,
0, 1, 1, 0, 0, -1, -2, -3, -2, -2, -1, 0, 1, 1, 1, 1, 0, -1, -1, -1, -1, -1, 0,
0, 0, -1, -1, -1, -1, -1, -1, 0, 0, 1, 0, 0, -1, -2, -3, -3, -3, -2, -2, -1, 0,
1, 1, 1, 0, 0, -1, -2, -2, -3, -2, -2, -1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, -1, -2,
-2, -2, -2, -1, -1, -1, 0, 1, 1, 1, 1, 0, 0, -1, -2, -2, -2, -1, 0, 0, -1, -1,
-1, 0, 0, 1, 1, 1, 0, -1, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, -1, -1, -1,
-2, -2, -1, -1, 0, 0, -1, -1, -2, -2, -1, -1, -1, -1, -1, -1, -1, -1, 0, 1, 1,
1, 1, 1, 1, 1, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, 0, 0, 0, 0, -1, -1, -2, -1, -1, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0,
-1, -1, -1, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1,
-2, -2, -2, -2, -1, 0, 0, 0, 1, 0, 0, -1, -1, -1, -1, -1, 0, 0, 1, 1, 1, 1, 1,
0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1,
0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0, -1, -1, -1,
-1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1,
-1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, 0,
0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1,
-2, -2, -2, -2, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0,
-1, -1, -1, -1, -1, 0, 0, 1, 1, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0,
0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, -1, -1, -1, -1, 0,
0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, 1, 1, 0, 0, -1, -1, 0, 0, 0, 1, 1, 1,
0, 0, -1, -1, -1, -2, -1, -1, -1, -1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1,
-1, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1,
-1, -1, -1, -1, -1, 0, -1, 0, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, 0, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0,
-1, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0, -1, -1, -1, -1, 0, -1, -1, 0, -1, -1,
-1, 0, -1, 0, -1, -1, 0, -1, 0, -1, -1, -1, -1, 0, -1, -1, 0, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, -1,
0, -1, 0, -1, -1, -1, 0, -1, -1, -1, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, -1,
-1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, 0, -1, 0,
0, -1, 0, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1,
0, -1, -1, -1, -1, 0, -1, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1,
0, -1, -1, 0, -1, 0, -1, 0, -1, -1, -1, 0, -1, -1, -1, -1, 0, -1, 0, -1, 0, -1,
0, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0, -1, 0,
-1, 0, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0,
-1, 0, -1, -1, -1, 0, -1, 0, 0, -1, -1, -1, -1, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0,
0, -1, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, -1, -1, 0, -1, 0, 0, -1,
0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, 0, 0, -1, 0, -1,
0, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, 0, 0, -1, 0, -1, 0, -1,
0, -1, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, -1, 0, -1, 0, -1, -1, 0, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1,
0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1,
0, 0, -1, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1,
-1, -1, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, -1, -1, 0, 0, -1, 0, 0, -1,
0, -1, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0,
0, -1, 0, 0, -1, 0, -1, 0, 0, 0, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, 0, 0, 0, 0,
0, -1, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, 0, 0, 0, -1, 0, -1, 0, -1, 0, 0, -1,
0, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
0, -1, 0, 0, -1, 0, -1, 0, -1, 0, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, 0, 0, 0,
-1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0,
0, -1, 0, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1,
0, -1, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, -1,
0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0,
-1, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1,
0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, -1, 0, -1, 0,
0, -1, 0, -1, 0, 0, -1, 0, 0, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, 0, 0, 0,
-1, 0, -1, 0, 0, -1, 0, 0, -1, 0, -1, 0, 0, 0, 0, -1, 0, -1, 0, -1, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, 0,
0, 0, 0, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1,
0, 0, 0, 0, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, 0,
-1, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, 0, -1,
0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, 0, 0, -1, 0,
-1, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0,
-1, 0, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1,
0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, -1, 0, -1, 0,
-1, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0,
0, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1,
0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, -1, 0, -1, 0, 0, 0, -1, 0, -1, 0,
0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0,
-1, 0, -1, 0, -1, 0, 0, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1,
0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, -1, 0,
0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0,
-1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0,
0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, -1, 0,
0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0,
-1, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0,
-1, 0, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0,
-1, 0, 0, -1, 0, -1, 0, 0, 0, 0, -1, 0, -1, 0, -1, 0, };

#endif /* DTFIVE_H_ */
