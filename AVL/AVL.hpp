#ifndef AVL_HPP
#define AVL_HPP

#include<iostream>
#include<algorithm>
using namespace std;

class Node
{
    public:

    int data;
    int height;
    Node* left;
    Node* right;

    Node(int value)
    {
        data = value;
        height = 1;
        left = right = nullptr;
    }
};

class AVL
{
    private: Node* root;

    int height(Node* root) {return root ? root->height : 0;}
    
    int getBalance(Node* root) {return root ? height(root->left) - height(root->right) : 0;}
    
    Node* rightRotate(Node* y);
    
    Node* leftRotate(Node* x);
    
    Node* insertNodeHelper(Node* node, int key, bool& isInserted);
    
    Node* minValueNode(Node* node);

    Node* deleteNodeHelper(Node* root, int key, bool& nodeDeleted);

    void inOrderHelper(Node* root);
    
    void preOrderHelper(Node* root);
    
    void postOrderHelper(Node* root);

    public: AVL() {root = nullptr;}

    void insertNode(int value);
    
    void deleteNode(int value);
    
    void inOrder();
    
    void preOrder();
    
    void postOrder();
};

#endif