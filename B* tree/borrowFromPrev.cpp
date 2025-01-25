#include "B_star.hpp"

void BSTreeNode::borrowFromPrev(int idx)
{
    BSTreeNode* child = children[idx];
    
    BSTreeNode* sibling = children[idx - 1];

    child->keys.insert(child->keys.begin(), keys[idx - 1]);
    
    if (!child->isLeaf) child->children.insert(child->children.begin(), sibling->children.back());

    keys[idx - 1] = sibling->keys.back();
    
    sibling->keys.pop_back();
    
    if (!sibling->isLeaf) sibling->children.pop_back();
}