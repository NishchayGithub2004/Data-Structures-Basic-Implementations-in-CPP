#include "AVL.hpp"

Node* AVL::minValueNode(Node* node)
{
    Node* current = node;
    while (current->left) current = current->left;
    return current;
}

Node* AVL::deleteNodeHelper(Node* root, int value, bool& nodeDeleted)
{
    if (!root) 
    {
        nodeDeleted = false;
        return root;
    }

    if (value < root->data) root->left = deleteNodeHelper(root->left, value, nodeDeleted);
    
    else if (value > root->data) root->right = deleteNodeHelper(root->right, value, nodeDeleted);
    
    else
    {
        nodeDeleted = true;
        
        if (!root->left || !root->right) 
        {
            Node* temp = root->left ? root->left : root->right;

            if (!temp) 
            {
                temp = root;
                root = nullptr;
            } 
            
            else *root = *temp;

            delete temp;
        }
        
        else 
        {
            Node* temp = minValueNode(root->right);
            root->data = temp->data;
            root->right = deleteNodeHelper(root->right, temp->data, nodeDeleted);
        }
    }

    if (!root) return root;

    root->height = std::max(height(root->left), height(root->right)) + 1;

    int balance = getBalance(root);

    if (balance > 1 && getBalance(root->left) >= 0) return rightRotate(root);

    if (balance > 1 && getBalance(root->left) < 0)
    {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }

    if (balance < -1 && getBalance(root->right) <= 0) return leftRotate(root);

    if (balance < -1 && getBalance(root->right) > 0) 
    {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }

    return root;
}

void AVL::deleteNode(int value) 
{
    bool nodeDeleted = false;
    
    root = deleteNodeHelper(root, value, nodeDeleted);

    if (nodeDeleted) cout << "\n" << value << " deleted successfully";
    
    else if (!root) cout << "\nTree is empty";
    
    else cout << "\n" << value << " not found in the tree";
}