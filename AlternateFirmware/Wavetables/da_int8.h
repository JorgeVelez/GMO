#ifndef DA_H_
#define DA_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define DA_NUM_CELLS 4092
#define DA_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) DA_DATA [] = {0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1,
-1, 0, 0, 0, 0, 0, 0, 0, 1, 2, 4, 5, 4, 3, 4, 3, 2, 2, 5, 7, 6, 3, 2, 3, 2, 0,
1, 3, 4, 3, 2, 3, 2, -1, -2, 0, 2, 2, 1, 2, 2, 0, -1, 1, 1, 0, 2, 5, 7, 8, 6, 4,
3, 1, 2, 5, 7, 8, 9, 10, 10, 8, 6, 5, 5, 6, 9, 12, 12, 11, 8, 4, 1, 1, 1, 0, 0,
2, 1, -2, -5, -8, -10, -11, -13, -11, -10, -12, -14, -18, -23, -25, -25, -25,
-21, -21, -20, -22, -24, -30, -33, -36, -27, -5, 17, 28, 15, -1, -7, 0, 7, 16,
20, 33, 43, 38, 31, 25, 19, 7, -9, -14, 3, 22, 23, 5, -16, -32, -38, -43, -43,
-35, -26, -25, -27, -25, -19, -16, -22, -27, -22, -3, 16, 28, 29, 24, 18, 18,
24, 35, 44, 44, 42, 40, 40, 38, 30, 18, 8, 6, 9, 15, 18, 14, 6, -9, -18, -19,
-13, -1, 0, -1, 2, 4, 7, 5, 1, 2, 5, 12, 23, 33, 37, 32, 22, 11, 6, 6, 4, -1,
-1, 1, 5, -1, -16, -34, -43, -42, -33, -29, -31, -39, -47, -49, -54, -57, -58,
-54, -49, -44, -46, -45, -55, -60, -30, 22, 75, 80, 40, 10, 14, 32, 44, 45, 53,
67, 64, 44, 33, 31, 18, -22, -59, -59, -24, 2, -4, -30, -55, -69, -84, -92, -79,
-50, -28, -21, -20, -7, 13, 23, 19, 14, 23, 43, 58, 63, 64, 57, 45, 33, 25, 23,
19, 8, 5, 4, 0, -11, -33, -49, -54, -54, -48, -38, -25, -8, 5, 16, 28, 33, 36,
44, 58, 78, 92, 95, 91, 77, 57, 42, 35, 29, 19, 0, -14, -17, -21, -34, -54, -75,
-86, -83, -66, -39, -18, -18, -43, -66, -66, -41, -18, -10, -14, -13, -7, -9,
-17, -29, -31, -31, -28, -31, -31, -35, -56, -82, -100, -60, 13, 72, 68, 16,
-18, -3, 23, 32, 29, 33, 54, 62, 63, 71, 78, 55, -1, -47, -45, -1, 35, 32, 15,
-4, -22, -47, -75, -79, -60, -46, -43, -44, -22, 15, 32, 22, -1, -15, -10, 8,
27, 46, 61, 62, 53, 38, 24, 12, 2, -1, 6, 9, 10, 5, -6, -13, -29, -45, -51, -38,
-4, 40, 67, 72, 63, 49, 45, 50, 55, 64, 73, 73, 69, 62, 55, 40, 10, -20, -34,
-29, -14, -6, -11, -25, -45, -69, -77, -64, -31, -2, -5, -33, -51, -49, -32,
-27, -37, -43, -42, -36, -29, -20, -20, -29, -56, -79, -78, -63, -48, -49, -70,
-59, -8, 56, 91, 50, 1, -1, 22, 48, 49, 44, 58, 69, 65, 60, 56, 40, 3, -32, -48,
-40, -23, -13, 4, 3, -21, -60, -93, -81, -57, -53, -60, -56, -20, 32, 56, 52,
38, 24, 14, 8, 14, 31, 49, 54, 53, 45, 31, 11, -21, -42, -49, -48, -33, -18, -7,
-1, -12, -28, -42, -46, -29, 6, 55, 91, 106, 102, 92, 91, 86, 76, 65, 54, 52,
48, 48, 50, 32, 1, -42, -71, -78, -73, -56, -45, -45, -57, -70, -66, -42, -9, 4,
-15, -40, -43, -19, 9, 12, 0, -17, -28, -31, -23, -11, -11, -31, -70, -90, -82,
-61, -59, -80, -104, -76, 1, 70, 87, 39, -4, 6, 40, 57, 52, 45, 63, 84, 85, 76,
61, 43, 12, -31, -67, -71, -38, 1, 11, -19, -60, -73, -68, -63, -68, -80, -73,
-47, -7, 42, 73, 81, 66, 47, 37, 37, 41, 45, 50, 50, 45, 42, 40, 30, -7, -53,
-75, -76, -64, -56, -55, -41, -29, -28, -36, -36, -16, 13, 44, 64, 79, 97, 105,
112, 114, 105, 96, 72, 45, 27, 22, 33, 31, 6, -27, -52, -57, -60, -70, -82, -93,
-96, -89, -61, -20, 14, 20, -10, -46, -59, -41, -11, 3, 0, -8, -6, 7, 18, 10,
-22, -68, -98, -97, -77, -56, -52, -64, -71, -47, 5, 52, 56, 21, 2, 19, 52, 68,
62, 61, 68, 70, 55, 43, 40, 32, 6, -36, -61, -48, -17, -1, -15, -43, -59, -60,
-54, -49, -47, -42, -33, -15, 17, 53, 76, 77, 65, 55, 52, 54, 49, 35, 19, 6, 5,
13, 16, 3, -24, -49, -62, -61, -59, -60, -57, -44, -26, -9, 3, 21, 46, 67, 71,
71, 79, 99, 116, 110, 97, 87, 75, 53, 20, -6, -12, -13, -21, -39, -52, -50, -46,
-50, -67, -76, -71, -64, -54, -33, 5, 38, 37, 12, -13, -14, -1, 0, -4, -11, -11,
-6, -5, -6, -22, -52, -85, -111, -113, -108, -107, -93, -34, 50, 100, 80, 24, 9,
43, 59, 35, 6, 25, 86, 121, 113, 91, 76, 48, -13, -74, -92, -58, -13, 2, -6,
-19, -18, -14, -28, -52, -76, -86, -66, -22, 44, 102, 120, 106, 77, 53, 37, 26,
20, 13, 6, 1, 13, 33, 40, 23, -14, -51, -73, -80, -73, -58, -33, -10, -3, 0, 11,
33, 47, 43, 36, 45, 74, 104, 115, 107, 91, 78, 69, 52, 25, -5, -23, -29, -26,
-20, -17, -17, -25, -41, -55, -64, -59, -53, -49, -36, -11, 23, 40, 29, 5, -11,
-14, -19, -32, -43, -39, -23, -16, -17, -24, -35, -51, -84, -115, -128, -115,
-76, -14, 51, 89, 89, 63, 56, 62, 51, 16, -16, -3, 41, 75, 83, 79, 67, 33, -17,
-62, -82, -76, -63, -52, -33, -10, 14, 28, 19, -2, -32, -55, -53, -24, 26, 72,
95, 104, 103, 92, 62, 18, -20, -41, -47, -44, -31, -8, 13, 17, -3, -28, -50,
-64, -69, -69, -52, -22, 8, 35, 54, 65, 71, 69, 62, 55, 53, 59, 73, 82, 73, 58,
43, 34, 18, -10, -33, -42, -42, -39, -37, -29, -18, -15, -24, -37, -42, -35,
-20, -5, 7, 17, 25, 29, 24, 14, 8, -4, -25, -46, -56, -51, -45, -47, -50, -52,
-60, -80, -100, -108, -94, -72, -35, 18, 65, 94, 87, 76, 79, 81, 64, 28, 14, 30,
53, 56, 45, 36, 23, -6, -43, -68, -72, -65, -65, -65, -54, -29, -1, 11, 8, -2,
-9, -6, 2, 21, 47, 69, 83, 87, 88, 77, 54, 21, -12, -35, -49, -51, -43, -30,
-20, -19, -19, -23, -34, -46, -54, -48, -34, -18, 3, 26, 50, 70, 79, 78, 70, 59,
50, 43, 39, 36, 34, 33, 27, 18, 4, -5, -11, -26, -44, -55, -48, -32, -23, -26,
-32, -30, -21, -11, -2, 5, 11, 14, 12, 8, 7, 11, 7, -12, -38, -50, -47, -43,
-46, -56, -63, -65, -68, -76, -82, -87, -88, -77, -54, -8, 48, 82, 90, 73, 69,
83, 89, 72, 36, 17, 22, 35, 40, 32, 19, -2, -33, -60, -74, -74, -68, -71, -74,
-65, -43, -10, 11, 16, 8, -1, 3, 20, 44, 64, 75, 76, 71, 69, 64, 50, 23, -15,
-47, -62, -59, -46, -36, -34, -37, -36, -33, -31, -30, -32, -32, -25, -12, 10,
36, 62, 81, 85, 80, 70, 64, 60, 48, 35, 27, 24, 21, 13, 10, 10, 2, -18, -40,
-49, -46, -43, -46, -50, -47, -35, -22, -15, -10, 0, 17, 29, 26, 18, 19, 26, 25,
11, -6, -15, -19, -22, -28, -36, -47, -61, -71, -77, -81, -89, -95, -92, -82,
-67, -51, -31, 0, 42, 72, 87, 84, 86, 97, 94, 75, 49, 39, 43, 40, 29, 17, 9, -7,
-32, -52, -66, -75, -81, -84, -75, -60, -44, -26, -11, 1, 9, 13, 21, 34, 49, 58,
61, 63, 63, 59, 47, 31, 14, -8, -31, -47, -50, -45, -45, -48, -47, -37, -26,
-23, -28, -31, -27, -16, -3, 15, 38, 60, 74, 78, 77, 78, 74, 61, 40, 22, 13, 13,
15, 12, 6, -4, -14, -25, -37, -47, -55, -57, -59, -57, -49, -37, -23, -12, -2,
10, 25, 40, 44, 41, 37, 36, 36, 29, 14, -1, -12, -17, -23, -33, -48, -63, -73,
-81, -85, -89, -90, -87, -84, -80, -73, -58, -37, -16, 8, 46, 82, 105, 106, 102,
109, 108, 87, 51, 29, 27, 26, 15, -4, -13, -19, -32, -53, -76, -90, -94, -94,
-89, -77, -55, -25, 0, 15, 21, 27, 37, 44, 50, 53, 55, 57, 56, 55, 50, 39, 20,
-5, -29, -48, -54, -52, -51, -54, -56, -48, -35, -25, -20, -17, -11, 0, 13, 26,
41, 56, 71, 80, 80, 75, 68, 60, 43, 22, 6, 1, 0, -6, -17, -26, -28, -28, -32,
-43, -56, -59, -53, -44, -36, -27, -13, 3, 16, 29, 42, 54, 53, 43, 34, 30, 33,
31, 20, 3, -13, -22, -27, -34, -43, -53, -64, -74, -80, -78, -75, -77, -83, -80,
-64, -46, -31, -22, -15, -5, 9, 36, 79, 109, 116, 98, 86, 96, 101, 82, 40, 10,
0, -5, -16, -26, -28, -38, -58, -78, -83, -77, -72, -75, -78, -69, -48, -16, 12,
28, 31, 31, 38, 48, 56, 58, 52, 44, 36, 36, 37, 31, 14, -11, -35, -47, -48, -44,
-48, -55, -58, -45, -24, -9, 1, 6, 11, 20, 29, 40, 50, 56, 58, 56, 56, 57, 57,
50, 34, 14, -5, -17, -24, -30, -37, -45, -48, -47, -41, -32, -26, -24, -25, -23,
-14, -4, 7, 12, 15, 24, 34, 46, 49, 43, 35, 28, 27, 22, 13, 0, -11, -17, -21,
-25, -30, -36, -40, -51, -62, -68, -65, -57, -53, -50, -43, -29, -15, -6, -1, 2,
2, 2, -3, -8, -8, 6, 45, 79, 90, 75, 67, 81, 80, 50, 2, -23, -23, -27, -36, -37,
-25, -23, -39, -52, -54, -51, -52, -60, -60, -52, -35, -8, 17, 30, 30, 29, 32,
32, 34, 32, 32, 27, 19, 21, 24, 26, 16, -6, -28, -42, -40, -36, -40, -44, -38,
-14, 8, 19, 25, 26, 27, 23, 18, 18, 20, 24, 26, 26, 30, 36, 43, 37, 17, -4, -17,
-22, -31, -43, -51, -52, -41, -31, -20, -11, -6, -2, -4, -5, -5, -5, -6, -9, -7,
8, 31, 54, 59, 50, 38, 31, 29, 19, 2, -18, -30, -27, -19, -13, -14, -19, -22,
-27, -31, -33, -33, -32, -35, -32, -20, -4, 9, 11, 7, 2, 0, 1, 1, -4, -11, -17,
-17, -21, -25, -28, -8, 31, 52, 46, 23, 29, 52, 47, 8, -30, -30, -19, -19, -24,
-17, -6, -14, -29, -34, -33, -34, -40, -44, -41, -34, -15, 9, 21, 19, 10, 11,
16, 16, 16, 16, 22, 24, 24, 25, 26, 25, 12, -11, -32, -36, -22, -15, -16, -18,
-7, 14, 24, 23, 14, 7, 4, 3, 4, 7, 16, 28, 33, 30, 27, 32, 35, 20, -4, -22, -23,
-18, -22, -26, -25, -16, -7, -3, -3, -6, -7, -10, -11, -7, -2, 1, 2, 5, 15, 25,
33, 39, 37, 30, 20, 20, 24, 21, 8, -6, -9, -3, 6, 11, 11, 10, 9, 8, 6, 5, 4, -2,
-13, -17, -11, 1, 11, 13, 9, 6, 8, 11, 12, 4, -7, -13, -15, -15, -16, -17, -20,
-29, -40, -50, -50, -26, 8, 29, 20, 6, 25, 55, 53, 16, -11, -8, -1, -5, -4, 13,
21, 7, -9, -13, -13, -20, -32, -42, -53, -54, -34, -10, -1, -10, -14, -3, 7, 10,
12, 16, 18, 14, 15, 21, 31, 36, 27, 11, -2, 3, 16, 17, 5, -6, -3, 6, 11, 12, 9,
6, 2, 0, 1, 4, 12, 16, 11, 1, 3, 18, 25, 14, -1, -5, 0, -1, -6, -8, -11, -17,
-23, -20, -13, -12, -16, -19, -18, -17, -15, -9, -1, 4, 6, 16, 38, 57, 57, 43,
32, 35, 39, 34, 22, 11, 9, 11, 14, 16, 20, 21, 16, 6, 1, 3, 6, 2, -7, -12, -10,
-2, 6, 7, 2, -2, -1, 6, 11, 8, 3, -1, -5, -9, -11, -8, -7, -15, -27, -32, -31,
-32, -38, -50, -61, -67, -59, -26, 9, 25, 17, 16, 36, 49, 36, 8, -4, -5, -8, -8,
5, 21, 17, 0, -13, -15, -16, -22, -32, -42, -46, -36, -16, 0, 3, -3, -3, 1, 5,
9, 18, 29, 33, 32, 37, 51, 62, 52, 27, 7, 2, 5, 1, -8, -11, -7, -4, -3, 0, 1,
-4, -15, -26, -28, -25, -19, -15, -14, -9, 1, 15, 26, 28, 23, 17, 13, 11, 10, 8,
3, 0, 3, 10, 15, 15, 14, 9, 3, -6, -12, -12, -13, -19, -23, -16, 2, 23, 33, 35,
34, 36, 39, 37, 31, 21, 12, 8, 9, 14, 19, 22, 19, 13, 7, 2, 1, -3, -12, -18,
-17, -8, 0, 4, 5, 3, 1, -1, -3, -7, -10, -11, -11, -10, -5, 0, 4, 1, -8, -15,
-18, -19, -24, -31, -36, -35, -30, -28, -28, -33, -37, -43, -51, -49, -27, 9,
33, 32, 27, 33, 45, 43, 25, 9, 0, -1, 5, 14, 20, 17, 12, 4, -7, -18, -23, -23,
-30, -39, -40, -30, -13, 0, 5, 6, 6, 11, 20, 25, 27, 26, 25, 21, 18, 17, 16, 7,
-10, -21, -22, -15, -11, -11, -12, -11, -6, 2, 8, 8, 4, 4, 8, 11, 12, 14, 16,
13, 8, 9, 15, 17, 12, 4, 1, 3, 7, 7, 3, -2, -4, -4, -2, -1, -1, -4, -10, -15,
-15, -12, -11, -13, -14, -10, 3, 20, 32, 34, 28, 24, 23, 26, 26, 21, 12, 2, 1,
8, 12, 8, 0, -6, -11, -14, -12, -11, -15, -20, -21, -15, -7, 3, 9, 9, 6, 7, 14,
17, 16, 11, 5, 1, -2, 1, 4, 2, -3, -7, -5, -3, -4, -10, -16, -21, -24, -24, -24,
-22, -21, -23, -23, -20, -14, -11, -12, -14, -15, -15, -18, -23, -21, -6, 16,
29, 29, 29, 38, 42, 30, 11, 0, -5, -15, -24, -21, -15, -16, -22, -24, -24, -24,
-22, -19, -20, -23, -17, -2, 7, 8, 8, 11, 10, 6, 8, 15, 18, 13, 7, 6, 8, 8, 0,
-13, -24, -29, -28, -26, -23, -18, -11, -4, 4, 11, 15, 13, 10, 9, 8, 8, 10, 14,
17, 15, 14, 15, 17, 13, 6, 0, -3, -3, -4, -6, -7, -8, -8, -5, -1, 1, 2, 1, -1,
-3, -3, -4, -6, -10, -12, -9, 0, 12, 19, 18, 16, 17, 19, 17, 11, 4, 2, 3, 5, 7,
8, 10, 7, 0, -8, -9, -8, -10, -13, -12, -5, 1, 6, 10, 13, 12, 9, 10, 9, 8, 7,
10, 13, 10, 7, 9, 12, 8, 2, -1, -1, -1, -2, -6, -8, -7, -7, -9, -11, -12, -11,
-12, -15, -19, -18, -17, -20, -25, -26, -25, -23, -22, -22, -23, -27, -26, -13,
4, 13, 10, 11, 19, 24, 17, 7, 2, -5, -14, -16, -9, -6, -8, -9, -7, -9, -14, -10,
-4, -6, -12, -11, -2, 4, 4, 5, 9, 9, 7, 6, 8, 10, 10, 7, 3, 3, 4, 2, -4, -12,
-15, -14, -12, -12, -11, -7, -3, 0, 2, 4, 6, 6, 6, 8, 10, 12, 14, 14, 14, 14,
13, 12, 11, 9, 5, 3, 1, 1, 0, 0, -2, -4, -5, -4, -3, -3, -3, -1, -2, -5, -5, -3,
-3, -5, -2, 4, 9, 12, 16, 18, 15, 11, 10, 10, 3, -4, -6, -7, -9, -12, -11, -9,
-8, -5, -5, -7, -8, -6, -3, -4, -4, -1, 4, 7, 7, 9, 11, 11, 8, 4, 3, 2, 1, -3,
-5, -4, -2, 0, -2, -2, -1, 0, 0, -2, -3, -3, -6, -8, -11, -11, -12, -13, -15,
-16, -17, -18, -17, -16, -17, -18, -17, -17, -18, -18, -17, -19, -24, -27, -30,
-32, -24, -4, 9, 6, 4, 17, 25, 16, 1, -4, -7, -14, -12, 0, 5, 3, 5, 5, -2, -8,
-5, -9, -22, -28, -18, -7, -5, -4, 0, 0, -4, -2, 1, 0, -2, 1, 3, 2, 5, 11, 10,
-3, -11, -9, -8, -12, -15, -13, -11, -9, -2, 5, 9, 8, 6, 4, 5, 5, 5, 3, 2, 2, 3,
7, 10, 9, 6, 5, 5, 4, 4, 5, 4, 0, 1, 4, 5, 2, 0, -1, -4, -6, -6, -8, -13, -17,
-16, -13, -8, 1, 9, 11, 9, 12, 16, 15, 9, 2, -4, -9, -8, -4, -4, -7, -9, -9,
-11, -11, -9, -9, -14, -16, -11, -2, 3, 7, 13, 17, 15, 15, 16, 14, 7, 2, 2, 0,
-2, 0, 4, 2, -2, -1, 2, 1, -1, -1, -3, -4, -3, -1, -1, -3, -4, -6, -7, -8, -7,
-7, -8, -7, -6, -5, -3, -2, -1, -3, -6, -6, -4, -4, -5, -6, -7, -9, -12, -13,
-14, -19, -26, -29, -29, -27, -25, -21, -13, -1, 9, 12, 13, 18, 22, 15, 6, 3, 3,
-1, -5, -4, -4, -7, -8, -8, -11, -14, -15, -15, -20, -21, -15, -9, -8, -8, -4,
-2, -1, 0, 4, 5, 4, 4, 6, 7, 7, 8, 7, 3, 0, 3, 4, 3, 2, 3, 4, 4, 5, 7, 5, 3, 3,
5, 6, 7, 9, 8, 7, 8, 10, 11, 10, 8, 8, 8, 8, 9, 12, 11, 8, 6, 6, 7, 6, 3, 0, -3,
-6, -6, -6, -8, -12, -13, -13, -12, -9, -4, -2, -2, -1, 2, 4, 5, 6, 4, 1, 0, 2,
3, 0, -2, -3, -3, -5, -5, -4, -3, -3, 0, 5, 8, 9, 10, 9, 6, 3, 3, 3, 2, 1, 1, 2,
3, 4, 4, 2, 1, 0, -1, -1, 1, 3, 4, 4, 4, 5, 4, 2, -2, -4, -5, -7, -7, -7, -6,
-6, -7, -7, -8, -7, -8, -8, -8, -8, -7, -6, -6, -7, -7, -7, -8, -9, -9, -8, -9,
-10, -11, -9, -7, -6, -3, -2, -1, 2, 6, 8, 6, 6, 6, 5, 3, 2, 1, -2, -4, -4, -5,
-6, -7, -7, -8, -9, -7, -5, -3, -1, 1, 3, 4, 5, 6, 5, 3, 2, 1, -2, -2, -2, -2,
-2, -1, 0, 1, 2, 2, 1, 1, 2, 3, 3, 3, 3, 3, 2, 2, 3, 3, 2, 2, 2, 3, 3, 5, 5, 4,
4, 6, 6, 4, 3, 3, 1, -1, -1, -2, -4, -5, -5, -5, -7, -6, -4, -4, -4, -4, -2, 0,
0, 0, 0, 0, -1, -2, -1, -1, -2, -2, -2, -3, -4, -4, -4, -4, -5, -5, -5, -5, -5,
-5, -5, -6, -5, -5, -5, -4, -2, -2, -3, -2, 1, 3, 2, 3, 5, 6, 6, 7, 8, 7, 5, 5,
4, 3, 2, 3, 3, 1, 0, 0, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 0, -2, -3,
-3, -4, -4, -5, -5, -5, -4, -5, -5, -6, -6, -7, -7, -7, -7, -6, -5, -5, -5, -4,
-3, -3, -3, -2, 1, 1, 1, 2, 3, 3, 1, 0, 0, -2, -3, -3, -3, -5, -4, -4, -4, -5,
-5, -5, -5, -6, -6, -4, -2, -1, 0, 1, 3, 4, 3, 2, 3, 2, 0, -1, 0, 1, 1, 0, 0, 0,
1, 1, 1, 1, 2, 3, 4, 4, 5, 5, 4, 3, 3, 3, 3, 2, 1, 1, 1, 1, 1, 0, 1, 1, 2, 2, 1,
1, 1, 0, -1, -3, -4, -5, -6, -8, -7, -5, -6, -6, -6, -6, -5, -5, -5, -6, -5, -4,
-3, -3, -3, -2, -1, -2, -3, -3, -3, -3, -4, -5, -5, -5, -5, -4, -4, -4, -4, -3,
-2, -2, -1, 0, 1, 1, 1, 2, 2, 1, 1, 1, 1, 0, 1, 1, 1, 1, 2, 2, 3, 3, 3, 3, 2, 2,
2, 2, 0, 0, 0, -1, -1, -1, -1, -2, -3, -3, -3, -3, -3, -2, -1, -1, 0, 1, 2, 2,
2, 2, 1, 1, 1, 0, -1, -1, -1, -1, -1, -1, -2, -2, -2, -2, -2, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -3, -3, -3, -2, -2,
-2, -1, -1, 0, 0, 0, -1, -1, -1, -2, -2, -2, -1, -2, -1, -1, -1, 0, 0, 0, 0, 1,
1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 1, 1, 2, 3, 3, 2, 2, 3, 2, 2, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2,
2, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 0, 0, 0, 0, 0, 0, -1, -2, -2, -2, -3, -3,
-3, -3, -3, -2, -2, -2, -2, -3, -3, -2, -2, -2, -2, -2, -1, 1, 2, 2, 2, 2, 2, 2,
1, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, -1, -1, 0, -1, -1, 0, 0, 0, 1, 1, 2, 1, 0, 1,
1, 2, 2, 2, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 0, 0, 1,
1, 0, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 0,
0, 0, 0, 1, 2, 2, 2, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1,
-1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2, 2, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, 0, -1, -1, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1,
0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1,
-1, 0, 0, -1, -1, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1,
-1, -1, 0, -1, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, -1, -1,
-1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, };

#endif /* DA_H_ */
