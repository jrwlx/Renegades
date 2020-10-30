//
//  stackType.h
//  Lab5
//
//  Created by Jarren Jose on 10/22/20.
//

#ifndef stackType_h
#define stackType_h

#include "stackADT.h"

#include <iostream>
#include <cassert>

template <class Type>
class stackType: public stackADT<Type> {
public:
    const stackType<Type>& operator = (const stackType<Type>&);
    void initializeStack();
    bool isEmptyStack() const;
    bool isFullStack() const;
    void push(const Type& newItem);
    Type top() const;
    void pop();
    stackType(int stackSize = 100);
    stackType(const stackType<Type>& otherStack);
    ~stackType();
    //Lab 5 Question 1
    //copies elements into otherStack in reverse order

    void reverseStack(stackType<Type> &otherStack);
private:
    int maxStackSize;
    int stackTop;
    Type *list;
    
    void copyStack(const stackType<Type>& otherStack);
};

template <class Type>
const stackType<Type>& stackType<Type>::operator=(const stackType<Type> &otherStack) {
    if (this != &otherStack)
        copyStack(otherStack);
    return *this;
}
 

template <class Type>
void stackType<Type>::initializeStack() {
    stackTop = 0;
}

template <class Type>
bool stackType<Type>::isEmptyStack() const {
    return(stackTop == 0);
}

template <class Type>
bool stackType<Type>::isFullStack() const {
    return(stackTop == maxStackSize);
}

template <class Type>
void stackType<Type>::push(const Type& newItem) {
    if (!isFullStack()) {
        list[stackTop] = newItem;
        stackTop++;
    }
    else
        std::cout << "Cannot add to a full stack" << std::endl;
}

template <class Type>
Type stackType<Type>::top() const {
    //assert(stackTop != 0);
    return list[stackTop-1];
}

template <class Type>
void stackType<Type>::pop() {
    if (!isEmptyStack())
        stackTop--;
    else
        std::cout << "Cannot remove from an empty stack." << std::endl;
}

template <class Type>
stackType<Type>::stackType(int stackSize) {
    if (stackSize <= 0) {
        std::cout << "Size of array to hold stack must be positive" << std::endl;
        std::cout << "Creating an array size 100" << std::endl;
        maxStackSize = 100;
    }
    else
        maxStackSize = stackSize;
    
    stackTop = 0;
    list = new Type[maxStackSize];
}
 
template <class Type>
stackType<Type>::stackType(const stackType<Type>& otherStack) {
    list =  NULL;
    copyStack(otherStack);
}

template <class Type>
stackType<Type>::~stackType() {
    delete [] list;
}

template <class Type>
void stackType<Type>::copyStack(const stackType<Type>& otherStack) {
    delete [] list;
    maxStackSize = otherStack.maxStackSize;
    stackTop = otherStack.stackTop;
    
    list = new Type[maxStackSize];
    
    for(int j = 0; j < stackTop; j++) {
        list[j] = otherStack.list[j];
    }
}

template <class Type>
void stackType<Type>::reverseStack(stackType<Type> &otherStack) {
    int loop = stackTop;
    for (int a =  0; a < loop; a++) {
        otherStack.list[a] = list[stackTop-1];
        otherStack.stackTop++;
        stackTop--;
    }
}

#endif /* stackType_h */
