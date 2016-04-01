#ifndef SNAREEIGHT_H_
#define SNAREEIGHT_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define SNAREEIGHT_NUM_CELLS 2368
#define SNAREEIGHT_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) SNAREEIGHT_DATA [] = {-1,
-1, -1, -1, 0, 0, -2, 0, 0, -1, 0, 0, 0, -1, -1, 0, -1, 0, -1, 0, 0, 1, 1, 0, 0,
0, 1, 0, 0, -1, 1, 4, 32, 55, 61, 9, -50, -70, -27, 66, 106, 111, 71, -31, -104,
-121, -111, -110, -105, -68, -53, -22, 54, 87, 14, -91, -123, -96, -122, 35,
127, 117, 83, 50, 78, -2, -42, -67, -71, -102, -30, -19, -52, -66, -97, -106,
27, 127, 109, 98, -5, -81, -127, -103, -116, -51, 102, 126, 117, 115, 112, 105,
104, 94, 77, 94, 94, 96, 100, 97, 100, 99, 91, 12, -46, -47, -17, 17, 84, 84,
-50, -44, 50, 92, 5, -124, -123, -117, -116, -111, -111, -98, -37, -65, -113,
-103, -109, -101, -103, -98, -107, -90, -107, -43, 22, 11, -52, -120, -97, -104,
26, 127, 112, 90, 29, 5, -69, -81, 45, 100, 109, 119, 113, 117, 108, 60, 18, 21,
38, 96, 79, 25, 88, 88, 15, -22, -27, -31, -21, -16, -22, -15, 13, 91, 121, 68,
-32, -103, -102, -60, -31, -54, -100, -78, -31, -55, 11, 81, 58, -18, -39, 57,
83, 24, -37, -20, -21, 10, 99, 108, 82, 29, -23, -47, -16, -11, -86, -112, -93,
-92, -90, -105, -73, -29, -49, -72, -85, -83, -101, -97, -44, -32, -13, -2, -30,
-74, -49, 37, 44, -30, -26, 90, 119, 120, 113, 115, 117, 98, 119, 113, 80, 45,
59, 43, 52, 21, -96, -107, -41, 59, 103, 100, 47, -8, 37, 71, 60, 12, -89, -128,
-112, -99, -86, -63, -17, 29, 61, -18, -80, 23, 20, -45, -45, -58, -40, -74,
-61, -3, -13, -2, -37, -33, -30, -84, -68, -1, 74, 68, 60, 79, 103, 73, 49, 30,
-17, 37, 28, 14, 57, 110, 109, 109, 91, 10, -6, 2, 30, 41, 0, -43, -94, -112,
-98, -90, -45, 39, 118, 126, 104, 49, 0, 2, 52, 40, -52, -59, 29, 98, 80, 48,
79, 115, 82, 69, 7, -11, 40, 1, -13, -71, -86, -54, -71, -40, -51, -1, 29, -45,
-77, -86, -61, -46, -70, -21, 20, -61, -115, -82, -17, -65, -37, 56, 6, 27, 4,
-76, -26, -24, -100, -50, -54, -50, 0, -11, -30, -27, 20, 33, 57, 51, 44, 82,
70, 68, 55, -53, -106, -94, 15, 123, 122, 88, 49, 25, 23, 52, 62, 3, 16, 71, 0,
-23, 41, 64, 53, 86, -9, -60, 2, 29, -13, -81, -103, -106, -100, -117, -88, -80,
-5, 24, -57, -35, 17, 36, 55, 8, -39, -21, 17, -9, -21, 12, 13, 37, 61, 15, -30,
-28, -45, -62, 28, 71, 11, 52, 7, -51, -49, 4, 1, -57, -42, 6, 13, 14, 25, 76,
81, 12, -10, -78, -44, 17, 78, 63, 39, 54, 15, -7, 16, -45, -59, -18, 16, -18,
-44, 57, 54, 35, 11, -30, -46, 42, -6, -39, 27, 39, 25, -24, -13, -51, 0, -3,
-62, 23, -4, 2, 40, 29, 0, -47, -15, -43, -52, -8, -10, -27, 11, 7, -18, -60,
-39, -43, -93, 18, 73, 69, 93, 31, -41, -40, -58, -74, -40, -18, -90, -63, 48,
71, 72, 81, 61, -49, -62, 23, 57, 47, -3, -20, 22, 73, 34, 27, 52, 61, 45, -9,
15, -9, -3, -14, -8, -5, -11, 40, 0, -32, -32, 16, -6, 13, 42, 43, 64, 66, -12,
-15, 49, -35, -52, -49, -41, -76, -71, -26, 45, 82, -5, -43, -46, -17, 3, -62,
-89, -19, 49, 10, -23, 23, 40, 81, 52, 54, 67, -21, -48, -41, -54, -36, 8, 38,
12, 13, -19, -22, 41, 6, -58, -61, 45, 58, -16, -33, 5, 34, 9, -28, -40, -8, 20,
26, 5, -17, -20, -9, 44, -49, -92, -46, 5, 15, -22, 0, -45, 35, 107, 69, -39, 3,
70, 72, 47, -37, 2, 36, 27, 5, 39, -3, -81, -49, -20, -14, 19, 6, -2, -13, -20,
-19, -43, -38, 24, -11, -67, -12, 25, 33, 26, 28, 14, -2, -47, -44, -30, -25, 0,
32, 46, 46, 17, -45, -52, -18, -5, -13, -7, -23, -17, 8, -2, 3, -4, -53, 11, 13,
24, 40, -11, 22, 15, 27, 0, -37, -19, -23, -8, 19, 8, 57, 30, -46, -56, -7, 7,
-74, -12, 23, -23, -11, -30, 0, 15, -9, -26, -48, 4, -25, -25, -2, 4, 2, -58,
-52, -26, 2, -42, -52, 53, 29, -32, 3, 23, 60, 57, 9, 22, 38, -37, -33, -12, 26,
23, -40, -7, 50, 69, -43, -58, -61, -40, 6, -19, 11, 33, 15, -16, -26, -9, 50,
33, -2, 44, 40, -13, 5, 63, 23, -1, 9, 16, 13, -37, -66, -62, 0, 9, -69, -99,
-17, 25, 31, 10, -21, -36, -3, 12, 15, 41, 54, 58, 4, 22, 9, -6, -7, 23, 1, -9,
-3, 6, 45, -3, -8, 1, 4, -11, -47, -22, 17, 5, -2, 30, 38, 1, -2, -11, -36, -1,
18, -46, -11, 36, 29, -29, -45, 39, 42, 12, -35, -25, -9, 11, 36, 41, 37, -20,
-31, -11, 9, 58, 29, -17, 57, 73, 33, 15, -6, -13, -34, -31, -10, -17, -28, -39,
-41, -6, 9, -13, -34, 23, 38, -1, -17, -19, 12, -20, -40, 22, 37, -24, -35, 10,
31, 31, 3, -49, -6, 4, -35, -22, -26, 39, 12, -55, -19, 20, 2, -24, -7, 9, 65,
25, 9, 46, 31, 32, 6, 7, 30, 13, -15, -27, -3, 40, -18, -22, -6, -3, 23, -4, 11,
-32, -55, -31, -35, 19, 17, -24, -6, 4, 6, 6, -19, 1, 9, -1, 6, 5, 33, -7, -40,
-37, -23, -13, 4, 13, -2, -5, -9, 6, 21, 12, -12, -6, 4, 53, 49, -11, -25, 7,
-12, -29, -37, -39, 10, 15, -8, -31, -28, 5, 19, -20, -15, 24, 13, 4, 3, -23,
-29, -44, -22, 7, 38, 30, 31, 14, -36, -19, -10, 42, 9, -9, 6, -22, -33, -8, -4,
-17, -16, -4, 3, 20, 66, 32, -15, -6, 12, 25, 22, -20, 3, 15, -9, -12, 4, 21, 4,
-29, -19, 3, 6, 9, -34, -15, -7, -22, -13, -9, 7, -6, -38, -32, 7, -9, -28, 2,
6, 12, -11, -25, 3, -14, -23, -7, 22, 19, -2, -7, 3, 25, -2, 10, 25, 10, 11, -2,
-5, 17, 34, -13, 2, 42, 7, -26, -21, 8, 14, 8, 33, 0, -26, -12, -11, 13, 12, 7,
-4, -16, 2, 23, 3, 3, 8, -5, -50, -38, 21, 8, -5, -27, -4, 24, 6, -14, -19, -18,
-8, -8, -1, -3, -16, 7, -7, -11, 0, 0, -16, 2, 32, 32, 18, -11, -8, 11, 10, 14,
25, 11, 12, -1, 2, -6, 1, 2, -11, -2, 18, 27, -5, -9, -11, -5, 3, 13, 15, -2,
-18, 8, 19, -2, -3, 2, -23, -11, -4, -21, 0, 5, 2, -22, -1, -2, 9, 2, -5, 17,
-10, -3, -12, 0, 14, 9, -19, -18, 15, -8, -8, 22, 11, -1, -19, -7, 14, -8, 1,
-6, -16, 6, 14, -14, -14, -10, -15, -2, 11, 33, 25, -1, -22, 0, 7, -21, 1, 8,
10, 3, -5, 7, -7, -1, -16, -28, -2, 24, 18, -13, 3, 3, 11, 28, 0, -7, 8, 7, 23,
28, 5, 18, 16, 19, -8, -34, -9, 0, -9, -5, 12, -10, -3, -13, -5, 11, -15, -8,
-22, -5, -11, -8, 24, 4, -3, -4, 14, 1, -13, -15, -6, 0, -8, 4, -13, -2, -4, 7,
-15, -29, -18, 6, 18, -11, 4, -7, 5, 13, 20, 1, 4, 17, 7, 7, 30, 17, -20, 2, 6,
12, 4, 4, -12, 14, 21, -8, 1, 5, -18, -34, -3, 4, 3, 1, 14, 10, 2, 17, -21, -9,
8, -16, -8, 13, 16, -7, -17, -11, 2, -18, -5, -9, -6, 23, 5, -11, 5, 3, -17, 7,
19, 19, -1, -9, -1, 10, -7, -5, 8, 9, 0, -20, -4, 5, 11, -13, -10, -13, -13,
-12, -13, 2, 5, -10, -23, 3, 7, 17, 18, 5, -1, 2, 3, -7, -12, -8, -9, -2, 13, 5,
1, -10, -15, -5, 2, -6, -3, 11, 10, 7, -9, 5, 10, -6, 3, 5, -6, 16, 14, 1, 10,
-1, 0, 1, 9, 10, -4, -26, -10, 3, 1, -13, -19, -8, -11, 5, 2, -5, 8, 0, -2, 10,
-5, -1, 0, -1, 9, 10, 6, 1, 5, 11, -7, -9, -7, 5, 17, -1, 2, -1, 8, 1, -1, 3, 2,
-13, -9, 9, 0, -6, -6, 0, 6, 3, -7, 1, 3, 4, -9, -7, 9, -8, -18, -13, -9, 3, 1,
3, 10, 6, -10, -9, 7, 2, -9, -12, 2, -10, -5, 6, 8, -1, 0, 1, -6, -9, -9, 2, 7,
-3, -4, 8, 0, 10, 6, -3, -9, 2, 4, -2, 0, 3, 5, 6, 11, 12, 12, 5, 11, -4, 3, 1,
-5, -5, -11, -4, -10, 2, 3, -4, 0, 4, 0, -7, -14, -7, 2, -6, 3, -8, -10, 1, 0,
6, 1, -7, -8, 3, 1, 4, -2, -5, 2, 6, 3, -4, 5, 0, -6, -7, 2, 4, -5, -2, 0, 0, 4,
0, 0, 0, -1, -3, -3, -2, -5, -11, -2, 14, 8, 4, -5, -4, -7, -11, -1, 6, 12, 3,
0, 1, 7, 0, -3, 2, -3, 4, -4, -1, 8, 3, -6, -6, 0, -9, -3, 0, 11, 0, -9, -4, 2,
2, 3, 1, -13, 1, 6, 4, -2, 0, 7, 3, 0, 6, 4, -6, -5, 0, 1, -7, -5, 3, -4, -9,
-2, 1, 7, 2, -6, -4, 8, 12, -1, -1, -3, 0, 2, -1, 4, 4, 2, -7, -4, 3, 6, -1, 0,
4, -2, 5, 2, -4, -3, -3, -7, -2, -1, -2, -3, -5, -3, 2, 4, 0, -1, -4, 0, -4, -5,
2, 3, -3, -5, 1, 5, 6, 4, 2, 4, -2, -1, 3, 3, 7, -1, -1, 2, 4, 2, -1, -1, 0, 4,
-5, -8, 4, 2, -4, 0, 2, 3, -1, 0, 1, -3, -1, 1, 4, 3, -2, 1, 0, 2, -1, 0, -2,
-5, 1, -3, -2, -1, -2, -3, -7, -5, -3, -8, -5, -2, 1, 2, -1, 4, 1, -2, -1, -3,
3, 2, -3, -1, 2, 2, -1, -4, -1, 0, -6, -2, 3, -1, -3, 1, -2, -3, 1, 0, -2, -3,
2, 1, -4, -2, 2, 0, -1, 2, 3, 5, 4, 0, 0, 3, 2, 1, 0, -4, -3, -1, 1, 1, -1, -3,
-5, 3, 5, -6, -6, 0, 2, 0, -1, -3, 1, 1, -4, -2, -4, -3, -3, -4, -1, -2, 2, 2,
3, 2, 1, -2, -1, 4, 2, 1, 2, 5, 3, 2, 2, 0, -1, 1, -1, -2, 2, 0, -3, 0, -2, -2,
0, -1, 1, -3, -4, 0, 2, 2, 0, -3, -2, 5, 4, 0, 2, 3, 0, 1, 2, -4, -3, -1, -2,
-2, 0, -2, -1, 2, 0, -3, -4, -1, -3, 0, 1, -2, 1, 2, 1, -2, 0, 0, -2, 0, 1, -1,
-4, 0, -1, -2, -2, -3, -1, -1, -3, -4, -3, 0, 2, 1, 3, 2, 1, 3, 2, -1, 1, 0, -2,
0, 1, 1, -3, 2, 2, -2, 0, 1, 1, 0, 2, -1, 0, 1, 0, -1, -1, -1, -1, -2, -1, 0, 0,
-2, -3, -1, -1, -2, -3, -3, -1, -2, -3, -1, -1, -3, -4, -4, -3, -1, 0, 2, 2, 2,
0, 0, 1, 0, -1, -1, 0, 0, 2, 1, -1, -1, -1, -3, -3, -2, 0, 0, -1, 0, 0, 1, 1, 1,
3, 2, 1, 0, -1, 1, -1, -1, 0, 0, 0, 0, -1, 0, 0, -1, 0, 0, 0, -1, -1, -1, -1,
-1, 0, 0, 0, -2, -2, -2, 0, 1, 0, 1, 0, -1, -1, 0, 0, 0, -2, -2, -3, -2, -1, 0,
0, 0, 1, 0, 0, 1, 0, -2, -1, 0, 0, 0, -1, 0, 0, -1, 0, -1, 0, 0, -1, -1, 0, 0,
-2, -2, -1, -2, -1, 0, 1, 2, 2, 0, -1, -1, -1, 0, 0, 0, 0, -1, -1, -1, 0, 0, -2,
-2, 0, 0, 0, -1, 0, 0, -1, -1, -2, -2, -1, -1, -1, 0, 0, 1, 0, 0, -1, -2, -2,
-1, -1, -1, 0, 0, -1, -1, -1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1,
-1, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1,
-1, 0, 0, -1, -1, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, -1, 0, 0,
-1, 0, 0, -1, -1, -1, 0, 0, 0, -1, -1, -1, -1, -1, -2, -1, 0, -1, -1, -1, -1,
-1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, -1, -1, -1, -1, -1,
-1, 0, 0, 0, 0, -1, 0, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, -1, -1, -1, -1,
-1, -1, -1, -1, 0, -1, -1, -1, 0, -1, -1, -1, -1, 0, 0, 0, 0, -1, -1, -1, -1, 0,
0, -1, -1, -1, 0, -1, 0, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, -1, -1, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, -1, -1,
0, 0, -1, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 0, 0, 0, 0, 0,
-1, -1, -1, -1, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, -1, 0, 0, 0, 0, -1, -1, -1,
-1, 0, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1,
-1, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, -1, 0, };

#endif /* SNAREEIGHT_H_ */
