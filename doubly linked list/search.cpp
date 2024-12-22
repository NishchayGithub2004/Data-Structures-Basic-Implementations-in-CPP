#include "doubly_linked_list.hpp"

void DoublyLinkedList::search(int value)
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
            cout << "\n" << value << " exists in the linked list";
            return;
        }

        temp = temp->next;
    }

    cout << "\n" << value << " does not exist in the linked list";
}