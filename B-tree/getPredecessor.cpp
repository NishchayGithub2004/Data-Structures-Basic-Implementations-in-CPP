#include "b.hpp"

int BTreeNode::getPredecessor(int idx) 
{
    BTreeNode *current = children[idx];
    
    while (!current->isLeaf) current = current->children[current->n];
    
    return current->keys[current->n - 1];
}