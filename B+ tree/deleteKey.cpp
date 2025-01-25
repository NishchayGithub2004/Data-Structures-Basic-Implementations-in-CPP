#include "B_plus.hpp"

void BPTree::deleteKey(BPTreeNode* node, int key, BPTreeNode* parent, int parentIdx) 
{
    if (!node) 
    {
        std::cout << "\nTree is empty";
        return;
    }

    bool found = false;

    if (node->isLeaf) deleteFromLeaf(node, key, found);
    
    else deleteFromInternal(node, key, found);

    if (node->keys.size() < (degree - 1) / 2 && parent) handleUnderflow(parent, parentIdx);

    if (node == root && root->keys.empty() && !root->isLeaf) 
    {
        root = root->children[0];
        delete node;
    }
}