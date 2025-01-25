#include "B_plus.hpp"

void BPTree::deleteFromInternal(BPTreeNode* node, int key, bool& found)
{
    int idx = std::lower_bound(node->keys.begin(), node->keys.end(), key) - node->keys.begin();

    if (idx < node->keys.size() && node->keys[idx] == key) 
    {
        found = true;

        BPTreeNode* predNode = node->children[idx];
        
        while (!predNode->isLeaf) predNode = predNode->children.back();
        
        int predecessor = predNode->keys.back();

        node->keys[idx] = predecessor;
        
        deleteKey(node->children[idx], predecessor, node, idx);
    } 
    
    else deleteKey(node->children[idx], key, node, idx);
}