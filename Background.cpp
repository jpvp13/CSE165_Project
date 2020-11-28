#include <iostream>
#include "Background.h"
#include "GlutApp.h"


Background::Background(){

    grass = new TexRect("images/grass.png", -1.0, 0.3, 2.0, 0.7);
    streetT = new TexRect("images/street.png", -1.0, 0.8, 2.1, 0.5);
    streetB = new TexRect("images/street.png", -1.0, -0.29, 2.1, 0.5);
    river = new TexRect("images/Water.png", -1.0, 0.25, 2.1, 0.55);
    
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

Background::~Background(){   
    delete streetB;
    delete streetT;
    delete river;
    delete grass;
    
    std::cout << "Deleting Backgrounds..." << std::endl;
}