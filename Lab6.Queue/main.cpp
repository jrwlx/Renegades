//
//  main.cpp
//  Lab6
//
//  Created by Jarren Jose on 11/4/20.
//

#include <iostream>
#include "linkedQueueType.h"

int main(int argc, const char * argv[]) {
    
    
    linkedQueueType<int> queue;
    linkedQueueType<int> copyQueue;
    
    
    int num;
    std::cout << "Queue Operations\n";
    std::cout << "Enter numbers ending with -999\n";
    std::cin >> num;
    while (num != -999) {
        queue.addQueue(num);
        std::cin >> num;
    }
    copyQueue = queue;

    std::cout << "Queue: ";
    while (!queue.isQueueEmpty()) {
        std::cout << queue.front() << " ";
        queue.deleteQueue();
    }
    std::cout << "\n";
    std::cout << "copyQueue: ";
    while (!copyQueue.isQueueEmpty()) {
        std::cout << copyQueue.front() << " ";
        copyQueue.deleteQueue();
    }
    std::cout << "\n";

    
    
    return 0;
}
