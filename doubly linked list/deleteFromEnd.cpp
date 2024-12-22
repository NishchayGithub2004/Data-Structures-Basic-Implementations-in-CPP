#include "doubly_linked_list.hpp"

void DoublyLinkedList::deleteFromEnd()
{
    if (tail == nullptr)
    {
        cout << "\nLinked list is empty";
        return;
    }

    else
    {
        Node* temp = tail;

        if (head == tail) 
        {
            head = tail = nullptr;
            delete temp;
        }

        else
        {
            tail = tail->prev;
            tail->next = nullptr;
            delete temp;
        }
    }

    cout << "\nNode deleted from the end of the linked list successfully";
}