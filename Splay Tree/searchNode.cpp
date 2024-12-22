#include "splay_tree.hpp"

Node* SplayTree::searchNodeHelper(Node* root, int value)
{
    return splay(root, value);
}

void SplayTree::searchNode(int value)
{
    root = searchNodeHelper(root, value);

    if (root && root->data == value) cout << "\n" << value << " found";

    else cout << "\n" << value << " not found";
}