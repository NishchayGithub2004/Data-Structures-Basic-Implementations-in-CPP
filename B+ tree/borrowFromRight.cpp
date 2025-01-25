#include "B_plus.hpp"

void BPTree::borrowFromRight(BPTreeNode* node, BPTreeNode* parent, int idx)
{
    BPTreeNode* rightSibling = parent->children[idx + 1];
    
    node->keys.push_back(parent->keys[idx]);
    
    parent->keys[idx] = rightSibling->keys.front();
    
    rightSibling->keys.erase(rightSibling->keys.begin());

    if (!node->isLeaf) 
    {
        node->children.push_back(rightSibling->children.front());
        
        rightSibling->children.erase(rightSibling->children.begin());
    }
}