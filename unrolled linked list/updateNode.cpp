#include "unrolled_linked_list.hpp"
#include<iostream>
#include<vector>
using namespace std;

void UnrolledLinkedList::updateNode(int oldValue, int newValue)
{
    Node* current = head;

    while (current != nullptr)
    {
        auto it = find(current->elements.begin(), current->elements.end(), oldValue);

        if (it != current->elements.end())
        {
            *it = newValue;
            cout << "Node with value " << oldValue << " is updated to " << newValue;
            return;
        }

        current = current->next;
    }

    cout << "\n\nNode with value " << oldValue << " to update was not found";
}