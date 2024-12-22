#include "unrolled_linked_list.hpp"
#include<iostream>
#include<vector>
using namespace std;

void UnrolledLinkedList::display()
{
    Node* current = head;

    int nodeIndex = 1;

    while (current != nullptr)
    {
        cout << "Node " << nodeIndex << " : ";

        for (int element : current->elements) cout << element << " ";

        cout << endl;

        current = current->next;

        nodeIndex++;
    }
}