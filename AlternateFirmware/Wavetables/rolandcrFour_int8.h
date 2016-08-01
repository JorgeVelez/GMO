#ifndef ROLANDCRFOUR_H_
#define ROLANDCRFOUR_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define ROLANDCRFOUR_NUM_CELLS 876
#define ROLANDCRFOUR_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) ROLANDCRFOUR_DATA [] =
{-3, -16, -31, -43, -48, -46, -37, -22, -3, 19, 43, 65, 84, 100, 110, 114, 112,
103, 88, 68, 44, 17, -10, -37, -63, -85, -103, -115, -121, -120, -113, -100,
-82, -60, -36, -10, 16, 40, 62, 78, 90, 97, 97, 91, 80, 64, 43, 20, -4, -28,
-51, -71, -87, -99, -104, -105, -99, -88, -73, -53, -31, -8, 15, 37, 57, 73, 84,
91, 92, 87, 77, 63, 45, 25, 3, -19, -40, -59, -74, -85, -92, -93, -89, -80, -67,
-50, -30, -9, 12, 32, 50, 65, 76, 83, 85, 81, 74, 61, 46, 28, 8, -12, -31, -48,
-63, -74, -81, -82, -80, -72, -61, -46, -29, -11, 8, 27, 44, 57, 68, 75, 77, 74,
68, 57, 44, 28, 10, -8, -26, -42, -56, -66, -73, -75, -73, -67, -58, -45, -30,
-13, 4, 21, 36, 49, 59, 66, 69, 67, 62, 53, 41, 27, 11, -5, -21, -36, -49, -59,
-65, -68, -67, -62, -54, -43, -30, -15, 1, 16, 31, 43, 53, 59, 62, 62, 58, 50,
40, 28, 14, -1, -15, -29, -41, -51, -57, -60, -60, -56, -49, -40, -28, -15, -1,
13, 26, 37, 46, 53, 56, 56, 53, 47, 38, 27, 14, 1, -12, -25, -36, -45, -51, -54,
-55, -52, -46, -38, -28, -16, -3, 9, 21, 32, 40, 47, 50, 51, 48, 43, 36, 26, 15,
3, -9, -20, -30, -39, -45, -48, -49, -47, -43, -36, -27, -16, -5, 7, 17, 28, 36,
42, 46, 47, 45, 41, 35, 26, 17, 6, -4, -15, -25, -33, -38, -42, -43, -42, -39,
-33, -25, -16, -6, 4, 14, 23, 31, 37, 40, 42, 41, 38, 32, 25, 17, 7, -3, -12,
-21, -28, -34, -38, -40, -39, -36, -31, -25, -17, -8, 1, 10, 19, 26, 31, 35, 37,
36, 34, 30, 24, 17, 8, 0, -9, -17, -24, -30, -34, -35, -35, -34, -29, -24, -17,
-9, -1, 7, 15, 21, 27, 31, 33, 33, 31, 28, 23, 17, 10, 2, -5, -13, -19, -25,
-28, -31, -31, -30, -27, -22, -16, -10, -3, 4, 11, 18, 23, 26, 29, 30, 28, 26,
22, 16, 10, 4, -3, -10, -16, -21, -25, -27, -28, -28, -25, -22, -17, -11, -5, 2,
8, 13, 18, 22, 25, 26, 25, 24, 20, 16, 11, 5, -1, -7, -13, -18, -21, -24, -25,
-25, -23, -21, -17, -12, -7, -1, 5, 10, 15, 19, 21, 23, 23, 22, 19, 16, 12, 7,
2, -4, -9, -13, -17, -20, -21, -21, -21, -19, -16, -11, -7, -2, 3, 8, 12, 15,
18, 20, 20, 20, 18, 15, 11, 7, 3, -2, -7, -11, -14, -17, -19, -19, -19, -18,
-15, -12, -8, -3, 1, 5, 9, 12, 15, 17, 18, 17, 16, 14, 11, 8, 4, 0, -4, -8, -11,
-14, -16, -17, -17, -16, -14, -12, -8, -5, -1, 3, 7, 10, 13, 15, 15, 16, 15, 14,
11, 9, 5, 1, -2, -5, -8, -11, -13, -14, -14, -14, -13, -11, -8, -5, -2, 2, 5, 8,
10, 12, 13, 14, 14, 12, 11, 8, 5, 2, -1, -4, -7, -10, -12, -13, -13, -13, -12,
-11, -9, -6, -3, 0, 3, 6, 8, 10, 11, 12, 12, 11, 10, 8, 6, 3, 0, -3, -5, -7, -9,
-11, -11, -12, -11, -10, -8, -6, -4, -1, 1, 4, 6, 8, 10, 10, 11, 10, 9, 8, 6, 4,
1, -1, -3, -5, -7, -9, -10, -10, -10, -9, -8, -6, -4, -2, 0, 3, 5, 6, 8, 9, 9,
9, 8, 7, 6, 3, 1, -1, -3, -5, -6, -8, -9, -9, -10, -9, -8, -7, -5, -3, -1, 1, 3,
5, 6, 7, 8, 8, 7, 6, 5, 4, 2, 0, -2, -3, -5, -6, -7, -8, -8, -8, -7, -6, -5, -3,
-1, 0, 2, 4, 5, 6, 7, 7, 7, 6, 5, 4, 2, 1, -1, -2, -4, -5, -6, -7, -7, -7, -6,
-5, -5, -3, -2, 0, 1, 3, 4, 5, 6, 6, 6, 5, 5, 4, 3, 1, 0, -2, -3, -4, -5, -6,
-6, -6, -6, -5, -5, -4, -2, -1, 0, 2, 3, 4, 5, 5, 5, 5, 5, 4, 3, 2, 0, -1, -2,
-3, -4, -5, -5, -6, -5, -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 4, 5, 4, 4, 4, 3, 2,
1, 0, -1, -2, -3, -4, -4, -5, -5, -5, -4, -3, -2, -2, 0, 1, 2, 2, 3, 3, 4, 4, 4,
3, 3, 2, 1, 0, -1, -2, -3, -4, -4, -4, -4, -4, -4, -3, -3, -2, -1, 0, 1, 2, 2,
3, 3, 3, 3, 3, 2, 2, 1, 0, 0, -1, -2, -3, -3, -4, -4, -4, -4, -3, -3, -2, -1, 0,
0, 1, 2, 2, 3, 3, 3, 3, 2, 2, 1, 0, 0, -1, -2, -2, -3, -3, -3, -3, -3, -3, -3,
-2, -1, -1, 0, 1, 1, 2, 2, 2, 2, 2, 2, 1, 1, 0, 0, -1, -2, -2, -3, -3, -3, -4,
-4, -3, -3, -2, -2, -1, -1, 0, 1, 1, 1, 2, 2, 2, 1, 1, 1, 0, 0, -1, -1, -2, -2,
-3, -3, -3, -3, -3, -3, -2, -2, };

#endif /* ROLANDCRFOUR_H_ */
