#ifndef BSTAR_HPP
#define BSTAR_HPP

#include<iostream>
#include<vector>
#include<algorithm>

class BSTreeNode
{
    public:

    std::vector<int> keys;
    std::vector<BSTreeNode*> children;
    bool isLeaf;

    BSTreeNode(bool leaf) : isLeaf(leaf) {}

    void traverse();

    BSTreeNode* search(int key);

    void splitChild(int i, BSTreeNode* y, int t);

    void removeFromNode(int key, int t);

    void removeFromNonLeaf(int idx, int t);

    int getPredecessor(int idx);

    int getSuccessor(int idx);

    void fill(int idx, int t);

    void borrowFromPrev(int idx);

    void borrowFromNext(int idx);

    void merge(int idx);

    int findKey(int key) 
    {
        int idx = 0;
        
        while (idx < keys.size() && keys[idx] < key) idx++;
        
        return idx;
    }
};

class BSTree
{
    private:

    BSTreeNode* root;
    
    int t;

    public: BSTree(int t) : root(nullptr), t(t) {}

    void traverse();

    void insertValue(int value);

    void deleteValue(int value);

    void searchValue(int value);
};

#endif