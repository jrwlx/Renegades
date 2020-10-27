//Lab1C2
//Jarren Jose
//main.cpp

#include <iostream>
#include <string>
#include "clockType.hpp"
#include "extClockType.hpp"

int main(int argc, const char * argv[]) {
    
    clockType myClock;
    clockType yourClock;
    myClock.setTime(5, 2, 30);
    myClock.printTime();
    std::cout << std::endl;

    if (myClock.equalTime(yourClock)) {
        std::cout << "Clock Time is equal." << std::endl;
    }
    else {
        std::cout << "Clock Time is NOT equal." << std::endl;
    }
    
    std::cout << "End of Clock Test."  << std::endl;
    
    std::cout << std::endl;
    
    //Lab1C2
    std::cout << "extClockType implementation:" << std::endl;
    
    extClockType time1; //constructor called
    time1.setTimeZone(5, 10, 34, "CST");
    std::cout << "Time 1: ";
    time1.printTimeZone();
    std::cout << std::endl;
    
    extClockType time2; //constructor called
    time2.setTimeZone(12,59,45, "PST");
    std::cout << "Time 2 ";
    time2.printTimeZone();
    std::cout << std::endl;
    
    time2.incrementSeconds();
    std::cout << "After incrementing time2 by a second, Time 2: ";
    time2.printTime();
    std::cout << std::endl << std::endl;
    
    
    return 0;
}
