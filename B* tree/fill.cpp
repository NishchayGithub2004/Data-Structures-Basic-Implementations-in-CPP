#include "B_star.hpp"

void BSTreeNode::fill(int idx, int t)
{
    if (idx > 0 && children[idx - 1]->keys.size() >= t) borrowFromPrev(idx);
    
    else if (idx < keys.size() && children[idx + 1]->keys.size() >= t) borrowFromNext(idx);
    
    else 
    {
        if (idx < keys.size()) merge(idx);
        
        else merge(idx - 1);
    }
}