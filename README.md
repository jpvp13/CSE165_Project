### Objective
The purpose of this project was the implement newly learned methods and conpcepts that were learned within CSE 165 Object Oriented Programming during Fall 2020 at UC Merced. Within this project there are elements of inheritance, abstraction, general Object Oriented practices. This was all coded in C++ while using the OpenGl Librarys.

The all repo history along with physical implementations were done by the owner of this repository.

## Project Information
This project is a cone of Konami's Frogger, released Oct 23, 1981 in North America. The changes I made include using a sprite of a 8-bit style turtle (Hence calling my game turtler) and only parts of the original games sprites are the cars and logs, which are remakes of the originals. Credits are in another document within my repo.


# Installation Instructions

## Windows Users

This project can only run in your Linux subsystem (Ubuntu Shell), not natively in Windows.

- Update your apt repositories: `sudo apt update`
- Install freeglut: `sudo apt install freeglut3-dev`
- Install xming (https://sourceforge.net/projects/xming/)
- Set display environment variable: `echo "export DISPLAY=localhost:0.0" >> ~/.bashrc`
- Relaunch your VS Code

## Linux Users

If you are running Linux natively (not the Ubuntu Shell under Windows)

- Update your apt repositories: `sudo apt update`
- Install freeglut: `sudo apt install freeglut3-dev`

## Mac Users

On a Mac, the project just works

# Running the App

After all dependencies above have been installed, navigate to the project folder and:

- Compile: `make`

- Run: `./glutapp`
