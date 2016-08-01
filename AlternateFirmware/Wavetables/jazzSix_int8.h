#ifndef JAZZSIX_H_
#define JAZZSIX_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define JAZZSIX_NUM_CELLS 3981
#define JAZZSIX_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) JAZZSIX_DATA [] = {4, 1,
-34, -27, -53, -3, -5, -18, -58, -126, -24, -28, -57, 2, -18, 52, 18, 20, 41,
-14, 2, -8, 41, 52, 47, -9, -64, -4, 46, 63, 67, 72, 106, 43, 48, 103, 34, -41,
-74, -34, -27, -50, -14, -57, -40, 5, 13, 39, 32, 74, 105, 46, -42, -30, 15,
-17, -82, -45, 19, 77, 61, 35, 60, 74, 70, 59, 76, 75, 31, -19, -18, -48, -75,
-97, -73, -27, -71, -91, -36, -26, -49, -46, -17, -3, -26, -35, -27, -31, -27,
-43, -55, -44, -30, -45, -32, -7, -20, 15, 19, 30, 41, 2, -27, -22, -25, -13,
10, -3, 10, 10, -17, -18, -12, -12, -43, -34, 18, 13, -1, -10, -30, -30, -5, 14,
37, 99, 117, 87, 94, 105, 69, 37, 49, 29, -12, -3, 14, -13, -34, 12, 45, 50, 45,
-5, -2, 18, 59, 50, -4, 13, 11, 18, 30, -7, -18, -11, -31, -14, -11, 5, -34,
-69, -30, -31, -37, -35, -23, -13, -41, -40, 5, 29, 8, -45, -44, -20, -63, -95,
-65, -38, -20, -29, -44, -36, -20, -52, -69, -52, -7, 29, 8, 16, 48, 60, 51, 42,
18, -3, 7, -2, -2, -2, -14, -19, -27, 20, 5, -7, -1, 14, 72, 53, 41, 40, 26, 55,
80, 54, 46, 53, 31, -1, -77, -93, -81, -72, 4, 29, 14, -1, -17, -4, 45, 60, 41,
52, 73, 59, 12, -34, -35, -32, -39, -37, -43, -11, -5, -26, -5, 15, 23, -9, -19,
6, -14, 2, 14, 10, 2, 6, 16, -26, -18, 9, 20, -15, -78, -92, -71, -81, -76, -11,
49, 66, 54, 48, 44, 42, 35, 24, 13, 0, -51, -66, -18, 12, -3, 7, 23, 25, 22, 29,
30, -12, -14, -33, -26, -25, -41, -41, -28, 7, 40, 54, 43, 30, 32, 42, 53, 76,
71, 11, -70, -101, -104, -93, -84, -75, -70, -43, -3, 47, 102, 94, 42, 7, -8,
-11, 1, 0, 16, 19, 14, -6, -27, -44, -58, -52, -53, -35, -5, 12, 33, 57, 35, 19,
20, 6, 1, 11, 9, -10, -12, -22, -26, -35, -25, 19, 20, 28, 34, 15, 22, 40, 54,
40, 2, 5, 5, -13, -26, -19, -5, -15, -25, 6, 38, 43, 44, 17, -2, -42, -52, -39,
-38, -23, -36, -27, -1, 18, 40, 20, -9, -9, -29, -33, -2, -1, -34, -38, -4, 34,
32, 5, -17, -24, 6, 42, 49, 38, 24, 29, 34, 7, -17, -24, -20, -22, -26, -11, 14,
33, 39, 28, 16, 4, -10, -13, -3, -6, -35, -47, -43, -24, -7, -8, 11, 38, 38, 26,
28, 17, -5, -33, -42, -28, -33, -47, -56, -44, -5, 3, -2, 8, 22, 36, 40, 36, 28,
17, -11, -35, -29, -5, 14, 24, 27, 42, 52, 49, 30, 7, -6, -24, -32, -27, -16,
-9, 5, 23, 26, 8, 2, 5, 8, -5, -23, -23, -19, -10, -9, -20, -22, -15, -7, -14,
-20, -5, -4, -9, -7, -15, -21, -13, -10, -5, 5, 19, 35, 40, 36, 18, 2, 3, 2, -7,
-9, -6, -3, -4, -9, -3, 9, 18, 11, 5, 9, 15, 19, 14, 0, -9, 3, 11, 6, -2, -10,
-14, -14, -22, -29, -27, -24, -20, -1, 10, 5, 5, 13, 8, -13, -24, -29, -30, -25,
-14, 0, 16, 23, 27, 26, 13, -4, -12, -4, 3, 4, 5, 8, 9, 10, 10, 7, 4, 3, 2, -2,
-6, -7, -1, 8, 14, 5, -11, -11, -7, -10, -11, 3, 18, 11, 0, -2, -1, -5, 0, 7, 7,
0, -6, -2, 3, 3, -6, -24, -33, -29, -23, -13, -8, -2, 5, 10, 11, 14, 16, 16, 5,
-12, -18, -13, -11, -8, -4, 4, 9, 11, 12, 7, -1, -10, -10, -8, -2, -3, -2, 7,
19, 23, 14, 7, -3, -6, -2, 7, 12, 8, 1, -9, -19, -25, -25, -16, 0, 12, 15, 9, 4,
5, 10, 6, -5, -14, -18, -17, -13, -3, -6, -10, -14, -12, -7, -3, 14, 27, 29, 22,
21, 17, 7, 1, -8, -23, -33, -33, -19, 0, 11, 20, 25, 24, 20, 13, 10, 13, 11, 8,
0, -18, -25, -23, -21, -16, -5, 10, 22, 23, 10, -6, -16, -25, -29, -22, -6, 3,
5, 3, 4, 6, -3, -12, -16, -9, 0, 6, 2, -8, -12, -14, -8, 6, 21, 26, 26, 26, 21,
15, 8, -4, -15, -14, -11, -6, 1, 3, 2, -3, -3, 5, 15, 14, 4, -8, -18, -19, -17,
-19, -20, -19, -16, -8, -1, 0, 0, 1, 6, 14, 18, 15, 7, -3, -11, -18, -23, -19,
-10, -1, 1, -2, -1, 5, 15, 25, 29, 31, 30, 24, 12, -2, -11, -12, -2, 4, 5, 1,
-5, -4, 3, 10, 7, 3, 4, 4, -6, -17, -20, -14, -5, 4, 9, 7, 1, -8, -21, -28, -23,
-12, -2, -1, -8, -15, -17, -5, 12, 24, 26, 22, 17, 8, -2, -12, -20, -19, -18,
-15, -13, -7, 2, 3, 6, 12, 22, 29, 25, 15, 3, -9, -17, -20, -22, -23, -16, -7,
0, 3, 4, 8, 15, 24, 23, 15, 4, -3, -5, -11, -18, -22, -20, -12, -1, 6, 12, 16,
18, 15, 9, 1, -4, -5, -7, -7, -7, -4, -2, 0, 2, 4, 9, 10, 7, 2, -3, -5, -5, -5,
-7, -8, -5, -1, 0, -2, -5, -5, 1, 12, 17, 12, 2, -5, -7, -9, -11, -7, -1, 2, 4,
5, 6, 8, 13, 16, 13, 6, -2, -7, -8, -10, -16, -20, -14, -2, 9, 12, 7, 1, -3, -6,
-6, -6, -8, -11, -13, -14, -11, -5, 1, 3, 4, 7, 10, 12, 10, 3, -5, -10, -11, -6,
-2, 0, 0, -2, 0, 6, 12, 13, 6, 2, 2, 4, 4, 1, -5, -9, -9, -8, -4, 1, 3, 1, -1,
-3, -4, -4, -4, -7, -14, -18, -16, -11, -5, -1, 2, 6, 9, 10, 7, 3, -1, -4, -5,
-6, -4, -2, 1, 4, 9, 15, 18, 17, 16, 16, 15, 12, 6, -2, -10, -14, -13, -6, 6,
14, 14, 9, 5, 2, 0, -2, -4, -6, -9, -13, -13, -13, -10, -6, -2, -2, -5, -9, -12,
-14, -15, -12, -8, -4, -2, -3, -5, -2, 3, 8, 12, 9, 2, -3, -6, -8, -9, -6, 0, 6,
8, 7, 6, 6, 7, 6, 5, 4, 6, 8, 8, 6, 0, -4, -7, -9, -12, -13, -10, -3, 7, 12, 12,
6, 1, -1, 0, -1, -4, -8, -12, -13, -13, -12, -9, -3, 2, 8, 14, 18, 19, 17, 12,
4, -3, -7, -10, -13, -13, -11, -6, 2, 9, 13, 14, 14, 11, 6, -1, -8, -12, -12,
-10, -7, 0, 5, 6, 4, 1, -2, -3, -3, -4, -6, -9, -11, -11, -6, 1, 7, 8, 5, 2, -1,
-4, -8, -11, -13, -10, -7, -5, -2, 0, 2, 5, 9, 13, 13, 10, 3, -4, -8, -9, -9,
-7, -3, 0, 2, 2, 3, 4, 3, 3, 3, 3, 0, -3, -6, -5, -3, -1, 2, 4, 5, 3, 0, -2, -3,
-2, -2, 0, 3, 6, 6, 4, 1, 0, -1, -3, -3, -3, -4, -4, -4, -1, 3, 5, 6, 4, 0, -6,
-9, -7, -3, -1, 0, 1, 3, 5, 5, 3, -1, -3, -4, -5, -4, -1, 2, 4, 4, 3, 4, 4, 4,
3, 1, -3, -6, -9, -9, -7, -4, -1, 4, 8, 10, 9, 5, -1, -5, -7, -5, -4, -3, -4,
-6, -9, -10, -9, -7, -4, 0, 4, 5, 3, 1, -3, -5, -6, -6, -5, -4, -3, -3, -2, 1,
3, 3, 3, 1, 0, -1, -1, 1, 5, 9, 13, 13, 11, 8, 6, 4, 3, 1, -1, -3, -5, -6, -7,
-7, -5, -2, 1, 3, 5, 6, 7, 7, 6, 4, 1, -2, -5, -7, -9, -10, -10, -9, -7, -4, 1,
4, 5, 5, 5, 4, 2, -2, -6, -9, -9, -7, -3, 0, 2, 3, 3, 2, 0, 0, 3, 5, 7, 5, 2,
-1, -2, -3, -3, -2, -1, 0, 0, -1, -4, -7, -8, -8, -7, -5, -5, -4, -4, -2, 2, 6,
6, 3, -1, -4, -6, -9, -12, -13, -11, -5, 1, 6, 9, 9, 9, 8, 6, 3, -1, -4, -5, -6,
-5, -4, -2, -1, 1, 4, 6, 8, 8, 8, 8, 8, 7, 4, 0, -4, -6, -5, -3, -1, -1, -1, 0,
0, 0, 0, 0, 0, -1, -2, -4, -5, -5, -3, -1, 0, 0, -2, -3, -3, -1, 2, 3, 3, 2, 1,
0, 0, 0, 0, -1, -2, -3, -3, -2, 0, 2, 3, 2, 1, 0, -1, -2, -2, -2, 0, 2, 5, 6, 5,
3, 0, -4, -7, -8, -8, -7, -7, -5, -4, -2, 0, 1, 3, 5, 6, 5, 2, -4, -9, -13, -14,
-11, -7, -3, 0, 3, 5, 7, 7, 6, 4, 1, 0, -2, -3, -4, -4, -2, -1, 0, 0, 1, 1, 2,
3, 4, 5, 4, 2, 1, -1, -2, -2, -1, 1, 3, 3, 3, 1, -1, -2, -2, -2, -1, 1, 3, 4, 4,
3, 1, 0, -1, -2, -4, -5, -4, -3, -1, -1, -1, -2, -3, -3, -2, -1, -1, -1, -2, -1,
-1, 0, 0, -1, -2, -4, -5, -6, -5, -4, -2, 1, 3, 3, 2, 1, -1, -2, -2, -1, -1, 0,
-1, -1, -1, -1, -1, -1, -1, -1, -2, -2, -1, -1, 0, 1, 1, 1, 1, 1, 2, 2, 2, 2, 0,
-2, -4, -6, -6, -4, -2, 0, 1, 2, 2, 2, 2, 2, 1, 0, -1, -2, -2, -2, -2, -1, 0, 2,
4, 6, 8, 8, 7, 5, 2, 0, 0, 0, 0, 1, 0, -1, -3, -3, -2, -1, 0, 1, 1, 0, -1, -2,
-3, -3, -3, -4, -4, -5, -5, -5, -4, -3, -1, -1, -1, -2, -3, -4, -4, -3, -2, -2,
-1, 0, 2, 4, 5, 4, 3, 1, -1, -3, -3, -3, -2, 0, 1, 3, 4, 4, 4, 3, 3, 3, 3, 2,
-1, -3, -6, -8, -9, -8, -6, -3, 1, 4, 4, 4, 2, -1, -2, -3, -4, -5, -6, -7, -7,
-5, -2, 2, 5, 6, 7, 7, 6, 5, 4, 3, 2, 1, -1, -3, -4, -3, -2, -1, 2, 4, 6, 6, 6,
5, 5, 4, 2, -1, -3, -5, -6, -6, -5, -4, -4, -4, -4, -4, -2, 0, 1, 1, 1, 0, -1,
-2, -4, -5, -6, -6, -5, -4, -3, -3, -4, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5, 4, 3,
0, -1, -2, -2, -2, -3, -3, -3, -2, -1, 0, 1, 3, 3, 3, 2, 2, 1, -1, -3, -5, -6,
-7, -5, -4, -1, 1, 3, 5, 5, 4, 3, 1, 0, 0, 0, 0, 1, 1, 0, 0, -1, -1, -2, -1, -1,
0, 1, 1, 0, -1, -1, -1, 0, 1, 2, 2, 2, 2, 1, 0, -1, -1, -2, -3, -3, -2, -1, 0,
1, 2, 2, 1, 1, -1, -2, -3, -3, -2, -1, 0, 0, 0, 0, 0, 0, 0, 1, 2, 3, 2, 1, -2,
-4, -5, -4, -3, -2, -3, -4, -5, -5, -4, -3, -2, -1, 0, 1, 1, 0, -1, -2, -3, -4,
-3, -2, -1, 1, 2, 3, 3, 3, 2, 1, 0, -1, -1, -1, -1, -1, -1, 0, 1, 2, 3, 2, 1,
-1, -2, -3, -3, -2, -1, 0, 0, 0, 0, 1, 1, 2, 1, 0, -1, -3, -3, -4, -4, -3, -2,
0, 2, 3, 3, 2, 1, 0, -1, -2, -2, -1, 0, 1, 2, 2, 3, 4, 4, 4, 3, 2, 1, 0, -1, -1,
0, 0, 0, -1, -2, -3, -4, -5, -5, -5, -5, -5, -4, -3, -2, -2, -1, 0, 0, 0, 0, -2,
-4, -5, -6, -6, -5, -3, -2, -1, 0, 0, 1, 1, 2, 4, 5, 6, 5, 4, 2, 1, 0, 0, -1,
-1, -1, -1, -1, 0, 1, 3, 5, 6, 6, 6, 4, 1, -2, -5, -6, -6, -6, -5, -3, -1, 0, 1,
2, 3, 3, 2, 1, -1, -4, -5, -5, -5, -3, -1, 0, 2, 3, 4, 4, 3, 2, 1, 0, 0, -1, -1,
-1, 0, 1, 2, 2, 2, 0, -2, -4, -5, -5, -4, -3, -1, 1, 2, 2, 1, 0, -1, -2, -2, -2,
-2, -3, -3, -3, -4, -5, -5, -4, -4, -3, -2, 0, 1, 2, 3, 3, 2, 1, 1, 0, -1, -2,
-2, -3, -3, -2, -1, 1, 2, 3, 3, 3, 3, 2, 2, 1, -1, -2, -4, -5, -5, -3, -1, 1, 2,
3, 4, 4, 3, 2, 0, -2, -4, -5, -5, -5, -4, -2, 0, 3, 4, 5, 5, 4, 2, 0, -2, -3,
-3, -2, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, -1, -1,
-2, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, 0, 0, 1, 2, 2, 2, 1, -1, -3, -4, -4,
-4, -3, -2, -2, -1, 0, 0, -1, -1, -2, -2, -2, -2, -1, -1, -1, -1, 0, 0, 0, 0,
-1, -1, -1, -1, 0, 1, 2, 2, 2, 2, 1, 0, 0, 0, 0, 1, 1, 2, 2, 2, 2, 2, 2, 1, 1,
1, 1, 2, 2, 2, 1, 1, 0, -1, -1, -2, -2, -3, -3, -3, -3, -3, -2, -2, -1, -1, -1,
-1, -1, 0, -1, -2, -3, -4, -5, -5, -4, -3, -1, 0, 0, 0, 1, 1, 2, 2, 3, 2, 1, 0,
-1, -2, -2, -1, -1, -1, -1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, -1, -2, -3, -4, -5,
-5, -5, -4, -3, -2, -1, -1, -1, -1, -1, -1, 0, 0, 0, 1, 1, 1, 0, -1, -1, -1, -1,
0, 1, 2, 3, 3, 3, 3, 3, 2, 1, 0, -1, -1, -2, -2, -2, -1, 0, 1, 1, 1, 1, 0, -1,
-2, -2, -2, -2, -1, -1, -1, -1, -2, -2, -2, -2, -1, 1, 1, 1, 1, 0, -1, -2, -2,
-2, -2, -1, -1, 0, 0, -1, -1, 0, 0, 1, 1, 2, 2, 2, 2, 2, 1, 1, 0, -2, -3, -4,
-5, -5, -4, -3, -2, 0, 1, 1, 1, 1, 0, -1, -2, -2, -2, -2, -2, -2, -1, -1, 0, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, -1, -1, -1, -1, -1, 0, 0, 1, 1, 2, 2, 2, 2, 1,
0, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -2, -2, -2, -1, -1, -1, -1, -1, -2, -2, -2, -2, -2, -1, 0, 1, 2, 1, 1, -1,
-2, -4, -4, -5, -4, -4, -3, -2, -1, 0, 1, 1, 1, 1, 1, 0, 0, -1, -1, -2, -2, -2,
-2, -1, -1, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, 0, 1, 1, 0,
0, -1, -1, -2, -2, -2, -2, -2, -1, -1, 0, 1, 1, 2, 2, 1, 1, 0, -1, -1, -1, -1,
-1, 0, 1, 1, 2, 2, 2, 2, 2, 2, 1, 1, 0, -1, -1, -1, -2, -1, -1, 0, 1, 1, 0, 0,
-1, -2, -3, -4, -4, -4, -3, -3, -2, -2, -2, -2, -2, -2, -1, -1, 0, 1, 1, 0, 0,
-1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, -1, -1,
-1, -1, 0, 0, 1, 1, 1, 0, 0, -1, -1, -1, -2, -2, -2, -2, -2, -2, -1, -1, -1, 0,
0, 1, 1, 1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 2, 3, 2, 2, 1, 0,
-1, -3, -3, -4, -4, -3, -2, -1, -1, 0, 0, 0, 0, -1, -1, -2, -2, -3, -3, -2, -2,
-3, -3, -3, -3, -3, -2, -2, -1, -1, -1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0,
-1, -1, -1, -1, -1, 0, 1, 1, 1, 1, 1, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, 1, 1,
1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -2, -2, -2, -2, -1, 0, 1, 2, 2, 2, 1,
1, 0, -1, -2, -2, -3, -3, -2, -1, -1, 0, 0, 1, 0, 0, 0, -1, -1, -2, -2, -2, -2,
-1, 0, 0, 1, 1, 1, 1, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0,
-1, -1, -1, -1, -1, -1, -1, -1, 0, 0, -1, -1, -1, -1, -1, -1, -1, 0, 0, 1, 1, 1,
0, 0, -1, -2, -2, -2, -1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, -1, -1, -1, -1, -2, -2, -2, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, -1, -1, -2, -2, -2, -2,
-2, -2, -1, -1, 0, 0, 0, -1, -1, -1, -2, -2, -3, -3, -3, -3, -3, -2, -2, -1, -1,
-1, -1, -1, -1, -1, 0, 0, 1, 2, 2, 2, 2, 1, 1, 0, 0, 0, 0, 1, 2, 2, 2, 3, 2, 2,
1, 1, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 1, 0, 0, 0, -1, -1,
-2, -2, -2, -2, -2, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1,
-1, -1, -1, -1, -1, 0, 0, 1, 1, 1, 1, 0, -1, -1, -2, -2, -2, -2, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, -1,
-1, -1, -2, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, 0, 0, 1, 1, 1, 0, -1, -1, -2, -2, -2, -1, -1, -1, 0, 0, 0, -1,
-1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, -1, -1, -1, -2, -2, -1,
-1, -1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -2, -2, -2, -2, -1, -1, 0, 0, 1, 1, 1, 0,
0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0,
0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -2, -2, -2, -2, -2, -1, -1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1,
-1, -1, -1, -1, 0, 0, 1, 1, 1, 1, 1, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1,
-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1,
-1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, -1, -1,
-1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1,
-1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, -1,
-1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0,
0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0,
-1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1,
0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, 0, 0, 0, 0,
0, 0, 0, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, -1, 0,
0, -1, 0, };

#endif /* JAZZSIX_H_ */