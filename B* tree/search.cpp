#include "B_star.hpp"

BSTreeNode* BSTreeNode::search(int key)
{
    int i = 0;
    
    while (i < keys.size() && key > keys[i]) i++;

    if (i < keys.size() && keys[i] == key) return this;

    if (isLeaf) return nullptr;

    return children[i]->search(key);
}

void BSTree::searchValue(int value)
{
    if (root) 
    {
        BSTreeNode* result = root->search(value);
        
        if (result) std::cout << "\n" << value << " found";
        
        else std::cout << "\n" << value << " not found";
    }

    else std::cout << "\nTree is empty";
}