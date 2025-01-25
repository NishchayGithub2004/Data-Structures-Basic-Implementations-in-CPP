#include "b.hpp"

void BTreeNode::insertNonFull(int key) 
{
    int i = n - 1;

    if (isLeaf) 
    {
        while (i >= 0 && keys[i] > key) 
        {
            keys[i + 1] = keys[i];
            
            i--;
        }
        
        keys[i + 1] = key;
        
        n++;
    } 
    
    else 
    {
        while (i >= 0 && keys[i] > key) i--;
        
        if (children[i + 1]->n == 2 * t - 1) 
        {
            splitChild(i + 1, children[i + 1]);
            
            if (keys[i + 1] < key) i++;
        }
        
        children[i + 1]->insertNonFull(key);
    }
}