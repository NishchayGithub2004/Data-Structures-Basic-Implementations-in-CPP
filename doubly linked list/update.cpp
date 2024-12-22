#include "doubly_linked_list.hpp"

void DoublyLinkedList::update(int oldValue, int newValue)
{
    if (head == nullptr)
    {
        cout << "\nLinked list is empty";
        return;
    }
    
    Node* temp = head;
    
    while (temp != nullptr)
    {
        if (temp->data == oldValue)
        {
            temp->data = newValue;
            cout << "\nNode having value " << oldValue << " changed to " << newValue << " successfully";
            return;
        }

        temp = temp->next;
    }

    cout << "\nNode having value " << oldValue << " not found in the linked list";
}