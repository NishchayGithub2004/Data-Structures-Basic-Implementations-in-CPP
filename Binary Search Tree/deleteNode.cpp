#include "BST.hpp"

Node* BST::deleteNodeHelper(Node* root, int value, bool &isDeleted)
{
    if (!root) 
    {
        isDeleted = false;
        return root;
    }

    if (value < root->data) root->left = deleteNodeHelper(root->left, value, isDeleted);

    else if (value > root->data) root->right = deleteNodeHelper(root->right, value, isDeleted);

    else
    {
        isDeleted = true;

        if (!root->left)
        {
            Node* temp = root->right;
            delete root;
            return temp;
        }

        else if (!root->right)
        {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        Node* minNode = findMin(root->right);
        root->data = minNode->data;
        root->right = deleteNodeHelper(root->right, minNode->data, isDeleted);
    }

    return root;
}

void BST::deleteNode(int value)
{
    bool isDeleted = false;

    if (!root) cout << "\nTree is empty";

    else
    {
        root = deleteNodeHelper(root, value, isDeleted);

        if (isDeleted) cout << "\n" << value << " deleted from the tree";
        
        else cout << "\n" << value << " not found in the tree";
    }
}