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