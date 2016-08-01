#ifndef ROLANDCREIGHT_H_
#define ROLANDCREIGHT_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define ROLANDCREIGHT_NUM_CELLS 957
#define ROLANDCREIGHT_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) ROLANDCREIGHT_DATA [] =
{-8, 8, -10, 3, -2, 4, -4, -2, 9, -13, 15, -13, 7, -2, -3, 1, 2, 0, -8, 14, -15,
12, -7, 0, 9, -19, 24, -22, 17, -13, 9, -5, 2, -5, 5, 0, -7, 12, -16, 18, -22,
22, -17, 10, -6, 6, -3, -2, 2, 3, -10, 13, -12, 5, 0, -2, 3, -9, 20, -27, 28,
-31, 31, -26, 16, -8, 0, 6, -12, 14, -16, 18, -16, 12, -7, 1, 5, -6, 4, -2, -2,
4, -4, 6, -9, 10, -8, 5, -4, 5, -6, 8, -10, 9, -5, 0, 4, -8, 12, -11, 11, -16,
17, -13, 12, -15, 14, -8, -1, 5, -9, 11, -8, 1, 2, 1, -3, 2, 1, -6, 11, -6, -8,
20, -25, 22, -17, 14, -11, 4, 2, -4, 3, -4, 10, -18, 17, -10, -1, 10, -15, 14,
-13, 10, -7, 2, 3, -10, 18, -24, 27, -28, 24, -19, 14, -12, 10, -8, 2, 4, -8, 6,
-2, 5, -17, 28, -36, 38, -33, 23, -20, 20, -11, -5, 12, -10, 4, -1, 3, -8, 12,
-14, 12, -10, 7, -6, 8, -10, 4, -2, 6, -9, 8, -6, 4, -5, 5, -4, 3, -8, 13, -15,
7, 5, -16, 20, -19, 16, -10, 3, 0, 2, -6, 10, -15, 17, -19, 23, -29, 26, -15, 0,
10, -19, 22, -21, 20, -23, 27, -31, 32, -31, 28, -20, 6, 5, -9, 6, -2, -3, 0, 9,
-19, 26, -29, 30, -35, 37, -33, 23, -13, 8, -6, 1, 3, -8, 14, -22, 26, -28, 28,
-28, 23, -15, 4, 1, 1, -7, 8, -8, 3, 3, -9, 9, -7, 2, 0, 2, -8, 10, -10, 8, -12,
17, -22, 19, -9, -5, 12, -14, 13, -14, 14, -13, 4, 2, -7, 7, -6, 3, -5, 4, -3,
2, -7, 8, -6, 2, -3, 3, -1, -6, 10, -13, 14, -15, 11, -8, 3, 2, -5, 0, 4, -8, 9,
-9, 7, -6, -3, 14, -22, 20, -16, 10, -10, 9, -10, 6, -1, -7, 13, -14, 8, -2, -2,
2, 0, 0, -8, 14, -18, 15, -7, -4, 10, -14, 15, -15, 13, -13, 10, -9, 8, -5, 1,
-2, 2, 0, -5, 7, -10, 11, -11, 9, -9, 8, -9, 8, -8, 4, 1, -7, 8, -13, 16, -17,
16, -17, 14, -10, 5, -4, 2, 1, -12, 23, -32, 31, -24, 13, -9, 8, -8, 0, 9, -17,
18, -16, 8, -1, -6, 10, -12, 7, 1, -11, 15, -15, 7, 4, -14, 13, -6, -6, 18, -28,
29, -24, 14, -7, -3, 10, -12, 12, -17, 22, -23, 18, -11, 4, 2, -7, 6, -3, -4, 8,
-9, 3, 4, -12, 14, -14, 10, -4, -1, 0, 2, -3, 3, 0, -7, 12, -10, -1, 11, -15, 8,
2, -12, 13, -8, 0, 3, -6, 3, 0, -4, 6, -9, 8, -7, 6, -5, 3, -4, 2, 1, -6, 8, -9,
9, -13, 16, -20, 15, -8, -1, 2, -3, 4, -11, 15, -15, 7, 0, -6, 7, -8, 7, -6, 5,
-4, 1, -1, -1, 3, -5, 4, -8, 14, -20, 18, -13, 8, -9, 10, -14, 13, -11, 7, -5,
-3, 9, -17, 25, -33, 32, -30, 26, -24, 22, -19, 12, -7, 0, 5, -16, 23, -26, 22,
-20, 16, -15, 13, -14, 12, -12, 13, -16, 12, -4, -4, 5, -7, 7, -8, 10, -18, 22,
-23, 18, -15, 12, -10, 4, 4, -14, 12, -5, -2, 2, -4, 2, -1, -4, 7, -12, 11, -10,
7, -8, 7, -9, 8, -7, 2, 0, -3, 5, -10, 10, -12, 12, -14, 11, -10, 6, -7, 4, 0,
-8, 10, -13, 10, -6, 1, -3, 3, -5, 5, -7, 3, 1, -5, 3, -2, -1, 0, -1, 0, -3, 2,
-3, 2, -3, 0, 2, -7, 7, -7, 4, -3, 1, 0, -2, -1, 4, -8, 5, -5, 4, -4, 1, 0, -5,
4, -4, 2, -2, 0, -3, 5, -8, 6, -4, 1, 0, -1, -1, -2, 0, 1, -5, 5, -6, 4, -4, 2,
-2, -1, 1, -2, -2, 1, -2, 0, -1, -2, 2, -6, 8, -11, 11, -14, 13, -11, 4, -1, -2,
3, -6, 5, -6, 2, 0, -4, 3, -2, -3, 4, -6, 6, -10, 11, -13, 11, -10, 3, 1, -5, 5,
-10, 10, -9, 3, -1, -1, 0, -3, 1, -1, -1, 0, -3, 2, -3, 1, -1, -1, -1, 1, -3, 0,
-1, 0, -2, 0, 0, -3, -1, 1, -3, 1, -1, -2, 1, -2, 1, -3, 0, -1, -1, -1, 1, -3,
2, -3, 2, -3, 0, 0, -3, 1, -2, 0, -1, 0, -2, 4, -7, 6, -6, 1, 1, -5, 4, -6, 5,
-6, 4, -3, 0, -1, -1, 1, -3, 2, -3, 0, -1, 0, -4, 4, -6, 3, -2, -2, 1, -2, 1,
-3, 2, -3, 0, -1, 0, -2, 0, -2, -1, 0, -2, -1, 0, -1, 0, -1, -2, 2, -4, 1, -1,
-1, 1, -2, 0, 0, -2, -1, 1, -3, 2, -2, -1, 1, -3, 1, -1, -2, 1, -3, 1, -3, 0, 0,
-2, 1, -2, 0, -2, 1, -3, 1, -2, 1, -2, 0, -1, -1, -1, -1, 0, -2, 0, -2, 0, -1,
0, -2, 1, -3, 2, -3, 0, -2, 0, -1, 0, -1, -1, 0, -2, 1, -3, 1, -2, 0, -2, 1, -2,
1, -2, 0, -1, -1, 0, -2, 0, -2, 0, -2, 0, -2, 0, -1, 0, -2, -1, -1, -1, -1, -1,
0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, };

#endif /* ROLANDCREIGHT_H_ */
