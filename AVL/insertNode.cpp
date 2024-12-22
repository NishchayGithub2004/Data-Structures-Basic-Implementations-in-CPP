#include "AVL.hpp"

Node* AVL::insertNodeHelper(Node* root, int value, bool& isInserted)
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

    root->height = std::max(height(root->left), height(root->right)) + 1;

    int balance = getBalance(root);

    if (balance > 1 && value < root->left->data) return rightRotate(root);

    if (balance < -1 && value > root->right->data) return leftRotate(root);

    if (balance > 1 && value > root->left->data) 
    {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }

    if (balance < -1 && value < root->right->data) 
    {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }

    return root;
}

void AVL::insertNode(int value) 
{
    bool isInserted = false;
    
    root = insertNodeHelper(root, value, isInserted);
    
    if (isInserted) cout << "\n" << value << " inserted into the tree";

    else cout << "\n" << value << " already exists in the tree";
}