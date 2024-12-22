#include "XORLinkedList.hpp"

void XORLinkedList::deleteFromEnd()
{
    if (head == nullptr)
    {
        cout << "\nList is empty. Nothing to delete";
        return;
    }

    else
    {
        Node* curr = head;
        Node* prev = nullptr;
        Node* next;

        while (XOR(curr->xor_ptr, prev) != nullptr)
        {
            next = XOR(prev, curr->xor_ptr);
            prev = curr;
            curr = next;
        }

        if (prev != nullptr)
        {
            prev->xor_ptr = XOR(XOR(prev->xor_ptr, curr), nullptr);
        }

        else
        {
            int value = head->data;
            head = nullptr;
            cout << "\nList only had a single node with value " << value << " which has been deleted";
            return;
        }

        int value = curr->data;
        delete curr;
        cout << "\nLast node of the list having value " << value << " has been deleted from the list";
    }
}