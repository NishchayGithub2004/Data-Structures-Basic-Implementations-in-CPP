#include "B_plus.hpp"

void BPTree::splitChild(BPTreeNode* parent, int index, BPTreeNode* child)
{
    BPTreeNode* newChild = new BPTreeNode(child->isLeaf);
    
    int mid = degree / 2;

    newChild->keys.assign(child->keys.begin() + mid + 1, child->keys.end());
    
    child->keys.resize(mid);

    if (!child->isLeaf) 
    {
        newChild->children.assign(child->children.begin() + mid + 1, child->children.end());
        
        child->children.resize(mid + 1);
    } 
    
    else 
    {
        newChild->next = child->next;
        
        child->next = newChild;
    }

    parent->keys.insert(parent->keys.begin() + index, child->keys[mid]);
    
    parent->children.insert(parent->children.begin() + index + 1, newChild);

    child->keys.pop_back();
}