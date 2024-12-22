#include "doubly_linked_list.hpp"

void DoublyLinkedList::display()
{
    if (head == nullptr)
    {
        cout << "\nLinked list is empty";
        return;
    }
    
    Node* temp = head;

    cout << "\nElements of the linked list are : ";
    
    while (temp != nullptr)
    {
        cout << temp->data << " <--> ";
        temp = temp->next;
    }

    cout << "NULL";
}