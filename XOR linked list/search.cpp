#include "XORLinkedList.hpp"

void XORLinkedList::search()
{
    int value;

    cout << "\nEnter value to search : ";
    cin >> value;
    
    Node* curr = head;
    Node* prev = nullptr;
    Node* next;

    while (curr != nullptr) 
    {
        if (curr->data == value) 
        {
            cout << "\nNode with value " << value << " found.";
            return;
        }
        
        next = XOR(prev, curr->xor_ptr);
        prev = curr;
        curr = next;
    }

    cout << "\nNode with value " << value << " not found.";
}