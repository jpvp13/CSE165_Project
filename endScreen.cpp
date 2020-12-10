#include <iostream>
#include "endScreen.h"

#if defined WIN32
#include <freeglut.h>
#elif defined __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/freeglut.h>
#endif

endScreen::endScreen(){
    blackScreenEND = new Rect(-1.0, 1.0, 2.0, 2.0, 0.0, 0.0, 0.0);
}

void endScreen::endScreenDraw(){
    
    blackScreenEND->draw();
    
}

endScreen::~endScreen(){
    delete blackScreenEND;
    std::cout << "Deleting End Screen..." << std::endl;
}