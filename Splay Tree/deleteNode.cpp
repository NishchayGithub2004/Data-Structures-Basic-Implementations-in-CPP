#include "splay_tree.hpp"

Node* SplayTree::deleteNodeHelper(Node* root, int value, bool& isDeleted)
{
    root = splay(root, value);

    if (!root || root->data != value)
    {
        isDeleted = false;
        return root;
    }

    isDeleted = true;
    
    if (!root->left) 
    {
        Node* newRoot = root->right;
        delete root;
        return newRoot;
    } 
    
    else 
    {
        Node* newRoot = splay(root->left, value);
        newRoot->right = root->right;
        delete root;
        return newRoot;
    }
}

void SplayTree::deleteNode(int value)
{
    bool isDeleted;

    root = deleteNodeHelper(root, value, isDeleted);

    if (isDeleted) cout << "\n" << value << " deleted successfully";

    else cout << "\n" << value << " not found";
}