#include "circular_linked_list.hpp"

void CircularLinkedList::search(int value)
{
    if (tail == nullptr)
    {
        cout << "\nLinked list is empty";
        return;
    }
    
    else
    {
        Node* temp = tail->next;

        do
        {
            if (temp->data == value)
            {
                cout << "\n" << value << " found in the linked list";
                return;
            }
        } while (temp != tail->next);
    }
    
    cout << "\n" << value << " not found in the linked list";
}