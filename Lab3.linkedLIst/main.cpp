//
//  main.cpp
//  Lab3
//
//  Created by Jarren Jose on 10/9/20.
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
    std::cout << std::endl;
    std::cout << "List: ";
    list.print();
    std::cout << std::endl;
    std::cout << "Length of the list: " << list.length() << std::endl;
    
    list.deleteLargest();
    
    std::cout << std::endl;
    
    std::cout << "List after deleting largest node: " << std::endl;
    list.print();
    std::cout << std::endl << std::endl;
    
    /*
    //Lab 3 Question 1
    list.deleteSmallest();
    
    std::cout << std::endl;
    
    std::cout << "List after deleting smallest node: " << std::endl;
    list.print();
    std::cout << std::endl << std::endl;
    
    std::cout << "Delete all occurences of: ";
    int x;
    std::cin >> x;
    //Lab 3 Question 2
    list.deleteAll(x);
    
    std::cout << "List after deleting all occurences: " << std::endl;
    list.print();
    std::cout << std::endl << std::endl;
     */
    return 0;
}



/*
 
 first->2->add, 5->add, 1->add
 
 *small = (first node address)
 *trailcurrent = (first node address)
 *current = (first node link address)
 
    FIRST ITERATION
 WHILE current is not equal to null {
    if 1 > 5 {
        does not execute
    }
 first node address = first node address
 current = second node address
 
 }
 
    SECOND ITERATION
 *current = seconde node address
 *trailcurrent = first node address
 *small = first node address
 trailsmall = null
 
 WHILE current is not equal to null {
    if 1 > 5 {
        does not execute
    }
 trailcurrent = second node address
 current = third node address
    
 }
 
 THIRD ITERATION
 *current = third node address
 *trailcurrent = secondd node address
 *small = first node address
 trailsmall = null
 
 WHILE current is not equal to null {
    if 2 > 1 {
    EXECUTE
    trail small = second node address
    small = third node address
    }
 trail current = third node address
 current = fourth node address which is null
 
 
WHILE LOOP STOPS because current = null
 *current = null
 *trailcurrent = third node address
 *small = third node address
 trailsmall = second node address
 
 if 1 = 2 {
    first = second node address
 }
 else {
 
 second node address holds null
 
    if third node address =  third node address {
        last = second node address 
 }
 
 delete small = first node address
 
 
 */

/*
 nodeType<Type> *current; //to traverse the list
 nodeType<Type> *previousCurrent; //pointer just before current
 nodeType<Type> *small; //to hold smallest node
 nodeType<Type> *previousSmall = nullptr; //pointer just before small

 if (this->first == NULL) {
     std::cout << "Cannot delete from an empty list." << std::endl;
 }

 //if list is not empty
 else {
     small = this->first;
     previousCurrent = this->first;
     current = this->first->link;
     
     //traverses linked list to find smallest node
     while (current != NULL) {
         if (small->info > current->info) {
             previousSmall = previousCurrent;
             small = current;
         }
         previousCurrent = current;
         current = current->link;
     }
     
     if (small == this->first) {
         this->first = this->first->link; //first points to second node
     }
     else {
         previousSmall->link = small->link;
         
         if (small == this->last)
             this->last = previousSmall; //last node is in right order
     }
     
     delete small;
 }
 
 
 
 nodeType<Type> *current;
 current = this->first;
 Type item = current->info;
 int count = 1;
 
 // move to next node of the list
 current = current->link;
 // find the smallest node
 while (current != NULL)
 {
     // find the number of same elements
     if (current->info == item)
         count++;
     // modify the smallest element
     if (item > current->info)
     {
         item = current->info;
         count = 1;
     } // end if
      
     current = current->link;
      
 } // end while
 for (int i = 0; i < count; i++)
     deleteNode(item);
 */
