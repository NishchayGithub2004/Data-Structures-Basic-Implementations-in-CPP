#include "circular_doubly_linked_list.hpp"

void CircularDoublyLinkedList::deleteFromEnd()
{
    if (head == nullptr)
    {
        cout << "\nLinked list is empty";
        return;
    }
    
    else if (head->next == head)
    {
        Node* temp = head;
        head = nullptr;
        delete temp;
    }

    else
    {
        Node* temp = head->prev;
        temp->prev->next = head;
        head->prev = temp->prev;
        delete temp;
    }

    cout << "\nNode successfully deleted from the end";
}