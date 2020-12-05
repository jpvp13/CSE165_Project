#pragma once


#include <vector>
#include "TexRect.h"
#include "Shape.h"
#include "Sprite.h"
#include "Player.h"


extern Sprite& user;



class logObj: public Rect{
    TexRect* log;
    
    // Sprite* user;


public:
    logObj();
    void logDraw();

    bool logCollision(float x, float y);

    ~logObj();
};