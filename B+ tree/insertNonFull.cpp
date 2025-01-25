#include "B_plus.hpp"

void BPTree::insertNonFull(BPTreeNode* node, int key)
{
    if (node->isLeaf) 
    {
        if (std::find(node->keys.begin(), node->keys.end(), key) != node->keys.end()) 
        {
            std::cout << "\n" << key << " already exists in the tree";
            return;
        }

        node->keys.push_back(key);
        
        std::sort(node->keys.begin(), node->keys.end());
        
        std::cout << "\n" << key << " inserted";
    } 
    
    else 
    {
        int i = std::upper_bound(node->keys.begin(), node->keys.end(), key) - node->keys.begin() - 1;
        
        if (node->children[i + 1]->keys.size() == degree - 1) 
        {
            splitChild(node, i + 1, node->children[i + 1]);
            
            if (key > node->keys[i + 1]) ++i;
        }
        
        insertNonFull(node->children[i + 1], key);
    }
}