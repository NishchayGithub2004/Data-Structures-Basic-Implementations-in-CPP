#include "doubly_linked_list.hpp"

void DoublyLinkedList::successor(int value)
{
    Node* temp = head;
    
    while (temp != nullptr && temp->data != value) temp = temp->next;
    
    if (temp == nullptr)
    {
        cout << "\n" << value << " was not found in the linked list";
        return;
    }
    
    if (temp->next == nullptr)
    {
        cout << "\n" << value << " has no successor";
        return;
    }
    
    cout << "\nSuccessor of " << value << " is " << temp->next->data;
}