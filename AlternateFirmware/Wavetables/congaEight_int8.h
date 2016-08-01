#ifndef CONGAEIGHT_H_
#define CONGAEIGHT_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define CONGAEIGHT_NUM_CELLS 2607
#define CONGAEIGHT_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) CONGAEIGHT_DATA [] = {0,
-1, 0, 0, -4, -3, -2, 1, -1, 0, -3, -5, -8, -22, -17, -12, -7, -1, -4, -2, 5, 6,
-4, -12, -14, -10, -10, -23, -38, -35, -36, -44, -44, -47, -50, -47, -42, -44,
-42, -32, -31, -29, -22, -20, -15, -4, 8, 21, 32, 42, 56, 71, 80, 89, 98, 112,
116, 110, 113, 116, 120, 117, 116, 118, 116, 115, 112, 107, 102, 100, 90, 76,
58, 37, 20, 7, -9, -28, -45, -60, -74, -85, -94, -102, -106, -108, -108, -108,
-110, -112, -114, -115, -115, -113, -113, -113, -115, -117, -120, -121, -120,
-115, -105, -95, -84, -74, -64, -53, -44, -36, -29, -22, -11, 1, 14, 28, 44, 61,
79, 94, 105, 113, 118, 120, 120, 119, 119, 118, 115, 110, 104, 98, 92, 87, 84,
82, 81, 81, 78, 74, 68, 61, 54, 45, 38, 31, 26, 22, 18, 15, 11, 6, 0, -6, -13,
-21, -29, -37, -45, -54, -64, -75, -84, -95, -104, -111, -117, -120, -121, -120,
-117, -111, -104, -95, -85, -74, -62, -50, -39, -29, -20, -13, -8, -3, 1, 6, 11,
15, 20, 24, 28, 29, 30, 31, 32, 35, 39, 45, 53, 62, 73, 82, 92, 101, 108, 115,
119, 120, 120, 116, 110, 102, 92, 79, 66, 53, 40, 28, 17, 7, -2, -10, -18, -24,
-29, -34, -37, -38, -39, -38, -37, -36, -35, -34, -35, -36, -39, -43, -48, -54,
-62, -71, -80, -90, -99, -107, -112, -117, -119, -119, -117, -114, -109, -102,
-93, -83, -72, -59, -46, -31, -18, -3, 11, 24, 36, 47, 57, 66, 75, 82, 89, 95,
99, 101, 102, 102, 101, 100, 99, 100, 100, 101, 103, 104, 105, 106, 105, 104,
101, 97, 90, 82, 72, 60, 48, 35, 21, 7, -6, -20, -33, -47, -59, -71, -83, -93,
-102, -109, -115, -119, -121, -121, -120, -118, -114, -109, -102, -96, -89, -80,
-72, -63, -55, -47, -41, -36, -31, -28, -24, -20, -16, -12, -6, 0, 7, 14, 21,
29, 38, 48, 56, 65, 74, 83, 90, 97, 104, 110, 114, 118, 120, 120, 119, 115, 111,
104, 95, 85, 75, 63, 52, 40, 29, 18, 8, -1, -9, -15, -21, -27, -32, -36, -41,
-46, -52, -58, -64, -72, -78, -85, -91, -98, -104, -109, -114, -118, -120, -121,
-120, -118, -114, -109, -102, -94, -85, -75, -63, -51, -39, -26, -12, 3, 17, 31,
43, 55, 65, 72, 79, 85, 88, 90, 92, 93, 93, 92, 90, 88, 87, 85, 85, 86, 86, 85,
85, 84, 81, 78, 74, 68, 62, 55, 47, 39, 30, 22, 13, 5, -4, -13, -21, -30, -38,
-46, -54, -61, -67, -72, -76, -78, -80, -80, -79, -78, -77, -74, -73, -71, -69,
-68, -66, -65, -64, -63, -63, -62, -62, -60, -58, -55, -51, -46, -40, -34, -28,
-21, -14, -7, 1, 10, 19, 29, 38, 49, 58, 67, 75, 83, 90, 96, 101, 104, 106, 107,
105, 102, 98, 92, 84, 77, 69, 60, 52, 44, 37, 32, 27, 22, 18, 14, 11, 8, 5, 1,
-4, -8, -14, -20, -27, -34, -41, -49, -57, -65, -72, -79, -86, -91, -96, -99,
-101, -102, -102, -99, -95, -89, -82, -74, -65, -55, -45, -35, -26, -17, -9, -4,
2, 5, 7, 9, 9, 11, 12, 14, 16, 20, 25, 31, 37, 43, 50, 57, 64, 71, 77, 84, 90,
94, 98, 101, 102, 103, 102, 99, 95, 89, 83, 75, 66, 56, 45, 34, 23, 11, 0, -11,
-22, -32, -42, -50, -57, -64, -70, -74, -78, -82, -84, -85, -87, -88, -88, -88,
-88, -87, -86, -85, -84, -82, -79, -77, -73, -68, -63, -57, -51, -44, -36, -28,
-19, -10, 0, 11, 23, 35, 47, 57, 68, 77, 85, 91, 95, 98, 99, 99, 97, 94, 90, 86,
82, 76, 71, 66, 61, 56, 51, 47, 42, 38, 34, 30, 26, 22, 17, 13, 9, 5, 1, -4, -9,
-15, -21, -28, -35, -43, -50, -58, -65, -71, -77, -83, -87, -91, -93, -94, -94,
-92, -89, -84, -79, -73, -67, -60, -53, -46, -38, -31, -24, -17, -10, -3, 3, 8,
14, 20, 24, 29, 33, 38, 42, 46, 50, 55, 59, 64, 70, 75, 80, 85, 89, 92, 93, 93,
92, 89, 85, 79, 72, 64, 55, 45, 35, 25, 14, 4, -5, -13, -21, -27, -33, -37, -41,
-44, -46, -48, -49, -49, -50, -50, -51, -51, -51, -52, -53, -54, -55, -57, -58,
-59, -60, -61, -61, -60, -58, -55, -52, -47, -42, -37, -31, -25, -17, -11, -4,
3, 10, 16, 22, 28, 33, 37, 41, 44, 47, 50, 52, 54, 57, 58, 59, 59, 59, 59, 58,
57, 56, 55, 53, 53, 52, 51, 51, 49, 48, 47, 44, 40, 37, 32, 26, 19, 12, 5, -4,
-13, -22, -30, -39, -47, -55, -61, -67, -72, -76, -79, -80, -81, -80, -78, -75,
-71, -66, -61, -56, -49, -43, -38, -33, -29, -24, -20, -17, -14, -11, -9, -6,
-4, -1, 2, 6, 10, 14, 20, 25, 31, 36, 42, 48, 52, 57, 61, 65, 67, 69, 70, 70,
69, 67, 64, 61, 58, 54, 49, 44, 39, 33, 28, 22, 17, 12, 7, 3, -1, -4, -6, -9,
-11, -13, -16, -19, -22, -26, -30, -34, -39, -44, -49, -54, -59, -63, -67, -70,
-73, -74, -75, -75, -73, -71, -68, -64, -59, -53, -46, -39, -31, -23, -14, -6,
2, 10, 17, 24, 31, 36, 42, 46, 50, 53, 55, 57, 59, 60, 61, 61, 61, 61, 61, 61,
60, 59, 57, 56, 53, 50, 47, 43, 39, 35, 30, 24, 19, 13, 6, 0, -6, -13, -19, -25,
-31, -36, -41, -45, -49, -52, -54, -56, -57, -57, -56, -55, -54, -53, -51, -48,
-46, -44, -41, -39, -37, -35, -33, -31, -29, -27, -25, -23, -21, -18, -15, -11,
-8, -3, 1, 6, 11, 16, 21, 27, 32, 38, 43, 48, 52, 56, 59, 61, 63, 64, 63, 62,
61, 58, 55, 51, 47, 43, 39, 35, 30, 26, 22, 17, 13, 9, 4, 0, -4, -8, -13, -17,
-21, -25, -29, -33, -37, -41, -45, -48, -52, -55, -57, -59, -61, -61, -61, -60,
-58, -56, -53, -49, -44, -39, -33, -28, -22, -17, -11, -6, -1, 4, 8, 11, 14, 16,
18, 20, 21, 22, 23, 23, 23, 24, 25, 25, 27, 28, 30, 31, 34, 36, 37, 39, 41, 42,
43, 43, 43, 42, 40, 38, 35, 32, 29, 24, 20, 15, 10, 5, 1, -4, -8, -12, -16, -20,
-23, -26, -28, -30, -32, -34, -36, -38, -39, -41, -42, -43, -44, -45, -46, -46,
-46, -46, -45, -45, -44, -43, -41, -39, -36, -33, -29, -24, -19, -13, -7, -1, 6,
13, 19, 25, 31, 37, 42, 46, 50, 52, 54, 55, 56, 55, 53, 51, 48, 45, 41, 38, 34,
30, 26, 22, 19, 16, 13, 11, 9, 7, 6, 5, 3, 2, 0, -2, -4, -6, -9, -12, -16, -20,
-24, -28, -32, -35, -39, -42, -45, -47, -48, -49, -49, -49, -47, -46, -44, -41,
-39, -36, -32, -29, -25, -22, -18, -15, -11, -8, -5, -3, 0, 3, 5, 8, 10, 13, 15,
18, 21, 24, 27, 30, 34, 37, 40, 43, 46, 48, 50, 51, 52, 52, 52, 51, 49, 46, 43,
39, 34, 29, 23, 17, 11, 4, -2, -8, -14, -20, -25, -30, -34, -37, -40, -42, -44,
-45, -45, -45, -45, -43, -42, -41, -39, -38, -36, -35, -33, -32, -30, -29, -27,
-25, -23, -20, -18, -15, -12, -9, -6, -2, 1, 4, 8, 11, 14, 17, 19, 21, 23, 25,
27, 28, 29, 30, 30, 31, 31, 31, 30, 30, 29, 29, 28, 27, 27, 26, 25, 24, 23, 21,
19, 18, 16, 14, 11, 9, 7, 4, 1, -2, -5, -8, -11, -15, -18, -21, -24, -28, -30,
-33, -36, -38, -40, -41, -42, -43, -43, -43, -42, -40, -38, -36, -33, -30, -27,
-23, -19, -16, -12, -9, -5, -2, 1, 5, 8, 11, 14, 17, 19, 22, 24, 27, 29, 31, 32,
34, 35, 35, 35, 35, 34, 33, 32, 30, 28, 26, 23, 21, 18, 15, 12, 9, 7, 4, 2, 0,
-1, -2, -4, -4, -5, -6, -7, -7, -8, -9, -10, -11, -12, -14, -16, -18, -20, -22,
-24, -26, -28, -29, -31, -32, -32, -33, -33, -32, -31, -30, -28, -27, -24, -22,
-20, -17, -14, -11, -7, -4, -1, 3, 6, 9, 12, 14, 17, 19, 21, 23, 25, 26, 28, 29,
30, 31, 32, 33, 34, 34, 35, 35, 34, 33, 32, 30, 28, 26, 23, 20, 16, 12, 8, 4, 0,
-5, -9, -13, -18, -22, -25, -28, -31, -33, -34, -35, -35, -35, -34, -33, -31,
-29, -27, -25, -22, -20, -18, -16, -15, -13, -12, -11, -11, -10, -9, -9, -8, -8,
-7, -6, -5, -4, -3, -1, 1, 3, 5, 7, 10, 12, 14, 17, 19, 22, 24, 26, 28, 29, 30,
30, 30, 30, 29, 28, 27, 25, 23, 21, 19, 17, 15, 13, 10, 8, 6, 4, 2, 0, -2, -4,
-6, -8, -10, -12, -15, -17, -19, -21, -24, -26, -28, -30, -31, -33, -34, -35,
-36, -36, -36, -35, -34, -31, -29, -26, -22, -18, -14, -9, -5, -1, 4, 8, 11, 15,
17, 20, 21, 23, 23, 24, 24, 23, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12,
12, 11, 11, 11, 11, 10, 10, 10, 9, 8, 8, 6, 5, 4, 2, 1, -1, -3, -5, -6, -8, -10,
-11, -13, -14, -15, -16, -17, -18, -19, -20, -21, -21, -22, -22, -22, -22, -22,
-21, -21, -20, -19, -18, -17, -16, -15, -13, -12, -10, -9, -7, -5, -2, 0, 3, 5,
8, 10, 13, 15, 18, 20, 22, 24, 25, 27, 27, 28, 28, 28, 27, 26, 25, 23, 21, 19,
16, 14, 11, 8, 6, 3, 0, -2, -4, -6, -8, -10, -11, -12, -13, -14, -15, -15, -15,
-16, -16, -16, -16, -15, -15, -15, -15, -14, -14, -14, -14, -13, -13, -12, -12,
-11, -11, -11, -10, -10, -10, -9, -9, -8, -8, -7, -6, -5, -4, -3, -2, -1, 0, 2,
3, 5, 6, 8, 10, 11, 13, 15, 17, 18, 19, 20, 21, 22, 22, 22, 22, 22, 21, 19, 18,
17, 15, 13, 11, 8, 6, 4, 1, -1, -4, -6, -8, -11, -13, -15, -16, -18, -19, -21,
-22, -22, -23, -24, -24, -24, -24, -23, -23, -22, -21, -20, -19, -17, -16, -14,
-12, -10, -7, -5, -3, -1, 2, 4, 6, 8, 10, 11, 12, 13, 14, 14, 14, 14, 13, 13,
12, 11, 10, 10, 9, 8, 7, 7, 6, 6, 6, 6, 6, 7, 7, 8, 8, 8, 9, 9, 9, 9, 8, 7, 6,
5, 4, 2, 0, -2, -4, -6, -8, -10, -12, -14, -16, -18, -19, -20, -21, -22, -22,
-22, -22, -22, -21, -21, -19, -18, -17, -15, -14, -12, -10, -8, -7, -5, -3, -1,
0, 2, 4, 5, 6, 8, 9, 10, 12, 13, 14, 15, 16, 17, 18, 19, 19, 19, 19, 19, 18, 17,
16, 14, 12, 10, 8, 6, 3, 1, -1, -4, -6, -8, -9, -11, -12, -12, -13, -13, -12,
-12, -11, -10, -9, -8, -7, -6, -6, -5, -5, -5, -5, -6, -6, -7, -8, -9, -10, -10,
-11, -12, -13, -13, -13, -13, -13, -12, -11, -10, -9, -8, -7, -5, -3, -2, 0, 2,
3, 5, 6, 8, 9, 11, 12, 13, 13, 14, 14, 15, 15, 15, 15, 15, 15, 15, 14, 13, 12,
11, 10, 9, 8, 7, 5, 4, 2, 1, -1, -3, -5, -6, -8, -10, -11, -13, -14, -16, -17,
-18, -19, -19, -19, -19, -19, -18, -17, -16, -15, -13, -11, -10, -8, -6, -4, -3,
-1, 0, 1, 2, 2, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 2, 2, 3, 3, 4, 4, 5, 6, 6,
7, 8, 8, 9, 9, 10, 10, 10, 10, 10, 10, 10, 9, 9, 8, 7, 6, 5, 4, 3, 2, 0, -1, -3,
-4, -6, -7, -9, -10, -12, -13, -14, -15, -16, -17, -17, -18, -18, -18, -18, -18,
-17, -16, -15, -14, -13, -11, -10, -8, -6, -4, -3, -1, 1, 3, 5, 6, 8, 9, 10, 11,
12, 12, 12, 13, 12, 12, 12, 11, 11, 10, 9, 9, 8, 7, 6, 5, 4, 4, 3, 2, 2, 1, 0,
0, -1, -2, -2, -3, -3, -3, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4,
-4, -5, -5, -6, -6, -7, -7, -8, -9, -9, -10, -10, -10, -10, -10, -10, -10, -9,
-8, -8, -7, -6, -5, -3, -2, -1, 1, 2, 3, 5, 6, 7, 8, 9, 10, 11, 11, 12, 12, 12,
12, 12, 11, 11, 10, 9, 8, 7, 6, 5, 4, 2, 1, 0, -1, -2, -3, -4, -5, -5, -6, -6,
-7, -7, -7, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -7, -7, -6, -6, -5, -4,
-4, -3, -2, -2, -1, -1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0,
0, 0, 1, 1, 2, 3, 3, 4, 5, 5, 6, 7, 7, 7, 7, 7, 7, 7, 6, 6, 5, 4, 3, 3, 2, 1, 0,
-1, -2, -3, -4, -5, -6, -6, -7, -7, -8, -8, -9, -9, -9, -9, -9, -8, -8, -8, -7,
-7, -6, -6, -5, -5, -4, -3, -3, -2, -1, -1, 0, 1, 1, 2, 2, 3, 3, 3, 4, 4, 4, 4,
4, 4, 4, 4, 4, 3, 3, 3, 2, 2, 1, 1, 1, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -2, -2, -2, -3, -3, -4, -4, -5, -5, -5, -6,
-6, -6, -6, -6, -6, -5, -5, -5, -5, -4, -4, -3, -3, -2, -2, -1, -1, 0, 0, 1, 1,
2, 2, 2, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3, 3, 2, 2, 1, 1, 0, 0, -1, -1,
-2, -2, -2, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -2, -2, -2, -2, -2,
-2, -1, -1, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2,
2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 0, 0, 0, -1, -1, -1, -1, -2, -2, -2, -2, -3, -3,
-3, -3, -3, -3, -3, -3, -3, -3, -3, -2, -2, -2, -2, -2, -1, -1, -1, -1, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, 0, };

#endif /* CONGAEIGHT_H_ */
