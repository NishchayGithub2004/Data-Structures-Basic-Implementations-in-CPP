#include "b.hpp"

void BTreeNode::deleteKey(int key) 
{
    int idx = searchKey(key);

    if (idx < n && keys[idx] == key) 
    {
        if (isLeaf) 
        {
            removeFromLeaf(idx);
            std::cout << "\n" << key << " deleted successfully";
        }
        
        else 
        {
            removeFromNonLeaf(idx);
            std::cout << "\n" << key << " deleted successfully";
        }
    } 
    
    else 
    {
        if (isLeaf) 
        {
            std::cerr << "\n" << key << " not found in the tree";
            return;
        }

        bool shouldMerge = (idx == n) ? true : false;
        
        if (children[idx]->n < t) fill(idx);
        
        if (shouldMerge && idx > n) children[idx - 1]->deleteKey(key);
        
        else children[idx]->deleteKey(key);
    }
}