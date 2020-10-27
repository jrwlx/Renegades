//extClockType.cpp
//Jarren Jose
//Lab 12C

#ifndef extClockType_hpp
#define extClockType_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include "clockType.hpp"

class extClockType:public clockType {
public:
    extClockType(); //constructor
    ~extClockType(); //destructor
    void setTimeZone(int hours, int minutes, int seconds, std::string zone); //sets time with time zone
    void printTimeZone(); //prints time with time zone
    
private:
    std::string timeZone;
    
};

#endif /* extClockType_hpp */
