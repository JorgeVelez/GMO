#ifndef TABLAONE_H_
#define TABLAONE_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define TABLAONE_NUM_CELLS 8172
#define TABLAONE_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) TABLAONE_DATA [] = {-1,
0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0,
0, 0, 0, -1, 0, -1, -1, -1, -1, 0, -1, 0, -1, 0, 0, 0, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, 0, -1, -1, -1, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1,
1, 0, 1, 1, 1, 0, 0, 1, 1, 2, 1, 0, 0, 1, 0, 1, 0, 2, 2, 1, -1, 0, 0, 3, 2, 1,
-3, -1, 1, -1, -3, -2, 6, 9, 6, -62, -77, -27, 65, 79, -8, -26, -32, -43, -41,
-14, 15, 36, 25, 10, -26, -95, -95, -17, 75, 124, 127, 125, 90, 50, 17, -12,
-36, -66, -63, -77, -64, 24, 98, 85, 14, -44, -43, 37, 68, -5, -42, -35, -7, 68,
112, 108, 73, -12, -97, -128, -128, -126, -128, -122, -84, -12, 60, 106, 106,
73, 23, -13, -3, 23, 46, 41, 10, -11, -12, -15, -36, -58, -69, -52, -37, -54,
-64, -27, 36, 76, 98, 122, 127, 125, 127, 90, 21, -20, -50, -86, -89, -76, -66,
-57, -48, -53, -58, -30, -13, -6, -25, -41, -10, 85, 127, 126, 105, 12, -68,
-119, -128, -128, -125, -128, -96, -16, 61, 115, 127, 108, 68, 47, 38, 43, 51,
43, 27, 18, 32, 34, 18, -25, -82, -105, -112, -102, -80, -46, -2, 44, 82, 105,
125, 127, 127, 112, 54, -13, -43, -43, -43, -55, -83, -107, -107, -76, -31, -5,
-15, -35, -38, -14, 34, 88, 120, 118, 75, 18, -23, -46, -76, -119, -128, -128,
-94, -21, 48, 98, 106, 88, 65, 48, 33, 35, 48, 57, 61, 57, 38, 23, 3, -26, -66,
-112, -128, -124, -96, -49, 9, 65, 108, 121, 103, 81, 69, 54, 36, 18, -5, -22,
-34, -47, -57, -58, -54, -46, -46, -53, -55, -43, -19, 13, 46, 68, 84, 87, 78,
50, 2, -43, -82, -114, -124, -122, -87, -25, 21, 56, 73, 85, 93, 84, 62, 44, 34,
30, 39, 44, 42, 31, -1, -45, -90, -122, -128, -119, -90, -49, -8, 30, 59, 75,
78, 69, 53, 39, 23, 12, 5, -1, -2, -4, -17, -46, -73, -88, -88, -78, -57, -31,
-2, 34, 67, 92, 106, 105, 87, 45, -9, -59, -91, -106, -109, -96, -69, -30, 5,
34, 53, 65, 72, 63, 47, 37, 32, 36, 47, 54, 52, 29, -6, -46, -83, -114, -128,
-128, -110, -73, -27, 19, 55, 80, 85, 78, 62, 47, 40, 34, 22, 10, 2, -10, -22,
-38, -53, -66, -77, -81, -68, -42, -7, 34, 67, 86, 92, 90, 76, 50, 14, -27, -62,
-83, -91, -85, -64, -42, -21, 0, 19, 35, 43, 46, 47, 49, 50, 56, 63, 60, 46, 22,
-13, -51, -85, -113, -125, -119, -98, -62, -20, 21, 51, 66, 66, 61, 52, 41, 34,
31, 30, 26, 21, 12, 1, -19, -44, -70, -89, -89, -75, -46, -12, 24, 56, 82, 96,
94, 76, 47, 9, -27, -54, -67, -68, -64, -58, -50, -37, -20, 0, 16, 28, 35, 39,
46, 54, 66, 72, 66, 48, 19, -17, -55, -83, -100, -107, -104, -87, -60, -27, 7,
35, 49, 50, 42, 32, 31, 36, 43, 44, 42, 37, 26, 5, -19, -43, -70, -90, -96, -82,
-53, -14, 26, 58, 76, 80, 72, 57, 34, 7, -22, -46, -57, -58, -54, -48, -41, -36,
-31, -24, -11, 4, 20, 34, 46, 58, 68, 70, 62, 42, 13, -20, -50, -73, -91, -100,
-99, -84, -58, -25, 7, 28, 40, 39, 34, 31, 36, 42, 47, 48, 39, 30, 19, 3, -19,
-45, -70, -86, -91, -79, -50, -15, 18, 41, 54, 58, 56, 48, 33, 13, -8, -26, -35,
-38, -39, -42, -45, -47, -45, -39, -27, -10, 11, 33, 52, 68, 79, 82, 70, 48, 17,
-16, -46, -69, -85, -90, -83, -68, -47, -23, 1, 18, 26, 27, 27, 27, 32, 40, 50,
54, 52, 46, 34, 12, -18, -46, -69, -81, -83, -72, -50, -20, 10, 33, 45, 49, 49,
43, 31, 17, 2, -8, -13, -17, -20, -28, -38, -47, -51, -49, -37, -18, 6, 31, 54,
72, 84, 85, 74, 52, 22, -10, -37, -56, -67, -71, -67, -56, -41, -24, -9, 2, 8,
12, 16, 21, 30, 42, 53, 60, 61, 53, 36, 14, -11, -36, -56, -69, -71, -62, -44,
-20, 4, 23, 34, 37, 33, 27, 22, 19, 15, 10, 4, -3, -10, -19, -31, -42, -50, -52,
-43, -25, 0, 27, 54, 75, 83, 82, 70, 50, 23, -6, -32, -51, -61, -63, -59, -49,
-36, -24, -13, -7, -2, 2, 8, 16, 27, 40, 52, 60, 60, 52, 36, 14, -9, -32, -49,
-57, -58, -52, -39, -23, -5, 11, 21, 26, 25, 22, 20, 20, 20, 18, 13, 6, -3, -17,
-33, -48, -55, -55, -46, -31, -8, 19, 45, 63, 73, 74, 64, 45, 19, -6, -27, -42,
-51, -53, -50, -45, -39, -33, -26, -19, -13, -7, 2, 15, 28, 42, 54, 61, 60, 51,
34, 14, -7, -26, -39, -47, -47, -41, -31, -19, -7, 2, 10, 14, 17, 19, 22, 26,
30, 32, 27, 18, 5, -12, -29, -45, -55, -56, -48, -31, -8, 17, 42, 60, 70, 71,
62, 46, 27, 8, -10, -26, -36, -42, -42, -40, -38, -35, -32, -27, -22, -13, 0,
17, 33, 47, 56, 61, 58, 49, 36, 17, -3, -21, -32, -39, -41, -36, -28, -20, -14,
-9, -5, -1, 2, 8, 15, 24, 32, 37, 35, 26, 11, -8, -28, -46, -57, -59, -51, -33,
-11, 13, 36, 53, 63, 64, 58, 45, 28, 10, -5, -18, -27, -33, -37, -40, -41, -42,
-40, -35, -27, -16, -3, 12, 29, 44, 54, 58, 56, 47, 33, 17, -1, -16, -27, -33,
-35, -33, -29, -24, -19, -16, -13, -10, -5, 3, 13, 23, 32, 37, 37, 29, 15, -4,
-25, -42, -53, -56, -49, -34, -13, 8, 28, 43, 53, 57, 53, 44, 31, 17, 5, -7,
-17, -25, -33, -39, -44, -48, -49, -44, -34, -20, -5, 11, 27, 41, 50, 52, 50,
42, 30, 17, 2, -11, -20, -26, -28, -28, -27, -25, -23, -22, -19, -15, -9, 1, 13,
24, 34, 39, 40, 33, 19, 0, -19, -36, -46, -50, -46, -34, -17, 2, 20, 35, 45, 49,
49, 44, 34, 23, 12, 2, -10, -21, -31, -39, -46, -51, -52, -48, -38, -25, -9, 8,
25, 38, 47, 49, 46, 39, 29, 18, 8, -2, -11, -17, -21, -23, -25, -26, -26, -25,
-24, -20, -13, -3, 10, 23, 34, 40, 40, 34, 21, 4, -14, -30, -40, -45, -43, -34,
-21, -4, 13, 27, 36, 42, 44, 41, 36, 27, 18, 9, -1, -14, -26, -37, -45, -51,
-53, -50, -42, -28, -12, 5, 20, 33, 42, 45, 43, 37, 29, 21, 12, 3, -5, -11, -16,
-20, -22, -27, -29, -28, -27, -23, -17, -7, 5, 18, 29, 35, 37, 33, 22, 7, -9,
-24, -34, -39, -39, -34, -24, -11, 3, 16, 27, 34, 38, 38, 36, 30, 23, 15, 4, -8,
-22, -34, -44, -51, -55, -53, -45, -32, -16, 0, 15, 27, 36, 40, 39, 35, 29, 22,
15, 7, 0, -7, -12, -17, -21, -26, -29, -30, -30, -27, -21, -12, -1, 12, 22, 29,
32, 30, 22, 10, -5, -18, -29, -35, -37, -34, -27, -16, -4, 8, 18, 26, 32, 36,
36, 32, 26, 18, 8, -3, -17, -30, -40, -48, -52, -52, -45, -33, -18, -2, 12, 23,
31, 36, 37, 34, 30, 24, 19, 12, 6, -2, -7, -13, -18, -23, -29, -31, -30, -27,
-21, -13, -2, 9, 19, 27, 30, 29, 24, 14, 1, -12, -22, -29, -32, -31, -27, -19,
-8, 2, 13, 21, 28, 32, 35, 34, 29, 23, 14, 2, -11, -24, -36, -45, -50, -50, -46,
-36, -22, -8, 7, 18, 27, 33, 36, 35, 31, 26, 21, 16, 10, 3, -4, -10, -16, -22,
-27, -30, -30, -27, -22, -15, -6, 5, 15, 22, 27, 28, 24, 16, 6, -5, -15, -22,
-27, -28, -27, -22, -13, -4, 7, 16, 23, 29, 33, 35, 33, 27, 19, 8, -5, -18, -30,
-40, -46, -48, -45, -37, -25, -12, 1, 13, 22, 29, 32, 33, 31, 27, 23, 18, 13, 6,
-1, -8, -14, -20, -24, -29, -30, -29, -24, -18, -9, 0, 10, 18, 23, 25, 23, 18,
10, 0, -9, -16, -22, -25, -25, -23, -16, -9, 0, 9, 17, 23, 29, 33, 33, 29, 22,
12, 0, -13, -25, -36, -44, -47, -46, -39, -29, -17, -4, 7, 17, 24, 29, 32, 31,
28, 24, 20, 15, 8, 1, -6, -13, -19, -24, -28, -30, -29, -25, -18, -11, -2, 7,
14, 19, 23, 22, 18, 12, 4, -4, -12, -18, -22, -24, -23, -19, -12, -5, 4, 13, 20,
26, 31, 32, 31, 25, 16, 5, -8, -21, -32, -41, -46, -46, -41, -32, -21, -9, 3,
13, 21, 27, 31, 31, 30, 27, 22, 18, 11, 4, -4, -11, -18, -24, -27, -30, -30,
-26, -20, -13, -5, 3, 11, 17, 20, 22, 20, 15, 8, 1, -7, -13, -18, -21, -21, -19,
-14, -8, 0, 8, 16, 23, 28, 32, 31, 27, 20, 9, -2, -15, -27, -36, -42, -44, -41,
-34, -24, -13, -1, 9, 18, 25, 29, 32, 31, 29, 26, 21, 15, 8, 1, -8, -15, -21,
-26, -28, -29, -26, -21, -15, -7, 1, 8, 14, 18, 20, 19, 16, 11, 5, -2, -8, -14,
-17, -19, -19, -16, -11, -5, 3, 11, 19, 24, 29, 30, 28, 22, 13, 2, -10, -21,
-31, -39, -42, -41, -36, -28, -18, -7, 3, 13, 21, 26, 30, 31, 30, 28, 24, 18,
12, 4, -4, -12, -18, -24, -26, -28, -27, -23, -16, -9, -2, 5, 11, 15, 17, 18,
16, 12, 7, 2, -5, -10, -14, -18, -19, -17, -14, -8, -1, 7, 14, 21, 26, 29, 29,
24, 16, 6, -5, -16, -26, -34, -39, -40, -36, -29, -21, -11, -1, 9, 17, 24, 28,
31, 31, 30, 27, 22, 15, 7, -1, -9, -17, -22, -26, -26, -26, -23, -18, -11, -4,
2, 7, 11, 15, 16, 17, 14, 11, 6, 1, -5, -10, -14, -16, -16, -14, -10, -3, 4, 11,
18, 24, 28, 28, 26, 19, 10, 0, -11, -21, -29, -34, -37, -36, -31, -23, -15, -6,
4, 13, 20, 26, 30, 32, 31, 29, 25, 18, 10, 2, -6, -14, -20, -24, -25, -25, -23,
-19, -13, -6, 0, 5, 9, 13, 15, 16, 16, 13, 9, 5, -1, -6, -11, -15, -15, -14,
-11, -6, 1, 8, 15, 21, 25, 27, 25, 21, 13, 3, -6, -16, -23, -30, -33, -34, -32,
-26, -18, -10, -1, 8, 16, 24, 29, 31, 32, 29, 26, 19, 12, 4, -5, -13, -19, -24,
-25, -25, -23, -20, -16, -10, -4, 1, 5, 9, 12, 14, 14, 12, 9, 5, 0, -5, -10,
-14, -16, -16, -14, -9, -3, 4, 11, 17, 21, 23, 23, 19, 13, 5, -4, -13, -21, -27,
-32, -34, -33, -29, -23, -16, -7, 2, 11, 19, 26, 30, 31, 29, 25, 20, 12, 4, -4,
-12, -18, -23, -25, -26, -24, -21, -18, -13, -8, -3, 2, 5, 9, 11, 13, 13, 10, 7,
2, -3, -9, -13, -16, -16, -14, -11, -5, 1, 8, 14, 19, 21, 21, 19, 14, 8, -1, -9,
-17, -23, -29, -32, -33, -31, -26, -19, -11, -2, 8, 17, 24, 30, 32, 31, 28, 23,
16, 8, -1, -8, -15, -20, -23, -25, -23, -21, -19, -15, -10, -4, 1, 5, 9, 11, 14,
14, 12, 9, 5, 0, -6, -10, -14, -15, -14, -11, -7, -1, 5, 11, 16, 18, 19, 19, 15,
10, 3, -5, -12, -20, -26, -30, -32, -32, -29, -23, -15, -6, 4, 14, 22, 28, 31,
32, 29, 24, 18, 10, 2, -6, -12, -18, -22, -24, -24, -23, -21, -17, -13, -8, -2,
3, 7, 10, 13, 13, 12, 10, 6, 1, -4, -8, -12, -13, -13, -11, -8, -3, 3, 8, 12,
16, 17, 17, 15, 11, 6, -1, -8, -15, -22, -27, -31, -32, -30, -26, -19, -10, 0,
10, 18, 25, 29, 30, 29, 25, 19, 12, 5, -3, -9, -15, -20, -23, -24, -24, -22,
-19, -16, -10, -5, 0, 5, 9, 12, 13, 12, 10, 7, 3, -2, -6, -10, -12, -12, -11,
-8, -5, 0, 4, 9, 12, 14, 15, 14, 12, 7, 2, -5, -12, -19, -25, -29, -31, -31,
-27, -21, -12, -3, 7, 16, 23, 28, 30, 29, 27, 22, 16, 9, 2, -5, -11, -17, -21,
-23, -23, -22, -20, -16, -11, -6, 0, 5, 9, 12, 13, 13, 11, 9, 5, 1, -3, -7, -9,
-9, -9, -7, -5, -1, 3, 7, 11, 14, 15, 15, 13, 10, 5, 0, -8, -15, -21, -26, -29,
-29, -27, -21, -14, -5, 4, 13, 21, 26, 29, 29, 27, 24, 18, 12, 5, -2, -8, -14,
-19, -22, -23, -23, -21, -17, -13, -7, -1, 4, 8, 11, 12, 12, 11, 9, 6, 2, -1,
-4, -7, -8, -8, -7, -5, -2, 1, 5, 8, 12, 14, 15, 14, 11, 7, 2, -5, -12, -19,
-24, -27, -28, -27, -22, -16, -8, 1, 10, 17, 23, 27, 28, 27, 24, 20, 14, 8, 1,
-6, -11, -17, -21, -23, -23, -22, -18, -14, -9, -3, 2, 6, 9, 11, 12, 11, 9, 7,
4, 1, -3, -5, -7, -7, -7, -6, -3, -1, 3, 6, 10, 12, 13, 13, 12, 8, 4, -2, -9,
-15, -20, -25, -26, -26, -23, -18, -11, -2, 6, 14, 20, 25, 27, 27, 26, 22, 17,
11, 4, -3, -9, -14, -18, -21, -22, -21, -18, -14, -10, -4, 1, 6, 9, 11, 12, 12,
11, 9, 6, 4, 1, -2, -3, -4, -5, -4, -3, 0, 2, 6, 9, 12, 14, 14, 13, 10, 6, 1,
-5, -11, -17, -21, -23, -23, -21, -17, -12, -5, 3, 11, 18, 23, 26, 28, 27, 24,
21, 15, 8, 2, -5, -11, -16, -20, -21, -21, -19, -15, -11, -6, -1, 4, 8, 10, 11,
12, 11, 10, 8, 6, 3, 1, -2, -3, -4, -4, -4, -2, 0, 3, 6, 9, 11, 12, 12, 10, 7,
2, -3, -9, -14, -19, -22, -23, -22, -19, -14, -8, -1, 6, 13, 19, 23, 25, 26, 24,
21, 16, 10, 3, -4, -10, -15, -20, -22, -22, -21, -18, -14, -9, -4, 1, 5, 7, 9,
10, 10, 9, 7, 5, 3, 0, -2, -4, -5, -5, -5, -4, -2, 1, 4, 7, 9, 10, 10, 8, 6, 2,
-3, -8, -13, -18, -21, -23, -23, -20, -17, -11, -5, 2, 9, 15, 20, 23, 24, 24,
21, 17, 12, 5, -2, -8, -14, -18, -21, -22, -21, -19, -15, -10, -6, -1, 3, 6, 8,
9, 9, 8, 7, 6, 4, 1, -1, -3, -4, -5, -4, -4, -2, 0, 3, 6, 8, 9, 9, 9, 7, 4, 0,
-5, -10, -14, -18, -20, -21, -20, -17, -13, -7, 0, 6, 13, 18, 22, 24, 24, 23,
19, 14, 8, 1, -5, -11, -17, -20, -21, -21, -19, -16, -12, -8, -3, 1, 4, 7, 9, 9,
9, 8, 7, 5, 3, 1, -1, -3, -4, -4, -4, -2, -1, 2, 4, 6, 8, 8, 8, 7, 4, 1, -4, -8,
-12, -16, -19, -20, -20, -18, -15, -10, -4, 2, 9, 15, 20, 22, 24, 23, 20, 16,
10, 3, -3, -9, -15, -19, -21, -21, -20, -18, -14, -10, -5, -1, 2, 6, 8, 9, 9, 8,
7, 5, 3, 1, -1, -3, -4, -4, -5, -3, -2, 0, 2, 4, 6, 7, 7, 6, 4, 1, -3, -7, -10,
-14, -17, -19, -20, -18, -16, -12, -6, 0, 7, 12, 17, 21, 23, 23, 21, 17, 12, 6,
0, -7, -12, -17, -20, -21, -21, -19, -16, -11, -7, -2, 1, 5, 7, 9, 9, 9, 8, 6,
5, 3, 0, -1, -3, -3, -3, -3, -2, 0, 2, 4, 6, 7, 7, 7, 5, 3, 0, -4, -7, -11, -14,
-16, -17, -17, -15, -11, -7, -1, 5, 11, 16, 20, 22, 23, 22, 19, 15, 9, 3, -3,
-9, -14, -17, -19, -19, -18, -15, -12, -7, -3, 1, 4, 7, 9, 10, 9, 9, 7, 6, 4, 2,
1, -1, -2, -2, -2, -1, 0, 2, 4, 5, 6, 7, 6, 5, 3, 1, -2, -6, -9, -12, -15, -16,
-16, -15, -12, -8, -3, 3, 8, 14, 18, 21, 22, 22, 20, 16, 11, 5, -1, -7, -12,
-16, -18, -19, -19, -17, -14, -10, -5, -1, 2, 5, 7, 8, 8, 8, 7, 6, 4, 2, 1, -1,
-2, -3, -2, -2, -1, 0, 2, 3, 5, 5, 5, 4, 3, 1, -2, -5, -8, -11, -14, -15, -16,
-15, -13, -10, -6, 0, 6, 11, 15, 19, 20, 21, 20, 16, 12, 7, 1, -5, -10, -14,
-17, -19, -19, -18, -15, -11, -7, -3, 1, 4, 6, 8, 8, 8, 7, 6, 5, 3, 1, 0, -1,
-2, -2, -2, -1, 0, 1, 3, 4, 4, 4, 4, 3, 1, -1, -4, -7, -10, -12, -14, -15, -15,
-13, -10, -7, -2, 3, 9, 14, 17, 20, 21, 20, 18, 14, 9, 3, -2, -7, -12, -16, -18,
-18, -17, -15, -12, -8, -4, -1, 3, 6, 7, 8, 9, 8, 7, 6, 4, 2, 1, -1, -2, -2, -1,
-1, 0, 1, 2, 4, 4, 4, 4, 3, 2, 0, -3, -5, -8, -10, -12, -14, -14, -13, -11, -8,
-4, 1, 6, 11, 15, 18, 20, 20, 18, 14, 10, 5, 0, -6, -11, -15, -17, -18, -18,
-17, -14, -10, -6, -3, 1, 4, 6, 8, 8, 8, 7, 6, 5, 3, 1, 0, -1, -2, -2, -2, -1,
0, 1, 2, 3, 3, 3, 2, 1, 0, -3, -5, -7, -10, -12, -14, -14, -14, -12, -9, -6, -1,
4, 9, 13, 16, 18, 19, 18, 15, 11, 6, 1, -4, -9, -13, -16, -18, -18, -17, -15,
-12, -8, -4, -1, 2, 5, 7, 8, 8, 7, 6, 5, 3, 2, 0, -1, -2, -2, -2, -2, -1, 0, 1,
2, 3, 2, 2, 1, 0, -2, -4, -6, -8, -10, -12, -13, -13, -12, -10, -6, -2, 3, 8,
12, 15, 17, 18, 18, 16, 12, 8, 3, -2, -7, -11, -15, -17, -18, -18, -16, -13,
-10, -6, -2, 2, 4, 6, 8, 8, 8, 7, 6, 4, 3, 2, 0, -1, -1, -1, -1, 0, 0, 1, 2, 2,
3, 2, 1, 0, -1, -3, -5, -7, -9, -11, -12, -12, -11, -10, -7, -3, 1, 6, 10, 14,
16, 18, 18, 16, 14, 10, 5, 0, -5, -9, -13, -16, -17, -17, -16, -14, -11, -7, -3,
0, 3, 6, 7, 8, 8, 7, 6, 5, 3, 2, 0, -1, -2, -2, -2, -1, -1, 0, 1, 1, 2, 1, 1, 0,
-1, -3, -5, -7, -9, -10, -12, -12, -12, -10, -8, -5, -1, 4, 8, 11, 14, 16, 17,
16, 14, 10, 6, 1, -3, -8, -12, -15, -17, -18, -17, -15, -13, -9, -6, -2, 1, 4,
6, 7, 7, 7, 6, 5, 3, 2, 1, -1, -2, -2, -2, -2, -1, -1, 0, 1, 1, 1, 1, 0, -1, -2,
-4, -6, -8, -10, -11, -12, -11, -11, -9, -6, -2, 2, 6, 10, 13, 15, 16, 16, 14,
12, 8, 4, -1, -5, -10, -13, -16, -17, -16, -15, -13, -10, -6, -2, 1, 4, 6, 7, 8,
8, 7, 7, 5, 4, 2, 1, 0, -1, -1, -1, -1, 0, 1, 1, 2, 2, 1, 1, 0, -1, -3, -5, -7,
-8, -9, -10, -10, -10, -8, -6, -2, 2, 6, 9, 12, 15, 16, 16, 15, 13, 10, 6, 1,
-3, -7, -11, -15, -16, -16, -16, -14, -11, -8, -4, 0, 3, 5, 7, 8, 8, 8, 7, 6, 4,
3, 2, 0, 0, -1, -1, -1, -1, 0, 1, 1, 1, 1, 1, 0, -1, -2, -4, -6, -7, -8, -9,
-10, -9, -8, -6, -3, 0, 4, 8, 11, 13, 15, 16, 15, 14, 11, 7, 2, -2, -6, -10,
-14, -16, -16, -16, -14, -12, -9, -5, -1, 2, 4, 6, 8, 8, 8, 8, 7, 5, 4, 3, 1, 0,
-1, -1, -1, -1, -1, 0, 0, 1, 1, 0, 0, -1, -2, -3, -5, -6, -8, -9, -9, -9, -8,
-6, -4, -1, 3, 6, 10, 12, 14, 15, 15, 14, 11, 8, 4, 0, -4, -9, -12, -15, -16,
-16, -15, -13, -10, -7, -3, 0, 3, 6, 7, 8, 9, 8, 7, 6, 5, 3, 2, 1, 0, -1, -1,
-1, -1, 0, 1, 1, 1, 1, 0, 0, -1, -3, -4, -6, -7, -8, -8, -8, -8, -6, -4, -1, 2,
5, 8, 11, 13, 15, 15, 14, 12, 9, 6, 2, -2, -7, -10, -13, -15, -16, -15, -14,
-11, -8, -5, -1, 2, 4, 6, 7, 8, 8, 7, 6, 5, 3, 2, 0, -1, -1, -2, -2, -1, -1, 0,
0, 0, 0, 0, -1, -2, -3, -4, -6, -7, -8, -8, -9, -8, -7, -5, -3, 0, 3, 6, 9, 11,
13, 13, 13, 12, 9, 6, 2, -2, -6, -10, -13, -15, -16, -15, -14, -12, -9, -6, -3,
1, 3, 5, 7, 8, 8, 8, 7, 5, 4, 3, 1, 0, -1, -2, -2, -2, -1, -1, 0, 0, 0, -1, -1,
-2, -3, -4, -6, -7, -8, -8, -8, -8, -8, -6, -4, -1, 2, 5, 8, 10, 12, 13, 13, 12,
10, 7, 4, 0, -3, -7, -10, -13, -14, -15, -14, -12, -10, -7, -4, -1, 2, 5, 6, 7,
8, 8, 7, 5, 4, 3, 1, 0, -1, -2, -2, -2, -1, -1, 0, 0, 0, 0, -1, -1, -2, -3, -4,
-5, -6, -7, -7, -7, -7, -5, -3, -1, 2, 5, 8, 10, 12, 13, 13, 12, 11, 8, 5, 2,
-2, -6, -9, -12, -14, -14, -14, -13, -11, -8, -5, -1, 2, 4, 6, 8, 9, 9, 8, 8, 6,
5, 3, 2, 1, 0, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1, -2, -3, -4, -5, -6, -7, -7, -7,
-7, -6, -4, -2, 1, 3, 6, 9, 11, 12, 13, 12, 11, 9, 6, 3, 0, -4, -7, -10, -12,
-13, -13, -12, -11, -9, -6, -2, 1, 3, 6, 7, 8, 9, 8, 8, 6, 5, 3, 2, 1, 0, -1,
-1, -1, -1, -1, -1, 0, -1, -1, -1, -2, -2, -3, -4, -5, -6, -6, -7, -6, -6, -4,
-2, 0, 3, 6, 8, 10, 11, 12, 12, 11, 9, 7, 4, 1, -3, -6, -9, -12, -13, -14, -13,
-12, -10, -7, -4, -1, 2, 4, 6, 7, 8, 8, 8, 7, 6, 5, 3, 1, 0, 0, -1, -1, -1, -1,
-1, 0, 0, 0, -1, -1, -2, -3, -4, -5, -6, -6, -6, -6, -6, -4, -2, 0, 2, 4, 7, 9,
10, 11, 11, 11, 9, 7, 4, 1, -2, -5, -8, -11, -12, -13, -13, -12, -10, -7, -4,
-2, 1, 4, 6, 7, 8, 9, 9, 7, 6, 5, 3, 2, 1, 0, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -2, -2, -3, -4, -5, -5, -6, -6, -6, -5, -4, -2, -1, 1, 4, 6, 8, 10, 10, 11,
11, 9, 8, 5, 2, -1, -4, -7, -10, -12, -13, -13, -12, -11, -9, -6, -3, 0, 2, 5,
6, 8, 8, 8, 8, 7, 5, 4, 2, 1, 0, -1, -2, -2, -2, -1, -1, -1, -1, -1, -2, -2, -3,
-3, -5, -5, -6, -6, -6, -6, -5, -3, -1, 1, 3, 5, 7, 8, 9, 10, 10, 9, 7, 5, 3, 0,
-3, -6, -9, -11, -12, -13, -12, -11, -9, -7, -4, -2, 1, 3, 5, 7, 8, 8, 8, 7, 6,
4, 3, 2, 0, -1, -2, -2, -2, -2, -1, -1, -1, -1, -2, -2, -3, -3, -4, -5, -5, -5,
-5, -5, -5, -3, -2, 0, 2, 4, 6, 8, 10, 10, 10, 10, 8, 7, 4, 1, -1, -4, -7, -10,
-11, -12, -12, -11, -10, -7, -5, -2, 0, 3, 5, 7, 8, 8, 8, 8, 6, 5, 4, 2, 0, -1,
-2, -2, -2, -2, -2, -2, -1, -1, -2, -2, -2, -3, -3, -4, -4, -5, -5, -5, -5, -4,
-2, -1, 1, 3, 5, 7, 8, 9, 9, 9, 8, 6, 4, 2, -1, -4, -6, -9, -11, -11, -12, -11,
-10, -8, -6, -3, -1, 2, 4, 5, 7, 8, 8, 7, 7, 5, 4, 2, 1, -1, -2, -2, -3, -3, -3,
-3, -2, -2, -2, -2, -3, -3, -4, -4, -5, -5, -5, -5, -5, -4, -3, -1, 1, 3, 5, 6,
8, 9, 9, 9, 8, 7, 5, 3, 0, -3, -5, -8, -10, -11, -12, -12, -11, -9, -7, -4, -2,
0, 3, 5, 6, 7, 7, 7, 6, 5, 4, 2, 1, 0, -1, -2, -2, -3, -3, -2, -2, -2, -2, -3,
-3, -3, -4, -4, -5, -5, -5, -5, -5, -5, -4, -2, 0, 2, 4, 5, 7, 8, 8, 8, 8, 6, 5,
3, 1, -2, -5, -7, -9, -11, -11, -11, -11, -9, -8, -5, -3, 0, 2, 4, 6, 7, 8, 8,
7, 6, 5, 3, 2, 0, -1, -2, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -4, -5,
-5, -5, -5, -5, -4, -4, -2, 0, 2, 3, 5, 7, 8, 8, 8, 8, 7, 5, 3, 1, -1, -4, -6,
-9, -10, -11, -12, -11, -10, -8, -6, -4, -2, 1, 3, 5, 6, 7, 7, 7, 6, 5, 4, 2, 1,
0, -1, -2, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -4, -4, -5, -5, -5, -5, -4,
-4, -2, -1, 1, 3, 4, 6, 7, 7, 8, 7, 7, 6, 4, 2, 0, -3, -5, -8, -10, -11, -11,
-11, -10, -9, -7, -4, -2, 0, 3, 5, 6, 7, 8, 8, 7, 6, 5, 3, 2, 1, 0, -1, -2, -2,
-3, -3, -2, -2, -2, -3, -3, -3, -3, -4, -4, -4, -4, -4, -4, -3, -2, -1, 1, 3, 4,
6, 7, 7, 8, 8, 7, 6, 5, 3, 0, -2, -4, -6, -8, -10, -10, -10, -10, -9, -7, -5,
-3, 0, 2, 4, 5, 7, 8, 8, 7, 7, 6, 4, 3, 1, 0, -1, -2, -2, -2, -3, -2, -3, -3,
-2, -3, -2, -3, -3, -4, -4, -4, -4, -3, -3, -2, -1, 1, 3, 4, 5, 7, 7, 8, 8, 7,
6, 5, 3, 1, -1, -3, -5, -8, -9, -10, -10, -10, -9, -7, -5, -3, -1, 1, 3, 5, 6,
7, 8, 8, 7, 6, 4, 3, 1, 0, -1, -2, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3,
-4, -4, -4, -4, -4, -3, -3, -2, 0, 1, 3, 4, 6, 6, 7, 7, 7, 6, 5, 4, 2, 0, -3,
-5, -7, -9, -10, -10, -10, -9, -8, -7, -4, -2, 0, 2, 4, 5, 7, 7, 7, 7, 6, 5, 3,
2, 0, -1, -2, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3,
-3, -3, -1, 0, 1, 3, 4, 5, 6, 7, 7, 7, 6, 5, 4, 2, 0, -2, -4, -6, -8, -9, -10,
-10, -10, -9, -7, -5, -3, -1, 1, 3, 5, 6, 7, 7, 7, 6, 5, 4, 2, 1, 0, -2, -2, -3,
-3, -4, -4, -3, -4, -3, -3, -3, -3, -3, -4, -4, -4, -4, -3, -3, -2, -1, 0, 2, 3,
4, 5, 6, 6, 6, 6, 5, 3, 2, 0, -2, -4, -6, -8, -9, -10, -10, -10, -9, -8, -6, -4,
-2, 0, 2, 4, 6, 7, 7, 7, 7, 6, 4, 3, 1, 0, -1, -2, -3, -3, -4, -4, -4, -4, -4,
-4, -3, -3, -3, -4, -4, -4, -3, -3, -3, -2, -1, 0, 2, 3, 4, 5, 6, 6, 6, 6, 5, 4,
3, 1, -1, -3, -5, -7, -9, -9, -10, -10, -9, -8, -6, -4, -2, -1, 1, 3, 5, 6, 7,
7, 7, 6, 5, 3, 2, 1, -1, -2, -3, -3, -3, -4, -4, -4, -4, -4, -3, -3, -3, -3, -3,
-3, -3, -3, -2, -2, -1, 1, 2, 3, 5, 6, 6, 7, 7, 6, 6, 5, 3, 2, 0, -2, -4, -6,
-7, -8, -9, -9, -8, -7, -6, -4, -2, 0, 1, 3, 5, 6, 7, 8, 7, 7, 6, 4, 3, 1, 0,
-1, -2, -2, -3, -3, -3, -4, -4, -4, -3, -3, -3, -3, -3, -3, -3, -3, -2, -2, -1,
0, 1, 2, 4, 5, 5, 6, 6, 6, 6, 5, 4, 2, 1, -1, -3, -5, -7, -8, -9, -9, -9, -8,
-7, -5, -3, -1, 1, 2, 4, 5, 6, 7, 7, 6, 5, 4, 3, 2, 0, -1, -2, -3, -3, -4, -4,
-4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -3, -3, -2, -2, -1, 0, 2, 3, 4, 5, 6, 6,
6, 5, 4, 3, 2, 0, -1, -3, -5, -6, -8, -9, -9, -9, -8, -7, -6, -4, -2, 0, 2, 3,
5, 6, 7, 7, 7, 6, 5, 4, 2, 1, 0, -1, -2, -3, -3, -3, -4, -4, -4, -3, -3, -3, -3,
-3, -3, -3, -3, -3, -2, -2, -1, 0, 1, 3, 4, 5, 5, 5, 5, 5, 5, 4, 2, 1, -1, -3,
-4, -6, -7, -8, -9, -9, -8, -7, -6, -4, -2, 0, 1, 3, 5, 6, 7, 7, 7, 7, 6, 4, 3,
2, 0, -1, -2, -2, -3, -3, -3, -3, -4, -3, -3, -3, -3, -3, -3, -3, -2, -2, -2,
-1, -1, 0, 2, 3, 4, 5, 5, 6, 6, 6, 5, 4, 3, 2, 0, -2, -3, -5, -7, -8, -8, -9,
-8, -8, -7, -5, -3, -1, 1, 2, 4, 5, 6, 7, 7, 7, 6, 5, 4, 2, 1, 0, -1, -2, -3,
-4, -4, -4, -4, -4, -4, -3, -3, -3, -3, -3, -3, -2, -2, -1, -1, 0, 1, 2, 3, 4,
5, 5, 6, 6, 5, 4, 3, 2, 1, -1, -3, -4, -6, -7, -8, -8, -8, -7, -7, -5, -4, -2,
0, 2, 3, 4, 6, 6, 7, 7, 6, 5, 4, 2, 1, 0, -2, -2, -3, -4, -4, -4, -4, -4, -4,
-4, -3, -3, -3, -3, -3, -2, -2, -1, -1, 0, 1, 2, 3, 4, 5, 5, 6, 5, 5, 4, 4, 2,
1, -1, -2, -4, -5, -6, -7, -8, -8, -7, -6, -5, -4, -2, -1, 1, 3, 4, 5, 7, 7, 7,
7, 6, 5, 3, 2, 1, 0, -1, -2, -3, -3, -4, -4, -4, -4, -4, -3, -3, -3, -3, -2, -2,
-2, -1, -1, 0, 1, 2, 3, 4, 4, 5, 5, 5, 5, 4, 4, 2, 1, 0, -2, -3, -5, -6, -7, -8,
-8, -7, -7, -5, -4, -2, -1, 1, 2, 4, 5, 6, 7, 7, 7, 6, 5, 4, 3, 1, 0, -1, -2,
-3, -4, -4, -4, -4, -4, -4, -4, -3, -3, -3, -3, -2, -2, -1, -1, 0, 1, 1, 3, 4,
4, 5, 5, 5, 5, 4, 4, 2, 1, 0, -2, -3, -5, -6, -7, -8, -8, -8, -7, -7, -6, -4,
-2, -1, 1, 2, 4, 5, 6, 6, 6, 5, 5, 3, 2, 1, 0, -1, -2, -3, -4, -4, -4, -4, -4,
-4, -4, -3, -3, -2, -2, -2, -2, -1, -1, 0, 0, 1, 2, 3, 4, 4, 4, 5, 4, 4, 3, 2,
1, 0, -2, -3, -4, -6, -7, -8, -8, -8, -7, -6, -5, -4, -2, -1, 1, 2, 4, 5, 6, 6,
6, 6, 5, 4, 3, 2, 0, -1, -2, -3, -3, -4, -4, -4, -4, -4, -4, -3, -3, -2, -2, -2,
-1, -1, 0, 0, 1, 1, 2, 3, 4, 4, 5, 5, 5, 5, 4, 4, 3, 1, 0, -2, -3, -4, -5, -7,
-7, -7, -6, -6, -5, -4, -3, -1, 0, 2, 3, 5, 6, 6, 6, 6, 6, 4, 3, 2, 1, 0, -1,
-2, -3, -4, -4, -4, -4, -4, -3, -3, -2, -2, -1, -1, -1, 0, 0, 1, 1, 2, 3, 4, 4,
5, 5, 6, 6, 5, 5, 4, 3, 2, 1, -1, -2, -3, -5, -6, -6, -6, -6, -6, -5, -4, -3,
-1, 0, 2, 3, 5, 6, 7, 7, 7, 6, 5, 4, 3, 2, 0, -1, -2, -2, -3, -4, -4, -4, -4,
-4, -3, -3, -2, -2, -2, -2, -1, -1, 0, 0, 1, 2, 2, 3, 4, 4, 4, 4, 4, 4, 3, 2, 1,
0, -1, -2, -4, -5, -6, -6, -7, -6, -6, -5, -4, -3, -2, 0, 1, 3, 4, 5, 6, 6, 6,
5, 5, 4, 2, 1, 0, -1, -2, -3, -4, -4, -5, -5, -5, -5, -4, -4, -3, -3, -2, -2,
-2, -1, -1, 0, 1, 1, 2, 3, 3, 4, 4, 4, 4, 4, 3, 2, 1, 0, -1, -2, -4, -5, -6, -7,
-7, -7, -6, -5, -5, -4, -2, -1, 1, 2, 3, 4, 5, 6, 6, 6, 5, 4, 3, 2, 1, -1, -2,
-3, -3, -4, -4, -4, -4, -4, -4, -3, -3, -2, -2, -2, -1, -1, 0, 0, 1, 1, 2, 2, 3,
4, 4, 4, 4, 3, 3, 2, 1, 0, -1, -2, -3, -4, -6, -6, -7, -7, -6, -6, -5, -4, -3,
-1, 0, 1, 3, 4, 5, 6, 6, 6, 5, 4, 3, 2, 1, 0, -1, -2, -3, -4, -4, -4, -4, -5,
-4, -4, -3, -3, -2, -2, -1, -1, 0, 0, 0, 1, 2, 2, 3, 3, 4, 4, 4, 4, 3, 3, 2, 1,
0, -2, -3, -4, -5, -6, -7, -7, -6, -6, -5, -4, -3, -2, 0, 1, 2, 3, 5, 5, 5, 5,
5, 4, 3, 2, 1, 0, -1, -2, -3, -4, -4, -5, -5, -5, -5, -4, -3, -3, -2, -2, -1,
-1, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 4, 3, 3, 2, 1, 1, 0, -2, -3, -4, -5, -6, -7,
-7, -7, -6, -6, -5, -4, -2, -1, 0, 2, 3, 4, 5, 6, 6, 5, 5, 4, 3, 2, 1, 0, -2,
-2, -3, -4, -4, -4, -4, -4, -4, -4, -3, -2, -2, -2, -1, -1, 0, 0, 1, 1, 2, 3, 3,
3, 4, 4, 3, 3, 2, 2, 1, 0, -1, -2, -3, -4, -5, -6, -6, -6, -5, -5, -4, -3, -2,
-1, 1, 2, 3, 4, 5, 6, 6, 6, 5, 4, 3, 2, 1, 0, -1, -2, -3, -3, -4, -4, -4, -4,
-4, -3, -3, -2, -2, -1, -1, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 4, 4, 3, 3, 2, 2, 1,
-1, -2, -3, -4, -5, -6, -6, -6, -6, -5, -5, -4, -3, -1, 0, 1, 2, 4, 5, 5, 5, 6,
5, 4, 3, 2, 2, 0, -1, -1, -2, -3, -4, -4, -4, -4, -4, -4, -3, -3, -2, -2, -1,
-1, 0, 0, 1, 1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 2, 1, 1, 0, -2, -3, -4, -5, -6, -6,
-6, -6, -5, -5, -4, -3, -2, -1, 0, 1, 3, 3, 4, 5, 5, 5, 4, 3, 2, 1, 0, -1, -2,
-3, -4, -4, -5, -5, -5, -5, -5, -4, -3, -2, -2, -2, -1, 0, 0, 1, 1, 2, 3, 3, 3,
4, 3, 3, 3, 3, 2, 2, 1, 0, -1, -2, -3, -5, -5, -6, -6, -6, -5, -5, -4, -3, -2,
-1, 0, 1, 3, 4, 4, 5, 5, 5, 5, 4, 3, 2, 1, 0, -1, -2, -3, -4, -4, -4, -5, -5,
-4, -4, -3, -2, -2, -2, -1, 0, 1, 1, 2, 2, 3, 3, 3, 4, 4, 4, 3, 3, 2, 2, 1, 0,
-1, -2, -3, -4, -4, -5, -5, -6, -5, -5, -4, -3, -2, -1, 1, 2, 3, 4, 5, 5, 5, 5,
5, 4, 3, 2, 1, 0, -1, -2, -3, -4, -4, -5, -5, -5, -4, -4, -3, -3, -2, -2, -1, 0,
0, 1, 1, 2, 2, 3, 3, 4, 4, 4, 3, 3, 3, 2, 1, 0, 0, -2, -2, -3, -4, -5, -6, -6,
-6, -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5, 5, 5, 5, 4, 4, 3, 2, 0, -1, -1, -2,
-3, -4, -5, -5, -5, -5, -5, -4, -3, -2, -2, -1, -1, 0, 0, 1, 1, 2, 2, 3, 3, 3,
3, 2, 2, 2, 2, 1, 0, -1, -2, -3, -4, -5, -5, -6, -6, -6, -5, -5, -4, -3, -2, 0,
1, 2, 3, 4, 5, 5, 5, 5, 5, 4, 3, 2, 1, 0, -1, -2, -3, -4, -5, -5, -5, -5, -4,
-4, -3, -3, -2, -1, -1, 0, 1, 1, 2, 2, 3, 3, 4, 3, 4, 3, 3, 2, 2, 1, 0, 0, -1,
-2, -3, -4, -5, -5, -5, -5, -5, -4, -4, -3, -2, -1, 0, 1, 3, 3, 4, 5, 5, 5, 4,
4, 3, 2, 1, 0, -1, -2, -3, -3, -4, -5, -5, -5, -5, -4, -4, -3, -3, -2, -1, -1,
0, 0, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 1, 0, 0, -1, -2, -3, -4, -5, -5, -6, -6, -6,
-6, -5, -5, -4, -3, -2, -1, 0, 1, 2, 3, 3, 4, 4, 3, 3, 2, 1, 0, -1, -2, -3, -4,
-4, -5, -6, -6, -6, -6, -6, -5, -4, -4, -3, -3, -2, -1, 0, 0, 0, 1, 2, 2, 2, 2,
2, 1, 1, 1, 0, 0, -1, -2, -3, -4, -4, -5, -6, -6, -6, -6, -5, -5, -4, -3, -2,
-1, 0, 1, 2, 3, 4, 4, 4, 4, 3, 2, 2, 1, 0, -1, -2, -3, -4, -4, -5, -5, -5, -5,
-5, -4, -4, -3, -2, -1, -1, 0, 1, 1, 2, 2, 3, 3, 3, 3, 3, 3, 2, 2, 1, 1, 0, 0,
-2, -2, -3, -4, -4, -5, -5, -5, -5, -4, -4, -3, -2, -1, 0, 1, 2, 3, 4, 4, 4, 4,
4, 3, 2, 1, 1, 0, -1, -2, -3, -4, -5, -5, -5, -5, -5, -4, -4, -3, -2, -2, -1,
-1, 0, 0, 1, 2, 2, 2, 2, 3, 2, 2, 2, 2, 1, 1, 0, -1, -1, -2, -3, -4, -4, -5, -5,
-5, -5, -5, -4, -4, -3, -2, -1, 0, 1, 2, 3, 3, 4, 4, 3, 3, 2, 1, 0, -1, -2, -2,
-3, -4, -5, -5, -5, -6, -5, -5, -4, -3, -3, -2, -1, -1, 0, 0, 1, 1, 1, 2, 2, 2,
2, 2, 1, 1, 1, 0, 0, -1, -2, -2, -3, -4, -4, -5, -5, -5, -5, -5, -4, -4, -3, -2,
-1, 1, 1, 2, 3, 4, 4, 4, 3, 3, 3, 2, 1, 0, -1, -2, -2, -3, -4, -5, -5, -5, -5,
-5, -4, -3, -3, -2, -2, -1, 0, 0, 1, 2, 2, 2, 3, 3, 3, 2, 2, 2, 2, 1, 0, 0, -1,
-2, -2, -3, -3, -4, -4, -4, -4, -4, -3, -3, -2, -1, 0, 1, 2, 3, 3, 4, 4, 4, 4,
4, 3, 3, 2, 1, 0, -1, -2, -3, -3, -4, -4, -4, -4, -4, -4, -3, -2, -1, -1, 0, 0,
1, 2, 2, 3, 3, 3, 3, 3, 2, 2, 2, 1, 1, 0, -1, -1, -2, -3, -4, -4, -4, -4, -4,
-4, -4, -4, -3, -2, -1, -1, 0, 1, 2, 3, 4, 4, 5, 4, 4, 3, 3, 2, 2, 0, -1, -1,
-3, -3, -4, -4, -4, -5, -4, -4, -3, -2, -2, -2, -1, 0, 1, 1, 2, 3, 3, 3, 3, 3,
3, 3, 2, 2, 1, 1, 0, 0, -1, -2, -3, -3, -3, -4, -4, -4, -4, -3, -3, -2, -1, 0,
1, 1, 2, 3, 4, 4, 5, 5, 4, 4, 3, 3, 2, 0, 0, -1, -2, -3, -3, -4, -4, -4, -4, -3,
-2, -2, -2, -1, 0, 0, 1, 2, 2, 3, 3, 4, 4, 4, 4, 3, 3, 3, 3, 2, 1, 0, 0, -1, -1,
-2, -3, -3, -4, -4, -4, -3, -2, -2, -1, 0, 1, 2, 3, 3, 4, 5, 5, 5, 5, 5, 4, 4,
3, 2, 1, 0, -1, -2, -2, -3, -3, -3, -3, -3, -2, -2, -1, -1, 0, 0, 1, 2, 2, 3, 3,
4, 4, 4, 4, 3, 3, 3, 3, 2, 2, 1, 0, 0, -1, -2, -2, -3, -3, -3, -3, -3, -2, -2,
-1, 0, 0, 1, 2, 3, 4, 4, 5, 5, 5, 4, 4, 4, 3, 2, 1, 0, -1, -2, -2, -2, -3, -3,
-3, -3, -3, -2, -1, -1, 0, 0, 1, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 1, 1, 0,
-1, -1, -2, -3, -3, -3, -3, -3, -3, -3, -3, -2, -1, -1, 0, 1, 2, 3, 3, 3, 4, 4,
3, 3, 2, 2, 1, 0, -1, -1, -2, -3, -3, -4, -4, -4, -4, -3, -3, -2, -2, -1, -1, 0,
0, 1, 1, 1, 2, 2, 2, 2, 2, 2, 1, 1, 1, 0, 0, -1, -2, -2, -3, -3, -4, -4, -4, -4,
-4, -4, -3, -3, -2, -2, -1, 0, 0, 1, 2, 2, 2, 2, 2, 2, 2, 1, 0, 0, -1, -2, -2,
-3, -3, -3, -4, -4, -4, -4, -3, -3, -2, -2, -1, 0, 0, 1, 1, 2, 2, 2, 2, 3, 2, 2,
2, 2, 1, 1, 0, 0, -1, -1, -2, -2, -3, -3, -3, -3, -3, -3, -3, -2, -2, -1, -1, 0,
1, 1, 2, 2, 2, 3, 3, 2, 2, 1, 1, 0, -1, -1, -2, -2, -3, -3, -4, -4, -4, -4, -3,
-3, -2, -2, -2, -1, 0, 0, 1, 1, 1, 2, 2, 2, 2, 2, 2, 1, 1, 1, 0, 0, -1, -1, -2,
-2, -2, -3, -3, -3, -3, -3, -2, -2, -2, -1, -1, 0, 0, 1, 1, 2, 2, 2, 2, 2, 1, 1,
1, 0, -1, -1, -2, -2, -3, -3, -3, -4, -4, -3, -3, -3, -3, -3, -2, -1, -1, -1, 0,
0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, -1, -1, -2, -2, -2, -3, -3, -3, -3, -3, -3,
-3, -2, -2, -1, -1, 0, 0, 1, 1, 1, 2, 2, 2, 2, 2, 1, 1, 0, 0, -1, -1, -2, -2,
-2, -3, -3, -3, -3, -3, -3, -2, -2, -2, -2, -1, -1, 0, 0, 1, 1, 1, 1, 1, 1, 1,
1, 1, 0, 0, 0, -1, -1, -1, -2, -2, -3, -3, -3, -3, -3, -2, -2, -2, -1, -1, -1,
0, 0, 1, 1, 2, 2, 2, 2, 1, 1, 1, 0, 0, -1, -1, -2, -2, -2, -3, -3, -3, -3, -3,
-3, -3, -2, -2, -2, -1, -1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, -1, -1,
-2, -2, -3, -3, -3, -3, -3, -3, -3, -3, -2, -2, -2, -1, -1, 0, 0, 1, 1, 1, 2, 1,
1, 1, 1, 0, 0, 0, -1, -1, -2, -2, -3, -3, -3, -3, -3, -3, -3, -3, -2, -2, -1,
-1, -1, -1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, -1, -1, -1, -2, -2, -2, -2, -3, -3,
-3, -3, -3, -2, -2, -2, -1, -1, -1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, -1,
-1, -1, -2, -2, -2, -3, -3, -2, -2, -2, -2, -2, -1, -1, -1, 0, 0, 0, 0, 1, 1, 1,
1, 1, 1, 0, 0, 0, 0, 0, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1,
-1, 0, 0, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 0, 0, 0, -1, -1, -1, -2, -2, -2, -2,
-2, -2, -1, -1, -1, -1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, -1,
-1, -1, -1, -2, -2, -2, -2, -2, -1, -1, -1, -1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 0, 0, 0, -1, -1, -1, -1, -2, -2, -2, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0,
1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -2, -2, -2, -2, -1,
-1, -1, -1, -1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0,
0, 0, 0, -1, -1, -1, -1, -1, -1, -2, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 1, 1,
1, 1, 1, 1, 1, 1, 1, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -2, -1, -1, -1, -1,
-1, -1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1,
-2, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0,
0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, };

#endif /* TABLAONE_H_ */