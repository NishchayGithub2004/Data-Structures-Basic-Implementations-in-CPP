#include "XORLinkedList.hpp"

void XORLinkedList::update()
{
    int oldValue, newValue;

    cout << "\nEnter value to be replaced : ";
    cin >> oldValue;

    cout << "\nEnter value to be replaced by : ";
    cin >> newValue;

    Node* curr = head;
    Node* prev = nullptr;
    Node* next;

    while (curr != nullptr) 
    {
        if (curr->data == oldValue) 
        {
            curr->data = newValue;
            cout << "\nNode with value " << oldValue << " updated to " << newValue << ".";
            return;
        }
        
        next = XOR(prev, curr->xor_ptr);
        prev = curr;
        curr = next;
    }

    cout << "\nNode with value " << oldValue << " not found.";
}