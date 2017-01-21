#ifndef SASG_H_
#define SASG_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define SASG_NUM_CELLS 2888
#define SASG_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) SASG_DATA [] = {0, 0, -1,
-1, -3, -3, -5, -6, -7, -8, -8, -9, -9, -10, -11, -14, -12, -16, -7, -7, 7, 14,
21, 32, 33, 43, 42, 54, 50, 60, 51, 57, 45, 41, 27, 10, -3, -34, -37, -69, -65,
-84, -80, -86, -83, -82, -80, -73, -72, -59, -58, -34, -32, -2, 2, 35, 43, 56,
66, 67, 76, 70, 77, 69, 75, 64, 68, 56, 58, 44, 43, 26, 17, 3, -12, -22, -45,
-45, -65, -60, -73, -67, -75, -69, -71, -66, -64, -60, -53, -50, -36, -33, -13,
-10, 18, 20, 42, 46, 55, 58, 62, 68, 65, 70, 63, 68, 59, 62, 51, 53, 38, 36, 21,
15, 0, -10, -21, -38, -40, -59, -53, -61, -56, -65, -58, -60, -55, -59, -53,
-51, -45, -35, -29, -12, -8, 19, 20, 39, 40, 44, 43, 46, 46, 53, 56, 60, 65, 61,
66, 60, 65, 56, 61, 49, 54, 35, 37, 8, -6, -32, -66, -68, -95, -87, -104, -94,
-105, -95, -101, -92, -93, -85, -80, -72, -60, -51, -17, -10, 45, 47, 78, 81,
89, 92, 90, 93, 88, 92, 83, 87, 75, 78, 62, 66, 44, 45, 13, 3, -29, -55, -62,
-86, -81, -98, -88, -97, -87, -95, -85, -90, -81, -81, -71, -67, -57, -44, -33,
-2, 5, 51, 50, 76, 75, 85, 85, 85, 86, 84, 86, 80, 82, 71, 73, 61, 63, 44, 45,
17, 12, -20, -35, -53, -74, -73, -90, -81, -91, -82, -90, -79, -84, -74, -78,
-67, -67, -54, -46, -31, -6, 4, 44, 44, 69, 66, 76, 74, 77, 76, 79, 79, 78, 79,
76, 78, 70, 72, 61, 63, 49, 54, 25, 24, -21, -39, -67, -96, -92, -111, -101,
-114, -103, -113, -101, -109, -97, -102, -88, -87, -71, -63, -42, -7, 9, 73, 70,
100, 94, 103, 100, 104, 102, 101, 100, 94, 94, 83, 84, 68, 69, 46, 47, 5, -2,
-52, -75, -84, -103, -96, -108, -99, -109, -99, -108, -95, -102, -88, -92, -76,
-75, -58, -52, -29, 1, 17, 69, 65, 94, 87, 98, 94, 99, 96, 98, 96, 93, 91, 82,
82, 69, 69, 51, 51, 17, 13, -37, -49, -74, -90, -89, -102, -93, -101, -92, -100,
-89, -95, -83, -89, -74, -78, -59, -57, -32, -10, 12, 59, 57, 87, 79, 92, 85,
90, 85, 91, 88, 91, 88, 87, 85, 79, 78, 68, 67, 54, 55, 22, 19, -43, -58, -86,
-104, -103, -116, -108, -119, -108, -118, -106, -114, -100, -107, -89, -92, -70,
-67, -35, -5, 21, 85, 77, 106, 98, 112, 105, 112, 106, 108, 103, 101, 98, 92,
89, 75, 73, 52, 50, 3, -3, -66, -81, -95, -107, -104, -113, -107, -116, -106,
-113, -101, -108, -94, -99, -81, -84, -61, -59, -28, -5, 23, 76, 72, 103, 93,
107, 99, 108, 101, 105, 99, 99, 94, 91, 87, 78, 74, 58, 55, 21, 16, -44, -52,
-85, -95, -97, -104, -100, -107, -100, -107, -96, -102, -90, -96, -79, -84, -62,
-64, -31, -19, 17, 59, 62, 95, 85, 101, 91, 99, 92, 100, 94, 100, 93, 94, 88,
87, 82, 75, 70, 60, 55, 23, 17, -55, -63, -98, -107, -111, -118, -114, -122,
-112, -119, -108, -114, -102, -110, -91, -98, -71, -72, -29, -9, 33, 91, 84,
113, 102, 118, 107, 116, 106, 109, 101, 103, 96, 96, 89, 81, 74, 58, 49, 5, -4,
-77, -83, -105, -110, -112, -116, -113, -118, -111, -116, -105, -111, -97, -103,
-84, -87, -62, -65, -24, -8, 34, 81, 79, 109, 97, 112, 102, 113, 104, 110, 101,
104, 95, 97, 88, 84, 75, 62, 53, 26, 16, -50, -54, -94, -96, -104, -107, -107,
-110, -106, -110, -101, -105, -94, -99, -83, -88, -65, -69, -32, -25, 24, 58,
68, 98, 88, 102, 93, 103, 95, 105, 96, 103, 94, 98, 90, 92, 83, 80, 71, 62, 51,
25, 12, -63, -65, -105, -107, -115, -117, -119, -122, -114, -117, -108, -112,
-103, -109, -92, -99, -69, -72, -25, -13, 44, 92, 88, 115, 104, 120, 107, 117,
105, 110, 99, 104, 94, 100, 89, 86, 73, 63, 47, 8, -7, -84, -83, -111, -109,
-116, -115, -115, -117, -112, -114, -107, -110, -99, -104, -86, -90, -64, -67,
-21, -11, 44, 81, 84, 110, 100, 115, 103, 115, 103, 111, 101, 107, 96, 100, 88,
88, 74, 65, 51, 28, 10, -54, -55, -100, -97, -110, -107, -111, -111, -110, -111,
-104, -106, -98, -100, -85, -88, -67, -71, -32, -28, 31, 58, 73, 99, 91, 105,
96, 106, 97, 107, 97, 106, 96, 102, 92, 95, 84, 84, 71, 65, 49, 30, 9, -68, -68,
-111, -108, -120, -118, -121, -121, -115, -115, -109, -111, -104, -107, -93,
-98, -71, -75, -25, -19, 51, 90, 92, 115, 105, 121, 108, 117, 103, 110, 98, 105,
95, 102, 88, 90, 72, 64, 42, 14, -9, -85, -80, -113, -106, -118, -115, -119,
-116, -114, -113, -108, -108, -101, -103, -88, -90, -66, -68, -23, -18, 48, 76,
87, 109, 101, 115, 105, 117, 105, 113, 101, 108, 96, 103, 88, 91, 74, 70, 50,
36, 10, -49, -53, -103, -95, -113, -107, -114, -110, -112, -110, -107, -105,
-100, -99, -88, -89, -69, -69, -34, -32, 33, 51, 77, 98, 93, 103, 96, 106, 98,
108, 100, 108, 97, 104, 92, 97, 84, 87, 70, 68, 46, 34, 1, -69, -69, -115, -107,
-124, -117, -124, -119, -116, -113, -110, -108, -105, -104, -96, -98, -73, -74,
-25, -20, 61, 87, 97, 114, 108, 120, 107, 115, 104, 110, 99, 106, 94, 102, 87,
93, 70, 68, 39, 18, -17, -84, -80, -117, -106, -122, -114, -122, -115, -116,
-111, -110, -107, -104, -101, -90, -89, -68, -66, -24, -20, 55, 71, 92, 107,
104, 114, 106, 116, 104, 111, 101, 107, 96, 104, 89, 94, 74, 75, 50, 43, 6, -41,
-53, -105, -94, -115, -106, -117, -109, -115, -109, -110, -105, -104, -100, -94,
-90, -74, -71, -42, -38, 30, 39, 80, 94, 95, 103, 100, 107, 102, 109, 102, 109,
99, 104, 92, 99, 84, 90, 71, 73, 48, 43, -1, -58, -66, -117, -105, -127, -116,
-125, -116, -117, -111, -112, -107, -107, -103, -100, -97, -78, -73, -30, -24,
64, 77, 99, 110, 110, 119, 110, 116, 105, 110, 100, 106, 95, 103, 86, 94, 69,
71, 39, 28, -20, -79, -79, -117, -105, -124, -113, -124, -113, -116, -108, -110,
-105, -107, -100, -95, -88, -72, -65, -29, -22, 57, 64, 95, 103, 106, 112, 109,
116, 107, 112, 102, 107, 97, 104, 89, 94, 73, 76, 49, 47, 1, -37, -57, -105,
-94, -116, -105, -118, -108, -117, -107, -111, -103, -106, -98, -96, -88, -76,
-68, -43, -34, 33, 37, 87, 93, 98, 102, 102, 106, 104, 109, 103, 108, 98, 103,
93, 99, 85, 91, 71, 75, 46, 46, -8, -53, -70, -118, -105, -127, -114, -127,
-115, -119, -110, -114, -106, -109, -102, -103, -95, -81, -70, -34, -23, 68, 73,
103, 108, 113, 118, 111, 115, 106, 109, 101, 104, 95, 100, 87, 95, 70, 74, 38,
34, -26, -75, -82, -117, -105, -123, -111, -124, -112, -118, -108, -113, -104,
-108, -98, -97, -86, -75, -62, -32, -18, 58, 60, 100, 101, 109, 111, 111, 114,
108, 111, 103, 106, 97, 102, 88, 93, 74, 77, 48, 49, -3, -28, -62, -104, -95,
-117, -105, -119, -107, -117, -107, -113, -103, -108, -97, -98, -85, -79, -65,
-48, -30, 34, 37, 89, 87, 100, 99, 104, 104, 106, 107, 105, 107, 100, 103, 95,
99, 86, 91, 71, 75, 45, 48, -18, -49, -77, -117, -106, -128, -115, -128, -114,
-120, -109, -115, -105, -110, -100, -106, -90, -83, -64, -38, -15, 74, 72, 109,
106, 117, 115, 114, 113, 107, 106, 101, 102, 96, 100, 89, 94, 70, 73, 35, 34,
-39, -71, -88, -116, -107, -124, -113, -126, -112, -119, -107, -113, -102, -110,
-96, -100, -83, -77, -57, -38, -11, 63, 62, 106, 99, 113, 109, 115, 112, 110,
108, 104, 103, 98, 99, 90, 92, 73, 75, 46, 47, -15, -30, -74, -102, -99, -115,
-106, -118, -108, -119, -106, -114, -102, -109, -95, -100, -82, -81, -60, -49,
-19, 36, 42, 95, 87, 104, 98, 107, 104, 109, 106, 107, 105, 100, 100, 95, 97,
88, 89, 72, 74, 43, 45, -28, -48, -87, -116, -111, -128, -116, -128, -113, -121,
-108, -115, -103, -110, -97, -107, -87, -86, -60, -42, -5, 77, 72, 113, 104,
121, 112, 115, 109, 108, 105, 103, 101, 98, 98, 91, 92, 71, 70, 35, 33, -48,
-69, -94, -113, -110, -123, -114, -125, -112, -118, -107, -113, -102, -110, -94,
-100, -79, -79, -53, -41, -2, 63, 64, 108, 98, 116, 107, 117, 110, 111, 106,
105, 102, 101, 98, 92, 91, 75, 73, 47, 45, -20, -30, -81, -99, -102, -114, -109,
-118, -109, -118, -107, -114, -102, -109, -94, -100, -79, -81, -56, -50, -12,
33, 46, 98, 87, 105, 97, 109, 102, 110, 104, 107, 103, 102, 99, 98, 96, 89, 87,
73, 71, 43, 41, -35, -48, -94, -113, -113, -126, -117, -127, -113, -120, -108,
-115, -103, -111, -98, -109, -84, -87, -54, -41, 7, 80, 76, 117, 104, 122, 110,
116, 108, 110, 104, 105, 100, 100, 96, 93, 90, 73, 68, 35, 29, -55, -66, -100,
-112, -114, -122, -116, -124, -112, -117, -107, -112, -101, -108, -93, -101,
-79, -81, -50, -44, 5, 59, 65, 110, 98, 117, 106, 118, 108, 112, 105, 107, 101,
102, 97, 95, 89, 77, 72, 49, 42, -20, -27, -87, -97, -106, -113, -111, -118,
-111, -118, -108, -114, -103, -109, -94, -100, -79, -83, -55, -54, -6, 30, 51,
98, 88, 107, 98, 110, 101, 111, 103, 109, 102, 104, 98, 100, 94, 91, 86, 75, 69,
45, 37, -40, -48, -100, -111, -117, -125, -119, -126, -114, -119, -108, -114,
-103, -109, -97, -107, -83, -88, -51, -45, 15, 79, 78, 117, 104, 124, 110, 118,
108, 111, 103, 106, 99, 101, 95, 95, 87, 73, 65, 36, 26, -59, -66, -105, -111,
-116, -121, -118, -123, -113, -116, -106, -111, -101, -108, -94, -101, -77, -81,
-47, -43, 14, 61, 71, 111, 98, 117, 105, 119, 108, 113, 104, 107, 100, 103, 95,
96, 87, 78, 68, 49, 38, -22, -29, -92, -96, -109, -112, -113, -117, -113, -117,
-109, -112, -102, -108, -94, -100, -79, -83, -52, -53, 2, 32, 58, 100, 90, 108,
98, 111, 102, 113, 104, 110, 101, 104, 97, 100, 92, 92, 83, 74, 64, 44, 30, -49,
-54, -107, -111, -121, -124, -120, -124, -114, -118, -108, -112, -102, -108,
-98, -108, -82, -87, -46, -42, 27, 81, 83, 118, 105, 123, 109, 117, 106, 111,
102, 106, 98, 102, 93, 96, 84, 74, 61, 34, 18, -68, -70, -109, -110, -119, -120,
-119, -120, -112, -114, -107, -111, -102, -107, -94, -100, -75, -79, -42, -40,
26, 64, 77, 110, 100, 118, 106, 120, 107, 113, 103, 108, 98, 104, 93, 96, 83,
77, 64, 50, 32, -27, -35, -98, -95, -112, -110, -115, -115, -113, -114, -109,
-111, -104, -107, -95, -98, -78, -81, -50, -51, 10, 31, 65, 97, 90, 107, 99,
111, 102, 113, 103, 110, 100, 105, 96, 101, 90, 92, 79, 76, 61, 47, 23, -50,
-55, -112, -108, -124, -121, -123, -122, -115, -115, -109, -110, -104, -108,
-99, -106, -81, -86, -44, -44, 37, 78, 87, 115, 105, 123, 109, 119, 106, 112,
101, 107, 96, 103, 91, 98, 81, 76, 57, 38, 12, -68, -68, -113, -108, -121, -117,
-121, -119, -115, -114, -109, -109, -104, -106, -95, -98, -76, -79, -42, -42,
32, 59, 81, 110, 102, 117, 107, 120, 107, 114, 102, 109, 98, 103, 92, 97, 82,
80, 62, 52, 26, -25, -37, -100, -93, -114, -108, -116, -113, -115, -113, -111,
-110, -106, -106, -96, -97, -79, -80, -51, -52, 14, 28, 70, 97, 93, 107, 100,
111, 103, 114, 103, 110, 100, 106, 94, 101, 88, 94, 79, 78, 59, 49, 17, -49,
-56, -116, -107, -127, -119, -123, -119, -116, -114, -111, -110, -106, -107,
-101, -104, -82, -84, -42, -41, 46, 74, 92, 115, 108, 124, 110, 118, 105, 112,
101, 107, 96, 103, 90, 98, 78, 77, 53, 39, 3, -70, -70, -116, -106, -124, -116,
-123, -116, -115, -111, -110, -108, -105, -104, -97, -96, -77, -77, -41, -39,
40, 58, 88, 108, 104, 116, 109, 119, 107, 113, 101, 107, 96, 104, 91, 98, 80,
81, 58, 52, 18, -26, -43, -104, -93, -116, -106, -119, -112, -118, -112, -113,
-109, -107, -104, -98, -96, -80, -78, -51, -49, 17, 26, 77, 94, 96, 106, 103,
112, 105, 113, 103, 110, 99, 104, 94, 101, 88, 94, 75, 77, 52, 46, 5, -52, -62,
-116, -103, -124, -114, -125, -117, -118, -112, -112, -108, -107, -104, -101,
-99, -81, -77, -40, -36, 51, 66, 95, 110, 108, 119, 110, 118, 106, 112, 101,
107, 95, 103, 88, 97, 76, 77, 49, 42, -3, -61, -67, -113, -102, -121, -110,
-121, -113, -117, -111, -112, -107, -107, -102, -96, -92, -75, -72, -40, -36,
40, 50, 88, 102, 103, 112, 108, 116, 107, 114, 103, 109, 98, 105, 90, 96, 77,
80, 56, 53, 15, -17, -42, -97, -88, -114, -103, -118, -108, -117, -109, -112,
-106, -106, -100, -96, -90, -79, -74, -52, -47, 10, 16, 73, 83, 96, 104, 101,
108, 104, 109, 102, 108, 98, 105, 92, 98, 82, 86, 65, 67, 38, 30, -14, -62, -69,
-109, -98, -117, -107, -120, -111, -118, -110, -112, -105, -105, -98, -92, -85,
-68, -62, -26, -18, 57, 64, 94, 101, 104, 109, 107, 113, 105, 111, 100, 106, 95,
101, 85, 90, 68, 70, 42, 38, -7, -43, -61, -103, -92, -112, -103, -116, -106,
-115, -106, -111, -102, -103, -95, -91, -82, -71, -63, -39, -31, 30, 34, 83, 88,
97, 100, 102, 106, 102, 107, 99, 103, 93, 98, 84, 88, 70, 72, 48, 49, 9, -9,
-43, -83, -81, -106, -95, -109, -99, -110, -100, -107, -97, -100, -90, -88, -78,
-73, -63, -44, -33, 14, 19, 71, 72, 92, 93, 96, 97, 97, 99, 96, 100, 91, 95, 83,
87, 71, 74, 53, 55, 22, 14, -27, -58, -68, -97, -88, -106, -95, -107, -96, -105,
-94, -100, -89, -90, -79, -75, -65, -56, -43, -12, -2, 52, 52, 85, 84, 95, 95,
94, 95, 93, 95, 90, 92, 83, 86, 72, 74, 56, 58, 29, 26, -15, -33, -56, -82, -80,
-99, -89, -101, -91, -101, -90, -97, -86, -89, -77, -78, -65, -59, -45, -23,
-10, 34, 36, 74, 71, 88, 86, 91, 89, 90, 90, 86, 88, 81, 82, 71, 72, 57, 60, 35,
34, -3, -13, -45, -65, -72, -90, -84, -97, -87, -96, -86, -94, -83, -87, -76,
-78, -65, -63, -47, -32, -16, 16, 23, 63, 60, 83, 79, 89, 85, 87, 85, 85, 84,
78, 78, 69, 69, 56, 57, 36, 35, 4, -1, -37, -50, -64, -78, -78, -90, -83, -91,
-82, -89, -78, -84, -72, -75, -61, -60, -43, -34, -16, 6, 17, 51, 49, 73, 68,
83, 78, 85, 80, 79, 77, 75, 73, 69, 68, 56, 55, 38, 36, 9, 6, -28, -35, -57,
-67, -72, -81, -77, -85, -78, -84, -74, -80, -68, -72, -58, -60, -43, -38, -19,
-6, 11, 39, 41, 65, 60, 76, 70, 79, 74, 79, 74, 75, 70, 67, 64, 56, 54, 38, 35,
12, 9, -21, -24, -50, -55, -65, -71, -73, -80, -75, -81, -72, -77, -66, -70,
-57, -60, -42, -39, -22, -14, 3, 22, 30, 53, 51, 67, 62, 75, 68, 74, 69, 72, 67,
65, 60, 55, 51, 41, 37, 18, 14, -10, -12, -39, -41, -56, -60, -65, -69, -69,
-74, -67, -72, -62, -67, -54, -57, -41, -40, -23, -19, 1, 14, 24, 42, 43, 59,
55, 67, 61, 69, 63, 67, 61, 61, 55, 52, 46, 39, 34, 18, 14, -5, -8, -31, -32,
-51, -52, -60, -62, -64, -67, -63, -66, -59, -62, -50, -53, -38, -39, -22, -19,
0, 9, 22, 36, 38, 51, 48, 59, 54, 63, 57, 62, 55, 57, 50, 49, 41, 35, 29, 17,
12, -3, -6, -29, -29, -47, -46, -55, -55, -59, -60, -57, -58, -53, -56, -46,
-48, -34, -35, -19, -18, -1, 4, 18, 27, 34, 45, 43, 51, 47, 54, 49, 56, 49, 52,
44, 42, 35, 32, 25, 18, 11, -1, -5, -22, -23, -38, -37, -49, -47, -52, -51, -52,
-52, -49, -49, -42, -42, -32, -32, -20, -19, -3, 0, 15, 21, 29, 38, 38, 45, 42,
49, 44, 50, 43, 46, 39, 40, 33, 30, 23, 17, 11, 2, -3, -17, -18, -34, -33, -44,
-42, -46, -44, -47, -46, -44, -43, -38, -37, -27, -25, -15, -15, -1, 1, 11, 13,
21, 25, 26, 29, 27, 30, 27, 30, 25, 26, 21, 22, 16, 15, 10, 8, 4, 0, -2, -6, -7,
-12, -11, -16, -14, -15, -13, -12, -11, -11, -10, -6, -6, -5, -5, -3, -3, 1, 1,
3, 3, 3, 3, 2, 2, 0, 0, };

#endif /* SASG_H_ */
