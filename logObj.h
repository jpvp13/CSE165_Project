#pragma once


#include <vector>
#include "TexRect.h"
#include "Shape.h"
#include "Sprite.h"
// #include "Player.h"

class logObj: public Rect{
    TexRect* log;


public:
    logObj();
    void logDraw();

    bool logCollision(float x, float y);

    ~logObj();
};