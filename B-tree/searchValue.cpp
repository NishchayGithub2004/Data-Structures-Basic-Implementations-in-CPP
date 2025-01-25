#include "b.hpp"

void BTree::searchValue(int key) 
{
    if (root == nullptr) 
    {
        std::cout << "\nTree is empty";
        return;
    }

    int idx = root->searchKey(key);
    
    if (idx < root->n && root->keys[idx] == key) std::cout << "\n" << key << " found in the tree";
    
    else std::cout << "\n" << key << " not found in the tree";
}