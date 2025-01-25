#include "B_plus.hpp"

bool BPTree::search(BPTreeNode* node, int key)
{
    if (!node) return false;
    
    if (std::find(node->keys.begin(), node->keys.end(), key) != node->keys.end()) return true;

    if (node->isLeaf) return false;

    int i = std::upper_bound(node->keys.begin(), node->keys.end(), key) - node->keys.begin() - 1;
    
    return search(node->children[i + 1], key);
}

void BPTree::searchValue(int key)
{
    if (search(root, key)) std::cout << "\n" << key << " found";
    
    else std::cout << "\n" << key << " not found";
}