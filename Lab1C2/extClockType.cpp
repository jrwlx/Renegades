//extClockType.cpp
//Jarren Jose
//Lab 12C

#include "extClockType.hpp"
#include <stdio.h>
#include <iostream>
#include <string>

//constructor
extClockType::extClockType() {
    timeZone.empty();
}

//destructor
extClockType::~extClockType(){
    std:: cout << "Object is being deleted" << std::endl;
}

//sets time with time zone
void extClockType::setTimeZone(int hours, int minutes, int seconds, std::string zone) {
    clockType::setTime (hours, minutes, seconds);
    timeZone = zone;
}

//prints time with time zone
void extClockType::printTimeZone() {
    clockType::printTime();
    std::cout << " " << timeZone;
}


