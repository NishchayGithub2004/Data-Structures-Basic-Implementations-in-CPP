#include "circular_linked_list.hpp"

void CircularLinkedList::update(int oldValue, int newValue)
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
            if (temp->data == oldValue)
            {
                temp->data = newValue;
                cout << "\nNode having value " << oldValue << " updated to " << newValue << " successfully";
                return;
            }

            temp = temp->next;
        } while (temp != tail->next);
    }

    cout << "\nNode having value " << oldValue << " not found in the list"; 
}