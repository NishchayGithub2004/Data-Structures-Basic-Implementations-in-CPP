#include "doubly_linked_list.hpp"

void DoublyLinkedList::predecessor(int value)
{
    Node* temp = head;
    
    while (temp != nullptr && temp->data != value) temp = temp->next;
    
    if (temp == nullptr)
    {
        cout << "\n" << value << " does not exist in the linked list";
        return;
    }
    
    if (temp->prev == nullptr)
    {
        cout << "\n" << value << " has no predecessor";
        return;
    }
    
    cout << "\nPredecessor of " << value << " is " << temp->prev->data;
}