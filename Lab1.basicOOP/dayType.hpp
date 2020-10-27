//Jarren Jose
//Lab 1
//dayType.hpp

#ifndef dayType_hpp
#define dayType_hpp

#include <iostream>
#include <string>

//class defintion

class dayType{
public:
    dayType(); //constructor
    ~dayType(); //destructor
    void setDay(std::string a); //sets day by asking user
    void printDay(); //displays day
    void setnextDay(); //updates day to be the following day
    void setpreviousDay(); //updates day to be the previous day
    void addingDay(int add); //updates day by asking user x amount of days to add to day
private:
    std::string daysofweek[7] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    std::string day;
    int i;
};

#endif
