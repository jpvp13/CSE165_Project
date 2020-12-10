#include <iostream>
#include <deque>
#include "App.h"


App::App(int argc, char** argv, int width, int height, const char* title): GlutApp(argc, argv, width, height, title){

    game = new Game();
    showGame = false;

} 

void App::draw() const {

    if(showGame == false){
        game->drawStartScreen();
        
        
    } else if( showGame == true){
        game->drawgame();
        
    }


}

void App::keyDown(unsigned char key, float x, float y){
    if (key == 27){
        exit(0);
    } else if( key == 'l'){
        showGame = true;
    }
    // } else if(key == 'y'){
    //     showGame = false;
    // }
    
    game->handles(key, x, y);
        
    
    
}

App::~App(){   
    delete game;
    
    std::cout << "Exiting..." << std::endl;
}
