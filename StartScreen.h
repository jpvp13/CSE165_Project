#ifndef STARTSCREEN_H
#define STARTSCREEN_H

#include "Rect.h"
#include <deque>
#include <vector>
#include "TexRect.h"
#include "Shape.h"
#include "Sprite.h"


class StartScreen : public Rect{

    Sprite* turtleL;
    Sprite* turtleR;
    Rect* blackScreen;
    TexRect* menu;

public:
    StartScreen();

    void screenDraw();

    void blackDraw();

    friend void StartScreentimer(int id);

    unsigned int turtleInterval;

    bool visable;

    ~StartScreen();


};

#endif