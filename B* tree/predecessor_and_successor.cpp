#include "B_star.hpp"

int BSTreeNode::getPredecessor(int idx)
{
    BSTreeNode* current = children[idx];
    
    while (!current->isLeaf) current = current->children[current->keys.size()];
    
    return current->keys.back();
}

int BSTreeNode::getSuccessor(int idx)
{
    BSTreeNode* current = children[idx + 1];
    
    while (!current->isLeaf) current = current->children[0];
    
    return current->keys.front();
}