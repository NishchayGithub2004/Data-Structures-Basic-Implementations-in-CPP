#ifndef LL_HPP
#define LL_HPP

#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;

    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};

class SinglyLinkedList
{
    private: Node* head;

    public:

    SinglyLinkedList() {head = nullptr;}

    void insertAtBeginning(int value);

    void insertAtEnd(int value);

    void deleteFromBeginning();

    void deleteFromEnd();

    void search(int value);

    void update(int oldValue, int newValue);

    void display();

    void predecessor(int value);

    void successor(int value);
};

#endif