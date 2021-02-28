#include "BoxManager.h"

BoxManager::BoxManager(){
    b1 = new Box(0,1234,1);
    b2 = new Box(1,1235,2);
    b3 = new Box(2,1236,3);
    b4 = new Box(3,1237,4);
    b5 = new Box(4,1238,5);
    b6 = new Box(5,1239,6);
    boxArray[0] = b1;
    boxArray[1] = b2;
    boxArray[2] = b3;
    boxArray[3] = b4;
    boxArray[4] = b5;
    boxArray[5] = b6;

}


int BoxManager::findBoxWithPassord(int password){
    for(int forCounter = 0; forCounter < 6; forCounter++){
        if(boxArray[forCounter]->getPassword() == password ){
            return boxArray[forCounter]->getId();
        }
    }
    return -1;
}

int BoxManager::getBoxSlot(int boxId){
  for(int forCounter = 0; forCounter < 6; forCounter++){
        if(boxArray[forCounter]->getId() == boxId ){
            return boxArray[forCounter]->getCurrentSlot();
        }
    }
    return -1;
}

int BoxManager::processPassword(int password){
    int boxId = findBoxWithPassord(password);
    if(boxId == -1){
        return -1;
    }else{
        int boxSlot = getBoxSlot(boxId);
        if (boxSlot == -1){
            return -1;
        }else{
            return boxSlot;
        }        
    }
}

void BoxManager::removeBox(int boxId){
    for(int forCounter = 0; forCounter < 6; forCounter++){
        if(boxArray[forCounter]->getId() == boxId ){
            boxArray[forCounter]->setCurrentSlot(0);
            boxArray[forCounter]->setcurrentStatus(0);
        }
    }
}

void BoxManager::addBox(int boxId,int slot){
    for(int forCounter = 0; forCounter < 6; forCounter++){
        if(boxArray[forCounter]->getId() == boxId ){
            boxArray[forCounter]->setCurrentSlot(slot);
            boxArray[forCounter]->setcurrentStatus(1);
        }
    }
}