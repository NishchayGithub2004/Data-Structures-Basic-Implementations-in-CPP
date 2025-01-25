#include "b.hpp"

void BTreeNode::splitChild(int i, BTreeNode *y) 
{
    BTreeNode *z = new BTreeNode(y->t, y->isLeaf);
    
    z->n = t - 1;

    for (int j = 0; j < t - 1; j++) z->keys[j] = y->keys[j + t];

    if (!y->isLeaf) 
    {
        for (int j = 0; j < t; j++) z->children[j] = y->children[j + t];
    }

    y->n = t - 1;

    for (int j = n; j >= i + 1; j--) children[j + 1] = children[j];
    
    children[i + 1] = z;

    for (int j = n - 1; j >= i; j--) keys[j + 1] = keys[j];

    keys[i] = y->keys[t - 1];
    
    n++;
}