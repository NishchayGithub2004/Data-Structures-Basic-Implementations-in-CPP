#include "XORLinkedList.hpp"

void XORLinkedList::successor()
{
    if (!head)
    {
        cout << "\nLinked list is empty";
        return;
    }
    
    int value;
    cout << "\nEnter value to find successor of : ";
    cin >> value;

    Node *current = head, *prev = nullptr;

    while (current)
    {
        if (current->data == value)
        {
            Node* next = XOR(current->xor_ptr, prev);

            if (next) cout << "\nSuccessor of " << value << " is " << next->data;

            else cout << "\n" << value << " does not have a successor";

            return;
        }

        Node* next = XOR(current->xor_ptr, prev);
        prev = current;
        current = next;
    }

    cout << "\n" << value << " does not exist in the linked list";
}