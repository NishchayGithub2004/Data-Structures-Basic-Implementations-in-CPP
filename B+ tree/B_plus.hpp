#ifndef BPLUS_HPP
#define BPLUS_HPP

#include<iostream>
#include<vector>
#include<algorithm>


class BPTreeNode
{
    public:
    
    bool isLeaf;
    std::vector<int> keys;
    std::vector<BPTreeNode*> children;
    BPTreeNode* next;

    BPTreeNode(bool leaf) : isLeaf(leaf), next(nullptr) {}
};

class BPTree
{
    private:

    BPTreeNode* root;
    
    int degree;

    void splitChild(BPTreeNode* parent, int index, BPTreeNode* child);

    void insertNonFull(BPTreeNode* node, int key);

    bool search(BPTreeNode* node, int key);

    void traverse(BPTreeNode* node);

    void borrowFromLeft(BPTreeNode* node, BPTreeNode* parent, int idx);

    void borrowFromRight(BPTreeNode* node, BPTreeNode* parent, int idx);

    void mergeWithLeft(BPTreeNode* node, BPTreeNode* parent, int idx);

    void mergeWithRight(BPTreeNode* node, BPTreeNode* parent, int idx);

    void handleUnderflow(BPTreeNode* parent, int idx);

    void deleteFromLeaf(BPTreeNode* node, int key, bool& found);

    void deleteFromInternal(BPTreeNode* node, int key, bool& found);

    void deleteKey(BPTreeNode* node, int key, BPTreeNode* parent = nullptr, int parentIdx = -1);

    public: BPTree(int t) : root(nullptr), degree(t) {}

    void insertValue(int key);
    
    void deleteValue(int key)
    {
        deleteKey(root, key);
    }

    void searchValue(int key);

    void traverse();
};

#endif