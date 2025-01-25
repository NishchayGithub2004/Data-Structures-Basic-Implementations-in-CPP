#include "b.hpp"

void BTreeNode::traverse() 
{   
    for (int i = 0; i < n; i++) 
    {
        if (!isLeaf) children[i]->traverse();
        
        std::cout << keys[i] << " ";
    }
    
    if (!isLeaf) children[n]->traverse();
}