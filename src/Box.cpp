#include "Box.h"
#include "Arduino.h"

Box::Box(int id, int password, int color){
    _id = id;
    _currentStatus = 0;
    _color = color;
    _password = password;
    _currentSlot = 0;
}

void Box::setColor(int color){
    _color = color;
}

void Box::setcurrentStatus(int currentStatus){
    _currentStatus = currentStatus;
}

void Box::setId(int id){
    _id = id;
}

void Box::setPassword(int password){
    _password = password;
}

int Box::getPassword(){
    return _password;
}

int Box::getColor(){
    return _color;
}

int Box::getCurrentStatus(){
    return _currentStatus;
}

int Box::getId(){
    return _id;
}

int Box::getCurrentSlot(){
    return _currentSlot;
}

void Box::setCurrentSlot(int slot){
    _currentSlot = slot;
}