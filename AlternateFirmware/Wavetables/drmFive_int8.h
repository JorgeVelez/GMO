#ifndef DRMFIVE_H_
#define DRMFIVE_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define DRMFIVE_NUM_CELLS 9939
#define DRMFIVE_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) DRMFIVE_DATA [] = {0, -1,
-1, -1, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -2, -1, -2, -1, -2, 0,
-1, 1, -1, 1, -1, 2, -1, 2, -5, -7, 56, 87, 87, 73, 44, 11, -27, -58, -83, -92,
-90, -71, -45, -10, 22, 51, 71, 82, 81, 69, 47, 16, -20, -57, -88, -111, -121,
-117, -101, -75, -42, -9, 21, 45, 60, 65, 61, 46, 25, -1, -26, -48, -62, -66,
-60, -45, -22, 4, 32, 57, 77, 89, 93, 87, 74, 54, 31, 9, -10, -23, -30, -29,
-23, -12, 1, 16, 29, 39, 45, 43, 36, 22, 5, -13, -28, -40, -48, -51, -51, -48,
-43, -36, -29, -22, -15, -10, -9, -11, -16, -21, -24, -25, -23, -18, -11, -4, 1,
5, 7, 8, 10, 11, 11, 11, 10, 10, 11, 14, 20, 29, 39, 47, 51, 51, 45, 36, 25, 12,
0, -11, -20, -26, -27, -24, -17, -6, 7, 20, 30, 34, 31, 21, 6, -13, -34, -53,
-70, -82, -86, -82, -71, -53, -30, -6, 17, 35, 46, 49, 43, 30, 10, -12, -34,
-52, -64, -67, -60, -43, -18, 12, 41, 68, 88, 99, 100, 92, 74, 48, 18, -12, -39,
-59, -68, -65, -51, -28, 0, 29, 54, 72, 80, 79, 68, 47, 18, -15, -50, -80, -102,
-113, -111, -96, -71, -41, -9, 19, 41, 55, 58, 52, 37, 14, -14, -42, -67, -85,
-91, -86, -69, -42, -11, 22, 51, 74, 89, 94, 89, 75, 54, 27, 0, -25, -43, -52,
-52, -41, -23, 0, 24, 45, 62, 72, 73, 66, 50, 29, 4, -21, -43, -60, -70, -72,
-66, -54, -39, -21, -4, 10, 20, 23, 19, 10, -4, -18, -33, -44, -51, -54, -51,
-44, -34, -21, -7, 8, 20, 30, 35, 35, 31, 25, 18, 12, 8, 6, 6, 7, 9, 11, 14, 17,
19, 22, 23, 22, 19, 15, 10, 7, 5, 5, 6, 7, 6, 3, -2, -8, -16, -22, -29, -34,
-38, -40, -40, -38, -32, -24, -14, -4, 4, 9, 8, 4, -4, -14, -24, -33, -40, -43,
-42, -36, -25, -10, 8, 26, 43, 56, 63, 63, 56, 43, 26, 8, -10, -26, -35, -38,
-34, -22, -6, 14, 34, 52, 64, 69, 66, 54, 36, 12, -15, -41, -63, -78, -84, -80,
-67, -47, -23, 1, 23, 38, 47, 46, 37, 21, -2, -27, -53, -74, -88, -91, -84, -66,
-41, -11, 19, 45, 65, 77, 80, 74, 59, 37, 11, -15, -38, -54, -60, -55, -41, -19,
8, 34, 57, 74, 83, 83, 74, 57, 34, 6, -22, -47, -65, -75, -74, -65, -47, -26,
-3, 17, 33, 42, 43, 36, 22, 3, -19, -41, -60, -73, -79, -77, -66, -50, -29, -7,
13, 30, 42, 47, 45, 37, 25, 10, -5, -17, -26, -30, -28, -21, -11, 2, 16, 30, 41,
48, 50, 47, 39, 29, 17, 5, -5, -12, -17, -19, -19, -17, -14, -9, -4, 0, 2, 2,
-1, -6, -11, -16, -20, -23, -24, -24, -24, -24, -25, -25, -25, -24, -22, -21,
-19, -17, -14, -10, -5, 1, 8, 15, 21, 23, 23, 20, 14, 7, 1, -5, -8, -10, -9, -5,
1, 10, 21, 31, 40, 45, 46, 41, 32, 18, 2, -14, -28, -40, -47, -49, -45, -35,
-22, -7, 8, 20, 29, 31, 27, 17, 1, -17, -37, -55, -68, -75, -74, -66, -50, -29,
-6, 16, 36, 49, 56, 55, 47, 32, 13, -8, -29, -45, -54, -54, -46, -29, -7, 17,
41, 60, 73, 79, 76, 65, 47, 24, -2, -27, -48, -62, -67, -62, -48, -29, -6, 16,
35, 47, 53, 50, 40, 22, 0, -25, -49, -69, -82, -86, -81, -67, -46, -22, 2, 23,
39, 48, 49, 44, 31, 14, -5, -25, -40, -51, -53, -48, -36, -18, 2, 23, 41, 56,
63, 64, 59, 47, 31, 14, -4, -19, -30, -36, -36, -30, -20, -7, 6, 18, 28, 32, 32,
26, 17, 4, -10, -23, -33, -41, -46, -46, -43, -37, -29, -20, -11, -3, 3, 6, 5,
2, -2, -7, -10, -13, -14, -14, -13, -11, -8, -4, 0, 4, 8, 12, 14, 15, 16, 16,
17, 18, 19, 21, 21, 19, 16, 11, 6, 0, -5, -8, -11, -13, -12, -11, -7, -3, 3, 8,
13, 14, 12, 6, -3, -13, -24, -35, -43, -48, -50, -47, -40, -29, -17, -3, 11, 21,
28, 30, 26, 18, 6, -8, -22, -33, -40, -42, -38, -28, -13, 4, 23, 40, 53, 61, 62,
57, 45, 29, 9, -11, -29, -42, -48, -47, -39, -25, -7, 12, 30, 43, 51, 52, 45,
32, 13, -9, -32, -53, -69, -77, -76, -67, -51, -31, -8, 13, 30, 41, 45, 42, 32,
16, -3, -24, -43, -57, -64, -63, -53, -36, -14, 9, 31, 49, 61, 66, 64, 55, 40,
21, 0, -19, -35, -44, -46, -40, -28, -12, 7, 24, 39, 48, 52, 48, 39, 24, 7, -13,
-31, -45, -55, -58, -55, -47, -34, -20, -5, 9, 18, 23, 23, 18, 9, -3, -15, -26,
-35, -41, -42, -39, -32, -22, -10, 3, 14, 23, 29, 31, 29, 24, 18, 11, 4, -1, -5,
-7, -7, -6, -3, 1, 6, 10, 14, 16, 16, 15, 12, 8, 5, 2, -1, -3, -6, -9, -12, -16,
-18, -20, -22, -22, -22, -21, -19, -17, -14, -10, -5, -1, 2, 3, 1, -2, -8, -14,
-19, -23, -26, -26, -23, -18, -10, -1, 10, 20, 29, 36, 38, 37, 31, 21, 10, -2,
-13, -22, -27, -27, -23, -14, -3, 10, 23, 34, 41, 43, 40, 31, 17, 1, -17, -34,
-47, -56, -58, -54, -44, -29, -12, 5, 19, 30, 35, 34, 27, 14, -2, -20, -38, -52,
-61, -62, -56, -43, -25, -4, 17, 35, 49, 56, 57, 51, 39, 23, 3, -16, -32, -43,
-47, -43, -33, -16, 3, 22, 39, 52, 58, 58, 51, 38, 20, 0, -21, -39, -52, -59,
-58, -50, -36, -19, -1, 15, 27, 34, 36, 31, 20, 6, -11, -28, -43, -53, -58, -56,
-49, -36, -20, -3, 14, 27, 36, 40, 38, 32, 22, 9, -3, -15, -23, -28, -28, -23,
-15, -4, 8, 19, 29, 36, 38, 36, 31, 22, 12, 2, -7, -15, -20, -23, -23, -21, -16,
-11, -5, 0, 4, 6, 6, 3, -1, -5, -10, -13, -17, -19, -21, -22, -22, -21, -19,
-16, -13, -9, -6, -3, -1, 2, 4, 7, 9, 11, 12, 11, 9, 6, 2, -2, -5, -7, -7, -6,
-4, 0, 5, 11, 17, 23, 27, 28, 26, 21, 13, 3, -8, -18, -26, -31, -33, -32, -27,
-19, -9, 1, 11, 18, 22, 21, 17, 8, -4, -17, -30, -41, -48, -50, -47, -39, -27,
-12, 5, 19, 32, 39, 42, 38, 30, 17, 2, -13, -27, -37, -41, -39, -31, -18, -1,
16, 32, 45, 53, 55, 51, 41, 26, 8, -11, -29, -43, -50, -51, -45, -33, -18, 0,
16, 29, 38, 41, 37, 28, 13, -4, -23, -40, -54, -61, -62, -56, -44, -27, -9, 9,
24, 35, 41, 40, 34, 23, 9, -7, -22, -34, -41, -43, -38, -28, -13, 3, 19, 33, 43,
48, 48, 42, 32, 19, 4, -10, -22, -30, -34, -33, -28, -19, -7, 4, 15, 22, 26, 26,
22, 14, 4, -7, -18, -27, -34, -37, -38, -34, -29, -21, -12, -3, 4, 9, 12, 11, 9,
5, 0, -5, -9, -12, -14, -14, -13, -11, -7, -2, 3, 7, 11, 14, 15, 15, 15, 14, 13,
12, 10, 8, 5, 2, -2, -5, -7, -9, -9, -9, -7, -5, -3, 0, 3, 6, 8, 8, 7, 4, -2,
-9, -16, -23, -28, -31, -32, -30, -26, -19, -11, -2, 7, 15, 20, 22, 20, 15, 7,
-3, -12, -21, -27, -30, -28, -23, -14, -2, 11, 23, 34, 41, 43, 41, 34, 24, 10,
-5, -18, -29, -36, -38, -34, -25, -13, 2, 15, 27, 35, 38, 36, 29, 17, 1, -15,
-32, -45, -54, -56, -52, -43, -28, -12, 5, 20, 31, 37, 37, 32, 22, 8, -8, -24,
-37, -45, -48, -44, -34, -20, -3, 15, 30, 42, 49, 51, 46, 37, 23, 7, -9, -23,
-34, -39, -38, -31, -20, -6, 9, 22, 33, 39, 40, 36, 27, 15, 0, -15, -29, -39,
-45, -46, -41, -33, -21, -8, 4, 14, 21, 24, 23, 18, 9, -1, -11, -21, -28, -32,
-33, -30, -23, -14, -4, 7, 16, 23, 27, 27, 25, 20, 14, 7, 0, -5, -10, -12, -12,
-10, -7, -2, 3, 8, 12, 14, 15, 14, 11, 8, 4, 1, -3, -7, -10, -13, -15, -17, -17,
-16, -15, -13, -10, -8, -6, -4, -2, 0, 2, 3, 2, 1, -2, -6, -10, -14, -16, -18,
-17, -15, -11, -6, 1, 8, 15, 20, 25, 26, 25, 21, 14, 6, -3, -11, -17, -20, -21,
-18, -12, -5, 5, 14, 22, 28, 30, 29, 23, 14, 3, -10, -22, -32, -39, -42, -40,
-33, -23, -11, 2, 14, 23, 28, 29, 25, 16, 5, -9, -22, -34, -42, -45, -43, -35,
-23, -8, 8, 23, 34, 42, 44, 41, 33, 21, 7, -8, -22, -33, -38, -37, -31, -20, -6,
9, 24, 35, 42, 45, 41, 33, 21, 5, -11, -26, -38, -45, -47, -43, -33, -21, -6, 8,
20, 28, 32, 30, 24, 14, 1, -13, -26, -36, -43, -44, -41, -32, -20, -7, 7, 19,
29, 34, 34, 31, 24, 14, 3, -8, -17, -23, -26, -24, -19, -11, -1, 9, 18, 26, 30,
31, 28, 22, 15, 6, -3, -11, -17, -21, -23, -22, -18, -13, -7, 0, 5, 9, 10, 10,
7, 4, -1, -5, -10, -13, -16, -18, -19, -18, -16, -12, -9, -4, 0, 3, 6, 7, 9, 9,
9, 9, 8, 6, 4, 1, -2, -4, -6, -6, -6, -4, -1, 2, 6, 10, 14, 17, 19, 19, 17, 13,
7, 0, -7, -14, -19, -22, -23, -21, -17, -11, -4, 3, 10, 15, 18, 18, 15, 8, 0,
-10, -19, -27, -33, -35, -33, -27, -18, -7, 5, 16, 25, 31, 33, 31, 25, 16, 4,
-8, -18, -27, -31, -30, -25, -16, -4, 10, 22, 33, 40, 42, 40, 33, 22, 9, -6,
-20, -31, -38, -40, -36, -28, -16, -2, 11, 23, 31, 34, 33, 27, 17, 4, -11, -25,
-37, -44, -46, -43, -35, -23, -8, 7, 20, 30, 35, 36, 33, 25, 13, 0, -12, -24,
-31, -34, -32, -26, -15, -3, 11, 23, 33, 38, 40, 37, 30, 20, 8, -5, -16, -24,
-29, -30, -26, -19, -10, 0, 10, 18, 23, 25, 23, 18, 11, 1, -8, -17, -24, -29,
-30, -29, -24, -17, -9, -1, 6, 12, 15, 16, 15, 11, 7, 1, -4, -8, -11, -13, -13,
-12, -9, -4, 1, 6, 10, 14, 16, 16, 16, 14, 12, 10, 7, 3, 0, -3, -5, -7, -8, -8,
-7, -5, -3, 0, 2, 4, 6, 8, 8, 8, 6, 3, -2, -7, -12, -17, -20, -21, -21, -19,
-15, -9, -3, 3, 9, 14, 17, 18, 16, 12, 6, -2, -9, -16, -20, -22, -20, -16, -9,
-1, 9, 18, 26, 31, 33, 31, 26, 17, 7, -4, -14, -23, -28, -29, -26, -19, -10, 1,
12, 21, 28, 31, 30, 25, 16, 4, -9, -21, -32, -39, -41, -39, -31, -21, -8, 5, 17,
27, 32, 33, 29, 22, 11, -2, -15, -26, -34, -37, -35, -28, -17, -4, 10, 23, 33,
40, 42, 39, 32, 21, 8, -5, -18, -27, -32, -32, -28, -19, -8, 5, 16, 26, 32, 34,
32, 26, 16, 5, -8, -20, -29, -35, -36, -34, -27, -17, -6, 5, 14, 21, 25, 25, 21,
15, 6, -3, -12, -20, -25, -27, -25, -20, -13, -4, 5, 14, 21, 25, 26, 25, 21, 15,
8, 2, -5, -9, -12, -13, -12, -9, -5, 1, 6, 11, 14, 16, 16, 14, 11, 7, 3, -1, -5,
-9, -12, -14, -14, -14, -12, -9, -6, -3, 0, 3, 4, 6, 6, 6, 5, 4, 1, -2, -5, -8,
-11, -12, -12, -10, -7, -4, 1, 6, 10, 15, 18, 20, 20, 18, 15, 9, 3, -4, -9, -13,
-15, -15, -12, -7, -1, 7, 13, 19, 23, 25, 23, 18, 11, 2, -7, -16, -24, -28, -30,
-27, -22, -14, -4, 6, 15, 22, 26, 26, 22, 16, 6, -5, -15, -24, -30, -33, -31,
-25, -15, -4, 9, 20, 29, 35, 37, 34, 28, 18, 6, -6, -17, -26, -30, -30, -25,
-16, -5, 7, 19, 29, 35, 37, 35, 29, 19, 6, -7, -19, -29, -35, -37, -34, -26,
-16, -3, 9, 19, 26, 30, 29, 25, 16, 6, -6, -17, -27, -33, -35, -32, -26, -16,
-5, 7, 18, 26, 31, 32, 29, 23, 15, 5, -5, -14, -20, -23, -22, -19, -12, -3, 6,
15, 22, 26, 28, 26, 22, 15, 7, -1, -9, -15, -19, -21, -20, -16, -11, -5, 1, 7,
11, 14, 14, 12, 9, 4, 0, -5, -10, -13, -15, -16, -15, -13, -9, -5, 0, 4, 7, 10,
11, 12, 11, 10, 8, 6, 3, 0, -3, -5, -6, -7, -6, -4, -1, 2, 5, 8, 11, 14, 15, 15,
14, 12, 8, 3, -3, -8, -12, -15, -17, -16, -13, -9, -4, 1, 7, 12, 15, 16, 15, 12,
7, 0, -8, -15, -20, -24, -24, -22, -17, -10, -1, 8, 16, 22, 26, 27, 25, 19, 11,
2, -7, -16, -22, -24, -23, -19, -11, -1, 9, 19, 27, 32, 34, 32, 26, 17, 6, -6,
-17, -25, -30, -31, -28, -21, -11, 0, 11, 21, 28, 30, 29, 24, 16, 5, -7, -18,
-28, -34, -36, -33, -26, -16, -4, 8, 19, 27, 32, 33, 29, 22, 13, 2, -9, -19,
-26, -29, -27, -22, -13, -2, 9, 20, 28, 33, 34, 32, 26, 17, 7, -4, -14, -21,
-25, -26, -23, -17, -8, 1, 10, 17, 22, 25, 23, 19, 13, 5, -4, -12, -19, -23,
-25, -23, -19, -13, -6, 2, 9, 15, 18, 19, 18, 14, 10, 4, -1, -6, -10, -13, -13,
-12, -8, -4, 1, 6, 11, 15, 17, 17, 16, 14, 12, 8, 4, 0, -3, -6, -8, -8, -8, -6,
-4, -1, 2, 5, 7, 9, 10, 10, 9, 7, 5, 1, -3, -7, -11, -13, -15, -15, -13, -10,
-6, -1, 3, 8, 12, 15, 16, 15, 13, 8, 3, -3, -9, -13, -16, -16, -14, -10, -4, 3,
11, 17, 22, 25, 26, 23, 18, 11, 3, -6, -14, -19, -22, -22, -19, -13, -5, 4, 13,
20, 25, 26, 25, 20, 12, 2, -8, -18, -25, -30, -31, -28, -22, -13, -2, 9, 18, 25,
29, 29, 25, 18, 9, -2, -13, -21, -27, -30, -27, -22, -12, -1, 10, 21, 29, 34,
35, 32, 25, 16, 5, -6, -16, -24, -28, -28, -23, -16, -6, 5, 15, 23, 29, 30, 28,
23, 14, 4, -6, -16, -24, -29, -30, -28, -21, -13, -3, 7, 15, 21, 24, 24, 21, 15,
7, -2, -10, -17, -22, -23, -22, -18, -11, -3, 5, 13, 19, 23, 24, 23, 19, 13, 7,
0, -6, -11, -14, -15, -13, -10, -5, 0, 6, 11, 14, 16, 16, 15, 12, 8, 3, -2, -6,
-10, -12, -14, -13, -12, -9, -5, -1, 2, 5, 8, 9, 9, 9, 7, 5, 2, -1, -4, -7, -9,
-10, -10, -9, -6, -3, 1, 5, 9, 12, 15, 16, 16, 15, 12, 8, 3, -2, -7, -10, -12,
-12, -11, -7, -2, 3, 9, 14, 17, 20, 20, 17, 13, 6, -1, -8, -15, -20, -22, -22,
-19, -13, -6, 2, 9, 16, 21, 23, 22, 18, 12, 4, -5, -14, -20, -24, -25, -23, -17,
-9, 1, 11, 19, 26, 30, 30, 27, 21, 12, 2, -8, -16, -23, -25, -24, -20, -12, -2,
8, 18, 25, 30, 31, 29, 23, 14, 4, -7, -17, -25, -29, -30, -26, -19, -10, 1, 11,
19, 25, 28, 27, 22, 15, 6, -5, -14, -22, -27, -28, -26, -20, -11, -1, 9, 18, 25,
28, 29, 26, 20, 12, 3, -5, -13, -19, -21, -20, -17, -10, -2, 6, 14, 20, 24, 25,
24, 19, 13, 6, -2, -9, -15, -18, -19, -18, -14, -9, -3, 4, 9, 14, 16, 16, 14,
11, 6, 1, -4, -9, -12, -14, -15, -14, -11, -7, -2, 3, 7, 11, 13, 14, 13, 12, 9,
6, 3, 0, -3, -6, -7, -8, -7, -5, -2, 1, 5, 8, 10, 12, 13, 14, 12, 10, 7, 3, -2,
-6, -9, -12, -13, -13, -11, -7, -3, 1, 6, 10, 13, 14, 14, 12, 8, 3, -3, -9, -14,
-17, -19, -18, -15, -10, -3, 4, 10, 16, 20, 22, 22, 18, 13, 6, -2, -9, -15, -19,
-20, -18, -13, -6, 2, 10, 18, 24, 27, 27, 24, 19, 11, 1, -8, -17, -23, -26, -25,
-21, -15, -6, 4, 13, 20, 25, 26, 25, 19, 12, 2, -8, -17, -24, -29, -29, -26,
-19, -10, 0, 10, 19, 25, 28, 28, 24, 18, 9, -1, -11, -18, -24, -25, -24, -18,
-10, -1, 9, 18, 25, 29, 29, 26, 21, 13, 3, -6, -14, -20, -24, -24, -20, -14, -6,
2, 10, 17, 21, 23, 22, 18, 11, 4, -4, -11, -17, -21, -22, -21, -16, -10, -3, 4,
11, 16, 18, 19, 17, 14, 9, 3, -3, -8, -12, -14, -14, -12, -9, -4, 1, 7, 11, 15,
16, 17, 15, 13, 9, 5, 1, -3, -7, -9, -10, -10, -8, -6, -2, 1, 5, 8, 10, 11, 11,
10, 8, 5, 2, -2, -6, -9, -11, -12, -12, -11, -8, -4, 0, 4, 8, 11, 13, 14, 13,
11, 8, 3, -1, -6, -10, -12, -13, -12, -9, -5, 1, 6, 12, 17, 20, 21, 20, 17, 11,
5, -2, -9, -14, -17, -18, -17, -13, -7, 0, 7, 14, 19, 22, 22, 20, 15, 8, -1, -9,
-16, -22, -24, -24, -20, -14, -6, 3, 12, 19, 24, 26, 25, 20, 14, 5, -4, -13,
-20, -24, -24, -22, -16, -7, 2, 12, 20, 26, 29, 29, 26, 19, 11, 1, -8, -17, -22,
-25, -23, -19, -12, -3, 7, 15, 22, 26, 27, 24, 19, 11, 2, -7, -16, -22, -25,
-26, -22, -16, -8, 1, 9, 16, 21, 23, 23, 19, 13, 6, -2, -10, -16, -20, -21, -19,
-15, -9, -1, 7, 13, 19, 22, 22, 20, 16, 11, 4, -2, -8, -12, -15, -15, -14, -10,
-5, 1, 7, 11, 15, 16, 16, 14, 11, 6, 1, -4, -8, -11, -13, -14, -13, -10, -6, -2,
2, 6, 9, 10, 11, 10, 9, 6, 3, 0, -3, -7, -9, -10, -10, -9, -6, -3, 0, 4, 7, 10,
12, 13, 13, 12, 10, 6, 2, -2, -6, -9, -11, -11, -10, -7, -3, 1, 6, 10, 13, 15,
16, 14, 11, 7, 1, -5, -10, -15, -17, -18, -16, -12, -7, -1, 5, 11, 15, 18, 18,
16, 12, 6, -1, -8, -14, -19, -21, -20, -17, -11, -4, 4, 12, 18, 22, 24, 23, 20,
13, 6, -3, -10, -17, -21, -22, -20, -15, -8, 1, 9, 17, 22, 25, 25, 22, 16, 8,
-1, -10, -17, -23, -25, -24, -20, -14, -5, 4, 12, 19, 23, 24, 22, 18, 11, 2, -6,
-14, -20, -24, -24, -21, -15, -7, 1, 10, 17, 22, 25, 24, 21, 15, 8, 0, -8, -14,
-18, -20, -19, -15, -8, -1, 6, 13, 18, 21, 22, 20, 16, 10, 3, -4, -10, -15, -18,
-18, -16, -12, -7, -1, 5, 11, 14, 16, 16, 13, 10, 5, 0, -5, -9, -13, -14, -14,
-12, -9, -4, 0, 5, 9, 12, 13, 14, 12, 10, 7, 3, 0, -4, -7, -8, -9, -8, -6, -4,
0, 3, 7, 9, 11, 12, 12, 11, 9, 6, 2, -1, -5, -8, -10, -11, -10, -8, -6, -2, 2,
5, 9, 11, 12, 12, 11, 8, 4, -1, -5, -9, -13, -14, -14, -12, -8, -4, 2, 7, 12,
15, 17, 18, 16, 12, 7, 1, -5, -11, -14, -16, -15, -13, -8, -2, 5, 11, 17, 20,
21, 20, 17, 11, 4, -3, -10, -16, -20, -21, -19, -15, -8, -1, 7, 13, 18, 21, 21,
19, 14, 7, -1, -9, -16, -21, -23, -22, -19, -12, -5, 4, 12, 18, 22, 24, 22, 18,
12, 4, -4, -12, -17, -21, -21, -19, -14, -6, 2, 10, 17, 21, 24, 23, 20, 15, 8,
0, -8, -15, -19, -21, -20, -16, -10, -3, 4, 11, 16, 19, 20, 18, 14, 8, 2, -5,
-12, -16, -19, -19, -17, -13, -7, -1, 6, 11, 15, 17, 17, 15, 11, 6, 1, -5, -9,
-12, -14, -14, -11, -8, -3, 2, 7, 11, 14, 15, 14, 13, 9, 6, 1, -3, -7, -9, -11,
-11, -10, -7, -4, 0, 3, 6, 9, 10, 10, 9, 8, 5, 2, -2, -5, -8, -10, -11, -11,
-10, -7, -4, 0, 3, 6, 9, 10, 11, 10, 9, 6, 2, -2, -5, -8, -11, -11, -10, -8, -5,
-1, 3, 8, 11, 14, 15, 15, 13, 9, 4, -1, -6, -10, -14, -15, -14, -12, -7, -2, 3,
9, 13, 16, 17, 16, 13, 8, 2, -5, -11, -15, -18, -19, -17, -13, -8, -1, 6, 12,
17, 19, 20, 17, 13, 7, 0, -7, -13, -18, -20, -19, -16, -10, -3, 4, 12, 17, 21,
23, 21, 18, 12, 4, -3, -10, -16, -20, -20, -18, -14, -7, 0, 8, 14, 19, 21, 21,
18, 13, 6, -1, -9, -15, -19, -21, -20, -17, -11, -4, 3, 10, 15, 19, 20, 18, 15,
9, 2, -4, -10, -15, -18, -18, -16, -11, -6, 1, 7, 13, 17, 19, 18, 16, 12, 7, 1,
-5, -10, -13, -15, -14, -12, -8, -3, 2, 7, 11, 14, 15, 14, 12, 8, 4, -1, -5, -9,
-12, -13, -12, -10, -7, -3, 1, 5, 8, 10, 11, 11, 9, 7, 4, 1, -3, -6, -8, -9,
-10, -9, -7, -4, 0, 3, 6, 9, 11, 11, 11, 10, 7, 5, 1, -2, -6, -8, -9, -9, -8,
-6, -3, 1, 4, 8, 10, 12, 12, 11, 9, 6, 1, -3, -7, -11, -13, -14, -13, -10, -6,
-2, 3, 8, 11, 14, 14, 13, 11, 6, 1, -4, -9, -13, -16, -16, -14, -10, -5, 1, 7,
12, 16, 18, 18, 16, 12, 7, 0, -6, -12, -16, -18, -17, -14, -9, -3, 4, 10, 15,
19, 20, 18, 15, 10, 3, -4, -11, -16, -19, -20, -18, -14, -8, -1, 6, 12, 17, 19,
19, 17, 12, 6, -1, -8, -14, -18, -20, -19, -16, -10, -3, 4, 10, 16, 19, 20, 19,
15, 10, 3, -4, -10, -14, -17, -18, -16, -11, -6, 1, 7, 12, 16, 18, 17, 15, 11,
5, -1, -6, -11, -15, -17, -16, -14, -9, -4, 1, 6, 10, 13, 14, 13, 11, 7, 2, -2,
-7, -11, -13, -14, -13, -10, -7, -2, 2, 6, 9, 12, 12, 12, 10, 7, 3, 0, -4, -7,
-9, -10, -10, -8, -5, -2, 1, 5, 7, 9, 10, 10, 9, 7, 5, 1, -2, -5, -8, -9, -10,
-9, -8, -5, -2, 1, 4, 7, 9, 10, 10, 8, 6, 3, -1, -4, -8, -10, -11, -11, -10, -7,
-4, 0, 4, 8, 11, 13, 13, 12, 9, 6, 1, -4, -8, -11, -13, -13, -11, -8, -4, 2, 6,
11, 14, 16, 16, 14, 10, 5, -1, -6, -11, -15, -16, -16, -13, -9, -3, 3, 8, 13,
16, 17, 16, 13, 8, 2, -4, -10, -15, -18, -18, -16, -12, -7, 0, 6, 12, 16, 18,
18, 16, 12, 6, 0, -7, -12, -16, -18, -17, -14, -9, -3, 4, 10, 15, 18, 19, 18,
14, 9, 3, -4, -10, -14, -17, -17, -16, -12, -6, 0, 6, 11, 15, 17, 17, 14, 10, 5,
-1, -7, -12, -15, -16, -16, -13, -9, -4, 2, 7, 12, 14, 15, 14, 12, 8, 3, -2, -6,
-10, -12, -13, -12, -9, -5, -1, 4, 8, 11, 13, 13, 12, 10, 6, 2, -2, -5, -8, -10,
-11, -10, -8, -5, -2, 2, 5, 8, 9, 10, 9, 8, 5, 2, -1, -4, -7, -9, -10, -10, -9,
-6, -3, 0, 3, 6, 8, 9, 9, 9, 7, 5, 2, -2, -5, -7, -9, -10, -9, -7, -5, -1, 2, 6,
8, 10, 11, 11, 10, 7, 3, -1, -5, -8, -11, -12, -12, -10, -7, -3, 1, 5, 9, 12,
13, 12, 11, 7, 3, -2, -7, -11, -14, -15, -14, -12, -8, -3, 3, 8, 12, 14, 15, 14,
11, 7, 2, -4, -9, -13, -16, -16, -14, -11, -6, 0, 6, 11, 15, 17, 17, 15, 11, 5,
-1, -7, -12, -16, -17, -17, -14, -9, -4, 3, 8, 13, 16, 17, 15, 12, 7, 2, -5,
-10, -15, -17, -18, -16, -12, -7, -1, 5, 10, 14, 16, 16, 14, 10, 5, -1, -7, -11,
-15, -16, -15, -13, -8, -3, 2, 8, 12, 15, 15, 14, 12, 8, 3, -2, -7, -11, -13,
-14, -13, -10, -6, -1, 4, 8, 11, 12, 13, 11, 9, 5, 1, -3, -7, -10, -12, -12,
-11, -8, -5, -1, 3, 6, 8, 10, 10, 9, 7, 4, 1, -2, -5, -8, -9, -10, -9, -7, -4,
-1, 2, 5, 7, 9, 10, 9, 8, 6, 3, 0, -3, -6, -8, -9, -9, -8, -6, -3, 0, 3, 6, 8,
9, 10, 9, 7, 4, 1, -2, -6, -9, -10, -11, -10, -8, -5, -2, 2, 5, 8, 10, 11, 11,
9, 6, 2, -3, -7, -10, -12, -13, -12, -9, -6, -1, 4, 8, 11, 13, 14, 13, 10, 6, 2,
-3, -8, -12, -14, -14, -12, -9, -5, 1, 6, 10, 14, 15, 15, 13, 9, 4, -1, -7, -11,
-15, -16, -15, -13, -8, -3, 2, 8, 12, 15, 16, 15, 12, 7, 2, -4, -9, -13, -16,
-16, -14, -11, -6, 0, 6, 11, 14, 16, 16, 14, 10, 5, 0, -6, -11, -14, -15, -15,
-12, -8, -3, 3, 8, 12, 14, 15, 14, 11, 7, 2, -3, -8, -12, -14, -14, -13, -10,
-6, -1, 3, 8, 11, 12, 12, 11, 8, 4, 0, -4, -8, -11, -12, -12, -11, -8, -4, 0, 4,
7, 10, 11, 11, 9, 7, 4, 0, -3, -6, -8, -10, -10, -9, -6, -3, 0, 3, 6, 8, 9, 9,
8, 6, 4, 1, -2, -5, -7, -9, -9, -9, -7, -5, -2, 1, 4, 6, 7, 8, 8, 7, 5, 2, -1,
-4, -7, -9, -10, -10, -9, -6, -4, 0, 3, 6, 8, 10, 10, 9, 7, 4, 1, -3, -6, -9,
-11, -11, -10, -8, -4, 0, 4, 7, 10, 11, 12, 10, 8, 4, 0, -5, -9, -12, -13, -13,
-12, -9, -5, 0, 5, 8, 11, 13, 12, 11, 7, 3, -2, -7, -11, -14, -15, -14, -12, -8,
-3, 2, 7, 11, 14, 14, 13, 11, 6, 1, -4, -9, -12, -15, -15, -13, -10, -5, 0, 5,
10, 13, 15, 15, 13, 9, 4, -1, -6, -11, -14, -15, -14, -12, -8, -3, 2, 7, 11, 13,
14, 13, 10, 6, 1, -4, -8, -12, -14, -14, -13, -10, -6, -1, 4, 8, 11, 13, 13, 11,
8, 4, 0, -4, -8, -11, -12, -12, -10, -7, -3, 1, 5, 8, 10, 11, 11, 9, 7, 3, -1,
-4, -7, -9, -10, -10, -9, -6, -3, 0, 4, 6, 8, 9, 9, 7, 5, 3, -1, -4, -6, -8, -9,
-9, -8, -6, -4, -1, 2, 5, 7, 8, 8, 7, 6, 4, 1, -2, -4, -7, -8, -9, -8, -7, -4,
-1, 1, 4, 7, 8, 9, 9, 8, 6, 3, 0, -4, -7, -9, -10, -9, -8, -6, -3, 1, 4, 7, 9,
10, 10, 9, 6, 3, -1, -5, -8, -11, -12, -11, -10, -7, -3, 1, 5, 8, 11, 12, 11,
10, 6, 3, -2, -6, -10, -12, -13, -12, -10, -6, -2, 3, 7, 11, 13, 13, 12, 10, 6,
1, -4, -8, -12, -14, -14, -12, -9, -5, 0, 5, 9, 12, 13, 13, 11, 8, 3, -2, -6,
-11, -13, -15, -14, -12, -8, -3, 2, 6, 10, 12, 13, 12, 10, 6, 1, -4, -8, -11,
-13, -14, -12, -9, -5, -1, 4, 8, 11, 12, 12, 11, 8, 4, 0, -5, -8, -11, -12, -12,
-10, -7, -3, 1, 5, 8, 10, 11, 10, 8, 6, 2, -2, -5, -8, -10, -11, -11, -9, -6,
-3, 1, 4, 7, 8, 9, 8, 7, 4, 2, -2, -5, -7, -9, -9, -9, -8, -5, -2, 1, 3, 6, 7,
8, 8, 7, 5, 2, 0, -3, -6, -8, -8, -9, -8, -6, -3, -1, 2, 4, 6, 7, 8, 7, 5, 3, 0,
-3, -5, -8, -9, -9, -9, -7, -5, -2, 1, 4, 6, 8, 8, 8, 7, 4, 1, -2, -5, -8, -10,
-10, -10, -8, -5, -2, 2, 5, 8, 10, 10, 10, 8, 5, 2, -2, -6, -9, -11, -12, -11,
-9, -5, -1, 3, 6, 9, 11, 11, 10, 8, 4, 0, -4, -8, -11, -13, -13, -11, -8, -5, 0,
4, 8, 11, 12, 12, 10, 7, 3, -2, -6, -10, -12, -13, -13, -10, -7, -2, 2, 7, 10,
12, 13, 12, 9, 6, 1, -3, -8, -11, -13, -13, -11, -9, -5, 0, 4, 8, 11, 12, 12,
10, 7, 3, -1, -5, -9, -11, -12, -12, -10, -7, -3, 1, 5, 8, 10, 11, 10, 8, 5, 2,
-2, -6, -9, -11, -11, -10, -8, -5, -2, 2, 5, 8, 9, 10, 9, 7, 4, 1, -2, -5, -7,
-9, -9, -8, -7, -4, -1, 2, 5, 7, 8, 8, 8, 6, 4, 1, -1, -4, -6, -8, -8, -8, -7,
-5, -2, 1, 3, 5, 7, 7, 7, 6, 4, 2, -1, -3, -6, -7, -8, -8, -7, -6, -3, 0, 2, 5,
7, 8, 8, 7, 6, 3, 0, -3, -5, -7, -9, -9, -8, -6, -4, -1, 2, 5, 7, 9, 9, 8, 6, 4,
0, -3, -6, -9, -10, -11, -10, -7, -4, -1, 3, 6, 8, 10, 10, 9, 6, 3, -1, -5, -8,
-10, -12, -12, -10, -7, -4, 0, 4, 8, 10, 11, 11, 9, 6, 2, -2, -6, -9, -12, -12,
-12, -9, -6, -2, 2, 6, 9, 11, 12, 10, 8, 5, 1, -4, -8, -11, -12, -13, -11, -8,
-5, -1, 4, 7, 10, 11, 11, 9, 6, 3, -1, -6, -9, -11, -12, -12, -10, -7, -3, 1, 5,
8, 10, 10, 10, 8, 5, 1, -3, -6, -9, -11, -11, -10, -8, -5, -1, 2, 5, 8, 9, 9, 8,
6, 3, 0, -3, -6, -8, -10, -10, -9, -7, -4, -1, 2, 5, 7, 8, 8, 7, 5, 3, 0, -3,
-6, -8, -9, -9, -8, -6, -4, -1, 1, 4, 6, 7, 7, 6, 5, 3, 1, -2, -4, -6, -8, -8,
-8, -6, -4, -2, 1, 3, 5, 6, 7, 7, 6, 4, 2, -1, -4, -6, -7, -8, -8, -7, -5, -3,
0, 3, 5, 7, 8, 8, 7, 5, 2, -1, -4, -6, -8, -9, -9, -8, -6, -3, 0, 3, 6, 8, 9, 9,
7, 5, 2, -1, -4, -7, -9, -10, -10, -9, -6, -3, 1, 4, 7, 9, 10, 10, 8, 5, 2, -2,
-6, -9, -11, -11, -11, -8, -5, -2, 2, 6, 8, 10, 10, 9, 7, 4, 0, -4, -7, -10,
-12, -12, -10, -8, -4, 0, 4, 7, 9, 10, 10, 9, 6, 2, -1, -5, -8, -11, -11, -11,
-9, -6, -2, 2, 5, 8, 10, 10, 10, 8, 5, 1, -3, -6, -9, -10, -11, -10, -7, -4, -1,
3, 6, 8, 9, 9, 8, 6, 3, 0, -4, -6, -9, -10, -10, -8, -6, -4, 0, 3, 5, 7, 8, 8,
7, 5, 2, -1, -3, -6, -8, -8, -8, -7, -5, -3, 0, 2, 5, 6, 7, 7, 6, 4, 2, 0, -3,
-5, -7, -8, -8, -7, -5, -3, -1, 2, 4, 5, 6, 6, 6, 5, 3, 0, -2, -4, -6, -8, -8,
-7, -6, -4, -2, 1, 3, 5, 6, 7, 6, 5, 3, 1, -2, -4, -6, -8, -9, -8, -7, -5, -2,
1, 3, 6, 7, 8, 7, 6, 4, 1, -2, -5, -7, -9, -9, -9, -7, -5, -2, 1, 4, 7, 8, 9, 8,
6, 4, 1, -3, -6, -9, -10, -11, -10, -8, -5, -1, 2, 5, 8, 9, 9, 8, 6, 3, -1, -4,
-7, -10, -11, -11, -9, -7, -4, 0, 4, 7, 9, 10, 9, 8, 5, 2, -2, -5, -8, -10, -11,
-10, -9, -6, -2, 1, 5, 7, 9, 9, 9, 6, 4, 0, -3, -7, -9, -11, -11, -10, -7, -4,
-1, 2, 5, 7, 9, 8, 7, 5, 2, -1, -4, -7, -9, -10, -10, -8, -6, -3, 0, 3, 6, 7, 8,
8, 6, 4, 2, -1, -4, -6, -8, -9, -8, -7, -5, -2, 0, 3, 5, 6, 7, 7, 5, 4, 1, -1,
-4, -6, -7, -8, -8, -7, -5, -3, 0, 2, 4, 5, 6, 6, 5, 4, 2, -1, -3, -5, -7, -7,
-7, -7, -5, -3, -1, 2, 4, 5, 6, 6, 6, 4, 2, 0, -2, -4, -6, -7, -8, -7, -6, -4,
-1, 1, 4, 5, 7, 7, 6, 5, 3, 0, -2, -5, -7, -8, -9, -8, -6, -4, -1, 1, 4, 6, 7,
8, 7, 5, 3, 0, -3, -6, -8, -9, -9, -8, -6, -4, -1, 2, 5, 7, 8, 9, 7, 5, 3, -1,
-4, -7, -9, -10, -9, -8, -6, -3, 1, 4, 7, 8, 9, 9, 7, 5, 2, -2, -5, -8, -10,
-10, -10, -8, -5, -2, 2, 5, 7, 9, 9, 8, 6, 3, 0, -3, -6, -9, -10, -10, -9, -7,
-4, 0, 3, 6, 8, 8, 8, 7, 5, 2, -1, -4, -7, -9, -9, -9, -8, -5, -2, 1, 3, 6, 7,
8, 7, 6, 4, 1, -2, -5, -7, -8, -9, -8, -7, -5, -2, 1, 3, 5, 7, 7, 6, 5, 3, 0,
-2, -4, -6, -8, -8, -7, -6, -4, -2, 1, 3, 5, 6, 6, 6, 4, 3, 1, -2, -4, -6, -7,
-7, -7, -6, -4, -2, 0, 2, 4, 5, 6, 6, 5, 3, 1, -1, -3, -5, -6, -7, -7, -6, -5,
-3, 0, 2, 4, 5, 6, 6, 5, 4, 2, -1, -3, -5, -7, -8, -8, -7, -5, -3, -1, 2, 4, 6,
6, 6, 6, 4, 2, -1, -3, -6, -8, -9, -8, -7, -6, -3, 0, 2, 5, 6, 7, 7, 6, 4, 2,
-1, -4, -7, -8, -9, -9, -8, -5, -3, 0, 3, 6, 7, 8, 7, 6, 4, 1, -3, -5, -8, -9,
-10, -9, -7, -5, -1, 2, 4, 7, 8, 8, 7, 5, 3, 0, -4, -6, -8, -9, -9, -8, -6, -3,
0, 3, 5, 7, 8, 8, 7, 4, 2, -1, -4, -7, -8, -9, -9, -7, -5, -2, 1, 4, 6, 7, 7, 7,
5, 3, 1, -2, -5, -7, -8, -8, -8, -6, -4, -1, 1, 4, 5, 7, 7, 6, 5, 2, 0, -2, -5,
-6, -7, -8, -7, -5, -3, -1, 1, 3, 5, 6, 6, 5, 4, 2, 0, -2, -4, -6, -7, -7, -6,
-5, -3, -1, 1, 3, 4, 5, 5, 5, 4, 2, 0, -2, -4, -5, -6, -7, -6, -5, -4, -2, 0, 2,
4, 5, 6, 5, 4, 3, 1, -1, -3, -5, -6, -7, -7, -6, -4, -2, 0, 3, 4, 6, 6, 6, 5, 3,
1, -1, -3, -5, -7, -7, -7, -6, -4, -2, 0, 3, 5, 6, 7, 6, 5, 3, 1, -2, -4, -6,
-8, -8, -8, -6, -4, -2, 1, 3, 5, 7, 7, 7, 5, 3, 0, -3, -5, -7, -8, -9, -8, -6,
-4, -1, 2, 4, 6, 7, 7, 7, 5, 2, -1, -4, -6, -8, -9, -9, -8, -5, -3, 0, 3, 5, 7,
7, 7, 6, 4, 1, -2, -5, -7, -8, -9, -8, -7, -5, -2, 1, 4, 6, 7, 7, 6, 5, 3, 0,
-3, -5, -7, -8, -8, -7, -6, -4, -1, 2, 4, 6, 6, 6, 6, 4, 2, 0, -3, -5, -7, -7,
-7, -7, -5, -3, -1, 2, 4, 5, 6, 6, 5, 3, 1, -1, -3, -5, -6, -7, -7, -6, -5, -3,
-1, 1, 3, 4, 5, 5, 4, 3, 1, -1, -3, -4, -6, -7, -7, -6, -5, -3, -1, 1, 3, 4, 5,
5, 4, 3, 2, 0, -2, -4, -5, -6, -7, -6, -5, -3, -1, 1, 3, 4, 5, 5, 5, 4, 2, 0,
-2, -4, -6, -7, -7, -7, -5, -4, -2, 1, 3, 4, 5, 6, 5, 4, 2, 0, -2, -4, -6, -7,
-8, -7, -6, -4, -1, 1, 3, 5, 6, 6, 6, 4, 2, 0, -3, -5, -7, -8, -8, -7, -5, -3,
-1, 2, 4, 6, 7, 7, 6, 4, 2, -1, -4, -6, -8, -8, -8, -7, -5, -2, 0, 3, 5, 6, 7,
7, 5, 3, 1, -2, -5, -7, -8, -8, -8, -6, -4, -1, 1, 4, 6, 7, 7, 6, 5, 2, 0, -3,
-5, -7, -8, -8, -7, -5, -3, 0, 2, 4, 6, 6, 6, 5, 4, 2, -1, -3, -5, -7, -7, -7,
-6, -4, -2, 0, 2, 4, 5, 6, 5, 5, 3, 1, -1, -3, -5, -6, -7, -6, -5, -4, -2, 0, 2,
4, 5, 5, 5, 4, 3, 1, -1, -3, -4, -6, -6, -6, -5, -4, -2, 0, 2, 3, 4, 5, 5, 4, 3,
1, -1, -3, -4, -5, -6, -6, -5, -4, -2, 0, 1, 3, 4, 5, 5, 4, 3, 1, -1, -2, -4,
-5, -6, -6, -6, -4, -3, -1, 1, 3, 4, 5, 5, 4, 3, 2, 0, -3, -4, -6, -7, -7, -6,
-5, -3, -1, 2, 3, 5, 6, 6, 5, 3, 2, -1, -3, -5, -6, -7, -7, -6, -5, -3, 0, 2, 4,
5, 6, 6, 5, 3, 1, -1, -4, -6, -7, -8, -7, -6, -4, -2, 0, 3, 5, 6, 6, 6, 5, 3, 0,
-2, -5, -6, -7, -8, -7, -6, -4, -1, 1, 4, 5, 6, 6, 5, 4, 2, -1, -3, -5, -7, -7,
-7, -7, -5, -3, 0, 2, 4, 5, 6, 6, 5, 3, 1, -1, -4, -5, -7, -7, -7, -6, -4, -2,
0, 2, 4, 5, 5, 5, 4, 2, 0, -2, -4, -5, -6, -7, -6, -5, -4, -2, 0, 2, 4, 5, 5, 4,
3, 2, 0, -2, -4, -5, -6, -6, -6, -5, -3, -2, 0, 2, 3, 4, 4, 4, 3, 2, 0, -2, -3,
-5, -6, -6, -6, -5, -3, -2, 0, 2, 3, 4, 4, 4, 3, 2, 0, -1, -3, -4, -5, -6, -6,
-5, -3, -2, 0, 2, 3, 4, 5, 4, 4, 2, 1, -1, -3, -4, -6, -6, -6, -5, -4, -2, 0, 2,
3, 4, 5, 5, 4, 3, 1, -1, -3, -5, -6, -7, -6, -5, -4, -2, 0, 2, 4, 5, 5, 5, 4, 3,
1, -2, -4, -5, -7, -7, -6, -5, -3, -1, 1, 3, 4, 5, 6, 5, 4, 2, 0, -2, -4, -6,
-7, -7, -6, -5, -3, -1, 2, 4, 5, 6, 6, 5, 3, 1, -1, -3, -5, -6, -7, -7, -6, -4,
-2, 0, 2, 4, 5, 6, 5, 4, 3, 1, -1, -3, -5, -6, -7, -6, -5, -3, -1, 1, 3, 4, 5,
5, 5, 4, 2, 0, -2, -4, -5, -6, -6, -6, -5, -3, -1, 1, 3, 4, 5, 5, 4, 3, 2, 0,
-2, -4, -5, -6, -6, -5, -4, -3, -1, 1, 2, 4, 4, 4, 4, 3, 1, 0, -2, -4, -5, -5,
-5, -5, -4, -3, -1, 1, 2, 3, 4, 4, 4, 3, 1, 0, -2, -3, -4, -5, -5, -5, -4, -3,
-1, 0, 2, 3, 4, 4, 4, 3, 2, 0, -2, -3, -5, -5, -6, -5, -4, -3, -1, 0, 2, 3, 4,
4, 4, 3, 2, 0, -2, -3, -5, -6, -6, -6, -5, -3, -1, 0, 2, 4, 4, 5, 4, 3, 2, 0,
-2, -4, -5, -6, -6, -6, -5, -3, -1, 1, 3, 4, 5, 5, 4, 3, 1, -1, -3, -4, -6, -7,
-7, -6, -4, -3, -1, 1, 3, 4, 5, 5, 4, 3, 1, -1, -3, -5, -6, -7, -7, -6, -4, -2,
0, 2, 4, 5, 5, 5, 4, 2, 0, -2, -4, -5, -6, -7, -6, -5, -3, -1, 1, 3, 4, 5, 5, 4,
3, 2, 0, -2, -4, -5, -6, -6, -6, -4, -3, -1, 1, 3, 4, 4, 4, 4, 3, 1, -1, -3, -4,
-5, -6, -6, -5, -4, -2, 0, 1, 3, 4, 4, 4, 3, 2, 1, -1, -2, -4, -5, -5, -5, -5,
-3, -2, 0, 1, 2, 3, 4, 4, 3, 2, 1, -1, -2, -4, -4, -5, -5, -4, -3, -2, -1, 1, 2,
3, 4, 4, 3, 2, 1, -1, -2, -3, -4, -5, -5, -5, -4, -2, -1, 1, 2, 3, 4, 4, 3, 2,
1, 0, -2, -3, -5, -5, -5, -5, -4, -2, -1, 1, 2, 3, 4, 4, 4, 3, 1, 0, -2, -4, -5,
-6, -6, -5, -4, -2, -1, 1, 3, 4, 4, 4, 4, 3, 1, -1, -3, -4, -5, -6, -6, -5, -4,
-2, 0, 2, 3, 4, 5, 5, 4, 2, 1, -1, -3, -5, -6, -6, -6, -5, -3, -1, 1, 2, 4, 5,
5, 4, 3, 2, 0, -2, -4, -5, -6, -6, -5, -4, -3, -1, 1, 3, 4, 5, 5, 4, 3, 1, -1,
-2, -4, -5, -6, -6, -5, -4, -2, 0, 1, 3, 4, 4, 4, 3, 2, 1, -1, -3, -4, -5, -6,
-5, -5, -3, -2, 0, 1, 3, 4, 4, 4, 3, 2, 0, -1, -3, -4, -5, -5, -5, -4, -3, -2,
0, 1, 3, 3, 4, 3, 3, 2, 0, -1, -3, -4, -5, -5, -5, -4, -3, -2, 0, 1, 2, 3, 3, 3,
3, 2, 0, -1, -2, -4, -4, -5, -5, -4, -3, -2, 0, 1, 2, 3, 3, 3, 3, 2, 0, -1, -2,
-4, -4, -5, -5, -4, -3, -2, 0, 1, 2, 3, 4, 3, 3, 2, 0, -1, -3, -4, -5, -5, -5,
-4, -3, -2, 0, 1, 2, 3, 4, 4, 3, 2, 0, -1, -3, -4, -5, -6, -5, -4, -3, -2, 0, 2,
3, 4, 4, 4, 3, 2, 0, -2, -3, -5, -5, -6, -5, -4, -3, -1, 1, 2, 3, 4, 4, 4, 3, 1,
0, -2, -4, -5, -6, -6, -5, -4, -2, -1, 1, 3, 4, 4, 4, 3, 2, 1, -1, -3, -4, -5,
-5, -5, -5, -3, -2, 0, 1, 3, 4, 4, 4, 3, 2, 0, -1, -3, -4, -5, -5, -5, -4, -3,
-1, 0, 2, 3, 4, 4, 3, 3, 1, 0, -2, -3, -4, -5, -5, -5, -4, -3, -1, 0, 2, 3, 3,
3, 3, 2, 1, 0, -2, -3, -4, -4, -5, -4, -4, -2, -1, 0, 2, 2, 3, 3, 3, 2, 1, 0,
-1, -3, -4, -4, -4, -4, -3, -2, -1, 0, 1, 2, 3, 3, 3, 2, 1, 0, -1, -2, -4, -4,
-4, -4, -3, -2, -1, 0, 1, 2, 3, 3, 3, 2, 1, 0, -1, -2, -4, -4, -5, -4, -4, -2,
-1, 0, 2, 3, 3, 4, 3, 3, 1, 0, -1, -3, -4, -5, -5, -4, -4, -2, -1, 0, 2, 3, 4,
4, 3, 2, 1, 0, -2, -3, -4, -5, -5, -5, -4, -2, -1, 1, 2, 3, 4, 4, 3, 2, 1, -1,
-2, -4, -5, -5, -5, -4, -3, -2, 0, 1, 2, 3, 4, 4, 3, 2, 0, -1, -3, -4, -5, -5,
-5, -4, -3, -2, 0, 1, 3, 3, 4, 3, 3, 1, 0, -2, -3, -4, -5, -5, -5, -4, -3, -1,
0, 2, 3, 3, 3, 3, 2, 1, 0, -2, -3, -4, -5, -5, -4, -3, -2, -1, 1, 2, 3, 3, 3, 3,
2, 1, -1, -2, -3, -4, -4, -4, -4, -3, -2, -1, 1, 2, 2, 3, 3, 2, 2, 1, -1, -2,
-3, -4, -4, -4, -4, -3, -2, -1, 0, 1, 2, 3, 3, 2, 2, 1, -1, -2, -3, -4, -4, -4,
-4, -3, -2, -1, 0, 1, 2, 3, 3, 2, 2, 1, 0, -2, -3, -4, -4, -4, -4, -3, -2, -1,
0, 1, 2, 3, 3, 3, 2, 1, 0, -2, -3, -4, -4, -4, -4, -3, -2, -1, 1, 2, 3, 3, 3, 3,
2, 1, -1, -2, -3, -4, -5, -5, -4, -3, -2, -1, 1, 2, 3, 3, 3, 3, 2, 0, -1, -2,
-3, -4, -5, -5, -4, -3, -2, 0, 1, 2, 3, 3, 3, 3, 2, 0, -1, -3, -4, -4, -5, -4,
-4, -3, -1, 0, 2, 3, 3, 3, 3, 2, 1, 0, -2, -3, -4, -5, -5, -4, -3, -2, -1, 1, 2,
3, 3, 3, 3, 2, 1, -1, -2, -3, -4, -4, -4, -4, -3, -2, 0, 1, 2, 3, 3, 3, 2, 2, 0,
-1, -2, -3, -4, -4, -4, -3, -3, -1, 0, 1, 2, 3, 3, 3, 2, 1, 0, -1, -2, -3, -4,
-4, -4, -3, -2, -1, 0, 1, 2, 2, 3, 3, 2, 1, 0, -1, -2, -3, -3, -4, -4, -3, -2,
-1, 0, 1, 2, 2, 3, 2, 2, 1, 0, -1, -2, -3, -3, -4, -4, -3, -3, -2, 0, 1, 2, 2,
3, 3, 2, 1, 0, -1, -2, -3, -4, -4, -4, -3, -3, -2, 0, 1, 2, 2, 3, 3, 2, 1, 0,
-1, -2, -3, -4, -4, -4, -3, -3, -1, 0, 1, 2, 3, 3, 3, 2, 1, 0, -1, -2, -3, -4,
-4, -4, -3, -2, -1, 0, 1, 2, 3, 3, 3, 2, 1, 0, -1, -3, -4, -4, -4, -4, -3, -2,
-1, 0, 1, 2, 3, 3, 3, 2, 1, -1, -2, -3, -4, -4, -4, -4, -3, -2, -1, 1, 2, 2, 3,
3, 2, 1, 0, -1, -2, -3, -4, -4, -4, -4, -3, -2, 0, 1, 2, 2, 3, 2, 2, 1, 0, -1,
-2, -3, -4, -4, -4, -3, -2, -1, 0, 1, 2, 2, 2, 2, 2, 1, 0, -1, -2, -3, -4, -4,
-4, -3, -2, -1, 0, 1, 2, 2, 2, 2, 2, 1, 0, -1, -2, -3, -3, -4, -3, -3, -2, -1,
0, 1, 2, 2, 2, 2, 2, 1, 0, -1, -2, -3, -3, -4, -3, -3, -2, -1, 0, 1, 2, 2, 2, 2,
2, 1, 0, -1, -2, -3, -3, -4, -3, -3, -2, -1, 0, 1, 2, 2, 2, 2, 2, 1, 0, -1, -2,
-3, -3, -4, -4, -3, -2, -1, 0, 1, 2, 2, 2, 2, 2, 1, 0, -1, -2, -3, -4, -4, -4,
-3, -2, -1, 0, 1, 2, 2, 3, 2, 2, 1, 0, -2, -3, -3, -4, -4, -4, -3, -2, -1, 0, 1,
2, 3, 3, 2, 1, 0, -1, -2, -3, -4, -4, -4, -3, -3, -1, 0, 1, 2, 2, 3, 3, 2, 1, 0,
-1, -2, -3, -4, -4, -4, -3, -2, -1, 0, 1, 2, 2, 3, 2, 2, 1, 0, -1, -2, -3, -3,
-4, -3, -3, -2, -1, 0, 1, 2, 2, 2, 2, 1, 1, 0, -1, -2, -3, -3, -3, -3, -3, -2,
-1, 0, 1, 2, 2, 2, 2, 1, 0, 0, -1, -2, -3, -3, -3, -3, -2, -2, -1, 0, 1, 2, 2,
2, 2, 1, 0, 0, -1, -2, -3, -3, -3, -3, -2, -2, -1, 0, 1, 1, 2, 2, 2, 1, 0, 0,
-1, -2, -3, -3, -3, -3, -2, -2, -1, 0, 1, 1, 2, 2, 2, 1, 0, 0, -1, -2, -3, -3,
-3, -3, -3, -2, -1, 0, 1, 2, 2, 2, 2, 1, 0, -1, -1, -2, -3, -3, -3, -3, -2, -2,
-1, 0, 1, 2, 2, 2, 2, 1, 0, -1, -2, -3, -3, -4, -3, -3, -2, -2, -1, 0, 1, 2, 2,
2, 2, 1, 0, -1, -2, -3, -3, -4, -3, -3, -2, -1, 0, 1, 1, 2, 2, 2, 1, 1, 0, -1,
-2, -3, -3, -4, -3, -3, -2, -1, 0, 1, 2, 2, 2, 2, 1, 0, 0, -1, -2, -3, -3, -3,
-3, -3, -2, -1, 0, 1, 2, 2, 2, 2, 1, 0, -1, -2, -2, -3, -3, -3, -3, -2, -2, -1,
0, 1, 2, 2, 2, 1, 1, 0, -1, -2, -2, -3, -3, -3, -3, -2, -1, -1, 0, 1, 1, 2, 2,
1, 1, 0, -1, -2, -2, -3, -3, -3, -3, -2, -1, 0, 0, 1, 1, 2, 2, 1, 1, 0, -1, -1,
-2, -3, -3, -3, -3, -2, -1, -1, 0, 1, 1, 2, 2, 1, 1, 0, -1, -1, -2, -3, -3, -3,
-3, -2, -1, 0, 0, 1, 1, 2, 2, 1, 1, 0, -1, -2, -2, -3, -3, -3, -3, -2, -1, 0, 0,
1, 2, 2, 2, 1, 1, 0, -1, -2, -2, -3, -3, -3, -3, -2, -1, 0, 1, 1, 2, 2, 2, 1, 1,
0, -1, -2, -3, -3, -3, -3, -2, -2, -1, 0, 1, 1, 2, 2, 2, 1, 1, 0, -1, -2, -3,
-3, -3, -3, -2, -2, -1, 0, 1, 2, 2, 2, 2, 1, 0, -1, -1, -2, -3, -3, -3, -3, -2,
-1, -1, 0, 1, 2, 2, 2, 1, 1, 0, -1, -2, -2, -3, -3, -3, -3, -2, -1, 0, 0, 1, 1,
2, 2, 1, 1, 0, -1, -2, -2, -3, -3, -3, -2, -2, -1, 0, 0, 1, 1, 1, 1, 1, 0, 0,
-1, -2, -2, -3, -3, -3, -2, -2, -1, 0, 0, 1, 1, 1, 1, 1, 0, 0, -1, -2, -2, -3,
-3, -3, -2, -2, -1, 0, 0, 1, 1, 1, 1, 1, 0, 0, -1, -2, -2, -3, -3, -3, -2, -2,
-1, 0, 0, 1, 1, 1, 1, 1, 0, 0, -1, -2, -2, -3, -3, -3, -2, -2, -1, 0, 0, 1, 1,
1, 1, 1, 0, 0, -1, -2, -2, -3, -3, -3, -2, -2, -1, 0, 0, 1, 1, 1, 1, 1, 0, 0,
-1, -2, -2, -3, -3, -3, -2, -2, -1, 0, 1, 1, 1, 2, 1, 1, 0, -1, -1, -2, -3, -3,
-3, -3, -2, -1, -1, 0, 1, 1, 2, 1, 1, 1, 0, -1, -1, -2, -3, -3, -3, -2, -2, -1,
0, 0, 1, 1, 1, 1, 1, 1, 0, -1, -2, -2, -3, -3, -3, -2, -2, -1, 0, 0, 1, 1, 1, 1,
1, 0, 0, -1, -2, -2, -2, -3, -2, -2, -1, -1, 0, 0, 1, 1, 1, 1, 1, 0, 0, -1, -2,
-2, -2, -2, -2, -2, -1, -1, 0, 0, 1, 1, 1, 1, 1, 0, 0, -1, -2, -2, -2, -2, -2,
-2, -1, -1, 0, 0, 1, 1, 1, 1, 1, 0, 0, -1, -2, -2, -2, -2, -2, -2, -1, -1, 0, 0,
1, 1, 1, 1, 1, 0, 0, -1, -2, -2, -2, -2, -2, -2, -1, -1, 0, 0, 1, 1, 1, 1, 1, 0,
0, -1, -2, -2, -2, -2, -2, -2, -1, -1, 0, 1, 1, 1, 1, 1, 1, 0, -1, -1, -2, -2,
-2, -2, -2, -2, -1, -1, 0, 1, 1, 1, 1, 1, 1, 0, -1, -1, -2, -2, -2, -2, -2, -2,
-1, 0, 0, 1, 1, 1, 1, 1, 0, 0, -1, -1, -2, -2, -2, -2, -2, -2, -1, 0, 0, 1, 1,
1, 1, 1, 0, 0, -1, -2, -2, -2, -2, -2, -2, -1, -1, 0, 0, 1, 1, 1, 1, 1, 0, 0,
-1, -2, -2, -2, -2, -2, -2, -1, -1, 0, 0, 1, 1, 1, 1, 0, 0, -1, -1, -2, -2, -2,
-2, -2, -2, -1, -1, 0, 0, 1, 1, 1, 1, 0, 0, -1, -1, -2, -2, -2, -2, -2, -2, -1,
-1, 0, 0, 1, 1, 1, 1, 0, 0, -1, -1, -2, -2, -2, -2, -2, -2, -1, -1, 0, 0, 1, 1,
1, 1, 0, 0, -1, -1, -2, -2, -2, -2, -2, -2, -1, -1, 0, 0, 1, 1, 1, 1, 0, 0, -1,
-1, -2, -2, -2, -2, -2, -2, -1, -1, 0, 0, 1, 1, 1, 1, 0, 0, -1, -1, -2, -2, -2,
-2, -2, -2, -1, 0, 0, 1, 1, 1, 1, 1, 0, 0, -1, -1, -2, -2, -2, -2, -2, -1, -1,
0, 0, 1, 1, 1, 1, 1, 0, 0, -1, -1, -2, -2, -2, -2, -2, -1, -1, 0, 0, 1, 1, 1, 1,
1, 0, 0, -1, -2, -2, -2, -2, -2, -2, -1, -1, 0, 0, 1, 1, 1, 1, 0, 0, -1, -1, -2,
-2, -2, -2, -2, -2, -1, -1, 0, 0, 1, 1, 1, 1, 0, 0, -1, -1, -2, -2, -2, -2, -2,
-1, -1, 0, 0, 0, 1, 1, 1, 1, 0, 0, -1, -1, -2, -2, -2, -2, -2, -1, -1, 0, 0, 0,
1, 1, 1, 0, 0, 0, -1, -1, -1, -2, -2, -2, -2, -1, -1, 0, 0, 0, 1, 1, 1, 0, 0, 0,
-1, -1, -1, -2, -2, -2, -2, -1, -1, 0, 0, 0, 1, 1, 1, 0, 0, 0, -1, -1, -2, -2,
-2, -2, -2, -1, -1, 0, 0, 0, 1, 1, 1, 0, 0, 0, -1, -1, -2, -2, -2, -2, -2, -1,
-1, 0, 0, 0, 1, 1, 1, 0, 0, 0, -1, -1, -2, -2, -2, -2, -2, -1, -1, 0, 0, 0, 1,
1, 1, 0, 0, 0, -1, -1, -2, -2, -2, -2, -2, -1, -1, 0, 0, 0, 1, 1, 1, 0, 0, -1,
-1, -1, -2, -2, -2, -2, -1, -1, -1, 0, 0, 0, 1, 1, 0, 0, 0, -1, -1, -1, -2, -2,
-2, -2, -1, -1, 0, 0, 0, 0, 1, 1, 0, 0, 0, -1, -1, -2, -2, -2, -2, -2, -1, -1,
0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -2, -2, -2, -2, -1, -1, -1, 0, 0, 0, 0, 0, 0,
0, 0, 0, -1, -1, -1, -2, -2, -2, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1,
-1, -2, -2, -2, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -2, -2, -2,
-1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -2, -2, -1, -1, -1, -1, 0, 0,
0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -2, -2, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0,
0, -1, -1, -1, -1, -2, -2, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1,
-2, -2, -2, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -2, -1, -1,
-1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -2, -1, -1, -1, -1, 0, 0, 0,
0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0,
0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1,
-1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0,
0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0,
0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1,
-1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0,
0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0,
0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0,
0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, };

#endif /* DRMFIVE_H_ */
