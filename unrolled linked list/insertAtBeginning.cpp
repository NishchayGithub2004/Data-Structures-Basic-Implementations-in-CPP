#include "unrolled_linked_list.hpp"
#include <vector>
using namespace std;

void UnrolledLinkedList::insertAtBeginning(int value)
{
    if (head == nullptr)
    {
        head = new Node();
        tail = head;
    }

    if (!head->isFull()) head->elements.insert(head->elements.begin(), value);

    else
    {
        Node *newNode = new Node();
        newNode->elements.push_back(value);
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}