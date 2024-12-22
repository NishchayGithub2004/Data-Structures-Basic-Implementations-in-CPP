#include "circular_linked_list.hpp"

void CircularLinkedList::display()
{
    if (tail == nullptr)
    {
        cout << "\nLinked list is empty";
        return;
    }

    else
    {
        Node* temp = tail->next;
        
        cout << "\nLinked list is : ";

        do
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        } while (temp != tail->next);
        
        cout << "circle back";
    }
}