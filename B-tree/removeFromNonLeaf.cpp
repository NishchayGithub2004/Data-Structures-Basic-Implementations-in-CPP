#include "b.hpp"

void BTreeNode::removeFromNonLeaf(int idx) 
{
    int key = keys[idx];
    
    if (children[idx]->n >= t) 
    {
        int predecessor = getPredecessor(idx);
        
        keys[idx] = predecessor;
        
        children[idx]->deleteKey(predecessor);
    }
    
    else if (children[idx + 1]->n >= t) 
    {
        int successor = getSuccessor(idx);
        
        keys[idx] = successor;
        
        children[idx + 1]->deleteKey(successor);
    }
    
    else 
    {
        merge(idx);
        
        children[idx]->deleteKey(key);
    }
}