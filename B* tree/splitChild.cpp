#include "B_star.hpp"

void BSTreeNode::splitChild(int i, BSTreeNode* y, int t)
{
    BSTreeNode* z = new BSTreeNode(y->isLeaf);
    
    z->keys.resize(t - 1);

    for (int j = 0; j < t - 1; j++) z->keys[j] = y->keys[j + t];

    if (!y->isLeaf) 
    {
        z->children.resize(t);
        
        for (int j = 0; j < t; j++) z->children[j] = y->children[j + t];
    }

    y->keys.resize(t - 1);
    
    children.insert(children.begin() + i + 1, z);
    
    keys.insert(keys.begin() + i, y->keys[t - 1]);
}