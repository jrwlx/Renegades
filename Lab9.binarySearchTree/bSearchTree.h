//
//  bSearchTree.h
//  Lab9
//
//  Created by Jarren Jose on 12/3/20.
//

#ifndef bSearchTree_h
#define bSearchTree_h

#include "binaryTreeType.h"
#include <iostream>
#include <cassert>

using namespace std;

template <class elemType>
class bSearchTreeType: public binaryTreeType<elemType> {
public:
    bool search(const elemType& searchItem) const;
    void insert(const elemType& insertItem);
    void deleteNode(const elemType& deleteItem);
private:
    void deleteFromTree(binaryTreeNode<elemType>* &p);
};

template <class elemType>
bool bSearchTreeType<elemType>::search(const elemType& searchItem) const {
    
    binaryTreeNode<elemType> *current;
    bool found = false;
    
    if (this->root == NULL)
        std::cerr << "Cannot search the empty tree\n";
    else {
        current = this->root;
        while (current != NULL && !found) {
            if (current->info == searchItem)
                found = true;
            else if (current->info > searchItem)
                current = current->llink;
            else
                current = current->rlink;
        }
    }
    return found;
}

template <class elemType>
void bSearchTreeType<elemType>::insert (const elemType& insertItem) {
    binaryTreeNode<elemType> *current = NULL;
    binaryTreeNode<elemType> *trailCurrent = NULL;
    binaryTreeNode<elemType> *newNode = NULL; 

    newNode = new binaryTreeNode<elemType>;
    newNode->info = insertItem;
    newNode->llink = NULL;
    newNode->rlink = NULL;

    if (this->root == NULL)
        this->root = newNode;
    else {
        current = this->root;;

        while (current != NULL)
        {
            trailCurrent = current;

            if (current->info == insertItem)
            {
                cout << "The item to be inserted is already ";
                cout << "in the tree -- duplicates are not "
                     << "allowed." << endl;
                return;
            }
            else if (current->info > insertItem)
                current = current->llink;
            else
                current = current->rlink;
        }

        if (trailCurrent->info > insertItem)
            trailCurrent->llink = newNode;
        else
            trailCurrent->rlink = newNode;
    }
}

template <class elemType>
void bSearchTreeType<elemType>::deleteNode(const elemType& deleteItem) {
    binaryTreeNode<elemType> *current;
    binaryTreeNode<elemType> *trailCurrent;
    bool found = false;

    if (this->root == NULL)
        cout << "Cannot delete from an empty tree."
             << endl;
    else
    {
        current = this->root;
        trailCurrent = this->root;

        while (current != NULL && !found)
        {
            if (current->info == deleteItem)
                found = true;
            else
            {
                trailCurrent = current;

                if (current->info > deleteItem)
                    current = current->llink;
                else
                    current = current->rlink;
            }
        }

        if (current == NULL)
            cout << "The item to be deleted is not in the tree."
                 << endl;
        else if (found)
        {
            if (current == this->root)
                deleteFromTree(this->root);
            else if (trailCurrent->info > deleteItem)
                deleteFromTree(trailCurrent->llink);
            else
                deleteFromTree(trailCurrent->rlink);
        }
        else
            cout << "The item to be deleted is not in the tree."
                 << endl;
    }
}

template <class elemType>
void bSearchTreeType<elemType>::deleteFromTree(binaryTreeNode<elemType>* &p) {
    binaryTreeNode<elemType> *current;
    binaryTreeNode<elemType> *trailCurrent;
    binaryTreeNode<elemType> *temp;

    if (p == NULL)
        cout << "Error: The node to be deleted is NULL."
             << endl;
    else if (p->llink == NULL && p->rlink == NULL)
    {
        temp = p;
        p = NULL;
        delete temp;
    }
    else if (p->llink == NULL)
    {
        temp = p;
        p = temp->rlink;
        delete temp;
    }
    else if (p->rlink == NULL)
    {
        temp = p;
        p = temp->llink;
        delete temp;
    }
    else
    {
        current = p->llink;
        trailCurrent = NULL;

        while (current->rlink != NULL)
        {
            trailCurrent = current;
            current = current->rlink;
        }

        p->info = current->info;

        if (trailCurrent == NULL)
                               
            p->llink = current->llink;
        else
            trailCurrent->rlink = current->llink;

        delete current;
    }
}

#endif /* bSearchTree_h */
