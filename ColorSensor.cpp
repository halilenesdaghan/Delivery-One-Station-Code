#include "ColorSensor.h"
#include "Definitions.h"

ColorSensor::ColorSensor( int s0, int s1, int s2, int s3, int sensorOut){

    _s0 = s0;
    _s1 = s1;
    _s2 = s2;
    _s3 = s3;
    _sensorOut = sensorOut;


}

int ColorSensor::readColor(){

int red,green,blue,color;
color = -1;
red = readRed();
green = readGreen();
blue = readBlue();

if(red<45 & red>32 & green<65 & green>55){
    color = RED; // Red
  }
  if(green<55 & green>43 & blue<47 &blue>35){
    color = ORANGE; // Orange
  }
  if(red<53 & red>40 & green<53 & green>40){
    color = GREEN; // Green
  }
  if(red<38 & red>24 & green<44 & green>30){
    color = YELLOW; // Yellow
  }
  if(red<56 & red>46 & green<65 & green>55){
    color = BROWN; // Brown
  }
  if (green<58 & green>45 & blue<40 &blue>26){
    color = BLUE; // Blue
  }
  return color; 

}

int ColorSensor::readRed(){
    digitalWrite(_s2, LOW);
    digitalWrite(_s3, LOW);
    int readValue = -1;
    // Reading the output frequency
    readValue = pulseIn(_sensorOut, LOW);
    return readValue;

}

int ColorSensor::readGreen(){
    digitalWrite(_s2, HIGH);
    digitalWrite(_s3, HIGH);
    
    int readValue = -1;
    // Reading the output frequency
    readValue = pulseIn(_sensorOut, LOW);
    return readValue;

}

int ColorSensor::readBlue(){
    digitalWrite(_s2, LOW);
    digitalWrite(_s3, HIGH);

    int readValue = -1;
    // Reading the output frequency
    readValue = pulseIn(_sensorOut, LOW);
    return readValue;

}