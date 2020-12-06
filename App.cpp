#include <iostream>
#include <deque>
#include "App.h"




App::App(int argc, char** argv, int width, int height, const char* title): GlutApp(argc, argv, width, height, title){

    game = new Game();
    showGame = false;
    

} 

void App::draw() const {
        if(showGame == false){
            std::cout << "showing black screen from APP" << std::endl;
            game->drawStartScreen();
            

        } else if( showGame == true) {
            game->drawgame();
        }
}

void App::keyDown(unsigned char key, float x, float y){
    if (key == 27){
        exit(0);
    }
    if( key == 'l'){
        showGame = true;
        std::cout << "changing the status to start game" << std::endl;
    }
        std::cout << "just running the game" << std::endl;
        game->handles(key, x, y);

    
    
}

App::~App(){   
    delete game;
    
    std::cout << "Exiting..." << std::endl;
}
