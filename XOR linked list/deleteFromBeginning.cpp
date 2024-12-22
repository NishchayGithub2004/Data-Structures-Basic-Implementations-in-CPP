#include "XORLinkedList.hpp"

void XORLinkedList::deleteFromBeginning()
{
    if (head == nullptr)
    {
        cout << "\nLinked list is empty. Nothing to delete.";
        return;
    }

    if (XOR(nullptr, head->xor_ptr) == nullptr)
    {
        Node* temp = head;
        int value = head->data;
        head = nullptr;
        delete temp;
        cout << "\n" << value << " was the only node in the list which has been deleted now";
        return;
    }

    Node* nextNode = XOR(nullptr, head->xor_ptr);

    if (nextNode != nullptr) 
    {
        Node* nextNextNode = XOR(head, nextNode->xor_ptr);
        nextNode->xor_ptr = XOR(nullptr, nextNextNode);
    }

    Node* temp = head;

    int value = temp->data;

    head = nextNode;

    delete temp;

    cout << "\nFirst node of the linked list having value " << value << " has been successfully deleted from the list.";
}