#include "unrolled_linked_list.hpp"
#include<iostream>
#include<vector>
using namespace std;

void UnrolledLinkedList::deleteFromBeginning()
{
    if (head == nullptr)
    {
        cout << "Linked list is empty";
        return;
    }

    if (!head->isEmpty())
    {
        head->elements.erase(head->elements.begin());

        if (head->isEmpty() && head != tail)
        {
            Node* temp = head;
            head = head->next;
            if (head) head->prev = nullptr;
            delete temp;
        }
    }
}