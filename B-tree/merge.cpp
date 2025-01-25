#include "b.hpp"

void BTreeNode::merge(int idx) 
{
    BTreeNode *child = children[idx];
    
    BTreeNode *sibling = children[idx + 1];

    child->keys[t - 1] = keys[idx];

    for (int i = 0; i < sibling->n; i++) child->keys[i + t] = sibling->keys[i];

    if (!child->isLeaf) 
    {
        for (int i = 0; i <= sibling->n; i++) child->children[i + t] = sibling->children[i];
    }

    for (int i = idx + 1; i < n; i++) keys[i - 1] = keys[i];

    for (int i = idx + 2; i <= n; i++) children[i - 1] = children[i];

    child->n += sibling->n + 1;
    
    n--;
}