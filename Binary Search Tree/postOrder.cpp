#include "BST.hpp"

void BST::postOrderHelper(Node* root)
{
    if (!root) return;
    postOrderHelper(root->left);
    postOrderHelper(root->right);
    cout << root->data << " ";
}

void BST::postOrder()
{
    if (!root) cout << "\nTree is empty";

    else
    {
        cout << "\nPost order traversal is : ";
        postOrderHelper(root);
    }
}