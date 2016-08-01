#ifndef ROLANDCRONE_H_
#define ROLANDCRONE_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define ROLANDCRONE_NUM_CELLS 2108
#define ROLANDCRONE_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) ROLANDCRONE_DATA [] =
{-1, 4, -11, -41, -67, -89, -104, -114, -119, -121, -120, -117, -112, -106, -99,
-91, -83, -75, -66, -58, -50, -42, -34, -27, -19, -12, -5, 1, 8, 14, 20, 25, 30,
35, 40, 45, 49, 53, 57, 61, 64, 68, 71, 74, 76, 79, 81, 83, 85, 87, 89, 90, 91,
92, 93, 94, 95, 95, 95, 96, 96, 96, 95, 95, 94, 94, 93, 92, 91, 90, 89, 88, 87,
85, 84, 82, 80, 79, 77, 75, 73, 71, 69, 66, 64, 62, 59, 57, 54, 52, 49, 47, 44,
42, 39, 36, 33, 30, 28, 25, 22, 19, 16, 13, 11, 8, 5, 2, -1, -4, -6, -9, -12,
-15, -17, -20, -23, -26, -28, -31, -34, -36, -39, -41, -44, -46, -48, -51, -53,
-55, -58, -60, -62, -64, -66, -68, -70, -71, -73, -75, -77, -78, -79, -81, -82,
-84, -85, -86, -87, -88, -89, -90, -91, -92, -92, -93, -93, -94, -95, -95, -95,
-95, -95, -96, -96, -95, -95, -95, -95, -94, -94, -94, -93, -92, -92, -91, -90,
-89, -88, -87, -86, -85, -84, -83, -81, -80, -79, -77, -76, -74, -73, -71, -69,
-68, -66, -64, -62, -60, -58, -56, -54, -52, -50, -48, -46, -44, -42, -40, -37,
-35, -33, -31, -29, -26, -24, -22, -19, -17, -15, -12, -10, -8, -5, -3, -1, 2,
4, 6, 8, 11, 13, 15, 17, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46,
48, 49, 51, 53, 54, 56, 58, 59, 61, 62, 64, 65, 66, 68, 69, 70, 71, 72, 73, 74,
75, 76, 77, 78, 78, 79, 80, 81, 81, 81, 82, 82, 82, 83, 83, 83, 83, 83, 83, 83,
83, 83, 83, 82, 82, 82, 81, 81, 80, 80, 79, 79, 78, 77, 77, 76, 75, 74, 73, 72,
71, 70, 69, 68, 67, 65, 64, 63, 62, 60, 59, 58, 56, 55, 53, 52, 51, 49, 47, 46,
44, 43, 41, 39, 38, 36, 34, 33, 31, 29, 28, 26, 24, 22, 21, 19, 17, 15, 13, 12,
10, 8, 6, 5, 3, 1, -1, -2, -4, -6, -8, -9, -11, -13, -14, -16, -18, -19, -21,
-22, -24, -25, -27, -28, -30, -31, -33, -34, -35, -37, -38, -39, -41, -42, -43,
-44, -45, -46, -47, -48, -50, -50, -51, -52, -53, -54, -55, -55, -56, -57, -57,
-58, -59, -59, -60, -60, -60, -61, -61, -61, -62, -62, -62, -62, -62, -62, -62,
-62, -62, -62, -62, -62, -61, -61, -61, -60, -60, -60, -59, -59, -58, -58, -57,
-57, -56, -55, -55, -54, -53, -52, -51, -50, -50, -49, -48, -47, -46, -45, -44,
-43, -42, -41, -39, -39, -37, -36, -35, -34, -33, -31, -30, -29, -28, -26, -25,
-24, -23, -21, -20, -19, -17, -16, -15, -13, -12, -11, -9, -8, -7, -5, -4, -3,
-1, 0, 1, 2, 4, 5, 6, 7, 9, 10, 11, 12, 14, 15, 16, 17, 18, 19, 20, 22, 22, 24,
24, 25, 27, 28, 29, 29, 30, 31, 32, 33, 34, 35, 35, 36, 37, 37, 38, 38, 39, 40,
40, 41, 41, 42, 42, 42, 43, 43, 43, 44, 44, 44, 44, 45, 45, 45, 45, 45, 45, 45,
45, 45, 45, 44, 44, 44, 44, 44, 43, 43, 43, 42, 42, 42, 41, 41, 40, 40, 40, 39,
38, 38, 37, 37, 36, 35, 35, 34, 33, 33, 32, 31, 30, 30, 29, 28, 27, 26, 26, 25,
24, 23, 22, 21, 20, 19, 18, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5,
4, 3, 2, 1, 0, -1, -2, -3, -4, -5, -6, -7, -8, -9, -9, -10, -11, -12, -13, -14,
-15, -16, -16, -17, -18, -19, -20, -20, -21, -22, -22, -23, -24, -24, -25, -26,
-26, -27, -27, -28, -28, -29, -29, -30, -30, -31, -31, -31, -32, -32, -32, -33,
-33, -33, -34, -34, -34, -34, -34, -34, -34, -34, -34, -35, -35, -35, -35, -34,
-34, -34, -34, -34, -34, -34, -33, -33, -33, -33, -33, -32, -32, -32, -31, -31,
-31, -30, -30, -29, -29, -28, -28, -27, -27, -26, -26, -25, -25, -24, -24, -23,
-22, -22, -21, -21, -20, -19, -19, -18, -17, -17, -16, -15, -15, -14, -13, -12,
-12, -11, -10, -9, -9, -8, -7, -6, -6, -5, -4, -4, -3, -2, -1, -1, 0, 1, 2, 2,
3, 4, 4, 5, 6, 6, 7, 8, 8, 9, 10, 10, 11, 12, 12, 13, 13, 14, 14, 15, 15, 16,
17, 17, 18, 18, 18, 19, 19, 20, 20, 20, 21, 21, 22, 22, 22, 22, 23, 23, 23, 24,
24, 24, 24, 24, 24, 24, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25,
25, 24, 24, 24, 24, 24, 24, 23, 23, 23, 23, 22, 22, 22, 22, 21, 21, 21, 20, 20,
20, 19, 19, 18, 18, 18, 17, 17, 16, 16, 15, 15, 14, 14, 14, 13, 12, 12, 11, 11,
10, 10, 9, 9, 8, 8, 7, 7, 6, 6, 5, 4, 4, 3, 3, 2, 2, 1, 1, 0, -1, -1, -2, -2,
-3, -3, -4, -4, -5, -5, -6, -6, -7, -7, -8, -8, -9, -9, -10, -10, -11, -11, -11,
-12, -12, -13, -13, -13, -14, -14, -14, -15, -15, -15, -16, -16, -16, -17, -17,
-17, -17, -18, -18, -18, -18, -18, -18, -19, -19, -19, -19, -19, -19, -19, -19,
-20, -20, -20, -20, -20, -20, -20, -20, -20, -20, -19, -19, -19, -19, -19, -19,
-19, -19, -19, -19, -18, -18, -18, -18, -18, -17, -17, -17, -17, -17, -16, -16,
-16, -15, -15, -15, -15, -14, -14, -14, -13, -13, -13, -12, -12, -11, -11, -11,
-10, -10, -10, -9, -9, -8, -8, -8, -7, -7, -6, -6, -6, -5, -5, -4, -4, -4, -3,
-3, -2, -2, -1, -1, -1, 0, 0, 1, 1, 1, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 6, 6, 6, 6,
7, 7, 7, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10, 10, 11, 11, 11, 11, 11, 12, 12, 12,
12, 12, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 14, 13, 14, 14, 14, 14, 14,
14, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 12, 12, 12, 12, 12, 12,
11, 11, 11, 11, 11, 10, 10, 10, 10, 10, 9, 9, 9, 9, 8, 8, 8, 8, 7, 7, 7, 6, 6,
6, 6, 5, 5, 5, 4, 4, 4, 4, 3, 3, 3, 2, 2, 2, 1, 1, 1, 0, 0, 0, -1, -1, -1, -1,
-2, -2, -2, -3, -3, -3, -4, -4, -4, -4, -5, -5, -5, -5, -6, -6, -6, -6, -7, -7,
-7, -7, -8, -8, -8, -8, -8, -9, -9, -9, -9, -9, -10, -10, -10, -10, -10, -10,
-10, -10, -11, -11, -11, -11, -11, -11, -11, -11, -11, -11, -11, -11, -11, -11,
-11, -11, -12, -11, -11, -11, -11, -11, -11, -11, -11, -11, -11, -11, -11, -11,
-11, -11, -11, -11, -11, -10, -10, -10, -10, -10, -10, -10, -10, -9, -9, -9, -9,
-9, -9, -8, -8, -8, -8, -8, -7, -7, -7, -7, -7, -6, -6, -6, -6, -6, -5, -5, -5,
-5, -4, -4, -4, -4, -3, -3, -3, -3, -3, -2, -2, -2, -2, -1, -1, -1, -1, 0, 0, 0,
0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5,
5, 5, 5, 6, 6, 6, 6, 6, 6, 6, 6, 6, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 6, 6, 6, 6, 6, 6, 6, 6,
6, 6, 6, 5, 5, 5, 5, 5, 5, 5, 4, 4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2,
2, 2, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -2, -2, -2, -2,
-2, -2, -2, -3, -3, -3, -3, -3, -3, -4, -4, -4, -4, -4, -4, -4, -4, -5, -5, -5,
-5, -5, -5, -5, -5, -6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -7,
-7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7,
-7, -7, -7, -7, -6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -5, -5,
-5, -5, -5, -5, -5, -5, -5, -5, -5, -4, -4, -4, -4, -4, -4, -4, -4, -3, -3, -3,
-3, -3, -3, -3, -3, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, -1, -1,
-1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2,
2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4,
4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 3, 3,
3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -3, -3, -3, -3, -3,
-3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -4, -3, -4, -4, -4, -4, -4, -4, -4, -4,
-4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4,
-4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -3, -3, -3,
-3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -3, -2, -2, -3, -3, -3, -3, -3, -3, -2,
-3, -2, -2, -2, -3, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, };

#endif /* ROLANDCRONE_H_ */
