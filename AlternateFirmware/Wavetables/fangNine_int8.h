#ifndef FANGNINE_H_
#define FANGNINE_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define FANGNINE_NUM_CELLS 4513
#define FANGNINE_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) FANGNINE_DATA [] = {-5,
-7, -5, -5, -3, -2, -1, 2, 3, 4, 7, 8, 10, 12, 14, 15, 17, 19, 20, 23, 23, 25,
27, 28, 31, 31, 34, 36, 34, 39, 39, 39, 45, 45, 41, 49, 50, 47, 55, 54, 53, 61,
57, 60, 67, 61, 66, 73, 63, 71, 76, 71, 75, 79, 75, 80, 85, 75, 86, 87, 84, 84,
89, 93, 86, 89, 96, 89, 95, 96, 92, 99, 98, 94, 94, 108, 94, 97, 107, 98, 101,
102, 103, 105, 104, 101, 109, 101, 107, 107, 106, 107, 103, 113, 104, 105, 111,
111, 99, 110, 113, 98, 115, 108, 100, 110, 114, 100, 111, 113, 95, 113, 110, 97,
115, 111, 94, 116, 105, 101, 117, 100, 105, 114, 100, 102, 116, 97, 102, 115,
97, 102, 112, 96, 96, 106, 99, 100, 97, 98, 96, 94, 100, 87, 95, 96, 93, 84, 90,
92, 84, 93, 82, 86, 85, 89, 72, 84, 91, 66, 78, 89, 74, 66, 86, 71, 72, 72, 76,
67, 65, 81, 55, 68, 78, 57, 56, 77, 65, 42, 78, 66, 36, 70, 75, 36, 57, 67, 45,
61, 58, 45, 56, 53, 45, 51, 52, 51, 43, 51, 49, 36, 51, 48, 38, 43, 43, 48, 36,
32, 51, 37, 27, 55, 28, 30, 51, 22, 31, 51, 26, 21, 45, 29, 27, 30, 33, 25, 32,
29, 23, 29, 29, 28, 18, 28, 28, 21, 21, 33, 13, 22, 35, 6, 20, 35, 8, 20, 30,
-1, 26, 28, -1, 22, 25, 5, 16, 24, -3, 21, 17, 11, 19, 2, 10, 15, 15, -1, 14,
14, 2, 11, 10, 7, 7, 4, 9, 5, 3, 9, 1, 5, 3, 6, -1, -4, 13, -1, -7, 4, 0, 1, 0,
-3, 1, -11, 3, 3, -14, -4, 7, -13, -11, 6, -20, 4, -3, -21, 0, -3, -21, -6, 2,
-24, -11, 3, -20, -12, -6, -22, -4, -13, -19, -13, -7, -21, -19, -9, -14, -21,
-20, -9, -18, -20, -15, -18, -20, -12, -29, -17, -18, -24, -16, -26, -14, -20,
-35, -11, -24, -30, -13, -31, -27, -16, -25, -31, -18, -26, -28, -29, -24, -24,
-27, -25, -34, -25, -18, -41, -27, -21, -38, -22, -27, -41, -26, -28, -40, -21,
-29, -40, -34, -27, -31, -35, -40, -32, -24, -36, -46, -24, -30, -52, -22, -28,
-53, -32, -20, -51, -38, -27, -42, -35, -34, -37, -40, -34, -36, -46, -31, -39,
-41, -36, -41, -33, -47, -37, -34, -42, -44, -38, -37, -44, -40, -42, -36, -40,
-46, -35, -42, -51, -32, -43, -51, -29, -46, -52, -29, -48, -49, -34, -48, -51,
-35, -39, -56, -33, -43, -58, -33, -48, -46, -40, -48, -44, -40, -48, -53, -32,
-54, -47, -37, -54, -41, -47, -50, -44, -41, -52, -49, -40, -51, -45, -46, -53,
-46, -34, -59, -54, -35, -54, -42, -51, -51, -45, -47, -51, -53, -41, -50, -55,
-44, -47, -56, -39, -50, -61, -42, -41, -60, -50, -41, -56, -52, -50, -46, -48,
-55, -48, -49, -50, -50, -48, -53, -49, -44, -55, -51, -47, -53, -51, -44, -50,
-56, -42, -53, -58, -38, -58, -55, -42, -56, -49, -48, -57, -41, -58, -55, -34,
-67, -45, -37, -70, -47, -34, -72, -47, -36, -63, -50, -43, -55, -54, -38, -61,
-47, -42, -64, -44, -44, -58, -46, -44, -57, -51, -41, -57, -49, -46, -46, -54,
-49, -42, -61, -36, -52, -58, -42, -45, -50, -51, -43, -47, -55, -43, -45, -56,
-42, -43, -51, -53, -37, -49, -53, -36, -56, -52, -29, -57, -55, -27, -54, -55,
-34, -52, -49, -42, -39, -49, -50, -35, -55, -44, -35, -55, -41, -45, -39, -42,
-60, -31, -39, -55, -44, -28, -54, -54, -25, -46, -51, -37, -39, -52, -36, -43,
-44, -35, -50, -38, -37, -46, -46, -31, -42, -57, -26, -44, -48, -29, -48, -40,
-35, -46, -42, -37, -37, -46, -43, -33, -41, -39, -44, -40, -33, -42, -44, -31,
-46, -38, -29, -60, -25, -33, -57, -27, -40, -39, -36, -42, -30, -48, -38, -30,
-48, -34, -29, -49, -38, -31, -38, -43, -36, -29, -50, -37, -25, -45, -42, -25,
-44, -44, -24, -40, -43, -30, -40, -34, -37, -44, -31, -33, -43, -35, -33, -43,
-26, -45, -41, -27, -35, -41, -39, -30, -38, -39, -37, -33, -33, -44, -35, -33,
-41, -29, -40, -37, -30, -38, -44, -27, -39, -41, -27, -43, -33, -32, -42, -33,
-35, -43, -22, -43, -46, -20, -39, -44, -26, -42, -34, -25, -52, -27, -29, -51,
-28, -28, -44, -33, -31, -39, -40, -27, -32, -46, -32, -28, -39, -43, -17, -47,
-42, -16, -47, -39, -21, -41, -33, -26, -52, -15, -33, -49, -28, -28, -35, -34,
-31, -33, -36, -32, -27, -43, -25, -33, -39, -28, -30, -40, -28, -30, -34, -31,
-35, -25, -39, -33, -25, -36, -33, -28, -31, -38, -27, -28, -43, -23, -26, -42,
-27, -31, -36, -20, -40, -32, -28, -25, -32, -39, -22, -30, -32, -38, -23, -32,
-26, -32, -30, -25, -39, -25, -30, -32, -29, -24, -29, -40, -18, -29, -43, -16,
-30, -33, -24, -29, -28, -31, -28, -21, -36, -28, -16, -41, -25, -19, -38, -21,
-29, -28, -20, -32, -32, -22, -24, -27, -31, -23, -24, -32, -20, -31, -25, -22,
-29, -20, -30, -30, -15, -33, -22, -21, -29, -25, -29, -16, -24, -28, -23, -20,
-30, -23, -24, -19, -24, -34, -12, -26, -21, -27, -25, -16, -30, -18, -26, -22,
-20, -25, -23, -21, -20, -23, -22, -20, -26, -19, -18, -31, -18, -13, -27, -21,
-13, -36, -12, -13, -37, -9, -18, -28, -13, -17, -19, -26, -18, -12, -27, -19,
-8, -27, -22, -8, -26, -17, -11, -31, -11, -7, -37, -9, -11, -29, -12, -4, -32,
-19, 0, -32, -16, -8, -23, -10, -15, -24, -5, -17, -17, -18, -14, -13, -9, -22,
-16, -3, -27, -9, -13, -18, -12, -11, -17, -12, -15, -19, -6, -12, -17, -13, -8,
-21, -4, -12, -23, 0, -19, -16, -5, -12, -18, -8, -7, -26, -5, -3, -26, -7, -6,
-20, -5, -15, -10, -9, -18, -3, -13, -14, -10, -11, -4, -16, -11, -10, -12, -11,
-10, 1, -24, -10, 2, -26, -10, 0, -15, -14, -10, -3, -17, -8, -4, -20, 0, -15,
-6, -11, -17, -2, -13, -11, -1, -15, -13, 2, -19, -3, -10, -16, -1, -13, -11,
-3, -15, -10, 1, -19, -9, 0, -25, 1, -1, -30, 4, -12, -20, 3, -12, -13, -2, -14,
-12, -7, -14, -8, -8, -5, -13, -12, -13, -6, -7, -17, -8, -6, -21, -6, -1, -24,
0, -15, -11, -8, -14, -2, -20, -12, 1, -23, -8, -4, -20, -5, -15, -6, -16, -5,
-14, -14, -2, -28, 3, -11, -18, -6, -17, -8, -13, -13, -8, -7, -17, -9, -14, -9,
-11, -16, -5, -14, -5, -23, -12, -1, -19, -12, -4, -14, -19, -6, -5, -24, -4,
-6, -28, -1, -7, -17, -18, -2, -8, -25, 0, -13, -16, -1, -19, -16, -2, -9, -18,
-5, -12, -16, -7, -7, -12, -16, -1, -14, -17, 4, -21, -12, -3, -21, 5, -17, -14,
-1, -23, -6, 1, -20, -12, 4, -22, -9, 1, -19, -7, -4, -11, -7, -13, -5, -3, -21,
-4, 2, -24, -1, 2, -20, -10, -2, -9, -7, -14, -3, -2, -16, -4, -4, -7, -19, 9,
-13, -16, 8, -19, -2, -3, -10, -2, -13, -2, -4, -11, 0, -11, 0, -9, -8, -3, -6,
-8, -3, -5, -11, 3, -13, -2, -1, -11, -5, -1, -4, -12, -1, -1, -14, -3, 3, -12,
0, -5, -8, -1, -5, -1, -10, -3, 2, -10, -5, 3, -7, -7, 0, -2, -8, 0, -6, 1, -2,
-14, 12, -12, -7, 6, -5, -6, 3, 2, -18, 8, 0, -14, 6, 1, -10, 1, -1, -10, 4, 3,
-8, -3, 4, -1, -4, 1, -6, -1, 7, -6, -4, 5, -6, -3, 9, -12, 3, 11, -11, 2, 3,
-3, -1, 3, 3, -4, 2, -1, 0, 0, -2, 9, -6, -1, 6, -4, -2, 6, -2, -2, 7, 1, -1, 1,
-1, 4, 2, 2, 0, -8, 19, -7, -12, 24, -11, -5, 18, -8, -5, 17, -8, -4, 16, -7,
-5, 11, 8, -9, 8, 7, -9, 7, 4, 4, -6, 5, 6, 1, 4, 2, 5, -1, 4, 13, -5, -1, 11,
-3, 5, 6, 5, 1, 2, 7, 6, -4, 10, 9, -11, 16, 4, -7, 16, -1, 1, 19, -9, 2, 17,
-10, 11, 12, -14, 18, 5, -9, 16, 5, -3, 10, 4, 1, 10, -3, 11, 9, -5, 14, 1, -1,
16, -7, 3, 18, -8, 8, 17, -11, 7, 13, -5, 14, 7, -10, 15, 7, -9, 22, -5, 1, 13,
-9, 15, 8, -6, 11, 9, -7, 14, 5, -5, 12, 3, 1, 14, -1, -4, 16, 0, 0, 15, -4, 5,
13, -2, 3, 2, 8, 10, 3, -1, 8, 9, -4, 9, 9, -2, 6, 8, 0, 4, 9, 3, 9, -5, 8, 10,
-2, 10, 1, 6, 2, 9, 2, 4, 4, 6, 0, 8, 11, -13, 20, 2, -8, 16, 1, 1, 7, -2, 14,
0, -7, 21, -2, -3, 11, 2, 1, 9, 4, 3, 6, 1, 5, 6, 0, 3, 8, 6, 1, 5, 4, 2, 10,
-1, 5, 1, 2, 12, 1, 0, 6, 6, -4, 10, 4, -1, 10, 1, 2, 5, 3, 5, 2, 3, 6, 0, 9, 2,
4, 6, -3, 12, 3, -6, 19, -3, -4, 16, -2, 2, 8, 8, -2, 6, 9, -2, 3, 12, 3, -3, 7,
13, -5, 6, 15, 1, 3, 5, 6, 4, 9, 0, 5, 13, 1, -4, 15, 3, 3, 9, 2, 6, 9, 1, 1,
16, -3, 9, 5, 8, 3, 5, 10, 1, 9, 4, 8, -1, 11, 6, 5, 5, 3, 10, 0, 9, 10, -4, 7,
19, -6, 1, 19, -1, 0, 17, -3, 14, 7, -5, 19, -5, 8, 10, 4, 13, 0, 5, 14, 2, 3,
8, 11, 3, 3, 15, -1, 10, 5, 6, 15, -1, 2, 22, -1, -2, 21, -2, 11, 13, 0, 7, 16,
1, 0, 20, 4, -5, 19, 13, -6, 13, 14, 3, 6, 12, 9, 1, 10, 13, 0, 12, 9, 6, 12, 3,
10, 12, 9, 1, 13, 9, 4, 16, 1, 10, 11, 0, 17, 4, 5, 18, 1, 5, 15, 8, -4, 22, 4,
-1, 22, -1, 10, 17, -2, 3, 22, 3, 7, 14, -3, 15, 16, 0, 12, 3, 11, 14, 0, 16, 9,
2, 13, 12, 6, 9, 7, 9, 8, 11, 13, 6, 9, 6, 9, 14, 8, 1, 14, 15, -2, 16, 9, 2,
20, 2, 6, 20, -2, 12, 17, -3, 15, 15, -2, 16, 16, -4, 13, 17, 1, 12, 14, -1, 14,
19, -3, 19, 11, -4, 22, 3, 9, 18, 2, 6, 18, 8, 8, 9, 8, 11, 8, 18, 2, 7, 16, 8,
3, 18, 7, 3, 16, 9, 10, 10, 12, 2, 11, 17, 3, 7, 20, -1, 6, 20, 4, 5, 19, 4, 5,
15, 7, 11, 6, 12, 8, 5, 13, 9, 7, 14, 6, 9, 12, 6, 14, 0, 16, 15, -12, 28, 9,
-6, 20, 5, 14, 5, 7, 16, 5, 9, 10, 6, 9, 12, 8, 3, 13, 10, 5, 16, 1, 4, 22, -5,
8, 21, -6, 14, 11, 0, 16, 7, 1, 13, 7, 6, 11, 8, 6, 9, 8, 3, 8, 15, 3, 4, 14, 2,
11, 5, 7, 10, 4, 13, 0, 8, 9, 4, 11, 6, 7, 3, 11, 11, 1, 12, 2, 7, 11, -1, 11,
10, -2, 15, 10, -2, 8, 9, 13, -2, 4, 16, 3, 7, 13, -3, 16, 9, -4, 13, 8, 5, 8,
8, 3, 9, 11, 7, -2, 17, 10, -5, 15, 11, -1, 15, 7, 4, 11, 5, 4, 16, 5, -5, 30,
-6, 1, 22, 3, 1, 17, 7, -2, 20, 3, -1, 18, 10, -2, 21, 1, 3, 20, 2, 5, 13, 5,
10, 8, 3, 14, 6, 5, 11, 11, 1, 8, 18, -2, 6, 24, -2, 7, 13, 7, 3, 12, 18, -8,
17, 8, 2, 17, 5, 13, 8, 8, 7, 13, 6, 9, 11, 1, 21, 3, 9, 14, 1, 11, 15, 5, -2,
27, 10, -10, 27, 4, -4, 33, -3, -2, 29, -2, 8, 26, -8, 13, 17, -5, 17, 11, 6,
14, 9, 7, 13, 7, 8, 13, 6, 13, 10, 11, 9, 5, 16, 7, 8, 14, 10, 4, 10, 20, 0, 10,
16, 2, 19, 3, 9, 18, 6, 4, 14, 17, 1, 14, 12, 5, 9, 16, 4, 10, 17, 4, 16, 3, 5,
22, 2, 8, 18, 7, 10, 13, 3, 12, 16, 0, 11, 13, 12, 10, 4, 15, 8, 10, 15, 4, 11,
18, 6, 1, 21, 6, 9, 14, 4, 15, 13, 3, 12, 14, 0, 18, 13, 3, 13, 13, 1, 19, 9, 0,
16, 15, 8, 5, 16, 3, 9, 15, 9, 5, 15, 10, 1, 18, 8, 4, 18, 8, 6, 15, 0, 12, 18,
0, 11, 12, 7, 13, 7, 11, 14, 1, 7, 17, 8, 9, 8, 8, 11, 5, 11, 13, 5, 10, 13, 3,
12, 10, 1, 14, 14, 5, 12, 7, 3, 15, 11, 5, 11, 10, 1, 20, 5, 3, 18, 5, 8, 8, 16,
4, 7, 12, 4, 16, 5, 5, 13, 11, 4, 8, 19, -3, 13, 12, -4, 23, 4, 3, 18, 2, 7, 16,
7, 2, 10, 15, 3, 10, 13, 3, 10, 6, 14, 5, 8, 14, 6, 2, 11, 16, 0, 9, 12, 3, 8,
15, 0, 8, 9, 4, 16, 4, -5, 19, 12, -5, 16, 3, 7, 9, 6, 12, 3, 5, 8, 10, 3, 9, 7,
6, 11, 3, 5, 9, 5, 12, 5, -3, 21, -2, 1, 18, -2, 11, 7, 2, 15, -2, 4, 14, -1,
10, 9, 7, 2, 7, 11, 2, 2, 15, 4, 4, 9, -1, 17, 1, 6, 7, 0, 11, 5, 10, 3, 1, 13,
0, 12, 5, 1, 14, 0, 3, 8, 9, 5, 6, 4, 7, 7, 7, 4, 5, 5, 9, 6, 0, 10, 9, 0, 11,
2, 4, 15, -5, 11, 5, 1, 11, 10, -7, 13, 7, 0, 14, -8, 11, 9, 5, 9, -3, 8, 13,
-7, 13, 8, 0, 9, 10, 0, 7, 13, -11, 22, 3, 2, 15, -2, 11, 7, 0, 10, 10, 1, 11,
3, 4, 15, 3, 9, 7, -3, 19, 4, 1, 14, 3, 4, 13, 4, -1, 18, 4, 3, 13, 5, 5, 10, 8,
2, 7, 8, 14, 3, 7, 14, -5, 13, 7, 2, 14, 6, 4, 12, 6, 6, 11, 0, 14, 7, 2, 12,
10, -2, 15, 16, -10, 16, 8, 2, 12, 8, 5, 9, 7, 3, 18, -2, 9, 11, 3, 12, 1, 10,
13, 4, 3, 17, -2, 9, 17, -1, 9, 8, 10, 4, 11, 8, 2, 15, 9, -4, 14, 15, -3, 9,
15, 0, 7, 10, 9, 11, 2, 1, 20, 6, -9, 25, 1, 4, 17, -4, 9, 17, -5, 10, 24, -19,
17, 22, -16, 15, 15, 0, 9, 12, 2, 8, 8, 7, 9, 1, 16, 5, 1, 13, 8, 2, 13, 6, 3,
9, 7, 10, 5, 6, 4, 15, -4, 12, 9, -3, 16, 7, 4, 8, 5, 4, 17, 0, 4, 12, 8, 3, 8,
6, 8, 8, 3, 13, -3, 16, 6, 0, 14, 7, 3, 7, 11, 2, 8, 7, 8, 4, 8, 11, 2, 8, 6, 6,
9, 5, 10, 3, 9, 4, 5, 14, -4, 13, 15, -9, 13, 13, -5, 12, 11, -6, 14, 13, -7,
15, 3, 7, 16, -10, 14, 12, -8, 18, 5, 1, 10, 5, 7, 8, 6, 4, 5, 6, 10, 0, 16, 6,
-7, 22, 0, 1, 14, 2, 9, 2, 5, 9, 9, 3, 5, 5, 6, 9, -4, 17, 6, -4, 12, 7, 0, 14,
3, -5, 16, 1, 2, 15, -1, 5, 8, 1, 10, 7, -1, 9, 4, 3, 12, -2, 8, 7, 3, 6, 5, 4,
11, 5, -5, 11, 9, 4, -2, 12, 2, 2, 11, 2, 0, 7, 14, -10, 8, 12, -1, -1, 9, 11,
-6, 10, 11, -11, 11, 11, -17, 23, 2, -9, 15, 3, -3, 12, 6, -9, 8, 7, 2, 4, 9,
-6, 6, 11, -9, 11, 7, -8, 12, 2, -2, -1, 12, 4, -8, 13, -2, 3, 6, 2, 1, 2, 7,
-1, 6, 5, -7, 10, 4, -3, 4, 8, -9, 8, 13, -14, 10, 7, -6, 5, 11, -13, 8, 18,
-17, 2, 17, -11, 4, 15, -19, 9, 15, -11, 3, 12, -7, 6, 4, -6, 15, -4, 4, 4, -2,
9, -6, 0, 14, -1, -7, 15, 0, -8, 14, 0, -9, 21, -5, -9, 15, -1, 3, -1, 3, 6, -5,
9, -1, -3, 15, -12, 6, 12, -11, 2, 13, 0, -7, 11, 0, -2, 8, -3, 5, 6, -3, 6, -4,
11, 3, -9, 15, 2, -5, 9, 0, 5, 4, -1, 12, -6, 7, 4, -5, 12, 3, -5, 9, 11, -7,
10, 5, -8, 16, 1, -7, 14, 6, -4, 8, 3, -2, 14, -1, 0, 12, -2, 3, 12, -3, 1, 14,
-5, 8, 5, 0, 10, 2, 2, 2, 11, -4, 6, 9, -1, 8, 2, 4, 4, 9, 0, 3, 6, 5, 3, 1, 9,
5, 0, 5, 4, 2, 15, -9, 4, 19, -8, 4, 13, -2, -4, 7, 17, -11, 6, 18, -12, 5, 12,
1, -3, 15, -3, 0, 13, -2, 5, 10, -3, 1, 7, 2, 4, 4, 6, -2, 8, 2, -2, 12, 0, -3,
16, 1, -2, 12, 4, -7, 14, -1, 1, 16, -7, 2, 7, 7, 0, 3, 1, 6, 1, 7, 4, 2, 0, 7,
1, 0, 13, -9, 13, -3, 2, 11, -3, 3, 9, -6, 2, 14, -8, 6, 7, -3, 4, 4, 3, 8, -4,
0, 7, 0, 8, -1, 1, 8, -5, 10, -1, -3, 15, -8, -1, 16, -6, 1, 13, -8, 2, 9, 4,
-5, 6, 9, -8, 8, -3, 2, 14, -7, 2, 5, -1, 9, -1, -3, 15, -7, -2, 16, -7, 0, 6,
4, 3, -5, 11, 0, -9, 21, -6, -7, 14, -1, 5, -3, 2, 9, -6, 3, 7, 1, -3, 11, -3,
-4, 11, -7, 9, 0, 3, 3, -3, 7, -2, 2, 6, -2, 2, 4, -5, 4, 5, -5, 6, 0, 1, 8,
-11, 7, 5, -5, 6, 3, -11, 12, 3, -14, 18, -5, -10, 13, -7, 0, 9, -7, 3, 5, -2,
-5, 12, -5, -6, 11, -6, 2, 1, -2, 2, 3, -1, -3, -2, 13, -9, -9, 20, -9, -5, 11,
-8, 3, 6, -10, 6, 4, -12, 6, 13, -19, 6, 10, -16, 10, 5, -15, 9, 5, -12, 11, -3,
-7, 6, 2, -5, 3, -1, 0, 4, -6, 2, 3, -5, 3, 2, -4, 3, -4, 1, -1, 4, -4, -4, 7,
-7, 2, 4, -3, -1, 2, -3, -1, 0, 4, -2, -2, 2, -1, 1, -3, 3, -5, 2, 1, 0, 0, -3,
-1, -2, 4, -4, 5, -6, -7, 13, -11, -1, 8, -11, 4, -2, -4, 7, -5, -3, 7, -15, 9,
0, -16, 20, -9, -9, 12, -11, -2, 10, -12, 6, -1, -9, 8, -3, 1, 1, -6, 3, -2, -5,
4, 1, -10, 5, 3, -10, 11, -6, -3, 6, -5, -2, 1, 2, 2, -7, 2, -3, 0, 8, -14, 9,
-2, -11, 8, 1, -8, 4, 1, -3, 2, -2, -1, -3, 4, -2, -2, 2, -2, -2, 0, -2, 2, -2,
-2, 4, -5, -3, 7, -6, -1, 9, -10, -2, 12, -18, 10, 6, -22, 17, -2, -9, 8, -4,
-4, 9, -5, -5, 5, 0, -4, 1, 3, -7, 8, -7, -1, 7, -8, 5, 0, -2, -1, -4, 6, -3,
-1, 3, -4, 4, -3, 0, 2, -2, 3, -5, 3, 5, -9, 4, 1, -5, 2, 2, -4, -3, 9, -7, -1,
8, -10, 3, 1, -5, 4, -2, -2, -1, 4, -1, -1, -3, -2, 4, -4, -4, 7, -2, -5, 5, -5,
-3, 2, -4, 2, 4, -7, 0, 4, -4, -3, 6, -6, -4, 10, -7, -1, 4, -6, -1, 1, -1, -2,
3, -3, 0, 1, -5, 5, -6, 4, 0, -11, 12, -6, -4, 7, -6, 0, -2, -1, 4, -4, -7, 10,
-4, -7, 9, -6, -3, 7, -9, 0, 2, -9, 13, -7, -7, 8, -3, -9, 6, 3, -12, 7, -1, -7,
4, 0, -8, 8, -3, -8, 8, -6, -1, 3, -6, -1, 2, -2, -3, 3, -2, -8, 9, -7, -4, 9,
-12, 2, 4, -11, 4, 2, -7, 5, -1, -9, 7, -2, -7, 4, -4, -2, 1, 1, -6, 0, 3, -10,
1, 4, -7, -4, 8, -8, -5, 7, -6, -3, 2, -1, -9, 7, -4, -6, 6, -8, 1, 2, -7, 0, 2,
-8, 6, -6, -4, 6, -11, 4, -1, -6, 2, -5, 1, -4, -4, 3, -2, -5, -1, 1, -4, -4, 3,
-5, -4, 3, -6, -1, -1, 4, -10, -3, 6, -8, -3, 0, 4, -6, -6, 3, -3, -5, 2, -5,
-5, 6, -8, 0, -2, -7, 4, -7, -2, 0, -5, 1, -4, -4, 2, -5, -1, -1, -6, -4, 4, -4,
-7, 0, 0, -7, 0, 1, -10, 4, -4, -6, 4, -7, -3, 1, -5, -2, -2, -5, 2, -3, -8, 4,
-4, -2, 0, -7, -2, -3, -1, -3, -2, -1, -3, 0, -6, -3, 1, -5, -1, -2, -3, -3, 0,
-5, -2, -2, -5, -1, -2, -4, 1, -9, 0, 3, -13, 4, -4, -6, 3, -7, -3, 2, -4, -4,
-3, -4, 1, -4, -2, -2, -4, -1, -6, 0, -2, -7, 2, -5, -4, 0, -5, -1, -2, -7, 1,
-2, -6, -1, 0, -4, -5, 2, -2, -9, 3, 0, -9, 1, -2, -3, -6, 0, -1, -8, 0, -2, -2,
-3, -4, -3, -1, -1, -3, -3, -2, -1, -4, -3, 1, -6, 0, -1, -6, 3, -9, -1, 3, -8,
4, -4, -8, 4, -4, -7, 6, -6, -6, 3, -2, -7, 0, 1, -9, 4, -4, -5, 2, -9, 2, 0,
-7, 1, -3, -1, -2, -7, 3, -2, -6, 0, -3, -3, 0, -4, -2, 0, -6, 0, -1, -5, -5, 3,
-3, -7, 4, -7, 0, -4, -4, 4, -9, 1, -2, -5, 0, -1, -5, -3, 3, -7, -1, 0, -9, 3,
-2, -8, 4, -2, -10, 4, -2, -9, 5, -3, -7, 3, -4, -4, -1, -5, 3, -6, -3, 1, -5,
-2, -3, -1, -3, 0, -3, -4, 1, -2, -7, 2, -1, -8, 0, 3, -11, 1, 2, -13, 5, -2,
-8, 2, -2, -3, -1, -4, -1, -6, 0, -1, -5, -1, -1, -3, -4, 0, -5, -2, 0, -5, -4,
2, -5, -5, 2, -6, -5, 3, -5, -5, 0, -3, -5, 1, -7, -1, 1, -11, 3, -2, -4, -2,
-2, -6, -1, -1, -6, 1, -6, -3, 0, -6, -2, 0, -7, -1, 1, -7, -4, 0, -4, -2, -5,
-1, -2, -4, -2, -4, -2, -1, -3, -6, -3, 0, -3, -5, -1, -3, -3, -1, -4, -3, -2,
-6, 1, -3, -5, -1, -5, -1, -5, 0, -2, -6, 0, -4, -3, -1, -6, -2, 0, -5, -2, -3,
-8, 2, -3, -8, 3, -5, -6, 0, -3, -5, -3, 0, -4, -5, 1, -4, -6, 1, -5, -3, -2,
-6, 0, -2, -4, -2, -4, -1, -5, -1, -2, -8, 3, -6, -4, 1, -6, 0, -5, -3, 1, -6,
-3, 0, -5, -5, 1, -6, -3, 1, -6, -2, -1, -3, -4, -2, -2, -5, 1, -5, -5, 0, -3,
-1, -4, -2, -5, -1, -1, -7, 1, -2, -6, -1, -2, -5, -1, -3, -2, -5, -2, -1, -4,
-2, -4, -2, -3, -2, -5, -1, -3, -4, -1, -4, -1, -3, -5, -2, -2, -6, -1, -1, -5,
-1, -3, -3, -3, -3, -4, -2, -2, -4, -2, -5, -2, -2, -4, -2, -1, -6, -3, 0, -5,
-1, -2, -5, -1, -4, -3, -2, -4, -1, -4, -4, 1, -6, -4, 1, -6, -2, -2, -4, -1,
-6, 0, 0, -6, -2, -2, -4, -2, -3, -3, -1, -3, -4, -3, -1, -4, -3, -2, -3, -3,
-3, -1, -4, -4, 0, -5, -3, 0, -5, 0, -5, -3, -1, -5, 1, -4, -4, -1, -3, -4, 0,
-4, -3, -1, -4, -2, -4, -1, -4, -3, -1, -4, -4, -1, -3, -4, -1, -2, -5, -2, 0,
-5, -2, -2, -4, -1, -1, -5, -2, 0, -5, -3, -1, -5, -1, -3, -3, -1, -5, -2, 0,
-4, -2, -2, -5, -1, -4, -1, -2, -6, 0, -3, -3, -2, -4, -2, -2, -4, -1, -3, -3,
-2, -4, -2, -4, -2, -1, -5, -1, -3, -3, 1, -6, -2, 0, -5, -2, -2, -2, -4, -2,
-4, -2, -1, -5, -2, -3, -2, -1, -3, -4, -1, -4, -3, -2, -3, -2, -3, -4, -1, -2,
-5, -1, -2, -4, -2, -2, -4, -1, -4, -3, 0, -6, -2, 0, -5, -2, -1, -5, 0, -3, -4,
0, -5, -2, -2, -4, -1, -2, -3, -2, -3, -2, -3, -3, -2, -3, -1, -3, -4, -2, -1,
-4, -3, -1, -3, -3, -3, -2, -3, -2, -2, -3, -2, -3, -2, -3, -3, -3, -2, -3, -2,
-2, -3, -2, -2, -3, -2, -2, -3, -2, -4, -1, -2, -5, -2, -1, -5, -2, -1, -4, -2,
-3, -2, -3, -2, -2, -3, -3, -2, -2, -4, -2, -1, -5, -2, -1, -4, -2, -2, -3, -2,
-1, -4, -2, -1, -4, -2, -2, -3, -2, -1, -4, -3, -1, -3, -3, -1, -4, -2, -1, -5,
0, -3, -3, -1, -4, -1, -3, -4, -1, -3, -3, -2, -3, -2, -2, -3, -2, -3, -2, -3,
-3, -2, -3, -2, -2, -3, -2, -2, -3, -1, -3, -3, -2, -3, -2, -3, -3, -1, -3, -3,
-2, -3, -2, -2, -3, -3, -2, -3, -2, -2, -3, -2, -3, -2, -2, -3, -3, -2, -3, -1,
-3, -3, -2, -3, -2, -3, -2, -2, -3, -2, -2, -3, -3, -2, -2, -3, -2, -2, -3, -1,
-3, -3, -1, -3, -2, -2, -3, -2, -2, -3, -2, -3, -2, -2, -2, -2, -3, -2, -2, -3,
-2, -2, -2, -2, -3, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -3, -2, -2, -2,
-2, -3, -2, -2, -3, -2, -2, -3, -2, -2, -2, -2, -2, -2, -2, -2, -3, -2, -3, -2,
-2, -3, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, };

#endif /* FANGNINE_H_ */