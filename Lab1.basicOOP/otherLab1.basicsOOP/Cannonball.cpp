/*
  authors:  Erick, Immad, Jarren, Tino
  program name: shoot cannonball application
  description: takes user input of angle and initial velocity
               and shoots the ball. then returns an the 
               coordinates of the ball after ever .5 secondsElapsed
               until the ball hits the ground
  date authored: 9/5/2020
*/

#include "Cannonball.h"
#include <cmath>

Cannonball::Cannonball(){ //constructor to initialize the data members in this class
  xCoordinate = 0;
  yCoordinate = 0;
}

void Cannonball::move(double time){ //this function will calculate the angular velocity of the cannonball //and then readjust the x and y coordinates 
  
  xCoordinate = dx * secondsElapsed; //x-position(m/s) of ball at given interval
  yCoordinate = dy * secondsElapsed + .5 * gravity * pow(secondsElapsed, 2); 
   //y-position(m/s) of ball at given interval 
}

void Cannonball::shoot(int a, double v){
  
  radians = a*3.14159/180; //calculation to make degrees into radians
  dx=v*cos(radians); //formula for x-velocity(m/s) of ball in terms of degrees
  dy=v*sin(radians); //formula for y-velocity(m/s) of ball in terms of degrees

  while (yCoordinate>=0){ //while the ball is up in the air and not touching the ground keep running this
  //loop

    move(interval); //how many interval you want the ball to move in
    std::cout << "elapsed seconds: " << secondsElapsed << std::endl; //show the total amount of seconds //did the ball move 
    std::cout <<"X coordinate: " << xCoordinate << std::endl; //show the position of where the xCoordinate //of the ball is at

    //stops printing y position of ball when it hits the ground, y = 0
    if(yCoordinate >= 0){
      std::cout <<"Y coordinate: " << yCoordinate <<std::endl;
    }else
    std::cout << "the ball hit the ground" << std::endl;
  
    std::cout <<std::endl;
    secondsElapsed += interval; //to properly update and total interval so position values are calculated at the right interval and displayed correctly
  }
}