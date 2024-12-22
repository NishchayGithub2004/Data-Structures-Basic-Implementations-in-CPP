#ifndef SPLAY_HPP
#define SPLAY_HPP

#include<iostream>
using namespace std;

class Node
{
    public:

    int data;
    Node* left;
    Node* right;

    Node(int value)
    {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

class SplayTree
{
    private: Node* root;

    Node* leftRotate(Node* x);

    Node* rightRotate(Node* y);

    Node* splay(Node* root, int value);

    Node* insertNodeHelper(Node* root, int value, bool& isInserted);

    Node* deleteNodeHelper(Node* root, int value, bool& isDeleted);

    Node* searchNodeHelper(Node* root, int value);

    void preOrderHelper(Node* root);

    void inOrderHelper(Node* root);

    void postOrderHelper(Node* root);

    public: SplayTree() : root(nullptr) {}

    void insertNode(int value);

    void deleteNode(int value);

    void searchNode(int value);

    void preOrder();

    void inOrder();

    void postOrder();
};

#endif