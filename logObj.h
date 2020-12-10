#pragma once


#include <vector>
#include "TexRect.h"
#include "Shape.h"
#include "Sprite.h"

class logObj: public Rect{

    TexRect* logBottom;
    TexRect* logTop;

    unsigned int interval;

public:
    logObj();
    void logDraw();


    friend void logTimer(int id);


    double logTopX();
    double logTopY();
    double logTopW();
    double logTopH();

    double logBottomX();
    double logBottomY();
    double logBottomW();
    double logBottomH();


    ~logObj();
};