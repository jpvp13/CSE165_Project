#include <iostream>
#include "Game.h"


#if defined WIN32
#include <freeglut.h>
#elif defined __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/freeglut.h>
#endif

Game::Game(){
   
    startScreen = true;
    drawwin = false;
    drawlose = false;
    repeat = false;

    player = new Player;
    log = new logObj;
    car = new carObj;
    background = new Background;
    start = new StartScreen;

}

void Game::drawgame(){
    
    if(startScreen == true){
        drawStartScreen();
        startScreen = false;
    } 

//###########working##################
    if(startScreen == false){
        background->stagnantColor();
        background->riverDraw();
        background->streetDraw();
        background->startArea();
        background->winArea();
        car->carDraw();
        log->logDraw();

        player->turtleDraw();     //need to print last so user shows up ontop of objects

        renderText("Starting Area", -0.2, -0.93,GLUT_BITMAP_TIMES_ROMAN_24, 0, 0, 0);
        renderText("Goal!", -0.02, 0.89, GLUT_BITMAP_TIMES_ROMAN_24, 0, 0, 0);


        if(drawwin == true){        //prints win screen
            drawEndWin();
        }

        if(drawlose == true){       //pring lose screen
            drawEndLost();
        }
    }
    //#######################################

    

}

void Game::drawEndLost(){
    start->blackDraw();

    renderText("Game Over", -0.25, 0.2,GLUT_BITMAP_TIMES_ROMAN_24, 1, 1, 1);
    renderText("Would You Like To Play Again?", -0.6, -0.1, GLUT_BITMAP_TIMES_ROMAN_24, 1, 1, 1);
    renderText("Press -> 'ESC'<- to exit, then reload to play again! ", -0.8, -0.4,GLUT_BITMAP_TIMES_ROMAN_24, 1, 1, 1);
}

void Game::drawEndWin(){
    start->blackDraw();

    renderText("You Win!", -0.25, 0.2,GLUT_BITMAP_TIMES_ROMAN_24, 1, 1, 1);
    renderText("Would You Like To Play Again?", -0.6, -0.1, GLUT_BITMAP_TIMES_ROMAN_24, 1, 1, 1);
    renderText("Press -> 'ESC'<- to exit, then reload to play again!", -0.8, -0.4,GLUT_BITMAP_TIMES_ROMAN_24, 1, 1, 1);
}

void Game::drawStartScreen(){
    start->screenDraw();
}


void Game::handles(unsigned char key, float x, float y){  //this physically handles the frog moving during the game

        switch(key){
            
            case 'w':

                player->moveUp();

                if(handleWinArea() == true){
                    //change state to win and display win screen
                    std::cout << "I win :)" << std::endl;
                    
                    drawwin = true;
                    break;

                } else if(handleYellowCollision() == true || handleBlueCollision() == true || 
                    handleGreenCollision() == true || handleTruckCollision() == true ||
                    handleTopLogCollision() == true || handleBottomLogCollision() == true){

                    drawlose = true;
                    break;
                
                }
                
                player->redraw();
                break;

            case 'a':

                player->moveLeft();

                // if(handleWinArea() == true){
                //     showWin = true;
                //     drawgame();

                // } else {

                    if(handleYellowCollision() == true || handleBlueCollision() == true || 
                        handleGreenCollision() == true || handleTruckCollision() == true ||
                        handleTopLogCollision() == true || handleBottomLogCollision() == true){

                        drawlose = true;
                        break;
                    
                    }
                // }

                player->redraw(); //this comes from newly created func in Rect
                // }
                break;

            case 'd':

                player->moveRight();

                // if(handleWinArea() == true){
                //     //change state to win and display win screen
                //     std::cout << "I win :)" << std::endl;
                //     showWin = true;
                //     // endState = true;
                //     drawgame();
                // } else {

                    if(handleYellowCollision() == true || handleBlueCollision() == true || 
                        handleGreenCollision() == true || handleTruckCollision() == true ||
                        handleTopLogCollision() == true || handleBottomLogCollision() == true){

                        drawlose = true;
                        break;
                    
                    }
                // }

                player->redraw();    //this comes from newly created func in Rect
                break;

            case 's':

                player->moveDown();

                // if(handleWinArea() == true){
                //     //change state to win and display win screen
                //     showWin = true;
                //     drawgame();
                // } else {

                    if(handleYellowCollision() == true || handleBlueCollision() == true || 
                        handleGreenCollision() == true || handleTruckCollision() == true ||
                        handleTopLogCollision() == true || handleBottomLogCollision() == true){
 
                        drawlose = true;
                        break;
                    
                    }
                // }

                player->redraw();   //this comes from newly created func in Rec
                break;
        }
}

