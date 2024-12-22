#include "singly_linked_list.hpp"

void SinglyLinkedList::successor(int value)
{
    if (head == nullptr)
    {
        cout << "\nLinked list is empty";
        return;
    }

    Node* temp = head;

    while (temp != nullptr)
    {
        if (temp->data == value)
        {
            if (temp->next != nullptr)
            {
                cout << "\nSuccessor of " << value << " is " << temp->next->data;
                return;
            }

            else
            {
                cout << "\n" << value << " has no successor";
                return;
            }
        }

        temp = temp->next;
    }

    cout << "\n" << value << " was not found in the linked list";
}