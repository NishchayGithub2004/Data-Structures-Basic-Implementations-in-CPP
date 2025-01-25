#include "b.hpp"

void BTree::insertValue(int key) 
{
    if (root == nullptr) 
    {
        root = new BTreeNode(t, true);
        
        root->keys[0] = key;
        
        root->n = 1;
        
        std::cout << "\n" << key << " inserted successfully";
        
        return;
    }

    BTreeNode *current = root;
    
    while (true) 
    {
        int i = 0;
        
        while (i < current->n && key > current->keys[i]) i++;

        if (i < current->n && key == current->keys[i]) 
        {
            std::cout << "\n" << key << " already exists in the tree";
            return;
        }

        if (current->isLeaf) break;

        current = current->children[i];
    }

    if (root->n == 2 * t - 1) 
    {
        BTreeNode *s = new BTreeNode(t, false);

        s->children[0] = root;

        s->splitChild(0, root);

        int i = (s->keys[0] < key) ? 1 : 0;
        
        s->children[i]->insertNonFull(key);

        root = s;
    } 
    
    else root->insertNonFull(key);

    std::cout << "\n" << key << " inserted successfully";
}