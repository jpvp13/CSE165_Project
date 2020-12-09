#include <iostream>

#include "StartScreen.h"

#if defined WIN32
#include <freeglut.h>
#elif defined __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/freeglut.h>
#endif

static StartScreen* singleton;

void StartScreentimer(int id){
    singleton->turtleL->advance();
    singleton->turtleR->advance();
    singleton->redraw();

    if(singleton->turtleL->isDone()){
        singleton->turtleL->reset();
    }
    if(singleton->turtleR->isDone()){
        singleton->turtleR->reset();
    }

    glutTimerFunc(singleton->turtleInterval, StartScreentimer, id);
}


StartScreen::StartScreen(){
    blackScreen = new Rect(-1.0, 1.0, 2.0, 2.0, 0.0, 0.0, 0.0);
    menu = new TexRect("images/TurtlerMenu.png", -1.0 , 1.0, 1.9, 1.9);
    turtleL = new Sprite("images/turtleSprite.png", 1,4, -0.9, 0.5, 0.2, 0.2);
    turtleR = new Sprite("images/turtleSprite.png", 1,4, 0.6, 0.5, 0.2, 0.2);

    singleton = this;
    turtleInterval = 250;
    StartScreentimer(1);
}

void StartScreen::screenDraw(){
    
    blackScreen->draw();
    turtleL->draw();
    turtleR->draw();
    menu->draw();

}

StartScreen::~StartScreen(){
    delete menu;
    delete blackScreen;
    delete turtleL;
    delete turtleR;
    std::cout << "Deleting Menu ..." << std::endl;
}

