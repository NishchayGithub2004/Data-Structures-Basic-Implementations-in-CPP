#include "circular_doubly_linked_list.hpp"

void CircularDoublyLinkedList::insertAtEnd(int value)
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
    }

    cout << "\n" << value << " successfully inserted at the end";
}