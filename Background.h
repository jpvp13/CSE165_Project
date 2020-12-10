#pragma once


#include <vector>
#include "TexRect.h"
#include "Shape.h"
#include "Rect.h"
#include "Sprite.h"

class Background: public Rect{
    TexRect* streetB;
    TexRect* streetT;
    TexRect* river;
    TexRect* grass;
    Rect* youWin;
    Rect* start;

public:
    Background();
    void streetDraw();
    void riverDraw();
    void stagnantColor();
    void startArea();
    void winArea();

    double winX();
    double winY();
    double winW();
    double winH();

    ~Background();
};