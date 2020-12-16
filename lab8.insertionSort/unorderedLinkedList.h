//
//  unorderedLinkedList.h
//  Lab8
//
//  Created by Jarren Jose on 11/22/20.
//

#ifndef unorderedLinkedList_h
#define unorderedLinkedList_h

#include "linkedListType.h"
#include <iostream>

template <class Type>
class unorderedLinkedList: public linkedListType<Type> {
public:
    bool search(const Type& searchItem) const;
    void insertFirst(const Type& newItem);
    void insertLast(const Type& newItem);
    void deleteNode(const Type& deleteItem);
    void deleteSmallest();   //Find and delete the node with the smallest info
    void deleteAll(const Type& deleteItem);   //Delete all occurences of a given element
    void deleteLargest(); //Find and delete the node with the largest info
    void linkedInsertionSort(); //Lab 8
};

//Lab 8 Insertion Sort
template <class Type>
void unorderedLinkedList<Type>::linkedInsertionSort() {
    nodeType<Type> *lastInOrder;
    nodeType<Type> *firstOutOfOrder;
    nodeType<Type> *current;
    nodeType<Type> *trailCurrent;
    lastInOrder = this->first;
    
    if (this->first == NULL)
        std::cerr << "Cannot sort an empty list.\n";
    else if (this->first->link == NULL)
        std::cout << "It is already in order\n";
    else
        while (lastInOrder->link != NULL) {
            firstOutOfOrder = lastInOrder->link;
            if (firstOutOfOrder->info < this->first->info) {
                lastInOrder->link = firstOutOfOrder->link;
                firstOutOfOrder->link = this->first;
                this->first = firstOutOfOrder;
            }
            else {
                trailCurrent = this->first;
                current = this->first->link;
                while (current->info < firstOutOfOrder->info) {
                    trailCurrent = current;
                    current = current->link;
                }
                if (current != firstOutOfOrder) {
                    lastInOrder->link = firstOutOfOrder->link;
                    firstOutOfOrder->link = current;
                    trailCurrent->link = firstOutOfOrder;
                }
                else
                    lastInOrder = lastInOrder->link;
            }
        }
}

template <class Type>
bool unorderedLinkedList<Type>::search(const Type& searchItem) const {
    
    nodeType<Type> *current;
    bool found = false;
    
    current = this->first;
    
    while (current != NULL && !found)
        if (current->info == searchItem)
            found = true;
        else
            current = current->link;
    
    return found;
}

template <class Type>
void unorderedLinkedList<Type>::insertFirst(const Type& newItem) {
    
    nodeType<Type> *newNode;
    
    newNode = new nodeType<Type>;
    
    newNode->info = newItem;
    newNode->link = this->first;
    this->first = newNode;
    
    this->count++;
    
    if (this->last == NULL)
        this->last = newNode;
}

template <class Type>
void unorderedLinkedList<Type>::insertLast(const Type& newItem) {
    
    nodeType<Type> *newNode;
    
    newNode = new nodeType<Type>;
    
    newNode->info = newItem;
    newNode->link = NULL;
    
    if (this->first == NULL) {
        this->first = newNode;
        this->last = newNode;
        this->count++;
    }
    else {
        this->last->link = newNode;
        this->last = newNode;
        this->count++;
    }
}

template <class Type>void unorderedLinkedList<Type>::deleteNode(const Type& deleteItem) {
    
    nodeType<Type> *current;
    nodeType<Type> *trailCurrent;
    bool found;
    
    if (this->first == NULL)
        std::cout << "Cannot delete from an empty list." << std::endl;
    else {
        if (this->first->info == deleteItem) {
            current = this->first;
            this->first = this->first->link;
            this->count--;
            if (this->first == NULL)
                this->last = NULL;
            delete current;
        }
        else {
            found = false;
            trailCurrent = this->first;
            current = this->first->link;
            while (current != NULL && !found) {
                if (current->info != deleteItem) {
                    trailCurrent = current;
                    current = current-> link;
                }
                else
                    found = true;
            }
            if (found) {
                trailCurrent->link = current->link;
                this->count--;
                if (this->last == current)
                    this->last = trailCurrent;
                delete current;
            }
            //else
              //  std::cout << "The item to be deleted is not in the list." << std::endl;
        }
    }
}

//Lab 3 Question 1
template <class Type>
void unorderedLinkedList<Type>::deleteSmallest() {
    //if list is empty
    if (this->first == NULL) {
        std::cout << "Cannot delete from an empty list." << std::endl;
    }
    else {
        nodeType<Type> *current;
        current = this->first;
        Type item = current->info;
    
        current = current->link;
    
        //to find smallest element
        while (current != NULL) {
            if (item > current->info) {
                item = current->info;
            }
            current = current->link;
        }
        deleteNode(item);
    }
}

//Lab 3 Question 2
template <class Type>
void unorderedLinkedList<Type>::deleteAll(const Type& deleteItem) {
    //if list is empty
    if (this->first == NULL) {
        std::cout << "Cannot delete from an empty list." << std::endl;
    }
    else {
        nodeType<Type> *current;
        current = this->first;
    
        //deleting all occurences of a given element
        while (current != NULL) {
            deleteNode(deleteItem);
            current = current->link;
        }
    }
}

//Classwork
template <class Type>
void unorderedLinkedList<Type>::deleteLargest() {
    //if list is empty
    if (this->first == NULL) {
        std::cout << "Cannot delete from an empty list." << std::endl;
    }
    else {
        nodeType<Type> *current;
        current = this->first;
        Type item = current->info;
    
        current = current->link;
    
        //to find largest element
        while (current != NULL) {
            if (item < current->info) {
                item = current->info;
            }
            current = current->link;
        }
        deleteNode(item);
    }
}



#endif /* unorderedLinkedList_h */
