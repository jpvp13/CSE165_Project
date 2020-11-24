// #include <iostream>
// // #include "App.h"
// #include "Entity.h"
// #include "GlutApp.h"


// #if defined WIN32
// #include <freeglut.h>
// #elif defined __APPLE__
// #include <GLUT/glut.h>
// #else
// #include <GL/freeglut.h>
// #endif


// // //! once i am happy that all objects work correctly and that there is a collision detection then
// // //! I can subsitute Rect with TexRect to give all these objects textures

// // Entity::Entity(){
// //     frog.push_front(new Rect(0.0, -0.8, 0.2, 0.2, 1, 1 ,1));
    
    
// //     log.push_front(new Rect(-0.5, 0.2, 0.3, 0.2, 0.82, 0.41 ,0.18));
// //     // log.push_back(new Rect(-0.3, -0.4, 0.3, 0.2, 1, 0, 0)); //how to create another object

// //     car.push_front(new Rect(0.5, 0.5, 0.2, 0.2, 0.44, 0.50, 0.56));

// //     truck.push_front(new Rect(0.5, 0.8, 0.2, 0.2, 0.6, 0.7, 0.66));
// //     // truck.push_back(new Rect(0.0, 0.6, 0.2, 0.2, 1, 0, 0)); //how to create another object

// //     river.push_front(new Rect(-1, 0.2, 5, 0.4, 0.0, 0.0, 1));       //! RIVER IS FRIENDLY

// //     street.push_front(new Rect(-0.3, -0.4, 0.3, 0.2, 1, 0, 0));
// // }

// // void Entity::playerDraw(){
// //     frog[0]->draw();
// // }

// // void Entity::logDraw(){
// //     log[0]->draw();
// //     // log[1]->draw(); //how to push new object on screen   //Update, possibly only 1 log will be drawn
// // }

// // void Entity::carDraw(){
// //     car[0]->draw();
// // }

// // void Entity::truckDraw(){
// //     truck[0]->draw();
// //     // truck[0]->draw();   //how to push new object on screen
// // }

// // void Entity::riverDraw(){
// //     river[0]->draw();
// // }

// // void Entity::streetDraw(){
// //     street[0]->draw();
// // }

// // void Entity::grassDraw(){
// //     grass[0]->draw();
// // }


// // void Entity::moveUp(){
// //     frog[0]->setY(frog[0]->getY() + 0.1);
// //     std::cout << "My X is " << frog[0]->getX() << " and my Y is " << frog[0]->getY() << std::endl;
// // }

// // void Entity::moveLeft(){
// //     frog[0]->setX(frog[0]->getX() - 0.1);
// //     std::cout << "My X is " << frog[0]->getX() << " and my Y is " << frog[0]->getY() << std::endl;
// // }

// // void Entity::moveRight(){
// //     frog[0]->setX(frog[0]->getX() + 0.1);
// //     std::cout << "My X is " << frog[0]->getX() << " and my Y is " << frog[0]->getY() << std::endl;
// // }

// // void Entity::moveDown(){
// //     frog[0]->setY(frog[0]->getY() - 0.1);
// //     std::cout << "My X is " << frog[0]->getX() << " and my Y is " << frog[0]->getY() << std::endl;
// // }





// // void Entity::collisionDetection(float x, float y){

// //     if((frog[0]->getY() >= log[0]->getY() - log[0]->getH() + 0.09) && (frog[0]->getY() - frog[0]->getH() <= log[0]->getY() - 0.09) &&   //!This is collision detection for log
// //     (frog[0]->getX() <= log[0]->getX() + log[0]->getW() - 0.09) && (frog[0]->getX() + frog[0]->getW() >= log[0]->getX() + 0.09)){
// //         std::cout << "Oops...I hit the river" << std::endl;

// //         std::cout << "I hit at X " << frog[0]->getX() << " and Y " << frog[0]->getY() << std::endl;
// //         exit(0);
        
// //     } else if((frog[0]->getY() >= car[0]->getY() - car[0]->getH() + 0.09) && (frog[0]->getY() - frog[0]->getH() <= car[0]->getY() - 0.09) &&    //!This is collision detection for car
// //     (frog[0]->getX() <= car[0]->getX() + car[0]->getW() - 0.09) && (frog[0]->getX() + frog[0]->getW() >= car[0]->getX() + 0.09)){
// //         std::cout << "Oops...I hit the car" << std::endl;

// //         std::cout << "I hit at X " << frog[0]->getX() << " and Y " << frog[0]->getY() << std::endl;
// //         exit(0);
        
// //     }else if((frog[0]->getY() >= truck[0]->getY() - truck[0]->getH() + 0.09) && (frog[0]->getY() - frog[0]->getH() <= truck[0]->getY() - 0.09) &&     //!This is collision detection for truck
// //     (frog[0]->getX() <= truck[0]->getX() + truck[0]->getW() - 0.09) && (frog[0]->getX() + frog[0]->getW() >= truck[0]->getX() + 0.09)){
// //         std::cout << "Oops...I hit the truck" << std::endl;

// //         std::cout << "I hit at X " << frog[0]->getX() << " and Y " << frog[0]->getY() << std::endl;
// //         exit(0);
        
// //     }

// // }
