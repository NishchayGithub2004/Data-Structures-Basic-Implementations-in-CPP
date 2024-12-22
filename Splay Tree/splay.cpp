#include "splay_tree.hpp"

Node* SplayTree::splay(Node* root, int value)
{
    if (!root || root->data == value) return root;

    if (value < root->data)
    {
        if (!root->left) return root;

        if (value < root->left->data) 
        {
            root->left->left = splay(root->left->left, value);
            root = rightRotate(root);
        }

        else if (value > root->left->data) 
        {
            root->left->right = splay(root->left->right, value);
            
            if (root->left->right) root->left = leftRotate(root->left);
        }
        
        return root->left ? rightRotate(root) : root; 
    }

    else
    {
        if (!root->right) return root;

        if (value < root->right->data)
        {
            root->right->left = splay(root->right->left, value);
            
            if (root->right->left) root->right = rightRotate(root->right);
        }

        else if (value > root->right->data) 
        {
            root->right->right = splay(root->right->right, value);
            root = leftRotate(root);
        }
        
        return root->right ? leftRotate(root) : root;
    }
}