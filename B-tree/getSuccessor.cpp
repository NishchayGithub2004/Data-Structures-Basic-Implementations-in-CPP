#include "b.hpp"

int BTreeNode::getSuccessor(int idx) 
{
    BTreeNode *current = children[idx + 1];
    
    while (!current->isLeaf) current = current->children[0];
    
    return current->keys[0];
}