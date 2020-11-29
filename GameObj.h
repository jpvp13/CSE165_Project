#pragma once


#include <vector>
#include "TexRect.h"
#include "Shape.h"
#include "Sprite.h"
#include "Player.h"

class GameObj: public Rect{
    TexRect* log;
    // Sprite* frog;
    // TexRect* car;
    TexRect* frog;


public:
    GameObj();
    void logDraw();
    void carDraw();
    bool objectCollision(float x, float y);

    ~GameObj();
};