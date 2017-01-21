#ifndef SASF_H_
#define SASF_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define SASF_NUM_CELLS 2877
#define SASF_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) SASF_DATA [] = {0, 0, 0,
0, 0, -1, -1, -3, -3, -5, -6, -8, -9, -10, -11, -11, -12, -10, -12, -8, -8, -3,
-2, 5, 9, 11, 14, 15, 21, 17, 19, 16, 17, 14, 15, 11, 12, 7, 3, -2, -12, -14,
-31, -30, -43, -39, -38, -33, -18, -14, 9, 11, 30, 31, 42, 44, 45, 47, 36, 38,
15, 14, -18, -26, -46, -58, -62, -76, -68, -79, -66, -73, -55, -58, -34, -23, 2,
32, 38, 68, 62, 81, 72, 81, 73, 75, 66, 62, 53, 36, 27, -6, -12, -56, -56, -78,
-78, -83, -85, -81, -83, -72, -75, -57, -59, -30, -27, 12, 25, 48, 67, 67, 83,
74, 85, 73, 81, 67, 71, 55, 53, 34, 23, 3, -30, -35, -65, -61, -85, -77, -86,
-79, -79, -73, -65, -60, -39, -34, -3, 1, 35, 38, 56, 59, 70, 76, 77, 83, 74,
79, 68, 73, 59, 65, 40, 41, 0, -19, -50, -88, -83, -106, -94, -108, -96, -107,
-93, -98, -83, -81, -63, -46, -22, 48, 49, 96, 90, 103, 100, 104, 102, 99, 98,
88, 88, 66, 65, 24, 19, -55, -75, -92, -110, -103, -115, -104, -114, -99, -108,
-87, -93, -67, -68, -25, 1, 36, 93, 83, 107, 96, 111, 99, 107, 96, 98, 86, 81,
68, 53, 38, -12, -21, -88, -88, -102, -102, -107, -107, -103, -105, -93, -95,
-73, -76, -38, -37, 30, 53, 73, 94, 88, 101, 93, 104, 94, 103, 89, 96, 78, 82,
61, 60, 28, 2, -28, -94, -86, -117, -106, -120, -110, -116, -109, -110, -103,
-98, -91, -72, -64, -1, 7, 87, 99, 107, 114, 109, 116, 104, 110, 99, 106, 88,
96, 63, 67, 0, -35, -70, -118, -105, -127, -111, -124, -108, -116, -103, -111,
-92, -91, -69, -51, -20, 70, 68, 110, 103, 117, 112, 112, 109, 105, 103, 97, 96,
76, 76, 33, 29, -57, -77, -98, -114, -109, -121, -109, -118, -103, -113, -93,
-103, -73, -75, -27, -2, 40, 103, 90, 113, 101, 115, 103, 112, 101, 106, 96, 97,
84, 75, 62, 36, 18, -67, -69, -108, -108, -117, -118, -115, -116, -109, -111,
-102, -108, -87, -92, -52, -54, 37, 75, 88, 118, 107, 125, 107, 116, 102, 110,
96, 106, 85, 91, 58, 43, -5, -97, -88, -125, -113, -126, -115, -116, -109, -110,
-104, -105, -98, -79, -71, -12, -4, 89, 103, 112, 120, 112, 118, 106, 111, 100,
107, 92, 101, 68, 72, 11, -16, -61, -113, -102, -127, -111, -124, -108, -116,
-103, -111, -94, -98, -75, -60, -26, 61, 61, 110, 102, 116, 110, 112, 109, 106,
104, 101, 100, 89, 89, 63, 62, -3, -14, -80, -105, -107, -122, -113, -124, -109,
-117, -103, -112, -97, -108, -80, -83, -37, -11, 35, 113, 98, 126, 110, 121,
108, 112, 103, 106, 98, 102, 89, 75, 58, -6, -18, -107, -110, -122, -123, -117,
-118, -110, -112, -103, -107, -93, -101, -65, -69, 19, 53, 82, 119, 107, 127,
109, 118, 103, 110, 97, 106, 89, 96, 68, 58, 12, -75, -73, -119, -108, -126,
-115, -116, -109, -109, -105, -105, -100, -84, -78, -30, -22, 79, 94, 107, 116,
111, 119, 106, 111, 101, 107, 95, 104, 80, 86, 50, 48, -18, -71, -78, -116,
-103, -125, -111, -121, -108, -114, -103, -109, -96, -98, -80, -66, -39, 44, 48,
108, 105, 120, 117, 114, 112, 106, 106, 99, 102, 90, 95, 61, 63, -29, -57, -91,
-120, -112, -128, -111, -119, -104, -113, -99, -110, -88, -96, -60, -50, 7, 89,
82, 122, 107, 124, 110, 113, 104, 107, 100, 103, 94, 81, 70, 29, 15, -86, -92,
-112, -114, -116, -120, -111, -114, -105, -110, -95, -102, -71, -75, -9, 9, 66,
111, 100, 121, 107, 120, 105, 113, 99, 108, 92, 98, 77, 73, 46, 16, -12, -90,
-83, -114, -106, -120, -113, -116, -111, -109, -106, -103, -100, -83, -81, -46,
-43, 51, 68, 97, 113, 110, 122, 108, 116, 103, 110, 96, 106, 83, 91, 54, 51,
-15, -82, -83, -123, -108, -128, -112, -119, -106, -111, -100, -106, -92, -83,
-64, -23, -5, 94, 91, 114, 112, 116, 116, 109, 110, 103, 105, 94, 98, 70, 73,
14, 5, -68, -105, -102, -120, -109, -124, -108, -117, -102, -112, -91, -98, -69,
-67, -17, 40, 53, 112, 99, 119, 107, 117, 107, 110, 102, 102, 94, 87, 79, 62,
53, -2, -10, -84, -91, -104, -109, -110, -116, -110, -115, -104, -110, -94,
-100, -77, -81, -40, -36, 33, 80, 83, 115, 103, 122, 106, 116, 101, 109, 97,
104, 86, 84, 60, 36, 5, -84, -80, -116, -108, -120, -114, -114, -111, -108,
-106, -98, -97, -74, -71, -14, -8, 76, 97, 102, 115, 108, 119, 106, 113, 100,
109, 90, 98, 70, 73, 23, -7, -46, -108, -94, -119, -106, -121, -108, -116, -103,
-108, -94, -91, -75, -58, -35, 47, 49, 102, 100, 111, 110, 110, 109, 104, 105,
95, 97, 81, 83, 57, 59, 1, -11, -65, -95, -93, -110, -103, -117, -105, -116,
-102, -110, -94, -100, -79, -79, -50, -34, 6, 76, 72, 109, 99, 117, 107, 114,
107, 108, 101, 99, 92, 78, 71, 33, 24, -67, -78, -103, -111, -112, -119, -111,
-117, -105, -111, -94, -101, -71, -75, -24, -10, 48, 100, 92, 116, 103, 119,
105, 114, 101, 108, 91, 94, 75, 68, 41, -7, -25, -101, -93, -113, -107, -115,
-111, -110, -106, -101, -99, -85, -84, -53, -51, 30, 44, 86, 104, 102, 113, 103,
111, 98, 105, 91, 98, 79, 84, 59, 60, 17, -11, -41, -91, -84, -107, -97, -112,
-102, -113, -102, -107, -97, -96, -85, -75, -63, -32, -18, 63, 65, 101, 102,
109, 111, 108, 111, 103, 107, 94, 98, 75, 79, 37, 35, -40, -77, -87, -114, -104,
-121, -107, -120, -104, -113, -95, -101, -78, -76, -42, -11, 20, 96, 85, 113,
102, 115, 106, 110, 103, 103, 98, 89, 84, 64, 57, -3, -11, -83, -95, -103, -109,
-106, -113, -104, -110, -97, -104, -82, -88, -55, -57, 10, 45, 67, 106, 93, 112,
99, 111, 98, 105, 92, 96, 81, 81, 65, 57, 34, -6, -21, -82, -77, -103, -97,
-107, -104, -108, -105, -102, -101, -91, -91, -72, -72, -36, -34, 41, 59, 85,
104, 100, 112, 103, 114, 100, 110, 93, 100, 77, 81, 49, 44, -9, -69, -72, -114,
-101, -120, -107, -118, -106, -110, -99, -98, -86, -74, -60, -19, -6, 78, 79,
103, 104, 109, 111, 106, 108, 99, 102, 87, 91, 66, 69, 16, 5, -57, -95, -92,
-111, -101, -116, -101, -111, -96, -106, -86, -91, -65, -62, -20, 32, 45, 102,
90, 110, 100, 109, 100, 103, 96, 94, 88, 80, 74, 58, 52, 8, 1, -64, -72, -93,
-100, -101, -107, -103, -110, -100, -106, -91, -98, -76, -82, -50, -51, 9, 46,
65, 107, 94, 114, 101, 115, 101, 110, 96, 102, 86, 84, 66, 51, 24, -52, -55,
-107, -101, -114, -109, -113, -111, -108, -107, -98, -98, -76, -76, -33, -29,
53, 75, 90, 107, 102, 114, 103, 114, 99, 108, 90, 97, 72, 73, 36, 20, -26, -88,
-81, -110, -99, -117, -104, -113, -101, -106, -94, -91, -78, -64, -47, 12, 20,
90, 90, 104, 104, 105, 106, 101, 102, 93, 96, 82, 84, 62, 65, 22, 17, -42, -69,
-81, -103, -97, -112, -102, -114, -101, -110, -94, -101, -82, -85, -62, -55,
-17, 42, 50, 105, 94, 113, 104, 114, 106, 109, 103, 100, 95, 83, 78, 51, 44,
-39, -48, -95, -105, -109, -117, -111, -118, -106, -114, -97, -104, -79, -84,
-43, -37, 28, 77, 79, 111, 99, 118, 104, 115, 101, 109, 94, 98, 80, 73, 52, 22,
-2, -82, -78, -108, -102, -114, -109, -110, -107, -103, -102, -89, -88, -63,
-62, 2, 11, 74, 96, 97, 109, 101, 111, 99, 107, 93, 99, 82, 88, 66, 70, 34, 19,
-22, -72, -72, -106, -95, -113, -102, -114, -103, -109, -99, -101, -90, -84,
-73, -53, -38, 35, 39, 97, 99, 107, 109, 109, 112, 105, 108, 98, 102, 82, 86,
53, 56, -22, -52, -80, -112, -103, -121, -108, -121, -106, -115, -98, -106, -84,
-86, -56, -41, 1, 78, 72, 109, 100, 116, 107, 114, 106, 107, 101, 95, 89, 72,
65, 24, 16, -70, -80, -100, -107, -108, -115, -106, -111, -99, -106, -88, -94,
-65, -70, -13, 8, 53, 100, 90, 112, 99, 112, 98, 106, 94, 100, 86, 88, 73, 68,
48, 20, -1, -68, -66, -100, -95, -107, -104, -110, -108, -106, -105, -98, -97,
-81, -81, -52, -52, 23, 37, 80, 103, 100, 114, 105, 116, 103, 112, 96, 105, 84,
89, 59, 59, 6, -48, -62, -114, -100, -121, -109, -120, -109, -114, -103, -104,
-91, -82, -69, -39, -23, 68, 69, 102, 104, 110, 112, 109, 112, 103, 107, 92, 96,
71, 74, 30, 24, -47, -85, -89, -112, -102, -119, -104, -116, -99, -108, -90,
-95, -72, -70, -34, 9, 31, 99, 88, 111, 101, 111, 102, 105, 99, 97, 92, 86, 81,
66, 61, 20, 13, -57, -67, -92, -102, -103, -110, -106, -114, -103, -111, -95,
-103, -81, -86, -55, -56, 2, 42, 62, 108, 95, 116, 103, 118, 104, 112, 99, 103,
90, 86, 71, 54, 31, -47, -52, -107, -103, -116, -114, -116, -114, -108, -109,
-98, -101, -80, -81, -40, -38, 47, 75, 90, 110, 104, 118, 104, 115, 100, 110,
92, 99, 76, 77, 42, 25, -19, -87, -80, -113, -100, -118, -105, -114, -104, -107,
-97, -94, -83, -67, -52, 9, 17, 90, 92, 104, 105, 105, 109, 102, 105, 95, 99,
84, 88, 65, 69, 26, 19, -38, -72, -80, -107, -98, -114, -103, -116, -103, -112,
-97, -104, -86, -85, -64, -54, -22, 44, 49, 105, 97, 113, 107, 114, 109, 108,
105, 100, 97, 82, 80, 51, 48, -38, -53, -93, -110, -109, -120, -111, -120, -106,
-114, -97, -106, -80, -86, -46, -37, 22, 82, 79, 113, 100, 118, 105, 116, 103,
109, 97, 98, 83, 74, 56, 20, 2, -82, -80, -107, -104, -113, -112, -110, -110,
-103, -104, -89, -91, -64, -65, 2, 13, 70, 99, 96, 112, 102, 113, 100, 108, 94,
101, 84, 89, 68, 70, 37, 17, -17, -75, -73, -107, -97, -113, -104, -114, -106,
-109, -101, -100, -92, -82, -75, -50, -41, 37, 43, 94, 102, 107, 112, 109, 114,
103, 108, 96, 104, 82, 87, 53, 55, -18, -57, -78, -115, -103, -122, -107, -121,
-105, -115, -99, -106, -86, -84, -58, -35, -3, 80, 74, 110, 101, 115, 108, 112,
108, 106, 103, 94, 92, 71, 69, 22, 16, -65, -84, -97, -109, -107, -117, -106,
-115, -100, -109, -88, -96, -66, -69, -15, 17, 50, 104, 91, 114, 101, 114, 101,
107, 95, 99, 88, 87, 75, 67, 52, 16, 2, -71, -71, -101, -99, -107, -107, -108,
-109, -105, -107, -96, -99, -80, -83, -50, -52, 23, 48, 77, 107, 99, 116, 104,
117, 102, 112, 96, 105, 84, 88, 60, 54, 9, -60, -64, -113, -101, -121, -110,
-119, -110, -112, -104, -102, -94, -80, -72, -32, -23, 68, 76, 100, 107, 108,
114, 107, 113, 102, 108, 91, 98, 70, 74, 29, 20, -43, -90, -88, -114, -102,
-119, -105, -115, -101, -109, -91, -95, -73, -67, -36, 14, 30, 100, 90, 110,
103, 110, 105, 105, 100, 96, 93, 83, 82, 64, 62, 17, 11, -57, -73, -91, -104,
-101, -112, -104, -113, -101, -110, -95, -103, -81, -86, -56, -54, -1, 50, 61,
109, 96, 117, 105, 117, 105, 110, 100, 103, 92, 84, 72, 51, 34, -51, -56, -105,
-106, -114, -116, -114, -116, -108, -111, -98, -101, -78, -82, -37, -34, 43, 79,
87, 112, 102, 119, 105, 116, 101, 109, 92, 98, 76, 75, 44, 19, -14, -90, -82,
-113, -103, -118, -108, -112, -105, -104, -99, -91, -85, -64, -56, 14, 21, 86,
97, 102, 109, 104, 110, 99, 105, 94, 100, 83, 88, 64, 68, 26, 13, -35, -78, -79,
-107, -96, -113, -103, -116, -103, -111, -98, -102, -87, -84, -67, -50, -26, 50,
51, 102, 99, 112, 109, 112, 111, 106, 106, 98, 100, 81, 82, 47, 48, -36, -60,
-89, -114, -107, -122, -109, -121, -105, -114, -97, -105, -80, -83, -47, -32,
16, 86, 79, 113, 101, 118, 106, 114, 104, 108, 98, 95, 85, 69, 57, 13, 1, -83,
-85, -105, -106, -110, -113, -107, -111, -100, -105, -87, -92, -61, -64, 4, 25,
67, 103, 94, 112, 100, 113, 99, 107, 93, 100, 83, 86, 66, 64, 35, 5, -19, -83,
-77, -107, -98, -111, -104, -111, -105, -105, -101, -95, -91, -75, -71, -38,
-34, 49, 61, 92, 105, 103, 113, 105, 113, 101, 109, 92, 100, 76, 81, 45, 41,
-20, -74, -77, -113, -101, -121, -107, -119, -104, -111, -96, -99, -83, -74,
-54, -15, 3, 86, 81, 107, 103, 111, 108, 107, 106, 99, 101, 86, 87, 63, 63, 7,
-3, -69, -96, -97, -111, -103, -115, -101, -112, -96, -105, -84, -89, -60, -58,
-9, 38, 53, 104, 90, 110, 98, 110, 99, 104, 95, 95, 86, 79, 70, 54, 43, -11,
-18, -80, -83, -99, -102, -104, -107, -103, -107, -96, -101, -84, -89, -64, -67,
-20, -11, 45, 81, 82, 105, 96, 111, 98, 109, 94, 103, 87, 90, 71, 68, 40, 9,
-17, -86, -79, -109, -99, -111, -104, -109, -103, -101, -96, -84, -80, -56, -51,
15, 22, 78, 90, 95, 104, 100, 108, 98, 105, 90, 97, 76, 80, 50, 51, -4, -38,
-61, -101, -90, -110, -97, -111, -97, -106, -91, -95, -79, -76, -56, -31, -8,
62, 59, 97, 92, 102, 98, 100, 98, 94, 93, 82, 81, 64, 65, 27, 24, -39, -55, -79,
-95, -92, -102, -94, -103, -90, -98, -81, -86, -65, -67, -36, -21, 12, 57, 75,
92, 87, 98, 90, 98, 86, 92, 77, 81, 62, 63, 34, 16, -16, -65, -64, -98, -86,
-102, -91, -100, -90, -93, -83, -77, -68, -54, -43, 4, 10, 67, 68, 89, 90, 92,
94, 90, 92, 82, 85, 69, 72, 45, 46, -1, -15, -52, -78, -79, -98, -87, -99, -86,
-96, -80, -85, -67, -69, -45, -31, -3, 40, 45, 84, 76, 94, 85, 92, 84, 85, 79,
73, 68, 57, 52, 21, 14, -39, -44, -75, -80, -86, -90, -86, -91, -79, -84, -69,
-74, -50, -52, -14, -4, 33, 59, 63, 85, 76, 90, 77, 85, 74, 82, 67, 67, 50, 39,
20, -9, -20, -62, -59, -85, -78, -87, -82, -84, -80, -74, -71, -58, -55, -26,
-22, 24, 30, 58, 67, 73, 81, 77, 84, 74, 80, 66, 70, 51, 52, 24, 16, -14, -37,
-46, -72, -67, -85, -74, -85, -74, -79, -67, -67, -53, -41, -28, 0, 8, 48, 46,
69, 66, 77, 75, 75, 74, 68, 67, 55, 55, 33, 31, -1, -6, -42, -54, -63, -73, -71,
-80, -71, -79, -65, -70, -52, -54, -30, -22, 2, 23, 33, 60, 55, 73, 65, 76, 67,
71, 62, 61, 52, 43, 34, 12, 4, -28, -30, -57, -56, -71, -70, -71, -71, -66, -67,
-54, -55, -35, -34, -5, -1, 28, 39, 49, 61, 60, 71, 63, 71, 59, 64, 49, 50, 32,
26, 8, -10, -21, -47, -45, -65, -59, -72, -64, -69, -61, -59, -52, -41, -35,
-16, -11, 21, 23, 47, 48, 59, 61, 63, 65, 59, 62, 51, 52, 34, 33, 12, 8, -17,
-27, -41, -56, -55, -66, -59, -69, -57, -62, -48, -48, -34, -28, -13, 6, 14, 38,
37, 55, 50, 63, 58, 61, 56, 53, 48, 39, 36, 18, 15, -9, -12, -37, -41, -51, -54,
-56, -61, -55, -59, -47, -50, -34, -34, -14, -10, 11, 23, 31, 45, 44, 55, 49,
57, 49, 55, 44, 44, 34, 27, 17, 2, -6, -26, -28, -49, -46, -56, -53, -57, -54,
-51, -49, -38, -36, -21, -20, 3, 6, 27, 31, 41, 47, 47, 52, 47, 52, 42, 46, 32,
32, 17, 13, -2, -11, -23, -39, -38, -50, -45, -54, -46, -51, -42, -42, -34, -26,
-18, -3, 2, 20, 21, 38, 36, 45, 43, 46, 45, 42, 42, 34, 33, 19, 18, -1, -4, -21,
-25, -36, -42, -42, -49, -43, -48, -40, -44, -31, -30, -17, -13, 1, 12, 18, 32,
31, 42, 37, 44, 38, 42, 36, 36, 29, 23, 17, 5, 1, -18, -18, -31, -30, -40, -40,
-41, -41, -38, -38, -29, -30, -17, -16, 1, 4, 17, 21, 28, 35, 34, 40, 35, 40,
33, 36, 25, 24, 14, 10, 0, -10, -15, -27, -27, -39, -35, -41, -36, -38, -33,
-32, -27, -20, -16, -4, -2, 12, 13, 23, 23, 28, 29, 27, 27, 24, 25, 18, 18, 11,
11, 1, 0, -9, -13, -16, -19, -20, -24, -21, -24, -19, -20, -15, -13, -9, -6, -2,
5, 5, 10, 9, 14, 12, 15, 13, 13, 12, 10, 9, 6, 5, 1, 0, -4, -4, -7, -7, -8, -8,
-8, -8, -7, -7, -5, -5, -3, -3, -1, -1, 1, 1, 1, 2, 1, 2, 1, 1, 0, 0, 0, };

#endif /* SASF_H_ */
