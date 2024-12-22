#include "XORLinkedList.hpp"

void XORLinkedList::predecessor()
{
    if (!head)
    {
        cout << "\nLinked list is empty";
        return;
    }

    int value;
    cout << "\nEnter value to find predecessor of : ";
    cin >> value;

    Node *current = head, *prev = nullptr;

    while (current)
    {
        if (current->data == value)
        {   
            if (prev) cout << "\nPredecessor of " << value << " is " << prev->data;

            else cout << "\n" << value << " has no predecessor";

            return;
        }

        Node* next = XOR(current->xor_ptr, prev);
        prev = current;
        current = next;
    }

    cout << "\n" << value << " does not exist in the linked list";
}