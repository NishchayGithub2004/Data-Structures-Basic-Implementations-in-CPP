#include "BST.hpp"

void BST::preOrderHelper(Node* root)
{
    if (!root) return;
    cout << root->data << " ";
    preOrderHelper(root->left);
    preOrderHelper(root->right);
}

void BST::preOrder()
{
    if (!root) cout << "\nTree is empty";

    else
    {
        cout << "\nPre order traversal is : ";
        preOrderHelper(root);
    }
}