#include "b.hpp"

int BTreeNode::searchKey(int key) 
{
    int idx = 0;
    
    while (idx < n && keys[idx] < key) ++idx;
    
    return idx;
}