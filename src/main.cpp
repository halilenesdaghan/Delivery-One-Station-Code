#include "BoxManager.h"
#include "AccelStepper.h"
#include "Nextion.h"
#include "SoftwareSerial.h"

#define S0 2
#define S1 3
#define S2 4
#define S3 5
#define sensorOut 6

BoxManager *boxManager;
int testPassword;

void setup() {
    Serial.begin(9600);
    boxManager = new BoxManager();
    testPassword = 1237;
    boxManager->addBox(3,12);
    int slot = boxManager->processPassword(testPassword);
    Serial.println(slot);
}

void loop(){
  
}