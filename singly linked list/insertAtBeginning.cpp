#include "singly_linked_list.hpp"

void SinglyLinkedList::insertAtBeginning(int value)
{
    Node* newNode = new Node(value);
    
    if (head == nullptr) head = newNode;

    else
    {
        newNode->next = head;
        head = newNode;
    }

    cout << "\n" << value << " successfully inserted in the beginning of the linked list";
}