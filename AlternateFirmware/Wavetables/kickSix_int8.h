#ifndef KICKSIX_H_
#define KICKSIX_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define KICKSIX_NUM_CELLS 8212
#define KICKSIX_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) KICKSIX_DATA [] = {14,
52, -74, 33, 126, -19, -104, -115, -24, 58, 119, 116, 87, 31, -23, -77, -111,
-124, -112, -77, -27, 29, 77, 112, 122, 112, 77, 31, -24, -72, -109, -123, -117,
-88, -45, 7, 56, 97, 119, 121, 103, 66, 19, -32, -77, -109, -123, -118, -93,
-55, -7, 42, 84, 112, 123, 115, 90, 51, 5, -42, -83, -111, -124, -118, -96, -61,
-17, 29, 71, 103, 120, 122, 107, 77, 38, -6, -50, -87, -112, -124, -120, -100,
-69, -29, 14, 55, 89, 113, 123, 118, 100, 70, 32, -10, -50, -85, -110, -123,
-122, -108, -82, -48, -9, 31, 68, 97, 116, 123, 117, 100, 72, 37, -1, -39, -74,
-101, -118, -124, -118, -102, -76, -42, -6, 31, 66, 94, 113, 122, 121, 109, 87,
58, 24, -12, -47, -78, -102, -118, -124, -120, -107, -85, -56, -23, 11, 45, 75,
99, 115, 123, 121, 110, 91, 66, 35, 3, -30, -61, -87, -107, -120, -124, -120,
-107, -88, -62, -33, -1, 30, 60, 85, 105, 118, 123, 121, 110, 93, 71, 44, 14,
-16, -46, -72, -94, -111, -121, -124, -120, -109, -92, -70, -44, -16, 13, 42,
67, 89, 107, 118, 123, 121, 114, 100, 81, 58, 32, 5, -23, -49, -73, -93, -109,
-119, -124, -123, -115, -103, -86, -65, -41, -15, 12, 37, 61, 82, 100, 113, 121,
123, 120, 113, 100, 83, 63, 40, 16, -9, -34, -57, -78, -95, -109, -119, -124,
-124, -119, -110, -96, -79, -59, -37, -14, 10, 33, 55, 75, 92, 106, 116, 122,
123, 120, 114, 103, 89, 72, 52, 31, 9, -14, -36, -56, -75, -91, -105, -115,
-121, -124, -123, -118, -110, -98, -83, -66, -47, -27, -6, 15, 36, 55, 73, 89,
102, 112, 119, 123, 123, 120, 113, 104, 92, 77, 61, 43, 24, 4, -16, -35, -54,
-71, -86, -99, -109, -117, -122, -124, -123, -119, -112, -103, -91, -77, -62,
-45, -27, -9, 10, 28, 46, 62, 77, 91, 102, 111, 118, 122, 123, 122, 118, 112,
104, 93, 81, 67, 51, 35, 18, 1, -17, -34, -50, -65, -79, -91, -102, -111, -117,
-122, -124, -124, -121, -117, -110, -102, -91, -80, -66, -52, -37, -21, -5, 11,
27, 42, 57, 70, 83, 94, 103, 111, 117, 121, 123, 123, 121, 117, 112, 105, 96,
86, 74, 61, 48, 34, 19, 4, -11, -25, -40, -53, -66, -78, -89, -99, -107, -113,
-119, -122, -124, -124, -123, -119, -115, -109, -101, -92, -82, -71, -59, -47,
-34, -20, -7, 7, 21, 34, 47, 59, 71, 81, 91, 99, 107, 113, 117, 121, 123, 123,
122, 120, 117, 112, 106, 98, 90, 81, 71, 60, 49, 37, 24, 12, -1, -13, -25, -38,
-49, -60, -71, -81, -90, -98, -105, -111, -116, -120, -122, -124, -124, -123,
-121, -118, -114, -109, -103, -96, -88, -79, -70, -60, -49, -39, -27, -16, -5,
7, 18, 29, 40, 51, 61, 70, 79, 87, 95, 101, 107, 112, 116, 119, 122, 123, 123,
122, 121, 118, 115, 111, 105, 99, 93, 86, 78, 69, 60, 51, 41, 31, 21, 11, 0,
-10, -20, -30, -40, -49, -59, -67, -76, -83, -91, -97, -103, -108, -113, -117,
-120, -122, -123, -124, -124, -123, -122, -119, -116, -112, -108, -103, -97,
-91, -84, -77, -69, -61, -53, -44, -36, -27, -17, -8, 1, 10, 19, 28, 37, 46, 54,
62, 70, 77, 84, 90, 96, 101, 106, 110, 114, 117, 119, 121, 123, 123, 123, 122,
121, 119, 117, 114, 110, 106, 101, 96, 90, 84, 77, 70, 63, 56, 48, 40, 31, 23,
14, 6, -3, -12, -20, -29, -37, -45, -53, -60, -68, -75, -81, -88, -94, -99,
-104, -108, -112, -116, -118, -121, -122, -124, -124, -124, -123, -122, -121,
-118, -115, -112, -108, -104, -99, -94, -88, -82, -75, -69, -61, -54, -46, -39,
-31, -22, -14, -6, 2, 11, 19, 27, 35, 43, 50, 58, 65, 72, 78, 84, 90, 96, 100,
105, 109, 113, 116, 118, 120, 122, 123, 123, 123, 122, 121, 120, 117, 115, 112,
108, 104, 99, 94, 89, 83, 77, 71, 64, 57, 50, 43, 35, 27, 20, 12, 4, -4, -12,
-20, -28, -35, -43, -50, -57, -64, -71, -77, -83, -89, -94, -99, -104, -108,
-111, -115, -117, -120, -122, -123, -124, -124, -124, -123, -122, -121, -119,
-116, -113, -110, -106, -102, -97, -92, -87, -81, -75, -69, -63, -56, -49, -42,
-35, -27, -20, -12, -5, 3, 10, 18, 25, 33, 40, 47, 54, 61, 67, 73, 79, 85, 90,
95, 100, 104, 108, 111, 114, 117, 119, 121, 122, 123, 123, 123, 123, 122, 120,
119, 116, 114, 111, 107, 103, 99, 95, 90, 85, 79, 74, 68, 61, 55, 48, 42, 35,
28, 20, 13, 6, -1, -8, -16, -23, -30, -37, -44, -50, -57, -63, -69, -75, -81,
-86, -91, -96, -100, -104, -108, -111, -114, -117, -119, -121, -122, -123, -124,
-124, -124, -123, -122, -121, -119, -117, -114, -112, -108, -105, -101, -96,
-92, -87, -82, -77, -71, -65, -59, -53, -46, -40, -33, -27, -20, -13, -6, 1, 8,
15, 22, 28, 35, 41, 48, 54, 60, 66, 72, 77, 82, 87, 92, 96, 100, 104, 108, 111,
114, 116, 118, 120, 121, 122, 123, 123, 123, 123, 122, 121, 119, 117, 115, 112,
110, 106, 103, 99, 95, 91, 86, 81, 76, 71, 65, 59, 54, 48, 41, 35, 29, 22, 16,
9, 3, -4, -10, -17, -23, -30, -36, -42, -48, -54, -60, -66, -71, -76, -81, -86,
-91, -95, -99, -103, -106, -109, -112, -115, -117, -119, -121, -122, -123, -124,
-124, -124, -124, -123, -122, -121, -119, -117, -115, -113, -110, -107, -103,
-100, -96, -91, -87, -82, -78, -73, -67, -62, -57, -51, -45, -39, -33, -27, -21,
-15, -9, -3, 4, 10, 16, 22, 28, 34, 40, 46, 52, 57, 62, 68, 73, 78, 82, 87, 91,
95, 99, 102, 105, 109, 111, 114, 116, 118, 119, 121, 122, 123, 123, 123, 123,
123, 122, 121, 120, 118, 116, 114, 112, 109, 106, 103, 99, 96, 92, 88, 84, 79,
74, 70, 65, 60, 54, 49, 43, 38, 32, 26, 21, 15, 9, 3, -3, -9, -14, -20, -26,
-32, -37, -43, -48, -54, -59, -64, -69, -73, -78, -82, -87, -91, -95, -98, -102,
-105, -108, -111, -113, -115, -117, -119, -121, -122, -123, -124, -124, -124,
-124, -124, -123, -122, -121, -120, -118, -116, -114, -112, -109, -107, -104,
-100, -97, -93, -89, -85, -81, -77, -72, -68, -63, -58, -53, -48, -43, -38, -32,
-27, -22, -16, -11, -5, 0, 6, 11, 17, 22, 28, 33, 38, 44, 49, 54, 58, 63, 68,
72, 77, 81, 85, 89, 92, 96, 99, 102, 105, 108, 110, 113, 115, 117, 118, 120,
121, 122, 122, 123, 123, 123, 123, 122, 122, 121, 120, 118, 117, 115, 113, 111,
108, 106, 103, 100, 97, 93, 90, 86, 82, 78, 74, 70, 66, 61, 57, 52, 47, 42, 37,
32, 27, 22, 17, 12, 7, 2, -4, -9, -14, -19, -24, -29, -34, -39, -44, -49, -53,
-58, -62, -67, -71, -75, -79, -83, -87, -90, -94, -97, -100, -103, -106, -108,
-111, -113, -115, -117, -118, -120, -121, -122, -123, -124, -124, -124, -124,
-124, -124, -123, -122, -121, -120, -119, -117, -115, -113, -111, -109, -106,
-104, -101, -98, -95, -92, -88, -85, -81, -77, -73, -69, -65, -61, -57, -52,
-48, -43, -39, -34, -29, -25, -20, -15, -10, -5, -1, 4, 9, 14, 19, 23, 28, 33,
37, 42, 46, 51, 55, 59, 63, 67, 71, 75, 79, 83, 86, 89, 92, 96, 98, 101, 104,
106, 109, 111, 113, 115, 116, 118, 119, 120, 121, 122, 122, 123, 123, 123, 123,
123, 122, 122, 121, 120, 119, 118, 116, 114, 113, 111, 109, 106, 104, 101, 99,
96, 93, 90, 87, 83, 80, 77, 73, 69, 65, 62, 58, 54, 49, 45, 41, 37, 32, 28, 24,
19, 15, 10, 6, 1, -3, -8, -12, -17, -21, -25, -30, -34, -38, -43, -47, -51, -55,
-59, -63, -67, -70, -74, -77, -81, -84, -87, -90, -93, -96, -99, -101, -104,
-106, -108, -111, -112, -114, -116, -117, -119, -120, -121, -122, -123, -123,
-124, -124, -124, -124, -124, -124, -123, -123, -122, -121, -120, -119, -117,
-116, -114, -113, -111, -109, -107, -104, -102, -100, -97, -94, -91, -89, -86,
-82, -79, -76, -73, -69, -66, -62, -58, -54, -51, -47, -43, -39, -35, -31, -27,
-23, -19, -15, -10, -6, -2, 2, 6, 10, 14, 18, 23, 27, 31, 35, 38, 42, 46, 50,
54, 57, 61, 64, 68, 71, 74, 78, 81, 84, 87, 90, 92, 95, 97, 100, 102, 104, 106,
108, 110, 112, 114, 115, 116, 118, 119, 120, 121, 121, 122, 122, 123, 123, 123,
123, 123, 123, 122, 122, 121, 120, 119, 118, 117, 116, 115, 113, 111, 110, 108,
106, 104, 102, 100, 97, 95, 92, 90, 87, 84, 81, 78, 75, 72, 69, 66, 62, 59, 56,
52, 49, 45, 42, 38, 34, 31, 27, 23, 19, 16, 12, 8, 4, 0, -3, -7, -11, -15, -18,
-22, -26, -30, -33, -37, -40, -44, -47, -51, -54, -58, -61, -64, -67, -71, -74,
-77, -79, -82, -85, -88, -90, -93, -95, -98, -100, -102, -104, -106, -108, -110,
-111, -113, -114, -116, -117, -118, -119, -120, -121, -122, -123, -123, -123,
-124, -124, -124, -124, -124, -124, -123, -123, -122, -122, -121, -120, -119,
-118, -117, -116, -114, -113, -111, -109, -108, -106, -104, -102, -99, -97, -95,
-92, -90, -87, -85, -82, -79, -76, -73, -70, -67, -64, -61, -58, -54, -51, -47,
-44, -41, -37, -34, -30, -26, -23, -19, -15, -12, -8, -4, -1, 3, 7, 10, 14, 18,
21, 25, 29, 32, 36, 39, 43, 46, 49, 53, 56, 59, 63, 66, 69, 72, 75, 78, 80, 83,
86, 89, 91, 93, 96, 98, 100, 102, 104, 106, 108, 110, 111, 113, 114, 116, 117,
118, 119, 120, 121, 121, 122, 122, 123, 123, 123, 123, 123, 123, 123, 122, 122,
121, 120, 119, 118, 117, 116, 115, 114, 112, 111, 109, 107, 105, 103, 101, 99,
97, 95, 92, 90, 87, 84, 82, 79, 76, 73, 70, 67, 64, 61, 58, 54, 51, 48, 44, 41,
37, 34, 30, 27, 23, 19, 16, 12, 8, 5, 1, -3, -6, -10, -14, -17, -21, -25, -28,
-32, -35, -39, -42, -46, -49, -53, -56, -59, -63, -66, -69, -72, -75, -78, -81,
-83, -86, -89, -91, -94, -96, -98, -101, -103, -105, -107, -109, -110, -112,
-113, -115, -116, -118, -119, -120, -121, -121, -122, -123, -123, -124, -124,
-124, -124, -124, -124, -124, -123, -123, -122, -122, -121, -120, -119, -118,
-116, -115, -114, -112, -110, -109, -107, -105, -103, -101, -99, -96, -94, -91,
-89, -86, -84, -81, -78, -75, -72, -69, -66, -63, -60, -56, -53, -50, -46, -43,
-39, -36, -32, -29, -25, -21, -18, -14, -10, -7, -3, 1, 4, 8, 12, 15, 19, 23,
26, 30, 33, 37, 40, 44, 47, 51, 54, 57, 60, 64, 67, 70, 73, 76, 79, 81, 84, 87,
89, 92, 94, 97, 99, 101, 103, 105, 107, 109, 110, 112, 113, 115, 116, 117, 118,
119, 120, 121, 122, 122, 123, 123, 123, 123, 123, 123, 123, 122, 122, 121, 121,
120, 119, 118, 117, 116, 114, 113, 112, 110, 108, 106, 105, 103, 100, 98, 96,
94, 91, 89, 86, 83, 81, 78, 75, 72, 69, 66, 63, 60, 56, 53, 50, 46, 43, 39, 36,
32, 29, 25, 22, 18, 14, 11, 7, 3, 0, -4, -8, -11, -15, -19, -22, -26, -30, -33,
-37, -40, -44, -47, -51, -54, -57, -60, -64, -67, -70, -73, -76, -79, -82, -84,
-87, -90, -92, -95, -97, -99, -101, -103, -105, -107, -109, -111, -112, -114,
-115, -117, -118, -119, -120, -121, -122, -122, -123, -123, -124, -124, -124,
-124, -124, -124, -124, -123, -123, -122, -121, -120, -119, -118, -117, -116,
-115, -113, -111, -110, -108, -106, -104, -102, -100, -98, -95, -93, -91, -88,
-85, -83, -80, -77, -74, -71, -68, -65, -62, -58, -55, -52, -48, -45, -42, -38,
-35, -31, -27, -24, -20, -16, -13, -9, -5, -2, 2, 6, 9, 13, 17, 20, 24, 27, 31,
35, 38, 42, 45, 48, 52, 55, 58, 62, 65, 68, 71, 74, 77, 80, 82, 85, 88, 90, 93,
95, 97, 100, 102, 104, 106, 108, 109, 111, 113, 114, 115, 117, 118, 119, 120,
120, 121, 122, 122, 123, 123, 123, 123, 123, 123, 123, 122, 122, 121, 120, 120,
119, 118, 117, 115, 114, 113, 111, 109, 108, 106, 104, 102, 100, 98, 95, 93, 90,
88, 85, 83, 80, 77, 74, 71, 68, 65, 62, 59, 55, 52, 49, 45, 42, 38, 35, 31, 28,
24, 20, 17, 13, 9, 6, 2, -2, -5, -9, -13, -16, -20, -24, -27, -31, -34, -38,
-41, -45, -48, -52, -55, -58, -62, -65, -68, -71, -74, -77, -80, -83, -85, -88,
-90, -93, -95, -98, -100, -102, -104, -106, -108, -110, -111, -113, -115, -116,
-117, -118, -119, -120, -121, -122, -123, -123, -124, -124, -124, -124, -124,
-124, -124, -123, -123, -122, -122, -121, -120, -119, -118, -117, -115, -114,
-113, -111, -109, -107, -105, -103, -101, -99, -97, -95, -92, -90, -87, -84,
-82, -79, -76, -73, -70, -67, -64, -61, -57, -54, -51, -47, -44, -40, -37, -33,
-30, -26, -23, -19, -15, -12, -8, -4, 0, 3, 7, 11, 14, 18, 22, 25, 29, 32, 36,
39, 43, 46, 50, 53, 56, 60, 63, 66, 69, 72, 75, 78, 81, 83, 86, 89, 91, 94, 96,
98, 100, 102, 104, 106, 108, 110, 112, 113, 114, 116, 117, 118, 119, 120, 121,
121, 122, 122, 123, 123, 123, 123, 123, 123, 123, 122, 122, 121, 120, 119, 118,
117, 116, 115, 113, 112, 110, 109, 107, 105, 103, 101, 99, 97, 94, 92, 89, 87,
84, 82, 79, 76, 73, 70, 67, 64, 61, 57, 54, 51, 47, 44, 40, 37, 33, 30, 26, 23,
19, 15, 12, 8, 4, 1, -3, -7, -10, -14, -18, -21, -25, -29, -32, -36, -39, -43,
-46, -50, -53, -56, -60, -63, -66, -69, -72, -75, -78, -81, -84, -86, -89, -91,
-94, -96, -99, -101, -103, -105, -107, -109, -110, -112, -114, -115, -116, -118,
-119, -120, -121, -121, -122, -123, -123, -124, -124, -124, -124, -124, -124,
-124, -123, -123, -122, -121, -121, -120, -119, -118, -116, -115, -113, -112,
-110, -109, -107, -105, -103, -101, -98, -96, -94, -91, -89, -86, -83, -81, -78,
-75, -72, -69, -66, -63, -59, -56, -53, -49, -46, -43, -39, -36, -32, -28, -25,
-21, -18, -14, -10, -7, -3, 1, 5, 8, 12, 16, 19, 23, 26, 30, 34, 37, 41, 44, 47,
51, 54, 57, 61, 64, 67, 70, 73, 76, 79, 82, 84, 87, 90, 92, 94, 97, 99, 101,
103, 105, 107, 109, 110, 112, 114, 115, 116, 117, 118, 119, 120, 121, 122, 122,
123, 123, 123, 123, 123, 123, 123, 122, 122, 121, 121, 120, 119, 118, 117, 116,
114, 113, 111, 110, 108, 106, 104, 102, 100, 98, 96, 94, 91, 89, 86, 83, 81, 78,
75, 72, 69, 66, 63, 59, 56, 53, 50, 46, 43, 39, 36, 32, 29, 25, 21, 18, 14, 10,
7, 3, -1, -4, -8, -12, -15, -19, -23, -26, -30, -33, -37, -40, -44, -47, -51,
-54, -57, -61, -64, -67, -70, -73, -76, -79, -82, -85, -87, -90, -92, -95, -97,
-99, -101, -104, -106, -107, -109, -111, -113, -114, -115, -117, -118, -119,
-120, -121, -122, -122, -123, -123, -124, -124, -124, -124, -124, -124, -124,
-123, -123, -122, -121, -120, -119, -118, -117, -116, -114, -113, -111, -110,
-108, -106, -104, -102, -100, -98, -95, -93, -90, -88, -85, -82, -80, -77, -74,
-71, -68, -65, -61, -58, -55, -52, -48, -45, -41, -38, -34, -31, -27, -24, -20,
-16, -13, -9, -5, -2, 2, 6, 9, 13, 17, 20, 24, 28, 31, 35, 38, 42, 45, 49, 52,
55, 59, 62, 65, 68, 71, 74, 77, 80, 83, 85, 88, 90, 93, 95, 98, 100, 102, 104,
106, 108, 109, 111, 113, 114, 115, 117, 118, 119, 120, 121, 121, 122, 122, 123,
123, 123, 123, 123, 123, 123, 122, 122, 121, 120, 120, 119, 118, 116, 115, 114,
112, 111, 109, 108, 106, 104, 102, 100, 97, 95, 93, 90, 88, 85, 82, 80, 77, 74,
71, 68, 65, 62, 58, 55, 52, 48, 45, 41, 38, 34, 31, 27, 24, 20, 16, 13, 9, 5, 2,
-2, -6, -9, -13, -17, -20, -24, -28, -31, -35, -38, -42, -45, -49, -52, -55,
-59, -62, -65, -68, -71, -74, -77, -80, -83, -85, -88, -91, -93, -96, -98, -100,
-102, -104, -106, -108, -110, -112, -113, -115, -116, -117, -118, -119, -120,
-121, -122, -123, -123, -124, -124, -124, -124, -124, -124, -124, -123, -123,
-122, -122, -121, -120, -119, -118, -117, -115, -114, -112, -111, -109, -107,
-105, -103, -101, -99, -97, -94, -92, -89, -87, -84, -81, -79, -76, -73, -70,
-67, -64, -60, -57, -54, -50, -47, -44, -40, -37, -33, -29, -26, -22, -19, -15,
-11, -8, -4, 0, 3, 7, 11, 14, 18, 22, 25, 29, 33, 36, 40, 43, 46, 50, 53, 57,
60, 63, 66, 69, 72, 75, 78, 81, 84, 86, 89, 91, 94, 96, 98, 101, 103, 105, 107,
108, 110, 112, 113, 115, 116, 117, 118, 119, 120, 121, 121, 122, 122, 123, 123,
123, 123, 123, 123, 123, 122, 122, 121, 120, 119, 118, 117, 116, 115, 113, 112,
110, 109, 107, 105, 103, 101, 99, 97, 94, 92, 89, 87, 84, 81, 79, 76, 73, 70,
67, 64, 60, 57, 54, 51, 47, 44, 40, 37, 33, 30, 26, 22, 19, 15, 11, 8, 4, 0, -3,
-7, -11, -14, -18, -22, -25, -29, -32, -36, -39, -43, -46, -50, -53, -56, -60,
-63, -66, -69, -72, -75, -78, -81, -84, -86, -89, -92, -94, -96, -99, -101,
-103, -105, -107, -109, -110, -112, -114, -115, -116, -118, -119, -120, -121,
-122, -122, -123, -123, -124, -124, -124, -124, -124, -124, -124, -123, -123,
-122, -121, -121, -120, -119, -117, -116, -115, -113, -112, -110, -108, -107,
-105, -103, -101, -98, -96, -94, -91, -89, -86, -83, -80, -78, -75, -72, -69,
-66, -62, -59, -56, -53, -49, -46, -42, -39, -35, -32, -28, -25, -21, -17, -14,
-10, -6, -3, 1, 5, 8, 12, 16, 19, 23, 27, 30, 34, 37, 41, 44, 48, 51, 54, 58,
61, 64, 67, 70, 73, 76, 79, 82, 85, 87, 90, 92, 95, 97, 99, 101, 103, 105, 107,
109, 111, 112, 114, 115, 116, 117, 118, 119, 120, 121, 122, 122, 123, 123, 123,
123, 123, 123, 123, 122, 122, 121, 121, 120, 119, 118, 117, 116, 114, 113, 111,
110, 108, 106, 104, 102, 100, 98, 96, 93, 91, 88, 86, 83, 80, 78, 75, 72, 69,
66, 62, 59, 56, 53, 49, 46, 42, 39, 35, 32, 28, 25, 21, 18, 14, 10, 7, 3, -1,
-5, -8, -12, -16, -19, -23, -26, -30, -34, -37, -41, -44, -48, -51, -54, -58,
-61, -64, -67, -70, -73, -76, -79, -82, -85, -87, -90, -92, -95, -97, -99, -102,
-104, -106, -108, -109, -111, -113, -114, -116, -117, -118, -119, -120, -121,
-122, -122, -123, -123, -124, -124, -124, -124, -124, -124, -124, -123, -123,
-122, -121, -120, -119, -118, -117, -116, -114, -113, -111, -110, -108, -106,
-104, -102, -100, -97, -95, -93, -90, -88, -85, -82, -79, -77, -74, -71, -68,
-64, -61, -58, -55, -51, -48, -45, -41, -38, -34, -31, -27, -23, -20, -16, -12,
-9, -5, -1, 2, 6, 10, 13, 17, 21, 24, 28, 32, 35, 39, 42, 45, 49, 52, 56, 59,
62, 65, 68, 71, 74, 77, 80, 83, 85, 88, 91, 93, 95, 98, 100, 102, 104, 106, 108,
110, 111, 113, 114, 115, 117, 118, 119, 120, 121, 121, 122, 122, 123, 123, 123,
123, 123, 123, 123, 122, 122, 121, 120, 120, 119, 118, 116, 115, 114, 112, 111,
109, 107, 106, 104, 102, 99, 97, 95, 93, 90, 88, 85, 82, 79, 77, 74, 71, 68, 64,
61, 58, 55, 51, 48, 45, 41, 38, 34, 31, 27, 24, 20, 16, 13, 9, 5, 2, -2, -6,
-10, -13, -17, -21, -24, -28, -31, -35, -38, -42, -45, -49, -52, -55, -59, -62,
-65, -68, -71, -74, -77, -80, -83, -86, -88, -91, -93, -96, -98, -100, -102,
-104, -106, -108, -110, -112, -113, -115, -116, -117, -118, -120, -120, -121,
-122, -123, -123, -124, -124, -124, -124, -124, -124, -124, -123, -123, -122,
-122, -121, -120, -119, -118, -117, -115, -114, -112, -111, -109, -107, -105,
-103, -101, -99, -97, -94, -92, -89, -87, -84, -81, -78, -76, -73, -70, -66,
-63, -60, -57, -54, -50, -47, -43, -40, -36, -33, -29, -26, -22, -18, -15, -11,
-7, -4, 0, 4, 7, 11, 15, 18, 22, 26, 29, 33, 36, 40, 43, 47, 50, 53, 57, 60, 63,
66, 69, 72, 75, 78, 81, 84, 86, 89, 91, 94, 96, 98, 101, 103, 105, 107, 108,
110, 112, 113, 115, 116, 117, 118, 119, 120, 121, 121, 122, 122, 123, 123, 123,
123, 123, 123, 123, 122, 122, 121, 120, 119, 118, 117, 116, 115, 114, 112, 111,
109, 107, 105, 103, 101, 99, 97, 95, 92, 90, 87, 85, 82, 79, 76, 74, 71, 68, 65,
61, 58, 55, 52, 48, 45, 42, 38, 35, 31, 28, 24, 21, 17, 14, 10, 6, 3, -1, -5,
-8, -12, -15, -19, -22, -26, -30, -33, -36, -40, -43, -47, -50, -53, -56, -60,
-63, -66, -69, -72, -75, -78, -80, -83, -86, -88, -91, -93, -95, -98, -100,
-102, -104, -106, -108, -109, -111, -113, -114, -115, -117, -118, -119, -120,
-121, -122, -122, -123, -123, -124, -124, -124, -124, -124, -124, -124, -123,
-123, -122, -122, -121, -120, -119, -118, -117, -116, -115, -113, -112, -110,
-108, -107, -105, -103, -101, -99, -96, -94, -92, -89, -87, -84, -81, -79, -76,
-73, -70, -67, -64, -61, -58, -55, -52, -48, -45, -42, -38, -35, -32, -28, -25,
-21, -18, -14, -11, -7, -4, 0, 3, 7, 11, 14, 18, 21, 25, 28, 31, 35, 38, 41, 45,
48, 51, 54, 58, 61, 64, 67, 70, 73, 75, 78, 81, 83, 86, 88, 91, 93, 95, 98, 100,
102, 104, 106, 107, 109, 111, 112, 113, 115, 116, 117, 118, 119, 120, 121, 121,
122, 122, 123, 123, 123, 123, 123, 123, 123, 122, 122, 121, 121, 120, 119, 118,
117, 116, 115, 114, 112, 111, 109, 108, 106, 104, 102, 100, 98, 96, 94, 91, 89,
87, 84, 82, 79, 76, 73, 71, 68, 65, 62, 59, 56, 53, 49, 46, 43, 40, 36, 33, 30,
26, 23, 20, 16, 13, 9, 6, 2, -1, -5, -8, -12, -15, -18, -22, -25, -29, -32, -35,
-39, -42, -45, -48, -51, -55, -58, -61, -64, -67, -70, -72, -75, -78, -81, -83,
-86, -88, -91, -93, -95, -97, -99, -101, -103, -105, -107, -109, -110, -112,
-113, -115, -116, -117, -118, -119, -120, -121, -122, -122, -123, -123, -124,
-124, -124, -124, -124, -124, -124, -123, -123, -123, -122, -121, -120, -120,
-119, -118, -116, -115, -114, -112, -111, -109, -108, -106, -104, -102, -100,
-98, -96, -94, -92, -89, -87, -84, -82, -79, -77, -74, -71, -68, -66, -63, -60,
-57, -54, -50, -47, -44, -41, -38, -34, -31, -28, -25, -21, -18, -15, -11, -8,
-4, -1, 2, 6, 9, 12, 16, 19, 23, 26, 29, 32, 36, 39, 42, 45, 48, 51, 55, 58, 60,
63, 66, 69, 72, 75, 77, 80, 82, 85, 87, 90, 92, 94, 96, 98, 100, 102, 104, 106,
107, 109, 111, 112, 113, 115, 116, 117, 118, 119, 120, 120, 121, 122, 122, 122,
123, 123, 123, 123, 123, 123, 123, 122, 122, 121, 121, 120, 119, 118, 117, 116,
115, 114, 113, 111, 110, 108, 107, 105, 103, 101, 100, 98, 95, 93, 91, 89, 86,
84, 82, 79, 77, 74, 71, 68, 66, 63, 60, 57, 54, 51, 48, 45, 42, 39, 36, 32, 29,
26, 23, 19, 16, 13, 9, 6, 3, 0, -4, -7, -10, -14, -17, -20, -24, -27, -30, -33,
-36, -40, -43, -46, -49, -52, -55, -58, -61, -64, -66, -69, -72, -74, -77, -80,
-82, -85, -87, -89, -92, -94, -96, -98, -100, -102, -104, -106, -107, -109,
-110, -112, -113, -115, -116, -117, -118, -119, -120, -121, -121, -122, -123,
-123, -123, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -122,
-121, -121, -120, -119, -118, -117, -116, -114, -113, -112, -110, -109, -107,
-105, -104, -102, -100, -98, -96, -94, -92, -89, -87, -85, -82, -80, -77, -75,
-72, -69, -67, -64, -61, -58, -55, -52, -49, -46, -43, -40, -37, -34, -31, -28,
-25, -22, -18, -15, -12, -9, -5, -2, 1, 4, 8, 11, 14, 17, 20, 24, 27, 30, 33,
36, 39, 42, 45, 48, 51, 54, 57, 60, 63, 65, 68, 71, 73, 76, 78, 81, 83, 86, 88,
90, 92, 94, 96, 98, 100, 102, 104, 106, 107, 109, 110, 112, 113, 114, 115, 116,
117, 118, 119, 120, 121, 121, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123,
122, 122, 122, 121, 120, 120, 119, 118, 117, 116, 115, 114, 112, 111, 110, 108,
107, 105, 103, 102, 100, 98, 96, 94, 92, 90, 87, 85, 83, 80, 78, 75, 73, 70, 68,
65, 62, 60, 57, 54, 51, 48, 45, 42, 39, 36, 33, 30, 27, 24, 21, 18, 15, 11, 8,
5, 2, -1, -4, -8, -11, -14, -17, -20, -23, -26, -29, -32, -36, -39, -42, -44,
-47, -50, -53, -56, -59, -62, -64, -67, -70, -72, -75, -77, -80, -82, -84, -87,
-89, -91, -93, -95, -97, -99, -101, -103, -105, -106, -108, -109, -111, -112,
-114, -115, -116, -117, -118, -119, -120, -121, -121, -122, -122, -123, -123,
-124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -122, -122, -121,
-121, -120, -119, -118, -117, -116, -115, -114, -112, -111, -109, -108, -106,
-105, -103, -101, -99, -97, -96, -93, -91, -89, -87, -85, -83, -80, -78, -75,
-73, -70, -68, -65, -62, -60, -57, -54, -51, -49, -46, -43, -40, -37, -34, -31,
-28, -25, -22, -19, -16, -13, -10, -6, -3, 0, 3, 6, 9, 12, 15, 18, 21, 24, 27,
30, 33, 36, 39, 42, 45, 48, 51, 53, 56, 59, 62, 64, 67, 69, 72, 74, 77, 79, 82,
84, 86, 88, 90, 92, 94, 96, 98, 100, 102, 103, 105, 107, 108, 110, 111, 112,
113, 115, 116, 117, 118, 118, 119, 120, 121, 121, 122, 122, 123, 123, 123, 123,
123, 123, 123, 123, 123, 122, 122, 121, 121, 120, 119, 119, 118, 117, 116, 115,
114, 113, 111, 110, 109, 107, 106, 104, 102, 101, 99, 97, 95, 93, 91, 89, 87,
85, 83, 80, 78, 76, 73, 71, 68, 66, 63, 61, 58, 55, 52, 50, 47, 44, 41, 38, 36,
33, 30, 27, 24, 21, 18, 15, 12, 9, 6, 3, 0, -3, -6, -9, -12, -15, -18, -21, -24,
-27, -30, -33, -36, -39, -42, -44, -47, -50, -53, -55, -58, -61, -63, -66, -68,
-71, -73, -76, -78, -80, -83, -85, -87, -89, -91, -93, -95, -97, -99, -101,
-102, -104, -106, -107, -109, -110, -111, -112, -114, -115, -116, -117, -118,
-118, -119, -120, -120, -121, -122, -122, -122, -123, -123, -123, -123, -123,
-123, -123, -122, -122, -122, -121, -121, -120, -119, -119, -118, -117, -116,
-115, -114, -113, -112, -111, -109, -108, -107, -105, -103, -102, -100, -98,
-97, -95, -93, -91, -89, -87, -85, -83, -81, -79, -76, -74, -72, -69, -67, -64,
-62, -59, -57, -54, -52, -49, -46, -44, -41, -38, -36, -33, -30, -27, -24, -22,
-19, -16, -13, -10, -8, -5, -2, 1, 4, 7, 9, 12, 15, 18, 21, 23, 26, 29, 32, 34,
37, 40, 42, 45, 47, 50, 52, 55, 57, 60, 62, 64, 67, 69, 71, 73, 75, 77, 79, 81,
83, 85, 87, 89, 91, 92, 94, 96, 97, 99, 100, 101, 103, 104, 105, 106, 107, 108,
109, 110, 111, 111, 112, 113, 113, 114, 114, 115, 115, 115, 115, 115, 115, 115,
115, 115, 115, 115, 114, 114, 113, 113, 112, 112, 111, 110, 109, 108, 108, 106,
105, 104, 103, 102, 101, 99, 98, 96, 95, 93, 92, 90, 88, 87, 85, 83, 81, 79, 77,
75, 73, 71, 69, 67, 65, 62, 60, 58, 56, 53, 51, 48, 46, 44, 41, 39, 36, 34, 31,
29, 26, 23, 21, 18, 16, 13, 10, 8, 5, 3, 0, -3, -5, -8, -10, -13, -16, -18, -21,
-23, -26, -28, -31, -33, -36, -38, -41, -43, -45, -48, -50, -52, -54, -57, -59,
-61, -63, -65, -67, -69, -71, -73, -75, -77, -79, -80, -82, -84, -85, -87, -89,
-90, -91, -93, -94, -95, -97, -98, -99, -100, -101, -102, -103, -104, -105,
-105, -106, -107, -107, -108, -108, -109, -109, -109, -109, -110, -110, -110,
-110, -110, -110, -109, -109, -109, -109, -108, -108, -107, -107, -106, -105,
-105, -104, -103, -102, -101, -100, -99, -98, -97, -96, -94, -93, -92, -90, -89,
-88, -86, -85, -83, -81, -80, -78, -76, -74, -73, -71, -69, -67, -65, -63, -61,
-59, -57, -55, -52, -50, -48, -46, -44, -41, -39, -37, -35, -32, -30, -28, -25,
-23, -21, -18, -16, -13, -11, -9, -6, -4, -2, 1, 3, 6, 8, 10, 13, 15, 17, 20,
22, 24, 27, 29, 31, 33, 36, 38, 40, 42, 44, 46, 49, 51, 53, 55, 57, 58, 60, 62,
64, 66, 68, 69, 71, 73, 74, 76, 77, 79, 80, 82, 83, 84, 86, 87, 88, 89, 90, 91,
92, 93, 94, 95, 96, 97, 97, 98, 99, 99, 100, 100, 101, 101, 101, 101, 102, 102,
102, 102, 102, 102, 102, 102, 101, 101, 101, 101, 100, 100, 99, 99, 98, 97, 97,
96, 95, 94, 93, 92, 92, 90, 89, 88, 87, 86, 85, 83, 82, 81, 79, 78, 77, 75, 74,
72, 70, 69, 67, 65, 64, 62, 60, 58, 56, 55, 53, 51, 49, 47, 45, 43, 41, 39, 37,
35, 33, 31, 28, 26, 24, 22, 20, 18, 16, 13, 11, 9, 7, 5, 2, 0, -2, -4, -6, -8,
-11, -13, -15, -17, -19, -21, -23, -25, -27, -29, -32, -34, -36, -38, -39, -41,
-43, -45, -47, -49, -51, -53, -54, -56, -58, -59, -61, -63, -64, -66, -67, -69,
-70, -72, -73, -75, -76, -77, -78, -80, -81, -82, -83, -84, -85, -86, -87, -88,
-89, -89, -90, -91, -91, -92, -93, -93, -94, -94, -94, -95, -95, -95, -96, -96,
-96, -96, -96, -96, -96, -96, -96, -95, -95, -95, -95, -94, -94, -93, -93, -92,
-92, -91, -90, -90, -89, -88, -87, -87, -86, -85, -84, -83, -82, -81, -79, -78,
-77, -76, -74, -73, -72, -70, -69, -68, -66, -65, -63, -62, -60, -59, -57, -55,
-54, -52, -50, -48, -47, -45, -43, -41, -40, -38, -36, -34, -32, -30, -28, -26,
-24, -23, -21, -19, -17, -15, -13, -11, -9, -7, -5, -3, -1, 1, 3, 5, 7, 9, 11,
13, 15, 17, 18, 20, 22, 24, 26, 28, 30, 31, 33, 35, 37, 38, 40, 42, 44, 45, 47,
48, 50, 52, 53, 55, 56, 58, 59, 60, 62, 63, 64, 66, 67, 68, 69, 70, 72, 73, 74,
75, 76, 77, 77, 78, 79, 80, 81, 81, 82, 83, 83, 84, 84, 85, 85, 86, 86, 87, 87,
87, 87, 87, 88, 88, 88, 88, 88, 88, 88, 87, 87, 87, 87, 87, 86, 86, 85, 85, 84,
84, 83, 83, 82, 82, 81, 80, 79, 79, 78, 77, 76, 75, 74, 73, 72, 71, 70, 69, 68,
66, 65, 64, 63, 61, 60, 59, 57, 56, 55, 53, 52, 50, 49, 47, 46, 44, 43, 41, 39,
38, 36, 35, 33, 31, 30, 28, 26, 24, 23, 21, 19, 18, 16, 14, 12, 11, 9, 7, 5, 3,
2, 0, -2, -4, -5, -7, -9, -11, -12, -14, -16, -17, -19, -21, -22, -24, -26, -27,
-29, -31, -32, -34, -35, -37, -38, -40, -41, -43, -44, -46, -47, -49, -50, -51,
-53, -54, -55, -56, -58, -59, -60, -61, -62, -63, -64, -65, -66, -67, -68, -69,
-70, -71, -72, -72, -73, -74, -75, -75, -76, -77, -77, -78, -78, -79, -79, -79,
-80, -80, -80, -81, -81, -81, -81, -81, -81, -81, -81, -81, -81, -81, -81, -81,
-81, -81, -80, -80, -80, -79, -79, -79, -78, -78, -77, -77, -76, -75, -75, -74,
-73, -73, -72, -71, -70, -69, -69, -68, -67, -66, -65, -64, -63, -62, -61, -60,
-59, -57, -56, -55, -54, -53, -51, -50, -49, -47, -46, -45, -43, -42, -41, -39,
-38, -37, -35, -34, -32, -31, -29, -28, -26, -25, -23, -22, -20, -19, -17, -16,
-14, -12, -11, -9, -8, -6, -5, -3, -2, 0, 2, 3, 5, 6, 8, 9, 11, 12, 14, 15, 17,
18, 20, 21, 23, 24, 26, 27, 28, 30, 31, 33, 34, 35, 37, 38, 39, 40, 42, 43, 44,
45, 46, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 60, 61, 62, 63, 63,
64, 65, 65, 66, 67, 67, 68, 68, 69, 69, 70, 70, 71, 71, 71, 71, 72, 72, 72, 72,
72, 73, 73, 73, 73, 73, 73, 73, 73, 72, 72, 72, 72, 72, 71, 71, 71, 70, 70, 70,
69, 69, 68, 68, 67, 67, 66, 66, 65, 64, 64, 63, 62, 61, 61, 60, 59, 58, 57, 56,
55, 55, 54, 53, 52, 51, 50, 49, 48, 46, 45, 44, 43, 42, 41, 40, 38, 37, 36, 35,
34, 32, 31, 30, 29, 27, 26, 25, 23, 22, 21, 19, 18, 17, 15, 14, 13, 11, 10, 9,
7, 6, 5, 3, 2, 0, -1, -2, -4, -5, -6, -8, -9, -10, -12, -13, -14, -16, -17, -18,
-19, -21, -22, -23, -24, -26, -27, -28, -29, -30, -32, -33, -34, -35, -36, -37,
-38, -39, -40, -41, -42, -43, -44, -45, -46, -47, -48, -49, -50, -51, -52, -52,
-53, -54, -55, -55, -56, -57, -57, -58, -59, -59, -60, -60, -61, -61, -62, -62,
-63, -63, -63, -64, -64, -64, -65, -65, -65, -65, -65, -66, -66, -66, -66, -66,
-66, -66, -66, -66, -66, -66, -66, -65, -65, -65, -65, -65, -64, -64, -64, -63,
-63, -63, -62, -62, -61, -61, -60, -60, -59, -59, -58, -58, -57, -56, -56, -55,
-54, -54, -53, -52, -52, -51, -50, -49, -48, -47, -47, -46, -45, -44, -43, -42,
-41, -40, -39, -38, -37, -36, -35, -34, -33, -32, -31, -30, -29, -28, -27, -26,
-24, -23, -22, -21, -20, -19, -18, -16, -15, -14, -13, -12, -11, -10, -8, -7,
-6, -5, -4, -3, -1, 0, 1, 2, 3, 4, 6, 7, 8, 9, 10, 11, 12, 14, 15, 16, 17, 18,
19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 36, 37,
38, 39, 40, 40, 41, 42, 43, 43, 44, 45, 45, 46, 47, 47, 48, 49, 49, 50, 50, 51,
51, 52, 52, 52, 53, 53, 54, 54, 54, 55, 55, 55, 55, 56, 56, 56, 56, 56, 56, 57,
57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 56, 56, 56, 56, 56, 56, 55, 55, 55, 55,
54, 54, 54, 53, 53, 52, 52, 52, 51, 51, 50, 50, 49, 49, 48, 47, 47, 46, 46, 45,
44, 44, 43, 42, 42, 41, 40, 40, 39, 38, 37, 37, 36, 35, 34, 33, 32, 32, 31, 30,
29, 28, 27, 26, 25, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11,
10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, -1, -1, -2, -3, -4, -5, -6, -7, -8, -9, -10,
-11, -12, -13, -14, -15, -16, -17, -17, -18, -19, -20, -21, -22, -23, -23, -24,
-25, -26, -27, -27, -28, -29, -30, -30, -31, -32, -33, -33, -34, -35, -35, -36,
-37, -37, -38, -38, -39, -40, -40, -41, -41, -42, -42, -43, -43, -43, -44, -44,
-45, -45, -45, -46, -46, -46, -47, -47, -47, -48, -48, -48, -48, -48, -49, -49,
-49, -49, -49, -49, -49, -49, -49, -49, -49, -49, -49, -49, -49, -49, -49, -49,
-49, -49, -49, -49, -48, -48, -48, -48, -47, -47, -47, -47, -46, -46, -46, -45,
-45, -45, -44, -44, -43, -43, -43, -42, -42, -41, -41, -40, -40, -39, -39, -38,
-38, -37, -36, -36, -35, -35, -34, -33, -33, -32, -32, -31, -30, -30, -29, -28,
-27, -27, -26, -25, -25, -24, -23, -22, -22, -21, -20, -19, -19, -18, -17, -16,
-16, -15, -14, -13, -12, -12, -11, -10, -9, -8, -8, -7, -6, -5, -4, -4, -3, -2,
-1, 0, 0, 1, 2, 3, 4, 4, 5, 6, 7, 7, 8, 9, 10, 10, 11, 12, 13, 13, 14, 15, 15,
16, 17, 17, 18, 19, 19, 20, 21, 21, 22, 23, 23, 24, 24, 25, 26, 26, 27, 27, 28,
28, 29, 29, 30, 30, 31, 31, 32, 32, 33, 33, 32, 34, 34, 34, 35, 35, 36, 36, 36,
36, 37, 37, 37, 38, 38, 38, 38, 38, 39, 39, 39, 39, 39, 39, 39, 39, 40, 40, 40,
40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 39, 39, 39, 39, 39, 39, 39, 38, 38,
38, 38, 38, 37, 37, 37, 37, 36, 36, 36, 36, 35, 35, 35, 34, 34, 33, 33, 34, 32,
32, 32, 31, 31, 30, 30, 29, 29, 28, 28, 27, 27, 26, 26, 25, 25, 24, 24, 23, 23,
22, 22, 21, 21, 20, 19, 19, 18, 18, 17, 17, 16, 15, 15, 14, 14, 13, 12, 12, 11,
11, 10, 9, 9, 8, 7, 7, 6, 6, 5, 4, 4, 3, 2, 2, 1, 1, 0, -1, -1, -2, -2, -3, -4,
-4, -5, -5, -6, -7, -7, -8, -8, -9, -10, -10, -11, -11, -12, -12, -13, -13, -14,
-14, -15, -15, -16, -16, -17, -17, -18, -18, -19, -19, -20, -20, -21, -21, -22,
-22, -22, -23, -23, -24, -24, -24, -25, -25, -25, -26, -26, -26, -27, -27, -27,
-28, -28, -28, -28, -29, -29, -29, -29, -29, -30, -30, -30, -30, -30, -31, -31,
-31, -31, -31, -31, -31, -31, -32, -32, -32, -32, -32, -32, -32, -32, -32, -32,
-32, -32, -32, -32, -32, -32, -32, -32, -31, -31, -31, -31, -31, -31, -31, -31,
-31, -30, -30, -30, -30, -30, -29, -29, -29, -29, -29, -28, -28, -28, -28, -27,
-27, -27, -27, -26, -26, -26, -25, -25, -25, -24, -24, -24, -23, -23, -23, -22,
-22, -22, -21, -21, -21, -20, -20, -19, -19, -19, -18, -18, -17, -17, -17, -16,
-16, -15, -15, -14, -14, -14, -13, -13, -12, -12, -11, -11, -10, -10, -10, -9,
-9, -8, -8, -7, -7, -6, -6, -5, -5, -5, -4, -4, -3, -3, -2, -2, -1, -1, -1, 0,
0, 1, 1, 2, 2, 3, 3, 3, 4, 4, 5, 5, 5, 6, 6, 7, 7, 7, 8, 8, 9, 9, 9, 10, 10, 10,
11, 11, 11, 12, 12, 12, 13, 13, 13, 14, 14, 14, 15, 15, 15, 15, 16, 16, 16, 16,
17, 17, 17, 17, 18, 18, 18, 18, 19, 19, 19, 19, 19, 19, 20, 20, 20, 20, 20, 20,
20, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 22, 22, 22, 22, 22, 22, 22,
22, 22, 22, 22, 22, 22, 22, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21,
20, 20, 20, 20, 20, 20, 20, 20, 19, 19, 19, 19, 19, 19, 18, 18, 18, 18, 18, 17,
17, 17, 17, 17, 16, 16, 16, 16, 15, 15, 15, 15, 14, 14, 14, 14, 13, 13, 13, 13,
12, 12, 12, 12, 11, 11, 11, 10, 10, 10, 10, 9, 9, 9, 9, 8, 8, 8, 7, 7, 7, 6, 6,
6, 6, 5, 5, 5, 4, 4, 4, 4, 3, 3, 3, 2, 2, 2, 2, 1, 1, 1, 0, 0, 0, 0, -1, -1, -1,
-1, -2, -2, -2, -3, -3, -3, -3, -4, -4, -4, -4, -5, -5, -5, -5, -5, -6, -6, -6,
-6, -7, -7, -7, -7, -7, -8, -8, -8, -8, -8, -9, -9, -9, -9, -9, -9, -10, -10,
-10, -10, -10, -10, -11, -11, -11, -11, -11, -11, -11, -11, -12, -12, -12, -12,
-12, -12, -12, -12, -12, -12, -12, -13, -13, -13, -13, -13, -13, -13, -13, -13,
-13, -13, -13, -13, -13, -13, -13, -13, -13, -13, -13, -13, -13, -13, -13, -13,
-13, -13, -13, -13, -13, -13, -13, -13, -13, -13, -13, -13, -13, -13, -12, -12,
-12, -12, -12, -12, -12, -12, -12, -12, -12, -12, -12, -11, -11, -11, -11, -11,
-11, -11, -11, -11, -10, -10, -10, -10, -10, -10, -10, -10, -10, -9, -9, -9, -9,
-9, -9, -9, -8, -8, -8, -8, -8, -8, -8, -7, -7, -7, -7, -7, -7, -7, -6, -6, -6,
-6, -6, -6, -6, -5, -5, -5, -5, -5, -5, -5, -4, -4, -4, -4, -4, -4, -4, -3, -3,
-3, -3, -3, -3, -3, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, -1, -1,
-1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2,
2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, 0, -1, 0, -1,
0, -1, 0, -1, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, 0, 0, -1, 0, -1, 0,
-1, 0, -1, 0, -1, 0, 0, 0, 0, 0, -1, 0, -1, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0,
-1, 0, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, 0, 0, 0, -1, 0, -1, 0,
-1, 0, 0, 0, -1, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0,
-1, 0, -1, 0, 0, 0, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1,
0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, 0, 0, -1, 0,
-1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0,
0, -1, 0, 0, -1, 0, -1, 0, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1,
0, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1,
0, -1, 0, -1, 0, 0, -1, 0, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, -1,
0, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, 0,
-1, 0, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, 0,
-1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0,
0, 0, 0, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0,
0, -1, 0, 0, -1, 0, -1, 0, 0, 0, -1, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0,
-1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0,
-1, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0,
-1, 0, -1, 0, 0, -1, 0, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, 0,
-1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0,
-1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1,
0, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, 0, -1,
0, -1, 0, 0, -1, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0,
-1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0,
-1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1,
0, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1,
0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1,
0, -1, 0, -1, 0, -1, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, -1,
0, -1, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1,
0, -1, 0, -1, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, 0,
-1, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1,
0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, 0, 0, -1, 0, -1,
0, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0,
-1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1,
0, -1, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, -1, 0, 0, -1, 0, -1,
0, -1, 0, -1, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0,
-1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, 0, -1,
0, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, 0, 0, -1, 0, -1, 0,
-1, 0, 0, -1, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, -1, 0, -1, 0, 0, -1,
0, -1, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, 0, 0, -1, 0,
0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, 0, -1,
0, -1, 0, 0, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0,
-1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1,
0, -1, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0,
0, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0,
-1, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, 0, 0, 0, -1, 0, -1, 0, -1, 0,
0, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, 0, -1, 0, };

#endif /* KICKSIX_H_ */