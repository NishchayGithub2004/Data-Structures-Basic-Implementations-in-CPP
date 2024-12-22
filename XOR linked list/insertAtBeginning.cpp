#include "XORLinkedList.hpp"

void XORLinkedList::insertAtBeginning()
{
    int value;

    cout << "\nEnter value to insert in the beginning : ";
    cin >> value;

    Node* newNode = new Node(value);

    if (head == nullptr)
    {
        head = tail = newNode;
        cout << "\n" << value << " added to an empty XOR linked list successfully";
        return;
    }

    else
    {
        newNode->xor_ptr = head;
        head->xor_ptr = XOR(newNode, head->xor_ptr);
        head = newNode;
        cout << "\n" << value << " added at the beginning of the XOR linked list successfully";
        return;
    }
}