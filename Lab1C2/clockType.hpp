//Lab 1C2
//Jarren Jose
//clockType.hpp

#ifndef clockType_hpp
#define clockType_hpp

#include <stdio.h>
#include <string>

class clockType {
public:
    clockType(int hours, int minutes, int seconds);
    clockType();
    ~clockType(); // destructor
    void setTime(int hours, int minutes, int seconds);
    void getTime(int& hours, int& minutes, int& seconds) const;
    void printTime() const;
    void incrementSeconds();
    void incrementMinutes();
    void incrementHours();
    bool equalTime(const clockType& otherClock) const;
protected:
    int hr; //stores the hours
    int min; //store the minutes
    int sec; //store the seconds
};

#endif 
