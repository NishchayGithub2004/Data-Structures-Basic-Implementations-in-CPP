#ifndef DLL_HPP
#define DLL_HPP

#include<iostream>
using namespace std;

class Node
{
    public:

    int data;
    Node* next;
    Node* prev;

    Node(int value)
    {
        data = value;
        prev = next = nullptr;
    }
};

class DoublyLinkedList
{
    private: Node *head, *tail;

    public: DoublyLinkedList() {head = tail = nullptr;}

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