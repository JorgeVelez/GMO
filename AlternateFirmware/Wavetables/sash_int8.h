#ifndef SASH_H_
#define SASH_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define SASH_NUM_CELLS 2896
#define SASH_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) SASH_DATA [] = {0, -1,
-1, -2, 2, 2, 6, 7, 9, 10, 13, 15, 12, 14, -6, -8, -37, -46, -56, -65, -63, -71,
-63, -71, -57, -63, -42, -42, -9, 11, 30, 63, 59, 81, 70, 81, 70, 76, 65, 66,
52, 40, 23, -21, -27, -73, -70, -85, -82, -85, -83, -79, -78, -67, -66, -41,
-40, 14, 23, 58, 73, 72, 82, 75, 84, 71, 77, 61, 67, 40, 38, -2, -30, -46, -78,
-70, -88, -76, -86, -73, -79, -65, -64, -47, -28, -10, 39, 39, 74, 68, 79, 75,
77, 74, 71, 69, 56, 54, 29, 25, -34, -43, -68, -79, -77, -84, -74, -80, -66,
-71, -51, -53, -27, -23, 11, 31, 47, 76, 70, 87, 77, 88, 76, 82, 69, 71, 55, 50,
24, -28, -36, -92, -85, -102, -97, -101, -98, -95, -93, -84, -82, -58, -55, 23,
34, 77, 93, 93, 104, 92, 99, 87, 95, 79, 88, 58, 62, -3, -48, -64, -105, -92,
-112, -96, -104, -91, -99, -85, -89, -70, -58, -27, 55, 55, 98, 92, 104, 98, 96,
93, 90, 88, 78, 77, 47, 45, -44, -61, -86, -101, -97, -107, -95, -102, -89, -97,
-75, -81, -45, -43, 22, 75, 73, 102, 89, 105, 91, 99, 86, 93, 76, 75, 55, 39, 9,
-76, -71, -102, -95, -104, -98, -99, -94, -88, -84, -67, -63, -26, -20, 56, 69,
86, 97, 95, 103, 91, 97, 85, 92, 74, 83, 50, 53, -21, -74, -79, -113, -96, -111,
-95, -103, -90, -97, -84, -94, -72, -61, -23, 75, 71, 109, 100, 103, 97, 96, 92,
89, 87, 84, 83, 55, 52, -60, -82, -100, -113, -100, -106, -95, -100, -88, -95,
-81, -95, -55, -57, 25, 94, 85, 116, 96, 105, 91, 98, 86, 93, 80, 89, 65, 47,
11, -93, -86, -113, -104, -105, -99, -97, -94, -92, -90, -82, -79, -30, -24, 75,
96, 99, 109, 95, 101, 90, 96, 85, 93, 74, 84, 39, 30, -40, -106, -92, -117, -97,
-105, -93, -100, -87, -96, -78, -78, -49, -10, 14, 97, 88, 109, 100, 100, 94,
94, 90, 88, 86, 81, 79, 41, 36, -74, -97, -103, -114, -99, -104, -94, -99, -88,
-96, -82, -95, -54, -56, 31, 106, 90, 116, 96, 104, 91, 98, 86, 93, 81, 92, 67,
51, 11, -105, -93, -114, -104, -103, -98, -97, -93, -92, -89, -87, -85, -40,
-34, 80, 102, 101, 110, 96, 101, 91, 96, 85, 93, 79, 93, 41, 32, -45, -114, -95,
-116, -97, -105, -92, -99, -87, -96, -80, -89, -53, -6, 19, 110, 96, 109, 99,
99, 94, 94, 90, 89, 86, 77, 74, 8, -1, -91, -109, -104, -111, -98, -103, -92,
-98, -86, -95, -69, -79, -6, 25, 62, 111, 94, 111, 94, 101, 89, 96, 84, 92, 77,
86, 55, 21, -12, -113, -99, -114, -104, -104, -98, -97, -93, -92, -89, -86, -83,
-34, -28, 85, 109, 102, 110, 96, 101, 90, 96, 85, 92, 78, 92, 41, 33, -47, -122,
-98, -116, -98, -106, -93, -99, -88, -95, -81, -94, -59, -15, 14, 116, 101, 110,
101, 100, 95, 94, 90, 89, 85, 82, 78, 7, -3, -94, -115, -104, -110, -98, -102,
-92, -97, -86, -94, -74, -89, -8, 29, 66, 121, 97, 110, 94, 101, 89, 96, 84, 92,
75, 82, 41, -33, -45, -118, -105, -109, -101, -101, -95, -95, -91, -90, -85,
-67, -61, 44, 58, 96, 109, 99, 104, 93, 98, 88, 93, 82, 91, 72, 86, 16, -14,
-64, -125, -101, -115, -97, -104, -91, -98, -87, -95, -81, -95, -57, -4, 20,
119, 103, 109, 100, 99, 93, 92, 90, 88, 86, 83, 81, 7, -4, -97, -119, -104,
-110, -97, -101, -91, -97, -86, -95, -78, -96, -14, 24, 65, 125, 99, 110, 93,
100, 88, 96, 84, 93, 76, 88, 42, -41, -51, -121, -106, -109, -100, -100, -94,
-94, -90, -89, -86, -73, -69, 48, 64, 101, 115, 99, 103, 92, 97, 87, 94, 82, 92,
66, 78, -13, -71, -83, -125, -100, -109, -94, -101, -89, -97, -84, -95, -71,
-66, -20, 86, 78, 115, 103, 103, 96, 95, 91, 90, 87, 86, 84, 71, 67, -38, -53,
-102, -118, -102, -107, -95, -100, -91, -97, -85, -94, -76, -94, -8, 38, 69,
126, 99, 110, 94, 101, 89, 96, 84, 92, 77, 89, 46, -40, -49, -122, -109, -108,
-101, -100, -96, -94, -91, -89, -88, -78, -77, 39, 58, 99, 117, 100, 105, 93,
99, 88, 94, 82, 93, 68, 84, -9, -74, -82, -124, -100, -109, -95, -102, -89, -97,
-84, -94, -73, -74, -27, 88, 80, 115, 104, 103, 97, 96, 92, 91, 88, 86, 84, 61,
57, -65, -86, -103, -115, -100, -105, -94, -99, -88, -95, -82, -95, -55, -59,
32, 102, 90, 117, 97, 105, 92, 98, 87, 94, 82, 91, 71, 72, 28, -77, -74, -118,
-107, -107, -100, -99, -95, -93, -91, -88, -87, -75, -74, 44, 63, 98, 117, 99,
105, 93, 99, 88, 94, 82, 93, 70, 88, -4, -68, -79, -125, -101, -110, -95, -102,
-90, -97, -85, -94, -76, -82, -37, 78, 73, 116, 105, 104, 98, 96, 92, 90, 88,
86, 85, 66, 65, -61, -86, -102, -116, -100, -106, -93, -98, -87, -95, -82, -94,
-60, -69, 25, 103, 89, 118, 97, 106, 92, 98, 86, 93, 82, 92, 70, 61, 21, -97,
-89, -115, -105, -104, -98, -96, -93, -91, -89, -87, -85, -42, -37, 77, 102,
101, 111, 97, 102, 90, 96, 85, 92, 80, 92, 60, 69, -20, -94, -88, -122, -100,
-108, -94, -100, -89, -96, -85, -93, -76, -80, -37, 78, 74, 115, 105, 104, 97,
95, 92, 90, 89, 86, 86, 71, 72, -51, -77, -101, -118, -101, -106, -94, -99, -88,
-96, -83, -95, -67, -81, 14, 93, 85, 119, 98, 106, 92, 98, 87, 94, 83, 92, 73,
69, 29, -93, -87, -115, -106, -104, -99, -97, -94, -92, -90, -87, -87, -55, -54,
71, 100, 99, 112, 97, 103, 91, 97, 86, 94, 80, 93, 56, 59, -28, -108, -91, -118,
-99, -107, -93, -100, -88, -96, -83, -94, -65, -36, -3, 104, 92, 110, 102, 101,
96, 94, 91, 89, 88, 84, 84, 57, 55, -66, -92, -101, -116, -100, -106, -94, -100,
-89, -96, -83, -94, -66, -79, 14, 91, 84, 119, 98, 106, 93, 99, 88, 94, 83, 91,
74, 76, 34, -84, -79, -116, -107, -105, -100, -98, -95, -92, -91, -87, -87, -65,
-64, 64, 90, 99, 114, 98, 104, 92, 98, 87, 94, 81, 93, 60, 68, -23, -102, -90,
-120, -99, -107, -94, -100, -89, -96, -83, -94, -70, -54, -16, 103, 92, 112,
103, 102, 97, 95, 92, 89, 88, 84, 85, 46, 43, -75, -103, -102, -114, -99, -105,
-93, -99, -87, -96, -80, -96, -40, -26, 42, 113, 93, 115, 96, 103, 90, 96, 86,
93, 81, 90, 69, 58, 20, -96, -88, -115, -106, -104, -99, -96, -94, -92, -91,
-87, -88, -65, -66, 59, 88, 99, 115, 97, 103, 91, 97, 86, 94, 81, 93, 65, 79,
-11, -93, -86, -122, -99, -107, -94, -100, -90, -96, -85, -93, -75, -70, -33,
92, 86, 112, 104, 101, 97, 94, 93, 89, 89, 84, 86, 57, 57, -67, -98, -102, -115,
-98, -104, -92, -99, -88, -96, -81, -95, -55, -57, 28, 112, 92, 116, 97, 104,
91, 97, 86, 93, 82, 91, 69, 47, 14, -103, -95, -113, -106, -103, -98, -95, -93,
-90, -90, -84, -85, -26, -19, 78, 105, 100, 111, 96, 101, 89, 95, 85, 93, 79,
92, 57, 60, -22, -103, -91, -121, -100, -108, -95, -101, -90, -96, -85, -93,
-76, -71, -34, 86, 81, 112, 105, 102, 98, 95, 93, 89, 89, 84, 87, 65, 67, -55,
-87, -99, -118, -100, -107, -94, -100, -88, -96, -82, -95, -64, -73, 14, 100,
87, 118, 98, 105, 92, 98, 88, 93, 83, 91, 73, 63, 28, -95, -90, -113, -107,
-104, -100, -97, -95, -91, -91, -86, -87, -47, -45, 72, 104, 100, 112, 97, 103,
91, 97, 85, 94, 79, 94, 51, 46, -29, -111, -93, -118, -99, -107, -94, -100, -88,
-95, -82, -91, -62, -18, 6, 104, 95, 109, 102, 100, 96, 93, 91, 88, 88, 83, 84,
49, 48, -66, -97, -101, -117, -100, -106, -94, -100, -89, -96, -83, -95, -64,
-74, 12, 96, 85, 119, 98, 106, 93, 98, 88, 93, 83, 91, 74, 71, 36, -87, -83,
-115, -108, -105, -100, -96, -95, -90, -91, -86, -89, -60, -63, 61, 95, 98, 114,
97, 104, 90, 97, 85, 93, 80, 93, 59, 66, -19, -105, -91, -120, -100, -107, -94,
-99, -88, -94, -83, -93, -70, -48, -16, 103, 94, 110, 103, 101, 97, 93, 91, 88,
88, 84, 85, 41, 37, -75, -105, -102, -114, -99, -105, -92, -98, -86, -95, -78,
-93, -37, -18, 41, 111, 93, 114, 96, 103, 90, 96, 85, 91, 81, 90, 69, 53, 20,
-95, -89, -115, -108, -105, -100, -97, -94, -91, -91, -87, -88, -63, -65, 56,
87, 98, 115, 98, 104, 91, 97, 85, 94, 80, 93, 64, 77, -10, -92, -86, -122, -101,
-108, -94, -100, -89, -96, -85, -93, -75, -67, -32, 91, 85, 112, 105, 102, 98,
95, 93, 89, 89, 84, 86, 56, 57, -65, -97, -100, -116, -99, -106, -93, -100, -88,
-96, -82, -96, -54, -53, 27, 110, 90, 115, 97, 104, 92, 97, 87, 93, 82, 91, 68,
42, 11, -101, -93, -112, -106, -103, -99, -96, -94, -91, -90, -83, -83, -21,
-13, 77, 103, 99, 111, 96, 101, 90, 96, 85, 92, 79, 92, 55, 57, -23, -102, -90,
-121, -100, -108, -95, -101, -90, -96, -85, -93, -76, -69, -34, 85, 80, 112,
105, 102, 98, 95, 93, 89, 89, 84, 87, 64, 67, -54, -86, -99, -118, -100, -107,
-94, -101, -89, -97, -83, -96, -63, -72, 14, 98, 86, 118, 98, 105, 92, 98, 87,
93, 83, 91, 72, 62, 26, -94, -88, -114, -107, -104, -100, -97, -95, -91, -91,
-86, -88, -47, -45, 71, 103, 99, 113, 97, 103, 91, 97, 84, 93, 78, 93, 51, 47,
-29, -110, -93, -118, -99, -107, -94, -100, -87, -95, -81, -90, -62, -20, 4,
103, 94, 109, 102, 100, 96, 93, 90, 87, 86, 82, 84, 50, 49, -65, -94, -102,
-117, -100, -106, -94, -99, -88, -95, -82, -95, -65, -75, 12, 91, 84, 119, 98,
106, 93, 98, 87, 93, 82, 91, 73, 72, 34, -83, -80, -116, -108, -105, -101, -97,
-94, -91, -90, -87, -88, -62, -63, 61, 90, 99, 114, 98, 104, 91, 97, 85, 93, 80,
93, 60, 68, -20, -102, -90, -120, -100, -108, -94, -100, -88, -95, -84, -93,
-71, -51, -18, 101, 93, 111, 104, 101, 97, 93, 91, 88, 88, 84, 85, 44, 41, -72,
-103, -102, -115, -99, -105, -93, -99, -87, -96, -79, -94, -39, -22, 39, 110,
91, 113, 96, 103, 91, 97, 86, 92, 81, 90, 70, 55, 22, -92, -87, -114, -107,
-105, -100, -98, -95, -92, -91, -87, -88, -64, -65, 55, 84, 97, 114, 98, 104,
92, 98, 86, 94, 81, 93, 65, 77, -10, -90, -84, -121, -101, -108, -95, -101, -90,
-96, -85, -93, -75, -69, -32, 89, 84, 111, 104, 102, 98, 95, 93, 89, 89, 84, 86,
58, 58, -63, -95, -100, -115, -99, -106, -94, -100, -88, -96, -82, -96, -55,
-55, 26, 109, 90, 115, 97, 104, 92, 98, 87, 93, 82, 91, 69, 46, 14, -100, -92,
-112, -106, -103, -99, -96, -94, -91, -90, -83, -84, -25, -18, 75, 103, 98, 111,
96, 102, 90, 96, 85, 93, 79, 92, 57, 59, -18, -100, -89, -121, -101, -108, -95,
-101, -90, -95, -85, -92, -76, -70, -38, 82, 79, 111, 106, 102, 98, 95, 93, 88,
89, 83, 86, 64, 69, -51, -84, -98, -119, -100, -107, -94, -101, -88, -96, -81,
-95, -64, -74, 10, 96, 85, 118, 98, 105, 93, 98, 87, 92, 82, 90, 73, 63, 31,
-92, -88, -113, -107, -104, -100, -97, -94, -90, -90, -85, -88, -49, -48, 68,
102, 99, 113, 97, 103, 91, 97, 85, 93, 78, 93, 53, 50, -26, -108, -92, -119,
-99, -107, -94, -100, -88, -95, -82, -91, -64, -23, 1, 102, 94, 109, 103, 100,
97, 93, 91, 87, 87, 82, 85, 52, 52, -61, -94, -100, -118, -100, -107, -94, -100,
-88, -96, -82, -96, -64, -72, 10, 93, 83, 119, 98, 106, 93, 98, 88, 93, 83, 91,
74, 67, 33, -86, -82, -114, -107, -103, -100, -97, -95, -92, -92, -86, -89, -59,
-60, 61, 94, 97, 113, 96, 103, 91, 98, 86, 94, 80, 93, 57, 60, -21, -105, -90,
-119, -98, -106, -94, -100, -89, -95, -84, -93, -70, -43, -13, 102, 94, 109,
103, 100, 97, 94, 92, 88, 89, 83, 85, 36, 31, -74, -105, -100, -113, -98, -105,
-92, -99, -87, -96, -77, -90, -33, -11, 43, 110, 91, 113, 95, 103, 91, 97, 86,
92, 80, 87, 63, 30, 3, -101, -94, -112, -105, -103, -100, -96, -95, -91, -91,
-85, -87, -41, -38, 70, 101, 98, 112, 96, 103, 91, 97, 85, 94, 79, 94, 51, 45,
-27, -108, -91, -117, -99, -107, -94, -100, -89, -95, -83, -90, -66, -29, -4,
100, 93, 109, 104, 100, 97, 93, 92, 88, 88, 77, 80, 22, 15, -75, -105, -100,
-114, -98, -104, -92, -99, -86, -95, -72, -83, -24, 6, 48, 111, 93, 113, 95,
102, 90, 96, 85, 92, 76, 75, 47, -14, -28, -105, -97, -110, -104, -101, -97,
-95, -93, -88, -88, -64, -63, 27, 41, 85, 104, 97, 107, 93, 99, 88, 95, 81, 92,
64, 71, 8, -31, -60, -110, -95, -114, -97, -104, -92, -99, -86, -94, -75, -70,
-39, 31, 38, 102, 95, 106, 101, 98, 94, 92, 90, 86, 85, 63, 61, -19, -32, -85,
-104, -100, -111, -96, -103, -90, -98, -83, -94, -61, -66, 4, 56, 66, 107, 92,
109, 93, 100, 88, 95, 82, 88, 68, 58, 27, -58, -59, -103, -96, -107, -102, -99,
-96, -93, -91, -82, -80, -46, -42, 51, 69, 88, 102, 96, 104, 91, 97, 86, 94, 75,
83, 47, 45, -22, -78, -77, -107, -93, -109, -93, -101, -88, -97, -79, -78, -54,
-28, 0, 84, 76, 101, 93, 101, 95, 94, 90, 88, 85, 68, 65, 21, 14, -67, -83, -92,
-102, -96, -104, -92, -99, -84, -91, -65, -69, -20, -3, 45, 93, 82, 103, 89,
102, 88, 97, 82, 87, 68, 63, 35, -4, -23, -91, -82, -101, -93, -100, -94, -94,
-89, -82, -76, -56, -49, 19, 26, 77, 87, 90, 96, 90, 96, 85, 92, 74, 80, 52, 56,
-3, -29, -58, -94, -84, -102, -88, -101, -85, -94, -76, -79, -56, -48, -13, 48,
49, 91, 81, 95, 87, 92, 86, 85, 80, 70, 64, 39, 32, -41, -48, -81, -88, -90,
-95, -89, -95, -82, -87, -66, -70, -34, -31, 27, 59, 66, 91, 80, 94, 82, 92, 77,
83, 65, 65, 42, 26, -4, -61, -58, -91, -82, -94, -86, -90, -83, -80, -73, -60,
-52, -13, -5, 59, 64, 81, 85, 84, 88, 81, 85, 71, 75, 54, 57, 15, 5, -42, -70,
-72, -92, -81, -93, -79, -88, -72, -76, -56, -54, -22, 10, 27, 75, 66, 85, 77,
87, 78, 81, 73, 68, 60, 46, 37, -10, -16, -66, -69, -82, -85, -83, -85, -77,
-80, -65, -68, -40, -40, 11, 26, 53, 76, 70, 83, 74, 84, 71, 78, 61, 66, 43, 36,
5, -32, -41, -78, -69, -87, -77, -84, -75, -76, -67, -60, -50, -26, -15, 39, 41,
70, 71, 77, 78, 74, 76, 67, 69, 53, 56, 24, 21, -27, -43, -60, -78, -73, -84,
-72, -81, -67, -74, -54, -55, -27, -12, 15, 53, 52, 78, 68, 81, 70, 74, 65, 66,
56, 48, 36, 7, -3, -50, -50, -73, -71, -75, -74, -70, -70, -59, -59, -39, -39,
-2, 4, 37, 50, 55, 66, 60, 67, 57, 62, 48, 52, 34, 33, 9, -7, -22, -48, -45,
-61, -53, -61, -52, -55, -46, -44, -35, -23, -14, 13, 15, 40, 39, 49, 47, 48,
47, 43, 42, 34, 34, 17, 16, -9, -13, -31, -37, -39, -45, -41, -45, -37, -40,
-29, -31, -17, -13, 3, 15, 20, 33, 30, 38, 32, 36, 30, 32, 25, 23, 17, 8, 2,
-15, -16, -29, -27, -32, -30, -31, -29, -26, -25, -18, -16, -5, -3, 12, 15, 21,
24, 24, 26, 23, 25, 19, 21, 13, 13, 4, 1, -7, -15, -16, -22, -20, -24, -20, -22,
-18, -18, -13, -10, -6, 1, 3, 13, 12, 17, 16, 17, 16, 16, 14, 12, 11, 6, 5, -2,
-3, -9, -10, -12, -13, -12, -13, -11, -11, -8, -9, -5, -4, 0, 2, 4, 6, 6, 8, 6,
7, 6, 6, 4, 4, 3, 1, 0, -2, -3, -5, -4, -5, -5, -5, -4, -4, -4, -3, -2, 1, 1, 2,
2, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0, 0, 0, -1, -1, -1, 0,
-1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, };

#endif /* SASH_H_ */
