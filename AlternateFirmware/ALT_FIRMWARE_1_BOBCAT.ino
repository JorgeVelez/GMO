#include <ADC.h>  // Teensy 3.1 uncomment this line and install http://github.com/pedvide/ADC
#include <MozziGuts.h>
#include <Oscil.h> // oscillator template
#include <tables/whitenoise8192_int8.h> // recorded audio wavetable
#include <tables/brownnoise8192_int8.h> // recorded audio wavetable

#include <Ead.h> // exponential attack decay
#include <mozzi_rand.h>

#define CONTROL_RATE 256 // powers of 2 please

Oscil<WHITENOISE8192_NUM_CELLS, AUDIO_RATE> aNoise(WHITENOISE8192_DATA);
Oscil<WHITENOISE8192_NUM_CELLS, AUDIO_RATE> bNoise(WHITENOISE8192_DATA);

Ead envelopeOne(CONTROL_RATE); // resolution will be CONTROL_RATE
Ead envelopeTwo(CONTROL_RATE); // resolution will be CONTROL_RATE

int trigOne = 0; 
int trigTwo = 0;

int toggle = 0; 

int pitchPotOne = 0; 
int pitchOneCvRaw = 0;
int pitchOneMath = 0;
float pitchOne = 0;

int decayPotOne = 0;
int decayOneCvRaw = 0; 
int decayOneMath = 0;
int decayOne = 0;

int gainOne;

int pitchPotTwo= 0; 
int pitchTwoCvRaw = 0;
int pitchTwoMath = 0;
float pitchTwo = 0;

int decayPotTwo = 0;
int decayTwoCvRaw = 0; 
int decayTwoMath = 0;
int decayTwo = 0;

int gainTwo;

int CURRENT_TABLE = 0; // variable to hold table size


float mapfloat(float x, float in_min, float in_max, float out_min, float out_max)
{
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

void setup(){
  // use float to set freq because it will be small and fractional
  randSeed(); // fresh random, MUST be called before startMozzi - wierd bug
  pinMode(0, INPUT);
  pinMode(2, INPUT);
  pinMode(4, INPUT);
  startMozzi(CONTROL_RATE);
}


void updateControl(){
  // jump around in audio noise table to disrupt obvious looping
  aNoise.setPhase(rand((unsigned int)WHITENOISE8192_NUM_CELLS));
  bNoise.setPhase(rand((unsigned int)WHITENOISE8192_NUM_CELLS));
    
  trigOne = digitalRead(0);
  trigTwo  = digitalRead(2);
  
  toggle = digitalRead(4);
  
  if (toggle == HIGH) {
     aNoise.setTable(BROWNNOISE8192_DATA); // change the current wavetable
     bNoise.setTable(BROWNNOISE8192_DATA); // change the current wavetable
     CURRENT_TABLE = BROWNNOISE8192_NUM_CELLS; // set the wavetable length to current wavetable
  }
  
  else {
     aNoise.setTable(WHITENOISE8192_DATA); // change the current wavetable
     bNoise.setTable(WHITENOISE8192_DATA); // change the current wavetable
     CURRENT_TABLE = WHITENOISE8192_NUM_CELLS; // set the wavetable length to current wavetable
  }

  decayPotOne = analogRead(A7);
  decayOneCvRaw = analogRead(A8) - 512;
  
  if (decayOneCvRaw > 512) // If the reading is above 512 we know it's a positive value 
  {
  decayOneMath = (decayPotOne - decayOneCvRaw); // So we add it to the Pot  
  }
  else if (decayOneCvRaw < 512) // If the reading is below 512 we know it's a negatie value 
  {
  decayOneMath = (decayPotOne + decayOneCvRaw); // So we subtract it from the Pot
  }
    
  decayOneMath = max(decayOneMath, 1);   // limit the lowest possible value to 1, data below this limit gets truncated 
  decayOneMath = min(decayOneMath, 1023); // limit the highest possible value to 1023, data above this limit gets truncated 
  
  decayOne = map(decayOneMath, 1, 1023, 0, 255);
  
  if (trigOne == HIGH){
    envelopeOne.start(10, decayOne);
  }
  
  pitchPotOne = analogRead(A1);
  pitchOneCvRaw = analogRead(A2) - 512;
  
  if (pitchOneCvRaw > 512) // If the reading is above 512 we know it's a positive value 
  {
  pitchOneMath = (pitchPotOne - pitchOneCvRaw); // So we add it to the Pot  
  }
  else if (pitchOneCvRaw < 512) // If the reading is below 512 we know it's a negatie value 
  {
  pitchOneMath = (pitchPotOne + pitchOneCvRaw); // So we subtract it from the Pot
  }
    
  pitchOneMath = max(pitchOneMath, 1);   // limit the lowest possible value to 1, data below this limit gets truncated 
  pitchOneMath = min(pitchOneMath, 1023); // limit the highest possible value to 1023, data above this limit gets truncated 
  
  pitchOne = mapfloat(pitchOneMath, 1, 1023, 0.01, 3.0);
 
  aNoise.setFreq(pitchOne); 
  
  ///////////////////////////////////////////
  decayPotTwo   = analogRead(A3);
  decayTwoCvRaw = analogRead(A4) - 512;
  
  if (decayTwoCvRaw > 512) // If the reading is above 512 we know it's a positive value 
  {
  decayTwoMath = (decayPotTwo - decayTwoCvRaw); // So we add it to the Pot  
  }
  else if (decayTwoCvRaw < 512) // If the reading is below 512 we know it's a negatie value 
  {
  decayTwoMath = (decayPotTwo + decayTwoCvRaw); // So we subtract it from the Pot
  }
    
  decayTwoMath = max(decayTwoMath, 1);   // limit the lowest possible value to 1, data below this limit gets truncated 
  decayTwoMath = min(decayTwoMath, 1023); // limit the highest possible value to 1023, data above this limit gets truncated 
  
  decayTwo = map(decayTwoMath, 1, 1023, 0, 255);
  
  if (trigTwo == HIGH){
    envelopeTwo.start(10, decayTwo);
  }
  
  pitchPotTwo = analogRead(A5);
  pitchTwoCvRaw = analogRead(A6) - 512;
  
  if (pitchTwoCvRaw > 512) // If the reading is above 512 we know it's a positive value 
  {
  pitchTwoMath = (pitchPotTwo - pitchTwoCvRaw); // So we add it to the Pot  
  }
  else if (pitchTwoCvRaw < 512) // If the reading is below 512 we know it's a negatie value 
  {
  pitchTwoMath = (pitchPotTwo + pitchTwoCvRaw); // So we subtract it from the Pot
  }
    
  pitchTwoMath = max(pitchTwoMath, 1);   // limit the lowest possible value to 1, data below this limit gets truncated 
  pitchTwoMath = min(pitchTwoMath, 1023); // limit the highest possible value to 1023, data above this limit gets truncated 
  
  pitchTwo = mapfloat(pitchTwoMath, 1, 1023, 0.01, 3.0);
 
  bNoise.setFreq(pitchTwo); 
  //////////////////////////////////////////
  
  gainOne = (int) envelopeOne.next();
  gainTwo = (int) envelopeTwo.next();
 
 analogWrite(A9, (int)(gainOne * aNoise.next()) + (gainTwo * bNoise.next()) * 5); // mirror the audio output boost the gain x 100  and write it to the LED  
}


int updateAudio(){
  return ( (gainOne * aNoise.next()) + (gainTwo * bNoise.next()) ) * 5;
}


void loop(){
  audioHook();
}