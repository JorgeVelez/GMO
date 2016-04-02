#ifndef SNAREFOUR_H_
#define SNAREFOUR_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define SNAREFOUR_NUM_CELLS 899
#define SNAREFOUR_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) SNAREFOUR_DATA [] = {-6,
-7, 6, -8, -13, 12, -9, -13, -5, -13, 0, 10, -6, -30, 17, -3, -41, 3, 10, -18,
4, -4, -25, 14, 12, -15, -18, 2, 3, -5, -12, -24, -12, 13, 20, 25, 34, 11, 41,
95, 88, 119, 127, 93, 82, 118, 127, 121, 127, 42, 40, 127, 51, -108, -120, -128,
-79, 94, 127, -18, -128, -123, -128, -126, -128, -126, -128, -126, -128, -126,
-128, -125, -128, -124, -128, -123, -128, -120, -128, -76, 93, 127, 90, -87,
-61, 56, -21, -117, -128, -24, 121, 126, 125, 127, 124, 127, 124, 127, 125, 126,
126, 120, 116, 127, 124, 127, 125, 126, 125, 126, 125, 127, 121, 74, 15, 4, 68,
127, 81, 45, 76, 56, 8, -41, -28, 38, -40, -98, 3, 49, -41, -121, -127, -127,
-128, -109, 7, -60, -128, -120, -128, -123, -128, -125, -128, -126, -128, -126,
-128, -127, -127, -128, -127, -128, -126, -128, -125, -128, -125, -128, -102,
-102, -128, -66, -55, -6, -8, -51, -18, -34, 20, 117, 127, 125, 127, 125, 127,
125, 127, 125, 127, 125, 127, 125, 127, 124, 127, 124, 127, 123, 127, 122, 127,
121, 127, 110, 98, 126, 127, 100, -4, -4, -93, -128, -123, -128, -126, -127,
-128, -95, -45, -128, -116, -107, -119, -128, -100, 28, -53, -128, -118, -128,
-49, -81, -128, -124, -128, -125, -128, -124, -128, -124, -128, -122, -128,
-120, -128, -58, 96, 126, -63, -128, -119, -48, 76, 29, 114, 127, 123, 127, 125,
126, 125, 125, 127, 120, 103, 125, 127, 94, 104, 127, 120, 127, 119, 127, 71,
-1, 4, 100, 127, 123, 23, -106, -47, 34, 100, 30, -127, -113, 4, 123, 112, -83,
-128, -90, -2, -3, -110, -128, -120, -12, 16, -112, -128, -56, 11, -71, -128,
-120, -128, -121, -128, -109, -128, -78, -59, -74, -92, -103, -89, -126, -128,
-81, -24, 64, 82, -96, -128, -89, -1, 19, -54, 22, 127, 118, 22, 33, 119, 88,
122, 112, 39, 105, 127, 123, 127, 119, 125, 123, 127, 121, 127, 119, 127, 67,
-6, 92, 127, 71, -105, -37, 112, 59, -92, -62, 73, 119, 127, 61, -62, -128, -56,
17, 24, 34, 91, 32, -95, -70, -89, -128, -121, -128, -123, -128, -107, -10, -77,
-54, 28, -24, -102, -128, -80, -68, -83, -128, -98, -82, -8, 106, 28, -120,
-108, -75, -44, 55, -31, -92, 29, 127, 63, 0, 8, 91, 12, -50, 19, 26, 106, 127,
52, -24, 24, 37, 111, 52, -37, -8, -24, 76, 123, 127, 119, 36, 63, 61, 23, 54,
-57, -111, -59, -1, -10, 0, -11, 13, 29, 31, 100, 66, 64, 0, 27, 5, -18, -32,
-25, -37, -65, -46, -74, -55, -118, -121, -92, -127, -89, -16, -40, -83, -79,
-35, -113, -92, -4, 51, 34, -44, -100, -66, -15, 29, -5, -99, -29, -36, 34, 122,
107, 27, 54, 125, 122, 14, -20, 63, 74, 49, 51, 10, -48, 39, 18, 48, 28, 8, 5,
22, 9, -86, -38, -15, 23, -10, 16, -14, -16, 42, -40, -22, 58, 68, -22, -35, -1,
29, 83, -6, -88, -69, -71, -52, -30, -37, -47, -32, 45, 46, -18, -70, -50, -5,
-20, 33, 7, 60, 93, 19, 2, -76, -113, -118, -82, -59, -61, -93, -97, 0, 64, 20,
2, 17, -3, -71, -19, 102, 21, -6, 55, 56, -21, 0, 55, 7, -10, 68, 118, 54, 39,
40, 96, 104, 67, 71, 69, 95, 57, 4, 6, -5, -56, -34, -7, 47, 5, -87, -39, 36,
87, -55, -128, -97, -47, 26, 39, 8, -91, -80, 9, -22, -46, -24, -69, -52, -10,
-39, -25, 31, 6, 26, 6, -5, 100, 60, -52, -61, 29, 80, 14, -49, 2, 46, 18, -29,
-59, -38, 34, 34, -34, -42, 3, 25, 11, -12, -40, -24, -60, -47, 3, -28, -27,
-13, -32, -22, 13, 40, 4, 5, -7, -4, 74, -6, -15, 60, 126, 56, -5, 59, 0, -50,
-27, 5, -38, -60, 7, 34, -26, -51, 17, 18, -5, 25, 21, 12, 19, 24, 17, 10, 14,
23, 44, 58, 51, 12, -46, -53, -39, -19, -32, -43, -27, 18, 24, -14, -27, -43,
-5, -34, -53, -24, -7, 14, -41, -46, 6, 3, -17, -32, -5, 16, 20, 14, -11, -10,
-18, 24, 31, -1, 33, 19, -18, -41, -31, -4, -4, 20, 20, -5, -29, -23, -18, -18,
-15, 0, 11, 8, 16, 18, 42, 37, 26, 29, 42, 15, 9, -8, -4, 19, -1, 17, -17, 4,
14, -17, -11, 6, 22, 10, -8, -5, 14, -5, -15, -29, -51, -34, 1, -4, 3, -10, -11,
-15, -34, -33, -31, 10, -13, -19, -6, -8, -9, -2, -6, -4, 12, 0, 0, -6, 19, 26,
-11, -19, 8, -11, -19, 1, -9, 1, 17, 17, 9, 3, 12, 8, 0, 4, 5, 5, 1, -1, -4, -2,
-9, 2, 7, -12, -16, -3, 4, 0, 2, 6, 6, 0, 8, 14, 14, 11, 3, -2, 9, 16, 3, -11,
-7, -3, -2, 4, -5, -9, -4, -8, -6, 6, 4, -1, -4, -2, 0, 0, -4, -7, -3, -1, -8,
-14, -7, -6, -7, -9, -7, -6, -1, 4, -2, -3, -2, 2, 0, -1, -2, -3, 1, 1, 1, 2, 2,
-1, -2, -3, 0, 1, 0, -1, 0, 3, 2, 1, 0, 1, 1, 0, 0, 0, 0, -1, 0, };

#endif /* SNAREFOUR_H_ */