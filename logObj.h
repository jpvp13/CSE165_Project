#pragma once


#include <vector>
#include "TexRect.h"
#include "Shape.h"
#include "Sprite.h"
#include "Player.h"





class logObj: public Rect{

    TexRect* logBottom;
    TexRect* logTop;


    unsigned int interval;
    
    // Sprite* user;


public:
    logObj();
    void logDraw();

    friend void logTimer(int id);

    bool logCollision(float x, float y);

    ~logObj();
};