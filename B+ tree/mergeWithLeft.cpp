#include "B_plus.hpp"

void BPTree::mergeWithLeft(BPTreeNode* node, BPTreeNode* parent, int idx)
{
    BPTreeNode* leftSibling = parent->children[idx - 1];
    
    leftSibling->keys.push_back(parent->keys[idx - 1]);
    
    leftSibling->keys.insert(leftSibling->keys.end(), node->keys.begin(), node->keys.end());
    
    parent->keys.erase(parent->keys.begin() + idx - 1);
    
    parent->children.erase(parent->children.begin() + idx);

    if (!node->isLeaf) leftSibling->children.insert(leftSibling->children.end(), node->children.begin(), node->children.end());
    
    delete node;
}