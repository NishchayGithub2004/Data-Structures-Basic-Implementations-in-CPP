#include "unrolled_linked_list.hpp"
#include<iostream>
#include<vector>
using namespace std;

void UnrolledLinkedList::searchNode(int value)
{
    Node* current = head;

    while (current != nullptr)
    {
        auto it = find(current->elements.begin(), current->elements.end(), value);

        if (it != current->elements.end())
        {
            cout << "\n\nNode with value " << value << " is found";
            return;
        }

        current = current->next;
    }

    cout << "\n\nNode with value " << value << " is not found";
}