#include "circular_doubly_linked_list.hpp"

void CircularDoublyLinkedList::search(int value)
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
            cout << "\n" << value << " found in the list";
            return;
        }
        
        temp = temp->next;
    } while (temp != head);
    
    cout << "\n" << value << " not found in the list";
}