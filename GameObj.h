#pragma once


#include <vector>
#include "TexRect.h"
#include "Shape.h"
#include "Sprite.h"

class GameObj: public Rect{
    TexRect* log;
    TexRect* river;

public:
    GameObj();
    void logDraw();
    void riverDraw();
};