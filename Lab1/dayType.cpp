//Jarren Jose
//Lab 1
//dayType.cpp

#include "dayType.hpp"
 
//member class functions defintions

//constructor
dayType::dayType() {
    day.empty();
    i = 0;
}

//destructor
dayType::~dayType(){
    std::cout << std::endl << "Destructor called" << std::endl;
}
 
//sets day equal to corresponding daysofweek array
//set i to index manipulate later
void dayType::setDay(std::string a) {
    if (a == "Sunday") {
        day = daysofweek[0];
        i = 0;
    }
    else if (a == "Monday") {
        day = daysofweek[1];
        i = 1;
    }
    else if (a == "Tuesday") {
        day = daysofweek[2];
        i = 2;
    }
    else if (a == "Wednesday") {
        day = daysofweek[3];
        i = 3;
    }
    else if (a == "Thursday") {
        day = daysofweek[4];
        i = 4;
    }
    else if (a == "Friday") {
        day = daysofweek[5];
        i = 5;
    }
    else if (a == "Saturday") {
        day = daysofweek[6];
        i = 6;
    }
}

//displays day
void dayType::printDay() {
    std::cout << day << std::endl;
}

void dayType::setnextDay() {
    int next = (1 + i) % 7;
    day = daysofweek[next];
}

void dayType::setpreviousDay() {
    if (i == 0){
        int previous = abs((7 - 1)) % 7;
        day = daysofweek[previous];
    }
    else {
        int previous = abs((i - 1)) % 7;
        day = daysofweek[previous];
    }
}

void dayType::addingDay(int add){
    //in order to keep index between 0-7,
    int result = (add + i) % 7;
    //modulo operator to get remainder
    //because there are only 7 types of days 
    day = daysofweek[result];
}

