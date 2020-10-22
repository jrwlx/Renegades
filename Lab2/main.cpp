//Lab 2
//Jarren Jose
//main.cpp

#include <stdio.h>
#include <stdint.h>
#include <iostream>
#include "arrayListType.hpp"

int main(int argc, const char * argv[]) {
    
    arrayListType<int> intList(100);
     
    int counter;
    int number;
    int position;
     
    std::cout << "Enter 5 integers: " << std::endl;
     
    for (counter = 0; counter < 5; counter++) {
        std::cin >> number;
        intList.insertAt(counter, number);
    }
     
    std::cout << std::endl;
    std::cout << "The list you entered is: " << std::endl;
    intList.print();
    std::cout << std::endl;
    std::cout << "Enter the position of item to be deleted: ";
    std::cin >> position;
    intList.removeAt(position);
    
    std::cout << "After removing element at " << position << ", the list is:" << std::endl;
    
    intList.print();
    
    int a;
    std::cout << std::endl << "Calling removeAll:" << std::endl;
    std::cout << "Enter item to be removed: ";
    std::cin >> a;
    
    intList.removeAll(a);
    
    std::cout << "Current list after removing all occurences of " << a << std::endl;
    intList.print();
    
    std::cout << std::endl;
    
    return 0;
}
