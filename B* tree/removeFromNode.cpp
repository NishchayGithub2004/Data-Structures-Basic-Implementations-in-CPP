#include "B_star.hpp"

void BSTreeNode::removeFromNode(int key, int t)
{
    int idx = findKey(key);

    if (idx < keys.size() && keys[idx] == key) 
    {
        if (isLeaf) keys.erase(keys.begin() + idx);
        
        else removeFromNonLeaf(idx, t);
    }

    else
    {
        if (isLeaf) 
        {
            std::cout << "\n" << key << " does not exist";
            return;
        }

        bool isLastChild = (idx == keys.size());
        
        if (children[idx]->keys.size() < t) fill(idx, t);

        if (isLastChild && idx > keys.size()) children[idx - 1]->removeFromNode(key, t);
        
        else children[idx]->removeFromNode(key, t);
    }
}