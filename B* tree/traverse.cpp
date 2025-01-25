#include "B_star.hpp"

void BSTreeNode::traverse()
{
    for (size_t i = 0; i < keys.size(); i++) 
    {
        if (!isLeaf) children[i]->traverse();
        
        std::cout << keys[i] << " ";
    }
    
    if (!isLeaf) children[keys.size()]->traverse();
}

void BSTree::traverse()
{
    if (root)
    {
        std::cout << "\nNodes in the tree are : ";
        root->traverse();
    }

    else std::cout << "\nTree is empty";
}