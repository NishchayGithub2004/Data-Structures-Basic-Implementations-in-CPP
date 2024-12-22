#include "doubly_linked_list.hpp"

void DoublyLinkedList::deleteFromBeginning()
{
    if (head == nullptr)
    {
        cout << "\nLinked list is empty";
        return;
    }
    
    else
    {
        Node* temp = head;

        if (head == tail)
        {
            head = tail = nullptr;
            delete temp;
        }

        else
        {
            head = head->next;
            head->prev = nullptr;
            delete temp;
        }

        cout << "\nNode deleted from the beginning of the linked list successfully";
    }
}