#include "b.hpp"

void BTreeNode::fill(int idx) 
{
    if (idx != 0 && children[idx - 1]->n >= t) borrowFromPrev(idx);
    
    else if (idx != n && children[idx + 1]->n >= t) borrowFromNext(idx);
    
    else 
    {
        if (idx != n) merge(idx);
        
        else merge(idx - 1);
    }
}