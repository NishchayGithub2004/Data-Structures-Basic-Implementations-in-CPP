#include "circular_linked_list.hpp"

void CircularLinkedList::deleteFromBeginning()
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

        else tail->next = temp->next;

        delete temp;
    }

    cout << "\nNode from the beginning of the linked list deleted successfully";
}