#include "B_star.hpp"

void BSTreeNode::borrowFromNext(int idx)
{
    BSTreeNode* child = children[idx];
    
    BSTreeNode* sibling = children[idx + 1];

    child->keys.push_back(keys[idx]);
    
    if (!child->isLeaf) child->children.push_back(sibling->children.front());

    keys[idx] = sibling->keys.front();
    
    sibling->keys.erase(sibling->keys.begin());
    
    if (!sibling->isLeaf) sibling->children.erase(sibling->children.begin());
}