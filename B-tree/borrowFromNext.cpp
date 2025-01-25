#include "b.hpp"

void BTreeNode::borrowFromNext(int idx) 
{
    BTreeNode *child = children[idx];
    
    BTreeNode *sibling = children[idx + 1];

    child->keys[child->n] = keys[idx];
    
    if (!child->isLeaf) child->children[child->n + 1] = sibling->children[0];

    keys[idx] = sibling->keys[0];

    for (int i = 1; i < sibling->n; ++i) sibling->keys[i - 1] = sibling->keys[i];

    if (!sibling->isLeaf) 
    {
        for (int i = 1; i <= sibling->n; ++i) sibling->children[i - 1] = sibling->children[i];
    }

    child->n += 1;
    
    sibling->n -= 1;
}