#include "BST.hpp"

Node* BST::insertNodeHelper(Node* root, int value, bool& isInserted)
{
    if (!root) 
    {
        isInserted = true;
        return new Node(value);
    }

    if (value < root->data) root->left = insertNodeHelper(root->left, value, isInserted);

    else if (value > root->data) root->right = insertNodeHelper(root->right, value, isInserted);

    else 
    {
        isInserted = false;
        return root;
    }
}

void BST::insertNode(int value)
{
    bool isInserted = false;

    root = insertNodeHelper(root, value, isInserted);
    
    if (isInserted) cout << "\n" << value << " inserted into the tree";

    else cout << "\n" << value << " already exists in the tree";
}