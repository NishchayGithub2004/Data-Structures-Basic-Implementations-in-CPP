#include "b.hpp"

void BTree::deleteValue(int key) 
{
    if (!root) 
    {
        std::cerr << "\nTree is empty";
        return;
    }

    root->deleteKey(key);
    
    if (root->n == 0) 
    {
        BTreeNode *tmp = root;
        
        if (root->isLeaf) root = nullptr;
        
        else root = root->children[0];
        
        delete tmp;
    }
}
