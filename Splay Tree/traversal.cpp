#include "splay_tree.hpp"

void SplayTree::preOrderHelper(Node* root)
{
    if (!root) return;
    cout << root->data << " ";
    preOrderHelper(root->left);
    preOrderHelper(root->right);
}

void SplayTree::preOrder()
{
    if (!root) cout << "\nTree is empty";

    else
    {
        cout << "\nPre order traversal is : ";
        preOrderHelper(root);
    }
}

void SplayTree::inOrderHelper(Node* root)
{
    if (!root) return;
    inOrderHelper(root->left);
    cout << root->data << " ";
    inOrderHelper(root->right);
}

void SplayTree::inOrder()
{
    if (!root) cout << "\nTree is empty";

    else
    {
        cout << "\nIn order traversal is : ";
        inOrderHelper(root);
    }
}

void SplayTree::postOrderHelper(Node* root)
{
    if (!root) return;
    postOrderHelper(root->left);
    postOrderHelper(root->right);
    cout << root->data << " ";
}

void SplayTree::postOrder()
{
    if (!root) cout << "\nTree is empty";

    else
    {
        cout << "\nPost order traversal is : ";
        postOrderHelper(root);
    }
}