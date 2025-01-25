#include "b.hpp"

void BTreeNode::removeFromLeaf(int idx) 
{
    for (int i = idx + 1; i < n; i++) keys[i - 1] = keys[i];
    
    n--;
}