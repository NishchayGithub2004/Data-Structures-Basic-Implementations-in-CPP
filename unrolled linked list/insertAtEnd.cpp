#include "unrolled_linked_list.hpp"
#include <vector>
using namespace std;

void UnrolledLinkedList::insertAtEnd(int value)
{
    if (tail == nullptr)
    {
        tail = new Node();
        head = tail;
    }

    if (!tail->isFull())
        tail->elements.push_back(value);

    else
    {
        Node *newNode = new Node();
        newNode->elements.push_back(value);
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}