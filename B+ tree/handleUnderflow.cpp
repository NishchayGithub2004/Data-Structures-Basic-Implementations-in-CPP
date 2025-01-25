#include "B_plus.hpp"

void BPTree::handleUnderflow(BPTreeNode* parent, int idx)
{
    BPTreeNode* node = parent->children[idx];

    if (idx > 0 && parent->children[idx - 1]->keys.size() > (degree - 1) / 2) borrowFromLeft(node, parent, idx);
    
    else if (idx < parent->children.size() - 1 && parent->children[idx + 1]->keys.size() > (degree - 1) / 2) borrowFromRight(node, parent, idx);
    
    else if (idx > 0) mergeWithLeft(node, parent, idx);
    
    else if (idx < parent->children.size() - 1) mergeWithRight(node, parent, idx);
}