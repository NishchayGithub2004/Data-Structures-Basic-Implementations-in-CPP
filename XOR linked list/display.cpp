#include "XORLinkedList.hpp"

void XORLinkedList::display()
{
    Node* curr = head;
    Node* prev = nullptr;
    Node* next;

    cout << "\nList elements are : ";
    
    while (curr != nullptr) 
    {
        cout << curr->data << " -> ";
        next = XOR(prev, curr->xor_ptr);
        prev = curr;
        curr = next;
    }

    cout << "NULL";
}