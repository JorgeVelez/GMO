#ifndef EDRUMTWELVE_H_
#define EDRUMTWELVE_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define EDRUMTWELVE_NUM_CELLS 7478
#define EDRUMTWELVE_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) EDRUMTWELVE_DATA [] = {0,
0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 4, 5, 5, 5, 5, 5, 5, 5, 5, 6, 6,
6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 5, 6, 7, 5, 5, 5, 5, 5, 6, 6, 5, 5, 5, 6, 6, 6, 6,
5, 4, 6, 5, 4, 4, 4, 5, 4, 4, 4, 4, 5, 6, 6, 6, 6, 5, 2, 3, 6, 3, 4, 7, 11, -4,
-3, 5, -5, -12, -4, 9, 7, 8, 12, 13, 13, 12, 10, 9, 6, 5, 5, 6, 1, -4, -8, -7,
0, 1, 0, 4, 5, 3, 4, 4, 5, 6, 3, -2, -4, -4, -3, -1, -3, -1, 1, 1, 2, 1, 1, 4,
3, 0, 0, 1, 2, 0, -2, 0, 2, 4, 5, 7, 5, 1, 3, 5, 2, 0, 2, 5, 3, 2, 2, 2, 3, 0,
1, -3, -5, -3, 1, 2, -1, -1, -3, 1, 1, 1, -1, -2, -5, -4, -3, -5, 1, 7, 12, 7,
3, 1, 4, 8, 7, 6, 1, 0, -3, -5, -5, -7, -4, -3, -4, 6, 11, 1, -1, -4, 1, 3, -4,
-3, -6, -11, -9, -20, -22, -9, 21, 32, 9, -10, 1, 31, 21, 4, -3, -17, -23, -11,
-3, -3, -16, -12, 8, 18, 18, 3, -10, -22, -17, -1, 8, -8, -22, -21, -16, -11,
-18, -20, 9, 37, 43, 55, 34, -5, -33, -30, -4, 11, 4, 4, 4, -14, -14, -23, -25,
-17, 4, 35, 32, 4, -7, -4, -11, -21, -4, 9, -3, -6, -16, -9, 4, 10, 10, 3, -6,
-11, -24, -16, -8, -3, 13, 11, 6, 17, 15, 13, 23, 11, -7, -28, -16, -34, -53,
-38, -3, 18, 14, 10, 14, 0, -21, 7, -3, -12, -16, -13, 5, 20, 23, 16, 7, -10,
-19, -13, -13, -11, -5, -5, -4, -8, 0, -3, -4, -2, 0, -3, -5, 7, 5, -1, -1, 9,
3, -1, 2, -4, 0, 1, 3, 7, 2, 4, 4, -16, -7, 2, -25, -9, 6, 9, 1, -27, -45, -49,
-34, -25, -8, 14, 32, 43, 45, 34, 17, -10, -37, -48, -28, 15, 41, 44, 8, -27,
-38, -35, -18, 2, 9, -7, -13, 2, 27, 38, 33, 10, -14, -29, -26, -6, -6, -19,
-23, -14, 0, 4, -9, -18, -17, 3, 12, -2, -14, -16, 0, 7, 6, 8, 4, -8, -4, -9,
-19, -6, 11, 6, 2, -6, 6, 0, -10, 9, -19, -23, -24, -19, -32, -37, -13, 4, 30,
44, 42, 46, 37, 9, 3, -8, -29, -33, -6, 19, 14, 9, 24, 8, -23, -39, -34, -38,
-44, -23, 0, 15, 1, -22, -19, 4, 21, 47, 45, 6, -32, -44, -3, 30, 28, 2, -25,
-19, -6, 9, 6, -26, -59, -67, -41, -25, -15, 6, 24, 52, 69, 69, 40, 7, -18, -34,
-44, -48, -13, 35, 48, 36, -13, -78, -80, -45, -5, 31, 40, 40, 28, 12, 0, -9,
-2, -9, -14, -22, -9, -4, -2, 3, 12, -2, -28, -31, -13, -5, -30, -5, -25, -6,
-15, -41, -24, 8, 61, 87, 81, 28, -8, -67, -70, -64, -79, -23, 45, 62, 57, 19,
-4, -25, -59, -47, 1, 29, 28, 30, 20, 37, 62, 39, 19, -7, -38, -39, -63, -65,
-74, -63, -5, 0, -40, -43, 27, 68, 43, 28, 5, 12, 41, 19, 3, -39, -45, 4, 50,
56, -10, -54, -29, 27, 2, -26, 2, 13, 10, -38, -62, -43, 16, 60, 41, 54, 33,
-17, -66, -47, -13, -46, -10, 20, 50, 65, 28, -15, -47, -52, -77, -50, -17, 4,
42, 24, -16, -47, -23, 55, 65, -14, -86, -25, 54, 39, 1, -11, 17, -3, -28, 8,
54, 45, -13, -48, -47, -32, -26, -19, 1, 37, 53, 25, 26, 38, 33, -19, -47, -26,
-21, -1, -31, -22, -13, -26, -10, 18, 24, 6, -9, -38, -12, 18, 18, -7, -22, -12,
-5, 10, 3, -10, -8, 10, 26, 9, -27, -36, -18, 8, 22, -13, -39, -28, 13, 42, 29,
13, 2, 12, 5, 1, 7, 3, -6, -10, -1, -6, -21, -23, 0, 5, 4, -3, -19, 0, -16, -23,
10, 0, -11, 2, -5, -20, -7, 23, 37, 27, 32, 22, -11, -23, -39, -70, -57, -22,
11, 56, 77, 42, 2, -25, -72, -61, -10, 51, 39, -24, -59, -14, 63, 40, 0, -1, 26,
24, -19, -16, 35, 21, -7, 1, 9, -24, -52, -48, -31, -13, -13, 0, 52, 70, 6, -40,
-39, -22, -24, -1, 23, 33, 37, 24, -13, -30, -44, -44, -34, 16, 44, 1, -20, -15,
-27, -39, -4, -4, 49, 49, 41, 59, 40, 19, 6, 1, -46, -97, -110, -55, -19, -20,
-29, -3, 31, 48, 51, 34, 8, 9, 51, 82, 74, 27, -25, -68, -59, -5, -3, -5, -57,
-49, 0, -7, 16, 5, -11, -15, 6, 42, 32, -1, -14, -33, -24, 4, 28, 42, 23, -31,
-79, -106, -99, -43, 55, 117, 111, 50, -37, -46, -5, 16, -2, -4, -20, -9, 32,
45, 39, 20, 24, 36, 30, 22, 8, -11, -24, -1, 32, -2, -63, -97, -95, -70, -55,
-35, 3, 8, 29, 50, 54, 21, 5, 1, -28, -3, 4, 6, -4, -2, 18, 15, 11, -29, -82,
-29, 78, 82, 22, 18, 68, 65, 2, -44, -83, -104, -12, 70, 38, -21, -41, -35, -14,
40, 42, 10, -21, -55, -77, -90, -48, 27, 96, 75, -1, -29, -23, -14, 9, 40, 33,
10, 7, -3, -32, -49, -30, -11, 14, 17, -23, -22, -11, 4, 27, 34, 20, 8, -22,
-40, -29, -18, 15, 44, 43, 27, 25, 23, 2, -35, -34, -11, 7, 28, 24, 17, 16, -24,
-51, -40, -33, -24, -11, 1, 12, 17, 15, 14, 28, 38, 31, 34, -16, -47, -27, -21,
13, 43, 30, 1, -35, -18, -6, -30, -44, -28, 24, 24, 19, 33, 36, -9, -30, -23,
-26, 8, 34, 12, -5, -5, -22, -21, -5, 13, 5, -17, -21, 26, 26, -30, -22, 26, 8,
-18, -2, 5, -14, -11, -6, -22, -5, 25, 46, 47, 54, 32, -8, -41, -24, -31, -32,
-19, 1, -14, 29, 69, -19, -30, -39, -9, -11, -13, -10, 21, 31, 50, 70, 23, 0,
-35, 1, 27, 27, -35, -34, -17, -36, -34, -11, 21, -12, -12, -4, 15, 2, -25, -26,
-28, 14, 55, 57, 19, 9, 51, 27, -24, -41, -45, -59, -48, 13, 59, 86, 45, 5, 1,
34, 21, -66, -112, -67, 33, 56, 49, -7, -37, -15, -29, -16, 4, 4, 38, 71, 26,
-15, -25, -25, 16, 44, -14, -77, -52, -8, 40, 71, 16, -21, 8, 43, 14, -38, -39,
-19, 18, 37, 15, -15, -15, 3, -7, -24, -3, 23, 33, 21, 7, 16, -26, -70, -50, 5,
29, 36, 38, 30, 10, -7, 13, 2, -16, -26, -22, -19, -21, -15, -11, 14, 15, 3, 7,
-19, -29, -18, -5, 19, 26, 13, 1, -12, 2, 26, 4, 31, -12, -27, -4, -25, -5, 21,
42, 33, -2, -36, -9, 42, 69, 59, 42, -2, -19, -58, -57, 6, 23, 33, 12, 9, 13,
-19, -11, 0, 4, 10, -25, -27, -2, 5, 17, 35, -2, -34, -41, -49, -27, -11, 38,
64, 21, 22, -3, -12, -4, -9, 2, -26, -34, -52, -27, 10, 30, 26, 7, 8, -15, -1,
30, 13, -24, -38, -57, -42, 35, 63, 46, 24, -18, -35, -20, 1, 2, 11, 13, -14,
-6, 18, 17, 21, 37, 37, 14, -35, -32, -24, -44, 34, 53, -11, -32, 4, 36, 2, -14,
-23, -25, -13, 3, -5, 4, 23, 19, 14, -1, -26, -35, -26, -17, -13, -23, -16, 7,
35, 27, 20, 15, -5, 1, -3, -3, 27, 16, 3, 7, 8, 13, -3, 12, -4, -28, -26, -12,
-6, 5, 28, 14, -3, -12, -22, -17, -18, -33, 1, 32, 17, -16, -12, 9, 32, 54, 35,
-1, -17, -16, -16, -14, -26, -3, 7, -8, -15, -26, -12, -2, 2, 11, 12, 0, -12,
-8, 14, 15, -9, -18, 0, 12, 7, 16, 25, 24, -9, -43, -17, -7, -18, 4, 29, 17, 11,
23, 6, 25, 23, -11, -24, -25, -14, -11, -5, -2, 5, 7, -1, 27, 33, 9, 16, 5, -2,
-18, -41, -29, -11, 9, 11, -5, 1, 24, 21, 4, -16, 7, 22, 0, -3, -6, -7, -32,
-23, -9, -11, 16, 30, 42, 35, 7, -16, -24, -24, -22, -10, -4, -19, -24, 6, 14,
-5, -20, -6, 6, 3, 20, 42, 31, 7, -4, 3, 13, -11, -15, -12, -17, -11, -2, -9,
-16, -15, 3, 36, -1, -30, -16, 9, 24, -8, -10, 18, 14, 0, 4, 23, 10, -18, -7,
16, 20, 11, -9, -32, -28, -11, 15, 39, 40, 24, -16, -35, -21, 1, 12, 5, -1, -4,
-4, -5, 5, 8, -4, -28, -12, 12, 19, 21, -5, 0, -7, 2, 9, -4, 1, 5, 6, 3, -4,
-15, -10, -10, 2, 6, 6, 34, 7, -34, -29, -13, 9, 17, 10, -13, -8, 14, 10, 9, 2,
-5, -15, -18, -12, 4, 12, -7, -38, -35, -9, 21, 15, 27, 39, -4, 9, 23, 10, 2,
-33, -50, -12, 14, 27, 24, 23, 15, -15, -9, 13, 23, 23, 14, -11, -21, -3, -2,
-16, -16, -12, 23, 29, -1, -25, -32, -13, 10, 19, 17, 18, -12, -42, -23, 10, 13,
9, 18, 29, 16, -8, -20, -11, 12, 4, -8, 2, 6, 10, 6, 11, 15, 22, 16, -19, -21,
-32, -28, -9, 4, 19, 0, -14, -3, 27, 33, 16, 2, -6, -16, -21, -3, 15, 14, -1,
-1, 9, 13, 4, 3, 7, -12, -20, -9, -8, 0, 1, 7, 29, 16, -14, -24, -21, -13, 9,
14, 13, -2, -18, -4, 3, 5, 15, 12, -3, 10, 9, 0, 19, 17, -7, -20, -16, -32, -43,
-18, 15, 32, 33, 36, 28, 11, 12, 13, -4, -15, -34, -33, -4, 9, 18, 21, -2, -22,
-13, -4, -10, -7, 0, -9, -7, -4, -6, 5, 22, 25, 7, 0, -19, -32, -12, 0, 16, 44,
38, 4, -26, -35, -22, -1, 12, 11, 17, 33, 34, 14, -20, -34, -13, 2, 2, 9, 2,
-12, -17, -17, -14, -8, 9, 22, 5, 2, 25, 11, -15, -19, -4, 6, 0, 1, -5, -6, -5,
-5, 4, -11, -23, -10, 12, 25, 29, 18, -25, -35, -25, -6, 7, 12, 26, 14, -2, -14,
-11, -2, 6, 15, 7, 0, 7, 21, 12, -3, -1, -4, -14, -8, -8, -2, 3, 11, 2, -17, -1,
7, 13, 3, -15, -1, 21, 18, 0, 2, 7, 10, 5, -16, -20, -7, -14, -14, -15, -10, 13,
15, 4, -14, -13, 5, 17, 13, 1, 1, 4, -13, -27, -18, -3, -1, -2, 12, 12, 4, 18,
19, -1, -5, 6, 17, 6, 2, -4, -15, -19, -13, 8, 16, 10, 9, -1, -7, 2, -1, -12,
-4, 12, 12, 14, 4, -2, -11, -13, -16, -5, 5, 3, 11, -2, 7, -11, -11, 6, -3, -2,
3, 9, 8, -1, -9, -13, -4, 6, -3, -4, -13, -10, 7, 27, 41, 24, -7, -27, -25, -15,
10, 20, 15, 9, -11, -21, -6, -3, 3, 19, 24, 27, 5, -11, -11, -13, -9, -13, -2,
-4, -7, 4, 12, 12, -4, -20, -34, -23, 7, 15, 10, -5, -20, -24, -21, -4, 5, 7,
18, 18, 15, 17, 7, -6, -12, 0, 26, 26, 16, -14, -28, -4, -1, 5, 14, 17, 9, -4,
-13, -15, 3, 13, 12, 5, -4, -9, -8, 16, 1, -26, -25, -11, 10, 6, 3, 7, 3, 11,
16, -4, -14, -13, -7, -11, -8, 10, 11, 7, 4, -3, -3, 3, 3, 2, -4, 5, 0, -5, 1,
-14, -15, 2, 10, 11, 4, 4, 8, 4, -3, -11, -4, -1, 17, 21, 3, -6, -11, -9, 1, 17,
18, 7, -18, -24, -16, 1, 13, 3, -8, -21, -23, -21, -5, 16, 15, 13, 13, 8, 10,
-1, -16, -25, -23, -5, 11, 18, 8, -1, 4, 0, -3, -4, -2, 1, 1, -2, -3, 6, 9, 11,
2, -7, -9, -6, 4, 2, 0, -1, -2, -7, -1, 6, 8, 5, 9, 14, 4, -14, -22, -14, -1, 9,
4, -3, -14, 1, 19, 26, 19, 2, -12, -25, -27, -1, 32, 13, 5, 10, 4, -10, -16,
-11, -9, -8, -7, 6, 9, 16, 3, -14, -13, -3, 6, 8, 6, 11, 12, 1, -6, -10, -15,
-10, 1, -3, -13, -23, -17, -9, 15, 33, 17, 7, -7, -14, -7, 12, 29, 19, -6, -11,
-10, -20, -12, 3, 8, 6, -3, 9, 8, -5, -7, -6, 1, 3, 0, 13, 13, -4, -12, -10, -4,
-3, -8, 1, 16, 8, 10, 12, 7, 1, -12, -14, -9, -7, -6, -7, -14, -16, -17, -8, 19,
24, 17, 14, 14, 7, -12, -11, -8, 2, 6, 4, 4, -1, -5, -11, -16, -19, -16, -7, 5,
14, 28, 29, 21, 4, -22, -33, -21, 3, 11, 11, 11, 6, 2, -1, -8, -15, -16, -16,
-1, 18, 23, 15, 2, -4, -10, -13, -5, 2, 7, 4, 2, 0, -8, 1, 6, -5, -2, 0, -5, -2,
-4, -12, -7, 9, 20, 23, 12, 1, -6, -15, -8, -2, -10, -13, -1, 9, 15, 18, 8, -8,
-18, -10, -6, -5, 0, 1, -2, -7, -2, 6, 12, 0, -5, -3, -2, 8, 9, 0, 5, 5, -8, -7,
-14, -17, -12, 0, 5, -1, -5, -12, -1, 7, 9, 19, 13, 2, -1, -5, -7, -9, -5, 11,
16, 2, -5, -1, 7, 7, 3, -5, -10, -15, -13, -4, 9, 11, 0, 0, 0, -4, -2, 9, 11, 9,
7, 3, -5, -3, -5, -11, -6, -2, 0, -2, -3, -7, -3, 8, 12, 9, 1, -12, -14, -5, 3,
9, 8, 4, -5, -1, 3, 0, 2, 2, 2, -6, -9, 4, 4, -2, 4, 10, 9, -1, -8, -16, -13,
-2, -5, -7, -1, 7, 6, 2, 4, 5, -9, -19, -14, 0, 0, -3, 6, 3, -4, -5, 1, 3, 0, 7,
11, 9, 7, 5, 5, 3, -3, -11, -11, -8, -7, -2, 0, -2, 7, 12, 15, 14, 4, -1, -6,
-5, -5, -8, -10, -10, -11, -3, 8, 9, -5, -15, -3, 8, 6, 6, 14, 11, -4, -18, -12,
0, 4, 3, 3, -1, -5, -1, -5, -3, -3, -4, 2, -4, -3, 7, 10, 7, 3, -4, -6, -2, -2,
0, 2, 6, 5, -3, -9, -12, -4, 8, 10, 4, -3, -13, -18, -7, 5, 1, 10, 18, 1, -9,
-3, -3, 0, 9, 3, 3, 8, 5, 3, -6, -9, -9, -15, -6, 5, 7, 5, 10, 11, -2, -11, -8,
-2, 0, -8, -8, -3, -6, -5, -3, 4, 3, -6, 1, 8, 8, 4, -3, -2, 0, 0, -4, -5, 3, 6,
4, 2, 6, 3, -3, -10, -13, -6, 1, 7, 8, 1, -7, -3, 3, -2, -13, -6, 0, -4, -6, -1,
4, 2, 0, -1, -1, -2, 1, 3, 3, 8, 9, 3, -14, -21, -8, 5, 10, 12, 13, 8, -1, -6,
-1, 5, 3, -1, -7, -5, -5, -3, 7, 10, 1, -7, -8, 0, 4, 1, 3, -4, -13, -8, 3, 10,
8, -1, -6, -8, -5, -1, -1, -1, 3, 4, -3, -3, -5, -1, 6, 2, -4, -4, 0, 2, 8, 3,
-2, -1, -9, -10, -9, -4, 9, 10, 0, -11, -15, -15, 2, 14, 7, 0, -6, -10, -12, -9,
0, 10, 13, 11, 4, -1, -3, -4, 6, 4, 2, 12, 13, 4, -4, -6, 1, -3, -9, -6, -4, -2,
-7, -13, -7, 1, -7, -4, 6, 6, 5, 5, 3, 2, -5, -12, -12, -9, -3, -1, 4, 9, 10,
10, 8, 5, 6, 1, -13, -19, -11, 4, 6, -3, -6, -2, 3, 2, -2, 0, 2, 0, -1, 5, 10,
3, -9, -12, -8, -6, -3, -2, 4, 5, 5, 3, -3, -7, -10, -8, -5, 6, 12, 7, 2, -8,
-12, -4, 4, 6, 5, 1, -6, -5, 3, 7, 0, -9, -8, 0, 7, 7, 4, 2, -1, -8, -8, 0, 1,
4, 9, 3, -5, -9, -7, -8, -7, -2, -1, -4, -1, 4, 7, 10, 1, -3, -2, 1, 5, 6, 1,
-9, -13, -10, -2, 5, 1, -6, -5, -3, 1, 3, 6, 8, 7, 3, -2, -7, -9, -9, -7, -4, 1,
8, 8, 2, 1, 2, -3, -7, -8, -7, 0, 7, 9, 4, -2, -12, -18, -11, -1, 6, 5, 8, 5, 0,
0, -1, -6, -6, -4, 3, 7, 2, -4, -11, -10, -7, -2, 2, 3, 5, 11, 13, 10, 1, -7,
-10, -3, 7, 5, 0, -1, -6, -7, -3, -3, 0, 3, 6, 3, -2, -5, -2, 4, 4, -1, -7, -8,
-3, 4, 0, -5, -4, -2, -4, -2, 2, 1, 1, 1, 3, 1, 1, 2, -2, -7, -10, -9, -7, 2,
11, 8, 1, -5, -10, -8, -1, 5, 5, 1, 3, 6, 5, -1, -5, -9, -8, -2, 2, 4, 1, -2,
-5, -4, -2, -2, 5, 7, 1, -3, -2, -3, 2, 4, -2, -3, -7, -8, -6, -3, -1, -2, -3,
3, 8, 4, 0, 0, 1, -2, -3, 0, 2, -1, 1, 3, 2, -2, -8, -8, -5, 3, 6, 7, 13, 9, 1,
-1, -6, -10, -10, -6, -4, 0, -1, -4, -3, 0, 3, 2, 1, 0, 0, -3, -6, -3, 0, 2, 1,
-1, -1, -6, -11, -7, -2, 5, 9, 1, -4, -5, -1, -2, -9, -5, 2, 5, 6, 4, 5, 3, -2,
-6, -7, -4, -3, -2, 3, 7, 5, 2, 2, 0, -2, -3, -2, 0, 0, 0, -4, -4, -2, 2, 7, 6,
1, 2, 1, 0, 1, 2, 2, -3, -7, -8, -7, -6, -5, -2, 1, 2, 4, -2, -7, -4, -2, -3, 1,
4, 4, 0, -7, -6, -3, -1, 6, 8, 6, 4, -4, -8, -3, 1, 1, -2, -2, 1, -1, -3, 0, 0,
-1, -1, -2, -3, -2, -4, -4, -4, -4, -1, 8, 10, 1, -6, -8, -4, -3, -4, -3, -3,
-2, -4, -3, -1, -2, -3, 1, 4, 7, 5, -2, -3, -2, 3, 5, 2, 2, -1, -3, -3, -1, 1,
4, 5, 0, -1, 3, 0, -10, -10, -3, 3, 6, 5, 4, -2, -12, -14, -9, -3, -1, 0, 0, -1,
-1, -4, -2, -1, -1, 1, 3, 6, 1, -6, -5, -4, -4, -3, 2, 7, 6, 2, -2, 0, 0, 0, 4,
2, 0, -2, -4, -1, 3, 2, -3, -4, -2, -4, -3, -1, 0, 0, 1, -2, -7, -8, -3, 2, 2,
1, 5, 4, 2, -2, -6, -5, -2, -1, -2, 0, 0, 4, 6, 2, -1, -2, -4, -8, -5, 1, 3, 4,
2, 3, 0, -8, -9, -2, 2, -2, 0, 2, 1, 2, -1, -3, 0, 0, -4, -3, -1, -4, -8, -6,
-1, 6, 7, 4, 2, 0, -1, -3, -3, -1, 2, 5, 6, 5, -1, -6, -4, -6, -4, -7, -7, -3,
-3, 0, 4, 5, -2, -4, 2, 6, 4, 1, 1, 0, -4, -5, -5, -5, -4, -3, -2, -1, 1, 4, 3,
1, 1, 2, 1, -1, 0, 1, 0, -4, -3, 2, 3, 3, 4, 3, 2, 2, 1, -2, -7, -8, -7, -4, 3,
4, 1, -2, -4, -4, -5, -4, -1, 1, 2, 2, 1, -1, -6, -8, -3, 2, 6, 3, -1, -4, -5,
-4, -2, 1, 0, -3, -4, -3, 1, 4, 3, 4, 3, 1, 0, -1, -4, -3, -1, -1, 0, -1, -4,
-4, 0, 2, 0, -2, -4, -4, 0, 3, 6, 5, 2, -2, -4, -4, -2, 0, -2, -3, -2, -1, 4, 6,
2, 0, 1, -1, -2, -4, -7, -7, -6, -5, 0, 1, 3, 0, -2, -1, -1, 0, 2, 1, -1, 0, 1,
0, -1, -3, -3, 0, 4, 5, 4, 1, -3, -5, -4, -5, -5, -1, 3, 5, 4, 1, -4, -4, -5,
-4, -3, -3, 0, 3, 2, -2, -3, -2, 2, 5, 1, -5, -9, -9, -1, 3, 2, 1, -1, -4, -4,
-1, 2, 1, 0, 1, 0, -2, -1, 2, 2, -1, -1, 0, -1, 0, 1, -2, -5, -4, -4, -3, -1,
-3, -3, 0, 1, 0, -2, -3, -2, 0, 2, 2, 1, 1, 1, 0, -2, -3, 0, -2, -1, 1, 3, 4, 3,
2, 1, -1, -4, -5, -1, 2, 2, 1, 0, -2, -2, 0, -1, -2, -2, -3, -4, -1, 2, 3, 0,
-2, -2, -2, -2, 0, 1, 1, 2, 2, 1, 0, -4, -8, -5, -2, -1, 1, 2, -2, -5, -4, -4,
-2, 3, 3, -2, -5, -1, 1, 1, 0, -1, -2, -3, -2, -1, 0, 1, 1, 0, 1, 0, 0, 1, -1,
-4, -3, -1, 1, 2, 2, 2, -2, -5, -4, -4, -4, -3, -1, 0, 2, 2, 0, -1, 1, 3, 2, 2,
1, -2, -3, -3, -2, -2, 0, 1, 2, 2, 0, -3, -2, 0, 1, -2, -2, 2, 0, -3, -4, -4, 1,
6, 7, 3, -2, -4, -3, -3, -2, -1, 0, 1, 0, -2, -2, -3, -3, -2, 0, 0, -1, -1, -1,
1, 1, -3, -3, -1, 0, -1, -2, -1, -3, -2, -1, 0, 1, 2, 1, -2, -3, 0, 1, 0, 0, 1,
0, -1, -1, -1, 0, -2, -3, -2, -1, -2, -2, -1, -1, 0, 1, 1, 0, 0, -1, -2, -3, -1,
0, -2, -2, -1, 0, 0, 0, 1, 2, 0, -3, -1, -1, -2, -3, -2, 0, 1, 0, 0, 1, 1, -2,
-2, -2, -2, 0, -1, -2, -1, 0, -1, 0, 0, -2, -2, 0, 0, 1, 2, 1, 0, -1, -4, -5,
-3, -2, 0, 1, 0, -1, -1, -3, -1, 2, 3, 4, 3, 0, -3, -4, -2, -1, -2, -4, -3, 0,
0, -2, -2, -1, -2, -3, -3, -2, -1, -2, 0, 1, 0, -1, 0, 0, 0, -1, -1, 1, 0, -2,
0, 2, 2, 1, 0, 0, -1, -2, -1, -1, -1, -2, -2, 0, 0, -1, -1, -1, -1, -2, -2, -2,
-2, -2, 0, 1, 0, 1, 1, -1, -3, -4, -4, -3, 0, 1, 0, -1, -1, 0, -1, -1, -2, -2,
-2, -1, 0, 0, -1, -1, -1, 0, 2, 3, 2, 0, -2, -2, -1, 0, -1, -4, -4, -1, 0, 2, 2,
1, 1, -1, -2, -3, -2, 0, 0, 0, 2, 1, -2, -3, -3, -2, 0, 2, 2, 0, -1, -1, -1, -1,
0, 0, -1, -1, -1, -1, -1, -3, -5, -3, -1, 0, -1, -1, 2, 2, 0, -2, -3, -1, -1,
-2, -2, -1, 0, 0, -2, -3, -3, -2, -1, 0, 1, 1, 1, 0, 0, 0, -1, -1, 0, -2, -3,
-1, -1, -1, -1, 1, 2, 2, 0, -4, -3, -2, -1, 1, 2, 2, -1, -4, -4, -1, 0, -1, -1,
-1, -1, 0, 1, 1, 0, -1, -1, -1, -1, 0, 0, -1, -2, -2, -2, 0, 2, 1, 1, 1, -1, -3,
-4, -5, -4, -3, 0, 3, 3, 1, -1, -3, -3, -3, -3, -3, -2, -1, -1, -2, -1, 0, 3, 2,
-1, -2, -2, -2, 0, 1, 2, 0, -2, -2, -1, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -2,
-2, 0, 1, 1, -1, -2, -1, 0, 1, 1, 0, 0, 0, -1, 0, 1, 1, -1, -1, -1, -3, -3, -1,
-1, -1, -1, 0, 1, 1, 1, -1, -2, -3, -3, -3, -2, 0, 1, 2, 2, 2, -1, -4, -3, -3,
-4, -3, -1, 2, 4, 4, 0, -2, -3, -4, -2, -1, -1, 0, 2, 2, 1, -1, -1, 0, -1, -2,
-2, -3, -3, -2, 0, 2, 2, 2, 0, -2, -3, -3, -2, -1, 0, 1, 0, 0, 0, 0, -1, -1, -1,
-1, 0, 0, -1, -2, -2, -1, -1, -1, -1, -1, 0, 0, -1, -2, -1, 0, 1, 1, 0, 0, -1,
-2, -2, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, -1, -2, -2, -1, -1, -1, 0, 0, -1,
-1, -1, -1, 0, -1, -1, 0, 0, -1, -1, 0, 1, 0, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, -1, -1, -2, -2, -1, 0, 1, 1, 1, 1, -1,
-2, -2, -1, 0, 0, 0, 0, -1, -1, 0, -1, -1, -1, -1, 0, 0, 0, -1, 0, 0, 0, -2, -2,
-2, -2, -1, -1, -1, 0, 1, 0, 0, 0, 0, -1, -2, -2, -2, -1, 0, 0, 1, 1, 0, 0, 1,
0, -2, -3, -2, -1, 0, -1, -2, -2, 0, 1, 1, 1, 0, 0, -1, -1, -1, -1, -2, -2, -2,
-2, -2, -2, -2, -1, 0, 0, 0, 0, -1, -1, -1, -2, -2, -1, 0, 0, -1, 0, 1, 2, 1,
-1, -2, -2, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, -2, -2, -2, -1, 0, 1, -1,
-1, 0, 1, 0, -1, -1, -3, -3, -2, 0, 0, 0, 1, 1, 0, -1, -1, -1, -2, -2, -1, 0, 0,
-1, -2, -2, -2, -1, 0, 0, 0, 0, 1, 1, 0, -2, -3, -3, -1, 0, 0, -1, -1, 0, 0, 1,
1, 1, 0, -1, -1, -1, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -2, -1, 0, 0, 0, -1,
-1, -1, -1, -1, -1, -1, -2, -2, -1, 0, 0, 1, 0, -1, -1, 0, -1, -2, -2, -1, -1,
-1, 0, 0, -1, -1, 0, 0, 0, -1, 0, 0, 0, 0, -1, -2, -1, -1, -1, -1, -1, -1, -1,
0, 0, 0, 0, 0, 1, 1, 0, -1, -2, -1, -2, -1, 1, 1, 0, 0, -1, -1, -2, -1, -1, -1,
-1, -1, 0, 0, -1, -1, 0, 1, 1, 0, -1, -1, -2, -2, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -2, -1, -1, -2, -3, -2, -2, 0, 0, 0, 0, 0, -1, -2, -1, 0, 1,
1, 1, 1, 0, -1, -2, -1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -2, -2, -1, -1, 0, 0, 0,
-1, -1, -2, -1, 0, 0, 0, 0, 0, 0, -2, -2, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0,
1, 0, -1, -1, -1, -2, -1, -1, -1, 0, 0, 0, -1, -2, -2, -1, 0, 0, 1, 1, 0, 0, -1,
-1, -1, -2, -1, 0, 0, 1, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, -1, -2, -2,
-2, 0, 1, 1, 0, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0,
-1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, -1, -1, -1, 0,
0, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -2, -2, -1, -1, -1, 0, 1, 0, -1, -1, -1, 0, 0, 0,
-1, -1, -1, 0, -1, 0, -1, -1, -1, -1, -1, 0, 0, -1, -1, 0, 0, 0, -1, -1, 0, -1,
-1, -1, -1, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, -1,
-1, -1, -1, -1, -1, 0, 0, -1, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, -1, -2, -2,
-1, -1, -1, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0, -1, -1, 0, 0, -1,
-1, -1, -1, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, -1,
-1, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 1, 0, 0, 0, -1, -1, -1, 0, 0,
0, 0, 0, 0, -1, -1, -2, -1, -1, 0, 0, 0, 0, -1, -1, -1, -1, -1, -2, -2, -1, 0,
-1, -1, -1, -1, -1, -1, 0, 0, 0, -1, -1, -1, -1, 0, 0, -1, -1, -1, -1, -1, -1,
0, 0, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 1, 0, -1, -1, -1, -1,
-1, -1, -1, -1, -1, 0, 0, 1, 1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, 0, 0, 0, -1, -1, -1, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0,
-1, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, -1, -1,
-1, -1, -1, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0,
-1, -1, -1, 0, 0, -1, -1, -1, 0, 0, 0, -1, -2, -1, -1, 0, 0, 0, 0, 0, -1, -1,
-1, -1, 0, 0, -1, -1, -1, 0, -1, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0,
-1, -1, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, -1, -1, -1,
0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 1, 0, -1, -1, -1, -1, -1,
-1, -1, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, -1, -1,
-1, -1, -1, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, -1, -1, 0, 0, 0, 0, -1, -1,
-1, -1, 0, -1, -1, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, -1, -1, -1, -1, 0, 0, 0,
0, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, -1,
-1, -1, -1, -1, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0,
0, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, -1,
-1, -1, -1, -1, -1, 0, 0, -1, -1, -1, 0, 0, 0, 0, -1, 0, -1, -1, -1, 0, 0, 0, 0,
-1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, 0, -1, -1, -1, 0, 0, 0,
0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, -1, -1,
0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, -1, -1, -1, -1,
-1, -1, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0,
0, 0, -1, -1, -1, -1, 0, 0, 0, 0, -1, -1, 0, 0, 0, -1, -1, -1, 0, -1, -1, -1,
-1, -1, -1, 0, 0, 0, -1, -1, 0, 0, -1, -1, -1, -1, -1, 0, 0, -1, -1, 0, -1, -1,
-1, -1, 0, -1, -1, -1, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0,
0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0,
0, 0, -1, -1, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, -1, -1, -1, -1,
-1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1,
0, 0, 0, 0, 0, -1, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, -1, -1,
-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, -1, -1,
-1, -1, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1,
0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0,
0, -1, -1, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0,
0, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1,
0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0,
-1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0,
0, 0, -1, -1, -1, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, -1, -1, -1,
-1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1,
-1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0,
-1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1,
-1, 0, 0, 0, -1, -1, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0,
-1, -1, -1, -1, 0, 0, 0, -1, -1, -1, 0, -1, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0,
0, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1,
-1, -1, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0,
0, 0, -1, -1, 0, 0, 0, -1, 0, -1, -1, 0, 0, 0, -1, -1, 0, 0, 0, -1, -1, -1, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0,
0, 0, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1,
-1, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0,
0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, -1, 0, 0, 0,
-1, -1, 0, 0, 0, -1, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1,
-1, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1,
-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0,
-1, -1, -1, -1, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, -1,
-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, -1, -1,
0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1,
-1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, 0,
0, -1, -1, -1, -1, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, -1, -1, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, -1, -1,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
-1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1,
-1, 0, 0, -1, -1, -1, -1, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0,
-1, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0,
0, 0, -1, 0, -1, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, };

#endif /* EDRUMTWELVE_H_ */