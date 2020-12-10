#pragma once


#include <vector>
#include "GlutApp.h"
#include "Rect.h"
#include "Circle.h"
#include "TexRect.h"
#include "Sprite.h"


class carObj: public Rect{
    TexRect* yellowCar;
    TexRect* greenCar;
    TexRect* blueCar;
    TexRect* fireTruck;

    unsigned int interval;
    unsigned int bottomCarInterval;
    unsigned int topCarInterval;

    int x;
    int y;
    int w;
    int h;


public:
    carObj();
    void carDraw();
    // bool containsYellow(float, float) const;
    // bool containsBlue(float, float) const;
    friend void timer(int id);

    friend void bottomCarTimer(int id);
    friend void topCarTimer(int id);

    double blueX();
    double blueY();
    double blueW();
    double blueH();

    double yellowX();
    double yellowY();
    double yellowW();
    double yellowH();

    double greenX();
    double greenY();
    double greenW();
    double greenH();

    double truckX();
    double truckY();
    double truckW();
    double truckH();


    ~carObj();
};