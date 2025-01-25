#include "B_star.hpp"

void BSTree::insertValue(int value)
{
    if (!root) 
    {
        root = new BSTreeNode(true);
        
        root->keys.push_back(value);
        
        std::cout << "\n" << value << " inserted";
        
        return;
    }

    if (root->keys.size() == 2 * t - 1) 
    {
        BSTreeNode* s = new BSTreeNode(false);
        
        s->children.push_back(root);
        
        s->splitChild(0, root, t);
        
        root = s;
    }

    BSTreeNode* current = root;
    
    while (!current->isLeaf) 
    {
        int i = 0;
        
        while (i < current->keys.size() && value > current->keys[i]) i++;

        if (current->children[i]->keys.size() == 2 * t - 1) 
        {
            current->splitChild(i, current->children[i], t);
                
            if (value > current->keys[i]) i++;
        }

        current = current->children[i];
    }

    if (find(current->keys.begin(), current->keys.end(), value) != current->keys.end()) std::cout << "\n" << value << " already exists";
    
    else 
    {
        current->keys.insert(std::lower_bound(current->keys.begin(), current->keys.end(), value), value);
        
        std::cout << "\n" << value << " inserted";
    }
}