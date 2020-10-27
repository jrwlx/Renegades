/*
  authors:  Erick, Immad, Jarren, Tino
  program name: shoot cannonball application
  description: takes user input of angle and initial velocity
               and shoots the ball. then returns an the 
               coordinates of the ball after ever .5 secondsElapsed
               until the ball hits the ground
  date authored: 9/5/2020
*/

#include <iostream>
#include "Cannonball.h"

int main(){
  
  // variables to hold user input
  int angle;
  double initialVelocity;

  // prompt user for input of angle for a projectile
  std::cout << "Please enter an angle for your projectile: " << std::endl;

  // store user input in angle
  std::cin >> angle;
  std::cout << std::endl;

  // prompt user for input of initial velocity for a projectile
  std::cout << "Please enter an initial velocity for your projectile: " << std::endl;

  // store user input in initialVelocity
  std::cin >> initialVelocity;
  std::cout << std::endl;

  // create cannonball object
  Cannonball ball1;
  
  // use shoot function to fire the cannonball with 
  // given angle and initial velocity
  ball1.shoot(angle, initialVelocity);

return 0;
}
