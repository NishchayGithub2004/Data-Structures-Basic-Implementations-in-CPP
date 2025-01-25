#include "B_star.hpp"

void BSTreeNode::merge(int idx)
{
    BSTreeNode* child = children[idx];
    
    BSTreeNode* sibling = children[idx + 1];

    child->keys.push_back(keys[idx]);
    
    child->keys.insert(child->keys.end(), sibling->keys.begin(), sibling->keys.end());

    if (!child->isLeaf) child->children.insert(child->children.end(), sibling->children.begin(), sibling->children.end());

    keys.erase(keys.begin() + idx);
    
    children.erase(children.begin() + idx + 1);

    delete sibling;
}