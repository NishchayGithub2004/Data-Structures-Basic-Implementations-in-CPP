#include "B_plus.hpp"

void BPTree::borrowFromLeft(BPTreeNode* node, BPTreeNode* parent, int idx)
{
    BPTreeNode* leftSibling = parent->children[idx - 1];
    
    node->keys.insert(node->keys.begin(), parent->keys[idx - 1]);
    
    parent->keys[idx - 1] = leftSibling->keys.back();
    
    leftSibling->keys.pop_back();

    if (!node->isLeaf) 
    {
        node->children.insert(node->children.begin(), leftSibling->children.back());
        
        leftSibling->children.pop_back();
    }
}