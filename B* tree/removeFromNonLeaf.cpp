#include "B_star.hpp"

void BSTreeNode::removeFromNonLeaf(int idx, int t)
{
    int key = keys[idx];

    if (children[idx]->keys.size() >= t) 
    {
        int pred = getPredecessor(idx);
        
        keys[idx] = pred;
        
        children[idx]->removeFromNode(pred, t);
    } 
    
    else if (children[idx + 1]->keys.size() >= t) 
    {
        int succ = getSuccessor(idx);
        
        keys[idx] = succ;
        
        children[idx + 1]->removeFromNode(succ, t);
    } 
    
    else 
    {
        merge(idx);
        
        children[idx]->removeFromNode(key, t);
    }
}