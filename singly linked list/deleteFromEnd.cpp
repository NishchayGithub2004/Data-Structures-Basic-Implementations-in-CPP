#include "singly_linked_list.hpp"

void SinglyLinkedList::deleteFromEnd()
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
        Node* temp1 = head;
        Node* temp2 = head->next;

        while (temp2->next != nullptr)
        {
            temp2 = temp2->next;
            temp1 = temp1->next;
        }

        temp1->next = nullptr;
        delete temp2;
    }

    cout << "\nNode from the end of the linked list deleted successfully";
}