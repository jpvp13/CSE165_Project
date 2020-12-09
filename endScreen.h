#ifndef ENDSCREEN_H
#define ENDSCREEN_H

#include "Rect.h"
#include <deque>
#include <vector>
#include "TexRect.h"
#include "Shape.h"
#include "Sprite.h"

class endScreen : public Rect{

    Rect* blackScreenEND;

public:
    endScreen();

    void endScreenDraw();

    void renderText(std::string text, float x, float y, void* font , float r, float g, float b);


    ~endScreen();

};

#endif