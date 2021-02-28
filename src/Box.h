#ifndef Box_h
#define Box_h

#include "Arduino.h"


class Box{
    public:
        Box(int id, int password, int color);
        void setPassword(int password);
        void setcurrentStatus(int currentStatus);
        void setId(int id);
        void setColor(int color);
        int getPassword();
        int getCurrentStatus();
        int getId();
        int getColor();
        int getCurrentSlot();
        void setCurrentSlot(int slot);
    private:
        int _password;
        int _currentStatus;
        int _id;
        int _color;
        int _currentSlot;

};

#endif