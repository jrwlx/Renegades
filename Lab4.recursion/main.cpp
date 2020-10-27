//
//  main.cpp
//  Lab4
//
//  Created by Jarren Jose on 10/17/20.
//

#include <iostream>

void stars(int a, int b);
int reverseDigits(int a, int& reversed);

int main(int argc, const char * argv[]) {
    
    std::cout << "Number of lines for star pattern: ";
    int a;
    std::cin >> a;
    stars(a,a);
    std::cout << "\n\n";
     
    
    std::cout << "Number to be reversed: ";
    int b;
    std::cin >> b;
    int c = 0;
    int  z = reverseDigits(b, c);
    std::cout << z << "\n"; 
    
    return 0;
}

















//Lab 4 Question 1
void stars(int a, int b) {
    if (a > 0) {
        std::cout << "\n";
        for (int i = 0; b - i >= a; i++)
            std::cout << "*";
        
        stars(a - 1, b);
        
        std::cout << "\n";
        for (int j = 0; b - j >= a; j++)
            std::cout << "*";
    }
}

//Lab 4 Question 2
int reverseDigits(int a, int& reversed) {
    if ( a > 0) {
        reversed = reversed * 10 + (a % 10);
        reverseDigits(a / 10, reversed);
    }
    return reversed;
}

