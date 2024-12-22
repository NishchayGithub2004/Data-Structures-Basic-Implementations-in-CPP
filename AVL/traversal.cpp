#include "AVL.hpp"

void AVL::preOrderHelper(Node* root)
{
    if (!root) return;
    cout << root->data << " ";
    preOrderHelper(root->left);
    preOrderHelper(root->right);
}

void AVL::preOrder()
{
    if (!root) cout << "\nTree is empty";

    else
    {
        cout << "\nPre order traversal is : ";
        preOrderHelper(root);
    }
}

void AVL::inOrderHelper(Node* root)
{
    if (!root) return;
    inOrderHelper(root->left);
    cout << root->data << " ";
    inOrderHelper(root->right);
}

void AVL::inOrder()
{
    if (!root) cout << "\nTree is empty";

    else
    {
        cout << "\nIn order traversal is : ";
        inOrderHelper(root);
    }
}

void AVL::postOrderHelper(Node* root)
{
    if (!root) return;
    postOrderHelper(root->left);
    postOrderHelper(root->right);
    cout << root->data << " ";
}

void AVL::postOrder()
{
    if (!root) cout << "\nTree is empty";

    else
    {
        cout << "\nPost order traversal is : ";
        postOrderHelper(root);
    }
}