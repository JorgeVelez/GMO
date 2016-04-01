#ifndef DH_H_
#define DH_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define DH_NUM_CELLS 6081
#define DH_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) DH_DATA [] = {0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, -1, -1,
-1, -1, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 2, -1, 0, 1, 1, 1, 0, 1, 1,
0, 1, 1, 1, 1, 0, 0, 1, 1, 0, 1, 1, 2, 2, 4, 2, 0, 0, 0, 1, 0, -1, 0, 1, 0, 0,
0, 1, 0, 1, 0, 0, 0, 0, 0, 2, 3, 1, 5, 0, 2, 3, 4, 4, -1, 1, 2, 0, 0, -1, 0, 3,
2, 0, 3, 6, 0, 1, 0, 1, -2, -3, 2, 2, 3, 3, 3, 6, 4, 0, 2, 0, 3, 2, 0, 1, 1, 1,
-2, -1, 1, -1, 0, -1, -2, -1, 1, 1, -4, -1, 6, 1, 1, 1, -1, -1, 0, -1, -1, 0, 2,
2, 4, 8, 0, 0, -1, -2, 0, -3, -1, 0, -1, 2, -2, -1, 1, -3, -2, -3, -1, -3, -5,
1, -3, -1, -1, -5, -1, -1, -3, -2, -2, -6, -4, -7, -6, -3, -1, -1, -4, -2, -2,
-3, -4, -5, -4, -5, -6, -4, -3, -2, -2, -3, -2, -3, -1, -1, -1, -1, -2, 0, -2,
-1, 0, 0, 0, -1, 2, 1, 2, 3, 1, 0, 0, 1, 1, 1, 4, 5, 3, 3, 4, 6, 6, 6, 7, 8, 7,
7, 5, 7, 4, 6, 5, 0, 3, 2, 3, 3, 5, 2, 1, 0, 3, 2, 2, 2, 3, 3, -1, 3, 1, 0, 0,
1, 1, 2, 2, 2, 2, -2, -2, -4, -4, -3, -4, 0, -1, -1, -3, -6, -6, -7, -8, -8, -7,
-7, -6, -8, -7, -7, -8, -10, -14, -12, -13, -12, -12, -12, -12, -12, -13, -13,
-12, -13, -14, -12, -13, -15, -13, -15, -16, -17, -19, -19, -17, -16, -14, -10,
-8, -4, -4, -1, -2, 0, 4, 4, 12, 12, 10, 9, 11, 11, 7, 5, 8, 10, 8, 9, 9, 10, 8,
7, 5, 5, 8, 7, 6, 8, 12, 13, 10, 6, 9, 11, 10, 10, 10, 13, 14, 13, 11, 10, 8, 8,
8, 8, 10, 10, 9, 7, 5, 5, 5, 4, 4, 4, 5, 6, 6, 2, 0, -2, -2, -4, -4, -2, 1, 0,
-2, -3, -6, -8, -11, -10, -9, -7, -6, -9, -11, -11, -13, -18, -19, -16, -17,
-17, -16, -13, -11, -16, -19, -21, -20, -18, -19, -15, -10, -12, -12, -13, -14,
-15, -18, -16, -13, -10, -14, -12, -8, -8, -13, -8, -6, -10, -10, -9, -3, -1,
-3, -4, -1, 0, 1, -1, 1, 6, 8, 11, 14, 16, 20, 18, 16, 23, 23, 19, 13, 14, 19,
15, 11, 9, 10, 14, 13, 10, 13, 14, 12, 12, 13, 14, 12, 8, 11, 14, 17, 14, 12,
13, 9, 8, 4, 6, 7, 6, 8, 10, 11, 13, 13, 11, 10, 7, 5, 5, 6, 8, 8, 5, 4, 4, 2,
-1, 2, 3, 1, 1, 1, 2, 1, -1, -2, -4, -9, -12, -9, -5, -5, -10, -12, -11, -11,
-15, -13, -11, -13, -10, -9, -10, -11, -18, -18, -17, -19, -17, -11, -3, -4, -3,
-2, 0, -3, -4, -6, -5, 5, 10, 9, 11, 7, 7, 2, -5, -7, -6, -2, -2, 6, 14, 15, 10,
5, 2, 3, 3, 2, -1, 4, 9, 14, 13, 10, 8, 7, 11, 6, 4, 6, 10, 12, 9, 5, 9, 10, 5,
2, 3, 6, 4, -1, 3, 9, 10, 8, 4, 5, 6, 0, -9, -12, -4, -3, -6, -1, 7, 13, 10, 6,
7, 4, -3, -6, 0, 4, 5, 6, 7, 6, 2, -2, -3, -6, -13, -9, -3, -2, 1, 1, -1, 0, -8,
-13, -15, -18, -17, -15, -11, -6, -4, -7, -13, -15, -13, -18, -20, -25, -20, -9,
-13, -18, -19, -19, -23, -30, -39, -29, -15, -13, -11, -19, -11, -6, -9, -11,
-14, -5, -6, -6, -7, -2, 0, -11, -11, -2, 8, 9, 13, 26, 31, 29, 22, 25, 22, 17,
13, 10, 14, 13, 15, 15, 16, 13, 7, 5, 7, 12, 15, 18, 15, 16, 20, 17, 15, 13, 6,
4, 6, 11, 15, 11, 6, 8, 7, 3, -2, -4, -3, -5, -1, 2, 4, 3, -2, -3, -6, -2, -4,
-10, -2, -1, -4, -1, -1, -4, -11, -11, -12, -12, -12, -20, -21, -23, -18, -18,
-18, -18, -21, -10, -19, -20, -13, -17, -19, -36, -32, -31, -35, -29, -33, -28,
-24, -20, -22, -14, -14, -14, -8, -23, -18, -13, -16, -20, -20, -8, -18, -29,
-21, -4, 2, -3, -2, 5, 21, 15, 21, 35, 29, 29, 26, 30, 24, 18, 22, 17, 15, 9,
14, 22, 17, 13, 12, 19, 19, 22, 25, 27, 30, 30, 31, 27, 29, 23, 16, 13, 9, 15,
13, 7, 4, 7, 13, 8, 7, 9, 12, 7, 1, 3, 0, -1, -3, 0, -1, -6, -4, -2, 5, 2, -4,
-5, -12, -18, -18, -20, -24, -28, -32, -22, -20, -34, -43, -48, -43, -35, -34,
-37, -35, -40, -48, -41, -33, -37, -56, -67, -60, -49, -46, -56, -69, -56, -39,
-16, 4, 25, 47, 62, 65, 51, 48, 34, 21, 2, -27, -25, -9, 0, -9, -17, -14, -22,
-26, -25, -8, 5, 11, 28, 40, 59, 64, 64, 51, 30, 24, 29, 42, 40, 43, 50, 53, 59,
48, 36, 21, 4, -2, -2, 9, 18, 29, 35, 40, 47, 44, 38, 28, 25, 17, 11, 17, 22,
25, 22, 18, 14, 10, 8, 1, -6, -14, -18, -18, -19, -19, -24, -30, -39, -46, -46,
-48, -49, -51, -51, -50, -44, -32, -28, -35, -44, -45, -42, -40, -45, -47, -55,
-47, -24, 0, 16, 22, 43, 51, 51, 34, 21, 19, -7, -18, -22, -22, -18, -16, -10,
-20, -26, -32, -37, -32, -34, -23, -8, 11, 25, 38, 50, 38, 31, 27, 24, 19, 15,
20, 23, 38, 44, 42, 41, 27, 20, 13, 6, 5, 17, 35, 40, 53, 69, 78, 72, 55, 44,
36, 32, 21, 19, 26, 28, 31, 31, 30, 25, 20, 16, 10, 13, 20, 25, 21, 13, 6, -2,
-15, -33, -43, -46, -46, -39, -31, -25, -24, -25, -33, -48, -58, -57, -50, -45,
-36, -24, -7, -12, -32, -46, -57, -71, -89, -101, -91, -70, -26, 18, 48, 58, 41,
45, 37, 22, 0, -23, -23, -24, -12, 1, 9, 5, -20, -38, -51, -55, -49, -44, -27,
-13, 7, 26, 40, 49, 43, 34, 20, 18, 22, 30, 37, 38, 46, 43, 33, 22, 10, -4, -32,
-51, -46, -18, 13, 27, 43, 58, 74, 88, 98, 94, 75, 61, 59, 64, 62, 53, 43, 31,
16, 5, 4, 1, -10, -18, -17, -7, 6, 18, 25, 27, 28, 29, 33, 29, 16, 3, -11, -25,
-34, -40, -46, -53, -61, -58, -44, -22, -6, -8, -21, -38, -47, -52, -60, -63,
-68, -71, -69, -57, -49, -54, -59, -33, 27, 66, 52, 35, 59, 79, 54, 6, -21, -27,
-35, -42, -33, -13, -9, -19, -23, -35, -44, -42, -38, -42, -49, -32, -2, 26, 39,
44, 51, 48, 32, 21, 25, 27, 20, 21, 17, 17, 20, 14, -2, -30, -47, -54, -43, -30,
-21, -3, 17, 41, 55, 66, 66, 57, 53, 47, 43, 46, 53, 56, 43, 27, 22, 22, 11, -9,
-16, -10, 0, 11, 21, 25, 23, 24, 21, 16, 13, 9, 2, -6, -8, -9, -12, -24, -41,
-54, -59, -50, -32, -13, -7, -17, -24, -16, -10, -25, -59, -85, -93, -89, -81,
-77, -70, -63, -64, -72, -77, -86, -82, -29, 42, 81, 65, 68, 109, 124, 83, 4,
-28, -39, -58, -73, -71, -40, -34, -45, -52, -54, -35, -36, -43, -45, -33, -1,
27, 51, 62, 71, 74, 57, 34, 15, 11, 5, -3, -8, -9, 6, 15, 7, -14, -35, -45, -45,
-35, -32, -20, 5, 32, 53, 62, 73, 69, 57, 41, 25, 17, 9, 12, 21, 26, 27, 39, 62,
69, 61, 45, 34, 28, 22, 18, 10, 6, 1, -7, -5, -3, -2, -8, -13, -16, -19, -18,
-19, -22, -32, -36, -23, 0, 15, 10, -9, -23, -23, -24, -37, -62, -87, -103,
-108, -101, -94, -89, -78, -65, -59, -58, -54, -57, -66, -35, 36, 96, 93, 71,
92, 114, 92, 22, -30, -44, -59, -68, -69, -46, -27, -23, -24, -37, -37, -33,
-32, -33, -34, -17, 7, 38, 64, 76, 74, 54, 30, 11, -1, -11, -22, -28, -29, -22,
-9, 0, -2, -17, -32, -33, -24, -13, -6, 10, 28, 41, 52, 66, 73, 64, 47, 31, 21,
17, 13, 13, 15, 17, 29, 40, 43, 41, 41, 37, 22, 12, 12, 14, 6, -5, -4, 6, 15, 9,
-3, -15, -21, -24, -34, -51, -62, -60, -54, -43, -19, 10, 25, 16, -4, -13, -16,
-27, -62, -104, -124, -120, -105, -97, -90, -69, -46, -40, -45, -43, -44, -51,
-28, 30, 85, 95, 89, 107, 121, 99, 36, -13, -36, -51, -60, -66, -50, -30, -15,
-15, -25, -19, -17, -19, -21, -20, -6, 12, 37, 58, 71, 73, 60, 42, 24, 10, 1,
-8, -14, -19, -15, -3, 5, 6, -8, -21, -24, -21, -15, -7, 10, 25, 37, 49, 61, 69,
68, 58, 40, 24, 20, 25, 31, 26, 25, 37, 51, 58, 54, 46, 34, 28, 24, 17, 17, 11,
5, 0, 4, 10, 6, -1, -11, -15, -15, -19, -30, -42, -47, -45, -36, -20, -2, 12,
12, 5, 0, -4, -13, -37, -66, -88, -90, -84, -78, -69, -51, -35, -33, -34, -33,
-38, -56, -73, -51, 18, 92, 120, 108, 113, 125, 118, 70, 6, -32, -56, -73, -81,
-59, -25, -10, -11, -22, -20, -11, -5, -5, -13, -14, -4, 24, 57, 73, 72, 56, 37,
19, 6, 0, -7, -14, -23, -24, -9, 9, 15, 0, -20, -31, -25, -9, 3, 14, 24, 34, 46,
61, 70, 62, 42, 18, 2, -5, -9, 0, 15, 22, 25, 41, 67, 72, 61, 42, 30, 25, 14, 9,
5, 5, 2, -4, -4, -6, -5, -12, -23, -30, -34, -32, -30, -26, -27, -26, -9, 16,
33, 31, 14, 1, -2, -8, -27, -48, -62, -74, -82, -81, -66, -49, -44, -50, -50,
-41, -36, -41, -43, -49, -50, -9, 65, 122, 117, 94, 102, 112, 94, 33, -15, -40,
-56, -60, -60, -33, -6, 6, -9, -30, -17, -5, -4, -16, -23, -5, 19, 48, 65, 73,
67, 45, 26, 9, 1, -2, -8, -12, -16, -6, 10, 19, 14, -9, -27, -31, -22, -11, -3,
5, 13, 30, 48, 61, 59, 45, 28, 8, -7, -15, -14, -7, 3, 24, 46, 63, 71, 75, 71,
49, 27, 14, 8, 4, -2, -2, 1, 6, 7, -2, -16, -29, -35, -43, -51, -48, -35, -22,
-14, -1, 26, 52, 58, 40, 19, 10, 6, -3, -27, -51, -64, -60, -53, -51, -52, -54,
-57, -65, -68, -61, -50, -45, -42, -39, -35, -31, -29, -11, 41, 95, 111, 90, 85,
99, 98, 59, 0, -31, -43, -47, -49, -40, -17, -8, -17, -32, -29, -17, -19, -24,
-25, -18, -6, 14, 42, 56, 53, 37, 21, 12, 6, 5, 0, -5, -8, -8, -1, 3, 1, -16,
-34, -44, -44, -36, -28, -11, 9, 23, 32, 40, 46, 40, 26, 10, 4, 10, 16, 18, 17,
20, 26, 27, 27, 37, 48, 37, 16, 11, 19, 22, 17, 3, -11, -17, -8, -1, -9, -25,
-33, -33, -38, -42, -34, -22, -12, 0, 21, 51, 74, 73, 41, 10, -2, -9, -28, -52,
-62, -60, -54, -51, -45, -33, -27, -33, -48, -57, -54, -51, -52, -54, -46, -31,
-18, -7, -3, -12, -31, -11, 57, 113, 109, 83, 91, 101, 79, 33, -5, -29, -52,
-65, -63, -37, -12, -10, -28, -43, -33, -21, -22, -28, -30, -25, -15, 9, 35, 47,
43, 28, 11, -1, -1, 6, 6, -3, -16, -18, -8, 1, -9, -35, -57, -63, -52, -37, -25,
-13, -2, 11, 25, 39, 45, 46, 45, 40, 31, 26, 32, 38, 30, 11, -4, -4, -1, -6,
-13, -4, 12, 14, 7, 13, 27, 25, 6, -13, -14, -9, -5, -4, -7, -10, -13, -13, -19,
-23, -20, -14, 0, 20, 38, 41, 31, 21, 14, 5, -13, -35, -53, -57, -48, -37, -28,
-20, -11, -12, -24, -36, -41, -45, -52, -52, -46, -35, -18, 2, 14, 10, -1, -11,
-23, -21, 18, 71, 90, 70, 67, 87, 89, 58, 9, -25, -45, -54, -57, -50, -33, -22,
-27, -44, -49, -38, -34, -37, -40, -35, -22, -1, 22, 33, 33, 26, 14, 3, -3, -2,
-1, -5, -9, -11, -7, -5, -10, -22, -36, -42, -41, -31, -21, -13, -2, 11, 29, 48,
60, 63, 60, 56, 50, 40, 27, 17, 8, -7, -22, -27, -23, -14, -11, -14, -18, -11,
6, 24, 34, 30, 26, 28, 31, 25, 14, 7, 1, -10, -20, -22, -14, -15, -30, -40, -29,
-4, 14, 21, 29, 41, 51, 47, 37, 23, 3, -20, -39, -47, -48, -42, -37, -35, -31,
-26, -20, -17, -15, -17, -25, -29, -22, -7, 1, -2, -2, 2, 4, 1, -7, -22, -43,
-30, 23, 67, 63, 47, 63, 79, 60, 17, -14, -27, -44, -58, -59, -37, -14, -11,
-25, -42, -42, -40, -46, -53, -51, -39, -24, -3, 22, 38, 42, 37, 28, 19, 16, 23,
26, 16, -3, -11, -1, 5, -8, -36, -54, -55, -44, -32, -21, 1, 29, 48, 60, 69, 76,
77, 67, 45, 23, 10, 4, -2, -12, -20, -21, -18, -16, -15, -13, -8, -5, -9, -11,
1, 22, 35, 33, 34, 46, 50, 38, 20, 10, -3, -26, -46, -51, -47, -42, -33, -10,
23, 47, 50, 42, 41, 45, 39, 19, 1, -7, -11, -19, -28, -29, -22, -17, -22, -26,
-20, -9, -3, -4, -5, -3, 2, 6, 4, 0, -2, -4, -9, -15, -15, -15, -19, -33, -51,
-58, -38, 13, 61, 72, 60, 66, 86, 78, 36, -7, -30, -44, -61, -70, -56, -28, -19,
-32, -46, -43, -28, -26, -35, -36, -23, -4, 16, 37, 49, 51, 40, 23, 7, 0, 1, -3,
-12, -19, -15, -3, 4, -4, -20, -34, -38, -35, -24, -7, 10, 27, 41, 53, 63, 66,
59, 46, 29, 10, -3, -9, -9, -10, -16, -22, -22, -14, -9, -15, -22, -20, -11, -3,
0, 5, 12, 17, 16, 12, 10, 18, 27, 15, -5, -14, -10, -23, -41, -45, -37, -22, 0,
25, 34, 34, 37, 39, 32, 21, 15, 5, -7, -8, -2, 6, 13, 18, 11, -4, -10, -10, -13,
-20, -20, -11, -2, 10, 23, 30, 26, 13, -2, -13, -19, -26, -32, -35, -35, -34,
-33, -31, -36, -52, -57, -19, 42, 68, 54, 52, 78, 85, 51, 9, -13, -23, -41, -58,
-58, -38, -23, -31, -48, -55, -46, -41, -39, -34, -28, -21, -4, 26, 49, 51, 41,
29, 21, 15, 12, 11, 7, -2, -15, -21, -21, -21, -26, -33, -35, -30, -17, 4, 24,
37, 44, 50, 53, 50, 40, 31, 24, 14, 1, -9, -12, -9, -7, -15, -27, -26, -17, -15,
-21, -22, -13, -7, -9, -8, -3, 4, 7, 4, -2, -5, 0, 0, -9, -17, -12, -5, -9, -16,
-10, 9, 28, 41, 47, 47, 46, 45, 39, 27, 14, 4, -6, -10, -7, 0, 8, 16, 19, 12, 6,
6, 8, 2, -3, -4, 0, 4, 10, 15, 15, 11, 4, -4, -11, -16, -20, -25, -31, -37, -38,
-36, -34, -34, -41, -47, -47, -46, -53, -64, -49, 3, 48, 51, 37, 47, 70, 64, 26,
-14, -30, -37, -49, -59, -53, -29, -20, -30, -40, -35, -22, -22, -27, -30, -24,
-11, 9, 31, 43, 43, 33, 22, 12, 6, 4, -1, -8, -10, -4, 8, 16, 17, 7, -8, -15,
-12, -5, -5, -4, 0, 10, 20, 28, 30, 24, 18, 12, 2, -12, -21, -20, -19, -26, -31,
-23, -3, 9, 10, 5, 7, 11, 7, 0, -4, -3, -4, -6, -2, 9, 17, 14, 6, 2, 2, 1, -6,
-15, -15, -4, 12, 26, 39, 46, 45, 41, 38, 32, 21, 6, -7, -13, -13, -9, -3, 4, 8,
8, 5, 2, 2, 2, -2, -6, -6, 1, 10, 16, 15, 8, 2, -2, -7, -15, -23, -29, -33, -36,
-37, -35, -29, -26, -30, -33, -32, -28, -28, -33, -40, -41, -42, -45, -52, -52,
-39, -7, 31, 48, 42, 39, 51, 53, 29, -5, -24, -29, -34, -39, -33, -17, -2, -3,
-16, -25, -20, -15, -18, -21, -20, -12, -1, 15, 27, 31, 29, 26, 24, 22, 23, 25,
25, 18, 7, 3, 2, -3, -17, -34, -41, -36, -26, -20, -17, -8, 7, 17, 20, 22, 26,
29, 25, 16, 11, 12, 17, 14, 4, -2, 0, 2, -3, -8, -10, -11, -13, -12, -5, 2, 5,
4, 4, 10, 17, 19, 15, 9, 6, 1, -8, -14, -20, -23, -20, -7, 12, 29, 39, 42, 41,
40, 39, 33, 19, 2, -6, -6, -5, -3, 0, 2, 3, 1, -3, -6, -5, -4, -8, -10, -3, 11,
20, 21, 19, 16, 11, 6, 0, -7, -13, -18, -23, -24, -16, -5, -2, -5, -8, -8, -6,
-10, -17, -25, -28, -27, -28, -29, -29, -26, -27, -31, -34, -37, -38, -32, -24,
-7, 30, 69, 80, 70, 72, 78, 63, 29, -1, -15, -26, -38, -41, -30, -14, -13, -24,
-36, -34, -28, -31, -36, -32, -18, -4, 11, 28, 41, 45, 40, 31, 22, 17, 12, 3,
-10, -23, -26, -23, -23, -28, -35, -35, -32, -28, -23, -17, -4, 7, 13, 17, 27,
36, 37, 29, 19, 12, 6, -1, -9, -17, -21, -18, -12, -5, 1, 4, 4, 5, 4, 1, -1, -2,
-3, -6, -6, -4, 0, 4, 4, 2, 0, -4, -8, -14, -18, -16, -8, 4, 14, 21, 24, 24, 23,
21, 16, 8, 1, -3, -5, -4, -2, 0, 2, 3, 0, -3, -3, -4, -8, -10, -10, -5, 2, 11,
17, 18, 21, 25, 28, 27, 22, 16, 10, 4, -1, -6, -7, -7, -10, -15, -14, -7, -3,
-3, -5, -3, 2, 5, 2, -1, 0, 1, -3, -9, -11, -12, -18, -29, -40, -46, -47, -45,
-41, -37, -29, -8, 28, 58, 60, 48, 48, 51, 37, 13, -5, -16, -27, -38, -40, -33,
-25, -26, -30, -31, -24, -16, -12, -7, 0, 6, 11, 20, 29, 31, 29, 27, 23, 15, 11,
9, 3, -7, -18, -24, -26, -24, -25, -28, -27, -19, -6, 4, 11, 17, 25, 32, 32, 27,
21, 18, 15, 5, -5, -5, 0, 1, -4, -6, -3, 3, 4, 3, 4, 4, 5, 5, 3, 5, 8, 10, 10,
10, 11, 11, 10, 7, 0, -9, -12, -11, -11, -11, -10, -2, 10, 21, 28, 29, 27, 24,
20, 14, 8, 1, -7, -9, -6, 0, 1, -2, 0, 3, 1, -3, -6, -11, -15, -14, -8, -1, 7,
13, 15, 15, 16, 18, 14, 8, 5, 4, 2, 2, 4, 8, 8, 6, 4, 1, -1, -1, -3, -6, -6, -2,
2, 5, 6, 5, 3, 1, -1, -4, -8, -13, -17, -21, -22, -22, -23, -26, -29, -31, -32,
-30, -27, -25, -25, -23, -13, 15, 46, 55, 42, 37, 45, 41, 20, -1, -10, -13, -20,
-22, -14, -1, 1, -6, -16, -18, -11, -9, -13, -13, -7, 0, 10, 21, 25, 23, 20, 17,
10, 6, 6, 4, -2, -10, -10, -3, 3, 0, -10, -14, -13, -10, -8, -6, -2, 5, 11, 17,
24, 31, 31, 25, 18, 12, 9, 7, 4, -2, -7, -8, -3, 0, 2, 2, 3, 3, 4, 6, 8, 9, 6,
4, 3, 6, 7, 7, 5, 1, -2, -6, -7, -9, -10, -12, -10, -2, 10, 17, 17, 17, 19, 19,
14, 6, -2, -9, -13, -15, -13, -8, -2, 3, 0, -3, -1, 3, 3, -2, -4, -2, 4, 10, 13,
16, 15, 11, 7, 4, 3, 3, 2, 1, 1, 4, 10, 16, 16, 13, 10, 8, 6, 2, -2, -5, -7, -9,
-11, -10, -7, -6, -9, -12, -11, -10, -10, -11, -12, -12, -9, -7, -7, -9, -11,
-16, -23, -26, -26, -28, -31, -33, -33, -29, -12, 18, 37, 32, 24, 37, 46, 34,
16, 9, 8, -3, -11, -8, 1, 2, -7, -19, -28, -27, -26, -26, -25, -21, -13, -3, 11,
21, 24, 23, 17, 8, 2, 6, 9, 4, -3, -5, -2, -1, -3, -10, -17, -22, -24, -20, -12,
-5, 2, 11, 21, 29, 34, 36, 33, 26, 17, 10, 6, 5, 1, -4, -7, -4, 2, 6, 8, 9, 6,
5, 6, 8, 9, 7, 6, 5, 5, 7, 10, 11, 8, 3, -2, -5, -5, -5, -9, -11, -6, 4, 12, 15,
15, 13, 10, 5, 0, -5, -10, -15, -17, -17, -12, -8, -3, 0, -1, -1, 3, 7, 5, 2, 4,
7, 8, 10, 13, 13, 9, 4, 3, 1, -1, -1, -2, -6, -4, 2, 7, 8, 8, 9, 7, 3, 3, 4, 2,
-2, -3, -5, -5, -3, -1, -1, -4, -5, -6, -4, -3, -4, -7, -7, -5, -4, -5, -6, -7,
-9, -12, -14, -14, -16, -19, -23, -24, -25, -26, -29, -31, -30, -28, -27, -18,
7, 31, 33, 23, 31, 43, 35, 13, 1, -4, -13, -22, -21, -12, -7, -10, -15, -20,
-21, -19, -19, -20, -21, -19, -10, 4, 13, 13, 14, 18, 15, 8, 6, 9, 6, -3, -10,
-10, -5, -3, -9, -14, -14, -10, -8, -5, -2, 2, 5, 8, 11, 14, 15, 13, 9, 3, 0, 0,
0, -1, -3, -3, 0, 4, 8, 9, 8, 5, 4, 4, 2, 1, 1, -2, -6, -6, -2, -2, -5, -8, -10,
-13, -14, -16, -17, -17, -18, -15, -8, 2, 9, 11, 11, 12, 12, 9, 5, -2, -9, -13,
-13, -14, -14, -12, -9, -9, -11, -10, -5, -1, -2, -5, -4, 1, 5, 8, 9, 7, 5, 3,
3, 1, -1, -2, -3, -8, -9, -3, 3, 1, -1, 1, 3, 4, 4, 5, 5, 5, 4, 3, 3, 4, 3, -1,
-5, -7, -6, -6, -7, -8, -8, -7, -4, -2, 0, -1, -2, -3, -6, -9, -12, -15, -16,
-17, -17, -16, -16, -15, -15, -16, -17, -17, -18, -16, -14, -12, -12, -8, -2, 4,
12, 20, 23, 17, 14, 15, 12, 2, -6, -11, -15, -19, -16, -13, -13, -14, -14, -13,
-13, -12, -9, -7, -5, -3, 1, 7, 12, 11, 7, 3, 1, -2, -5, -5, -3, -3, -4, -4, 0,
3, 0, -4, -7, -7, -7, -3, 1, 3, 5, 10, 14, 17, 17, 14, 9, 6, 4, 1, -1, -1, 1, 0,
0, 2, 4, 5, 2, -2, -5, -6, -6, -8, -9, -8, -6, -4, -1, 2, 2, 1, 0, -2, -4, -6,
-6, -8, -10, -10, -4, 2, 3, 3, 3, 3, 3, 1, -2, -7, -9, -11, -12, -11, -6, -3,
-5, -7, -6, -4, -3, -3, -2, -1, 2, 6, 9, 11, 14, 12, 7, 5, 5, 4, 1, 1, 2, 1, 3,
7, 10, 8, 5, 4, 4, 4, 5, 5, 3, 3, 4, 5, 5, 5, 3, 1, -2, -3, -3, -3, -4, -4, -5,
-6, -5, -3, -2, -3, -4, -4, -6, -8, -10, -11, -13, -15, -13, -12, -10, -7, -5,
-6, -6, -3, -1, -1, -1, 1, 2, 4, 7, 7, 6, 6, 7, 6, 2, 0, 1, -1, -3, -4, -4, -5,
-5, -6, -8, -9, -7, -6, -4, -3, -2, -1, 2, 4, 3, 2, 2, 1, -1, -2, -3, -1, 0, 0,
1, 4, 6, 6, 6, 5, 5, 5, 5, 3, 3, 3, 3, 4, 4, 5, 4, 4, 6, 6, 5, 6, 7, 6, 5, 5, 5,
4, 4, 3, 2, 1, 0, -2, -3, -3, -4, -5, -3, -2, -2, -2, -1, 0, -2, -3, -3, -3, -3,
-3, -2, -3, -2, -1, -1, -2, -2, 0, -1, -3, -4, -4, -3, -1, 1, 1, 0, 2, 4, 5, 5,
6, 8, 7, 6, 7, 9, 8, 7, 7, 6, 5, 6, 7, 6, 6, 7, 7, 7, 6, 6, 6, 5, 4, 3, 4, 5, 5,
4, 4, 4, 4, 4, 3, 0, -1, -1, -2, -4, -4, -4, -3, -4, -4, -2, -1, -1, -2, -3, -3,
-3, -4, -5, -6, -6, -6, -5, -5, -5, -6, -6, -7, -7, -6, -5, -2, -1, 0, 3, 6, 7,
7, 6, 6, 4, 2, 1, 1, -1, -2, -2, -2, -2, -2, -2, -3, -2, -1, 0, 1, 1, 2, 3, 3,
3, 3, 3, 2, 0, 0, 2, 3, 2, 2, 3, 3, 2, 3, 4, 3, 2, 1, 2, 4, 4, 4, 4, 4, 5, 5, 6,
5, 4, 3, 2, 1, 1, 2, 4, 4, 4, 4, 5, 5, 5, 4, 2, 1, 1, 0, -2, -1, -1, 0, 0, 1, 2,
3, 3, 2, 2, 1, 2, 2, 1, 0, 1, 1, 1, 1, 2, 2, 2, 3, 5, 5, 3, 2, 4, 4, 3, 4, 7, 6,
6, 6, 7, 5, 5, 5, 2, 1, 3, 5, 5, 6, 8, 9, 8, 9, 8, 8, 7, 6, 6, 7, 9, 8, 6, 5, 4,
2, 1, 0, -1, -1, 1, 1, 2, 2, 3, 1, -1, -2, -3, -3, -4, -5, -3, -2, -2, -1, -2,
-3, -5, -6, -8, -9, -10, -11, -11, -9, -8, -7, -6, -4, -3, -3, 0, 4, 6, 6, 7, 8,
7, 7, 5, 3, 0, -2, -3, -3, -3, -4, -4, -5, -6, -6, -5, -3, -3, -4, -2, 0, 1, 1,
2, 2, 1, 0, 0, 1, 2, 2, 3, 3, 3, 3, 3, 2, 1, 1, 2, 2, 3, 5, 7, 6, 4, 5, 4, 3, 2,
2, 2, 3, 4, 4, 4, 5, 5, 4, 2, 1, 2, 2, 1, 0, 1, 2, 3, 2, 1, 0, 0, 0, -1, -2, -3,
-3, -3, -3, -3, -3, -2, -1, 0, 1, 2, 4, 6, 6, 4, 3, 4, 4, 3, 2, 4, 4, 3, 4, 3,
2, 1, -1, -2, -3, -2, 0, 0, 1, 1, 3, 3, 3, 3, 3, 3, 3, 4, 5, 5, 5, 4, 2, 3, 2,
1, 1, 0, 0, 0, 1, 0, -1, -1, -2, -4, -5, -5, -6, -7, -7, -7, -6, -6, -6, -7, -7,
-9, -11, -11, -11, -13, -13, -13, -12, -11, -9, -8, -5, 0, 4, 6, 5, 5, 4, 2, -2,
-5, -6, -7, -7, -6, -5, -2, -2, -3, -4, -5, -5, -6, -6, -5, -3, -1, 0, 1, 1, 0,
-2, -3, -4, -5, -5, -4, -3, -2, -1, 0, 0, -1, -2, -3, -4, -3, -3, -1, 1, 2, 2,
4, 4, 4, 3, 1, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 2, 3, 2, 1, 2, 1, 1, 1, 1, 2, 1, 1,
1, 1, 0, -1, -1, -1, -1, -1, 1, 3, 4, 5, 7, 9, 8, 7, 6, 5, 4, 3, 1, 0, 0, -1,
-1, -1, -1, -1, 0, 0, 0, 1, 1, 2, 1, 1, 2, 3, 3, 2, 1, 1, 1, 1, 0, 0, -1, -1,
-1, -1, -1, 0, 0, 0, 0, 0, 0, 0, -1, -2, -3, -4, -4, -4, -4, -5, -5, -6, -6, -6,
-6, -7, -8, -8, -7, -6, -7, -6, -4, -1, 0, 1, 1, 2, 2, 1, 0, -2, -3, -3, -3, -3,
-2, -2, -2, -2, -1, 1, 2, 1, 1, 3, 3, 3, 3, 3, 3, 2, 1, 0, 1, 1, 0, 0, 0, 1, 1,
1, 2, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 4, 4, 4, 3, 3, 3, 3, 3, 3, 3, 3, 4, 5, 4, 4,
4, 3, 3, 3, 3, 2, 2, 1, 1, 2, 2, 3, 3, 2, 2, 2, 3, 3, 2, 2, 2, 3, 4, 5, 6, 5, 5,
4, 4, 4, 4, 2, 1, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0,
-1, -2, -3, -2, -2, -3, -3, -3, -2, -2, -2, -3, -3, -3, -4, -4, -3, -3, -3, -3,
-4, -3, -3, -3, -3, -3, -4, -3, -3, -4, -4, -5, -5, -6, -6, -6, -6, -5, -5, -4,
-2, 0, 1, 0, 0, -1, -1, -2, -3, -3, -2, -3, -2, -2, -2, -2, -3, -3, -3, -3, -2,
-1, -1, -1, -1, 1, 0, -1, -2, -3, -3, -3, -2, -2, -2, -2, -1, 0, 0, 0, -1, -1,
-1, -2, -1, -1, -1, -1, -1, 0, 0, 0, -1, -1, -2, -2, -1, -1, -1, -1, 0, 0, -1,
0, 0, 0, 0, 0, 1, 1, 2, 2, 2, 1, 1, 1, 1, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1,
1, 2, 1, 1, 1, 1, 1, 0, -1, -2, -2, -2, -2, -2, -2, -3, -3, -3, -3, -4, -4, -5,
-5, -5, -5, -5, -5, -6, -6, -5, -4, -4, -4, -4, -5, -4, -5, -5, -5, -5, -6, -5,
-5, -4, -4, -4, -4, -5, -5, -6, -6, -6, -6, -6, -6, -5, -5, -5, -5, -5, -5, -5,
-5, -4, -4, -4, -4, -3, -2, -2, -1, -1, -1, -2, -2, -2, -3, -3, -3, -2, -3, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, 0, 0, 0, -1, -2, -2, -2, -2, -2, -2,
-1, -2, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0,
0, 1, 1, 1, 1, 1, 1, 1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -2, -1, -1, -1, -1, -1, -1, -1, -1, -2, -3, -3, -3, -3, -2, -2, -2, -2, -2,
-2, -2, -2, -3, -3, -3, -4, -4, -4, -3, -3, -3, -3, -4, -4, -4, -3, -4, -3, -3,
-3, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1, -2, -2, -1, 0,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1,
-1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -2, -2, -2,
-3, -2, -2, -2, -2, -2, -2, -2, -3, -3, -3, -3, -3, -3, -3, -2, -2, -2, -2, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1,
1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2,
2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0,
0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, -1, 0,
-1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0,
0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1,
-1, -1, -1, -1, -1, -1, 0, 0, -1, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1,
0, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1,
0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, -1, 0, -1, 0, -1, -1,
-1, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0, -1, -1, -1, -1, 0, -1, -1, -1, 0, -1,
0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, };

#endif /* DH_H_ */
