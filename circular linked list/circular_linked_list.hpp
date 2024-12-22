#ifndef CLL_HPP
#define CLL_HPP

#include<iostream>
using namespace std;

class Node
{
    public:
    
    int data;
    Node* next;

    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};

class CircularLinkedList
{
    private: Node* tail;

    public: CircularLinkedList() {tail = nullptr;}

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