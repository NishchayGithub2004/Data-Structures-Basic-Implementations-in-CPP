#ifndef CDLL_HPP
#define CDLL_HPP

#include<iostream>
using namespace std;

class Node
{
    public:

    int data;
    Node* prev;
    Node* next;

    Node(int value)
    {
        data = value;
        prev = next = nullptr;
    }
};

class CircularDoublyLinkedList
{
    private: Node* head;

    public: CircularDoublyLinkedList() {head = nullptr;}

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