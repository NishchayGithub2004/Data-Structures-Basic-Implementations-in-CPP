#include "B_star.hpp"

void BSTree::deleteValue(int value)
{
    if (!root) 
    {
        std::cout << "\nTree is empty";
        return;
    }

    root->removeFromNode(value, t);

    if (root->keys.empty()) 
    {
        BSTreeNode* oldRoot = root;
        
        if (root->isLeaf) root = nullptr;
            
        else
        {
            root = root->children[0];
            delete oldRoot;
        }

        std::cout << "\n" << value << " deleted";
    }
}