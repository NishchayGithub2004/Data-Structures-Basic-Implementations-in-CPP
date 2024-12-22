#include "circular_doubly_linked_list.hpp"

void CircularDoublyLinkedList::insertAtBeginning(int value)
{
    Node* newNode = new Node(value);

    if (head == nullptr)
    {
        head = newNode;
        head->next = head;
        head->prev = head;
    }
    
    else
    {
        newNode->next = head;
        newNode->prev = head->prev;
        head->prev->next = newNode;
        head->prev = newNode;
        head = newNode;
    }

    cout << "\n" << value << " successfully inserted in the beginning";
}