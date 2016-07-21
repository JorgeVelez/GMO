#ifndef DTSEVEN_H_
#define DTSEVEN_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define DTSEVEN_NUM_CELLS 2617
#define DTSEVEN_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) DTSEVEN_DATA [] = {-1, 7,
37, 14, -56, -93, -114, -120, -121, -121, -121, -121, -120, -120, -120, -120,
-120, -111, -96, -91, -88, -95, -105, -106, -104, -107, -113, -99, -76, -68,
-66, -79, -96, -80, -50, -40, -41, -50, -59, -61, -60, -49, -37, -36, -36, -21,
1, 35, 64, 57, 40, 30, 29, 51, 75, 87, 94, 101, 104, 88, 66, 37, 18, 33, 55, 69,
76, 75, 77, 92, 105, 103, 97, 91, 88, 92, 91, 78, 64, 57, 53, 53, 46, 22, 0,
-12, -11, 5, 18, 24, 18, 1, -7, 3, 21, 42, 55, 58, 64, 79, 87, 83, 78, 77, 78,
80, 76, 62, 55, 57, 61, 63, 60, 54, 54, 63, 73, 80, 81, 76, 65, 49, 34, 23, 30,
48, 60, 61, 60, 58, 61, 66, 62, 51, 41, 34, 28, 23, 19, 18, 20, 21, 17, 9, 5, 4,
1, -6, -18, -30, -32, -28, -21, -17, -19, -27, -45, -63, -70, -70, -66, -61,
-57, -55, -51, -50, -53, -59, -67, -77, -90, -102, -111, -116, -119, -120, -121,
-121, -121, -121, -120, -120, -120, -119, -119, -119, -119, -115, -107, -96,
-86, -79, -77, -76, -76, -77, -79, -80, -78, -77, -76, -77, -77, -75, -68, -59,
-50, -40, -29, -23, -22, -23, -24, -22, -16, -7, 2, 8, 11, 16, 22, 27, 30, 30,
31, 39, 50, 58, 62, 63, 62, 58, 55, 56, 63, 74, 85, 94, 100, 104, 106, 104, 101,
100, 102, 104, 106, 104, 101, 100, 100, 99, 96, 93, 88, 83, 76, 71, 67, 64, 61,
57, 52, 48, 43, 35, 27, 23, 23, 24, 25, 23, 20, 16, 13, 9, 6, 3, 4, 7, 11, 14,
14, 11, 7, 4, 1, -2, -6, -11, -18, -24, -28, -30, -29, -27, -26, -26, -28, -31,
-32, -31, -29, -27, -26, -26, -24, -22, -19, -17, -15, -14, -13, -14, -17, -24,
-31, -36, -39, -40, -42, -46, -50, -55, -60, -64, -68, -71, -74, -77, -78, -79,
-79, -78, -79, -80, -81, -84, -87, -90, -93, -94, -93, -90, -85, -77, -69, -61,
-56, -54, -54, -56, -60, -64, -69, -73, -75, -77, -76, -74, -70, -66, -63, -61,
-60, -58, -55, -49, -41, -32, -22, -14, -8, -5, -4, -2, 0, 3, 8, 14, 20, 28, 36,
43, 51, 58, 63, 67, 69, 70, 71, 72, 74, 77, 82, 87, 92, 97, 101, 105, 107, 109,
109, 108, 106, 103, 99, 94, 90, 86, 82, 77, 72, 68, 64, 61, 59, 59, 61, 64, 68,
71, 74, 75, 75, 72, 69, 65, 61, 58, 56, 54, 52, 51, 49, 45, 41, 36, 31, 25, 21,
17, 13, 9, 5, 1, -3, -6, -10, -12, -15, -16, -18, -19, -20, -21, -21, -21, -21,
-22, -22, -22, -23, -24, -26, -28, -31, -34, -37, -41, -45, -49, -53, -57, -61,
-64, -68, -70, -72, -73, -75, -76, -77, -79, -80, -82, -83, -84, -84, -84, -82,
-80, -77, -74, -71, -68, -65, -63, -61, -60, -59, -59, -60, -61, -63, -64, -65,
-65, -63, -61, -57, -53, -49, -44, -39, -35, -31, -27, -24, -21, -18, -15, -11,
-7, -3, 1, 4, 7, 9, 11, 12, 12, 12, 12, 12, 12, 13, 14, 16, 20, 24, 29, 34, 39,
43, 47, 51, 55, 58, 62, 65, 69, 72, 74, 77, 79, 80, 81, 81, 80, 78, 75, 72, 69,
66, 63, 60, 58, 56, 54, 52, 51, 51, 51, 52, 53, 54, 55, 55, 55, 55, 54, 52, 51,
49, 46, 44, 41, 39, 36, 34, 31, 29, 27, 26, 24, 23, 22, 22, 22, 22, 23, 24, 25,
25, 25, 24, 23, 21, 19, 16, 14, 11, 9, 6, 3, 0, -3, -7, -11, -15, -20, -25, -29,
-33, -37, -40, -42, -43, -44, -44, -44, -43, -43, -43, -44, -45, -47, -49, -51,
-53, -55, -57, -59, -60, -62, -63, -64, -65, -66, -67, -68, -69, -69, -70, -70,
-70, -71, -71, -70, -70, -69, -69, -68, -67, -67, -66, -65, -65, -64, -63, -62,
-60, -59, -57, -55, -53, -51, -49, -46, -43, -39, -35, -32, -28, -24, -21, -18,
-15, -12, -9, -6, -2, 0, 3, 5, 6, 7, 8, 8, 9, 9, 10, 11, 12, 14, 16, 18, 21, 23,
26, 29, 31, 33, 35, 37, 39, 40, 42, 45, 47, 51, 54, 57, 60, 63, 65, 66, 67, 67,
67, 67, 67, 67, 67, 68, 69, 70, 71, 71, 72, 72, 72, 72, 71, 70, 68, 66, 64, 62,
61, 59, 56, 54, 52, 49, 47, 45, 42, 40, 37, 34, 31, 28, 25, 22, 19, 16, 14, 11,
9, 7, 5, 3, 1, -1, -3, -5, -7, -9, -12, -14, -17, -19, -22, -24, -27, -29, -32,
-35, -38, -41, -45, -48, -51, -53, -56, -57, -58, -59, -59, -59, -58, -57, -57,
-56, -56, -55, -55, -55, -54, -54, -53, -53, -53, -53, -53, -54, -55, -56, -57,
-58, -58, -59, -59, -59, -59, -58, -58, -58, -57, -57, -57, -56, -56, -55, -54,
-53, -52, -50, -49, -47, -44, -42, -39, -37, -34, -32, -29, -27, -25, -23, -21,
-19, -17, -15, -14, -12, -10, -9, -7, -5, -2, 0, 2, 5, 7, 10, 13, 15, 18, 21,
24, 27, 29, 32, 34, 36, 38, 39, 40, 41, 41, 42, 42, 43, 44, 45, 47, 48, 50, 51,
52, 53, 54, 54, 55, 54, 54, 54, 53, 53, 52, 52, 51, 50, 50, 49, 47, 46, 45, 44,
42, 41, 40, 39, 38, 37, 37, 36, 36, 36, 35, 35, 34, 34, 34, 34, 33, 33, 32, 32,
31, 30, 28, 27, 26, 24, 23, 22, 20, 18, 17, 15, 12, 10, 8, 6, 3, 1, -1, -3, -6,
-8, -10, -13, -15, -17, -19, -21, -23, -25, -27, -29, -30, -32, -33, -34, -36,
-37, -38, -39, -41, -42, -43, -45, -46, -47, -48, -49, -50, -51, -51, -52, -53,
-54, -55, -55, -56, -57, -58, -58, -59, -60, -60, -61, -61, -61, -61, -61, -61,
-61, -61, -60, -60, -59, -58, -57, -55, -53, -51, -49, -47, -45, -42, -40, -38,
-35, -33, -31, -29, -28, -25, -23, -21, -19, -16, -14, -11, -9, -6, -4, -1, 1,
3, 5, 8, 10, 12, 14, 16, 18, 20, 22, 23, 25, 26, 28, 29, 30, 32, 33, 34, 35, 37,
38, 40, 42, 44, 45, 47, 49, 51, 52, 54, 55, 56, 58, 59, 60, 61, 61, 62, 62, 63,
63, 63, 63, 62, 62, 61, 60, 59, 57, 56, 55, 53, 52, 50, 48, 47, 45, 43, 40, 38,
36, 34, 32, 30, 28, 26, 25, 23, 21, 19, 18, 16, 14, 13, 11, 10, 9, 8, 8, 7, 6,
6, 5, 5, 4, 3, 2, 1, -1, -2, -4, -6, -7, -9, -11, -13, -15, -16, -18, -20, -21,
-23, -24, -26, -27, -29, -31, -32, -33, -35, -36, -38, -40, -41, -43, -44, -46,
-48, -49, -50, -52, -53, -54, -55, -56, -57, -58, -59, -59, -60, -60, -60, -60,
-59, -59, -59, -58, -58, -57, -57, -56, -55, -54, -53, -52, -51, -49, -48, -46,
-44, -43, -41, -38, -36, -33, -31, -28, -24, -21, -18, -14, -11, -8, -5, -2, 1,
3, 5, 8, 10, 12, 15, 17, 19, 21, 22, 24, 25, 26, 27, 28, 29, 30, 30, 31, 31, 32,
32, 32, 33, 33, 34, 34, 35, 35, 36, 37, 37, 38, 38, 39, 40, 40, 41, 42, 42, 43,
43, 44, 44, 44, 44, 44, 45, 45, 45, 45, 45, 45, 45, 45, 45, 44, 43, 42, 41, 40,
38, 37, 36, 35, 34, 33, 32, 31, 31, 30, 30, 29, 28, 27, 26, 25, 24, 24, 23, 22,
21, 21, 20, 19, 19, 18, 17, 16, 14, 13, 12, 10, 9, 7, 6, 4, 2, 0, -1, -3, -5,
-7, -9, -11, -13, -15, -17, -19, -21, -23, -24, -26, -28, -30, -32, -34, -37,
-39, -41, -43, -45, -46, -48, -49, -50, -51, -51, -52, -52, -52, -52, -52, -52,
-52, -53, -53, -53, -53, -54, -54, -54, -54, -55, -55, -55, -56, -56, -56, -56,
-56, -56, -55, -54, -53, -52, -50, -48, -46, -43, -41, -38, -36, -33, -31, -28,
-26, -23, -20, -18, -16, -13, -11, -9, -6, -4, -2, 0, 2, 4, 6, 8, 10, 12, 14,
16, 18, 19, 21, 23, 24, 25, 26, 27, 28, 29, 30, 31, 31, 32, 33, 34, 34, 35, 36,
37, 38, 38, 39, 39, 40, 40, 41, 41, 42, 42, 43, 44, 44, 45, 45, 46, 46, 47, 47,
47, 47, 47, 46, 46, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32,
31, 30, 29, 28, 27, 26, 25, 24, 22, 21, 20, 18, 17, 15, 14, 13, 11, 10, 9, 7, 6,
5, 3, 2, 1, 0, -1, -1, -2, -3, -4, -5, -5, -6, -7, -8, -10, -11, -13, -15, -17,
-19, -21, -24, -26, -28, -31, -33, -35, -37, -39, -41, -43, -45, -47, -48, -50,
-51, -52, -53, -54, -55, -56, -56, -57, -57, -57, -57, -58, -58, -57, -57, -57,
-57, -56, -56, -55, -54, -54, -53, -51, -50, -49, -48, -46, -45, -43, -41, -39,
-37, -35, -33, -31, -29, -26, -24, -22, -20, -18, -15, -13, -11, -9, -7, -6, -4,
-2, 0, 2, 3, 5, 7, 9, 11, 13, 15, 16, 18, 19, 20, 22, 23, 24, 25, 26, 27, 28,
29, 29, 30, 31, 31, 31, 32, 32, 32, 32, 32, 32, 32, 32, 32, 33, 33, 32, 34, 34,
35, 36, 36, 37, 37, 38, 38, 39, 39, 39, 38, 38, 38, 37, 37, 36, 36, 36, 35, 35,
34, 34, 34, 33, 33, 32, 32, 31, 30, 29, 29, 28, 27, 26, 25, 24, 23, 23, 22, 21,
20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 8, 7, 6, 5, 3, 2, 1, 0, 0, -1, -2,
-3, -4, -5, -6, -7, -8, -9, -11, -12, -14, -15, -17, -19, -20, -22, -24, -25,
-27, -29, -31, -32, -34, -36, -37, -39, -40, -41, -42, -44, -44, -45, -46, -47,
-47, -48, -48, -49, -49, -50, -50, -50, -51, -51, -51, -51, -51, -51, -51, -50,
-50, -49, -48, -48, -47, -46, -44, -43, -42, -41, -39, -37, -36, -34, -32, -30,
-28, -26, -24, -22, -21, -19, -17, -15, -13, -12, -10, -9, -7, -6, -4, -3, -1,
0, 2, 3, 5, 6, 8, 10, 12, 13, 15, 17, 19, 21, 22, 24, 26, 27, 28, 29, 30, 31,
32, 33, 34, 34, 35, 35, 36, 36, 37, 37, 38, 38, 39, 39, 40, 40, 41, 41, 41, 42,
42, 42, 42, 42, 42, 42, 42, 42, 42, 41, 41, 40, 40, 39, 39, 38, 37, 37, 36, 36,
35, 34, 34, 33, 32, 31, 30, 29, 28, 27, 25, 24, 22, 21, 19, 18, 17, 15, 14, 13,
11, 10, 9, 8, 6, 5, 4, 3, 2, 0, -1, -2, -3, -4, -5, -6, -7, -8, -9, -10, -11,
-12, -13, -14, -15, -15, -17, -18, -19, -20, -21, -23, -24, -26, -27, -29, -30,
-32, -33, -34, -35, -37, -38, -38, -39, -40, -40, -41, -41, -42, -42, -42, -43,
-43, -43, -44, -44, -44, -44, -44, -44, -44, -44, -44, -44, -43, -43, -42, -41,
-40, -39, -38, -36, -35, -33, -32, -30, -29, -27, -26, -25, -23, -22, -21, -20,
-19, -18, -16, -15, -14, -13, -12, -11, -9, -8, -6, -5, -3, -2, 0, 1, 3, 4, 6,
7, 9, 10, 12, 13, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30,
30, 31, 31, 32, 33, 33, 34, 35, 35, 36, 36, 37, 37, 38, 38, 38, 38, 38, 38, 38,
38, 38, 37, 37, 36, 36, 35, 35, 34, 34, 33, 33, 32, 32, 32, 31, 31, 30, 30, 29,
29, 28, 27, 26, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 14, 13, 12, 10, 9,
7, 6, 5, 4, 3, 2, 1, 0, 0, -1, -2, -2, -3, -4, -5, -5, -6, -7, -8, -9, -10, -11,
-12, -13, -14, -15, -16, -17, -18, -19, -20, -21, -22, -23, -24, -25, -26, -27,
-28, -29, -30, -31, -31, -32, -33, -34, -35, -36, -37, -38, -39, -40, -40, -41,
-42, -42, -43, -43, -44, -44, -45, -45, -45, -45, -45, -45, -44, -44, -43, -43,
-42, -41, -40, -39, -38, -37, -36, -35, -33, -32, -30, -28, -27, -25, -23, -22,
-20, -19, -17, -15, -14, -12, -11, -9, -7, -6, -4, -3, -1, 1, 2, 4, 6, 7, 9, 11,
12, 14, 15, 17, 18, 19, 21, 22, 23, 25, 26, 27, 29, 30, 31, 32, 33, 35, 35, 36,
37, 38, 39, 39, 40, 40, 40, 41, 41, 41, 41, 41, 40, 40, 40, 39, 39, 38, 38, 37,
36, 36, 35, 34, 33, 33, 32, 31, 30, 30, 29, 29, 28, 27, 27, 26, 25, 24, 24, 23,
22, 21, 21, 20, 19, 18, 17, 17, 16, 16, 15, 14, 14, 13, 13, 12, 12, 11, 10, 10,
9, 8, 8, 7, 6, 5, 5, 4, 3, 2, 1, 0, -1, -3, -4, -5, -7, -8, -9, -11, -12, -13,
-15, -16, -17, -18, -20, -21, -22, -23, -25, -26, -27, -29, -30, -31, -32, -34,
-35, -36, -37, -38, -39, -40, -41, -42, -42, -43, -44, -44, -45, -45, -46, -46,
-46, -46, -46, -47, -46, -46, -46, -45, -45, -44, -43, -42, -41, -40, -39, -38,
-37, -36, -34, -33, -31, -30, -28, -26, -25, -23, -21, -20, -18, -16, -15, -13,
-11, -10, -8, -7, -5, -4, -3, -1, 0, 2, 3, 4, 6, 7, 8, 10, 11, 12, 13, 14, 16,
17, 18, 19, 20, 21, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 32, 33, 34, 35, 36,
37, 37, 38, 39, 39, 40, 40, 40, 40, 40, 40, 40, 39, 39, 39, 38, 38, 37, 36, 35,
34, 34, 33, 32, 31, 30, 28, 27, 26, 26, 25, 24, 23, 22, 22, 21, 20, 20, 19, 19,
18, 17, 17, 16, 16, 15, 14, 14, 13, 12, 11, 11, 10, 9, 9, 8, 7, 7, 6, 5, 5, 4,
3, 3, 2, 1, 0, 0, -1, -2, -3, -4, -5, -7, -8, -9, -11, -12, -13, -15, -16, -18,
-19, -20, -22, -23, -24, -25, -27, -28, -29, -30, -30, -31, -32, -33, -34, -35,
-35, -36, -37, -37, -38, -38, -39, -39, -40, -40, -40, -40, -40, -40, -40, -40,
-40, -40, -40, -39, -39, -38, -38, -37, -37, -36, -35, -35, -34, -33, -32, -31,
-30, -30, -29, -28, -27, -26, -25, -25, -24, -23, -22, -21, -19, -18, -17, -15,
-14, -12, -11, -9, -8, -6, -4, -3, -1, 0, 2, 3, 5, 6, 8, 9, 10, 11, 12, 14, 15,
16, 17, 18, 19, 20, 21, 22, 23, 24, 26, 27, 28, 29, 30, 31, 32, 33, 33, 34, 35,
35, 36, 36, 37, 37, 37, 38, 38, 38, 38, 38, 38, 38, 38, 37, 37, 37, 36, 36, 36,
35, 35, 34, 34, 33, 33, 32, 32, 31, 31, 30, 29, 29, 28, 27, 26, 25, 24, 23, 22,
21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0,
-1, -2, -3, -4, -6, -7, -8, -10, -11, -12, -14, -15, -17, -18, -19, -20, -22,
-23, -24, -25, -26, -27, -28, -29, -30, -31, -32, -33, -33, -34, -35, -36, -37,
-37, -38, -38, -39, -39, -39, -39, -40, -40, -40, -39, -40, -39, -40, -38, -39,
-37, -39, -36, -40, };

#endif /* DTSEVEN_H_ */
