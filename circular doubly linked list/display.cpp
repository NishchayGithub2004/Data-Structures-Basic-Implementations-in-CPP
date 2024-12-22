#include "circular_doubly_linked_list.hpp"

void CircularDoublyLinkedList::display()
{
    if (head == nullptr) 
    {
        cout << "\nLinked list is empty";
        return;
    }
    
    Node* temp = head;

    cout << "\nLinked list is : ";
    
    do
    {
        cout << temp->data << " <--> ";
        temp = temp->next;
    } while (temp != head);

    cout << "circle back";
}