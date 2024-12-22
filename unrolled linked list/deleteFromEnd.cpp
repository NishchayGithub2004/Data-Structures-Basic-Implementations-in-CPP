#include "unrolled_linked_list.hpp"
#include<iostream>
#include<vector>
using namespace std;

void UnrolledLinkedList::deleteFromEnd()
{
    if (tail == nullptr)
    {
        cout << "Linked list is empty";
        return;
    }

    if (!tail->isEmpty())
    {
        tail->elements.pop_back();

        if (tail->isEmpty() && tail != head)
        {
            Node* temp = tail;
            tail = tail->prev;
            if (tail) tail->next = nullptr;
            delete temp;
        }
    }
}