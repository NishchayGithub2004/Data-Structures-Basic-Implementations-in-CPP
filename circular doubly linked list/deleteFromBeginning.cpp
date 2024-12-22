#include "circular_doubly_linked_list.hpp"

void CircularDoublyLinkedList::deleteFromBeginning()
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
        Node* temp = head;
        head->prev->next = head->next;
        head = head->next;
        delete temp;
    }

    cout << "\nNode successfully deleted from the beginning";
}