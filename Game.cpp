#include <iostream>
#include "Game.h"
#include "StartScreen.h"

#if defined WIN32
#include <freeglut.h>
#elif defined __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/freeglut.h>
#endif

Game::Game(){

}

void Game::drawgame(){
    collisionState = false;
    show = false;
    startScreen = false;
    

    background->stagnantColor();
    background->riverDraw();
    background->streetDraw();
    background->gameArea();
    car->carDraw();
    log->logDraw();

    player->turtleDraw();     //need to print last so user shows up ontop of objects

    renderText("Starting Area", -0.2, -0.93,GLUT_BITMAP_TIMES_ROMAN_24, 0, 0, 0);
    renderText("Goal!", -0.02, 0.89, GLUT_BITMAP_TIMES_ROMAN_24, 0, 0, 0);

    

}

void Game::drawStartScreen(){
    

    //! make turle moving on menu screen

    

    start->screenDraw();

    // renderText("FROGGER CLONE", -0.3, 0.5,GLUT_BITMAP_TIMES_ROMAN_24, 1, 1, 1);
    // renderText("How to Play", -0.3, 0.89, GLUT_BITMAP_TIMES_ROMAN_24, 1, 1, 1);
    // renderText("Controls: 'w'-> UP | 'a'-> LEFT | 'd'-> RIGHT | 's'-> DOWN ", -0.3, 0.8,GLUT_BITMAP_TIMES_ROMAN_24, 1, 1, 1);

    startScreen = true;
    
    

}

void Game::handles(unsigned char key, float x, float y){  //this physically handles the frog moving during the game
    // startScreen = false;
    
    // if(key == 'r'){
    //     std::cout << "View yellow Car Position, X: " << car->yellowX() << ", Y: " << car->yellowY() << std::endl; 


    // }

    // if(key == 'l'){
    //     showGameFalse();
    // }
    if(startScreen == true){

    } 
    if( startScreen == false) {
        if(player->returnX() >= -1.0 && player->returnX() < 1.0){
            if(player->returnY() >= -1){

                switch(key){

                    case 'w':
                        if ( (handleYellowCollision(car->yellowX(), car->yellowY()) ) || (handleBlueCollision(car->blueX(), car->blueY()) ) ||
                        (handleGreenCollision(car->greenX(), car->greenY()) || (handleTruckCollision(car->truckX(), car->truckY()) ))) {
                            std::cout << "Oops...I hit some" << std::endl;

                            exit(0);

                        } else {
                                

                        player->moveUp();

                        

                        std::cout << "value of X from Game.cpp moveUp : " << player->returnX() << std::endl;
                        std::cout << "value of Y from Game.cpp moveUp : " << player->returnY() << std::endl;


                        
                        player->redraw();
                        }
                        break;

                    case 'a':
                        if ( (handleYellowCollision(car->yellowX(), car->yellowY()) ) || (handleBlueCollision(car->blueX(), car->blueY()) ) ||
                        (handleGreenCollision(car->greenX(), car->greenY()) || (handleTruckCollision(car->truckX(), car->truckY()) ))) {

                            std::cout << "Oops...I hit some" << std::endl;

                            exit(0);

                        } else{

                        player->moveLeft();
                        std::cout << "value of X from Game.cpp moveLeft : " << player->returnX() << std::endl;

                        player->redraw(); //this comes from newly created func in Rect
                        }
                        break;

                    case 'd':

                        if ( (handleYellowCollision(car->yellowX(), car->yellowY()) ) || (handleBlueCollision(car->blueX(), car->blueY()) ) ||
                        (handleGreenCollision(car->greenX(), car->greenY()) || (handleTruckCollision(car->truckX(), car->truckY()) ))) {

                            std::cout << "Oops...I hit some" << std::endl;

                            exit(0);

                        } else {

                        player->moveRight();

                        std::cout << "value of X from Game.cpp moveRight : " << player->returnX() << std::endl;

                        player->redraw();    //this comes from newly created func in Rect
                        }
                        break;

                    case 's':
                        if ( (handleYellowCollision(car->yellowX(), car->yellowY()) ) || (handleBlueCollision(car->blueX(), car->blueY()) ) ||
                        (handleGreenCollision(car->greenX(), car->greenY()) || (handleTruckCollision(car->truckX(), car->truckY()) ))) {

                            std::cout << "Oops...I hit some" << std::endl;

                            exit(0);

                        } else {

                        player->moveDown();
                        std::cout << "value of X from Game.cpp moveDown : " << player->returnX() << std::endl;

                        player->redraw();   //this comes from newly created func in Rec
                        }
                        break;
                }
            }
        }
    }
}

