#include "B_plus.hpp"

void BPTree::traverse(BPTreeNode* node)
{
    if (!node) return;
    
    if (node->isLeaf) 
    {
        for (int key : node->keys) std::cout << key << " ";
        return;
    }
    
    for (size_t i = 0; i < node->keys.size(); i++) 
    {
        traverse(node->children[i]);
        
        std::cout << node->keys[i] << " ";
    }
    
    traverse(node->children.back());
}

void BPTree::traverse()
{
    if (!root) 
    {
            std::cout << "\nTree is empty";
            return;
    }
    
    traverse(root);
}