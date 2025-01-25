#include "B_plus.hpp"

void BPTree::mergeWithRight(BPTreeNode* node, BPTreeNode* parent, int idx)
{
    BPTreeNode* rightSibling = parent->children[idx + 1];
    
    node->keys.push_back(parent->keys[idx]);
    
    node->keys.insert(node->keys.end(), rightSibling->keys.begin(), rightSibling->keys.end());
    
    parent->keys.erase(parent->keys.begin() + idx);
    
    parent->children.erase(parent->children.begin() + idx + 1);

    if (!node->isLeaf) node->children.insert(node->children.end(), rightSibling->children.begin(), rightSibling->children.end());
    
    delete rightSibling;
}