bool Game::handleYellowCollision(float Px, float Py){
    int x = car->yellowX();
    int y = car->yellowY();

    int w = car->yellowW();
    int h = car->yellowH();

        // if((car->containsYellow(player->returnX() + 0.0, player->returnY() - 0.25) == true)){
        if( (player->returnY() >= y - h + 0.1) && (player->returnY() - player->returnH() <= y + 0.2) &&
        (player->returnX() <= x + w - 0.1) && (player->returnX() + player->returnW() >= x - 0.2)) {
        // if((car->yellowY() >= player->returnY() - player->returnH() + 0.1) && (car->yellowY() - car->yellowH() <= player->returnY() + 0.15) &&
        // (car->yellowX() <= player->returnX() + player->returnW() + 0.05) && (car->yellowX() + car->yellowW() >= player->returnX() - 0.05)){ 
        

            std::cout << "I hit at X " << car->yellowX() << " and Y " << car->yellowY() << std::endl;
            return true;

        } else {
            std::cout << "I hit nothing" << std::endl;

            return false;
        }
}

bool Game::handleBlueCollision(float Px, float Py){
    int x = car->blueX();
    int y = car->blueY();

    int w= car->blueW();
    int h = car->blueH();
    // return false;

    // if((car->blueY() >= player->returnY() - player->returnH() + 0.1) && (car->blueY() - car->blueH() <= player->returnY() + 0.15) &&
    //     (car->blueX() <= player->returnX() + player->returnW() + 0.05) && (car->blueX() + car->blueW() >= player->returnX() - 0.05)){
    if( (player->returnY() >= y - h + 0.1) && (player->returnY() - player->returnH() <= y + 0.2) &&
    (player->returnX() <= x + w - 0.1) && (player->returnX() + player->returnW() >= x - 0.2)){
        

            std::cout << "I hit at X " << car->blueX() << " and Y " << car->blueY() << std::endl;
            return true;

        } else {
            std::cout << "I hit nothing" << std::endl;

            return false;
        }
}

bool Game::handleGreenCollision(float Px, float Py){
    int x = car->greenX();
    int y = car->greenY();

    int w= car->greenW();
    int h = car->greenH();
    // return false;

    // if((car->greenY() >= player->returnY() - player->returnH() + 0.1) && (car->greenY() - car->greenH() <= player->returnY() + 0.15) &&
    //     (car->greenX() <= player->returnX() + player->returnW() + 0.05) && (car->greenX() + car->greenW() >= player->returnX() - 0.05)){ 
    if( (player->returnY() >= y - h + 0.1) && (player->returnY() - player->returnH() <= y + 0.2) &&
        (player->returnX() <= x + w - 0.1) && (player->returnX() + player->returnW() >= x - 0.2)){
        

            std::cout << "I hit at X " << car->greenX() << " and Y " << car->greenY() << std::endl;
            return true;

        } else {
            std::cout << "I hit nothing" << std::endl;

            return false;
        }
}

bool Game::handleTruckCollision(float Px, float Py){
    int x = car->truckX();
    int y = car->truckY();

    int w= car->truckW();
    int h = car->truckH();
    // return false;

    // if((car->truckY() >= player->returnY() - player->returnH() + 0.1) && (car->truckY() - car->truckH() <= player->returnY() + 0.15) &&
    //     (car->truckX() <= player->returnX() + player->returnW() + 0.05) && (car->truckX() + car->truckW() >= player->returnX() - 0.05)){ 
    if( (player->returnY() >= y - h + 0.1) && (player->returnY() - player->returnH() <= y + 0.2) &&
        (player->returnX() <= x + w - 0.1) && (player->returnX() + player->returnW() >= x - 0.2)){
        

            std::cout << "I hit at X " << car->truckX() << " and Y " << car->truckY() << std::endl;
            return true;

        } else {
            std::cout << "I hit nothing" << std::endl;

            return false;
        }
}

Game::~Game(){   
    delete player;
    delete car;
    delete log;
    delete background;

    std::cout << "Deleting Game..." << std::endl;
}

bool Game::showGame(){
    return true;
}

bool Game::showGameFalse(){
    return false;
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