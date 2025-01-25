#include "B_plus.hpp"

void BPTree::insertValue(int key) 
{
    if (!root) 
    {
        root = new BPTreeNode(true);
        root->keys.push_back(key);
        std::cout << "\n" << key << " inserted";
    } 
    
    else 
    {
        if (root->keys.size() == degree - 1) 
        {
            BPTreeNode* newRoot = new BPTreeNode(false);
            
            newRoot->children.push_back(root);
            
            splitChild(newRoot, 0, root);
            
            root = newRoot;
        }
        
        insertNonFull(root, key);
    }
}