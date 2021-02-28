#ifndef ColorSensor_h
#define ColorSensor_h

#include "Arduino.h"

class ColorSensor{

public:

ColorSensor (int s0, int s1, int s2, int s3, int sensorOut);
int readColor();


private:

int _s0;
int _s1;
int _s2;
int _s3; 
int _red;
int _green;
int _blue;
int _sensorOut;
int freq;

int readRed();
int readGreen();
int readBlue();

};


#endif