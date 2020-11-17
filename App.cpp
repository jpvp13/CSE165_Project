#include <iostream>
#include <deque>
#include "App.h"

#include "player.h"


App::App(int argc, char** argv, int width, int height, const char* title): GlutApp(argc, argv, width, height, title){

    // Pushing different kinds of Shape in the collection
    // shapes.push_back(new TexRect("Frogger_Sprites.png", -1, 1, 2, 2));
    // shapes.push_back(new Rect());
    // shapes.push_back(new Circle());
    // frog.push_back(new Rect());
    game = new Game();

} 

void App::draw() const {
    game->drawgame();
}

void App::keyDown(unsigned char key, float x, float y){
    if (key == 27){
        exit(0);
    }
}

App::~App(){   
    
    std::cout << "Exiting..." << std::endl;
}
