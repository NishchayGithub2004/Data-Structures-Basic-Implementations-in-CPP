#ifndef XOR_HPP
#define XOR_HPP

#include<iostream>
#include <cstdint>
using namespace std;

struct Node
{
    int data;
    Node* xor_ptr;
    Node(int value)
    {
        data = value;
        xor_ptr = nullptr;
    }
};

class XORLinkedList
{
    private: Node* XOR(Node* a, Node* b) {return reinterpret_cast<Node*>(reinterpret_cast<uintptr_t>(a) ^ reinterpret_cast<uintptr_t>(b));}

    Node *head, *tail;

    public:

    XORLinkedList() : head(nullptr), tail(nullptr) {}

    void insertAtBeginning();

    void insertAtEnd();

    void deleteFromBeginning();

    void deleteFromEnd();

    void display();

    void update();

    void search();

    void predecessor();

    void successor();
};

#endif