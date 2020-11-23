//
//  linkedQueueType.h
//  Lab6
//
//  Created by Jarren Jose on 11/4/20.
//

#ifndef linkedQueueType_h
#define linkedQueueType_h

#include "unorderedLinkedList.h"

template <class Type>
class linkedQueueType: public unorderedLinkedList<Type> {
public:
    void initializeQueue();
    bool isQueueEmpty() const;
    bool isQueueFull() const;
    void addQueue(const Type& newElement);
    Type front() const;
    Type back() const;
    void deleteQueue();
};


template <class Type>
void linkedQueueType<Type>::initializeQueue() {
    unorderedLinkedList<Type>::initializeList();
}

template <class Type>
bool linkedQueueType<Type>::isQueueEmpty() const {
    return unorderedLinkedList<Type>::isEmptyList();
}

template <class Type>
bool linkedQueueType<Type>::isQueueFull() const {
    return false;
}

template <class Type>
void linkedQueueType<Type>::addQueue(const Type& newElement) {
    nodeType<Type> *newNode;
    newNode = new nodeType<Type>;
    newNode->info = newElement;
    newNode->link = NULL;
    if (this->first == NULL) {
        this->first = newNode;
        this->last = newNode;
    }
    else {
        this->last->link = newNode;
        this->last = this->last->link;
    }
}

template <class Type>
Type linkedQueueType<Type>::front() const {
    assert(this->first != NULL);
    return this->first->info;
}

template <class Type>
Type linkedQueueType<Type>::back() const {
    assert(this->last != NULL);
    return this->last->info;
}

template <class Type>
void linkedQueueType<Type>::deleteQueue() {
    nodeType<Type> *temp;
    if (!isQueueEmpty()) {
        temp = this->first;
        this->first = this->first->link;
        delete temp;
        if (this->first == NULL) {
            this->last = NULL;
        }
    }
    else {
        std::cout << "Cannot remove from an empty queue\n";
    }
}

#endif /* linkedQueueType_h */
