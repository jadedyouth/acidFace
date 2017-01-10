#include <FastLED.h>

#define LED_COUNT 175    
struct CRGB leds[LED_COUNT];

long randomNo1;
long randomNo2;
long randomNo3;

long rn;
int c16;
int c17;

int c0;

int hue = 50;
//smile
int c1 = 15;
int c2 = 17;
//wink
int c3  = 0;

//roll out
int c4 = 92;
int c5 = 33;
int c6 = 25;

//disintegrate
int c7 = 23;
int c8 = 22;
int c9 = 13;
int c10 = 11;
int c11 = 92;
int c12 = 44;
int c13 = -1;
int c14 = 33;
int d1 = 100;

//pink eyes
int huex = 50;
int satx = 255;
int c15;
int sw;

//fade out
int valx = 255;
int hue4;
int hue5;
int sat4;
int sat5;
int valz = 255;
 //fade in
int valy = 0;

//92
int Outline[] = {0,1,2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34,
35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71,
72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91};
//32
int Smile[] = {92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120,
121, 122, 123, 124};

//25
int Reye[] = {125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149};
//25
int Leye[] = {150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174};


void setup() {
FastLED.addLeds<APA102,3,4,BGR>(leds, LED_COUNT);
randomSeed(analogRead(0));


}
void loop() {

go();


}

