#include "circular_linked_list.hpp"

void CircularLinkedList::predecessor(int value)
{
    if (tail == nullptr)
    {
        cout << "\nLinked list is empty";
        return;
    }

    else
    {
        Node* temp = tail->next;

        do
        {
            if (temp->next->data == value)
            {
                cout << "\nPredecessor of " << value << " is " << temp->data;
                return;
            }

            temp = temp->next;
        } while (temp != tail->next);
    }

    cout << "\n" << value << " was not found in the linked list";
}