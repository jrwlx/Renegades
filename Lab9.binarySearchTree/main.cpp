//
//  main.cpp
//  Lab9
//
//  Created by Jarren Jose on 12/3/20.
//

#include <iostream>
#include "bSearchTree.h"

int main(int argc, const char * argv[]) {
    bSearchTreeType<int> tree;
    
    tree.insert(0);
    tree.insert(4);
    tree.insert(7);
    tree.insert(1);
    tree.insert(6);
    tree.insert(3);
    tree.insert(8);
    
    std::cout << "Inorder traversal: ";
    tree.inorderTraversal();
    std::cout << "\nPreorder traversal: ";
    tree.preorderTraversal();
    std::cout << "\nPostorder traversal: ";
    tree.postorderTraversal();
    std::cout << "\n\n";

    int b = 12;
    bool a = tree.search(b);
    std::cout << "Search: " << b;
    if (a == 1)
        std::cout << "\nItem found\n";
    else
        std::cout << "\nItem not found\n";

    return 0;
}
















// std::cout << "\nTree height:" << tree.treeHeight();
 //std::cout << "\nNodes:" << tree.treeNodeCount();
 //std::cout << "\nLeaves:" << tree.treeLeavesCount();
