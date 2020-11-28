#pragma once


#include <vector>
#include "TexRect.h"
#include "Shape.h"
#include "Sprite.h"

class Background: public Rect{
    TexRect* streetB;
    TexRect* streetT;
    TexRect* river;
    TexRect* grass;

public:
    Background();
    void streetDraw();
    void riverDraw();
    void stagnantColor();


    ~Background();
};