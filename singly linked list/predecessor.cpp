#include "singly_linked_list.hpp"

void SinglyLinkedList::predecessor(int value)
{
    if (head == nullptr)
    {
        cout << "\nLinked list is empty";
        return;
    }

    Node* prev = nullptr;
    Node* temp = head;

    while (temp != nullptr)
    {
        if (temp->data == value)
        {
            if (prev == nullptr)
            {
                cout << "\n" << value << " has no predecessor";
                return;
            }

            else
            {
                cout << "\nPredecessor of " << value << " is " << prev->data;
                return;
            }
        }
        
        prev = temp;
        temp = temp->next;
    }

    cout << "\n" << value << " was not found in the linked list";
}