#ifndef SASE_H_
#define SASE_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define SASE_NUM_CELLS 2848
#define SASE_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) SASE_DATA [] = {0, -1, 0,
0, 0, 0, 0, 1, 1, 0, -1, -1, -2, -1, -2, 0, 1, 2, 2, 2, 2, -2, -6, -7, -15, -6,
-3, 5, 16, 18, 30, 29, 39, 37, 47, 41, 45, 39, 31, 24, 2, -4, -40, -42, -66,
-66, -79, -81, -80, -82, -75, -78, -64, -67, -41, -41, -5, 3, 39, 58, 66, 85,
79, 92, 81, 91, 78, 85, 70, 73, 56, 54, 34, 18, -1, -37, -41, -74, -69, -88,
-82, -90, -84, -86, -81, -77, -73, -62, -59, -37, -34, 1, 5, 45, 52, 67, 74, 78,
85, 79, 85, 76, 82, 69, 74, 57, 60, 38, 33, 8, -6, -27, -56, -55, -75, -69, -86,
-75, -82, -74, -80, -71, -71, -61, -52, -42, -17, -9, 28, 29, 59, 58, 69, 69,
71, 71, 72, 74, 73, 76, 69, 72, 62, 65, 50, 54, 30, 30, -6, -17, -52, -82, -82,
-104, -94, -109, -98, -110, -97, -105, -91, -94, -78, -74, -54, -30, -9, 59, 58,
97, 92, 105, 101, 106, 104, 102, 101, 93, 93, 77, 77, 53, 54, 3, -4, -63, -84,
-94, -110, -103, -114, -104, -114, -100, -109, -92, -98, -77, -79, -53, -47,
-10, 32, 45, 94, 84, 105, 95, 107, 99, 105, 98, 98, 92, 85, 79, 68, 62, 33, 26,
-35, -41, -84, -91, -98, -103, -101, -107, -97, -101, -91, -97, -81, -86, -62,
-66, -25, -13, 31, 67, 71, 99, 86, 99, 89, 99, 89, 97, 87, 93, 83, 83, 73, 67,
57, 47, 34, 0, -11, -76, -76, -105, -105, -112, -113, -113, -115, -110, -113,
-102, -106, -87, -92, -63, -66, -6, 9, 63, 102, 96, 117, 106, 121, 106, 116,
102, 111, 96, 103, 84, 84, 61, 50, 17, -50, -56, -111, -102, -120, -113, -121,
-116, -117, -114, -110, -107, -97, -95, -74, -72, -29, -25, 55, 75, 94, 111,
106, 117, 108, 117, 105, 114, 99, 106, 88, 94, 71, 73, 37, 18, -23, -84, -80,
-116, -102, -118, -108, -118, -108, -112, -103, -104, -95, -88, -79, -60, -49,
10, 16, 85, 90, 102, 106, 106, 109, 104, 108, 100, 105, 93, 98, 82, 87, 65, 67,
37, 35, -16, -47, -70, -110, -101, -121, -109, -124, -111, -122, -110, -116,
-104, -108, -94, -89, -72, -52, -28, 59, 60, 110, 107, 119, 117, 117, 116, 110,
110, 104, 106, 96, 100, 75, 78, 32, 30, -54, -89, -99, -123, -114, -128, -115,
-125, -110, -117, -104, -113, -95, -101, -77, -74, -38, 2, 28, 105, 94, 119,
109, 121, 113, 114, 110, 109, 106, 104, 101, 88, 86, 61, 57, -7, -15, -84, -103,
-107, -119, -114, -123, -113, -122, -107, -115, -99, -107, -84, -89, -56, -54,
3, 56, 66, 112, 99, 119, 106, 117, 106, 113, 104, 107, 99, 99, 90, 83, 75, 59,
50, 5, -3, -75, -79, -107, -111, -116, -121, -118, -123, -112, -117, -107, -113,
-97, -104, -77, -83, -38, -31, 38, 94, 91, 122, 109, 127, 112, 119, 106, 112,
101, 108, 96, 100, 83, 72, 50, 4, -15, -106, -100, -122, -118, -124, -122, -118,
-116, -111, -111, -105, -108, -91, -94, -60, -61, 17, 36, 81, 113, 107, 124,
112, 124, 109, 117, 104, 112, 98, 107, 86, 88, 63, 57, 14, -47, -58, -115, -103,
-124, -114, -124, -115, -117, -111, -110, -106, -100, -96, -79, -74, -34, -27,
62, 74, 99, 109, 110, 118, 110, 118, 107, 113, 101, 107, 93, 99, 78, 81, 54, 54,
9, -21, -51, -102, -94, -119, -109, -125, -113, -122, -111, -116, -107, -111,
-102, -100, -89, -72, -58, -7, 4, 94, 97, 114, 117, 119, 122, 112, 115, 106,
110, 101, 107, 90, 98, 65, 70, 2, -24, -69, -117, -107, -128, -115, -128, -114,
-121, -108, -114, -102, -110, -93, -92, -70, -54, -22, 65, 64, 115, 108, 122,
116, 117, 114, 110, 109, 105, 105, 99, 100, 79, 80, 42, 41, -46, -71, -95, -117,
-111, -126, -114, -126, -111, -119, -105, -114, -96, -103, -77, -76, -41, -18,
20, 95, 86, 118, 107, 122, 112, 118, 110, 111, 105, 103, 98, 92, 89, 73, 69, 39,
34, -36, -46, -90, -104, -107, -116, -113, -122, -112, -121, -108, -116, -103,
-112, -92, -98, -69, -70, -19, 19, 50, 115, 101, 126, 112, 125, 113, 117, 108,
111, 103, 106, 97, 92, 82, 58, 45, -40, -47, -106, -112, -120, -124, -119, -123,
-113, -117, -107, -112, -100, -108, -82, -87, -46, -44, 31, 80, 86, 119, 107,
127, 111, 122, 108, 115, 103, 109, 96, 101, 85, 80, 59, 31, 5, -82, -79, -115,
-109, -123, -118, -119, -117, -112, -112, -106, -107, -92, -94, -67, -68, -11,
-3, 71, 101, 101, 117, 109, 122, 109, 119, 105, 113, 99, 105, 89, 94, 72, 70,
44, 30, -5, -65, -67, -108, -99, -118, -110, -121, -114, -118, -112, -111, -107,
-104, -101, -88, -85, -58, -54, 24, 33, 92, 110, 111, 122, 113, 122, 109, 116,
104, 111, 98, 108, 86, 92, 59, 58, -3, -63, -73, -121, -108, -128, -115, -126,
-114, -118, -108, -112, -103, -104, -93, -81, -68, -29, -16, 79, 82, 109, 112,
116, 119, 113, 117, 108, 112, 102, 108, 93, 99, 72, 76, 30, 22, -46, -93, -93,
-121, -109, -127, -112, -124, -110, -118, -103, -109, -93, -93, -74, -65, -38,
12, 27, 102, 95, 116, 110, 118, 114, 114, 111, 106, 105, 97, 98, 85, 86, 65, 67,
24, 19, -49, -70, -88, -107, -103, -116, -109, -122, -110, -120, -107, -115,
-100, -107, -88, -91, -64, -59, -16, 44, 54, 114, 102, 123, 113, 122, 114, 114,
109, 108, 103, 102, 98, 83, 80, 48, 42, -51, -65, -102, -116, -116, -126, -116,
-123, -110, -116, -105, -113, -96, -105, -78, -82, -39, -26, 30, 93, 87, 119,
106, 124, 111, 120, 109, 113, 104, 108, 98, 97, 85, 71, 57, 16, 2, -85, -86,
-112, -113, -119, -119, -115, -118, -110, -114, -101, -105, -86, -90, -60, -63,
-2, 16, 66, 106, 98, 117, 106, 121, 108, 117, 104, 110, 97, 101, 87, 88, 71, 66,
44, 16, -5, -71, -69, -105, -99, -114, -109, -117, -114, -115, -113, -108, -108,
-99, -100, -83, -84, -53, -53, 24, 41, 84, 112, 107, 122, 111, 123, 108, 116,
103, 112, 97, 108, 85, 88, 58, 51, 1, -69, -71, -119, -107, -127, -116, -124,
-115, -117, -110, -111, -105, -100, -93, -74, -67, -21, -13, 75, 85, 105, 113,
114, 121, 112, 118, 106, 112, 100, 108, 90, 97, 69, 72, 28, 14, -40, -95, -91,
-120, -106, -124, -110, -121, -109, -117, -104, -106, -93, -89, -75, -60, -41,
22, 29, 99, 97, 112, 111, 114, 115, 111, 112, 103, 105, 94, 97, 81, 84, 61, 64,
21, 13, -43, -73, -83, -107, -100, -115, -106, -120, -109, -119, -106, -114,
-100, -105, -88, -87, -67, -55, -23, 46, 50, 109, 101, 119, 113, 120, 116, 113,
110, 107, 106, 98, 99, 80, 81, 45, 44, -45, -68, -95, -117, -112, -125, -115,
-125, -110, -117, -104, -114, -96, -103, -78, -78, -41, -20, 23, 94, 85, 117,
105, 121, 111, 119, 110, 112, 105, 107, 100, 93, 86, 68, 60, 9, 1, -79, -88,
-107, -114, -114, -121, -113, -119, -108, -115, -99, -104, -83, -88, -58, -61,
-4, 25, 59, 106, 95, 117, 105, 120, 106, 114, 102, 106, 96, 98, 86, 83, 71, 61,
46, 10, -3, -69, -69, -100, -99, -110, -110, -113, -115, -111, -114, -105, -109,
-96, -101, -81, -85, -51, -53, 17, 44, 75, 112, 102, 121, 108, 123, 107, 116,
104, 111, 98, 105, 86, 84, 61, 46, 11, -67, -67, -115, -106, -123, -116, -122,
-117, -115, -112, -109, -107, -97, -95, -71, -70, -20, -14, 67, 88, 100, 114,
110, 121, 111, 120, 106, 113, 99, 108, 89, 96, 71, 73, 33, 9, -32, -97, -88,
-119, -106, -122, -111, -119, -109, -115, -105, -103, -94, -86, -77, -57, -45,
22, 28, 93, 97, 107, 111, 111, 115, 108, 112, 102, 106, 93, 97, 80, 83, 59, 62,
22, 11, -36, -74, -79, -106, -98, -116, -106, -120, -107, -116, -105, -111,
-100, -103, -90, -85, -70, -53, -31, 43, 47, 104, 102, 115, 114, 118, 118, 112,
112, 106, 108, 97, 101, 78, 82, 45, 45, -35, -67, -89, -118, -109, -127, -114,
-126, -110, -117, -104, -114, -97, -102, -80, -76, -46, -18, 13, 92, 84, 115,
106, 119, 112, 117, 112, 110, 107, 105, 102, 91, 89, 67, 65, 12, 5, -72, -91,
-103, -116, -112, -122, -111, -120, -107, -116, -99, -105, -84, -89, -60, -61,
-11, 29, 52, 106, 94, 117, 105, 119, 107, 113, 103, 105, 97, 96, 88, 82, 73, 60,
50, 11, 1, -64, -67, -97, -100, -107, -111, -111, -116, -110, -115, -105, -111,
-96, -103, -81, -86, -53, -54, 7, 42, 67, 111, 100, 122, 109, 123, 109, 117,
104, 110, 98, 103, 89, 83, 66, 46, 22, -62, -64, -112, -108, -121, -119, -121,
-120, -114, -114, -108, -110, -96, -99, -71, -73, -26, -21, 54, 88, 93, 115,
107, 122, 110, 121, 107, 113, 100, 108, 91, 96, 75, 72, 41, 11, -19, -92, -85,
-117, -106, -121, -112, -117, -111, -112, -107, -101, -97, -85, -81, -56, -52,
15, 22, 83, 98, 102, 113, 108, 117, 106, 114, 101, 107, 92, 98, 81, 84, 62, 64,
30, 13, -24, -70, -72, -106, -96, -114, -105, -119, -108, -115, -107, -110,
-103, -102, -94, -84, -75, -52, -41, 34, 39, 97, 102, 110, 115, 114, 120, 110,
115, 104, 110, 97, 104, 80, 85, 49, 50, -20, -63, -79, -118, -106, -126, -113,
-126, -112, -119, -107, -114, -98, -101, -84, -76, -55, -21, 0, 84, 80, 111,
107, 118, 115, 116, 115, 109, 110, 103, 105, 90, 92, 68, 70, 17, 10, -60, -91,
-97, -117, -109, -123, -110, -121, -107, -116, -99, -105, -85, -88, -65, -62,
-23, 23, 41, 104, 92, 115, 105, 117, 108, 111, 105, 104, 99, 95, 91, 82, 78, 61,
57, 16, 10, -56, -66, -90, -100, -103, -112, -109, -118, -109, -117, -105, -113,
-97, -105, -83, -88, -58, -58, -5, 40, 58, 111, 98, 122, 109, 123, 111, 116,
106, 109, 100, 102, 93, 83, 72, 46, 32, -58, -63, -106, -110, -117, -119, -117,
-121, -112, -116, -106, -112, -95, -101, -74, -77, -31, -23, 42, 89, 88, 116,
105, 123, 109, 121, 107, 114, 102, 109, 95, 95, 78, 68, 47, 12, -7, -87, -83,
-112, -108, -119, -116, -116, -114, -111, -110, -100, -101, -84, -86, -57, -58,
6, 18, 72, 101, 98, 115, 106, 118, 106, 115, 101, 108, 94, 99, 83, 85, 66, 64,
38, 17, -11, -68, -67, -104, -96, -113, -106, -117, -111, -114, -109, -108,
-106, -100, -98, -83, -81, -53, -50, 25, 35, 88, 106, 106, 118, 111, 122, 109,
116, 104, 111, 96, 106, 82, 87, 54, 50, -6, -64, -72, -119, -105, -127, -114,
-126, -114, -118, -108, -112, -101, -99, -88, -74, -62, -21, -9, 79, 82, 107,
109, 115, 118, 113, 116, 107, 110, 101, 107, 90, 95, 68, 73, 23, 11, -49, -93,
-92, -118, -106, -123, -110, -121, -108, -116, -101, -105, -89, -89, -70, -60,
-32, 23, 33, 101, 94, 113, 107, 115, 112, 111, 109, 104, 103, 94, 94, 80, 81,
60, 61, 17, 11, -49, -70, -86, -104, -101, -115, -107, -120, -108, -118, -105,
-113, -98, -105, -85, -87, -62, -55, -15, 46, 54, 110, 99, 120, 110, 121, 113,
114, 108, 107, 103, 99, 97, 80, 77, 44, 39, -49, -63, -100, -114, -114, -122,
-115, -123, -111, -118, -105, -114, -95, -103, -75, -77, -36, -21, 30, 90, 84,
116, 104, 122, 110, 120, 109, 113, 104, 107, 97, 93, 82, 69, 56, 10, -2, -84,
-85, -110, -111, -116, -118, -114, -117, -108, -112, -98, -102, -83, -88, -58,
-61, 1, 21, 64, 105, 96, 116, 104, 118, 105, 114, 101, 107, 94, 98, 84, 84, 69,
63, 43, 12, -6, -68, -67, -102, -97, -111, -108, -115, -113, -113, -112, -108,
-108, -99, -100, -82, -84, -52, -53, 20, 38, 80, 108, 103, 119, 109, 123, 108,
117, 103, 112, 97, 106, 84, 86, 58, 49, 6, -64, -67, -117, -105, -124, -115,
-124, -116, -116, -110, -111, -104, -98, -93, -73, -68, -22, -15, 71, 84, 102,
113, 111, 120, 111, 118, 106, 112, 100, 109, 90, 96, 70, 74, 30, 11, -37, -94,
-88, -118, -105, -123, -111, -121, -109, -116, -104, -105, -93, -88, -76, -59,
-42, 18, 25, 95, 95, 109, 110, 113, 114, 109, 111, 103, 105, 93, 96, 79, 82, 59,
62, 19, 9, -43, -76, -83, -107, -99, -115, -105, -118, -106, -116, -104, -111,
-97, -101, -85, -81, -62, -45, -18, 55, 55, 106, 100, 115, 111, 116, 114, 112,
111, 106, 106, 95, 96, 74, 75, 35, 33, -46, -69, -92, -114, -108, -122, -111,
-123, -109, -119, -103, -111, -92, -97, -73, -72, -36, -10, 23, 91, 82, 113,
102, 118, 109, 116, 108, 110, 104, 101, 95, 85, 80, 61, 55, 3, -4, -76, -87,
-102, -109, -109, -116, -108, -114, -103, -110, -94, -100, -79, -84, -53, -54,
1, 34, 58, 101, 90, 112, 100, 115, 103, 111, 99, 104, 92, 92, 81, 76, 64, 51,
36, -10, -19, -78, -77, -101, -100, -106, -106, -106, -107, -102, -105, -93,
-96, -79, -82, -57, -59, -10, 0, 50, 81, 85, 107, 97, 111, 99, 110, 97, 106, 92,
98, 81, 82, 62, 56, 29, -9, -27, -88, -82, -108, -100, -110, -105, -110, -105,
-104, -100, -93, -88, -75, -71, -43, -35, 20, 48, 86, 87, 99, 98, 103, 103, 101,
101, 94, 95, 83, 84, 67, 68, 33, 30, -27, -42, -73, -93, -92, -106, -96, -107,
-95, -106, -90, -98, -80, -84, -63, -63, -33, -12, 16, 64, 63, 96, 86, 101, 92,
101, 93, 96, 89, 87, 81, 73, 67, 52, 46, 8, 2, -54, -60, -84, -90, -94, -99,
-94, -99, -91, -97, -84, -88, -71, -75, -50, -50, -12, 2, 35, 66, 69, 94, 85,
100, 88, 97, 86, 92, 81, 84, 72, 71, 58, 45, 29, -8, -17, -68, -66, -92, -89,
-96, -94, -94, -94, -89, -89, -80, -81, -62, -63, -32, -29, 18, 29, 58, 76, 78,
93, 84, 94, 84, 93, 80, 86, 72, 77, 59, 57, 36, 21, 0, -36, -42, -79, -73, -93,
-85, -95, -88, -91, -85, -82, -77, -68, -65, -46, -42, -6, -2, 44, 50, 71, 79,
81, 88, 83, 90, 79, 84, 73, 79, 62, 65, 43, 41, 12, -2, -27, -57, -59, -82, -75,
-91, -81, -91, -81, -85, -75, -75, -65, -57, -47, -27, -17, 23, 26, 59, 58, 77,
77, 81, 82, 80, 81, 74, 76, 64, 66, 48, 49, 21, 17, -16, -27, -49, -67, -68,
-83, -76, -88, -77, -85, -73, -78, -64, -65, -48, -40, -23, -5, 9, 43, 43, 70,
64, 79, 74, 80, 76, 76, 72, 68, 65, 55, 52, 32, 29, -1, -5, -40, -46, -63, -70,
-74, -81, -75, -82, -72, -78, -64, -69, -51, -53, -29, -21, 1, 19, 31, 55, 53,
72, 65, 78, 69, 76, 68, 70, 62, 60, 52, 42, 34, 14, 8, -23, -25, -53, -54, -66,
-67, -72, -75, -72, -74, -65, -68, -54, -56, -34, -33, -7, 0, 24, 37, 46, 60,
59, 72, 64, 73, 64, 70, 59, 62, 50, 49, 35, 25, 13, -5, -13, -42, -41, -61, -57,
-70, -65, -71, -68, -67, -65, -57, -55, -40, -38, -17, -14, 14, 18, 39, 45, 52,
58, 59, 66, 60, 66, 57, 62, 49, 51, 36, 34, 18, 10, -7, -23, -30, -50, -48, -63,
-57, -68, -61, -68, -59, -57, -50, -45, -39, -25, -20, 0, 3, 30, 31, 47, 48, 55,
56, 59, 61, 56, 58, 49, 51, 38, 39, 21, 18, 0, -6, -23, -34, -41, -54, -51, -60,
-54, -62, -53, -57, -48, -49, -39, -35, -24, -14, -4, 16, 18, 37, 35, 49, 46,
55, 52, 56, 54, 51, 50, 40, 39, 26, 24, 8, 6, -17, -20, -35, -40, -46, -52, -51,
-56, -51, -57, -47, -51, -38, -40, -25, -21, -7, 3, 12, 26, 28, 43, 39, 48, 43,
49, 43, 45, 40, 37, 32, 27, 23, 11, 8, -6, -7, -23, -23, -33, -34, -38, -39,
-39, -40, -36, -37, -30, -30, -20, -20, -9, -6, 4, 9, 15, 22, 23, 28, 25, 29,
26, 29, 24, 25, 20, 19, 14, 11, 7, 1, -2, -10, -10, -18, -17, -23, -21, -23,
-22, -21, -20, -18, -17, -13, -12, -7, -6, 0, 1, 7, 8, 11, 13, 13, 14, 13, 14,
12, 13, 10, 10, 7, 6, 3, 2, 0, -3, -4, -6, -6, -8, -8, -9, -8, -8, -7, -7, -6,
-5, -4, -3, -2, -1, -1, 1, 1, 2, 2, 2, 1, 1, 1, 0, 0, 0, 0, };

#endif /* SASE_H_ */
