#include "b.hpp"

BTreeNode::BTreeNode(int _t, bool _isLeaf) 
{
    t = _t;
    isLeaf = _isLeaf;
    keys = new int[2 * t - 1];
    children = new BTreeNode *[2 * t];
    n = 0;
}