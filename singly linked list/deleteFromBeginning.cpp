#include "singly_linked_list.hpp"

void SinglyLinkedList::deleteFromBeginning()
{
    if (head == nullptr)
    {
        cout << "\nLinked list is empty";
        return;
    }

    if (head->next == nullptr)
    {
        Node* temp = head;
        head = nullptr;
        delete temp;
    }

    else
    {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    cout << "\nNode from the beginning of the linked list deleted successfully";
}