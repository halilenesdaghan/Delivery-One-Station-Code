#ifndef BoxManager_h
#define BoxManager_h

#include "Arduino.h"
#include "Box.h"

class BoxManager{
    public:
        BoxManager();
        int processPassword(int password);
        void addBox(int boxId,int slot);
        void removeBox(int boxId);
    private:
        int findBoxWithPassord(int password);
        int getBoxSlot(int boxId);
        Box *b1;
        Box *b2;
        Box *b3;
        Box *b4;
        Box *b5;
        Box *b6;
        Box *boxArray[6];
        /*Box *b7;
        Box *b8;
        Box *b9;
        Box *b10;
        Box *b11;
        Box *b12;
        Box *b13;
        Box *b14;
        Box *b15;
        Box *b16;
        Box *b17;
        Box *b18;
        Box *b19;
        Box *b20;
        Box *b21;
        Box *b22;
        Box *b23;
        Box *b24;
        Box *b25; */
};

#endif
