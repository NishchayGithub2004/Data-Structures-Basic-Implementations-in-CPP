#include "circular_doubly_linked_list.hpp"

void CircularDoublyLinkedList::update(int oldValue, int newValue)
{
    Node* temp = head;
    
    if (head == nullptr) 
    {
        cout << "\nLinked list is empty";
        return;
    }
    
    do
    {
        if (temp->data == oldValue) 
        {
            temp->data = newValue;
            cout << "\n" << oldValue << " updated to " << newValue << " successfully";
            return;
        }
        
        temp = temp->next;
    } while (temp != head);
    
    cout << "\n" << oldValue << " not found in the linked list";
}