#include "B_plus.hpp"

void BPTree::deleteFromLeaf(BPTreeNode* node, int key, bool& found) 
{
    auto it = std::find(node->keys.begin(), node->keys.end(), key);
    
    if (it != node->keys.end()) 
    {
        node->keys.erase(it);
        
        found = true;
        
        std::cout << "\n" << key << " deleted from the tree";
    }
    
    else std::cout << "\n" << key << " does not exist in the tree";
}