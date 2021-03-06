#ifndef CONGASIX_H_
#define CONGASIX_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define CONGASIX_NUM_CELLS 2711
#define CONGASIX_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) CONGASIX_DATA [] = {-2,
-3, -3, -4, -3, -1, 0, 0, 1, 3, 4, 3, 3, 4, 4, 4, 3, 3, 1, -5, -8, -7, -6, -9,
-17, -33, -37, -31, -22, -20, -25, -30, -26, -19, -21, -42, -48, -39, -35, -20,
-11, -16, -23, -23, -29, -23, -11, 4, 24, 41, 50, 48, 47, 52, 64, 76, 89, 101,
112, 119, 120, 118, 114, 109, 102, 94, 87, 81, 73, 63, 53, 42, 31, 19, 8, -1,
-10, -17, -24, -33, -42, -50, -59, -69, -77, -82, -86, -90, -94, -94, -94, -93,
-92, -94, -95, -91, -85, -80, -75, -70, -67, -66, -65, -65, -65, -62, -56, -50,
-45, -41, -35, -28, -18, -6, 5, 16, 26, 35, 44, 52, 59, 62, 63, 61, 60, 61, 63,
67, 72, 77, 81, 82, 81, 80, 78, 75, 72, 70, 70, 70, 69, 68, 66, 61, 54, 46, 38,
30, 23, 15, 6, -3, -11, -20, -28, -37, -45, -52, -59, -64, -69, -72, -74, -75,
-77, -78, -80, -81, -81, -79, -77, -75, -72, -70, -69, -67, -63, -57, -51, -43,
-35, -26, -18, -9, 0, 7, 15, 21, 25, 29, 33, 35, 37, 40, 42, 46, 49, 51, 53, 55,
56, 57, 57, 56, 54, 51, 48, 45, 43, 40, 38, 37, 35, 34, 32, 30, 28, 27, 27, 27,
27, 28, 28, 27, 25, 23, 20, 16, 11, 5, -2, -10, -19, -28, -38, -48, -57, -65,
-72, -77, -82, -87, -89, -90, -89, -87, -84, -79, -75, -69, -63, -57, -50, -45,
-39, -34, -29, -25, -23, -20, -17, -13, -9, -3, 3, 10, 17, 24, 32, 40, 48, 56,
63, 70, 76, 81, 85, 89, 92, 94, 96, 97, 96, 94, 90, 84, 78, 70, 60, 50, 40, 29,
19, 9, -1, -10, -19, -29, -37, -44, -50, -53, -56, -57, -58, -57, -56, -55, -54,
-53, -52, -52, -52, -52, -53, -54, -57, -60, -63, -66, -68, -69, -69, -69, -67,
-65, -61, -57, -52, -45, -37, -28, -19, -9, 1, 11, 21, 30, 39, 48, 56, 64, 71,
78, 83, 86, 88, 89, 89, 88, 86, 84, 82, 79, 75, 71, 67, 61, 56, 51, 45, 40, 35,
31, 26, 22, 17, 10, 4, -3, -11, -18, -27, -35, -44, -52, -61, -70, -77, -84,
-90, -94, -98, -100, -101, -100, -98, -95, -89, -82, -74, -66, -57, -47, -37,
-27, -18, -9, -1, 6, 13, 18, 23, 26, 29, 31, 33, 33, 34, 35, 37, 39, 41, 43, 44,
46, 47, 48, 49, 50, 51, 51, 51, 51, 50, 50, 49, 47, 46, 43, 40, 38, 35, 32, 28,
25, 21, 17, 12, 8, 2, -3, -9, -15, -20, -26, -31, -36, -41, -45, -49, -52, -54,
-55, -57, -58, -59, -59, -60, -60, -60, -59, -59, -57, -55, -52, -49, -47, -43,
-39, -35, -30, -24, -19, -12, -6, 1, 7, 14, 21, 28, 34, 41, 46, 50, 54, 57, 59,
59, 59, 58, 57, 56, 54, 53, 52, 50, 48, 46, 44, 42, 40, 37, 34, 30, 26, 21, 16,
11, 6, 1, -4, -9, -13, -17, -20, -22, -24, -26, -27, -28, -29, -29, -30, -30,
-31, -32, -33, -35, -36, -38, -40, -41, -43, -44, -45, -45, -45, -44, -44, -43,
-43, -41, -39, -37, -34, -31, -27, -22, -17, -12, -6, 0, 6, 13, 19, 26, 32, 39,
45, 51, 56, 61, 65, 69, 71, 73, 73, 73, 71, 68, 64, 59, 54, 48, 42, 36, 30, 24,
18, 13, 8, 4, 0, -3, -7, -10, -13, -16, -20, -25, -29, -34, -39, -44, -49, -54,
-58, -61, -64, -67, -68, -68, -67, -64, -61, -56, -51, -45, -40, -34, -28, -22,
-17, -11, -6, -1, 4, 8, 12, 16, 18, 21, 23, 24, 26, 27, 27, 28, 28, 29, 30, 30,
32, 33, 35, 36, 38, 39, 41, 42, 43, 44, 44, 45, 45, 45, 44, 43, 42, 39, 36, 32,
28, 22, 16, 10, 3, -5, -12, -20, -27, -34, -41, -46, -51, -55, -58, -60, -61,
-61, -60, -58, -56, -53, -50, -47, -44, -41, -38, -36, -34, -31, -29, -27, -24,
-21, -18, -15, -11, -7, -2, 4, 9, 15, 21, 26, 31, 36, 41, 46, 49, 52, 54, 56,
56, 56, 55, 53, 50, 47, 44, 40, 37, 32, 28, 24, 20, 16, 12, 8, 4, 1, -2, -5, -7,
-9, -11, -12, -14, -14, -15, -15, -15, -15, -15, -15, -16, -18, -19, -21, -23,
-25, -28, -31, -33, -36, -38, -40, -41, -42, -42, -42, -41, -39, -37, -34, -31,
-28, -23, -19, -15, -10, -5, -1, 3, 7, 11, 15, 18, 22, 25, 28, 30, 33, 35, 38,
40, 41, 43, 44, 45, 46, 46, 46, 45, 44, 42, 40, 37, 34, 30, 26, 21, 17, 12, 7,
3, -2, -6, -10, -13, -17, -20, -23, -26, -28, -30, -32, -34, -35, -36, -37, -37,
-37, -37, -36, -35, -34, -32, -30, -29, -26, -24, -22, -20, -18, -16, -14, -13,
-11, -9, -8, -6, -4, -2, -1, 1, 2, 3, 5, 7, 8, 10, 12, 14, 16, 18, 20, 23, 25,
27, 29, 31, 32, 34, 34, 35, 36, 36, 36, 35, 35, 34, 33, 32, 30, 28, 25, 22, 19,
15, 11, 6, 1, -4, -10, -15, -21, -26, -31, -35, -39, -42, -45, -47, -48, -49,
-49, -48, -47, -45, -42, -39, -36, -33, -30, -27, -23, -20, -17, -13, -10, -7,
-4, -1, 2, 4, 7, 9, 11, 14, 16, 18, 20, 22, 25, 26, 28, 30, 31, 32, 33, 33, 34,
33, 32, 31, 30, 28, 26, 24, 21, 19, 16, 14, 11, 9, 6, 4, 2, 0, -2, -4, -5, -6,
-7, -8, -8, -9, -10, -11, -11, -12, -14, -15, -17, -19, -21, -23, -26, -28, -30,
-32, -34, -36, -37, -38, -38, -38, -37, -35, -33, -30, -27, -23, -19, -14, -10,
-5, 0, 5, 10, 15, 19, 23, 27, 30, 33, 35, 37, 38, 39, 39, 39, 38, 36, 35, 33,
30, 28, 26, 23, 21, 18, 16, 14, 12, 10, 7, 5, 3, 1, -1, -4, -6, -8, -10, -12,
-15, -17, -19, -21, -23, -25, -26, -27, -27, -27, -27, -27, -26, -25, -23, -22,
-20, -19, -17, -15, -14, -12, -11, -9, -8, -7, -6, -6, -5, -5, -5, -5, -5, -4,
-4, -4, -3, -2, -1, 1, 2, 5, 7, 9, 12, 14, 17, 20, 22, 25, 27, 29, 30, 31, 32,
32, 32, 32, 31, 29, 27, 24, 21, 18, 15, 11, 8, 4, 1, -3, -6, -10, -13, -16, -18,
-21, -23, -25, -26, -27, -28, -29, -29, -29, -29, -29, -28, -27, -26, -25, -24,
-23, -21, -19, -17, -14, -12, -9, -7, -5, -2, 0, 2, 4, 6, 7, 9, 10, 12, 13, 13,
14, 14, 14, 15, 15, 15, 15, 15, 15, 15, 15, 16, 16, 16, 16, 16, 15, 15, 15, 14,
14, 13, 12, 12, 11, 10, 9, 8, 7, 6, 5, 3, 2, 0, -1, -3, -5, -8, -10, -12, -14,
-16, -19, -21, -23, -25, -26, -28, -29, -30, -30, -30, -30, -29, -28, -27, -25,
-23, -21, -19, -16, -13, -10, -7, -4, -1, 3, 6, 9, 12, 16, 19, 22, 24, 26, 28,
29, 30, 31, 31, 30, 30, 28, 27, 25, 22, 20, 17, 14, 11, 9, 6, 4, 2, 0, -1, -2,
-3, -4, -5, -6, -6, -7, -7, -8, -8, -9, -10, -10, -11, -12, -13, -14, -14, -15,
-16, -16, -17, -17, -17, -17, -17, -16, -15, -15, -14, -13, -13, -12, -11, -10,
-9, -8, -7, -6, -6, -4, -3, -2, -1, 0, 1, 3, 4, 6, 7, 9, 11, 12, 14, 15, 17, 18,
20, 21, 22, 23, 24, 24, 24, 24, 24, 23, 22, 20, 18, 16, 13, 10, 7, 4, 0, -3, -6,
-10, -13, -16, -18, -20, -22, -23, -24, -24, -24, -24, -23, -22, -21, -19, -18,
-16, -14, -13, -11, -10, -8, -7, -6, -5, -4, -3, -3, -2, -1, -1, 0, 0, 1, 1, 2,
3, 3, 4, 4, 5, 5, 6, 7, 7, 8, 8, 9, 9, 9, 10, 10, 11, 11, 11, 11, 11, 11, 11,
11, 11, 11, 10, 10, 9, 9, 8, 8, 7, 6, 6, 5, 4, 3, 2, 1, -1, -2, -4, -6, -8, -10,
-12, -14, -16, -18, -19, -21, -22, -23, -24, -24, -24, -24, -23, -21, -20, -18,
-16, -13, -11, -8, -6, -3, 0, 2, 4, 6, 8, 10, 11, 12, 13, 14, 15, 15, 16, 16,
16, 16, 15, 15, 14, 14, 13, 12, 11, 9, 8, 7, 6, 5, 4, 3, 2, 1, 1, 0, 0, 0, -1,
-1, -1, -1, -1, -1, -2, -2, -2, -3, -3, -4, -5, -6, -6, -7, -8, -9, -10, -11,
-11, -12, -12, -13, -13, -13, -13, -13, -13, -13, -13, -12, -12, -11, -10, -10,
-9, -8, -6, -5, -4, -2, 0, 1, 3, 5, 7, 9, 11, 12, 14, 15, 16, 17, 18, 18, 18,
18, 18, 18, 17, 16, 15, 14, 13, 12, 10, 8, 7, 5, 3, 1, -1, -3, -5, -7, -9, -11,
-12, -13, -14, -15, -16, -16, -16, -16, -15, -15, -14, -13, -12, -10, -9, -8,
-7, -5, -4, -3, -3, -2, -1, -1, -1, -1, -1, -1, -1, -1, -1, -2, -2, -2, -2, -2,
-1, -1, -1, 0, 1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 11, 11, 12, 12, 12, 11, 11,
10, 10, 9, 8, 7, 6, 5, 4, 2, 1, 0, -1, -2, -3, -4, -5, -6, -7, -8, -9, -10, -11,
-12, -13, -14, -14, -15, -15, -15, -15, -15, -15, -14, -13, -12, -11, -10, -8,
-6, -5, -3, -1, 1, 2, 4, 6, 7, 8, 9, 10, 10, 10, 10, 10, 10, 9, 9, 8, 7, 6, 5,
4, 4, 3, 2, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 3, 3, 3, 4, 4, 4, 4, 3, 3, 2, 1,
0, -1, -2, -3, -4, -5, -6, -7, -8, -9, -10, -10, -11, -11, -11, -11, -11, -11,
-10, -10, -10, -9, -9, -8, -7, -7, -6, -5, -4, -3, -3, -2, -1, 0, 1, 3, 4, 5, 6,
7, 8, 9, 10, 11, 12, 12, 12, 12, 12, 12, 11, 11, 10, 9, 7, 6, 5, 3, 2, 1, -1,
-2, -3, -4, -5, -6, -7, -7, -8, -8, -8, -8, -8, -7, -7, -7, -6, -6, -5, -5, -4,
-4, -3, -3, -3, -3, -2, -2, -3, -3, -3, -3, -4, -4, -4, -4, -5, -5, -5, -5, -5,
-5, -5, -4, -4, -3, -2, -2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 7, 8, 9, 9, 9, 9, 9, 9,
9, 9, 8, 8, 7, 6, 5, 5, 4, 3, 2, 1, 0, -1, -2, -3, -4, -5, -6, -7, -7, -8, -9,
-9, -10, -10, -10, -10, -10, -10, -10, -9, -9, -8, -8, -7, -6, -5, -4, -3, -2,
-1, -1, 0, 1, 2, 2, 3, 4, 4, 4, 5, 5, 5, 5, 5, 4, 4, 4, 3, 3, 2, 2, 1, 1, 1, 0,
0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 3, 3, 4, 4, 4, 4, 4, 3, 3, 3, 2, 1, 0, -1, -2,
-3, -3, -4, -5, -6, -7, -7, -8, -8, -8, -9, -9, -9, -8, -8, -8, -7, -7, -6, -5,
-5, -4, -3, -2, -2, -1, 0, 0, 1, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5,
5, 5, 5, 5, 4, 4, 3, 3, 2, 1, 1, 0, -1, -1, -2, -3, -3, -4, -4, -4, -4, -4, -4,
-4, -4, -3, -3, -3, -2, -2, -1, -1, -1, 0, 0, 0, -1, -1, -1, -1, -2, -2, -3, -3,
-3, -4, -4, -4, -5, -5, -5, -5, -5, -5, -4, -4, -3, -3, -2, -1, -1, 0, 1, 2, 2,
3, 4, 4, 5, 5, 6, 6, 6, 6, 6, 5, 5, 5, 4, 4, 3, 3, 2, 2, 1, 1, 0, 0, 0, -1, -1,
-1, -2, -2, -2, -3, -3, -3, -4, -4, -4, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5,
-4, -4, -3, -3, -2, -1, -1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 2,
2, 2, 1, 1, 0, -1, -1, -2, -2, -3, -3, -4, -4, -4, -5, -5, -5, -5, -5, -5, -5,
-4, -4, -4, -4, -3, -3, -3, -2, -2, -2, -1, -1, -1, 0, 0, 0, 1, 1, 1, 2, 2, 2,
2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, -1, -1, -1,
-1, -1, -1, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1,
-1, -1, -1, -1, -2, -2, -2, -2, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3,
-2, -2, -2, -1, -1, -1, 0, 0, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2,
1, 1, 1, 0, 0, 0, 0, -1, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0,
0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1,
-1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0,
0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1,
-1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1,
-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, -1, -1, 0, -1, 0,
-1, -1, 0, };

#endif /* CONGASIX_H_ */
