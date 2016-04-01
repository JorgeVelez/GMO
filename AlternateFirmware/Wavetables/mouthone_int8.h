#ifndef MOUTHONE_H_
#define MOUTHONE_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define MOUTHONE_NUM_CELLS 1799
#define MOUTHONE_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) MOUTHONE_DATA [] = {0,
-1, 0, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 1, -1, 1, -1, 0,
-2, 0, -2, 0, -1, 0, 0, -1, 1, -1, 1, -2, 2, -3, 2, -4, 2, -4, 3, -4, 3, -4, 2,
-5, 0, -7, -5, -13, -49, 12, 26, 42, 61, 87, 15, -24, -75, -67, -53, -56, -28,
-3, 26, 17, 49, 50, 59, 25, 26, -10, -32, -61, -59, -52, -38, -5, 18, 44, 43,
51, 30, 18, -7, -17, -31, -31, -29, -18, -11, 2, 11, 16, 18, 15, 13, 10, 10, 4,
1, -7, -13, -18, -17, -16, -9, -1, 5, 9, 11, 11, 11, 10, 7, 3, -3, -9, -13, -13,
-14, -8, -5, 1, 6, 8, 10, 7, 6, 1, 2, -3, -2, -4, -5, -7, -9, -7, -6, -2, 0, 5,
5, 6, 6, 6, 3, 0, -2, -4, -6, -6, -5, -5, -3, -3, 0, 1, 2, 2, 4, 3, 4, 3, 1, 0,
-4, -5, -7, -6, -5, -2, 0, 3, 4, 4, 4, 1, 1, -1, -2, -5, -4, -4, -2, 0, 3, 4, 3,
2, -1, -3, -6, -5, -4, -3, 1, 4, 6, 5, 6, 4, 0, -3, -6, -8, -8, -7, -3, -1, 2,
4, 5, 5, 4, 3, 1, 0, -2, -3, -4, -4, -3, -1, -1, -2, -2, -3, -2, 0, 2, 3, 3, 3,
4, 2, 1, -1, -2, -4, -4, -4, -3, -3, -2, -1, 1, 2, 3, 3, 2, 2, 1, 0, -2, -2, -3,
-3, -4, -2, -1, 0, 1, 2, 3, 2, 1, 0, -2, -3, -3, -3, -1, 0, 1, 2, 2, 0, -1, -2,
-3, -4, -3, -1, 0, 1, 3, 3, 2, 0, -1, -2, -3, -4, -4, -3, -3, 0, 2, 4, 5, 5, 2,
-1, -3, -4, -4, -4, -3, -1, 0, 1, 3, 3, 3, 1, 1, -2, -2, -4, -4, -4, -3, -1, 0,
3, 2, 4, 2, 3, 0, 0, -3, -2, -3, -3, -3, -3, -2, -2, 0, 0, 3, 3, 4, 4, 3, 1, -2,
-4, -5, -6, -5, -2, 0, 0, 1, 1, 1, 1, 1, 2, 1, 0, -1, -2, -3, -2, -2, 0, 1, 2,
1, -1, -1, -2, -2, -3, -2, -2, -1, 0, 1, 3, 2, 2, 1, 0, -2, -3, -3, -2, -2, -2,
-1, -1, 0, 1, 2, 2, 1, 0, -1, -1, -2, -1, -2, -1, -2, -2, -1, 0, 0, 1, 1, 2, 1,
1, 1, 0, 0, -3, -3, -5, -4, -3, 0, 1, 2, 3, 2, 2, 1, 0, -1, -2, -4, -4, -4, -2,
-1, 1, 2, 3, 2, 1, 0, -1, -2, -2, -2, -3, -2, -3, -1, -1, 2, 2, 4, 2, 1, 0, -2,
-3, -3, -2, -2, -1, -1, 0, 0, 1, 1, 1, 1, 1, 0, -1, -2, -2, -3, -3, -2, -1, 0,
1, 2, 2, 1, 0, 0, -1, -2, -2, -2, -2, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1,
-2, -1, -1, 0, 0, 1, 0, 0, 0, 0, -1, -1, -1, -1, -1, -2, -1, -1, 1, 1, 1, 1, 1,
1, 0, 0, -2, -2, -3, -3, -3, -2, -1, 0, 2, 2, 3, 3, 2, 0, -1, -3, -4, -4, -4,
-3, -2, 0, 2, 4, 3, 3, 1, 0, -2, -2, -2, -2, -2, -3, -2, 0, 2, 3, 3, 2, 0, -2,
-3, -4, -4, -4, -2, 0, 2, 3, 3, 3, 1, 0, -2, -3, -4, -3, -3, -1, 0, 2, 1, 1, 1,
0, -1, -2, -2, -2, -1, -1, 0, -1, 0, 1, 1, 1, 0, 0, -2, -2, -2, -2, -2, -1, 0,
0, 1, 1, 1, 0, -1, -1, -2, -1, -1, 0, -1, 0, 0, -1, 0, 0, 1, 0, 0, 0, 0, -2, -2,
-2, -2, -2, -1, 0, 0, 1, 1, 1, 1, 1, -1, -1, -2, -1, -2, -2, -2, -1, -1, 0, 1,
1, 1, 0, 0, -1, -1, -1, 0, -2, -2, -2, -1, -1, 0, 1, 1, 1, 0, 0, -1, -2, -2, -1,
-1, -1, -1, 0, 0, 1, 1, 1, 0, 0, 0, -1, -2, -2, -2, -1, -1, 0, 0, 1, 1, 0, 0,
-1, -1, -2, -1, -2, -1, -1, 0, 0, 1, 1, 1, 0, -1, -1, -2, -1, -2, -1, -1, 0, -1,
0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -2, -1, -2, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1,
-1, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 1, 1, 1, 0, 0,
-1, -1, -2, -2, -1, -1, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, -1,
-1, -1, -1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, 0, 0, 1, 1,
1, 0, -1, -1, -1, -2, -2, -1, -1, -1, -1, 0, 1, 1, 1, 1, 0, -1, -2, -3, -2, -2,
0, 0, 2, 1, 2, 0, 0, -1, -1, -2, -2, -2, -2, -1, -1, 1, 1, 2, 1, 0, -1, -2, -2,
-2, -1, -1, 0, 0, 1, 0, 1, 0, 0, -1, -1, -2, -2, -2, -2, -1, -1, 0, 1, 1, 1, 1,
0, 0, -1, -1, -2, -2, -2, -2, -1, -1, 0, 1, 1, 1, 1, 0, 0, -1, -2, -3, -3, -2,
0, 1, 2, 1, 1, 0, 0, -1, 0, -1, -2, -2, -2, -2, -1, 0, 1, 2, 1, 1, 0, -1, -2,
-2, -2, -1, -1, 0, 0, -1, 0, -1, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, -1, -2,
-2, -2, -1, -1, -1, 0, 0, 1, 1, 1, 1, 0, -1, -1, -1, -2, -1, -1, -1, -1, -1, -1,
0, 1, 1, 1, 1, 0, -1, -1, -2, -2, -2, -2, -2, 0, 0, 1, 1, 2, 1, 0, 0, -1, -2,
-3, -2, -2, -2, -1, 0, 1, 1, 1, 1, 1, 0, -1, -2, -2, -3, -2, -2, -1, 0, 1, 1, 1,
1, 1, 0, 0, -1, -2, -2, -2, -2, -2, -1, 0, 1, 1, 1, 1, 1, 0, 0, -1, -2, -2, -2,
-2, -1, 1, 1, 2, 1, 1, 0, -1, -1, -1, -2, -2, -1, -1, -1, -1, 0, 0, 0, 0, 1, 0,
0, 0, 0, -1, -1, -2, -2, -2, -1, 0, 0, 1, 1, 1, 1, 1, 0, -1, -2, -2, -2, -2, -1,
0, 1, 1, 2, 1, 1, 0, -1, -2, -2, -2, -2, -2, -1, 0, 1, 1, 1, 1, 1, 0, -1, -1,
-2, -1, -1, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1,
-1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0,
0, 0, -1, 0, 0, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1,
-1, -1, 0, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0,
-1, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1,
-1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
-1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 1, 0, 0, 0, 0, -1, -1, -1, -2, -2, -1, -1,
-1, 0, 1, 1, 1, 1, 1, 0, -1, -2, -2, -2, -2, -1, -1, 0, 0, 0, 0, 1, 0, 1, 0, -1,
-1, -2, -2, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -2, -1, -1, -1, 0, 0,
0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0,
-1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0,
0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -2, -2,
-2, -1, 0, 0, 1, 1, 1, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0,
-1, -1, -1, -2, -2, -1, 0, 0, 1, 1, 1, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1,
0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1,
-1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -2, -2, -1, -1, 0, 0, 0, 1, 0,
0, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1,
-1, -1, -1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1,
-1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0,
0, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 1, 0, 0, -1, -1, -1, -1, -2, -1, -1,
0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, -1,
-1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, -1, 0, 0, 0,
0, 0, 0, -1, 0, -1, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0,
0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1,
-1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1,
-1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, -1,
-1, -1, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, };

#endif /* MOUTHONE_H_ */
