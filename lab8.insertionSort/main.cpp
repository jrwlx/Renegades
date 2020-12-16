//
//  main.cpp
//  Lab8
//
//  Created by Jarren Jose on 11/22/20.
//

#include <iostream>
#include "unorderedLinkedList.h"

int main(int argc, const char * argv[]) {
    unorderedLinkedList<int> list;
    int num;
    std::cout << "Enter numbers ending with -999" << std::endl;
    std::cin >> num;
    while (num != -999) {
        list.insertLast(num);
        std::cin >> num;
    }
    std::cout << "\nList: ";
    list.print();
    std::cout << "\n";
    
    list.linkedInsertionSort(); //calling insertion sort
    
    std::cout << "\nList after Insertion Sort: ";
    list.print();
    std::cout << "\n\n";
    
    return 0;
}





