#ifndef SASA_H_
#define SASA_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define SASA_NUM_CELLS 2865
#define SASA_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) SASA_DATA [] = {0, -1, 0,
-1, 0, -1, 0, 5, 4, -1, -1, 1, -1, -16, -16, -17, -15, 7, 10, 29, 35, 30, 34,
-3, -11, -48, -70, -55, -71, 5, 35, 64, 105, 79, 98, 48, 36, -27, -102, -83,
-107, -83, -91, -59, -37, -1, 84, 69, 90, 68, 48, 24, -60, -55, -76, -65, -37,
-25, 59, 62, 79, 81, 65, 65, -14, -27, -74, -92, -76, -87, -43, -42, 34, 73, 68,
92, 59, 67, -1, -47, -55, -92, -66, -79, -32, 4, 28, 88, 69, 86, 59, 40, 9, -69,
-60, -87, -71, -63, -43, 33, 36, 78, 77, 70, 67, 32, 25, -62, -78, -72, -78,
-61, -68, 6, 25, 63, 93, 74, 90, 45, 42, -33, -96, -81, -111, -76, -90, -9, 91,
79, 119, 94, 108, 65, 9, -20, -123, -104, -116, -99, -89, -64, 45, 49, 98, 97,
87, 82, -1, -12, -86, -101, -87, -94, -27, -18, 68, 106, 90, 108, 69, 81, -23,
-90, -84, -118, -86, -103, -40, -3, 38, 113, 85, 107, 71, 61, 10, -99, -83,
-109, -87, -81, -48, 60, 59, 101, 93, 89, 79, 17, 5, -89, -99, -95, -99, -60,
-59, 56, 87, 86, 103, 74, 84, 7, -17, -66, -112, -83, -99, -59, -62, 17, 91, 76,
108, 79, 94, 38, -21, -42, -115, -93, -113, -85, -70, -28, 110, 97, 112, 101,
102, 81, -51, -60, -111, -115, -104, -105, -67, -65, 64, 98, 95, 112, 77, 88,
-26, -75, -82, -115, -80, -99, -3, 53, 70, 120, 93, 113, 71, 64, -4, -115, -92,
-121, -92, -96, -46, 65, 61, 111, 97, 100, 80, 17, 1, -102, -104, -105, -102,
-66, -61, 70, 95, 97, 110, 81, 90, -18, -51, -82, -115, -89, -107, -46, -33, 43,
113, 88, 114, 75, 82, 8, -76, -71, -116, -87, -95, -56, -15, 14, 106, 89, 107,
88, 80, 51, -68, -70, -106, -102, -100, -93, -34, -24, 96, 117, 103, 111, 87,
98, -47, -96, -96, -120, -96, -112, -51, -41, 45, 116, 89, 116, 72, 76, -5,
-102, -82, -116, -81, -86, -22, 92, 80, 118, 98, 106, 75, 21, -2, -112, -104,
-112, -102, -77, -63, 76, 88, 102, 108, 86, 89, -19, -41, -88, -115, -93, -108,
-48, -42, 51, 114, 91, 117, 75, 85, -5, -89, -79, -118, -87, -102, -42, 21, 41,
115, 93, 108, 80, 59, 24, -91, -83, -110, -96, -79, -62, 30, 37, 93, 98, 92, 94,
57, 56, -63, -93, -95, -110, -86, -98, -15, 8, 71, 125, 96, 115, 78, 94, -12,
-112, -92, -124, -94, -109, -56, -10, 23, 112, 87, 105, 74, 47, 13, -99, -88,
-105, -89, -65, -46, 85, 90, 106, 106, 91, 89, -5, -19, -91, -113, -98, -109,
-62, -65, 49, 103, 89, 114, 77, 90, -4, -67, -74, -117, -86, -103, -46, -12, 31,
116, 90, 111, 79, 72, 22, -95, -81, -111, -91, -87, -58, 47, 50, 102, 97, 94,
87, 34, 24, -79, -94, -96, -103, -65, -67, 30, 57, 77, 101, 80, 94, 45, 41, -39,
-99, -83, -109, -78, -94, -27, 27, 51, 121, 94, 114, 82, 80, 24, -107, -91,
-119, -100, -98, -74, -2, 10, 95, 90, 89, 81, 31, 21, -79, -93, -89, -96, -53,
-53, 60, 97, 91, 110, 79, 93, 5, -32, -68, -115, -89, -110, -63, -57, 15, 104,
81, 108, 77, 83, 26, -70, -64, -108, -87, -93, -62, 4, 18, 101, 92, 97, 87, 56,
43, -76, -86, -95, -99, -75, -76, 32, 55, 82, 102, 80, 92, 31, 19, -51, -96,
-82, -106, -62, -63, 6, 60, 61, 97, 73, 88, 51, 35, -10, -93, -77, -102, -81,
-87, -52, 18, 29, 108, 97, 107, 96, 74, 57, -82, -92, -107, -110, -91, -91, -21,
-11, 68, 94, 77, 90, 40, 36, -46, -92, -76, -99, -55, -58, 24, 97, 80, 110, 80,
93, 35, -21, -42, -111, -88, -104, -74, -55, -18, 90, 78, 99, 85, 75, 54, -51,
-55, -94, -93, -83, -79, -7, 2, 79, 98, 86, 96, 55, 57, -44, -87, -81, -103,
-70, -83, 2, 48, 62, 103, 77, 93, 45, 22, -22, -90, -74, -102, -70, -60, -23,
45, 45, 90, 76, 82, 65, 39, 21, -73, -72, -91, -88, -80, -75, -7, 2, 87, 106,
99, 109, 72, 80, -44, -93, -93, -118, -88, -101, -44, -30, 36, 97, 73, 95, 54,
50, -9, -87, -69, -97, -65, -61, -12, 87, 74, 104, 86, 88, 62, -2, -15, -99,
-93, -98, -90, -58, -48, 66, 78, 87, 94, 71, 75, -23, -46, -77, -100, -78, -91,
-29, -16, 52, 102, 79, 100, 61, 67, -8, -82, -71, -104, -75, -86, -31, 35, 43,
99, 79, 90, 65, 33, 9, -78, -72, -95, -83, -61, -48, 26, 31, 79, 83, 77, 79, 48,
46, -47, -70, -81, -97, -78, -91, -28, -17, 57, 114, 92, 117, 78, 92, -2, -92,
-82, -120, -92, -104, -65, -38, 3, 95, 76, 95, 72, 57, 26, -78, -70, -92, -80,
-62, -45, 69, 74, 95, 97, 85, 84, 16, 5, -78, -102, -90, -102, -63, -69, 35, 82,
78, 103, 72, 87, 8, -37, -59, -106, -79, -97, -51, -29, 19, 102, 80, 102, 73,
70, 26, -72, -64, -101, -84, -82, -58, 18, 25, 91, 88, 88, 82, 40, 31, -62, -75,
-86, -95, -64, -65, 8, 24, 65, 91, 75, 89, 53, 58, -23, -73, -72, -103, -78,
-96, -45, -21, 31, 116, 91, 117, 86, 90, 32, -88, -79, -117, -100, -102, -81,
-38, -19, 86, 83, 91, 85, 56, 47, -62, -77, -85, -93, -61, -64, 47, 80, 86, 107,
82, 96, 29, 12, -54, -111, -88, -111, -70, -74, 3, 86, 71, 106, 77, 86, 34, -37,
-45, -105, -85, -95, -68, -29, -5, 94, 85, 96, 87, 67, 53, -58, -66, -91, -95,
-78, -78, 5, 18, 74, 97, 82, 94, 47, 45, -38, -81, -77, -104, -67, -72, -12, 23,
47, 97, 75, 93, 61, 61, 7, -75, -67, -103, -83, -93, -63, -20, 5, 109, 97, 110,
98, 84, 65, -73, -82, -108, -110, -95, -95, -40, -33, 66, 93, 83, 97, 56, 60,
-37, -85, -77, -102, -62, -73, 16, 85, 77, 111, 84, 99, 48, 12, -27, -112, -88,
-108, -81, -71, -32, 81, 73, 101, 88, 81, 62, -30, -37, -95, -95, -88, -86, -30,
-23, 74, 96, 88, 100, 65, 71, -33, -74, -80, -106, -76, -90, -15, 18, 54, 105,
80, 99, 57, 46, -9, -84, -71, -105, -76, -72, -36, 25, 34, 94, 80, 89, 73, 55,
35, -67, -69, -95, -92, -87, -82, -20, -11, 88, 109, 99, 110, 77, 88, -41, -92,
-93, -120, -91, -106, -48, -36, 36, 102, 77, 101, 62, 62, -3, -89, -72, -103,
-71, -70, -19, 86, 75, 108, 90, 93, 68, 8, -9, -101, -96, -102, -95, -65, -55,
66, 80, 90, 98, 74, 79, -17, -40, -78, -104, -82, -97, -37, -27, 48, 105, 82,
104, 67, 75, -2, -79, -71, -108, -78, -89, -38, 25, 38, 103, 83, 95, 71, 43, 17,
-79, -74, -98, -88, -68, -55, 22, 28, 82, 88, 81, 85, 51, 51, -48, -75, -84,
-101, -80, -94, -29, -16, 57, 118, 93, 117, 80, 94, 0, -97, -83, -122, -93,
-105, -66, -33, 3, 99, 80, 98, 75, 56, 28, -81, -75, -94, -84, -64, -50, 69, 78,
97, 102, 86, 88, 15, 4, -77, -107, -91, -107, -65, -71, 31, 88, 79, 107, 74, 88,
12, -42, -58, -109, -81, -99, -55, -28, 14, 104, 83, 103, 79, 71, 35, -73, -68,
-100, -89, -83, -66, 18, 26, 90, 93, 88, 88, 41, 35, -59, -80, -86, -101, -66,
-70, 6, 30, 63, 96, 76, 92, 54, 58, -17, -82, -73, -105, -80, -96, -48, -14, 26,
117, 94, 115, 89, 88, 42, -88, -82, -116, -104, -100, -85, -33, -20, 83, 88, 89,
89, 53, 50, -59, -83, -83, -97, -60, -67, 42, 87, 85, 110, 82, 97, 32, 7, -49,
-115, -88, -112, -72, -73, -6, 90, 73, 106, 80, 85, 41, -43, -47, -104, -89,
-94, -74, -25, -8, 92, 90, 95, 92, 65, 59, -57, -74, -89, -100, -76, -83, 6, 26,
70, 101, 81, 97, 47, 43, -32, -87, -77, -106, -69, -73, -15, 34, 47, 98, 76, 92,
63, 55, 12, -80, -70, -102, -86, -91, -68, -13, 3, 104, 101, 107, 102, 81, 73,
-68, -88, -104, -114, -93, -98, -38, -31, 58, 98, 81, 98, 54, 56, -30, -89, -75,
-102, -62, -71, 8, 90, 77, 112, 85, 97, 51, 4, -25, -111, -90, -107, -83, -67,
-36, 80, 75, 98, 91, 78, 66, -33, -42, -91, -97, -85, -88, -28, -21, 70, 100,
87, 101, 63, 71, -30, -80, -78, -106, -75, -89, -16, 27, 52, 105, 80, 98, 58,
42, -4, -86, -72, -103, -77, -69, -39, 29, 34, 91, 81, 86, 75, 52, 38, -65, -71,
-92, -94, -84, -85, -21, -12, 81, 111, 97, 112, 76, 89, -32, -93, -91, -121,
-91, -106, -51, -35, 28, 102, 76, 100, 63, 60, 4, -88, -72, -100, -73, -68, -26,
84, 75, 106, 92, 90, 73, 9, -5, -97, -99, -99, -98, -64, -60, 59, 82, 87, 100,
73, 82, -12, -40, -74, -106, -81, -98, -39, -26, 42, 106, 81, 105, 68, 74, 6,
-79, -69, -107, -80, -88, -43, 27, 36, 100, 84, 93, 74, 41, 20, -76, -75, -95,
-90, -65, -58, 21, 29, 77, 89, 79, 86, 51, 53, -42, -76, -81, -102, -79, -95,
-31, -14, 52, 118, 92, 117, 80, 93, 8, -97, -83, -121, -94, -104, -69, -34, -1,
97, 80, 96, 77, 56, 32, -78, -75, -92, -85, -62, -53, 65, 79, 95, 103, 84, 89,
17, 5, -74, -108, -90, -107, -65, -72, 27, 88, 77, 107, 73, 87, 13, -45, -57,
-108, -81, -98, -56, -26, 13, 104, 83, 102, 79, 70, 35, -73, -68, -99, -89, -82,
-66, 20, 27, 88, 92, 86, 87, 41, 35, -58, -80, -85, -100, -65, -70, 5, 29, 62,
96, 75, 92, 54, 58, -17, -79, -72, -105, -80, -96, -49, -16, 24, 116, 93, 115,
89, 87, 43, -88, -82, -115, -104, -99, -86, -34, -20, 83, 88, 88, 89, 51, 47,
-58, -83, -82, -97, -60, -67, 40, 87, 84, 110, 82, 97, 31, 5, -48, -114, -88,
-111, -72, -71, -6, 89, 72, 105, 80, 84, 42, -42, -46, -103, -88, -93, -73, -24,
-9, 90, 90, 94, 92, 64, 59, -54, -72, -88, -99, -75, -82, 6, 25, 69, 101, 80,
96, 46, 41, -31, -86, -76, -105, -68, -72, -17, 31, 45, 96, 75, 91, 64, 56, 15,
-76, -68, -101, -86, -90, -69, -16, 0, 102, 101, 106, 103, 80, 74, -65, -87,
-103, -114, -92, -99, -40, -34, 55, 96, 80, 98, 56, 60, -27, -89, -74, -102,
-63, -71, 5, 89, 76, 110, 84, 96, 54, 7, -22, -110, -90, -106, -85, -66, -40,
77, 75, 97, 91, 77, 67, -29, -40, -89, -98, -84, -89, -29, -23, 66, 100, 85,
101, 63, 71, -25, -78, -76, -107, -75, -89, -20, 24, 48, 105, 80, 97, 60, 42,
-1, -84, -71, -102, -79, -69, -42, 26, 31, 89, 81, 85, 76, 52, 40, -62, -70,
-90, -94, -83, -86, -21, -13, 78, 111, 96, 112, 76, 90, -30, -93, -90, -121,
-91, -106, -53, -36, 25, 102, 76, 100, 65, 60, 6, -88, -72, -100, -74, -67, -28,
82, 74, 104, 92, 90, 75, 11, -2, -95, -99, -99, -99, -64, -61, 57, 81, 86, 100,
73, 83, -10, -40, -72, -106, -81, -98, -41, -28, 38, 105, 81, 104, 69, 74, 9,
-79, -69, -106, -80, -87, -45, 24, 33, 99, 84, 92, 75, 41, 23, -73, -74, -94,
-91, -66, -60, 18, 27, 75, 89, 79, 87, 51, 54, -39, -75, -79, -102, -79, -96,
-34, -16, 49, 118, 92, 118, 81, 94, 11, -95, -82, -120, -95, -104, -71, -35, -4,
95, 80, 96, 78, 56, 34, -76, -75, -90, -87, -62, -54, 63, 79, 93, 103, 84, 90,
18, 5, -71, -108, -89, -108, -65, -72, 24, 88, 76, 107, 74, 87, 17, -42, -55,
-107, -82, -98, -58, -28, 9, 102, 84, 101, 80, 70, 39, -71, -67, -98, -90, -81,
-69, 16, 25, 85, 94, 85, 89, 41, 37, -54, -80, -83, -101, -64, -70, 1, 27, 59,
96, 75, 92, 55, 58, -11, -78, -71, -104, -80, -96, -52, -16, 20, 115, 94, 114,
91, 86, 48, -86, -82, -114, -106, -99, -88, -29, -18, 84, 95, 90, 93, 53, 52,
-57, -89, -85, -102, -64, -74, 33, 86, 83, 112, 83, 100, 35, 7, -45, -116, -89,
-112, -74, -73, -10, 92, 76, 108, 83, 86, 45, -43, -46, -105, -91, -94, -77,
-26, -12, 91, 93, 95, 95, 66, 62, -55, -77, -89, -102, -76, -85, 3, 26, 70, 104,
82, 98, 49, 44, -31, -93, -78, -107, -70, -75, -15, 46, 51, 99, 77, 92, 61, 42,
5, -89, -76, -100, -84, -83, -59, 20, 28, 100, 98, 102, 98, 66, 59, -74, -95,
-100, -110, -84, -90, -3, 18, 66, 98, 76, 92, 36, 25, -44, -100, -78, -102, -60,
-59, 11, 95, 77, 108, 79, 88, 38, -32, -43, -108, -88, -99, -76, -43, -19, 88,
82, 95, 87, 68, 57, -52, -62, -89, -96, -79, -82, -4, 9, 70, 98, 81, 96, 50, 50,
-37, -91, -78, -103, -69, -80, -5, 56, 59, 102, 76, 90, 47, 13, -20, -96, -78,
-99, -73, -55, -25, 65, 59, 88, 79, 76, 64, 3, -7, -81, -85, -84, -85, -56, -55,
40, 60, 80, 97, 78, 90, 33, 24, -53, -103, -82, -103, -63, -68, 7, 67, 61, 94,
66, 74, 23, -37, -44, -96, -74, -87, -54, -13, 9, 89, 77, 92, 64, 63, 9, -69,
-60, -99, -74, -84, -45, 12, 24, 89, 76, 85, 69, 35, 18, -73, -73, -84, -82,
-61, -56, 37, 48, 76, 87, 70, 76, 13, 0, -59, -90, -74, -90, -46, -45, 24, 73,
65, 93, 62, 71, 13, -37, -47, -92, -69, -83, -47, -12, 12, 80, 66, 83, 66, 50,
29, -48, -48, -81, -75, -68, -59, 1, 8, 66, 74, 72, 76, 44, 43, -33, -54, -67,
-86, -59, -68, -5, 18, 46, 79, 58, 71, 29, 11, -25, -71, -57, -79, -50, -42, -7,
52, 46, 77, 60, 59, 36, -13, -21, -72, -64, -68, -57, -22, -12, 52, 54, 65, 66,
40, 38, -27, -38, -60, -72, -53, -59, -6, 6, 42, 68, 55, 70, 33, 27, -17, -56,
-50, -75, -48, -49, -11, 31, 35, 72, 54, 61, 36, 3, -11, -61, -53, -67, -54,
-30, -18, 42, 42, 62, 60, 44, 40, -12, -19, -54, -63, -54, -59, -16, -10, 35,
55, 51, 66, 34, 33, -12, -40, -45, -69, -46, -51, -15, 11, 26, 62, 47, 58, 35,
17, -3, -50, -43, -62, -48, -36, -21, 28, 29, 57, 52, 46, 39, -3, -9, -48, -53,
-51, -53, -22, -19, 29, 43, 47, 58, 35, 38, -5, -23, -38, -61, -43, -51, -18,
-2, 20, 52, 41, 57, 34, 25, 0, -39, -36, -59, -44, -39, -22, 14, 18, 51, 44, 45,
37, 9, 2, -41, -41, -49, -49, -26, -23, 20, 28, 43, 51, 35, 38, 0, -11, -33,
-49, -40, -50, -20, -13, 16, 42, 37, 52, 31, 30, 3, -25, -28, -52, -38, -42,
-22, 3, 11, 43, 36, 45, 34, 16, 7, -32, -31, -46, -42, -29, -25, 12, 16, 39, 43,
35, 36, 7, 3, -28, -39, -38, -46, -21, -20, 11, 27, 31, 47, 29, 31, 6, -10, -21,
-44, -33, -41, -21, -7, 6, 35, 29, 42, 30, 21, 10, -23, -22, -41, -35, -32, -25,
5, 8, 34, 35, 33, 32, 10, 7, -23, -30, -35, -41, -23, -23, 7, 17, 27, 40, 27,
32, 7, -4, -18, -37, -30, -40, -21, -13, 3, 27, 24, 39, 27, 23, 11, -12, -15,
-38, -31, -31, -23, 0, 3, 28, 27, 31, 29, 13, 10, -17, -20, -32, -37, -23, -23,
3, 8, 23, 34, 25, 30, 9, 3, -14, -28, -25, -36, -20, -17, 0, 17, 19, 35, 24, 25,
11, -8, -12, -30, -25, -31, -22, -6, -1, 21, 20, 30, 27, 16, 12, -11, -13, -27,
-29, -23, -24, -1, 2, 19, 25, 23, 28, 11, 9, -11, -21, -23, -33, -19, -18, -2,
8, 15, 30, 21, 24, 11, 1, -7, -25, -20, -29, -19, -10, -3, 14, 14, 26, 22, 17,
13, -6, -8, -23, -22, -23, -22, -3, -1, 16, 19, 21, 24, 10, 9, -7, -12, -19,
-27, -17, -20, -3, 4, 11, 22, 17, 23, 10, 4, -5, -18, -16, -26, -17, -11, -4, 9,
9, 22, 18, 16, 11, -3, -5, -19, -18, -20, -18, -6, -4, 11, 12, 18, 20, 10, 10,
-5, -9, -16, -21, -13, -14, -2, 2, 8, 13, 10, 13, 5, 3, -2, -7, -7, -12, -7, -6,
-2, 2, 2, 5, 3, 4, 2, 0, -1, -3, -2, -2, -1, 0, };

#endif /* SASA_H_ */
