#include "circular_linked_list.hpp"

void CircularLinkedList::successor(int value)
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
            if (temp->data == value)
            {
                cout << "\nSuccessor of " << value << " is " << temp->next->data;
                return;
            }

            temp = temp->next;
        } while (temp != tail->next);
    }

    cout << "\n" << value << " was not found in the linked list";
}