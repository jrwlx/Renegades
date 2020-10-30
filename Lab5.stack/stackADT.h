//
//  stackADT.h
//  Lab5
//
//  Created by Jarren Jose on 10/22/20.
//

#ifndef stackADT_h
#define stackADT_h

template <class Type>
class stackADT {
public:
    virtual void initializeStack() = 0;
    virtual bool isEmptyStack() const = 0;
    virtual bool isFullStack() const = 0;
    virtual void push(const Type& newItem) = 0;
    virtual Type top() const = 0;
    virtual void pop() = 0;
    
};


#endif /* stackADT_h */