// void Game::resetPlayer(){
//     player->setY(player->getY() -1.7);
// }

bool Game::handleWinArea(){
    if( (player->returnY() >= 0.85) && player->returnY() <= 1 ){
        std::cout << "I Win!" << std::endl;
        return true;
    } else {
        return false;
    }
}


bool Game::handleYellowCollision(){

    if( (player->returnY() >= car->yellowY() - car->yellowH() + 0.05 ) && (player->returnY() - player->returnH() <= car->yellowY() - 0.05) && 
        (player->returnX() <= car->yellowX() + car->yellowW() + 0.05 ) && (player->returnX() + player->returnW() >= car->yellowX() - 0.05) ){
        std::cout << "Yellow Car Hit" << std::endl;
        return true;
    } else {
        return false;
    }
}


bool Game::handleBlueCollision(){

    if( (player->returnY() >= car->blueY() - car->blueH() + 0.05  ) && (player->returnY() - player->returnH() <= car->blueY() - 0.05) && 
        (player->returnX() <= car->blueX() + car->blueW() + 0.05  ) && (player->returnX() + player->returnW() >= car->blueX() - 0.05) ){
            std::cout << "Blue Car Hit" << std::endl;
            return true;
        } else {
        return false;
    }
}

bool Game::handleGreenCollision(){
    
    if( (player->returnY() >= car->greenY() - car->greenH() + 0.05  ) && (player->returnY() - player->returnH() <= car->greenY() - 0.05) && 
        (player->returnX() <= car->greenX() + car->greenW() + 0.05  ) && (player->returnX() + player->returnW() >= car->greenX() - 0.05) ){
        std::cout << "green Car Hit" << std::endl;
        return true;
    } else {
        return false;
    }
}




bool Game::handleTruckCollision(){
    
    if( (player->returnY() >= car->truckY() - car->truckH() + 0.05  ) && (player->returnY() - player->returnH() <= car->truckY() - 0.05) && 
        (player->returnX() <= car->truckX() + car->truckW() + 0.05  ) && (player->returnX() + player->returnW() >= car->truckX() - 0.05) ){
            std::cout << "truck Hit" << std::endl;
            return true;
    } else {
        return false;
    }
}

bool Game::handleBottomLogCollision(){

    if( (player->returnY() >= log->logBottomY() - log->logBottomH() + 0.05  ) && (player->returnY() - player->returnH() <= log->logBottomY() - 0.05) && 
        (player->returnX() <= log->logBottomX() + log->logBottomW() + 0.05  ) && (player->returnX() + player->returnW() >= log->logBottomX() - 0.05) ){
        std::cout << "Bottom log Hit" << std::endl;
        return true;
    } else {
        return false;
    }

}


bool Game::handleTopLogCollision(){
    if( (player->returnY() >= log->logTopY() - log->logTopH() - 0.05  ) && (player->returnY() - player->returnH() <= log->logTopY() + 0.01) && 
        (player->returnX() <= log->logTopX() + log->logTopW() - 0.05  ) && (player->returnX() + player->returnW() >= log->logTopX() + 0.01) ){
        std::cout << "Top Log Hit" << std::endl;
        return true;
    } else {
        return false;
    }
}

void Game::renderText(std::string text, float x, float y, void* font = GLUT_BITMAP_HELVETICA_18, float r = 1, float g = 1, float b = 1){
    glColor3f(r, g, b);
    float offset = 0;
    for (int i = 0; i < text.length(); i++) {
        glRasterPos2f(x+offset, y);
        glutBitmapCharacter(font, text[i]);
        int w = glutBitmapWidth(font, text[i]);
        offset += ((float)w / 600)*2;
    }
}

Game::~Game(){   
    delete player;
    delete car;
    delete log;
    delete background;

    std::cout << "Deleting Game..." << std::endl;
}