#include "circular_doubly_linked_list.hpp"

void CircularDoublyLinkedList::predecessor(int value)
{
    if (head == nullptr) 
    {
        cout << "\nLinked list is empty";
        return;
    }
    
    Node* temp = head;
    
    do 
    {
        if (temp->data == value) 
        {
            cout << "\nPredecessor of " << value << " is " << temp->prev->data;
            return;
        }
        
        temp = temp->next;
    } while (temp != head);
    
    cout << "\n" << value << " not found in the linked list";
}