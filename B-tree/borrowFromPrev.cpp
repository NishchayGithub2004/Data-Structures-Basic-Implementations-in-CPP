#include "b.hpp"

void BTreeNode::borrowFromPrev(int idx) 
{
    BTreeNode *child = children[idx];
    
    BTreeNode *sibling = children[idx - 1];

    for (int i = child->n - 1; i >= 0; --i) child->keys[i + 1] = child->keys[i];

    if (!child->isLeaf) 
    {
        for (int i = child->n; i >= 0; --i) child->children[i + 1] = child->children[i];
    }

    child->keys[0] = keys[idx - 1];
    
    if (!child->isLeaf) child->children[0] = sibling->children[sibling->n];

    keys[idx - 1] = sibling->keys[sibling->n - 1];

    child->n += 1;
    
    sibling->n -= 1;
}