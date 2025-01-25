#ifndef B_HPP
#define B_HPP

#include<iostream>
#include<vector>
#include<algorithm>

class BTreeNode
{
    public:

    int *keys;
    int t;
    BTreeNode **children;
    int n;
    bool isLeaf;

    BTreeNode(int _t, bool _isLeaf);

    void traverse();
    void insertNonFull(int key);
    void splitChild(int i, BTreeNode *y);
    void deleteKey(int key);
    int searchKey(int key);
    void removeFromLeaf(int idx);
    void removeFromNonLeaf(int idx);
    int getPredecessor(int idx);
    int getSuccessor(int idx);
    void merge(int idx);
    void borrowFromPrev(int idx);
    void borrowFromNext(int idx);
    void fill(int idx);
};

class BTree
{
    public:

    BTreeNode* root;
    int t;

    BTree(int _t) 
    {
        root = nullptr;
        t = _t;
    }

    void traverse() 
    {   
        if (root != nullptr) 
        {
            std::cout << "\nNodes in the tree are : ";
            root->traverse();
        }

        else std::cout << "\nTree is empty";
    }

    void insertValue(int key);
    void deleteValue(int key);
    void searchValue(int key);
};

#endif