//Jarren Jose
//Lab 1
//main.cpp

#include <iostream>
#include "dayType.hpp"

int main(int argc, const char * argv[]) {
    
    dayType obj_dayType; //create object
    
    std::string whatDay;
    std::cout << "What is today?" << std::endl;
    std::cin >> whatDay;
    
    obj_dayType.setDay(whatDay);
    
    
    std::cout << "Next day: "; // << std::endl;
    obj_dayType.setnextDay();
    obj_dayType.printDay();
    
    std::cout << "Previous day: "; // << std::endl;
    obj_dayType.setpreviousDay();
    obj_dayType.printDay();

    int daysplus;
    std::cout << "Add to current day by how many days?" << std::endl;
    std::cin >> daysplus;
    
    obj_dayType.addingDay(daysplus);
    
    obj_dayType.printDay();
    
    return 0;
}
