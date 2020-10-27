/*
  authors:  Erick, Immad, Jarren, Tino
  program name: shoot cannonball application
  description: takes user input of angle and initial velocity
               and shoots the ball. then returns an the 
               coordinates of the ball after ever .5 secondsElapsed
               until the ball hits the ground
  date authored: 9/5/2020
*/

#ifndef CANNONBALL_H
#define CANNONBALL_H

#include <iostream>
#include <cmath>

class Cannonball
{
public:
 
  Cannonball(); //constructor that creates the cannonballs coordinates
  void move(double); //tracks the x and y position of the cannonball
  void shoot(int a, double v); /*takes the users input for angle and velocity and calculates its trajectory*/

private:

   /* we choose double so we can more accurately track the x and y location of the
   cannonball and allow the physics formula to work better */

   double xCoordinate; 
   double yCoordinate;
   double dx; //horizonatl velocity
   double dy; // veritcal velocity
   double gravity = -9.81; // constant for function members to use
   double interval = .5;  // constant interval in seconds 
   double secondsElapsed = 0; // to hold duration of flight in seconds
   double radians; // used to convert degrees to radians
  
};

#endif
