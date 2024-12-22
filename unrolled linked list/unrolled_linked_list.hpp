#ifndef UNROLLED_HPP
#define UNROLLED_HPP

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

const int BLOCK_SIZE = 5;

class Node
{
    public:
    
    vector<int> elements;
    Node* prev;
    Node* next;

    Node() : next(nullptr), prev(nullptr) {elements.reserve(BLOCK_SIZE);}

    bool isFull() const {return elements.size() == BLOCK_SIZE;}

    bool isEmpty() const {return elements.empty();}
};

class UnrolledLinkedList
{
    private: Node *head, *tail;

    public: UnrolledLinkedList() : head(nullptr), tail(nullptr) {}

    void insertAtBeginning(int value);

    void insertAtEnd(int value);

    void deleteFromBeginning();

    void deleteFromEnd();

    void searchNode(int value);

    void updateNode(int oldValue, int newValue);

    void display();
};

#endif