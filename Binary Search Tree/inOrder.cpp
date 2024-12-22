#include "BST.hpp"

void BST::inOrderHelper(Node* root)
{
    if (!root) return;
    inOrderHelper(root->left);
    cout << root->data << " ";
    inOrderHelper(root->right);
}

void BST::inOrder()
{
    if (!root) cout << "\nTree is empty";

    else
    {
        cout << "\nIn order traversal is : ";
        inOrderHelper(root);
    }
}