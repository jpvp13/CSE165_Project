#include <iostream>
#include "Background.h"
#include "GlutApp.h"

#if defined WIN32
#include <freeglut.h>
#elif defined __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/freeglut.h>
#endif

Background::Background(){

    grass = new TexRect("images/grass.png", -1.0, 0.3, 2.0, 0.7);
    streetT = new TexRect("images/street.png", -1.0, 0.8, 2.1, 0.5);
    streetB = new TexRect("images/street.png", -1.0, -0.29, 2.1, 0.5);
    river = new TexRect("images/Water.png", -1.0, 0.25, 2.1, 0.55);
    youWin = new Rect(-1.0, 1.0, 2.0, 0.2, 0.0, 1.0, 0.0);
    start = new Rect(-1.0, -0.79, 2.0, 0.2, 0.50, 0.50, 0.50);
    
}

void Background::streetDraw(){
    streetB->draw();
    streetT->draw();
}

void Background::riverDraw(){
    river->draw();
}

void Background::stagnantColor(){
    grass->draw();
}

void Background::gameArea(){
    youWin->draw();
    start->draw();
}

Background::~Background(){   
    delete streetB;
    delete streetT;
    delete river;
    delete grass;
    delete youWin;
    delete start;
    
    std::cout << "Deleting Backgrounds..." << std::endl;
}