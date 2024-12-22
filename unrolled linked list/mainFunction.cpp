#include "unrolled_linked_list.hpp"
#include "insertAtBeginning.cpp"
#include "insertAtEnd.cpp"
#include "deleteFromBeginning.cpp"
#include "deleteFromEnd.cpp"
#include "searchNode.cpp"
#include "updateNode.cpp"
#include "display.cpp"
#include<iostream>
using namespace std;

int main()
{
    UnrolledLinkedList list;

    int choice, value, oldValue, newValue;

    while (true)
    {
        cout << "\n\nMAIN MENU\n\n";
        cout << "1. Insert at beginning";
        cout << "\n2. Insert at end";
        cout << "\n3. Delete from beginning";
        cout << "\n4. Delete from end";
        cout << "\n5. Search a node";
        cout << "\n6. Update a node";
        cout << "\n7. Display nodes";
        cout << "\n8. Exit";
        cout << "\n\nEnter your choice : ";
        cin >> choice;

        switch (choice)
        {
            case 1:

            cout << "\n\nEnter value to insert : ";
            cin >> value;
            list.insertAtBeginning(value);
            cout << "\n\n" << value << " successfully inserted in the beginning of the linked list";
            break;

            case 2:

            cout << "\n\nEnter value to insert : ";
            cin >> value;
            list.insertAtEnd(value);
            cout << "\n\n" << value << " successfully inserted in the beginning of the linked list";
            break;

            case 3:

            list.deleteFromBeginning();
            cout << "\n\nFirst element of the linked list successfully deleted";
            break;

            case 4:

            list.deleteFromEnd();
            cout << "\n\nLast element of the linked list successfully deleted";
            break;

            case 5:

            cout << "\n\nEnter value to search for : ";
            cin >> value;
            list.searchNode(value);
            break;

            case 6:

            cout << "\n\nEnter value to update : ";
            cin >> oldValue;

            cout << "\n\nEnter value that will replace it : ";
            cin >> newValue;

            list.updateNode(oldValue, newValue);
            break;

            case 7:

            cout << "\n\nNodes are : \n\n";
            list.display();
            break;

            case 8:

            cout << "\n\nProgram exited successfully";
            return 0;

            default: cout << "\n\nPlease enter a valid option";
        }
    }
}