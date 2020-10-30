//
//  main.cpp
//  Lab5
//
//  Created by Jarren Jose on 10/22/20.
//

#include <iostream>
#include "stackType.h"

using std::cout;
using std::endl;

void testCopyConstructor(stackType<int> otherStack);

int main(int argc, const char * argv[]) {
    stackType<int> stack(50);
    stackType<int> temp(50);
    stackType<int> reverse(50);
    
    
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);
    
    temp.operator=(stack);
    
    cout << "Element at top of the stack: " << stack.top() << endl << endl;
    
    /*
    cout << "Elements: " << endl;
    while (!stack.isEmptyStack()) {
        cout << stack.top() << endl;
        stack.pop();
    }
    
    cout << endl;
    cout << "Stack full: " << stack.isFullStack() << endl;
    cout << "Stack empty: " << stack.isEmptyStack() << endl << endl;
    
    
    temp.reverseStack(reverse);
    
    cout << "Element at top of the stack: " << reverse.top() << endl << endl;

    cout << "Elements: " << endl;
    while (!reverse.isEmptyStack()) {
        cout << reverse.top() << endl;
        reverse.pop();
    }
    
    cout << endl;
    cout << "Stack full: " << reverse.isFullStack() << endl;
    cout << "Stack empty: " << reverse.isEmptyStack() << endl << endl;
    
    
*/
    return 0;
}


