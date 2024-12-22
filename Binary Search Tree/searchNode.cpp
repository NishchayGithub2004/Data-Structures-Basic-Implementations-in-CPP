#include "BST.hpp"

Node* BST::searchNodeHelper(Node* root, int value)
{
    if (!root || root->data == value) return root;
        
    if (value < root->data) return searchNodeHelper(root->left, value);
    
    else return searchNodeHelper(root->right, value);
}

void BST::searchNode(int value)
{
    Node* result = searchNodeHelper(root, value);

    if (result) cout << "\n" << value << " found in the tree";

    else cout << "\n" << value << " not found in the tree";
}