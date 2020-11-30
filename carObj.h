#pragma once


#include <vector>
#include "TexRect.h"
#include "Shape.h"
#include "Sprite.h"
// #include "Player.h"

class carObj: public Rect{
    TexRect* yellowCar;
    TexRect* greenCar;
    TexRect* blueCar;
    TexRect* fireTruck;



public:
    carObj();
    void carDraw();
    bool carCollision(float x, float y);

    ~carObj();
};