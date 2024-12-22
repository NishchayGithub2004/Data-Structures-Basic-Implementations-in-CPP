#include "circular_linked_list.hpp"

void CircularLinkedList::deleteFromEnd()
{
    if (tail == nullptr)
    {
        cout << "\nLinked list is empty";
        return;
    }

    else
    {
        Node* temp = tail->next;

        if (tail->next == tail) tail = nullptr;

        else
        {
            Node* current = tail->next;

            while (current->next != tail) current = current->next;

            current->next = tail->next;

            tail = current;
        }

        delete temp;
    }

    cout << "\nNode from the end of the linked list deleted successfully";
}