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
    
    // renderText("Game Over", -0.3, 0.5,GLUT_BITMAP_TIMES_ROMAN_24, 1, 1, 1);
    // renderText("Would You Like To Play Again?", -0.3, 0.89, GLUT_BITMAP_TIMES_ROMAN_24, 1, 1, 1);
    // renderText("Retry -> 'y' | End -> 'ESC' ", -0.3, 0.8,GLUT_BITMAP_TIMES_ROMAN_24, 1, 1, 1);

    blackScreenEND->draw();
    

}

endScreen::~endScreen(){
    delete blackScreenEND;
    std::cout << "Deleting End Screen..." << std::endl;
}

void endScreen::renderText(std::string text, float x, float y, void* font = GLUT_BITMAP_HELVETICA_18, float r = 1, float g = 1, float b = 1){
    glColor3f(r, g, b);
    float offset = 0;
    for (int i = 0; i < text.length(); i++) {
        glRasterPos2f(x+offset, y);
        glutBitmapCharacter(font, text[i]);
        int w = glutBitmapWidth(font, text[i]);
        offset += ((float)w / 600)*2;
    }
}