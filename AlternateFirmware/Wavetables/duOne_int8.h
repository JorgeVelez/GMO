#ifndef DUONE_H_
#define DUONE_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define DUONE_NUM_CELLS 5230
#define DUONE_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) DUONE_DATA [] = {0, 0, 0,
0, -1, 0, 1, -1, 0, -2, 0, 0, -1, -2, -1, -1, 0, 5, -4, 0, -1, 6, 5, -2, 3, -1,
2, 3, 3, 0, -3, -1, 2, -2, -10, -1, 2, 0, -3, -2, 4, -6, 1, 3, 6, -2, -7, 8, 1,
0, 0, 2, 1, -1, 4, 0, -1, -1, 3, 3, 1, -5, -5, -3, 8, 7, -11, -14, 2, 19, -1,
-5, -1, 3, 7, -1, -8, -8, 5, 11, 13, 7, -9, -16, -15, 17, 20, -22, -23, 2, 34,
2, -32, 11, -14, 19, -15, -32, -46, -22, 24, -67, -38, -59, 14, -61, -49, -4,
-70, -12, -25, -12, -52, -41, 17, -41, -15, -25, -61, 33, -8, -9, -25, 13, -8,
-44, -37, -49, -52, -75, -53, -54, -23, -32, -20, -19, -9, -12, -13, -9, 22, 40,
40, 49, 45, 48, 34, 26, 13, 25, 10, 7, 8, 0, 9, 10, 14, 12, 32, 75, 74, 91, 107,
103, 112, 95, 82, 86, 91, 86, 92, 88, 87, 91, 83, 85, 72, 67, 65, 61, 58, 48,
48, 39, 37, 33, 27, 18, 5, -1, -7, -13, -32, -34, -44, -45, -57, -58, -56, -69,
-57, -66, -66, -70, -84, -87, -76, -95, -96, -105, -106, -92, -94, -92, -92,
-84, -94, -86, -96, -95, -91, -100, -98, -91, -98, -93, -97, -94, -95, -98, -88,
-99, -95, -89, -82, -95, -84, -80, -76, -85, -81, -60, -64, -66, -59, -55, -53,
-61, -56, -33, -48, -43, -46, -30, -32, -43, -32, -18, -21, -27, -13, -20, -8,
-15, -3, 0, -11, 11, 8, 9, 6, 23, 28, 16, 27, 42, 43, 22, 38, 48, 41, 25, 41,
50, 34, 33, 44, 59, 40, 50, 61, 66, 61, 65, 75, 81, 72, 75, 88, 85, 84, 82, 94,
86, 85, 85, 90, 88, 84, 86, 91, 85, 80, 83, 80, 74, 68, 68, 58, 53, 53, 45, 34,
38, 28, 30, 15, 12, 24, 18, 17, 10, 14, 6, 1, -7, -6, -8, -22, -20, -20, -30,
-38, -42, -40, -52, -54, -51, -63, -65, -69, -72, -80, -85, -85, -85, -93, -100,
-96, -101, -104, -109, -109, -107, -110, -111, -108, -106, -108, -107, -106,
-106, -107, -108, -108, -109, -116, -117, -116, -114, -111, -113, -111, -111,
-110, -108, -105, -104, -99, -97, -93, -88, -88, -87, -82, -78, -78, -74, -70,
-65, -64, -59, -59, -58, -56, -49, -45, -43, -47, -55, -53, -55, -52, -50, -53,
-51, -44, -41, -32, -33, -33, -29, -24, -17, -13, -10, -7, -5, -5, -4, -6, -4,
-6, -1, 8, 13, 12, 16, 24, 26, 21, 29, 22, 28, 43, 45, 62, 61, 66, 63, 67, 70,
74, 78, 80, 87, 84, 88, 90, 96, 96, 97, 104, 106, 106, 104, 99, 97, 95, 96, 97,
101, 99, 99, 104, 103, 105, 102, 105, 104, 103, 105, 108, 109, 106, 105, 107,
107, 103, 105, 108, 109, 107, 105, 107, 109, 105, 108, 107, 102, 103, 100, 96,
87, 81, 80, 77, 72, 68, 72, 76, 73, 73, 79, 83, 80, 77, 79, 80, 76, 77, 76, 75,
73, 68, 70, 68, 63, 64, 68, 68, 61, 56, 64, 63, 59, 57, 61, 67, 68, 66, 60, 55,
46, 49, 54, 53, 49, 51, 54, 51, 47, 50, 51, 50, 43, 35, 41, 42, 31, 23, 20, 12,
7, 7, 0, -7, -5, 0, -2, -5, -5, -9, -7, -3, -6, -10, -14, -14, -14, -14, -13,
-19, -20, -16, -19, -25, -31, -30, -35, -38, -32, -38, -51, -66, -70, -78, -88,
-94, -97, -98, -99, -98, -96, -92, -94, -103, -108, -104, -104, -103, -100,
-103, -106, -106, -104, -105, -104, -102, -106, -109, -102, -102, -108, -112,
-114, -114, -113, -108, -108, -112, -116, -116, -116, -117, -116, -116, -113,
-110, -111, -113, -113, -113, -116, -114, -109, -107, -105, -100, -96, -96, -99,
-103, -101, -101, -101, -100, -94, -92, -88, -82, -83, -79, -79, -84, -82, -76,
-72, -65, -69, -69, -60, -59, -63, -66, -57, -47, -43, -37, -29, -25, -18, -17,
-25, -21, -20, -23, -18, -13, -21, -27, -28, -32, -31, -31, -33, -30, -23, -20,
-13, -6, 0, -1, -5, -13, -14, -5, -1, 0, 1, 10, 19, 20, 15, 17, 18, 23, 39, 51,
39, 34, 42, 37, 36, 34, 35, 42, 54, 50, 44, 46, 48, 61, 65, 60, 64, 75, 74, 65,
65, 59, 53, 60, 65, 71, 75, 70, 60, 61, 55, 41, 49, 61, 70, 72, 72, 71, 77, 83,
83, 89, 105, 114, 106, 108, 112, 106, 103, 107, 108, 104, 103, 98, 96, 100, 101,
97, 97, 101, 97, 90, 84, 79, 78, 87, 96, 97, 98, 106, 104, 99, 100, 92, 87, 94,
98, 93, 94, 96, 90, 92, 86, 78, 77, 78, 81, 77, 72, 73, 70, 66, 67, 71, 81, 88,
87, 87, 86, 77, 75, 76, 74, 64, 59, 63, 65, 61, 53, 52, 49, 51, 57, 61, 54, 46,
42, 42, 43, 38, 38, 34, 23, 16, 10, 4, -6, -11, -9, -10, -2, 9, 7, -4, -5, -8,
-10, -10, -16, -13, -11, -7, -3, -6, -7, -5, -1, 9, 13, 13, 10, 8, 1, -11, -16,
-28, -43, -55, -58, -60, -61, -60, -59, -59, -60, -56, -54, -48, -46, -50, -49,
-44, -50, -61, -58, -61, -68, -71, -73, -82, -88, -88, -87, -89, -101, -104,
-106, -112, -113, -114, -114, -114, -114, -113, -111, -109, -115, -115, -109,
-108, -106, -100, -98, -103, -101, -97, -99, -107, -111, -109, -107, -105, -108,
-111, -113, -110, -106, -108, -105, -97, -91, -88, -91, -95, -96, -94, -96, -94,
-85, -82, -82, -82, -85, -87, -88, -85, -79, -75, -71, -71, -66, -67, -75, -72,
-68, -76, -80, -74, -72, -74, -68, -60, -57, -55, -50, -46, -49, -54, -59, -54,
-48, -45, -48, -51, -48, -52, -60, -59, -57, -55, -38, -22, -20, -26, -26, -20,
-21, -24, -19, -14, -8, -7, -9, -9, -11, -9, -3, 2, 1, 2, 11, 12, 0, -11, -7, 3,
7, 17, 31, 38, 34, 34, 37, 40, 39, 45, 50, 50, 55, 55, 57, 60, 54, 44, 55, 72,
70, 68, 75, 88, 95, 96, 98, 102, 102, 99, 98, 97, 96, 98, 109, 113, 109, 106,
105, 100, 91, 88, 81, 72, 70, 82, 92, 85, 77, 73, 74, 68, 67, 75, 77, 79, 87,
97, 104, 105, 99, 101, 111, 113, 101, 92, 94, 94, 89, 89, 95, 92, 87, 80, 78,
80, 84, 88, 90, 94, 92, 90, 92, 96, 95, 94, 95, 90, 84, 85, 86, 78, 72, 78, 83,
81, 77, 72, 73, 69, 58, 51, 47, 47, 50, 51, 54, 53, 48, 49, 50, 52, 52, 59, 67,
60, 49, 49, 58, 62, 49, 37, 41, 48, 46, 40, 36, 38, 44, 53, 59, 59, 53, 46, 38,
29, 20, 16, 12, 12, 10, 4, 0, -8, -8, -9, -13, -15, -12, -14, -22, -28, -27,
-25, -25, -21, -19, -28, -35, -29, -36, -44, -42, -33, -26, -25, -27, -24, -31,
-47, -62, -62, -53, -57, -59, -59, -63, -70, -71, -70, -69, -74, -70, -59, -57,
-67, -76, -77, -76, -74, -75, -74, -77, -86, -99, -106, -111, -111, -103, -89,
-85, -92, -97, -103, -110, -111, -106, -98, -89, -88, -85, -78, -80, -86, -86,
-77, -72, -75, -78, -82, -81, -77, -73, -76, -85, -91, -92, -90, -94, -102,
-108, -107, -103, -98, -90, -89, -97, -104, -104, -100, -98, -90, -84, -82, -82,
-85, -90, -98, -100, -94, -85, -82, -87, -90, -89, -87, -87, -90, -93, -88, -79,
-72, -69, -65, -66, -64, -52, -38, -33, -38, -49, -53, -47, -45, -45, -43, -41,
-36, -30, -28, -34, -31, -24, -20, -19, -15, -9, -9, -7, -7, -10, -19, -19, -6,
0, -5, -18, -24, -24, -16, -2, 7, 11, 15, 22, 25, 22, 12, 4, 9, 21, 34, 42, 48,
57, 65, 73, 77, 77, 72, 70, 74, 73, 71, 69, 67, 64, 56, 52, 53, 51, 46, 50, 55,
55, 61, 80, 102, 105, 96, 89, 86, 87, 92, 96, 92, 88, 89, 91, 92, 89, 85, 84,
81, 73, 67, 64, 62, 64, 62, 61, 68, 74, 79, 78, 69, 60, 54, 59, 63, 71, 83, 95,
99, 101, 97, 86, 72, 62, 59, 59, 60, 60, 63, 68, 71, 70, 73, 79, 86, 89, 87, 76,
61, 66, 81, 90, 93, 93, 86, 83, 76, 69, 72, 78, 85, 86, 81, 77, 77, 81, 78, 72,
72, 69, 61, 57, 60, 65, 61, 52, 49, 55, 59, 61, 63, 60, 64, 65, 55, 37, 25, 29,
33, 25, 12, 12, 20, 24, 24, 26, 24, 16, 10, 13, 21, 20, 17, 19, 19, 11, 2, -2,
-6, -9, -6, -4, -12, -20, -13, -6, -17, -33, -33, -25, -28, -40, -44, -39, -33,
-32, -21, -14, -21, -33, -33, -29, -32, -43, -55, -51, -48, -54, -57, -49, -52,
-58, -51, -42, -44, -48, -45, -35, -32, -39, -46, -50, -48, -47, -42, -42, -50,
-58, -55, -51, -65, -82, -90, -85, -83, -87, -100, -116, -122, -114, -105, -108,
-117, -117, -109, -97, -92, -93, -91, -83, -75, -72, -61, -62, -73, -82, -84,
-83, -79, -77, -82, -88, -91, -86, -89, -101, -103, -89, -79, -75, -81, -83,
-68, -51, -49, -64, -76, -75, -67, -63, -61, -69, -73, -72, -63, -52, -52, -66,
-75, -72, -73, -74, -72, -70, -70, -68, -68, -70, -74, -72, -62, -50, -48, -52,
-48, -33, -19, -17, -22, -25, -26, -33, -32, -31, -32, -28, -10, -4, -7, -6, 11,
24, 20, 21, 16, 6, -3, 0, 6, 5, 1, -6, -12, -12, -4, 4, 5, 1, -2, -6, -7, 2, 13,
19, 21, 18, 13, 9, 10, 18, 31, 32, 26, 29, 42, 53, 52, 51, 53, 54, 48, 37, 33,
40, 46, 49, 54, 56, 47, 45, 57, 62, 60, 62, 68, 68, 65, 68, 77, 81, 79, 77, 75,
70, 60, 52, 43, 42, 53, 65, 65, 55, 48, 52, 56, 51, 45, 46, 55, 59, 61, 67, 76,
83, 86, 90, 93, 94, 93, 89, 89, 84, 74, 69, 71, 77, 85, 88, 77, 53, 39, 44, 50,
53, 53, 48, 41, 37, 45, 58, 60, 57, 61, 63, 59, 45, 36, 39, 50, 52, 48, 43, 35,
31, 34, 38, 29, 16, 14, 25, 30, 24, 24, 30, 37, 43, 49, 54, 58, 55, 46, 34, 24,
24, 29, 36, 37, 36, 33, 23, 11, 5, 14, 25, 30, 30, 28, 19, 16, 23, 23, 10, -6,
-13, -9, -5, -19, -39, -39, -22, -13, -14, -16, -19, -16, -14, -21, -34, -40,
-28, -15, -9, -6, -4, -6, -5, -3, -2, 7, 14, 16, 16, 16, 9, -5, -16, -21, -24,
-33, -48, -60, -70, -63, -41, -24, -26, -29, -23, -16, -18, -28, -32, -28, -21,
-15, -11, -22, -33, -35, -33, -40, -52, -59, -55, -48, -49, -59, -78, -89, -81,
-65, -58, -66, -79, -81, -76, -76, -82, -85, -80, -70, -61, -50, -48, -53, -55,
-54, -58, -69, -79, -82, -82, -86, -83, -71, -63, -65, -66, -66, -71, -73, -69,
-64, -61, -55, -45, -44, -53, -58, -54, -51, -47, -46, -48, -51, -48, -42, -41,
-40, -33, -27, -28, -33, -37, -41, -55, -64, -55, -40, -32, -31, -30, -27, -27,
-30, -27, -18, -9, -9, -16, -26, -37, -42, -31, -17, -14, -21, -23, -19, -28,
-43, -41, -23, -7, -1, 6, 13, 17, 22, 23, 6, -19, -24, -9, 4, 5, 12, 22, 22, 10,
2, 6, 9, 7, -5, -10, -8, -5, 0, 13, 31, 42, 41, 37, 23, 8, 16, 30, 33, 31, 33,
39, 39, 27, 17, 11, 13, 27, 51, 66, 68, 65, 58, 49, 39, 35, 43, 65, 86, 94, 90,
75, 53, 44, 56, 67, 59, 44, 39, 47, 42, 23, 11, 13, 23, 27, 27, 29, 18, 1, -4,
11, 34, 55, 76, 84, 73, 57, 52, 52, 52, 52, 61, 75, 72, 56, 42, 35, 22, 12, 21,
41, 58, 66, 65, 52, 32, 24, 37, 51, 57, 62, 67, 67, 55, 37, 29, 31, 36, 37, 38,
41, 38, 31, 23, 22, 26, 28, 22, 15, 6, -6, -11, -2, 5, 5, 11, 29, 39, 29, 17,
12, 6, 3, 13, 34, 45, 36, 24, 14, 1, -2, 13, 31, 38, 33, 31, 27, 21, 27, 35, 36,
30, 19, 8, 1, -1, -8, -20, -22, -6, 8, 2, -18, -31, -25, -13, -9, -13, -14, -12,
-11, -15, -28, -38, -29, -5, 6, 1, -7, -8, -8, -8, -10, -18, -24, -18, -2, 4,
-11, -32, -42, -44, -41, -34, -25, -20, -25, -35, -38, -30, -23, -21, -23, -28,
-33, -39, -44, -44, -45, -49, -51, -52, -58, -67, -72, -70, -73, -85, -91, -87,
-77, -64, -58, -59, -65, -66, -59, -55, -52, -47, -40, -36, -31, -31, -35, -41,
-42, -33, -21, -23, -41, -62, -74, -71, -63, -56, -55, -59, -61, -55, -53, -64,
-77, -69, -44, -26, -29, -40, -44, -36, -34, -43, -51, -49, -37, -24, -27, -41,
-50, -47, -42, -41, -40, -35, -26, -20, -19, -27, -39, -43, -28, 0, 18, 19, 13,
8, 4, 4, 4, 4, 2, -8, -16, -14, -6, 2, 12, 26, 32, 21, 3, -8, -2, 8, 11, 5, 3,
7, 8, 3, -11, -29, -33, -17, -3, -7, -9, -4, 0, 2, 5, 1, -10, -15, 0, 16, 17,
10, 10, 20, 35, 48, 51, 54, 54, 51, 52, 61, 66, 62, 51, 31, 9, -7, -6, 5, 13,
26, 46, 57, 47, 31, 26, 40, 58, 71, 69, 60, 59, 70, 76, 63, 44, 42, 60, 69, 59,
40, 28, 23, 26, 37, 41, 37, 36, 36, 29, 10, 0, 8, 20, 34, 49, 52, 45, 36, 32,
33, 35, 32, 27, 29, 41, 53, 54, 44, 26, 11, 3, -2, -3, 0, 14, 34, 47, 53, 54,
49, 41, 31, 21, 12, 7, 13, 33, 54, 64, 59, 42, 22, 15, 25, 34, 28, 19, 23, 42,
50, 47, 41, 22, -1, -8, -3, 4, 16, 26, 31, 31, 30, 31, 23, 3, -10, 1, 21, 22, 8,
4, 5, 1, -16, -27, -25, -18, -6, 5, 4, 1, 9, 16, 1, -23, -26, -11, 0, 3, 4, 5,
-6, -23, -26, -13, -2, -8, -23, -29, -25, -18, -21, -26, -24, -20, -18, -20,
-24, -24, -17, -6, -3, -8, -4, 5, 4, -16, -39, -43, -34, -23, -11, 1, 3, -8,
-14, -12, -10, -9, -4, 3, 7, 6, 4, 1, -2, 2, 22, 40, 32, 8, -6, -11, -18, -27,
-23, -14, -20, -31, -34, -43, -56, -62, -57, -46, -39, -32, -30, -34, -38, -34,
-20, -4, 6, 16, 28, 25, 1, -23, -25, -11, -8, -14, -12, -10, -17, -28, -33, -37,
-32, -16, -3, -4, -14, -15, -5, -3, -10, -13, -7, 0, -1, -6, -11, -20, -29, -30,
-16, 6, 12, -6, -34, -46, -39, -27, -26, -33, -36, -37, -35, -30, -27, -26, -21,
-17, -20, -17, -1, 13, 9, -6, -14, -1, 15, 18, 12, 9, 8, 7, 4, 5, 19, 34, 41,
38, 35, 42, 47, 41, 27, 22, 24, 21, 15, 13, 17, 17, 12, 7, 7, 14, 20, 18, 14,
20, 30, 29, 10, -4, 6, 28, 39, 39, 37, 34, 32, 28, 26, 28, 37, 52, 60, 54, 43,
33, 22, 11, 11, 25, 38, 37, 30, 29, 32, 33, 26, 19, 28, 44, 47, 37, 30, 32, 35,
30, 23, 16, 14, 16, 10, -3, -5, 3, 6, -5, -18, -14, -4, 1, -2, -4, 4, 13, 17,
17, 17, 16, 19, 26, 34, 41, 42, 43, 45, 45, 38, 27, 18, 13, 11, 15, 18, 14, 11,
14, 11, -3, -17, -15, 0, 17, 29, 33, 23, 8, 3, -1, -4, 1, 17, 33, 32, 24, 15, 9,
2, -4, -5, -6, -8, -4, 6, 21, 24, 7, -6, 3, 20, 23, 17, 17, 29, 39, 41, 36, 28,
16, 10, 10, 5, 1, 3, 8, 13, 20, 31, 32, 19, 8, 6, 9, 5, -2, -1, 3, 5, 1, -9,
-26, -41, -44, -32, -21, -20, -15, -9, -14, -22, -24, -18, -16, -26, -31, -32,
-31, -22, 1, 22, 25, 18, 11, 6, 2, 8, 23, 34, 28, 13, 0, -10, -17, -30, -41,
-45, -43, -36, -25, -14, -9, -3, 7, 9, -4, -11, -4, 8, 10, 5, -1, -7, -4, 6, 10,
-7, -28, -34, -28, -31, -42, -49, -48, -38, -27, -32, -48, -62, -60, -42, -30,
-36, -49, -62, -64, -54, -30, -5, -6, -23, -31, -31, -31, -35, -40, -45, -48,
-53, -57, -60, -54, -40, -24, -18, -27, -34, -31, -24, -24, -31, -35, -28, -17,
-10, -7, -9, -13, -18, -19, -22, -25, -20, -8, 5, 11, 7, -2, -16, -24, -20, -17,
-15, -13, -16, -19, -16, -9, 0, 5, 8, 9, 4, -8, -15, -13, -7, -4, -5, -9, -16,
-17, -15, -13, -15, -24, -28, -22, -15, -10, -1, 15, 23, 12, -2, -9, -9, -10,
-9, -1, -2, -13, -19, -12, -1, 6, 9, 5, -11, -25, -31, -28, -24, -20, -8, 3, 2,
-4, 0, 8, 8, 3, 7, 9, 1, -9, -10, 0, 6, 2, -3, 5, 17, 21, 17, 8, 6, 16, 28, 34,
31, 31, 41, 50, 46, 33, 34, 44, 43, 34, 32, 32, 23, 10, 9, 17, 14, 5, -2, -14,
-24, -17, 2, 4, -16, -27, -14, 12, 23, 17, 11, 17, 34, 48, 54, 46, 37, 34, 35,
35, 24, 6, -3, 3, 14, 19, 19, 14, 7, 9, 22, 32, 26, 21, 29, 30, 13, 1, 15, 39,
47, 34, 14, 1, 2, 11, 23, 24, 13, 0, -5, 0, 7, 8, -3, -17, -20, -13, -10, -14,
-23, -23, -7, 8, 4, -3, 8, 22, 22, 8, 1, 12, 22, 21, 15, 4, -1, 7, 17, 16, 13,
18, 35, 40, 34, 28, 23, 19, 9, 11, 15, 15, 3, -7, -12, -8, -7, -3, -7, -4, 0, 3,
-9, -21, -23, -14, -15, -16, -10, 2, 1, -9, -14, -11, 12, 3, 16, -12, 21, 0, 16,
-25, -12, 5, 3, 35, -9, 25, -50, 12, -10, -42, -14, 18, 25, -24, -1, 9, -35, 45,
-17, -15, 31, -28, -18, -28, 18, -50, -29, -28, -2, -38, -15, -16, -46, -62,
-24, -18, -33, -5, -35, 15, -8, 9, 7, 3, -26, 21, 37, 36, 16, -9, 2, 23, 18, -5,
-4, -16, 2, 0, -33, -36, -22, -42, -1, -38, -36, -27, -8, -15, -12, -19, -27, 7,
-30, -21, -29, -5, -18, -27, -48, -6, 1, -23, -5, -32, -28, -44, -38, -43, -20,
-10, -8, -11, -23, 2, 9, 10, 11, 1, 14, 16, 18, 2, 12, 9, 10, 10, 7, -4, -20, 2,
-32, 10, 11, -5, -3, 11, 23, 8, 7, -3, 9, 6, -18, -22, -12, -19, -25, -19, -29,
-22, -24, -16, 4, -19, -15, -8, -3, -30, -15, -6, -17, 1, 3, 8, 17, 19, 29, 32,
38, 50, 45, 52, 30, 32, 40, 36, 17, 3, 3, 0, -4, 10, 4, 3, 13, 19, 22, 21, 30,
25, 41, 37, 38, 38, 41, 33, 29, 25, 22, 15, 2, 9, 12, 17, -2, -6, -6, -3, -11,
-3, -3, -21, -19, -31, -22, -18, -15, -11, -10, -8, 3, -1, 4, 6, -2, 15, 9, 6,
-2, -4, -8, -10, -19, -19, -17, -16, -13, -11, -4, -6, -1, 6, 2, 3, 4, 0, 9, 4,
11, 17, 10, 2, 5, 13, 19, 5, 9, 14, 14, 16, 15, 20, 14, 6, 7, 4, -10, -3, -9,
-8, 4, 12, 10, 7, 4, 12, 16, 9, 3, -2, 3, 2, -9, -6, -15, -16, -18, -22, -10,
-19, -9, -1, 0, 1, -2, 2, 7, -3, -1, 2, -1, -8, -15, -1, -2, -7, -9, -10, -7,
-9, -14, -9, -17, -22, -20, -19, -21, -24, -21, -11, -11, -12, -3, 5, 3, -5, 0,
-1, -9, -15, -13, -11, -6, -10, -10, -6, -7, -5, -4, -1, 1, -1, 6, 15, 13, 14,
19, 22, 18, 19, 21, 21, 11, 5, 5, 6, -2, -10, -13, -21, -33, -43, -40, -44, -47,
-51, -46, -43, -45, -44, -44, -34, -29, -20, -9, 1, 3, 3, 7, 4, -1, -9, -8, -10,
-17, -20, -20, -20, -26, -28, -24, -21, -20, -18, -13, -7, -8, -7, 0, 5, 0, -6,
-3, 2, 1, -3, -3, 0, -3, -8, -6, -2, -3, -9, -8, -9, -11, -15, -17, -18, -21,
-25, -25, -19, -17, -14, -9, 0, 4, 7, 12, 13, 15, 14, 13, 14, 14, 10, 12, 14,
11, 13, 16, 19, 23, 27, 36, 42, 44, 40, 34, 28, 24, 20, 13, 7, 6, 2, -3, -4, -1,
0, -3, -3, -4, -5, -4, -4, 0, 0, -3, -4, -1, -1, -3, -2, 3, 8, 7, 11, 16, 17,
14, 14, 17, 14, 10, 8, 10, 6, 2, 2, 2, 1, -1, 4, 9, 12, 13, 15, 20, 20, 18, 20,
22, 19, 16, 16, 15, 9, 5, 6, 3, -2, -7, -7, -7, -10, -13, -9, -6, -8, -9, -5, 3,
4, 7, 16, 23, 28, 31, 36, 38, 38, 36, 36, 37, 33, 30, 27, 23, 19, 14, 12, 7, -1,
-3, -2, -6, -8, -5, -1, -1, -2, 2, 7, 8, 5, 4, 1, 1, -1, -1, -2, -4, -4, -3, 0,
-5, -11, -13, -16, -19, -19, -18, -14, -11, -11, -6, 0, 3, 5, 10, 16, 17, 17,
15, 13, 10, 6, 6, 5, 0, 0, 2, 0, 0, 3, 9, 10, 11, 13, 13, 10, 5, 4, 3, -3, -11,
-14, -14, -18, -22, -24, -21, -23, -23, -18, -15, -15, -16, -15, -14, -14, -16,
-13, -11, -11, -8, 0, 7, 13, 20, 28, 34, 35, 35, 34, 28, 17, 10, 3, -6, -13,
-21, -23, -22, -24, -22, -15, -9, -6, -2, 5, 9, 12, 18, 22, 19, 16, 18, 17, 12,
10, 9, 5, -2, -6, -7, -7, -13, -18, -19, -22, -23, -20, -22, -26, -31, -31, -25,
-25, -26, -24, -18, -14, -12, -6, -1, -1, -2, 2, 3, -2, -9, -12, -14, -21, -26,
-25, -24, -22, -19, -13, -10, -10, -5, 3, 6, 3, 1, 2, 2, 0, 2, 5, 6, 5, 5, 5, 5,
4, 7, 7, 7, 7, 6, 7, 2, 1, 0, -6, -10, -9, -10, -10, -5, -1, 0, -2, 0, 6, 7, 2,
-2, -2, -5, -14, -19, -19, -20, -25, -27, -22, -20, -23, -18, -8, -6, -9, -8, 0,
0, -8, -9, -4, -6, -12, -9, -2, -3, -8, -6, -4, -7, -12, -10, -10, -15, -17,
-17, -14, -16, -15, -9, -2, 1, 2, 9, 16, 12, 6, 10, 10, 6, 3, 5, 8, 6, 4, 6, 10,
9, 8, 14, 19, 19, 20, 27, 34, 34, 33, 37, 41, 37, 33, 37, 39, 33, 29, 29, 25,
15, 6, 2, -5, -18, -23, -22, -24, -30, -32, -29, -25, -27, -28, -24, -17, -13,
-6, 7, 15, 14, 15, 20, 21, 16, 9, 7, 4, -5, -10, -8, -9, -12, -14, -9, -8, -9,
-9, -3, 3, 3, 3, 9, 12, 9, 6, 7, 11, 10, 8, 8, 8, 4, 0, 2, 5, 3, -1, 0, -1, -6,
-12, -15, -16, -18, -22, -20, -14, -11, -9, -3, 3, 6, 8, 12, 15, 16, 14, 13, 14,
12, 8, 10, 11, 11, 13, 16, 18, 20, 25, 35, 39, 40, 38, 30, 23, 17, 14, 9, 5, 4,
-1, -7, -9, -8, -8, -9, -9, -8, -6, -5, -6, -6, -6, -9, -10, -8, -6, -7, -5, -1,
1, 0, 4, 10, 10, 8, 10, 12, 11, 6, 2, 2, 0, -3, -2, 0, -3, -6, -4, 0, 3, 5, 10,
14, 13, 12, 14, 14, 10, 5, 4, 3, -2, -4, -5, -9, -14, -18, -19, -19, -24, -26,
-22, -21, -23, -25, -19, -11, -10, -8, 0, 7, 9, 12, 17, 19, 19, 19, 20, 20, 15,
10, 7, 2, -1, -4, -4, -8, -16, -19, -21, -23, -24, -20, -14, -13, -14, -11, -8,
-10, -10, -9, -10, -9, -10, -9, -9, -11, -12, -9, -6, -9, -13, -13, -15, -17,
-18, -17, -10, -7, -4, 2, 8, 10, 13, 18, 22, 22, 22, 22, 21, 19, 14, 13, 11, 7,
10, 12, 11, 10, 13, 18, 19, 20, 22, 22, 18, 13, 11, 7, 0, -7, -7, -7, -11, -16,
-14, -10, -13, -16, -12, -9, -9, -8, -8, -8, -9, -10, -6, -4, -3, 1, 10, 17, 24,
30, 35, 39, 40, 41, 42, 39, 28, 21, 12, 2, -5, -13, -15, -16, -17, -13, -4, 1,
4, 8, 14, 18, 19, 24, 24, 21, 19, 21, 20, 16, 15, 12, 6, -2, -6, -6, -5, -12,
-17, -18, -21, -22, -21, -23, -27, -33, -31, -24, -23, -24, -21, -17, -13, -10,
-4, 1, 1, 0, 4, 4, -2, -9, -11, -12, -17, -23, -24, -23, -23, -20, -12, -8, -7,
-2, 5, 6, 2, 0, 0, 0, 0, 3, 4, 4, 3, 4, 4, 2, 1, 4, 5, 6, 6, 4, 2, -4, -4, -5,
-12, -16, -14, -15, -16, -13, -10, -8, -9, -8, -2, -1, -7, -11, -11, -13, -22,
-26, -26, -31, -36, -38, -33, -32, -35, -30, -20, -17, -21, -21, -14, -15, -23,
-21, -18, -21, -27, -24, -17, -20, -24, -20, -18, -22, -27, -25, -26, -31, -34,
-33, -28, -29, -31, -26, -18, -17, -17, -10, -2, -5, -8, -4, -6, -12, -16, -12,
-8, -10, -12, -9, -4, -5, -5, 1, 5, 6, 8, 16, 22, 21, 20, 25, 30, 27, 24, 29,
28, 21, 17, 18, 14, 6, -2, -5, -12, -24, -28, -27, -31, -38, -39, -33, -29, -29,
-29, -25, -19, -16, -8, 5, 13, 13, 15, 20, 18, 12, 7, 6, 3, -5, -8, -6, -7, -13,
-15, -13, -12, -10, -6, 0, 3, 1, 3, 10, 11, 6, 3, 5, 9, 7, 5, 4, 2, -2, -5, -1,
1, -2, -6, -6, -7, -13, -18, -20, -21, -22, -25, -24, -21, -21, -19, -11, -3, 0,
3, 7, 11, 10, 5, 4, 6, 4, 2, 5, 5, 3, 6, 11, 15, 18, 23, 32, 35, 35, 31, 25, 21,
17, 13, 7, 3, 0, -3, -6, -8, -8, -8, -8, -8, -7, -5, -3, -2, -1, -1, -4, -4, -1,
0, -1, 1, 7, 10, 12, 16, 20, 18, 16, 19, 21, 18, 14, 14, 14, 10, 7, 7, 7, 5, 6,
10, 14, 15, 16, 20, 23, 21, 21, 25, 25, 21, 17, 18, 16, 8, 2, 3, 1, -5, -9, -9,
-10, -16, -18, -13, -13, -15, -16, -11, -4, -3, 0, 11, 19, 22, 26, 30, 30, 29,
28, 28, 27, 23, 20, 18, 13, 9, 3, 0, -6, -12, -13, -13, -15, -17, -13, -10, -9,
-9, -4, 1, -1, -3, -2, -3, -4, -6, -5, -4, -5, -6, -4, -4, -10, -15, -16, -18,
-20, -19, -16, -11, -12, -12, -7, 1, 6, 10, 16, 19, 19, 19, 20, 19, 15, 11, 12,
10, 5, 5, 5, 4, 4, 8, 13, 14, 16, 19, 19, 14, 8, 7, 5, 0, -6, -7, -9, -13, -17,
-17, -14, -17, -17, -12, -10, -11, -9, -8, -7, -11, -12, -8, -6, -6, -2, 7, 15,
21, 27, 33, 37, 39, 40, 39, 32, 21, 15, 7, -1, -8, -15, -17, -18, -17, -12, -4,
0, 3, 8, 15, 18, 21, 25, 25, 23, 21, 24, 22, 18, 15, 13, 8, 2, -1, 0, 0, -8,
-12, -13, -17, -19, -19, -20, -24, -29, -27, -21, -22, -24, -23, -19, -14, -10,
-4, -1, -3, -2, 2, 2, -5, -13, -16, -18, -24, -29, -29, -28, -26, -22, -14, -13,
-13, -7, -1, 0, -2, -1, 1, -1, -2, 0, 2, 3, 2, 3, 3, 2, 2, 6, 8, 9, 9, 9, 9, 6,
6, 4, -4, -6, -3, -3, -1, 4, 7, 8, 7, 9, 14, 15, 12, 11, 11, 6, -3, -7, -6, -8,
-12, -14, -9, -9, -12, -6, 3, 4, 1, 5, 12, 8, 1, 3, 6, 2, -5, -2, 4, 2, -2, -1,
-1, -5, -8, -6, -8, -15, -18, -19, -18, -21, -21, -15, -7, -5, -3, 3, 7, 0, -4,
-1, -3, -8, -12, -9, -8, -12, -14, -10, -6, -8, -7, 0, 3, 2, 4, 13, 19, 16, 16,
21, 24, 21, 20, 24, 22, 15, 12, 13, 9, 0, -6, -8, -15, -27, -29, -28, -31, -34,
-34, -28, -27, -29, -28, -22, -16, -13, -4, 9, 16, 15, 17, 22, 22, 17, 13, 11,
7, 0, -1, 1, -1, -6, -6, -2, -1, 0, 2, 7, 9, 6, 10, 17, 18, 12, 10, 13, 15, 13,
9, 9, 10, 7, 5, 8, 8, 1, -3, -4, -7, -12, -15, -16, -18, -21, -24, -23, -20,
-19, -16, -7, -1, 0, 3, 7, 8, 7, 5, 5, 6, 2, 0, 2, 2, 0, 3, 7, 10, 12, 17, 25,
25, 22, 18, 11, 6, 3, 0, -5, -8, -7, -9, -11, -12, -9, -7, -7, -7, -6, -5, -6,
-7, -6, -7, -9, -8, -4, -2, -4, -1, 5, 6, 4, 6, 10, 8, 5, 8, 11, 8, 4, 4, 3, -2,
-7, -7, -7, -10, -12, -8, -5, -6, -6, 0, 5, 4, 3, 7, 8, 5, 1, 1, -1, -9, -13,
-11, -12, -15, -15, -13, -13, -17, -17, -12, -13, -17, -19, -16, -14, -14, -12,
-7, -3, -1, 2, 4, 6, 7, 10, 13, 13, 11, 11, 11, 7, 3, 0, -2, -7, -11, -11, -11,
-12, -11, -7, -4, -3, -1, 0, 0, 0, 0, -2, -3, -4, -4, -4, -6, -7, -8, -8, -9,
-10, -10, -11, -12, -12, -11, -11, -11, -10, -9, -7, -6, -3, -1, -1, 1, 4, 5, 3,
3, 4, 2, 1, 0, -1, -3, -5, -6, -5, -6, -8, -8, -6, -7, -8, -7, -5, -5, -6, -3,
-2, -4, -6, -4, -3, -4, -4, -3, -2, -4, -4, -2, -2, -4, -5, -2, -3, -5, -5, -2,
-1, -2, 0, 3, 3, 2, 4, 6, 5, 1, 1, 1, 0, -1, -1, -1, -1, -1, 0, 2, 1, 0, 2, 4,
5, 6, 8, 10, 9, 9, 11, 10, 8, 7, 7, 6, 4, 3, 2, 1, 0, 0, 1, 1, 0, 0, 0, -1, -3,
-2, -1, -2, -3, -3, -2, -2, -2, 0, 3, 3, 3, 4, 4, 3, 1, 0, -1, -3, -5, -6, -7,
-8, -9, -8, -7, -7, -7, -6, -4, -3, -3, -2, 0, 0, -1, 0, 1, 0, 0, 0, 1, 1, 0, 1,
1, 1, 0, 0, 0, -1, -1, -1, -2, -3, -4, -3, -3, -3, -4, -2, 0, 0, 0, 1, 3, 3, 2,
3, 3, 2, 1, 1, 1, 0, 0, 0, 1, 0, 0, 1, 2, 1, 1, 1, 2, 1, 1, 1, 1, 1, 0, 0, 0, 0,
-1, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, -1, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, };

#endif /* DUONE_H_ */
