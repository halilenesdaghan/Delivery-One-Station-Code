#include "BoxManager.h"
#include "ColorSensor.h"
#include "Definitions.h"

BoxManager *boxManager;
ColorSensor *colorSensor;
int testPassword;

void setup() {
    Serial.begin(9600);
    boxManager = new BoxManager();
    colorSensor = new ColorSensor(COLOR_SENSOR_S0,COLOR_SENSOR_S1,COLOR_SENSOR_S2,COLOR_SENSOR_S3,COLOR_SENSOR_OUT);
    testPassword = 1237;
    boxManager->addBox(3,12);
    int slot = boxManager->processPassword(testPassword);
    Serial.println(slot);
}

void loop(){

  //look for new object 
  //look for new password
  int colorFromSensor = colorSensor->readColor();
  if(colorFromSensor == NOCOLOR){

  }
}