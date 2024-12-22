#include "splay_tree.hpp"

Node* SplayTree::leftRotate(Node* x)
{
    Node* y = x->right;
    x->right = y->left;
    y->left = x;
    return y;
}

Node* SplayTree::rightRotate(Node* y)
{
    Node* x = y->left;
    y->left = x->right;
    x->right = y;
    return x;
}