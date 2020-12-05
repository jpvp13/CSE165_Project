#pragma once


#include <vector>
#include "GlutApp.h"
#include "Rect.h"
#include "Circle.h"
#include "TexRect.h"
#include "Sprite.h"
// #include "Player.h"

class carObj: public Rect{
    TexRect* yellowCar;
    TexRect* greenCar;
    TexRect* blueCar;
    TexRect* fireTruck;

    unsigned int interval;
    unsigned int bottomCarInterval;
    unsigned int topCarInterval;



public:
    carObj();
    void carDraw();
    bool carCollision(float x, float y);

    friend void timer(int id);

    friend void bottomCarTimer(int id);
    friend void topCarTimer(int id);


    ~carObj();
};