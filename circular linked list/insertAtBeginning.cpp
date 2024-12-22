#include "circular_linked_list.hpp"

void CircularLinkedList::insertAtBeginning(int value)
{
    Node* newNode = new Node(value);

    if (tail == nullptr)
    {
        tail = newNode;
        newNode->next = newNode;
    }

    else
    {
        newNode->next = tail->next;
        tail->next = newNode;
    }

    cout << "\n" << value << " inserted at the beginning of the linked list successfully";
}