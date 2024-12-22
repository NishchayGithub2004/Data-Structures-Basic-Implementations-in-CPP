#include "splay_tree.hpp"

Node* SplayTree::insertNodeHelper(Node *root, int value, bool &isInserted)
{
    if (!root)
    {
        isInserted = true;
        return new Node(value);
    }

    if (value < root->data) root->left = insertNodeHelper(root->left, value, isInserted);
    
    else if (value > root->data) root->right = insertNodeHelper(root->right, value, isInserted);
    
    else isInserted = false;

    return splay(root, value);
}

void SplayTree::insertNode(int value)
{
    bool isInserted;

    root = insertNodeHelper(root, value, isInserted);

    if (isInserted) cout << "\n" << value << " inserted successfully";

    else cout << "\n" << value << " already exists in the tree";
}